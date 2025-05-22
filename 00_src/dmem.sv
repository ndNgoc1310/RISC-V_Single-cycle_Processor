`timescale 1ns/1ps

module dmem
#(
    parameter   ADDR_WIDTH = 6,
    parameter   RAM_DEPTH = 64
)

(
    input   logic                       clk, we,
    input   logic   [ADDR_WIDTH-1:0]    a,
    input   logic   [31:0]              wd,    
    output  logic   [31:0]              rd
);

logic   [31:0]  RAM [RAM_DEPTH-1:0];
assign rd = RAM[a[ADDR_WIDTH-1:0]]; // word aligned

always_ff @(posedge clk)
    if (we) RAM[a[ADDR_WIDTH-1:0]] <= wd;

endmodule:dmem


