module alu_tb();
    // Test stimulus signals
    logic [31:0] a, b;
    logic [2:0]  ALUControl;
    logic [31:0] rslt;
    logic        zero;

    // Instantiate ALU
    alu dut(
        .a          (a),
        .b          (b),
        .ALUControl (ALUControl),
        .rslt       (rslt),
        .zero       (zero)
    );

    // Test case counter
    int test_count = 0;
    int error_count = 0;

    // Helper task to check results
    task check_result(
        input string instr_name,
        input logic [31:0] expected_result,
        input logic expected_zero
    );
        test_count++;
        if (rslt !== expected_result || zero !== expected_zero) begin
            $display("Error testing %s at %0t:", instr_name, $time);
            $display("  Inputs: a = 0x%8h, b = 0x%8h, ALUControl = %b", a, b, ALUControl);
            $display("  Expected: result = 0x%8h, zero = %b", expected_result, expected_zero);
            $display("  Got:      result = 0x%8h, zero = %b", rslt, zero);
            error_count++;
        end else begin
            $display("Test passed: %s", instr_name);
        end
    endtask

    // Test stimulus
    initial begin
        $display("\nStarting ALU Testbench for RV32I Instructions...\n");

        // Test ADD (add instruction)
        a = 32'h0000_4000; b = 32'h0000_2000; ALUControl = 3'b000; #10;
        check_result("ADD", 32'h0000_6000, 1'b0);

        // Test ADDI (addi instruction)
        a = 32'h0000_0005; b = 32'h0000_0003; ALUControl = 3'b000; #10;
        check_result("ADDI", 32'h0000_0008, 1'b0);

        // Test LW (load word - uses add)
        a = 32'h1000_0000; b = 32'h0000_0004; ALUControl = 3'b000; #10;
        check_result("LW", 32'h1000_0004, 1'b0);

        // Test SW (store word - uses add)
        a = 32'h2000_0000; b = 32'h0000_0008; ALUControl = 3'b000; #10;
        check_result("SW", 32'h2000_0008, 1'b0);

        // Test BEQ (branch if equal - uses subtract)
        a = 32'h0000_000A; b = 32'h0000_000A; ALUControl = 3'b001; #10;
        check_result("BEQ (equal)", 32'h0000_0000, 1'b1);

        // Test SUB (subtract)
        a = 32'h0000_000F; b = 32'h0000_0003; ALUControl = 3'b001; #10;
        check_result("SUB", 32'h0000_000C, 1'b0);

        // Test AND (and instruction)
        a = 32'hF0F0_F0F0; b = 32'h0F0F_0F0F; ALUControl = 3'b010; #10;
        check_result("AND", 32'h0000_0000, 1'b1);

        // Test ANDI (and immediate)
        a = 32'hFFFF_FFFF; b = 32'h0000_00FF; ALUControl = 3'b010; #10;
        check_result("ANDI", 32'h0000_00FF, 1'b0);

        // Test OR (or instruction)
        a = 32'hF0F0_0000; b = 32'h0F0F_0000; ALUControl = 3'b011; #10;
        check_result("OR", 32'hFFFF_0000, 1'b0);

        // Test ORI (or immediate)
        a = 32'h0000_FF00; b = 32'h0000_00FF; ALUControl = 3'b011; #10;
        check_result("ORI", 32'h0000_FFFF, 1'b0);

        // Test SLT (set less than)
        a = 32'h0000_0003; b = 32'h0000_0005; ALUControl = 3'b101; #10;
        check_result("SLT", 32'h0000_0001, 1'b0);

        // Test SLTI (set less than immediate)
        a = 32'hFFFF_FFFF; b = 32'h0000_0001; ALUControl = 3'b101; #10;
        check_result("SLTI", 32'h0000_0001, 1'b0);

        // Report results
        $display("\nTest Summary:");
        $display("  Total Tests:    %0d", test_count);
        $display("  Failed Tests:   %0d", error_count);
        $display("  Passed Tests:   %0d", test_count - error_count);
        $display("  Overall Status: %s\n", error_count == 0 ? "PASSED" : "FAILED");
        $finish;
    end

    // Generate VCD file for waveform viewing
    initial begin
        $dumpfile("alu_tb.vcd");
        $dumpvars(0, alu_tb);
    end

endmodule:alu_tb
