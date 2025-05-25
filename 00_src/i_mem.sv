`timescale 1ns/1ps

module i_mem
(
    input   logic   [31:0]  a,
    output  logic   [31:0]  rd
);

logic   [31:0]  RAM [63:0];

initial
    $readmemh("i_mem_2.txt", RAM);

assign rd = RAM[a[7:2]]; // word aligned - divide address by 4

endmodule: i_mem
