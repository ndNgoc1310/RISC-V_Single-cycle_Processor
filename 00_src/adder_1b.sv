module adder_1b
(
        input   logic   a, b, cin,
        output  logic   sum, cout
);

assign sum = a ^ b ^ cin;
assign cout = (a & b) | (cin & (a ^ b));

endmodule:adder_1b
