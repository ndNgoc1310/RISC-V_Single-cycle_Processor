`timescale 1ns/1ps

module main_dec
(
    input   logic   [6:0]   op,
    output  logic           RegWrite, Jump, Jumplr, Branch, MemWrite, ALUSrc,
    output  logic   [1:0]   ResultSrc,
    output  logic   [2:0]   ImmSrc,
    output  logic   [1:0]   ALUOp
);

logic [12:0] controls;

assign {RegWrite, ImmSrc, ALUSrc, MemWrite, ResultSrc, Branch, ALUOp, Jump, Jumplr} = controls;

always_comb
    case(op)
    // RegWrite_ImmSrc_ALUSrc_MemWrite_ResultSrc_BranchD_ALUOp_JumpD_JumplrD
        7'b0110011: controls = 13'b1_xxx_0_0_00_0_10_0_0; // R-type 
        7'b0010011: controls = 13'b1_000_1_0_00_0_10_0_0; // I-type ALU
        7'b0000011: controls = 13'b1_000_1_0_01_0_00_0_0; // I-type Load
        7'b0100011: controls = 13'b0_001_1_1_x0_0_00_0_0; // S-type
        7'b1100011: controls = 13'b0_010_0_0_x0_1_01_0_0; // B-type
        7'b1101111: controls = 13'b1_011_x_0_10_0_xx_1_0; // J-type
        7'b1100111: controls = 13'b1_000_1_0_10_0_10_0_1; // I-type jalr
        7'b0110111: controls = 13'b1_100_1_0_00_0_11_0_0; // U-type lui
        7'b0010111: controls = 13'b1_100_x_0_11_0_xx_0_0; // U-type auipc
        7'b1110011: controls = 13'b0_xxx_x_0_x0_0_xx_0_0; // I-type ecall, ebreak
        default:    controls = 13'b0_xxx_x_0_00_0_xx_0_0; // illegal op (make sure to disable register write, memory write, branch, and jump)

    endcase

endmodule:main_dec


