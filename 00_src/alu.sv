module alu
(
    input   logic   [31:0]  a, b,
    input   logic   [2:0]   ALUControl,
    output  logic   [31:0]  rslt,
    output  logic           zero, overflow
);

logic   [31:0] src_a, src_b, sum;
logic          cout;

always_comb
    src_a = a;

mux_2 #(32) m1
(
    .d0 (b),
    .d1 (~b),
    .s  (ALUControl[0]),
    .y  (src_b)
);

adder_nb #(32) a1
(
    .a      (src_a),
    .b      (src_b),
    .cin    (ALUControl[0]),
    .cout   (cout),
    .sum    (sum)
);

assign overflow = (~ALUControl[1]) & (a[31] ^ b[31]) & (~(ALUControl[0] ^ a[31] ^ b[31]));

mux_8 #(32) m2
(
    .d0     (sum),
    .d1     (sum),
    .d2     (a & b),
    .d3     (a | b),
    .d4     ('b0),
    .d5     ({31'b0, overflow ^ sum[31]}),
    .d6     ('b0),
    .d7     ('b0),
    .s      (ALUControl[2:0]),
    .y      (rslt)
);

assign zero = &(~rslt);

endmodule:alu

