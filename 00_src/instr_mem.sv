module instr_mem
#(parameter intFile = "test.mif")

(
    input 	logic	[31:0] 	pc,
    output	logic 	[31:0]	instr
);

logic [31:0] instr_mem_dat [0:4294967295]; // 2^32

// Initialise ROM contents
initial $readmemb (intFile, instr_mem_dat);

assign instr = instr_mem_dat[pc];
	
endmodule
