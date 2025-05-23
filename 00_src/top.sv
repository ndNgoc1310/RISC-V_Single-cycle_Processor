`timescale 1ns/1ps

module top
(
    input   logic           clk, rst,
    output  logic           Ecall, Ebreak,
    output  logic   [31:0]  WriteData, DataAddr,
    output  logic           MemWrite
);

logic   [31:0]  InstrF, pcF, ReadDataM, ALUResultM, WriteDataM;
logic           MemWriteM;

processor proc
(
    .clk            (clk),
    .rst            (rst),
    .Ecall          (Ecall),
    .Ebreak         (Ebreak),

    .i_InstrF       (InstrF),
    .o_pcF          (pcF),

    .o_MemWriteM    (MemWriteM),

    .i_ReadDataM    (ReadDataM),
    .o_ALUResultM   (ALUResultM),
    .o_WriteDataM   (WriteDataM)    
);

dmem dm
(
    .clk           (clk),
    .we            (MemWriteM),
    .a             (ALUResultM),
    .wd            (WriteDataM),
    .rd            (ReadDataM)
);

imem im
(
    .a              (pcF),
    .rd             (InstrF)
);

assign WriteData = WriteDataM;
assign DataAddr = ALUResultM;
assign MemWrite = MemWriteM;

endmodule:top


