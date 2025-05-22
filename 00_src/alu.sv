`timescale 1ns/1ps

module alu
(
    input   logic   [31:0]  a, b,
    input   logic   [2:0]   ALUControl,
    output  logic   [31:0]  rslt,
    output  logic           zero
);

// ARITHMETIC UNITS
// Calculate Overflow
assign overflow = (~ALUControl[1]) & (a[31] ^ sum[31]) & (~(ALUControl[0] ^ a[31] ^ b[31]));

logic   [31:0] src_a, src_b, sum;
logic          cout, overflow;

// Calculate SUM
always_comb
    src_a = a;

mux_2 #(32) mux1
(
    .d0 (b),
    .d1 (~b),
    .s  (ALUControl[0]),
    .y  (src_b)
);

adder_nb #(32) add1
(
    .a      (src_a),
    .b      (src_b),
    .cin    (ALUControl[0]),
    .cout   (cout),
    .sum    (sum)
);

// Calculate Mux Entries
logic [31:0] entry [0:8];

always_comb
begin
    entry[0] = sum;
    entry[1] = sum;
    entry[4] = 32'b0;
    entry[5] = {31'b0, overflow ^ sum[31]};
    entry[6] = 32'b0;
    entry[7] = 32'b0;
end

// LOGICAL UNITS
and_nb #(32) and1
(
    .a      (a),
    .b      (b),
    .y      (entry[2])
);

or_nb #(32) or1
(
    .a      (a),
    .b      (b),
    .y      (entry[3])
);


//RESULT MUX
mux_8 #(32) mux2
(
    .d0     (entry[0]),
    .d1     (entry[1]),
    .d2     (entry[2]),
    .d3     (entry[3]),
    .d4     (entry[4]),
    .d5     (entry[5]),
    .d6     (entry[6]),
    .d7     (entry[7]),
    .s      (ALUControl[2:0]),
    .y      (rslt)
);

// ZERO DETECTION
assign zero = &(~rslt);

endmodule:alu

