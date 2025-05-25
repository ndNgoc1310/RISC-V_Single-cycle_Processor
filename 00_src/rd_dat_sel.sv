module rd_dat_sel
(
    input   logic   [31:0]  ReadDataM,
    input   logic   [4:0]   MemSrcM,
    output  logic   [31:0]  ReadDataM_sel
);

// MemSrcD = {membD, memhD, lwD, membuD, memhuD}
always_comb
    case (MemSrcM)
        5'b10000:   ReadDataM_sel = {{24{ReadDataM[7]}}, ReadDataM[7:0]};   // lb
        5'b01000:   ReadDataM_sel = {{16{ReadDataM[15]}}, ReadDataM[15:0]}; // lh
        5'b00100:   ReadDataM_sel = ReadDataM;                                  // lw
        5'b00010:   ReadDataM_sel = {24'b0, ReadDataM[7:0]};                    // lbu
        5'b00001:   ReadDataM_sel = {16'b0, ReadDataM[15:0]};                   // lhu
        default:    ReadDataM_sel = '0;
    endcase

endmodule:rd_dat_sel
