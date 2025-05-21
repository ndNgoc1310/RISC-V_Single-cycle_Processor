module dmem
(
    input   logic           clk, we,
    input   logic   [31:0]  a, wd,
    output  logic   [31:0]  rd
);

logic   [31:0]  RAM [63:0];
assign rd = RAM[a[5:0]]; // word aligned

always_ff @(posedge clk)
    if (we) RAM[a[5:0]] <= wd;

endmodule
