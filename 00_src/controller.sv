`timescale 1ns/1ps

module controller
(
    input   logic   [6:0]   opD,
    input   logic   [2:0]   funct3D,
    input   logic           funct7Db5,
    input   logic   [11:0]  funct12D,

    input   logic           ZeroE, BranchE, JumpE, ALUResultEb0,

    output  logic           RegWriteD, MemWriteD, JumpD, BranchD,
    output  logic   [3:0]   ALUControlD,
    output  logic   [1:0]   ResultSrcD, ALUSrcD,
    output  logic   [2:0]   ImmSrcD,
    output  logic   [4:0]   MemSrcD, // MemSrcD = {membD, memhD, lwD, membuD, memhuD}
    
    output  logic           PCSrcE,
    output  logic           Ecall, Ebreak
);

logic   [1:0]   ALUOp;

main_dec md
(
    .opD            (opD),
    .RegWriteD      (RegWriteD),
    .ImmSrcD        (ImmSrcD),
    .ALUSrcD        (ALUSrcD), 
    .MemWriteD      (MemWriteD),
    .ResultSrcD     (ResultSrcD),
    .BranchD        (BranchD),
    .ALUOp          (ALUOp),
    .JumpD          (JumpD)
);

alu_dec ad
(
    .ALUOp          (ALUOp),
    .funct3D        (funct3D),
    .opDb5          (opD[5]),
    .funct7Db5      (funct7Db5),
    .ALUSrcDb1      (ALUSrcD[1]),
    .ALUControlD    (ALUControlD)
);

br_dec bd
(
    .funct3D        (funct3D),
    .ZeroE          (ZeroE),
    .BranchE        (BranchE),
    .JumpE          (JumpE),
    .ALUResultEb0   (ALUResultEb0),
    .PCSrcE         (PCSrcE)
);

sys_dec sd
(
    .opD            (opD),
    .funct12D       (funct12D),
    .Ecall          (Ecall),
    .Ebreak         (Ebreak)
);

mem_dec memd
(
    .funct3D    (funct3D),
    .MemSrcD    (MemSrcD)   // MemSrcD = {membD, memhD, lwD, membuD, memhuD}
);

endmodule:controller


