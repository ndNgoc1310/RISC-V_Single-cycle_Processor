`timescale 1ns/1ps

module alu_tb;

  logic [31:0] a, b;
  logic [2:0] ALUControl;
  logic [31:0] result;
  logic zero;

  // Instantiate the ALU
  alu dut (
    .a(a),
    .b(b),
    .ALUControl(ALUControl),
    .rslt(result),
    .zero(zero)
  );

  task run_test(input [31:0] in_a, input [31:0] in_b, input [2:0] op, input [31:0] expected, input string instr_name);
    a = in_a;
    b = in_b;
    ALUControl = op;
    #5;
    if (result !== expected)
      $display("❌ %s FAILED: a=%h, b=%h, ALUControl=%b => result=%h (expected %h)", instr_name, a, b, ALUControl, result, expected);
    else
      $display("✅ %s PASSED: a=%h, b=%h, ALUControl=%b => result=%h", instr_name, a, b, ALUControl, result);
  endtask

  initial begin
    $display("===== ALU Instruction Tests =====");

    // ADD
    run_test(32'd10, 32'd5, 3'b000, 32'd15, "ADD");

    // ADDI (same ALU operation as ADD)
    run_test(32'd20, 32'd12, 3'b000, 32'd32, "ADDI");

    // SUB
    run_test(32'd10, 32'd3, 3'b001, 32'd7, "SUB");

    // AND
    run_test(32'hFF00FF00, 32'h0F0F0F0F, 3'b010, 32'h0F000F00, "AND");

    // ANDI (same as AND)
    run_test(32'h000000FF, 32'h000000F0, 3'b010, 32'h000000F0, "ANDI");

    // OR
    run_test(32'hF0000000, 32'h0F000000, 3'b011, 32'hFF000000, "OR");

    // ORI
    run_test(32'h0000000F, 32'h000000F0, 3'b011, 32'h000000FF, "ORI");

    // SLT
    run_test(32'd3, 32'd4, 3'b101, 32'd1, "SLT");
    run_test(32'd10, 32'd2, 3'b101, 32'd0, "SLT");

    // SLTI
    run_test(32'd7, 32'd8, 3'b101, 32'd1, "SLTI");
    run_test(32'd9, 32'd3, 3'b101, 32'd0, "SLTI");

    // BEQ check via zero flag
    a = 32'd42; b = 32'd42; ALUControl = 3'b001; #5;
    if (zero !== 1) $display("❌ BEQ FAIL: expected zero=1, got %b", zero);
    else            $display("✅ BEQ PASS");

    a = 32'd42; b = 32'd43; ALUControl = 3'b001; #5;
    if (zero !== 0) $display("❌ BEQ FAIL: expected zero=0, got %b", zero);
    else            $display("✅ BEQ PASS");

    // LW/SW share ADD operation
    run_test(32'd1000, 32'd20, 3'b000, 32'd1020, "LW/SW");

    $display("===== ALU Testing Finished =====");
    $finish;
  end
endmodule
