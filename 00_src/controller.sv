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
    .JumpD          (JumpD),
    .BranchD        (BranchD), 
    .MemWriteD      (MemWriteD),
    .ALUSrcD        (ALUSrcD),
    .ResultSrcD     (ResultSrcD),
    .ImmSrcD        (ImmSrcD),
    .ALUOp          (ALUOp)
);

aludec ad
(
    .opb5           (op[5]),
    .funct3         (funct3),
    .funct7b5       (funct7b5),
    .ALUOp          (ALUOp),
    .ALUSrcDb1      (ALUSrcD[1]),
    .ALUControlD    (ALUControlD)
);

// Branch conditions for different instructions
always_comb 
begin
    case(funct3)
        3'b000:  PCSrcE = ZeroE;            // beq:  branch if equal (zero=1)
        3'b001:  PCSrcE = ~ZeroE;           // bne:  branch if not equal (zero=0)
        3'b100:  PCSrcE = ALUResultEb0;     // blt:  branch if less than (slt=1)
        3'b101:  PCSrcE = ~ALUResultEb0;    // bge:  branch if greater/equal (slt=0)
        3'b110:  PCSrcE = ALUResultEb0;     // bltu: branch if less than unsigned (sltu=1)
        3'b111:  PCSrcE = ~ALUResultEb0;    // bgeu: branch if greater/equal unsigned (sltu=0)
        default: PCSrcE = 1'b0;
    endcase
end

// Decode SYSTEM instructions
assign Ecall =  (op == 7'b1110011) && (funct12 == 12'b000000000000);
assign Ebreak = (op == 7'b1110011) && (funct12 == 12'b000000000001);

endmodule:controller


