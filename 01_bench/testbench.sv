module testbench 
(
    input logic clk, rst,
    output logic Ecall, Ebreak
);

logic [31:0] WriteData, DataAddr;
logic        MemWrite;

// instantiate DUT (top module)
top dut
(
    .clk(clk),
    .rst(rst),
    .Ecall(Ecall),
    .Ebreak(Ebreak),
    .WriteData(WriteData),
    .DataAddr(DataAddr),
    .MemWrite(MemWrite)
);

// waveform dump
initial begin
    $dumpfile("wave.vcd");
    $dumpvars(0, testbench);
end

// result checking
always @(negedge clk) begin
  if (MemWrite) begin
    $display("At time %t: Write %d to address %d", $time, WriteData, DataAddr);
    if (DataAddr === 100 && WriteData === 25) begin
      $display("✅ Simulation succeeded");
      $stop;
    end else if (DataAddr !== 96) begin
      $display("❌ Simulation failed");
      $stop;
    end
  end
end


endmodule

