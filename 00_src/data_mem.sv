module data_mem
#(
	parameter int unsigned 	width = 32,
	parameter int unsigned 	depth = 4294967295,
	parameter 				intFile = "data_mem.mif",
	parameter int unsigned 	addrBits = 32
)

(
    input 	logic	[addrBits-1:0] 	addr,
    input 	logic	[width-1:0] 	wr_dat,
    input 	logic	                wr_en,
    output	logic 	[width-1:0]	    rd_dat
);

logic [width-1:0] tmp_rd_dat;
logic [width-1:0] data_mem_dat [0:depth-1];

// Initialise ROM contents
initial $readmemb (intFile, data_mem_dat);

always_ff @(posedge clk) 
    if (wr_en) 	
    begin	
        data_mem_dat[addr] 	<= wr_dat;
        tmp_rd_dat		    <= data_mem_dat[addr];
    end
    else
        tmp_rd_dat 		    <= data_mem_dat[addr];
	
assign rd_dat = tmp_rd_dat;
	
endmodule

