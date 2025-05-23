module dmem
(
    input  logic        clk, we, 
    input  logic [31:0] a, wd, 
    output logic [31:0] rd
); 

logic [31:0] RAM [63:0]; 
assign rd = RAM[a[31:2]]; // word aligned - divide address by 4

always_ff @(posedge clk) 
    if (we) RAM[a[7:2]] <= wd; 

endmodule: dmem
