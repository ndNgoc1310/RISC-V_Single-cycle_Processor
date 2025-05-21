module top
(
    input   logic           clk, rst,
    output  logic   [31:0]  InstrF, pcF, ReadDataM, ALUResultM, WriteDataM,
    output  logic           MemWriteM
);

processor proc
(
    .clk            (clk),
    .rst            (rst),

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

endmodule
