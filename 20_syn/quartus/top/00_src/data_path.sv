`timescale 1ns/1ps

module data_path
(
    // System signals
    input   logic           clk, rst,

    // From/To Controller signals/buses
    input   logic           RegWrite, ALUSrc, 
    input   logic   [3:0]   ALUControl,
    input   logic   [1:0]   ResultSrc, 
    input   logic   [2:0]   ImmSrc,
    input   logic   [4:0]   LSType,

    output  logic   [6:0]   op,
    output  logic   [14:12] funct3,
    output  logic           funct7b5,
    output  logic   [11:0]  funct12,

    input   logic   [1:0]   PCSrc,

    output  logic   [3:0]   Flag, // Flag = {Ovf, Carry, Neg, Zero} (Overflow, Carry, Negative, Zero)

    // From/To Instruction Memory signals/buses
    input   logic   [31:0]  Instr,
    output  logic   [31:0]  pc,

    // From/To Data Memory signals/buses
    input   logic   [31:0]  ReadData,
    output  logic   [31:0]  ALUResult, WriteData
 );

// Data Path Signals/Buses
// Fetch Stage (F)
logic   [31:0]  pc0, PCPlus4;

// Decode Stage (D)
logic   [31:0]  ImmExt;
logic   [31:0]  SrcA, Read2;

assign op = Instr[6:0];
assign funct3 = Instr[14:12];
assign funct7b5 = Instr[30];
assign funct12 = Instr[31:20];

// Execute Stage (E)
logic   [31:0]  PCTarget, ScrA, SrcB;

// Memory Stage (M)
logic   [31:0]  ReadData_result;

// Write Back Stage (W)
logic   [31:0]  Result; 

// Instruction Register
flop_r #(.WIDTH(32)) Freg
(
    .clk    (clk),
    .rst    (rst),
    .en     (1'b1),
    .clr    (1'b0),
    .d      (pc0),
    .q      (pc)
);

// Multiplexers
mux_4 #(.WIDTH(32)) PCmux
(
    .d0    (PCPlus4),
    .d1    (PCTarget),
    .d2    (ALUResult),
    .d3    ('0),
    .s     (PCSrc),    
    .y     (pc0)
);

mux_2 #(.WIDTH(32)) srcBmux
(
    .d0    (Read2),
    .d1    (ImmExt),
    .s     (ALUSrc),
    .y     (SrcB)
);

mux_4 #(.WIDTH(32)) rsltmux
(
    .d0    (ALUResult),
    .d1    (ReadData_result),
    .d2    (PCPlus4),
    .d3    ('0),
    .s     (ResultSrc),
    .y     (Result)
);

// Mem Read/ Write Unit
mrwu mrwu
(
    .ReadData           (ReadData),
    .WriteData_raw      (Read2),
    .LSType             (LSType),
    .ReadData_result    (ReadData_result),
    .WriteData          (WriteData)
);

// Adders
logic PCplus4cout;

adder_nb #(.WIDTH(32)) PCplus4
(
    .a      (pc),
    .b      (32'd4),
    .cin    (1'b0),
    .cout   (PCplus4cout),
    .sum    (PCPlus4)
);

logic PCplusbranchcout;

adder_nb #(.WIDTH(32)) PCplusbranch
(
    .a      (pc),
    .b      (ImmExt),
    .cin    (1'b0),
    .cout   (PCplusbranchcout),
    .sum    (PCTarget)
);

// ALU
alu ALU
(
    .a          (SrcA),
    .b          (SrcB),
    .ALUControl (ALUControl),
    .rslt       (ALUResult),
    .flag       (Flag)
);

// Immediate Extender
extender ext
(
    .instr  (Instr[31:7]),
    .immsrc (ImmSrc),
    .immext (ImmExt)
);

// Register File
reg_file rf
(
    .clk            (clk),
    .rst            (rst),
    .i_rd_addr_0    (Instr[19:15]),
    .i_rd_addr_1    (Instr[24:20]),
    .i_wr_addr      (Instr[11:7]),
    .i_wr_en        (RegWrite),
    .i_wr_dat       (Result),
    .o_rd_dat_0     (SrcA),
    .o_rd_dat_1     (Read2)
);

endmodule:data_path


