`timescale 1ns/1ps

module top
(
    // Debugging regfile
    input  logic [4:0]  i_debug_addr,
    output logic [31:0] o_debug_data,

    input   logic           clk, rst,
    output  logic           Ecall, Ebreak,
    output  logic   [31:0]  WriteData, DataAddr,
    output  logic           MemWrite
);

logic   [31:0]  InstrF, pcF, ReadDataM, ALUResultM, WriteDataM;
logic           MemWriteM;

processor proc
(
    // Debugging regfile
    .i_debug_addr   (i_debug_addr),
    .o_debug_data   (o_debug_data),
    
    .clk            (clk),
    .rst            (rst),
    .Ecall          (Ecall),
    .Ebreak         (Ebreak),

    .i_InstrF       (InstrF),
    .o_pcF          (pcF),

    .i_ReadDataM    (ReadDataM),
    .o_MemWriteM    (MemWriteM),
    .o_ALUResultM   (ALUResultM),
    .o_WriteDataM   (WriteDataM)    
);

d_mem dm
(
    .clk           (clk),
    .we            (MemWriteM),
    .a             (ALUResultM),
    .wd            (WriteDataM),
    .rd            (ReadDataM)
);

i_mem im
(
    .a              (pcF),
    .rd             (InstrF)
);

assign WriteData = WriteDataM;
assign DataAddr = ALUResultM;
assign MemWrite = MemWriteM;

endmodule:top


