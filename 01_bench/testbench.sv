module testbench 
(
    input logic clk,
    input logic rst
);

logic [31:0] WriteData, DataAdr;
logic        MemWrite;

// instantiate DUT (top module)
top dut(
    .clk(clk),
    .reset(rst),
    .WriteData(WriteData),
    .DataAdr(DataAdr),
    .MemWrite(MemWrite)
);

// waveform dump
initial begin
    $dumpfile("wave.vcd");
    $dumpvars(0, testbench);
end

// result checking
always_ff @(negedge clk) begin
    if (MemWrite) begin
        if (DataAdr === 100 && WriteData === 25) begin
            $display("✅ Simulation succeeded");
            $finish;
        end else if (DataAdr !== 96) begin
            $display("❌ Simulation failed");
            $finish;
        end
    end
end

endmodule
