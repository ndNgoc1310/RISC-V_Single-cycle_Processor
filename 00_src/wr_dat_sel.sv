module wr_dat_sel
(
    input   logic   [31:0]  tmp_WriteDataM, ReadDataM_sel,
    input   logic   [4:0]   MemSrcM,
    output  logic   [31:0]  WriteDataM
);

// MemSrcD = {membD, memhD, lwD, membuD, memhuD}
always_comb
    case (MemSrcM)
        5'b10000:   WriteDataM = {ReadDataM_sel[31:8],  tmp_WriteDataM[7:0]};
        5'b01000:   WriteDataM = {ReadDataM_sel[31:16], tmp_WriteDataM[15:0]};
        5'b00100:   WriteDataM = tmp_WriteDataM;
        default:    WriteDataM = '0;
    endcase

endmodule:wr_dat_sel
