module bru
(
    input  logic [2:0]  funct3,
    input  logic        Branch, Jump, Jumplr,
    input  logic [3:0]  Flag, // Flag = {Ovf, Carry, Neg, Zero} (Overflow, Carry, Negative, Zero)
    
    output logic [1:0]  PCSrc
);

logic cond;
logic Ovf, Carry, Neg, Zero; // Unpack the flags
assign {Ovf, Carry, Neg, Zero} = Flag; // Unpack the flags

assign PCSrc[0] = (Jump | (Branch & cond)) & ~Jumplr;
assign PCSrc[1] = Jumplr;

// PCSrc = 00: PC += 4
//          01: PC += 4 + imm (branch taken)
//          10: PC += rs1 + imm (jalr)

always_comb 
begin
    case(funct3)
        3'b000:  cond = Zero;           // beq
        3'b001:  cond = ~Zero;          // bne
        3'b100:  cond = (Neg ^ Ovf);    // blt
        3'b101:  cond = ~(Neg ^ Ovf);   // bge
        3'b110:  cond = Carry;          // bltu
        3'b111:  cond = ~Carry;         // bgeu
        default: cond = 1'b0;           // illegal
    endcase
end
endmodule:bru
