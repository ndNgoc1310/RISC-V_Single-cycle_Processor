`timescale 1ns/1ps

module imem
#(
    parameter   ADDR_WIDTH = 6,
    parameter   RAM_DEPTH = 64
)

(
	input	logic	[ADDR_WIDTH-1:0]	a,
	output	logic	[31:0]				rd
);

logic	[31:0]	RAM	[RAM_DEPTH-1:0];

initial
	$readmemh("riscvtest.txt", RAM);

assign rd = RAM[a[ADDR_WIDTH-1:0]]; // word aligned

endmodule:imem


