`timescale 1ns/1ps

module i_mem
(
    input   logic   [31:0]  a,
    output  logic   [31:0]  rd
);

logic   [31:0]  IMEM [63:0];

// Program instructions
assign IMEM[32'h00] = 32'h00500113;  // addi x2, x0, 5
assign IMEM[32'h01] = 32'h00C00193;  // addi x3, x0, 12
assign IMEM[32'h02] = 32'hFF718393;  // addi x7, x3, -9
assign IMEM[32'h03] = 32'h0023E233;  // or x4, x7, x2
assign IMEM[32'h04] = 32'h0041C2B3;  // xor x5, x3, x4
assign IMEM[32'h05] = 32'h004282B3;  // add x5, x5, x4
assign IMEM[32'h06] = 32'h02728863;  // beq x5, x7, end
assign IMEM[32'h07] = 32'h0041A233;  // slt x4, x3, x4
assign IMEM[32'h08] = 32'h00020463;  // beq x4, x0, around
assign IMEM[32'h09] = 32'h00000293;  // addi x5, x0, 0
assign IMEM[32'h0A] = 32'h0023A233;  // slt x4, x7, x2
assign IMEM[32'h0B] = 32'h005203B3;  // add x7, x4, x5
assign IMEM[32'h0C] = 32'h402383B3;  // sub x7, x7, x2
assign IMEM[32'h0D] = 32'h0471AA23;  // sw x7, 84(x3)
assign IMEM[32'h0E] = 32'h06002103;  // lw x2, 96(x0)
assign IMEM[32'h0F] = 32'h005104B3;  // add x9, x2, x5
assign IMEM[32'h10] = 32'h008001EF;  // jal x3, end
assign IMEM[32'h11] = 32'h00100113;  // addi x2, x0, 1
assign IMEM[32'h12] = 32'h00910133;  // add x2, x2, x9
assign IMEM[32'h13] = 32'h00100213;  // addi x4, x0, 1
assign IMEM[32'h14] = 32'h800002B7;  // lui x5, 0x80000
assign IMEM[32'h15] = 32'h0042A333;  // slt x6, x5, x4
assign IMEM[32'h16] = 32'h00030063;  // beq x6, x0, wrong
assign IMEM[32'h17] = 32'hABCDE4B7;  // lui x9, 0xABCDE
assign IMEM[32'h18] = 32'h00910133;  // add x2, x2, x9
assign IMEM[32'h19] = 32'h0421a023;  // sw x2, 0x40(x3)
assign IMEM[32'h1A] = 32'h00210063;  // beq x2, x2, done

// initial
//     $readmemh("test_prog.mif", IMEM);

assign rd = IMEM[a[7:2]]; // word aligned - divide address by 4

endmodule: i_mem
