module flop_f
#(parameter WIDTH = 8)

(
    input   logic               clk, rst, en, clr,
    input   logic   [WIDTH-1:0] d,
    output  logic   [WIDTH-1:0] q
);

always_ff @(negedge clk, posedge rst)
    if      (rst)   q <= 0;
    else if (clr)   q <= 0;
    else if (en)    q <= d;

endmodule:flop_f


