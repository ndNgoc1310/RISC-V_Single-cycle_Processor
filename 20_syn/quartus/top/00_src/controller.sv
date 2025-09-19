`timescale 1ns/1ps

module controller
(
    input   logic   [6:0]   op,
    input   logic   [2:0]   funct3,
    input   logic           funct7b5,
    input   logic   [11:0]  funct12,

    input   logic   [3:0]   Flag, // Flag = {Ovf, Carry, Neg, Zero} (Overflow, Carry, Negative, Zero)

    output  logic           RegWrite, MemWrite, ALUSrc,
    output  logic   [3:0]   ALUControl,
    output  logic   [1:0]   ResultSrc, 
    output  logic   [2:0]   ImmSrc,
    output  logic   [4:0]   LSType,
    
    output  logic   [1:0]   PCSrc,
    output  logic           Ecall, Ebreak
);

logic           Branch, Jump, Jumplr; 
logic   [1:0]   ALUOp;

// Main Decoder
main_dec md
(
    .op             (op),
    .RegWrite       (RegWrite),
    .ImmSrc         (ImmSrc),
    .ALUSrc         (ALUSrc), 
    .MemWrite       (MemWrite),
    .ResultSrc      (ResultSrc),
    .Branch         (Branch),
    .Jump           (Jump),
    .Jumplr         (Jumplr),
    .ALUOp          (ALUOp)
);

// ALU Decoder
alu_dec ad
(
    .ALUOp          (ALUOp),
    .funct3         (funct3),
    .opb5           (op[5]),
    .funct7b5       (funct7b5),
    .ALUControl     (ALUControl)
);

// Branch Unit
bru bru
(
    .funct3         (funct3),
    .Flag           (Flag),
    .Branch         (Branch),
    .Jump           (Jump),
    .Jumplr         (Jumplr),
    .PCSrc          (PCSrc)
);

lsu lsu
(
    .funct3         (funct3),
    .LSType         (LSType)
);

// Environment Unit
eu eu
(
    .op             (op),
    .funct12        (funct12),
    .Ecall          (Ecall),
    .Ebreak         (Ebreak)
);

endmodule:controller


