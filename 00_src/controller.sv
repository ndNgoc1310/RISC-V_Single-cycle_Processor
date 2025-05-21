module controller
(
    input   logic   [6:0]   op,
    input   logic   [2:0]   funct3,
    input   logic           funct7b5,
    input   logic           ZeroE, BranchE, JumpE,
    output  logic   [1:0]   ResultSrcD,
    output  logic           MemWriteD,
    output  logic           PCSrcE, ALUSrcD,
    output  logic           RegWriteD, JumpD, BranchD,
    output  logic   [1:0]   ImmSrcD,
    output  logic   [2:0]   ALUControlD
);

logic   [1:0]   ALUOp;

maindec md
(
    .op         (op),
    .RegWriteD  (RegWriteD),
    .JumpD      (JumpD),
    .BranchD    (BranchD), 
    .MemWriteD  (MemWriteD),
    .ALUSrcD    (ALUSrcD),
    .ResultSrcD (ResultSrcD),
    .ImmSrcD    (ImmSrcD),
    .ALUOp      (ALUOp)
);

aludec ad
(
    .opb5           (op[5]),
    .funct3         (funct3),
    .funct7b5       (funct7b5),
    .ALUOp          (ALUOp),
    .ALUControlD    (ALUControlD)
);

assign PCSrcE = (BranchE & ZeroE) | JumpE;

endmodule:controller


