module lsu
(
    input   logic   [31:0]  ReadDataM, tmp_WriteDataM,
    input   logic   [2:0]   funct3M,
    output  logic   [31:0]  ReadDataM_sel, WriteDataM
);

// Load
always_comb
    case (funct3M)
        3'b000:   ReadDataM_sel = {{24{ReadDataM[7]}}, ReadDataM[7:0]};       // lb
        3'b001:   ReadDataM_sel = {{16{ReadDataM[15]}}, ReadDataM[15:0]};     // lh
        3'b010:   ReadDataM_sel = ReadDataM;                                  // lw
        3'b100:   ReadDataM_sel = {24'b0, ReadDataM[7:0]};                    // lbu
        3'b101:   ReadDataM_sel = {16'b0, ReadDataM[15:0]};                   // lhu
        default:  ReadDataM_sel = '0;
    endcase

// Store
always_comb
    case (funct3M)
        3'b000:   WriteDataM = {ReadDataM_sel[31:8],  tmp_WriteDataM[7:0]};     // sb
        3'b001:   WriteDataM = {ReadDataM_sel[31:16], tmp_WriteDataM[15:0]};    // sh
        3'b010:   WriteDataM = tmp_WriteDataM;                                  // sw
        default:  WriteDataM = '0;
    endcase

endmodule:lsu
