module mem_dec
(
    input   logic   [2:0]   funct3D,
    output  logic   [4:0]   MemSrcD
);

// MemSrcD = {membD, memhD, lwD, membuD, memhuD}
mux_8 #(5) memmux
(
    .d0 (5'b1_0_0_0_0), // lb, sb
    .d1 (5'b0_1_0_0_0), // lh, sh
    .d2 (5'b0_0_1_0_0), // lw, sw
    .d3 ('0),
    .d4 (5'b0_0_0_1_0), // lbu
    .d5 (5'b0_0_0_0_1), // lhu
    .d6 ('0),
    .d7 ('0),
    .s  (funct3D),
    .y  (MemSrcD)
);

endmodule:mem_dec
