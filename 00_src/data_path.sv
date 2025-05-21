module data_path
(
    // System signals
    input   logic           clk, rst,

    // From/To Controller signals/buses
    input   logic           RegWriteD, MemWriteD, JumpD, BranchD, ALUSrcD, 
    input   logic   [2:0]   ALUControlD,
    input   logic   [1:0]   ResultSrcD, ImmSrcD, 
    output  logic   [31:0]  InstrD,

    input   logic           PCSrcE,
    output  logic           JumpE, BranchE, ZeroE,

    // From/To Hazard Unit signals/buses
    input   logic           StallF,

    input   logic           StallD, FlushD,
    output  logic   [4:0]   Rs1D, Rs2D,
    
    input   logic           ResultSrcEb0, FlushE, 
    input   logic   [1:0]   ForwardAE, ForwardBE,
    output  logic   [4:0]   Rs1E, Rs2E, RdE, 

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
logic   [31:0]  pcD, ImmExtD, PCPlus4D;
logic   [31:0]  Read1D, Read2D;
logic   [4:0]   RdD;

// Execute Stage (E)
logic   [31:0]  Read1E, Read2E, pcE, ImmExtE, PCPlus4E, PCTargetE, SrcAE, SrcBE, ALUResultE, WriteDataE;
logic           RegWriteE, MemWriteE, ALUSrcE;
logic   [1:0]   ResultSrcE;
logic   [2:0]   ALUControlE;

// Memory Stage (M)
logic   [31:0]  PCPlus4M;
logic   [1:0]   ResultSrcM;

// Write Back Stage (W)
logic   [1:0]   ResultSrcW;
logic   [31:0]  ALUResultW, ReadDataW, PCPlus4W, ResultW; 

assign Rs1D = InstrD[19:15];
assign Rs2D = InstrD[24:20];
always_comb
    RdD  = InstrD[11:7];

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

flop_r #(.WIDTH(105)) Mreg
(
    .clk    (clk),
    .rst    (rst),
    .en     (1'b1),
    .clr    (1'b0),
    .d      ({RegWriteE, ResultSrcE, MemWriteE, ALUResultE, WriteDataE, RdE, PCPlus4E}),
    .q      ({RegWriteM, ResultSrcM, MemWriteM, ALUResultM, WriteDataM, RdM, PCPlus4M})
);

flop_r #(.WIDTH(104)) Wreg
(
    .clk    (clk),
    .rst    (rst),
    .en     (1'b1),
    .clr    (1'b0),
    .d      ({RegWriteM, ResultSrcM, ALUResultM, ReadDataM, RdM, PCPlus4M}),
    .q      ({RegWriteW, ResultSrcW, ALUResultW, ReadDataW, RdW, PCPlus4W})
);

// Multiplexers
mux_2 #(.WIDTH(32)) PCmux
(
    .d0    (PCPlus4F),
    .d1    (PCTargetE),
    .s     (PCSrcE),
    .y     (pcF0)
);

mux_3 #(.WIDTH(32)) srcAmux
(
    .d0    (Read1E),
    .d1    (ResultW),
    .d2    (ALUResultM),
    .s     (ForwardAE),
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
    .s     (ALUSrcE),
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
adder #(.WIDTH(32)) PCplus4
(
    .a      (pcF),
    .b      (32'd4),
    .y      (PCPlus4F)
);

adder #(.WIDTH(32)) PCplusbranch
(
    .a      (pcE),
    .b      (ImmExtE),
    .y      (PCTargetE)
);

// ALU
adder #(.WIDTH(32)) ALU
(
    .a      (SrcAE),
    .b      (SrcBE),
    .y      (ALUResultE)
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

endmodule
