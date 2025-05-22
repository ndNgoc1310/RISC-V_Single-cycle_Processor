`timescale 1ns/1ps

module alu
(
    // Debugging
    output  logic   [31:0]  db_src_b, db_sum,
    output  logic           db_cout, db_overflow,

    input   logic   [31:0]  a, b,
    input   logic   [3:0]   ALUControl,
    output  logic   [31:0]  rslt,
    output  logic           zero
);

// FLAGS    
logic   overflow;
assign overflow = (~ALUControl[1]) & (a[31] ^ sum[31]) & (~(ALUControl[0] ^ a[31] ^ b[31]));

// ARITHMETIC UNITS
logic   [31:0] src_b, sum;
logic          cout;

// Debugging
assign db_src_b = src_b;
assign db_sum = sum;
assign db_cout = cout;
assign db_overflow = overflow;

// Calculate SUM
mux_2 #(32) mux1
(
    .d0 (b),
    .d1 (~b),
    .s  (ALUControl[0]),
    .y  (src_b)
);

adder_nb #(32) add1
(
    .a      (a),
    .b      (src_b),
    .cin    (ALUControl[0]),
    .cout   (cout),
    .sum    (sum)
);

// Calculate Mux Entries
logic [31:0] entry [0:15];

always_comb
begin
    entry[0] = sum;                             // ADD
    entry[1] = sum;                             // SUB
    entry[5] = {31'b0, overflow ^ sum[31]};     // SLT - result is 1 if a < b signed
    entry[9] = {31'b0, cout};                   // SLTU - result is 1 if a < b unsigned
    entry[10] = sum & ~32'h1;                   // JALR: (rs1 + imm) & ~1 (to clear LSB)
    entry[11] = b;                              // LUI: pass immediate directly
    entry[12] = sum;                            // AUIPC: PC + imm
    zero = &(~rslt);                            // Zero detection
end

// LOGICAL UNITS
and_nb #(32) and1   // AND
(
    .a      (a),
    .b      (b),
    .y      (entry[2])
);

or_nb #(32) or1     // OR
(
    .a      (a),
    .b      (b),
    .y      (entry[3])
);

xor_nb #(32) xor1   // XOR
(
    .a      (a),
    .b      (b),
    .y      (entry[4])
);

// SHIFT UNITS
shifter_l_l_nb #(32) sll1   // SLL
(
    .a      (a),
    .shamt  (b[4:0]),
    .y      (entry[6])
);

shifter_r_l_nb #(32) srl1   // SRL
(
    .a      (a),
    .shamt  (b[4:0]),
    .y      (entry[7])
);

shifter_r_a_nb #(32) sra1   // SRA
(
    .a      (a),
    .shamt  (b[4:0]),
    .y      (entry[8])
);

//RESULT MUX
mux_16 #(32) mux2
(
    .d0     (entry[0]),     // ADD
    .d1     (entry[1]),     // SUB
    .d2     (entry[2]),     // AND
    .d3     (entry[3]),     // OR
    .d4     (entry[4]),     // XOR
    .d5     (entry[5]),     // SLT
    .d6     (entry[6]),     // SLL
    .d7     (entry[7]),     // SRL
    .d8     (entry[8]),     // SRA
    .d9     (entry[9]),     // SLTU
    .d10    (entry[10]),    // JALR
    .d11    (entry[11]),
    .d12    (entry[12]),
    .d13    (entry[13]),
    .d14    (entry[14]),
    .d15    (entry[15]),
    .s      (ALUControl[3:0]),
    .y      (rslt)
);

endmodule:alu

