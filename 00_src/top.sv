module top
(
    input   logic           clk, rst,
    output  logic   [31:0]  WriteData, DataAddr,
    output  logic           MemWrite
);

logic   [31:0]  InstrF, pcF, ReadDataM, ALUResultM, WriteDataM;
logic           MemWriteM;

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
    .a             (ALUResultM[5:0]),
    .wd            (WriteDataM),
    .rd            (ReadDataM)
);

imem im
(
    .a              (pcF[5:0]),
    .rd             (InstrF)
);

assign WriteData = WriteDataM;
assign DataAddr = ALUResultM;
assign MemWrite = MemWriteM;

endmodule:top


