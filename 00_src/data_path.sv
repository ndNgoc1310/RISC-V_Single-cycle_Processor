`timescale 1ns/1ps

module data_path
(
    // System signals
    input   logic           clk, rst,

    // From/To Controller signals/buses
    input   logic           RegWriteD, MemWriteD, JumpD, BranchD, 
    input   logic   [3:0]   ALUControlD,
    input   logic   [1:0]   ResultSrcD, ALUSrcD, 
    input   logic   [2:0]   ImmSrcD, 
    output  logic   [6:0]   op,
    output  logic   [14:12] funct3,
    output  logic           funct7b5,
    output  logic   [11:0]  funct12,

    input   logic           PCSrcE,
    output  logic           JumpE, BranchE, ZeroE, ALUResultEb0,

    // From/To Hazard Unit signals/buses
    input   logic           StallF,

    input   logic           StallD, FlushD,
    output  logic   [4:0]   Rs1D, Rs2D,
    
    input   logic           FlushE, 
    input   logic   [1:0]   ForwardAE, ForwardBE,
    output  logic   [4:0]   Rs1E, Rs2E, RdE, 
    output  logic           ResultSrcEb0,

    output  logic           RegWriteM,
    output  logic   [4:0]   RdM,

    output  logic           RegWriteW,
    output  logic   [4:0]   RdW,

    // From/To Instruction Memory signals/buses
    input   logic   [31:0]  InstrF,
    output  logic   [31:0]  pcF,

    // From/To Data Memory signals/buses
    input   logic   [31:0]  ReadDataM,
    output  logic   [31:0]  ALUResultM, WriteDataM,
    output  logic           MemWriteM
 );

// Data Path Signals/Buses
// Fetch Stage (F)
logic   [31:0]  pcF0, PCPlus4F;

// Decode Stage (D)
logic   [31:0]  InstrD, pcD, ImmExtD, PCPlus4D;
logic   [31:0]  Read1D, Read2D;
logic   [4:0]   RdD;

assign op = InstrD[6:0];
assign funct3 = InstrD[14:12];
assign funct7b5 = InstrD[30];
assign funct12 = InstrD[31:20];

// Execute Stage (E)
logic   [31:0]  Read1E, Read2E, pcE, ImmExtE, PCPlus4E, PCTargetE, SrcAE, SrcBE, ALUResultE, WriteDataE;
logic           RegWriteE, MemWriteE;
logic   [1:0]   ResultSrcE, ALUSrcE;
logic   [3:0]   ALUControlE;

assign ALUResultEb0 = ALUResultE[0];
assign ResultSrcEb0 = ResultSrcE[0];

// Memory Stage (M)
logic   [31:0]  PCPlus4M;
logic   [1:0]   ResultSrcM;

// Write Back Stage (W)
logic   [1:0]   ResultSrcW;
logic   [31:0]  ALUResultW, ReadDataW, PCPlus4W, ResultW; 

assign Rs1D = InstrD[19:15];
assign Rs2D = InstrD[24:20];
assign RdD  = InstrD[11:7];

// Pipeline Registers
flop_r #(.WIDTH(32)) Freg
(
    .clk    (clk),
    .rst    (rst),
    .en     (~StallF),
    .clr    (1'b0),
    .d      (pcF0),
    .q      (pcF)
);

flop_r #(.WIDTH(96)) Dreg
(
    .clk    (clk),
    .rst    (rst),
    .en     (~StallD),
    .clr    (FlushD),
    .d      ({InstrF, pcF, PCPlus4F}),
    .q      ({InstrD, pcD, PCPlus4D})
);

flop_r #(.WIDTH(185)) Ereg
(
    .clk    (clk),
    .rst    (rst),
    .en     (1'b1),
    .clr    (FlushE),
    .d      ({RegWriteD, ResultSrcD, MemWriteD, JumpD, BranchD, 
                ALUControlD, ALUSrcD, Read1D, Read2D, pcD, Rs1D, Rs2D, RdD,
                ImmExtD, PCPlus4D}),
    .q      ({RegWriteE, ResultSrcE, MemWriteE, JumpE, BranchE, 
                ALUControlE, ALUSrcE, Read1E, Read2E, pcE, Rs1E, Rs2E, RdE,
                ImmExtE, PCPlus4E})
);

logic [31:0] tmp_WriteDataM;

flop_r #(.WIDTH(105)) Mreg
(
    .clk    (clk),
    .rst    (rst),
    .en     (1'b1),
    .clr    (1'b0),
    .d      ({RegWriteE, ResultSrcE, MemWriteE, ALUResultE, WriteDataE, RdE, PCPlus4E}),
    .q      ({RegWriteM, ResultSrcM, MemWriteM, ALUResultM, tmp_WriteDataM, RdM, PCPlus4M})
);

always_comb 
begin
    case(funct3)
        3'b000:     WriteDataM = {ReadDataM[31:8],  tmp_WriteDataM[7:0]};     // sb
        3'b001:     WriteDataM = {ReadDataM[31:16], tmp_WriteDataM[15:0]};   // sh
        3'b010:     WriteDataM = tmp_WriteDataM;                                 // sw
        default:    WriteDataM = 32'bx;
    endcase
end

logic [31:0] tmp_ReadDataW;

flop_r #(.WIDTH(104)) Wreg
(
    .clk    (clk),
    .rst    (rst),
    .en     (1'b1),
    .clr    (1'b0),
    .d      ({RegWriteM, ResultSrcM, ALUResultM, ReadDataM, RdM, PCPlus4M}),
    .q      ({RegWriteW, ResultSrcW, ALUResultW, tmp_ReadDataW, RdW, PCPlus4W})
);

always_comb 
begin
    case(funct3)
        3'b000:  ReadDataW = {{24{tmp_ReadDataW[7]}}, tmp_ReadDataW[7:0]};      // lb
        3'b001:  ReadDataW = {{16{tmp_ReadDataW[15]}}, tmp_ReadDataW[15:0]};    // lh
        3'b010:  ReadDataW = tmp_ReadDataW;                                     // lw
        3'b100:  ReadDataW = {24'b0, tmp_ReadDataW[7:0]};                       // lbu
        3'b101:  ReadDataW = {16'b0, tmp_ReadDataW[15:0]};                      // lhu
        default: ReadDataW = 32'bx;
    endcase
end

// Multiplexers
mux_2 #(.WIDTH(32)) mux_2
(
    .d0    (PCPlus4F),
    .d1    (PCTargetE),
    .s     (PCSrcE),    
    .y     (pcF0)
);

logic [31:0] tmp_SrcAE;

mux_3 #(.WIDTH(32)) srcAmux1
(
    .d0    (Read1E),
    .d1    (ResultW),
    .d2    (ALUResultM),
    .s     (ForwardAE),
    .y     (tmp_SrcAE)
);

mux_2 #(.WIDTH(32)) srcAmux2
(
    .d0    (tmp_SrcAE),
    .d1    (pcE),
    .s     (ALUSrcE[1]),
    .y     (SrcAE)
);

mux_3 #(.WIDTH(32)) srcBmux1
(
    .d0    (Read2E),
    .d1    (ResultW),
    .d2    (ALUResultM),
    .s     (ForwardBE),
    .y     (WriteDataE)
);

mux_2 #(.WIDTH(32)) srcBmux2
(
    .d0    (WriteDataE),
    .d1    (ImmExtE),
    .s     (ALUSrcE[0]),
    .y     (SrcBE)
);

mux_3 #(.WIDTH(32)) rsltmux
(
    .d0    (ALUResultW),
    .d1    (ReadDataW),
    .d2    (PCPlus4W),
    .s     (ResultSrcW),
    .y     (ResultW)
);

// Adders
logic PCplus4cout;

adder_nb #(.WIDTH(32)) PCplus4
(
    .a      (pcF),
    .b      (32'd4),
    .cin    (1'b0),
    .cout   (PCplus4cout),
    .sum    (PCPlus4F)
);

logic PCplusbranchcout;

adder_nb #(.WIDTH(32)) PCplusbranch
(
    .a      (pcE),
    .b      (ImmExtE),
    .cin    (1'b0),
    .cout   (PCplusbranchcout),
    .sum    (PCTargetE)
);

// ALU
// Debugging
logic [31:0] db_src_b, db_sum;
logic db_cout, db_overflow;

alu ALU
(
    // Debugging
    .db_src_b(db_src_b),
    .db_sum(db_sum),
    .db_cout(db_cout),
    .db_overflow(db_overflow),
    
    .a          (SrcAE),
    .b          (SrcBE),
    .ALUControl (ALUControlE),
    .rslt       (ALUResultE),
    .zero       (ZeroE)
);

// Immediate Extender
extender ext
(
    .instr  (InstrD[31:7]),
    .immsrc (ImmSrcD),
    .immext (ImmExtD)
);

// Register File
reg_file rf
(
    .clk            (~clk),
    .rst            (rst),
    .i_rd_addr_0    (InstrD[19:15]),
    .i_rd_addr_1    (InstrD[24:20]),
    .i_wr_addr      (RdW),
    .i_wr_en        (RegWriteW),
    .i_wr_dat       (ResultW),
    .o_rd_dat_0     (Read1D),
    .o_rd_dat_1     (Read2D)
);

endmodule:data_path


