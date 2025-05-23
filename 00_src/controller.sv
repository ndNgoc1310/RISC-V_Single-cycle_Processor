`timescale 1ns/1ps

module controller
(
    input   logic   [6:0]   op,
    input   logic   [2:0]   funct3,
    input   logic           funct7b5,
    input   logic           ZeroE, BranchE, JumpE, ALUResultEb0,
    input   logic   [11:0]  funct12,

    output  logic   [1:0]   ResultSrcD, ALUSrcD,
    output  logic           MemWriteD,
    output  logic           PCSrcE,
    output  logic           RegWriteD, JumpD, BranchD,
    output  logic   [2:0]   ImmSrcD,
    output  logic   [3:0]   ALUControlD,
    output  logic           Ecall, Ebreak
);

logic   [1:0]   ALUOp;

maindec md
(
    .op             (op),
    .RegWriteD      (RegWriteD),
    .ImmSrcD        (ImmSrcD),
    .ALUSrcD        (ALUSrcD), 
    .MemWriteD      (MemWriteD),
    .ResultSrcD     (ResultSrcD),
    .BranchD        (BranchD),
    .ALUOp          (ALUOp),
    .JumpD          (JumpD)
);

aludec ad
(
    .ALUOp          (ALUOp),
    .funct3         (funct3),
    .opb5           (op[5]),
    .funct7b5       (funct7b5),
    .ALUSrcDb1      (ALUSrcD[1]),
    .ALUControlD    (ALUControlD)
);

branchdec bd
(
    .op             (op),
    .funct3         (funct3),
    .ZeroE          (ZeroE),
    .ALUResultEb0   (ALUResultEb0),
    .PCSrcE         (PCSrcE)
);

sysdec sd
(
    .op             (op),
    .funct12        (funct12),
    .Ecall          (Ecall),
    .Ebreak         (Ebreak)
);

endmodule:controller


