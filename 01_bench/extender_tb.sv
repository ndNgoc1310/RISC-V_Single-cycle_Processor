`timescale 1ns/1ps

module extender_tb;

// Signals
logic [31:7]    instr;      // Input instruction bits
logic [2:0]     immsrc;     // Input immediate type selector
logic [31:0]    immext;     // Output extended immediate

// DUT instantiation
extender dut (
    .instr(instr),
    .immsrc(immsrc),
    .immext(immext)
);

// Test counters
int test_num = 0;
int pass_count = 0;
int fail_count = 0;

// Task for checking results
task run_test(
    input logic [31:7]  in_instr,
    input logic [2:0]   in_immsrc,
    input logic [31:0]  exp_immext,
    input string        test_name
);
    test_num++;
    
    // Set inputs
    instr = in_instr;
    immsrc = in_immsrc;
    #1; // Small delay for signal settling

    if (immext === exp_immext) begin
        $display("%02d ✅PASSED %s", test_num, test_name);
        case (immsrc)
            3'b000: begin // I-type
                $display("        instr={imm[11:0]}_{other bits} = %b_%b", 
                        instr[31:20],   // imm[11:0]
                        instr[19:7]);   // remaining bits
            end
            3'b001: begin // S-type
                $display("        instr={imm[11:5]}_{rs2}_{rs1}_{f3}_{imm[4:0]} = %b_%b_%b_%b_%b", 
                        instr[31:25],   // imm[11:5]
                        instr[24:20],   // rs2
                        instr[19:15],   // rs1
                        instr[14:12],   // funct3
                        instr[11:7]);   // imm[4:0]
            end
            3'b010: begin // B-type
                $display("        instr={imm[12|10:5]}_{rs2}_{rs1}_{f3}_{imm[4:1|11]} = %b_%b_%b_%b_%b", 
                        instr[31:25],   // imm[12|10:5]
                        instr[24:20],   // rs2
                        instr[19:15],   // rs1
                        instr[14:12],   // funct3
                        instr[11:7]);   // imm[4:1|11]
            end
            3'b011: begin // J-type
                $display("        instr={imm[20|10:1|11|19:12]}_{rd} = %b_%b", 
                        instr[31:12],   // imm[20|10:1|11|19:12]
                        instr[11:7]);   // rd
            end
            3'b100: begin // U-type
                $display("        instr={imm[31:12]}_{rd} = %b_%b", 
                        instr[31:12],   // imm[31:12]
                        instr[11:7]);   // rd
            end
            default: $display("        instr=%b (invalid format)", instr);
        endcase
        $display("        immsrc=%b", immsrc);
        $display("        immext=%b", immext);
        pass_count++;
    end else begin
        $display("%02d ❌FAILED %s", test_num, test_name);
        case (immsrc)
            3'b000: $display("        instr={imm[11:0]}_{other bits} = %b_%b", 
                            instr[31:20], instr[19:7]);
            3'b001: $display("        instr={imm[11:5]}_{rs2}_{rs1}_{f3}_{imm[4:0]} = %b_%b_%b_%b_%b",
                            instr[31:25], instr[24:20], instr[19:15], instr[14:12], instr[11:7]);
            3'b010: $display("        instr={imm[12|10:5]}_{rs2}_{rs1}_{f3}_{imm[4:1|11]} = %b_%b_%b_%b_%b",
                            instr[31:25], instr[24:20], instr[19:15], instr[14:12], instr[11:7]);
            3'b011: $display("        instr={imm[20|10:1|11|19:12]}_{rd} = %b_%b",
                            instr[31:12], instr[11:7]);
            3'b100: $display("        instr={imm[31:12]}_{rd} = %b_%b",
                            instr[31:12], instr[11:7]);
            default: $display("        instr=%b (invalid format)", instr);
        endcase
        $display("        Expected: immext=%b", exp_immext);
        $display("        Actual:   immext=%b", immext);
        $display("        immsrc=%b", immsrc);
        fail_count++;
    end
endtask

initial begin
    $dumpfile("wave.vcd");
    $dumpvars(0, extender_tb);

    $display("\n===== Immediate Extender Tests =====");

    // Test 1: I-type Instructions
    $display("\n----------- I-type Tests -----------");
    // Case 1.1: Positive small number
    instr = 25'b0000000000100_00000_000_00000; immsrc = 3'b000;
    run_test(instr, immsrc, 32'h00000004, "I-type positive small");
    
    // Case 1.2: Negative small number
    instr = 25'b1111_1111_1100_00000_000_00000; immsrc = 3'b000;
    run_test(instr, immsrc, 32'hFFFFFFFC, "I-type negative small");
    
    // Case 1.3: Maximum positive
    instr = 25'b0111_1111_1111_00000_000_00000; immsrc = 3'b000;
    run_test(instr, immsrc, 32'h000007FF, "I-type max positive");
    
    // Case 1.4: Maximum negative
    instr = 25'b1000_0000_0000_00000_000_00000; immsrc = 3'b000;
    run_test(instr, immsrc, 32'hFFFFF800, "I-type max negative");

    // Test 2: S-type Instructions
    $display("\n----------- S-type Tests -----------");
    // Case 2.1: Positive small number (imm = 4)
    instr = 25'b0000000_00000_00000_000_00100; immsrc = 3'b001;  // imm[11:5]=0, imm[4:0]=4
    run_test(instr, immsrc, 32'h00000004, "S-type positive small");
    
    // Case 2.2: Negative small number (imm = -4)
    instr = 25'b1111111_00000_00000_000_00100; immsrc = 3'b001;  // imm[11:5]=1's, imm[4:0]=4
    run_test(instr, immsrc, 32'hFFFFFFFC, "S-type negative small");

    // Test 3: B-type Instructions
    $display("\n----------- B-type Tests -----------");
    // Case 3.1: Positive small offset (imm = 4)
    instr = 25'b0000000_00000_00000_000_00100; immsrc = 3'b010;  // imm[12|10:5]=0, imm[4:1|11]=2
    run_test(instr, immsrc, 32'h00000004, "B-type positive small");
    
    // Case 3.2: Negative small offset (imm = -4)
    instr = 25'b1111111_00000_00000_000_00100; immsrc = 3'b010;  // imm[12|10:5]=1's, imm[4:1|11]=2
    run_test(instr, immsrc, 32'hFFFFFFFC, "B-type negative small");

    // Test 4: J-type Instructions
    $display("\n----------- J-type Tests -----------");
    // Case 4.1: Positive small offset (imm = 8)
    instr = 25'b0000000_00000_00001_00000000; immsrc = 3'b011;   // imm[20|10:1|11|19:12]=8
    run_test(instr, immsrc, 32'h00000008, "J-type positive small");
    
    // Case 4.2: Negative small offset (imm = -8)
    instr = 25'b1000000_00000_00001_00000000; immsrc = 3'b011;   // imm[20|10:1|11|19:12]=-8
    run_test(instr, immsrc, 32'hFFFFFFF8, "J-type negative small");

    // Test 5: U-type Instructions
    $display("\n----------- U-type Tests -----------");
    // Case 5.1: Small positive number (imm = 0x1000)
    instr = 25'b0000000_00001_00000_00000000; immsrc = 3'b100;   // imm[31:12]=0x1
    run_test(instr, immsrc, 32'h00001000, "U-type small positive");
    
    // Case 5.2: Maximum value
    instr = 25'b1111111_11111_11111_00000000; immsrc = 3'b100;   // imm[31:12]=0xFFFFF
    run_test(instr, immsrc, 32'hFFFFF000, "U-type maximum");

    // Test 6: Invalid/Edge Cases
    $display("\n----------- Edge Cases -----------");
    // Case 6.1: Invalid immsrc
    instr = 25'b0000_0000_0000_0000_0000_0000; immsrc = 3'b111;
    run_test(instr, immsrc, 32'hxxxxxxxx, "Invalid immsrc");
    
    // Case 6.2: All ones in valid format
    instr = 25'b1111_1111_1111_0000_0000_0000; immsrc = 3'b000;
    run_test(instr, immsrc, 32'hFFFFFFFF, "All ones valid format");

    // Display test statistics
    $display("\n===== Test Statistics =====");
    $display("Total Tests:  %0d", test_num);
    $display("✅ Tests Passed: %0d (%0.1f%%)", pass_count, (pass_count * 100.0) / test_num);
    $display("❌ Tests Failed: %0d (%0.1f%%)", fail_count, (fail_count * 100.0) / test_num);
    $display("===========================\n");

    $finish;
end

endmodule:extender_tb
