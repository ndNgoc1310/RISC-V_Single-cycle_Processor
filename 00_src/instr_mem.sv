module instr_mem
#(
	parameter int unsigned 	width = 32,
	parameter int unsigned 	depth = 4294967295,
	parameter 				intFile = "instr_mem.mif",
	parameter int unsigned 	addrBits = 32
)

(
    input 	logic	[31:0] 	pc,
    output	logic 	[31:0]	instr
);

logic [width-1:0] instr_mem_dat [0:depth-1];

// Initialise ROM contents
initial $readmemb (intFile, instr_mem_dat);

assign instr = instr_mem_dat[pc];
	
endmodule
