`timescale 1ns/1ps

module maindec
(
    input   logic   [6:0]   op,
    output  logic           RegWriteD, JumpD, BranchD, MemWriteD, 
    output  logic   [1:0]   ResultSrcD, ALUSrcD,
    output  logic   [2:0]   ImmSrcD,
    output  logic   [1:0]   ALUOp
);

logic [12:0] controls;

assign {RegWriteD, ImmSrcD, ALUSrcD, MemWriteD, ResultSrcD, BranchD, ALUOp, JumpD} = controls;

always_comb
    case(op)
    // RegWriteD_ImmSrcD_ALUSrcD_MemWriteD_ResultSrcD_BranchD_ALUOp_JumpD
        7'b0110011: controls = 13'b1_xxx_00_0_00_0_10_0; // R-type:      add, sub, and, or, xor, slt, sltu 
        7'b0010011: controls = 13'b1_000_01_0_00_0_10_0; // I-type ALU:  addi, andi, ori, xori, slti, sltiu
        7'b0000011: controls = 13'b1_000_01_0_01_0_00_0; // I-type Load: lw, lb, lh, lw, lbu, lhu
        7'b0100011: controls = 13'b0_001_01_1_00_0_00_0; // S-type:      sw, sh, sb 
        7'b1100011: controls = 13'b0_010_00_0_00_1_01_0; // B-type:      beq, bne, blt, bge, bltu, bgeu
        7'b1101111: controls = 13'b1_011_00_0_10_0_00_1; // jal
        7'b1100111: controls = 13'b1_000_01_0_10_0_00_1; // jalr
        7'b0110111: controls = 13'b1_100_01_0_00_0_11_0; // lui
        7'b0010111: controls = 13'b1_100_11_0_00_0_11_0; // auipc
        7'b1110011: controls = 13'b0_xxx_00_0_00_0_00_0; // ecall, ebreak
        default:    controls = 13'bx_xxx_xx_x_xx_x_xx_x; // illegal op

    endcase

endmodule:maindec


