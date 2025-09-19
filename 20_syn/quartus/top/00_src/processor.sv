`timescale 1ns/1ps

module processor
(
    // System signals
    input   logic           clk, rst,
    output  logic           Ecall, Ebreak,

    // Data path - Instruction Memory
    input   logic   [31:0]  top_Instr,
    output  logic   [31:0]  top_pc,

    // Data path - Data Memory
    input   logic   [31:0]  top_ReadData,
    output  logic           top_MemWrite,
    output  logic   [31:0]  top_ALUResult, top_WriteData
);

// From/To Controller signals/buses
logic           RegWrite, MemWrite, ALUSrc; 
logic   [3:0]   ALUControl;
logic   [1:0]   ResultSrc;
logic   [2:0]   ImmSrc;
logic   [4:0]   LSType;

logic   [6:0]   op;
logic   [14:12] funct3;
logic           funct7b5;
logic   [11:0]  funct12;

logic           ResultSrcEb0;
logic   [1:0]   PCSrc;

logic   [3:0]   Flag; // Flag = {Ovf, Carry, Neg, Zero} (Overflow, Carry, Negative, Zero)

// From/To Instruction Memory signals/buses
logic   [31:0]  Instr;
logic   [31:0]  pc;

assign Instr = top_Instr;

// From/To Data Memory signals/buses
logic   [31:0]  ReadData;
logic   [31:0]  ALUResult, WriteData;

assign ReadData = top_ReadData;

controller ctrl
(
    .op            (op),
    .funct3        (funct3),
    .funct7b5      (funct7b5),
    .funct12       (funct12),
    .Flag          (Flag),
    .ResultSrc     (ResultSrc),
    .MemWrite      (MemWrite),
    .PCSrc         (PCSrc),
    .ALUSrc        (ALUSrc),
    .RegWrite      (RegWrite),
    .ImmSrc        (ImmSrc),
    .ALUControl    (ALUControl),
    .LSType        (LSType),
    .Ecall         (Ecall),
    .Ebreak        (Ebreak)
);

data_path dp
(
    // System signals
    .clk            (clk),
    .rst            (rst),

    // From/To Controller signals/buses 
    .RegWrite      (RegWrite),
    .ALUSrc        (ALUSrc),
    .LSType        (LSType),
    .ALUControl    (ALUControl),
    .ResultSrc     (ResultSrc),
    .ImmSrc        (ImmSrc),
    .op            (op),
    .funct3        (funct3),
    .funct7b5      (funct7b5),
    .funct12       (funct12),

    .PCSrc         (PCSrc),

    .Flag          (Flag),

    // From/To Instruction Memory signals/buses
    .Instr          (Instr),
    .pc             (pc),

    // From/To Data Memory signals/buses
    .ReadData      (ReadData),
    .ALUResult     (ALUResult),
    .WriteData     (WriteData)
);

assign top_pc = pc;
assign top_MemWrite = MemWrite;
assign top_ALUResult = ALUResult;
assign top_WriteData = WriteData;

endmodule:processor


