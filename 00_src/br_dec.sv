module br_dec
(
    input  logic [2:0] funct3D,
    input  logic ZeroE, BranchE, JumpE,
    input  logic ALUResultEb0,
    output logic PCSrcE
);

always_comb 
begin
    if (BranchE)
        case(funct3D)
            3'b000:  PCSrcE = ZeroE;            // beq:  branch if equal (zero=1)
            3'b001:  PCSrcE = ~ZeroE;           // bne:  branch if not equal (zero=0)
            3'b100:  PCSrcE = ALUResultEb0;     // blt:  branch if less than (slt=1)
            3'b101:  PCSrcE = ~ALUResultEb0;    // bge:  branch if greater/equal (slt=0)
            3'b110:  PCSrcE = ALUResultEb0;     // bltu: branch if less than unsigned (sltu=1)
            3'b111:  PCSrcE = ~ALUResultEb0;    // bgeu: branch if greater/equal unsigned (sltu=0)
            default: PCSrcE = 1'b0;
        endcase
    else if (JumpE)  PCSrcE = 1'b1;
    else             PCSrcE = 1'b0; // not a branch nor jump
end
endmodule:br_dec
