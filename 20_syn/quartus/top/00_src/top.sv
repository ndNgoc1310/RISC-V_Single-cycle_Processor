`timescale 1ns/1ps

module top
(
    // System
    input   logic           clk, rst,
    output  logic           Ecall, Ebreak
);

// Processor - Instruction Memory
logic   [31:0]  top_pc, top_Instr;

// Processor - Data Memory
logic   [31:0]  top_ReadData, top_WriteData, top_ALUResult;
logic           top_MemWrite;

// assign o_ReadDataM = top_ReadData;
// assign o_WriteDataM = top_WriteData;
// assign o_ALUResultM = top_ALUResult;
// assign o_MemWriteM = top_MemWrite;

processor proc
(
    .clk            (clk),
    .rst            (rst),
    .Ecall          (Ecall),
    .Ebreak         (Ebreak),

    .top_Instr      (top_Instr),
    .top_pc         (top_pc),

    .top_ReadData   (top_ReadData),
    .top_MemWrite   (top_MemWrite),
    .top_ALUResult  (top_ALUResult),
    .top_WriteData  (top_WriteData)    
);

d_mem dm
(
    .clk           (clk),
    .we            (top_MemWrite),
    .a             (top_ALUResult),
    .wd            (top_WriteData),
    .rd            (top_ReadData)
);

i_mem im
(
    .a              (top_pc),
    .rd             (top_Instr)
);

endmodule:top


