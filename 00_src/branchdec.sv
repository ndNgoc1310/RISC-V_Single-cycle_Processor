module branchdec
(
    input  logic [6:0] op,
    input  logic [2:0] funct3,
    input  logic ZeroE,
    input  logic ALUResultEb0,
    output logic PCSrcE
);

always_comb 
begin
    if (op == 7'b1100011) // branch 
        case(funct3)
            3'b000:  PCSrcE = ZeroE;            // beq:  branch if equal (zero=1)
            3'b001:  PCSrcE = ~ZeroE;           // bne:  branch if not equal (zero=0)
            3'b100:  PCSrcE = ALUResultEb0;     // blt:  branch if less than (slt=1)
            3'b101:  PCSrcE = ~ALUResultEb0;    // bge:  branch if greater/equal (slt=0)
            3'b110:  PCSrcE = ALUResultEb0;     // bltu: branch if less than unsigned (sltu=1)
            3'b111:  PCSrcE = ~ALUResultEb0;    // bgeu: branch if greater/equal unsigned (sltu=0)
            default: PCSrcE = 1'b0;
        endcase
    else if (op == 7'b1101111 || op == 7'b1100111) // jump
        PCSrcE = 1'b1; // always branch
    else    
        PCSrcE = 1'b0; // not a branch nor jump
end
endmodule:branchdec
