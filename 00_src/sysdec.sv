module sysdec
(
    input   logic   [6:0]   op,
    input   logic   [11:0]  funct12,
    output  logic           Ecall, Ebreak
);

// Decode SYSTEM instructions
assign Ecall =  (op == 7'b1110011) && (funct12 == 12'b000000000000);
assign Ebreak = (op == 7'b1110011) && (funct12 == 12'b000000000001);

endmodule:sysdec
