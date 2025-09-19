`timescale 1ns/1ps

module top_tb;

// DUT signals---

// System
logic           clk, rst;
logic           Ecall, Ebreak;

// Processor - Instruction Memory
logic   [31:0]  pc, i_Instr;

// Processor - Data Memory
logic   [31:0]  top_ReadData, top_WriteData, top_ALUResult;
logic           top_top_MemWrite;

// Internal signals for verification---
logic   [31:0]  expected_data;
logic   [31:0]  expected_addr;
int             cycle_count;

// Clock generation
always begin
    clk <= 1; #5;
    clk <= 0; #5;
end

// DUT instantiation
top dut (.*);

// Debug monitoring
always @(posedge clk) begin
    // Monitor program counter and instruction
    $display("Cycle %0d: PC = 0x%h, Instr = 0x%h", 
             cycle_count, dut.top_pc, dut.top_Instr);

    // Monitor Data Memory Write
    if (dut.proc.top_MemWrite)
        $display("  Memory Write @ 0x%h: Data = 0x%h", 
                 dut.proc.ALUResult, dut.proc.top_WriteData);
    
    // Monitor Data Memory Read
    $display("  Memory Read @ 0x%h: Data = 0x%h", 
                 dut.proc.ALUResult, dut.proc.top_ReadData);
end

// Test sequence
initial begin
    $dumpfile("wave.vcd");
    $dumpvars(0, top_tb);

    // Initialize test
    cycle_count = 0;
    rst = 1; #22; rst = 0; 

    #2000;

    $finish;
end

// Cycle counter
always @(posedge clk, posedge rst) begin
    if (rst)
        cycle_count <= 0;
    else
        cycle_count <= cycle_count + 1;
end


endmodule:top_tb

