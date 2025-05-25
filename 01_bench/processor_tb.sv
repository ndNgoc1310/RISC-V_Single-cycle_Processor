`timescale 1ns/1ps

module processor_tb;

// DUT signals

// Debugging--------------------------
// ---- Data Path ----
// Fetch Stage (F) ============
logic [31:0] top_pcF0, top_PCPlus4F;
logic [31:0] top_InstrF;
logic [31:0] top_pcF;

//      Hazard Unit Interface
logic        top_StallF;

// Decode Stage (D) ============
logic [31:0] top_InstrD, top_pcD, top_ImmExtD, top_PCPlus4D;
logic [31:0] top_Read1D, top_Read2D;
logic [4:0]  top_regfile_addr;
logic [31:0] top_regfile_data;

//      Controller Interface
logic        top_RegWriteD, top_MemWriteD, top_JumpD, top_BranchD;
logic [3:0]  top_ALUControlD;
logic [1:0]  top_ResultSrcD, top_ALUSrcD;
logic [2:0]  top_ImmSrcD;

// (not in use)
logic [6:0]  top_opD;
logic [2:0]  top_funct3D;
logic        top_funct7Db5;
logic [11:0] top_funct12D;

//      Hazard Unit Interface
logic        top_StallD, top_FlushD;
logic [4:0]  top_Rs1D, top_Rs2D, top_RdD;

// Execute Stage (E) ============
logic [31:0] top_Read1E, top_Read2E, top_pcE, top_ImmExtE, top_PCPlus4E;
logic [31:0] top_PCTargetE, top_SrcAE, top_SrcBE, top_ALUResultE, top_WriteDataE;
logic        top_RegWriteE, top_MemWriteE;
logic [1:0]  top_ResultSrcE, top_ALUSrcE;
logic [3:0]  top_ALUControlE;
logic        top_ResultSrcEb0;
logic        top_PCSrcE;
logic        top_ZeroE, top_BranchE, top_JumpE, top_ALUResultEb0;
logic        top_FlushE;
logic [1:0]  top_ForwardAE, top_ForwardBE;
logic [4:0]  top_Rs1E, top_Rs2E, top_RdE;

// Memory Stage (M) ============
logic [31:0] top_PCPlus4M;
logic [1:0]  top_ResultSrcM;
logic [31:0] top_ReadDataM_sel;
logic [31:0] top_ReadDataM, top_WriteDataM, top_ALUResultM;
logic        top_MemWriteM;

//      Hazard Unit Interface
logic        top_RegWriteM;
logic [4:0]  top_RdM;

// Write Back Stage (W) ============
logic [1:0]  top_ResultSrcW;
logic [31:0] top_ALUResultW, top_ReadDataW, top_PCPlus4W, top_ResultW;

//      Hazard Unit Interface
logic        top_RegWriteW;
logic [4:0]  top_RdW;

// System
logic           clk, rst;
logic           Ecall, Ebreak;

// Internal signals for verification
int             cycle_count;
string          instr_mess;
integer fd;     // File to display simulation results
logic   [31:0]  exp_addr, exp_dat;
logic           test_passed_flag;


// Clock generation
always begin
    clk = 1; #40;
    clk = 0; #40;
end

// DUT instantiation
processor dut (
    // Debugging ----------
    .top_regfile_addr   (top_regfile_addr),
    .top_regfile_data   (top_regfile_data),
    .top_pcF0           (top_pcF0),
    .top_PCPlus4F       (top_PCPlus4F),
    .top_InstrD         (top_InstrD),
    .top_pcD            (top_pcD),
    .top_ImmExtD        (top_ImmExtD),
    .top_PCPlus4D       (top_PCPlus4D),
    .top_Read1D         (top_Read1D),
    .top_Read2D         (top_Read2D),
    .top_RdD            (top_RdD),
    .top_Read1E         (top_Read1E),
    .top_Read2E         (top_Read2E),
    .top_pcE            (top_pcE),
    .top_ImmExtE        (top_ImmExtE),
    .top_PCPlus4E       (top_PCPlus4E),
    .top_PCTargetE      (top_PCTargetE),
    .top_SrcAE          (top_SrcAE),
    .top_SrcBE          (top_SrcBE),
    .top_ALUResultE     (top_ALUResultE),
    .top_WriteDataE     (top_WriteDataE),
    .top_RegWriteE      (top_RegWriteE),
    .top_MemWriteE      (top_MemWriteE),
    .top_ResultSrcE     (top_ResultSrcE),
    .top_ALUSrcE        (top_ALUSrcE),
    .top_ALUControlE    (top_ALUControlE),
    .top_PCPlus4M       (top_PCPlus4M),
    .top_ResultSrcM     (top_ResultSrcM),
    .top_ReadDataM_sel  (top_ReadDataM_sel),
    .top_ResultSrcW     (top_ResultSrcW),
    .top_ALUResultW     (top_ALUResultW),
    .top_ReadDataW      (top_ReadDataW),
    .top_PCPlus4W       (top_PCPlus4W),
    .top_ResultW        (top_ResultW),

    // Debug - Controller Interface
    .top_RegWriteD      (top_RegWriteD),
    .top_MemWriteD      (top_MemWriteD),
    .top_JumpD          (top_JumpD),
    .top_BranchD        (top_BranchD),
    .top_ALUControlD    (top_ALUControlD),
    .top_ResultSrcD     (top_ResultSrcD),
    .top_ALUSrcD        (top_ALUSrcD),
    .top_ImmSrcD        (top_ImmSrcD),
    .top_opD            (top_opD),
    .top_funct3D        (top_funct3D),
    .top_funct7Db5      (top_funct7Db5),
    .top_funct12D       (top_funct12D),
    .top_ResultSrcEb0   (top_ResultSrcEb0),
    .top_PCSrcE         (top_PCSrcE),
    .top_ZeroE          (top_ZeroE),
    .top_BranchE        (top_BranchE),
    .top_JumpE          (top_JumpE),
    .top_ALUResultEb0   (top_ALUResultEb0),

    // Debug - Hazard Unit Interface
    .top_StallF         (top_StallF),
    .top_StallD         (top_StallD),
    .top_FlushD         (top_FlushD),
    .top_Rs1D           (top_Rs1D),
    .top_Rs2D           (top_Rs2D),
    .top_FlushE         (top_FlushE),
    .top_ForwardAE      (top_ForwardAE),
    .top_ForwardBE      (top_ForwardBE),
    .top_Rs1E           (top_Rs1E),
    .top_Rs2E           (top_Rs2E),
    .top_RdE            (top_RdE),
    .top_RegWriteM      (top_RegWriteM),
    .top_RdM            (top_RdM),
    .top_RegWriteW      (top_RegWriteW),
    .top_RdW            (top_RdW),

    //--------------
    .clk                (clk),
    .rst                (rst),
    .Ecall              (Ecall),
    .Ebreak             (Ebreak),
    
    .top_InstrF         (top_InstrF),
    .top_pcF            (top_pcF),
    .top_ReadDataM      (top_ReadDataM),
    .top_MemWriteM      (top_MemWriteM),
    .top_ALUResultM     (top_ALUResultM),
    .top_WriteDataM     (top_WriteDataM)
);

d_mem dm (
    .clk    (clk),
    .we     (top_MemWriteM),
    .a      (top_ALUResultM),
    .wd     (top_WriteDataM),
    .rd     (top_ReadDataM)
);

i_mem im (
    .a      (top_pcF),
    .rd     (top_InstrF)    
);

// Debug monitoring
always @(posedge clk) begin
    // Monitor program counter and instruction
    $fdisplay(fd, "\n// ------------------------[CYCLE %0d]------------------------", cycle_count);
    $fdisplay(fd, "PC = 0x%h", top_pcF);
    $fdisplay(fd, "Instr = 0x%h (%s)", top_InstrF, instr_mess);

    // Add pipeline stage monitoring
    $fdisplay(fd, "\n// Pipeline Stage Status ----------------");

    $fdisplay(fd, "// FETCH ================================");
    $fdisplay(fd, "          pcF0 = 0x%h, pcF = 0x%h, InstrF = 0x%h", top_pcF0, top_pcF, top_InstrF); 
    
    $fdisplay(fd, "          PCPlus4F = 0x%h, PCTargetE = 0x%h", top_PCPlus4F, top_PCTargetE); 
    
    $fdisplay(fd, "          PCSrcE = %b, StallF = %b", top_PCSrcE, top_StallF); 
   
    $fdisplay(fd, "// DECODE ===============================");
    $fdisplay(fd, "                       pcD = 0x%h, InstrD = 0x%h", top_pcD, top_InstrD);

    $fdisplay(fd, "          PCPlus4D = 0x%h", top_PCPlus4D);

    $fdisplay(fd, "                       StallD = %b, FlushD = %b", top_StallD, top_FlushD);

    $fdisplay(fd, "          Read1D = %d, Read2D = %d, ImmExtD = %d", top_Read1D, top_Read2D, top_ImmExtD);

    $fdisplay(fd, "          Rs1D = %d, Rs2D = %d, RdD = %d", top_Rs1D, top_Rs2D, top_RdD);

    $fdisplay(fd, "          RegWriteD = %b, ResultSrcD = %b, MemWriteD = %b, JumpD = %b, BranchD = %b", 
                        top_RegWriteD, top_ResultSrcD, top_MemWriteD, top_JumpD, top_BranchD);

    $fdisplay(fd, "          ALUControlD = %b, ALUSrcD = %b, top_ImmSrcD = %b", 
                        top_ALUControlD, top_ALUSrcD, top_ImmSrcD);

    $fdisplay(fd, "// EXECUTE ==============================");
    $fdisplay(fd, "                       pcE = 0x%h", top_pcE);

    $fdisplay(fd, "          PCPlus4E = 0x%h, PCTargetE = 0x%h", top_PCPlus4E, top_PCTargetE);

    $fdisplay(fd, "                                    FlushE = %b", top_FlushE);

    $fdisplay(fd, "          Read1E = %d, Read2E = %d, ImmExtE = %d", top_Read1E, top_Read2E, top_ImmExtE);

    $fdisplay(fd, "          Rs1E = %d, Rs2E = %d, RdE = %d", top_Rs1E, top_Rs2E, top_RdE);

    $fdisplay(fd, "          RegWriteE = %b, ResultSrcE = %b, MemWriteE = %b, JumpE = %b, BranchE = %b, PCSrcE = %b", 
                        top_RegWriteE, top_ResultSrcE, top_MemWriteE, top_JumpE, top_BranchE, top_PCSrcE);

    $fdisplay(fd, "          ALUControlE = %b, ALUSrcE = %b, ZeroE = %b, ALUResultEb0 = %b", 
                        top_ALUControlE, top_ALUSrcE, top_ZeroE, top_ALUResultEb0);

    $fdisplay(fd, "          ResultSrcEb0 = %b", top_ResultSrcEb0);

    $fdisplay(fd, "          SrcAE = %d, ScrBE = %d, ALUResultE = %d, WriteDataE = %d", 
                        top_SrcAE, top_SrcBE, top_ALUResultE, top_WriteDataE);

    $fdisplay(fd, "          ForwardAE = %b, ForwardBE = %b", top_ForwardAE, top_ForwardBE);

    $fdisplay(fd, "// MEMORY ===============================");
    $fdisplay(fd, "          PCPlus4M = 0x%h", top_PCPlus4M);

    $fdisplay(fd, "                                RdM = %d",                     top_RdM);

    $fdisplay(fd, "          RegWriteM = %b, ResultSrcM = %b, MemWriteM = %b", 
                        top_RegWriteM, top_ResultSrcM, top_MemWriteM);

    $fdisplay(fd, "                                  ALUResultM = %d, WriteDataM = %d", 
                                              top_ALUResultM, top_WriteDataM);

    $fdisplay(fd, "          ReadDataM = %d, ReadDataM_sel = %d", 
                        top_ReadDataM, top_ReadDataM_sel);

    $fdisplay(fd, "// WRITE-BACK ===========================");
    $fdisplay(fd, "                                                  PCPlus4W = 0x%h",                        
                                                       top_PCPlus4W);

    $fdisplay(fd, "                                RdW = %d",                     top_RdW);

    $fdisplay(fd, "          RegWriteW = %b, ResultSrcW = %b", 
                        top_RegWriteW, top_ResultSrcW);

    $fdisplay(fd, "                                  ALUResultW = %d", 
                                              top_ALUResultW);

    $fdisplay(fd, "          ReadDataW = %d, ResultW = %d", 
                        top_ReadDataW, top_ResultW);

    // Monitor memory operations   
    $fdisplay(fd, "\n// Memory Data -----------------------------------");
    if (top_MemWriteM) 
    begin
                    $fdisplay(fd, "       Memory Write @ 0x%h:", top_ALUResultM);
                    $fdisplay(fd, "                 Data = %d   |   0x%h", top_WriteDataM, top_WriteDataM);

                    // Set Test Pass Flag
                    if (top_ALUResultM == exp_addr && top_WriteDataM == exp_dat)    test_passed_flag <= 1;
    end

                    $fdisplay(fd, "       Memory Read  @ 0x%h:", top_ALUResultM);
                    $fdisplay(fd, "                 Data = %d   |   0x%h", top_ReadDataM, top_ReadDataM);

    // Monitor 32 register values
    $fdisplay(fd, "\n// Registers Data --------------------------------");
    top_regfile_addr <= 0; #1;
    $fdisplay(fd, "                  x0  = %d   |   0x%h", top_regfile_data, top_regfile_data);
    top_regfile_addr <= 1; #1; 
    $fdisplay(fd, "                  x1  = %d   |   0x%h", top_regfile_data, top_regfile_data);
    top_regfile_addr <= 2; #1; 
    $fdisplay(fd, "                  x2  = %d   |   0x%h", top_regfile_data, top_regfile_data);
    top_regfile_addr <= 3; #1; 
    $fdisplay(fd, "                  x3  = %d   |   0x%h", top_regfile_data, top_regfile_data);
    top_regfile_addr <= 4; #1; 
    $fdisplay(fd, "                  x4  = %d   |   0x%h", top_regfile_data, top_regfile_data);
    top_regfile_addr <= 5; #1; 
    $fdisplay(fd, "                  x5  = %d   |   0x%h", top_regfile_data, top_regfile_data);
    top_regfile_addr <= 6; #1; 
    $fdisplay(fd, "                  x6  = %d   |   0x%h", top_regfile_data, top_regfile_data);
    top_regfile_addr <= 7; #1; 
    $fdisplay(fd, "                  x7  = %d   |   0x%h", top_regfile_data, top_regfile_data);
    top_regfile_addr <= 8; #1; 
    $fdisplay(fd, "                  x8  = %d   |   0x%h", top_regfile_data, top_regfile_data);
    top_regfile_addr <= 9; #1; 
    $fdisplay(fd, "                  x9  = %d   |   0x%h", top_regfile_data, top_regfile_data);
    top_regfile_addr <= 10; #1;
    $fdisplay(fd, "                  x10 = %d   |   0x%h", top_regfile_data, top_regfile_data);
    top_regfile_addr <= 11; #1;
    $fdisplay(fd, "                  x11 = %d   |   0x%h", top_regfile_data, top_regfile_data);
    top_regfile_addr <= 12; #1;
    $fdisplay(fd, "                  x12 = %d   |   0x%h", top_regfile_data, top_regfile_data);
    top_regfile_addr <= 13; #1;
    $fdisplay(fd, "                  x13 = %d   |   0x%h", top_regfile_data, top_regfile_data);
    top_regfile_addr <= 14; #1;
    $fdisplay(fd, "                  x14 = %d   |   0x%h", top_regfile_data, top_regfile_data);
    top_regfile_addr <= 15; #1;
    $fdisplay(fd, "                  x15 = %d   |   0x%h", top_regfile_data, top_regfile_data);
    top_regfile_addr <= 16; #1;
    $fdisplay(fd, "                  x16 = %d   |   0x%h", top_regfile_data, top_regfile_data);
    top_regfile_addr <= 17; #1;
    $fdisplay(fd, "                  x17 = %d   |   0x%h", top_regfile_data, top_regfile_data);
    top_regfile_addr <= 18; #1;
    $fdisplay(fd, "                  x18 = %d   |   0x%h", top_regfile_data, top_regfile_data);
    top_regfile_addr <= 19; #1;
    $fdisplay(fd, "                  x19 = %d   |   0x%h", top_regfile_data, top_regfile_data);
    top_regfile_addr <= 20; #1;
    $fdisplay(fd, "                  x20 = %d   |   0x%h", top_regfile_data, top_regfile_data);
    top_regfile_addr <= 21; #1;
    $fdisplay(fd, "                  x21 = %d   |   0x%h", top_regfile_data, top_regfile_data);
    top_regfile_addr <= 22; #1;
    $fdisplay(fd, "                  x22 = %d   |   0x%h", top_regfile_data, top_regfile_data);
    top_regfile_addr <= 23; #1;
    $fdisplay(fd, "                  x23 = %d   |   0x%h", top_regfile_data, top_regfile_data);
    top_regfile_addr <= 24; #1;
    $fdisplay(fd, "                  x24 = %d   |   0x%h", top_regfile_data, top_regfile_data);
    top_regfile_addr <= 25; #1;
    $fdisplay(fd, "                  x25 = %d   |   0x%h", top_regfile_data, top_regfile_data);
    top_regfile_addr <= 26; #1;
    $fdisplay(fd, "                  x26 = %d   |   0x%h", top_regfile_data, top_regfile_data);
    top_regfile_addr <= 27; #1;
    $fdisplay(fd, "                  x27 = %d   |   0x%h", top_regfile_data, top_regfile_data);
    top_regfile_addr <= 28; #1;
    $fdisplay(fd, "                  x28 = %d   |   0x%h", top_regfile_data, top_regfile_data);
    top_regfile_addr <= 29; #1;
    $fdisplay(fd, "                  x29 = %d   |   0x%h", top_regfile_data, top_regfile_data);
    top_regfile_addr <= 30; #1;
    $fdisplay(fd, "                  x30 = %d   |   0x%h", top_regfile_data, top_regfile_data);
    top_regfile_addr <= 31; #1;
    $fdisplay(fd, "                  x31 = %d   |   0x%h", top_regfile_data, top_regfile_data);
end

// Test sequence
initial begin
    $dumpfile("wave.vcd");
    $dumpvars(0, processor_tb);

    // Reset Test Pass Flag
    test_passed_flag = 0;

    // Set Scoreboard
    exp_addr = 32'h84;
    exp_dat  = 32'hABCDE02E;
    
    // Open file for writing
    fd = $fopen("sim_rslt.sv", "w");
    if (fd == 0) begin
        $fdisplay(fd, "Error opening file!");
        $finish;
    end

    // Redirect display output to file
    $fdisplay(fd, "===========================================");
    $fdisplay(fd, "          SIMULATION RESULTS");
    $fdisplay(fd, "===========================================\n");

    // Initialize test
    rst = 1; 
    @(posedge clk);

    rst = 0;
    cycle_count = 1;

    // Let it run for enough cycles to complete the program
    repeat (35) @(posedge clk);  // Adjust number as needed

    // Add extra delay for register display to complete
    repeat (32) #1;  // Wait for all 32 register reads to complete
    @(posedge clk);  // One more clock cycle for stability

    if (test_passed_flag) begin
        $fdisplay(fd, "\n✅ Test PASSED!");
        $fdisplay(fd, "Final memory verification:");
        $fdisplay(fd, "  Address: 0x%h", exp_addr);
        $fdisplay(fd, "  Data:    0x%h", exp_dat);
    end else begin
        $fdisplay(fd, "\n❌ Test FAILED!");
    end

    $fdisplay(fd, "\nTest Statistics:");
    $fdisplay(fd, "Total cycles: %0d", cycle_count);

    $fclose(fd);

    $finish;
end

// Cycle counter
always @(posedge clk, posedge rst) begin
    if (rst) begin
        cycle_count <= 0;
    end
    else begin
        cycle_count <= cycle_count + 1;
    end
end

always_comb begin
    case (top_pcF)
        32'h00: instr_mess = "addi x2, x0, 5      # x2 = 5";
        32'h04: instr_mess = "addi x3, x0, 12     # x3 = 12";
        32'h08: instr_mess = "addi x7, x3, -9     # x7 = (12 - 9) = 3";
        32'h0C: instr_mess = "or x4, x7, x2       # x4 = (3 OR 5) = 7";
        32'h10: instr_mess = "xor x5, x3, x4      # x5 = (12 XOR 7) = 11";
        32'h14: instr_mess = "add x5, x5, x4      # x5 = (11 + 7) = 18";
        32'h18: instr_mess = "beq x5, x7, end     # shouldn't be taken";
        32'h1C: instr_mess = "slt x4, x3, x4      # x4 = (12 < 7) = 0";
        32'h20: instr_mess = "beq x4, x0, around  # should be taken";
        32'h24: instr_mess = "addi x5, x0, 0      # shouldn't happen";
        32'h28: instr_mess = "slt x4, x7, x2      # x4 = (3 < 5) = 1";
        32'h2C: instr_mess = "add x7, x4, x5      # x7 = (1 + 18) = 19";
        32'h30: instr_mess = "sub x7, x7, x2      # x7 = (19 - 5) = 14";
        32'h34: instr_mess = "sw x7, 84(x3)       # [96] = 14";
        32'h38: instr_mess = "lw x2, 96(x0)       # x2 = [96] = 14";
        32'h3C: instr_mess = "add x9, x2, x5      # x9 = (14 + 18) = 32";
        32'h40: instr_mess = "jal x3, end         # jump to end, x3 = 0x44";
        32'h44: instr_mess = "addi x2, x0, 1      # shouldn't happen";
        32'h48: instr_mess = "add x2, x2, x9      # x2 = (14 + 32) = 46";
        32'h4C: instr_mess = "addi x4, x0, 1      # x4 = 1";
        32'h50: instr_mess = "lui x5, 0x80000     # x5 = 0x80000000";
        32'h54: instr_mess = "slt x6, x5, x4      # x6 = 1";
        32'h58: instr_mess = "beq x6, x0, wrong   # shouldn't be taken";
        32'h5C: instr_mess = "lui x9, 0xABCDE     # x9 = 0xABCDE000";
        32'h60: instr_mess = "add x2, x2, x9      # x2 = 0xABCDE02E";
        32'h64: instr_mess = "sw x2, 0x40(x3)     # mem[132] = 0xABCDE02E";
        32'h68: instr_mess = "beq x2, x2, done    # infinite loop";
        default:instr_mess = "Unknown instruction";
    endcase
end


endmodule:processor_tb
