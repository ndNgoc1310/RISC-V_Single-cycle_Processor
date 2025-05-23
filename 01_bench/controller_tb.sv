`timescale 1ns/1ps

module controller_tb;

// Signals
logic [6:0]    op;
logic [2:0]    funct3;
logic          funct7b5;
logic          ZeroE, BranchE, JumpE, ALUResultEb0;
logic [11:0]   funct12;
logic [1:0]    ResultSrcD, ALUSrcD;
logic          MemWriteD;
logic          PCSrcE;
logic          RegWriteD, JumpD, BranchD;
logic [2:0]    ImmSrcD;
logic [3:0]    ALUControlD;
logic          Ecall, Ebreak;

// DUT instantiation
controller dut (.*);

// Test counters
int test_num = 0;
int pass_count = 0;
int fail_count = 0;

// Task for checking results
task run_test(
    input logic [6:0]    in_op,
    input logic [2:0]    in_funct3,
    input logic          in_funct7b5,

    input logic          in_ZeroE, in_BranchE, in_JumpE, in_ALUResultEb0,
    input logic [11:0]   in_funct12,
    
    input logic          exp_RegWriteD,
    input logic [2:0]    exp_ImmSrcD,
    input logic [1:0]    exp_ALUSrcD,
    input logic          exp_MemWriteD,
    input logic [1:0]    exp_ResultSrcD,
    input logic          exp_BranchD,
    input logic          exp_JumpD,
    input logic [3:0]    exp_ALUControlD,
    input logic          exp_PCSrcE,
    input logic          exp_Ecall,
    input logic          exp_Ebreak,
    input string         test_name
);
    test_num++;
    
    // Set inputs
    op = in_op;
    funct3 = in_funct3;
    funct7b5 = in_funct7b5;
    ZeroE = in_ZeroE;
    BranchE = in_BranchE;
    JumpE = in_JumpE;
    ALUResultEb0 = in_ALUResultEb0;
    funct12 = in_funct12;
    #1;

    if ((RegWriteD === exp_RegWriteD) &&
        ((op == 7'b0110011 || op == 7'b1110011) || ImmSrcD === exp_ImmSrcD) && // Skip ImmSrc check for R-type (op=0110011) and system instructions (op=1110011)
        (ALUSrcD == exp_ALUSrcD) && 
        (MemWriteD === exp_MemWriteD) &&
        (ResultSrcD === exp_ResultSrcD) && 
        (BranchD === exp_BranchD) &&
        (JumpD === exp_JumpD) &&
        (ALUControlD === exp_ALUControlD) &&
        (PCSrcE === exp_PCSrcE) &&
        (Ecall === exp_Ecall) &&
        (Ebreak === exp_Ebreak)) begin
        
        $display("%02d ✅PASSED %s", test_num, test_name);
        $display("        op=%b funct3=%b funct7b5=%b", op, funct3, funct7b5);
        $display("        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b", 
                ZeroE, BranchE, JumpE, ALUResultEb0);
        pass_count++;
    end else begin
        $display("%02d ❌FAILED %s", test_num, test_name);
        $display("        Inputs:");
        $display("        op=%b funct3=%b funct7b5=%b", op, funct3, funct7b5);
        $display("        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b", 
                ZeroE, BranchE, JumpE, ALUResultEb0);
        $display("        funct12=%b", funct12);
        $display("        Expected:");
        $display("        RegWrite=%b ImmSrc=%b ALUSrc=%b MemWrite=%b ResultSrc=%b Branch=%b Jump=%b ALUControl=%b PCSrc=%b Ecall=%b Ebreak=%b",
                exp_RegWriteD, exp_ImmSrcD, exp_ALUSrcD, exp_MemWriteD, 
                exp_ResultSrcD, exp_BranchD, exp_JumpD, exp_ALUControlD, exp_PCSrcE, exp_Ecall, exp_Ebreak);
        $display("        Actual:");
        $display("        RegWrite=%b ImmSrc=%b ALUSrc=%b MemWrite=%b ResultSrc=%b Branch=%b Jump=%b ALUControl=%b PCSrc=%b Ecall=%b Ebreak=%b",
                RegWriteD, ImmSrcD, ALUSrcD, MemWriteD, 
                ResultSrcD, BranchD, JumpD, ALUControlD, PCSrcE, Ecall, Ebreak);
        fail_count++;
    end
endtask

initial begin
    $dumpfile("wave.vcd");
    $dumpvars(0, controller_tb);

    $display("\n===== Controller Tests =====");

    // Test 1: R-type Instructions
    $display("\n----------- R-type Instructions -----------");
    
    // ADD
    op = 7'b0110011; funct3 = 3'b000; funct7b5 = 1'b0;
    ZeroE = 1'b0; BranchE = 1'b0; JumpE = 1'b0; ALUResultEb0 = 1'b0; funct12 = 12'b0;
    /* 1  */ run_test(op, funct3, funct7b5, ZeroE, BranchE, JumpE, ALUResultEb0, funct12,
                      1'b1,      // RegWriteD
                      3'bxxx,    // ImmSrcD
                      2'b00,     // ALUSrcD
                      1'b0,      // MemWriteD
                      2'b00,     // ResultSrcD
                      1'b0,      // BranchD
                      1'b0,      // JumpD
                      4'b0000,   // ALUControlD
                      1'b0,      // PCSrcE
                      1'b0,      // Ecall
                      1'b0,      // Ebreak
                      "R-type ADD");

    // SUB
    op = 7'b0110011; funct3 = 3'b000; funct7b5 = 1'b1;
    ZeroE = 1'b0; BranchE = 1'b0; JumpE = 1'b0; ALUResultEb0 = 1'b0; funct12 = 12'b0;
    /* 2  */ run_test(op, funct3, funct7b5, ZeroE, BranchE, JumpE, ALUResultEb0, funct12,
                      1'b1,      // RegWriteD
                      3'bxxx,    // ImmSrcD
                      2'b00,     // ALUSrcD
                      1'b0,      // MemWriteD
                      2'b00,     // ResultSrcD
                      1'b0,      // BranchD
                      1'b0,      // JumpD
                      4'b0001,   // ALUControlD
                      1'b0,      // PCSrcE
                      1'b0,      // Ecall
                      1'b0,      // Ebreak
                      "R-type SUB");

    // SLL
    op = 7'b0110011; funct3 = 3'b001; funct7b5 = 1'b0;
    ZeroE = 1'b0; BranchE = 1'b0; JumpE = 1'b0; ALUResultEb0 = 1'b0; funct12 = 12'b0;
    /* 3  */ run_test(op, funct3, funct7b5, ZeroE, BranchE, JumpE, ALUResultEb0, funct12,
                      1'b1,      // RegWriteD
                      3'bxxx,    // ImmSrcD
                      2'b00,     // ALUSrcD
                      1'b0,      // MemWriteD
                      2'b00,     // ResultSrcD
                      1'b0,      // BranchD
                      1'b0,      // JumpD
                      4'b0110,   // ALUControlD
                      1'b0,      // PCSrcE
                      1'b0,      // Ecall
                      1'b0,      // Ebreak
                      "R-type SLL");

    // SLT
    op = 7'b0110011; funct3 = 3'b010; funct7b5 = 1'b0;
    ZeroE = 1'b0; BranchE = 1'b0; JumpE = 1'b0; ALUResultEb0 = 1'b0; funct12 = 12'b0;
    /* 4  */ run_test(op, funct3, funct7b5, ZeroE, BranchE, JumpE, ALUResultEb0, funct12,
                      1'b1,      // RegWriteD
                      3'bxxx,    // ImmSrcD
                      2'b00,     // ALUSrcD
                      1'b0,      // MemWriteD
                      2'b00,     // ResultSrcD
                      1'b0,      // BranchD
                      1'b0,      // JumpD
                      4'b0101,   // ALUControlD
                      1'b0,      // PCSrcE
                      1'b0,      // Ecall
                      1'b0,      // Ebreak
                      "R-type SLT");

    // Test 2: I-type ALU Instructions
    $display("\n----------- I-type ALU Instructions -----------");
    
    // ADDI
    op = 7'b0010011; funct3 = 3'b000; funct7b5 = 1'b0;
    ZeroE = 1'b0; BranchE = 1'b0; JumpE = 1'b0; ALUResultEb0 = 1'b0; funct12 = 12'b0;
    /* 5  */ run_test(op, funct3, funct7b5, ZeroE, BranchE, JumpE, ALUResultEb0, funct12,
                      1'b1,      // RegWriteD
                      3'b000,    // ImmSrcD
                      2'b01,     // ALUSrcD
                      1'b0,      // MemWriteD
                      2'b00,     // ResultSrcD
                      1'b0,      // BranchD
                      1'b0,      // JumpD
                      4'b0000,   // ALUControlD
                      1'b0,      // PCSrcE
                      1'b0,      // Ecall
                      1'b0,      // Ebreak
                      "I-type ADDI");

    // SLTI
    op = 7'b0010011; funct3 = 3'b010; funct7b5 = 1'b0;
    ZeroE = 1'b0; BranchE = 1'b0; JumpE = 1'b0; ALUResultEb0 = 1'b0; funct12 = 12'b0;
    /* 6  */ run_test(op, funct3, funct7b5, ZeroE, BranchE, JumpE, ALUResultEb0, funct12,
                      1'b1,      // RegWriteD
                      3'b000,    // ImmSrcD
                      2'b01,     // ALUSrcD
                      1'b0,      // MemWriteD
                      2'b00,     // ResultSrcD
                      1'b0,      // BranchD
                      1'b0,      // JumpD
                      4'b0101,   // ALUControlD
                      1'b0,      // PCSrcE
                      1'b0,      // Ecall
                      1'b0,      // Ebreak
                      "I-type SLTI");

    // Test 3: Load/Store Instructions
    $display("\n----------- Load/Store Instructions -----------");
    
    // LW
    op = 7'b0000011; funct3 = 3'b010; funct7b5 = 1'b0;
    ZeroE = 1'b0; BranchE = 1'b0; JumpE = 1'b0; ALUResultEb0 = 1'b0; funct12 = 12'b0;
    /* 7  */ run_test(op, funct3, funct7b5, ZeroE, BranchE, JumpE, ALUResultEb0, funct12,
                      1'b1,      // RegWriteD
                      3'b000,    // ImmSrcD
                      2'b01,     // ALUSrcD
                      1'b0,      // MemWriteD
                      2'b01,     // ResultSrcD
                      1'b0,      // BranchD
                      1'b0,      // JumpD
                      4'b0000,   // ALUControlD
                      1'b0,      // PCSrcE
                      1'b0,      // Ecall
                      1'b0,      // Ebreak
                      "Load LW");

    // SW
    op = 7'b0100011; funct3 = 3'b010; funct7b5 = 1'b0;
    ZeroE = 1'b0; BranchE = 1'b0; JumpE = 1'b0; ALUResultEb0 = 1'b0; funct12 = 12'b0;
    /* 8  */ run_test(op, funct3, funct7b5, ZeroE, BranchE, JumpE, ALUResultEb0, funct12,
                      1'b0,      // RegWriteD
                      3'b001,    // ImmSrcD
                      2'b01,     // ALUSrcD
                      1'b1,      // MemWriteD
                      2'b00,     // ResultSrcD
                      1'b0,      // BranchD
                      1'b0,      // JumpD
                      4'b0000,   // ALUControlD
                      1'b0,      // PCSrcE
                      1'b0,      // Ecall
                      1'b0,      // Ebreak
                      "Store SW");

    // Test 4: Branch Instructions
    $display("\n----------- Branch Instructions -----------");
    
    // BEQ (Taken)
    op = 7'b1100011; funct3 = 3'b000; funct7b5 = 1'b0;
    ZeroE = 1'b1; BranchE = 1'b1; JumpE = 1'b0; ALUResultEb0 = 1'b0; funct12 = 12'b0;
    /* 9  */ run_test(op, funct3, funct7b5, ZeroE, BranchE, JumpE, ALUResultEb0, funct12,
                      1'b0,      // RegWriteD
                      3'b010,    // ImmSrcD
                      2'b00,     // ALUSrcD
                      1'b0,      // MemWriteD
                      2'b00,     // ResultSrcD
                      1'b1,      // BranchD
                      1'b0,      // JumpD
                      4'b0001,   // ALUControlD
                      1'b1,      // PCSrcE = ZeroE
                      1'b0,      // Ecall
                      1'b0,      // Ebreak
                      "Branch BEQ Taken");

    // BEQ (Not Taken)
    op = 7'b1100011; funct3 = 3'b000; funct7b5 = 1'b0;
    ZeroE = 1'b0; BranchE = 1'b1; JumpE = 1'b0; ALUResultEb0 = 1'b0; funct12 = 12'b0;
    /* 10 */ run_test(op, funct3, funct7b5, ZeroE, BranchE, JumpE, ALUResultEb0, funct12,
                      1'b0,      // RegWriteD
                      3'b010,    // ImmSrcD
                      2'b00,     // ALUSrcD
                      1'b0,      // MemWriteD
                      2'b00,     // ResultSrcD
                      1'b1,      // BranchD
                      1'b0,      // JumpD
                      4'b0001,   // ALUControlD
                      1'b0,      // PCSrcE = ZeroE
                      1'b0,      // Ecall
                      1'b0,      // Ebreak
                      "Branch BEQ Not Taken");

    // BLT (Taken)
    op = 7'b1100011; funct3 = 3'b100; funct7b5 = 1'b0;
    ZeroE = 1'b0; BranchE = 1'b1; JumpE = 1'b0; ALUResultEb0 = 1'b1; funct12 = 12'b0;
    /* 11 */ run_test(op, funct3, funct7b5, ZeroE, BranchE, JumpE, ALUResultEb0, funct12,
                      1'b0,      // RegWriteD
                      3'b010,    // ImmSrcD
                      2'b00,     // ALUSrcD
                      1'b0,      // MemWriteD
                      2'b00,     // ResultSrcD
                      1'b1,      // BranchD
                      1'b0,      // JumpD
                      4'b0001,   // ALUControlD
                      1'b1,      // PCSrcE = ALUResultEb0
                      1'b0,      // Ecall
                      1'b0,      // Ebreak
                      "Branch BLT Taken");

    // BLT (Not Taken)
    op = 7'b1100011; funct3 = 3'b100; funct7b5 = 1'b0;
    ZeroE = 1'b0; BranchE = 1'b1; JumpE = 1'b0; ALUResultEb0 = 1'b0; funct12 = 12'b0;
    /* 12 */ run_test(op, funct3, funct7b5, ZeroE, BranchE, JumpE, ALUResultEb0, funct12,
                      1'b0,      // RegWriteD
                      3'b010,    // ImmSrcD
                      2'b00,     // ALUSrcD
                      1'b0,      // MemWriteD
                      2'b00,     // ResultSrcD
                      1'b1,      // BranchD
                      1'b0,      // JumpD
                      4'b0001,   // ALUControlD
                      1'b0,      // PCSrcE = ALUResultEb0
                      1'b0,      // Ecall
                      1'b0,      // Ebreak
                      "Branch BLT Not Taken");

    // Test 5: Jump Instructions
    $display("\n----------- Jump Instructions -----------");
    
    // JAL
    op = 7'b1101111; funct3 = 3'b000; funct7b5 = 1'b0;
    ZeroE = 1'b0; BranchE = 1'b0; JumpE = 1'b1; ALUResultEb0 = 1'b0; funct12 = 12'b0;
    /* 13 */ run_test(op, funct3, funct7b5, ZeroE, BranchE, JumpE, ALUResultEb0, funct12,
                      1'b1,      // RegWriteD
                      3'b011,    // ImmSrcD
                      2'b00,     // ALUSrcD
                      1'b0,      // MemWriteD
                      2'b10,     // ResultSrcD
                      1'b0,      // BranchD
                      1'b1,      // JumpD
                      4'b0000,   // ALUControlD
                      1'b1,      // PCSrcE
                      1'b0,      // Ecall
                      1'b0,      // Ebreak
                      "Jump JAL");

    // JALR
    op = 7'b1100111; funct3 = 3'b000; funct7b5 = 1'b0;
    ZeroE = 1'b0; BranchE = 1'b0; JumpE = 1'b1; ALUResultEb0 = 1'b0; funct12 = 12'b0;
    /* 14 */ run_test(op, funct3, funct7b5, ZeroE, BranchE, JumpE, ALUResultEb0, funct12,
                      1'b1,      // RegWriteD
                      3'b000,    // ImmSrcD
                      2'b01,     // ALUSrcD
                      1'b0,      // MemWriteD
                      2'b10,     // ResultSrcD
                      1'b0,      // BranchD
                      1'b1,      // JumpD
                      4'b0000,   // ALUControlD
                      1'b1,      // PCSrcE
                      1'b0,      // Ecall
                      1'b0,      // Ebreak
                      "Jump JALR");

    // Test 6: Upper Immediate Instructions
    $display("\n----------- Upper Immediate Instructions -----------");
    
    // LUI
    op = 7'b0110111; funct3 = 3'b000; funct7b5 = 1'b0;
    ZeroE = 1'b0; BranchE = 1'b0; JumpE = 1'b0; ALUResultEb0 = 1'b0; funct12 = 12'b0;
    /* 15 */ run_test(op, funct3, funct7b5, ZeroE, BranchE, JumpE, ALUResultEb0, funct12,
                      1'b1,      // RegWriteD
                      3'b100,    // ImmSrcD
                      2'b01,     // ALUSrcD
                      1'b0,      // MemWriteD
                      2'b00,     // ResultSrcD
                      1'b0,      // BranchD
                      1'b0,      // JumpD
                      4'b1011,   // ALUControlD
                      1'b0,      // PCSrcE
                      1'b0,      // Ecall
                      1'b0,      // Ebreak
                      "Upper LUI");

    // AUIPC
    op = 7'b0010111; funct3 = 3'b000; funct7b5 = 1'b0;
    ZeroE = 1'b0; BranchE = 1'b0; JumpE = 1'b0; ALUResultEb0 = 1'b0; funct12 = 12'b0;
    /* 16 */ run_test(op, funct3, funct7b5, ZeroE, BranchE, JumpE, ALUResultEb0, funct12,
                      1'b1,      // RegWriteD
                      3'b100,    // ImmSrcD
                      2'b11,     // ALUSrcD
                      1'b0,      // MemWriteD
                      2'b00,     // ResultSrcD
                      1'b0,      // BranchD
                      1'b0,      // JumpD
                      4'b1100,   // ALUControlD
                      1'b0,      // PCSrcE
                      1'b0,      // Ecall
                      1'b0,      // Ebreak
                      "Upper AUIPC");

    // Test 7: System Instructions
    $display("\n----------- System Instructions -----------");
    
    // ECALL
    op = 7'b1110011; funct3 = 3'b000; funct7b5 = 1'b0;
    ZeroE = 1'b0; BranchE = 1'b0; JumpE = 1'b0; ALUResultEb0 = 1'b0;
    funct12 = 12'b000000000000;
    /* 17 */ run_test(op, funct3, funct7b5, ZeroE, BranchE, JumpE, ALUResultEb0, funct12,
                      1'b0,      // RegWriteD
                      3'bxxx,    // ImmSrcD
                      2'b00,     // ALUSrcD
                      1'b0,      // MemWriteD
                      2'b00,     // ResultSrcD
                      1'b0,      // BranchD
                      1'b0,      // JumpD
                      4'b0000,   // ALUControlD
                      1'b0,      // PCSrcE
                      1'b1,      // Ecall
                      1'b0,      // Ebreak
                      "System ECALL");

    // EBREAK
    op = 7'b1110011; funct3 = 3'b000; funct7b5 = 1'b0;
    ZeroE = 1'b0; BranchE = 1'b0; JumpE = 1'b0; ALUResultEb0 = 1'b0;
    funct12 = 12'b000000000001;
    /* 18 */ run_test(op, funct3, funct7b5, ZeroE, BranchE, JumpE, ALUResultEb0, funct12,
                      1'b0,      // RegWriteD
                      3'bxxx,    // ImmSrcD
                      2'b00,     // ALUSrcD
                      1'b0,      // MemWriteD
                      2'b00,     // ResultSrcD
                      1'b0,      // BranchD
                      1'b0,      // JumpD
                      4'b0000,   // ALUControlD
                      1'b0,      // PCSrcE
                      1'b0,      // Ecall
                      1'b1,      // Ebreak
                      "System EBREAK");

    // Display test statistics
    $display("\n===== Test Statistics =====");
    $display("Total Tests:  %0d", test_num);
    $display("✅ Tests Passed: %0d (%0.1f%%)", pass_count, (pass_count * 100.0) / test_num);
    $display("❌ Tests Failed: %0d (%0.1f%%)", fail_count, (fail_count * 100.0) / test_num);
    $display("===========================\n");

    $finish;
end

endmodule:controller_tb
