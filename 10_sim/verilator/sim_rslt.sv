===========================================
          SIMULATION RESULTS
===========================================


// ------------------------[CYCLE 1]------------------------
PC = 0x00000000
Instr = 0x00500113 (addi x2, x0, 5      # x2 = 5)

// Pipeline Stage Status ----------------
// FETCH ================================
          pcF0 = 0x00000004, pcF = 0x00000000, InstrF = 0x00500113
          PCPlus4F = 0x00000004, PCTargetE = 0x00000000
          PCSrcE = 0, StallF = 0
// DECODE ===============================
                       pcD = 0x00000000, InstrD = 0x00000000
          PCPlus4D = 0x00000000
                       StallD = 0, FlushD = 0
          Read1D =          0, Read2D =          0, ImmExtD = 2156134975
          Rs1D =  0, Rs2D =  0, RdD =  0
          RegWriteD = 0, ResultSrcD = 00, MemWriteD = 0, JumpD = 0, BranchD = 0
          ALUControlD = 0000, ALUSrcD = 11, top_ImmSrcD = 111
// EXECUTE ==============================
                       pcE = 0x00000000
          PCPlus4E = 0x00000000, PCTargetE = 0x00000000
                                    FlushE = 0
          Read1E =          0, Read2E =          0, ImmExtE =          0
          Rs1E =  0, Rs2E =  0, RdE =  0
          RegWriteE = 0, ResultSrcE = 00, MemWriteE = 0, JumpE = 0, BranchE = 0, PCSrcE = 0
          ALUControlE = 0000, ALUSrcE = 00, ZeroE = 1, ALUResultEb0 = 0
          ResultSrcEb0 = 0
          SrcAE =          0, ScrBE =          0, ALUResultE =          0, WriteDataE =          0
          ForwardAE = 00, ForwardBE = 00
// MEMORY ===============================
          PCPlus4M = 0x00000000
                                RdM =  0
          RegWriteM = 0, ResultSrcM = 00, MemWriteM = 0
                                  ALUResultM =          0, WriteDataM =          0
          ReadDataM =          0, ReadDataM_sel =          0
// WRITE-BACK ===========================
                                                  PCPlus4W = 0x00000000
                                RdW =  0
          RegWriteW = 0, ResultSrcW = 00
                                  ALUResultW =          0
          ReadDataW =          0, ResultW =          0

// Memory Data -----------------------------------
       Memory Read  @ 0x00000000:
                 Data =          0   |   0x00000000

// Registers Data --------------------------------
                  x0  =          0   |   0x00000000
                  x1  =          0   |   0x00000000
                  x2  =          0   |   0x00000000
                  x3  =          0   |   0x00000000
                  x4  =          0   |   0x00000000
                  x5  =          0   |   0x00000000
                  x6  =          0   |   0x00000000
                  x7  =          0   |   0x00000000
                  x8  =          0   |   0x00000000
                  x9  =          0   |   0x00000000
                  x10 =          0   |   0x00000000
                  x11 =          0   |   0x00000000
                  x12 =          0   |   0x00000000
                  x13 =          0   |   0x00000000
                  x14 =          0   |   0x00000000
                  x15 =          0   |   0x00000000
                  x16 =          0   |   0x00000000
                  x17 =          0   |   0x00000000
                  x18 =          0   |   0x00000000
                  x19 =          0   |   0x00000000
                  x20 =          0   |   0x00000000
                  x21 =          0   |   0x00000000
                  x22 =          0   |   0x00000000
                  x23 =          0   |   0x00000000
                  x24 =          0   |   0x00000000
                  x25 =          0   |   0x00000000
                  x26 =          0   |   0x00000000
                  x27 =          0   |   0x00000000
                  x28 =          0   |   0x00000000
                  x29 =          0   |   0x00000000
                  x30 =          0   |   0x00000000
                  x31 =          0   |   0x00000000

// ------------------------[CYCLE 2]------------------------
PC = 0x00000004
Instr = 0x00c00193 (addi x3, x0, 12     # x3 = 12)

// Pipeline Stage Status ----------------
// FETCH ================================
          pcF0 = 0x00000008, pcF = 0x00000004, InstrF = 0x00c00193
          PCPlus4F = 0x00000008, PCTargetE = 0x8084023f
          PCSrcE = 0, StallF = 0
// DECODE ===============================
                       pcD = 0x00000000, InstrD = 0x00500113
          PCPlus4D = 0x00000004
                       StallD = 0, FlushD = 0
          Read1D =          0, Read2D =          0, ImmExtD =          5
          Rs1D =  0, Rs2D =  5, RdD =  2
          RegWriteD = 1, ResultSrcD = 00, MemWriteD = 0, JumpD = 0, BranchD = 0
          ALUControlD = 0000, ALUSrcD = 01, top_ImmSrcD = 000
// EXECUTE ==============================
                       pcE = 0x00000000
          PCPlus4E = 0x00000000, PCTargetE = 0x8084023f
                                    FlushE = 0
          Read1E =          0, Read2E =          0, ImmExtE = 2156134975
          Rs1E =  0, Rs2E =  0, RdE =  0
          RegWriteE = 0, ResultSrcE = 00, MemWriteE = 0, JumpE = 0, BranchE = 0, PCSrcE = 0
          ALUControlE = 0000, ALUSrcE = 11, ZeroE = 0, ALUResultEb0 = 1
          ResultSrcEb0 = 0
          SrcAE =          0, ScrBE = 2156134975, ALUResultE = 2156134975, WriteDataE =          0
          ForwardAE = 00, ForwardBE = 00
// MEMORY ===============================
          PCPlus4M = 0x00000000
                                RdM =  0
          RegWriteM = 0, ResultSrcM = 00, MemWriteM = 0
                                  ALUResultM =          0, WriteDataM =          0
          ReadDataM =          0, ReadDataM_sel =          0
// WRITE-BACK ===========================
                                                  PCPlus4W = 0x00000000
                                RdW =  0
          RegWriteW = 0, ResultSrcW = 00
                                  ALUResultW =          0
          ReadDataW =          0, ResultW =          0

// Memory Data -----------------------------------
       Memory Read  @ 0x00000000:
                 Data =          0   |   0x00000000

// Registers Data --------------------------------
                  x0  =          0   |   0x00000000
                  x1  =          0   |   0x00000000
                  x2  =          0   |   0x00000000
                  x3  =          0   |   0x00000000
                  x4  =          0   |   0x00000000
                  x5  =          0   |   0x00000000
                  x6  =          0   |   0x00000000
                  x7  =          0   |   0x00000000
                  x8  =          0   |   0x00000000
                  x9  =          0   |   0x00000000
                  x10 =          0   |   0x00000000
                  x11 =          0   |   0x00000000
                  x12 =          0   |   0x00000000
                  x13 =          0   |   0x00000000
                  x14 =          0   |   0x00000000
                  x15 =          0   |   0x00000000
                  x16 =          0   |   0x00000000
                  x17 =          0   |   0x00000000
                  x18 =          0   |   0x00000000
                  x19 =          0   |   0x00000000
                  x20 =          0   |   0x00000000
                  x21 =          0   |   0x00000000
                  x22 =          0   |   0x00000000
                  x23 =          0   |   0x00000000
                  x24 =          0   |   0x00000000
                  x25 =          0   |   0x00000000
                  x26 =          0   |   0x00000000
                  x27 =          0   |   0x00000000
                  x28 =          0   |   0x00000000
                  x29 =          0   |   0x00000000
                  x30 =          0   |   0x00000000
                  x31 =          0   |   0x00000000

// ------------------------[CYCLE 3]------------------------
PC = 0x00000008
Instr = 0xff718393 (addi x7, x3, -9     # x7 = (12 - 9) = 3)

// Pipeline Stage Status ----------------
// FETCH ================================
          pcF0 = 0x0000000c, pcF = 0x00000008, InstrF = 0xff718393
          PCPlus4F = 0x0000000c, PCTargetE = 0x00000005
          PCSrcE = 0, StallF = 0
// DECODE ===============================
                       pcD = 0x00000004, InstrD = 0x00c00193
          PCPlus4D = 0x00000008
                       StallD = 0, FlushD = 0
          Read1D =          0, Read2D =          0, ImmExtD =         12
          Rs1D =  0, Rs2D = 12, RdD =  3
          RegWriteD = 1, ResultSrcD = 00, MemWriteD = 0, JumpD = 0, BranchD = 0
          ALUControlD = 0000, ALUSrcD = 01, top_ImmSrcD = 000
// EXECUTE ==============================
                       pcE = 0x00000000
          PCPlus4E = 0x00000004, PCTargetE = 0x00000005
                                    FlushE = 0
          Read1E =          0, Read2E =          0, ImmExtE =          5
          Rs1E =  0, Rs2E =  5, RdE =  2
          RegWriteE = 1, ResultSrcE = 00, MemWriteE = 0, JumpE = 0, BranchE = 0, PCSrcE = 0
          ALUControlE = 0000, ALUSrcE = 01, ZeroE = 0, ALUResultEb0 = 1
          ResultSrcEb0 = 0
          SrcAE =          0, ScrBE =          5, ALUResultE =          5, WriteDataE =          0
          ForwardAE = 00, ForwardBE = 00
// MEMORY ===============================
          PCPlus4M = 0x00000000
                                RdM =  0
          RegWriteM = 0, ResultSrcM = 00, MemWriteM = 0
                                  ALUResultM = 2156134975, WriteDataM =          0
          ReadDataM =          0, ReadDataM_sel =          0
// WRITE-BACK ===========================
                                                  PCPlus4W = 0x00000000
                                RdW =  0
          RegWriteW = 0, ResultSrcW = 00
                                  ALUResultW =          0
          ReadDataW =          0, ResultW =          0

// Memory Data -----------------------------------
       Memory Read  @ 0x8084023f:
                 Data =          0   |   0x00000000

// Registers Data --------------------------------
                  x0  =          0   |   0x00000000
                  x1  =          0   |   0x00000000
                  x2  =          0   |   0x00000000
                  x3  =          0   |   0x00000000
                  x4  =          0   |   0x00000000
                  x5  =          0   |   0x00000000
                  x6  =          0   |   0x00000000
                  x7  =          0   |   0x00000000
                  x8  =          0   |   0x00000000
                  x9  =          0   |   0x00000000
                  x10 =          0   |   0x00000000
                  x11 =          0   |   0x00000000
                  x12 =          0   |   0x00000000
                  x13 =          0   |   0x00000000
                  x14 =          0   |   0x00000000
                  x15 =          0   |   0x00000000
                  x16 =          0   |   0x00000000
                  x17 =          0   |   0x00000000
                  x18 =          0   |   0x00000000
                  x19 =          0   |   0x00000000
                  x20 =          0   |   0x00000000
                  x21 =          0   |   0x00000000
                  x22 =          0   |   0x00000000
                  x23 =          0   |   0x00000000
                  x24 =          0   |   0x00000000
                  x25 =          0   |   0x00000000
                  x26 =          0   |   0x00000000
                  x27 =          0   |   0x00000000
                  x28 =          0   |   0x00000000
                  x29 =          0   |   0x00000000
                  x30 =          0   |   0x00000000
                  x31 =          0   |   0x00000000

// ------------------------[CYCLE 4]------------------------
PC = 0x0000000c
Instr = 0x0023e233 (or x4, x7, x2       # x4 = (3 OR 5) = 7)

// Pipeline Stage Status ----------------
// FETCH ================================
          pcF0 = 0x00000010, pcF = 0x0000000c, InstrF = 0x0023e233
          PCPlus4F = 0x00000010, PCTargetE = 0x00000010
          PCSrcE = 0, StallF = 0
// DECODE ===============================
                       pcD = 0x00000008, InstrD = 0xff718393
          PCPlus4D = 0x0000000c
                       StallD = 0, FlushD = 0
          Read1D =          0, Read2D =          0, ImmExtD = 4294967287
          Rs1D =  3, Rs2D = 23, RdD =  7
          RegWriteD = 1, ResultSrcD = 00, MemWriteD = 0, JumpD = 0, BranchD = 0
          ALUControlD = 0000, ALUSrcD = 01, top_ImmSrcD = 000
// EXECUTE ==============================
                       pcE = 0x00000004
          PCPlus4E = 0x00000008, PCTargetE = 0x00000010
                                    FlushE = 0
          Read1E =          0, Read2E =          0, ImmExtE =         12
          Rs1E =  0, Rs2E = 12, RdE =  3
          RegWriteE = 1, ResultSrcE = 00, MemWriteE = 0, JumpE = 0, BranchE = 0, PCSrcE = 0
          ALUControlE = 0000, ALUSrcE = 01, ZeroE = 0, ALUResultEb0 = 0
          ResultSrcEb0 = 0
          SrcAE =          0, ScrBE =         12, ALUResultE =         12, WriteDataE =          0
          ForwardAE = 00, ForwardBE = 00
// MEMORY ===============================
          PCPlus4M = 0x00000004
                                RdM =  2
          RegWriteM = 1, ResultSrcM = 00, MemWriteM = 0
                                  ALUResultM =          5, WriteDataM =          0
          ReadDataM =          0, ReadDataM_sel =          0
// WRITE-BACK ===========================
                                                  PCPlus4W = 0x00000000
                                RdW =  0
          RegWriteW = 0, ResultSrcW = 00
                                  ALUResultW = 2156134975
          ReadDataW =          0, ResultW = 2156134975

// Memory Data -----------------------------------
       Memory Read  @ 0x00000005:
                 Data =          0   |   0x00000000

// Registers Data --------------------------------
                  x0  =          0   |   0x00000000
                  x1  =          0   |   0x00000000
                  x2  =          0   |   0x00000000
                  x3  =          0   |   0x00000000
                  x4  =          0   |   0x00000000
                  x5  =          0   |   0x00000000
                  x6  =          0   |   0x00000000
                  x7  =          0   |   0x00000000
                  x8  =          0   |   0x00000000
                  x9  =          0   |   0x00000000
                  x10 =          0   |   0x00000000
                  x11 =          0   |   0x00000000
                  x12 =          0   |   0x00000000
                  x13 =          0   |   0x00000000
                  x14 =          0   |   0x00000000
                  x15 =          0   |   0x00000000
                  x16 =          0   |   0x00000000
                  x17 =          0   |   0x00000000
                  x18 =          0   |   0x00000000
                  x19 =          0   |   0x00000000
                  x20 =          0   |   0x00000000
                  x21 =          0   |   0x00000000
                  x22 =          0   |   0x00000000
                  x23 =          0   |   0x00000000
                  x24 =          0   |   0x00000000
                  x25 =          0   |   0x00000000
                  x26 =          0   |   0x00000000
                  x27 =          0   |   0x00000000
                  x28 =          0   |   0x00000000
                  x29 =          0   |   0x00000000
                  x30 =          0   |   0x00000000
                  x31 =          0   |   0x00000000

// ------------------------[CYCLE 5]------------------------
PC = 0x00000010
Instr = 0x0041c2b3 (xor x5, x3, x4      # x5 = (12 XOR 7) = 11)

// Pipeline Stage Status ----------------
// FETCH ================================
          pcF0 = 0x00000014, pcF = 0x00000010, InstrF = 0x0041c2b3
          PCPlus4F = 0x00000014, PCTargetE = 0xffffffff
          PCSrcE = 0, StallF = 0
// DECODE ===============================
                       pcD = 0x0000000c, InstrD = 0x0023e233
          PCPlus4D = 0x00000010
                       StallD = 0, FlushD = 0
          Read1D =          0, Read2D =          5, ImmExtD = 2156134975
          Rs1D =  7, Rs2D =  2, RdD =  4
          RegWriteD = 1, ResultSrcD = 00, MemWriteD = 0, JumpD = 0, BranchD = 0
          ALUControlD = 0011, ALUSrcD = 00, top_ImmSrcD = 111
// EXECUTE ==============================
                       pcE = 0x00000008
          PCPlus4E = 0x0000000c, PCTargetE = 0xffffffff
                                    FlushE = 0
          Read1E =          0, Read2E =          0, ImmExtE = 4294967287
          Rs1E =  3, Rs2E = 23, RdE =  7
          RegWriteE = 1, ResultSrcE = 00, MemWriteE = 0, JumpE = 0, BranchE = 0, PCSrcE = 0
          ALUControlE = 0000, ALUSrcE = 01, ZeroE = 0, ALUResultEb0 = 1
          ResultSrcEb0 = 0
          SrcAE =         12, ScrBE = 4294967287, ALUResultE =          3, WriteDataE =          0
          ForwardAE = 10, ForwardBE = 00
// MEMORY ===============================
          PCPlus4M = 0x00000008
                                RdM =  3
          RegWriteM = 1, ResultSrcM = 00, MemWriteM = 0
                                  ALUResultM =         12, WriteDataM =          0
          ReadDataM =          0, ReadDataM_sel =          0
// WRITE-BACK ===========================
                                                  PCPlus4W = 0x00000004
                                RdW =  2
          RegWriteW = 1, ResultSrcW = 00
                                  ALUResultW =          5
          ReadDataW =          0, ResultW =          5

// Memory Data -----------------------------------
       Memory Read  @ 0x0000000c:
                 Data =          0   |   0x00000000

// Registers Data --------------------------------
                  x0  =          0   |   0x00000000
                  x1  =          0   |   0x00000000
                  x2  =          5   |   0x00000005
                  x3  =          0   |   0x00000000
                  x4  =          0   |   0x00000000
                  x5  =          0   |   0x00000000
                  x6  =          0   |   0x00000000
                  x7  =          0   |   0x00000000
                  x8  =          0   |   0x00000000
                  x9  =          0   |   0x00000000
                  x10 =          0   |   0x00000000
                  x11 =          0   |   0x00000000
                  x12 =          0   |   0x00000000
                  x13 =          0   |   0x00000000
                  x14 =          0   |   0x00000000
                  x15 =          0   |   0x00000000
                  x16 =          0   |   0x00000000
                  x17 =          0   |   0x00000000
                  x18 =          0   |   0x00000000
                  x19 =          0   |   0x00000000
                  x20 =          0   |   0x00000000
                  x21 =          0   |   0x00000000
                  x22 =          0   |   0x00000000
                  x23 =          0   |   0x00000000
                  x24 =          0   |   0x00000000
                  x25 =          0   |   0x00000000
                  x26 =          0   |   0x00000000
                  x27 =          0   |   0x00000000
                  x28 =          0   |   0x00000000
                  x29 =          0   |   0x00000000
                  x30 =          0   |   0x00000000
                  x31 =          0   |   0x00000000

// ------------------------[CYCLE 6]------------------------
PC = 0x00000014
Instr = 0x004282b3 (add x5, x5, x4      # x5 = (11 + 7) = 18)

// Pipeline Stage Status ----------------
// FETCH ================================
          pcF0 = 0x00000018, pcF = 0x00000014, InstrF = 0x004282b3
          PCPlus4F = 0x00000018, PCTargetE = 0x8084024b
          PCSrcE = 0, StallF = 0
// DECODE ===============================
                       pcD = 0x00000010, InstrD = 0x0041c2b3
          PCPlus4D = 0x00000014
                       StallD = 0, FlushD = 0
          Read1D =         12, Read2D =          0, ImmExtD = 2156134975
          Rs1D =  3, Rs2D =  4, RdD =  5
          RegWriteD = 1, ResultSrcD = 00, MemWriteD = 0, JumpD = 0, BranchD = 0
          ALUControlD = 0100, ALUSrcD = 00, top_ImmSrcD = 111
// EXECUTE ==============================
                       pcE = 0x0000000c
          PCPlus4E = 0x00000010, PCTargetE = 0x8084024b
                                    FlushE = 0
          Read1E =          0, Read2E =          5, ImmExtE = 2156134975
          Rs1E =  7, Rs2E =  2, RdE =  4
          RegWriteE = 1, ResultSrcE = 00, MemWriteE = 0, JumpE = 0, BranchE = 0, PCSrcE = 0
          ALUControlE = 0011, ALUSrcE = 00, ZeroE = 0, ALUResultEb0 = 1
          ResultSrcEb0 = 0
          SrcAE =          3, ScrBE =          5, ALUResultE =          7, WriteDataE =          5
          ForwardAE = 10, ForwardBE = 00
// MEMORY ===============================
          PCPlus4M = 0x0000000c
                                RdM =  7
          RegWriteM = 1, ResultSrcM = 00, MemWriteM = 0
                                  ALUResultM =          3, WriteDataM =          0
          ReadDataM =          0, ReadDataM_sel =          0
// WRITE-BACK ===========================
                                                  PCPlus4W = 0x00000008
                                RdW =  3
          RegWriteW = 1, ResultSrcW = 00
                                  ALUResultW =         12
          ReadDataW =          0, ResultW =         12

// Memory Data -----------------------------------
       Memory Read  @ 0x00000003:
                 Data =          0   |   0x00000000

// Registers Data --------------------------------
                  x0  =          0   |   0x00000000
                  x1  =          0   |   0x00000000
                  x2  =          5   |   0x00000005
                  x3  =         12   |   0x0000000c
                  x4  =          0   |   0x00000000
                  x5  =          0   |   0x00000000
                  x6  =          0   |   0x00000000
                  x7  =          0   |   0x00000000
                  x8  =          0   |   0x00000000
                  x9  =          0   |   0x00000000
                  x10 =          0   |   0x00000000
                  x11 =          0   |   0x00000000
                  x12 =          0   |   0x00000000
                  x13 =          0   |   0x00000000
                  x14 =          0   |   0x00000000
                  x15 =          0   |   0x00000000
                  x16 =          0   |   0x00000000
                  x17 =          0   |   0x00000000
                  x18 =          0   |   0x00000000
                  x19 =          0   |   0x00000000
                  x20 =          0   |   0x00000000
                  x21 =          0   |   0x00000000
                  x22 =          0   |   0x00000000
                  x23 =          0   |   0x00000000
                  x24 =          0   |   0x00000000
                  x25 =          0   |   0x00000000
                  x26 =          0   |   0x00000000
                  x27 =          0   |   0x00000000
                  x28 =          0   |   0x00000000
                  x29 =          0   |   0x00000000
                  x30 =          0   |   0x00000000
                  x31 =          0   |   0x00000000

// ------------------------[CYCLE 7]------------------------
PC = 0x00000018
Instr = 0x02728863 (beq x5, x7, end     # shouldn't be taken)

// Pipeline Stage Status ----------------
// FETCH ================================
          pcF0 = 0x0000001c, pcF = 0x00000018, InstrF = 0x02728863
          PCPlus4F = 0x0000001c, PCTargetE = 0x8084024f
          PCSrcE = 0, StallF = 0
// DECODE ===============================
                       pcD = 0x00000014, InstrD = 0x004282b3
          PCPlus4D = 0x00000018
                       StallD = 0, FlushD = 0
          Read1D =          0, Read2D =          0, ImmExtD = 2156134975
          Rs1D =  5, Rs2D =  4, RdD =  5
          RegWriteD = 1, ResultSrcD = 00, MemWriteD = 0, JumpD = 0, BranchD = 0
          ALUControlD = 0000, ALUSrcD = 00, top_ImmSrcD = 111
// EXECUTE ==============================
                       pcE = 0x00000010
          PCPlus4E = 0x00000014, PCTargetE = 0x8084024f
                                    FlushE = 0
          Read1E =         12, Read2E =          0, ImmExtE = 2156134975
          Rs1E =  3, Rs2E =  4, RdE =  5
          RegWriteE = 1, ResultSrcE = 00, MemWriteE = 0, JumpE = 0, BranchE = 0, PCSrcE = 0
          ALUControlE = 0100, ALUSrcE = 00, ZeroE = 0, ALUResultEb0 = 1
          ResultSrcEb0 = 0
          SrcAE =         12, ScrBE =          7, ALUResultE =         11, WriteDataE =          7
          ForwardAE = 00, ForwardBE = 10
// MEMORY ===============================
          PCPlus4M = 0x00000010
                                RdM =  4
          RegWriteM = 1, ResultSrcM = 00, MemWriteM = 0
                                  ALUResultM =          7, WriteDataM =          0
          ReadDataM =          0, ReadDataM_sel =          0
// WRITE-BACK ===========================
                                                  PCPlus4W = 0x0000000c
                                RdW =  7
          RegWriteW = 1, ResultSrcW = 00
                                  ALUResultW =          3
          ReadDataW =          0, ResultW =          3

// Memory Data -----------------------------------
       Memory Read  @ 0x00000007:
                 Data =          0   |   0x00000000

// Registers Data --------------------------------
                  x0  =          0   |   0x00000000
                  x1  =          0   |   0x00000000
                  x2  =          5   |   0x00000005
                  x3  =         12   |   0x0000000c
                  x4  =          0   |   0x00000000
                  x5  =          0   |   0x00000000
                  x6  =          0   |   0x00000000
                  x7  =          3   |   0x00000003
                  x8  =          0   |   0x00000000
                  x9  =          0   |   0x00000000
                  x10 =          0   |   0x00000000
                  x11 =          0   |   0x00000000
                  x12 =          0   |   0x00000000
                  x13 =          0   |   0x00000000
                  x14 =          0   |   0x00000000
                  x15 =          0   |   0x00000000
                  x16 =          0   |   0x00000000
                  x17 =          0   |   0x00000000
                  x18 =          0   |   0x00000000
                  x19 =          0   |   0x00000000
                  x20 =          0   |   0x00000000
                  x21 =          0   |   0x00000000
                  x22 =          0   |   0x00000000
                  x23 =          0   |   0x00000000
                  x24 =          0   |   0x00000000
                  x25 =          0   |   0x00000000
                  x26 =          0   |   0x00000000
                  x27 =          0   |   0x00000000
                  x28 =          0   |   0x00000000
                  x29 =          0   |   0x00000000
                  x30 =          0   |   0x00000000
                  x31 =          0   |   0x00000000

// ------------------------[CYCLE 8]------------------------
PC = 0x0000001c
Instr = 0x0041a233 (slt x4, x3, x4      # x4 = (12 < 7) = 0)

// Pipeline Stage Status ----------------
// FETCH ================================
          pcF0 = 0x00000020, pcF = 0x0000001c, InstrF = 0x0041a233
          PCPlus4F = 0x00000020, PCTargetE = 0x80840253
          PCSrcE = 0, StallF = 0
// DECODE ===============================
                       pcD = 0x00000018, InstrD = 0x02728863
          PCPlus4D = 0x0000001c
                       StallD = 0, FlushD = 0
          Read1D =          0, Read2D =          3, ImmExtD =         48
          Rs1D =  5, Rs2D =  7, RdD = 16
          RegWriteD = 0, ResultSrcD = 00, MemWriteD = 0, JumpD = 0, BranchD = 1
          ALUControlD = 0001, ALUSrcD = 00, top_ImmSrcD = 010
// EXECUTE ==============================
                       pcE = 0x00000014
          PCPlus4E = 0x00000018, PCTargetE = 0x80840253
                                    FlushE = 0
          Read1E =          0, Read2E =          0, ImmExtE = 2156134975
          Rs1E =  5, Rs2E =  4, RdE =  5
          RegWriteE = 1, ResultSrcE = 00, MemWriteE = 0, JumpE = 0, BranchE = 0, PCSrcE = 0
          ALUControlE = 0000, ALUSrcE = 00, ZeroE = 0, ALUResultEb0 = 0
          ResultSrcEb0 = 0
          SrcAE =         11, ScrBE =          7, ALUResultE =         18, WriteDataE =          7
          ForwardAE = 10, ForwardBE = 01
// MEMORY ===============================
          PCPlus4M = 0x00000014
                                RdM =  5
          RegWriteM = 1, ResultSrcM = 00, MemWriteM = 0
                                  ALUResultM =         11, WriteDataM =          0
          ReadDataM =          0, ReadDataM_sel =          0
// WRITE-BACK ===========================
                                                  PCPlus4W = 0x00000010
                                RdW =  4
          RegWriteW = 1, ResultSrcW = 00
                                  ALUResultW =          7
          ReadDataW =          0, ResultW =          7

// Memory Data -----------------------------------
       Memory Read  @ 0x0000000b:
                 Data =          0   |   0x00000000

// Registers Data --------------------------------
                  x0  =          0   |   0x00000000
                  x1  =          0   |   0x00000000
                  x2  =          5   |   0x00000005
                  x3  =         12   |   0x0000000c
                  x4  =          7   |   0x00000007
                  x5  =          0   |   0x00000000
                  x6  =          0   |   0x00000000
                  x7  =          3   |   0x00000003
                  x8  =          0   |   0x00000000
                  x9  =          0   |   0x00000000
                  x10 =          0   |   0x00000000
                  x11 =          0   |   0x00000000
                  x12 =          0   |   0x00000000
                  x13 =          0   |   0x00000000
                  x14 =          0   |   0x00000000
                  x15 =          0   |   0x00000000
                  x16 =          0   |   0x00000000
                  x17 =          0   |   0x00000000
                  x18 =          0   |   0x00000000
                  x19 =          0   |   0x00000000
                  x20 =          0   |   0x00000000
                  x21 =          0   |   0x00000000
                  x22 =          0   |   0x00000000
                  x23 =          0   |   0x00000000
                  x24 =          0   |   0x00000000
                  x25 =          0   |   0x00000000
                  x26 =          0   |   0x00000000
                  x27 =          0   |   0x00000000
                  x28 =          0   |   0x00000000
                  x29 =          0   |   0x00000000
                  x30 =          0   |   0x00000000
                  x31 =          0   |   0x00000000

// ------------------------[CYCLE 9]------------------------
PC = 0x00000020
Instr = 0x00020463 (beq x4, x0, around  # should be taken)

// Pipeline Stage Status ----------------
// FETCH ================================
          pcF0 = 0x00000024, pcF = 0x00000020, InstrF = 0x00020463
          PCPlus4F = 0x00000024, PCTargetE = 0x00000048
          PCSrcE = 0, StallF = 0
// DECODE ===============================
                       pcD = 0x0000001c, InstrD = 0x0041a233
          PCPlus4D = 0x00000020
                       StallD = 0, FlushD = 0
          Read1D =         12, Read2D =          7, ImmExtD = 2156134975
          Rs1D =  3, Rs2D =  4, RdD =  4
          RegWriteD = 1, ResultSrcD = 00, MemWriteD = 0, JumpD = 0, BranchD = 0
          ALUControlD = 0101, ALUSrcD = 00, top_ImmSrcD = 111
// EXECUTE ==============================
                       pcE = 0x00000018
          PCPlus4E = 0x0000001c, PCTargetE = 0x00000048
                                    FlushE = 0
          Read1E =          0, Read2E =          3, ImmExtE =         48
          Rs1E =  5, Rs2E =  7, RdE = 16
          RegWriteE = 0, ResultSrcE = 00, MemWriteE = 0, JumpE = 0, BranchE = 1, PCSrcE = 0
          ALUControlE = 0001, ALUSrcE = 00, ZeroE = 0, ALUResultEb0 = 1
          ResultSrcEb0 = 0
          SrcAE =         18, ScrBE =          3, ALUResultE =         15, WriteDataE =          3
          ForwardAE = 10, ForwardBE = 00
// MEMORY ===============================
          PCPlus4M = 0x00000018
                                RdM =  5
          RegWriteM = 1, ResultSrcM = 00, MemWriteM = 0
                                  ALUResultM =         18, WriteDataM =          7
          ReadDataM =          0, ReadDataM_sel =          0
// WRITE-BACK ===========================
                                                  PCPlus4W = 0x00000014
                                RdW =  5
          RegWriteW = 1, ResultSrcW = 00
                                  ALUResultW =         11
          ReadDataW =          0, ResultW =         11

// Memory Data -----------------------------------
       Memory Read  @ 0x00000012:
                 Data =          0   |   0x00000000

// Registers Data --------------------------------
                  x0  =          0   |   0x00000000
                  x1  =          0   |   0x00000000
                  x2  =          5   |   0x00000005
                  x3  =         12   |   0x0000000c
                  x4  =          7   |   0x00000007
                  x5  =         11   |   0x0000000b
                  x6  =          0   |   0x00000000
                  x7  =          3   |   0x00000003
                  x8  =          0   |   0x00000000
                  x9  =          0   |   0x00000000
                  x10 =          0   |   0x00000000
                  x11 =          0   |   0x00000000
                  x12 =          0   |   0x00000000
                  x13 =          0   |   0x00000000
                  x14 =          0   |   0x00000000
                  x15 =          0   |   0x00000000
                  x16 =          0   |   0x00000000
                  x17 =          0   |   0x00000000
                  x18 =          0   |   0x00000000
                  x19 =          0   |   0x00000000
                  x20 =          0   |   0x00000000
                  x21 =          0   |   0x00000000
                  x22 =          0   |   0x00000000
                  x23 =          0   |   0x00000000
                  x24 =          0   |   0x00000000
                  x25 =          0   |   0x00000000
                  x26 =          0   |   0x00000000
                  x27 =          0   |   0x00000000
                  x28 =          0   |   0x00000000
                  x29 =          0   |   0x00000000
                  x30 =          0   |   0x00000000
                  x31 =          0   |   0x00000000

// ------------------------[CYCLE 10]------------------------
PC = 0x00000024
Instr = 0x00000293 (addi x5, x0, 0      # shouldn't happen)

// Pipeline Stage Status ----------------
// FETCH ================================
          pcF0 = 0x00000028, pcF = 0x00000024, InstrF = 0x00000293
          PCPlus4F = 0x00000028, PCTargetE = 0x8084025b
          PCSrcE = 0, StallF = 0
// DECODE ===============================
                       pcD = 0x00000020, InstrD = 0x00020463
          PCPlus4D = 0x00000024
                       StallD = 0, FlushD = 0
          Read1D =          7, Read2D =          0, ImmExtD =          8
          Rs1D =  4, Rs2D =  0, RdD =  8
          RegWriteD = 0, ResultSrcD = 00, MemWriteD = 0, JumpD = 0, BranchD = 1
          ALUControlD = 0001, ALUSrcD = 00, top_ImmSrcD = 010
// EXECUTE ==============================
                       pcE = 0x0000001c
          PCPlus4E = 0x00000020, PCTargetE = 0x8084025b
                                    FlushE = 0
          Read1E =         12, Read2E =          7, ImmExtE = 2156134975
          Rs1E =  3, Rs2E =  4, RdE =  4
          RegWriteE = 1, ResultSrcE = 00, MemWriteE = 0, JumpE = 0, BranchE = 0, PCSrcE = 0
          ALUControlE = 0101, ALUSrcE = 00, ZeroE = 1, ALUResultEb0 = 0
          ResultSrcEb0 = 0
          SrcAE =         12, ScrBE =          7, ALUResultE =          0, WriteDataE =          7
          ForwardAE = 00, ForwardBE = 00
// MEMORY ===============================
          PCPlus4M = 0x0000001c
                                RdM = 16
          RegWriteM = 0, ResultSrcM = 00, MemWriteM = 0
                                  ALUResultM =         15, WriteDataM =          3
          ReadDataM =          0, ReadDataM_sel =          0
// WRITE-BACK ===========================
                                                  PCPlus4W = 0x00000018
                                RdW =  5
          RegWriteW = 1, ResultSrcW = 00
                                  ALUResultW =         18
          ReadDataW =          0, ResultW =         18

// Memory Data -----------------------------------
       Memory Read  @ 0x0000000f:
                 Data =          0   |   0x00000000

// Registers Data --------------------------------
                  x0  =          0   |   0x00000000
                  x1  =          0   |   0x00000000
                  x2  =          5   |   0x00000005
                  x3  =         12   |   0x0000000c
                  x4  =          7   |   0x00000007
                  x5  =         18   |   0x00000012
                  x6  =          0   |   0x00000000
                  x7  =          3   |   0x00000003
                  x8  =          0   |   0x00000000
                  x9  =          0   |   0x00000000
                  x10 =          0   |   0x00000000
                  x11 =          0   |   0x00000000
                  x12 =          0   |   0x00000000
                  x13 =          0   |   0x00000000
                  x14 =          0   |   0x00000000
                  x15 =          0   |   0x00000000
                  x16 =          0   |   0x00000000
                  x17 =          0   |   0x00000000
                  x18 =          0   |   0x00000000
                  x19 =          0   |   0x00000000
                  x20 =          0   |   0x00000000
                  x21 =          0   |   0x00000000
                  x22 =          0   |   0x00000000
                  x23 =          0   |   0x00000000
                  x24 =          0   |   0x00000000
                  x25 =          0   |   0x00000000
                  x26 =          0   |   0x00000000
                  x27 =          0   |   0x00000000
                  x28 =          0   |   0x00000000
                  x29 =          0   |   0x00000000
                  x30 =          0   |   0x00000000
                  x31 =          0   |   0x00000000

// ------------------------[CYCLE 11]------------------------
PC = 0x00000028
Instr = 0x0023a233 (slt x4, x7, x2      # x4 = (3 < 5) = 1)

// Pipeline Stage Status ----------------
// FETCH ================================
          pcF0 = 0x00000028, pcF = 0x00000028, InstrF = 0x0023a233
          PCPlus4F = 0x0000002c, PCTargetE = 0x00000028
          PCSrcE = 1, StallF = 0
// DECODE ===============================
                       pcD = 0x00000024, InstrD = 0x00000293
          PCPlus4D = 0x00000028
                       StallD = 0, FlushD = 1
          Read1D =          0, Read2D =          0, ImmExtD =          0
          Rs1D =  0, Rs2D =  0, RdD =  5
          RegWriteD = 1, ResultSrcD = 00, MemWriteD = 0, JumpD = 0, BranchD = 0
          ALUControlD = 0000, ALUSrcD = 01, top_ImmSrcD = 000
// EXECUTE ==============================
                       pcE = 0x00000020
          PCPlus4E = 0x00000024, PCTargetE = 0x00000028
                                    FlushE = 1
          Read1E =          7, Read2E =          0, ImmExtE =          8
          Rs1E =  4, Rs2E =  0, RdE =  8
          RegWriteE = 0, ResultSrcE = 00, MemWriteE = 0, JumpE = 0, BranchE = 1, PCSrcE = 1
          ALUControlE = 0001, ALUSrcE = 00, ZeroE = 1, ALUResultEb0 = 0
          ResultSrcEb0 = 0
          SrcAE =          0, ScrBE =          0, ALUResultE =          0, WriteDataE =          0
          ForwardAE = 10, ForwardBE = 00
// MEMORY ===============================
          PCPlus4M = 0x00000020
                                RdM =  4
          RegWriteM = 1, ResultSrcM = 00, MemWriteM = 0
                                  ALUResultM =          0, WriteDataM =          7
          ReadDataM =          0, ReadDataM_sel =          0
// WRITE-BACK ===========================
                                                  PCPlus4W = 0x0000001c
                                RdW = 16
          RegWriteW = 0, ResultSrcW = 00
                                  ALUResultW =         15
          ReadDataW =          0, ResultW =         15

// Memory Data -----------------------------------
       Memory Read  @ 0x00000000:
                 Data =          0   |   0x00000000

// Registers Data --------------------------------
                  x0  =          0   |   0x00000000
                  x1  =          0   |   0x00000000
                  x2  =          5   |   0x00000005
                  x3  =         12   |   0x0000000c
                  x4  =          7   |   0x00000007
                  x5  =         18   |   0x00000012
                  x6  =          0   |   0x00000000
                  x7  =          3   |   0x00000003
                  x8  =          0   |   0x00000000
                  x9  =          0   |   0x00000000
                  x10 =          0   |   0x00000000
                  x11 =          0   |   0x00000000
                  x12 =          0   |   0x00000000
                  x13 =          0   |   0x00000000
                  x14 =          0   |   0x00000000
                  x15 =          0   |   0x00000000
                  x16 =          0   |   0x00000000
                  x17 =          0   |   0x00000000
                  x18 =          0   |   0x00000000
                  x19 =          0   |   0x00000000
                  x20 =          0   |   0x00000000
                  x21 =          0   |   0x00000000
                  x22 =          0   |   0x00000000
                  x23 =          0   |   0x00000000
                  x24 =          0   |   0x00000000
                  x25 =          0   |   0x00000000
                  x26 =          0   |   0x00000000
                  x27 =          0   |   0x00000000
                  x28 =          0   |   0x00000000
                  x29 =          0   |   0x00000000
                  x30 =          0   |   0x00000000
                  x31 =          0   |   0x00000000

// ------------------------[CYCLE 12]------------------------
PC = 0x00000028
Instr = 0x0023a233 (slt x4, x7, x2      # x4 = (3 < 5) = 1)

// Pipeline Stage Status ----------------
// FETCH ================================
          pcF0 = 0x0000002c, pcF = 0x00000028, InstrF = 0x0023a233
          PCPlus4F = 0x0000002c, PCTargetE = 0x00000000
          PCSrcE = 0, StallF = 0
// DECODE ===============================
                       pcD = 0x00000000, InstrD = 0x00000000
          PCPlus4D = 0x00000000
                       StallD = 0, FlushD = 0
          Read1D =          0, Read2D =          0, ImmExtD = 2156134975
          Rs1D =  0, Rs2D =  0, RdD =  0
          RegWriteD = 0, ResultSrcD = 00, MemWriteD = 0, JumpD = 0, BranchD = 0
          ALUControlD = 0000, ALUSrcD = 11, top_ImmSrcD = 111
// EXECUTE ==============================
                       pcE = 0x00000000
          PCPlus4E = 0x00000000, PCTargetE = 0x00000000
                                    FlushE = 0
          Read1E =          0, Read2E =          0, ImmExtE =          0
          Rs1E =  0, Rs2E =  0, RdE =  0
          RegWriteE = 0, ResultSrcE = 00, MemWriteE = 0, JumpE = 0, BranchE = 0, PCSrcE = 0
          ALUControlE = 0000, ALUSrcE = 00, ZeroE = 1, ALUResultEb0 = 0
          ResultSrcEb0 = 0
          SrcAE =          0, ScrBE =          0, ALUResultE =          0, WriteDataE =          0
          ForwardAE = 00, ForwardBE = 00
// MEMORY ===============================
          PCPlus4M = 0x00000024
                                RdM =  8
          RegWriteM = 0, ResultSrcM = 00, MemWriteM = 0
                                  ALUResultM =          0, WriteDataM =          0
          ReadDataM =          0, ReadDataM_sel =          0
// WRITE-BACK ===========================
                                                  PCPlus4W = 0x00000020
                                RdW =  4
          RegWriteW = 1, ResultSrcW = 00
                                  ALUResultW =          0
          ReadDataW =          0, ResultW =          0

// Memory Data -----------------------------------
       Memory Read  @ 0x00000000:
                 Data =          0   |   0x00000000

// Registers Data --------------------------------
                  x0  =          0   |   0x00000000
                  x1  =          0   |   0x00000000
                  x2  =          5   |   0x00000005
                  x3  =         12   |   0x0000000c
                  x4  =          0   |   0x00000000
                  x5  =         18   |   0x00000012
                  x6  =          0   |   0x00000000
                  x7  =          3   |   0x00000003
                  x8  =          0   |   0x00000000
                  x9  =          0   |   0x00000000
                  x10 =          0   |   0x00000000
                  x11 =          0   |   0x00000000
                  x12 =          0   |   0x00000000
                  x13 =          0   |   0x00000000
                  x14 =          0   |   0x00000000
                  x15 =          0   |   0x00000000
                  x16 =          0   |   0x00000000
                  x17 =          0   |   0x00000000
                  x18 =          0   |   0x00000000
                  x19 =          0   |   0x00000000
                  x20 =          0   |   0x00000000
                  x21 =          0   |   0x00000000
                  x22 =          0   |   0x00000000
                  x23 =          0   |   0x00000000
                  x24 =          0   |   0x00000000
                  x25 =          0   |   0x00000000
                  x26 =          0   |   0x00000000
                  x27 =          0   |   0x00000000
                  x28 =          0   |   0x00000000
                  x29 =          0   |   0x00000000
                  x30 =          0   |   0x00000000
                  x31 =          0   |   0x00000000

// ------------------------[CYCLE 13]------------------------
PC = 0x0000002c
Instr = 0x005203b3 (add x7, x4, x5      # x7 = (1 + 18) = 19)

// Pipeline Stage Status ----------------
// FETCH ================================
          pcF0 = 0x00000030, pcF = 0x0000002c, InstrF = 0x005203b3
          PCPlus4F = 0x00000030, PCTargetE = 0x8084023f
          PCSrcE = 0, StallF = 0
// DECODE ===============================
                       pcD = 0x00000028, InstrD = 0x0023a233
          PCPlus4D = 0x0000002c
                       StallD = 0, FlushD = 0
          Read1D =          3, Read2D =          5, ImmExtD = 2156134975
          Rs1D =  7, Rs2D =  2, RdD =  4
          RegWriteD = 1, ResultSrcD = 00, MemWriteD = 0, JumpD = 0, BranchD = 0
          ALUControlD = 0101, ALUSrcD = 00, top_ImmSrcD = 111
// EXECUTE ==============================
                       pcE = 0x00000000
          PCPlus4E = 0x00000000, PCTargetE = 0x8084023f
                                    FlushE = 0
          Read1E =          0, Read2E =          0, ImmExtE = 2156134975
          Rs1E =  0, Rs2E =  0, RdE =  0
          RegWriteE = 0, ResultSrcE = 00, MemWriteE = 0, JumpE = 0, BranchE = 0, PCSrcE = 0
          ALUControlE = 0000, ALUSrcE = 11, ZeroE = 0, ALUResultEb0 = 1
          ResultSrcEb0 = 0
          SrcAE =          0, ScrBE = 2156134975, ALUResultE = 2156134975, WriteDataE =          0
          ForwardAE = 00, ForwardBE = 00
// MEMORY ===============================
          PCPlus4M = 0x00000000
                                RdM =  0
          RegWriteM = 0, ResultSrcM = 00, MemWriteM = 0
                                  ALUResultM =          0, WriteDataM =          0
          ReadDataM =          0, ReadDataM_sel =          0
// WRITE-BACK ===========================
                                                  PCPlus4W = 0x00000024
                                RdW =  8
          RegWriteW = 0, ResultSrcW = 00
                                  ALUResultW =          0
          ReadDataW =          0, ResultW =          0

// Memory Data -----------------------------------
       Memory Read  @ 0x00000000:
                 Data =          0   |   0x00000000

// Registers Data --------------------------------
                  x0  =          0   |   0x00000000
                  x1  =          0   |   0x00000000
                  x2  =          5   |   0x00000005
                  x3  =         12   |   0x0000000c
                  x4  =          0   |   0x00000000
                  x5  =         18   |   0x00000012
                  x6  =          0   |   0x00000000
                  x7  =          3   |   0x00000003
                  x8  =          0   |   0x00000000
                  x9  =          0   |   0x00000000
                  x10 =          0   |   0x00000000
                  x11 =          0   |   0x00000000
                  x12 =          0   |   0x00000000
                  x13 =          0   |   0x00000000
                  x14 =          0   |   0x00000000
                  x15 =          0   |   0x00000000
                  x16 =          0   |   0x00000000
                  x17 =          0   |   0x00000000
                  x18 =          0   |   0x00000000
                  x19 =          0   |   0x00000000
                  x20 =          0   |   0x00000000
                  x21 =          0   |   0x00000000
                  x22 =          0   |   0x00000000
                  x23 =          0   |   0x00000000
                  x24 =          0   |   0x00000000
                  x25 =          0   |   0x00000000
                  x26 =          0   |   0x00000000
                  x27 =          0   |   0x00000000
                  x28 =          0   |   0x00000000
                  x29 =          0   |   0x00000000
                  x30 =          0   |   0x00000000
                  x31 =          0   |   0x00000000

// ------------------------[CYCLE 14]------------------------
PC = 0x00000030
Instr = 0x402383b3 (sub x7, x7, x2      # x7 = (19 - 5) = 14)

// Pipeline Stage Status ----------------
// FETCH ================================
          pcF0 = 0x00000034, pcF = 0x00000030, InstrF = 0x402383b3
          PCPlus4F = 0x00000034, PCTargetE = 0x80840267
          PCSrcE = 0, StallF = 0
// DECODE ===============================
                       pcD = 0x0000002c, InstrD = 0x005203b3
          PCPlus4D = 0x00000030
                       StallD = 0, FlushD = 0
          Read1D =          0, Read2D =         18, ImmExtD = 2156134975
          Rs1D =  4, Rs2D =  5, RdD =  7
          RegWriteD = 1, ResultSrcD = 00, MemWriteD = 0, JumpD = 0, BranchD = 0
          ALUControlD = 0000, ALUSrcD = 00, top_ImmSrcD = 111
// EXECUTE ==============================
                       pcE = 0x00000028
          PCPlus4E = 0x0000002c, PCTargetE = 0x80840267
                                    FlushE = 0
          Read1E =          3, Read2E =          5, ImmExtE = 2156134975
          Rs1E =  7, Rs2E =  2, RdE =  4
          RegWriteE = 1, ResultSrcE = 00, MemWriteE = 0, JumpE = 0, BranchE = 0, PCSrcE = 0
          ALUControlE = 0101, ALUSrcE = 00, ZeroE = 0, ALUResultEb0 = 1
          ResultSrcEb0 = 0
          SrcAE =          3, ScrBE =          5, ALUResultE =          1, WriteDataE =          5
          ForwardAE = 00, ForwardBE = 00
// MEMORY ===============================
          PCPlus4M = 0x00000000
                                RdM =  0
          RegWriteM = 0, ResultSrcM = 00, MemWriteM = 0
                                  ALUResultM = 2156134975, WriteDataM =          0
          ReadDataM =          0, ReadDataM_sel =          0
// WRITE-BACK ===========================
                                                  PCPlus4W = 0x00000000
                                RdW =  0
          RegWriteW = 0, ResultSrcW = 00
                                  ALUResultW =          0
          ReadDataW =          0, ResultW =          0

// Memory Data -----------------------------------
       Memory Read  @ 0x8084023f:
                 Data =          0   |   0x00000000

// Registers Data --------------------------------
                  x0  =          0   |   0x00000000
                  x1  =          0   |   0x00000000
                  x2  =          5   |   0x00000005
                  x3  =         12   |   0x0000000c
                  x4  =          0   |   0x00000000
                  x5  =         18   |   0x00000012
                  x6  =          0   |   0x00000000
                  x7  =          3   |   0x00000003
                  x8  =          0   |   0x00000000
                  x9  =          0   |   0x00000000
                  x10 =          0   |   0x00000000
                  x11 =          0   |   0x00000000
                  x12 =          0   |   0x00000000
                  x13 =          0   |   0x00000000
                  x14 =          0   |   0x00000000
                  x15 =          0   |   0x00000000
                  x16 =          0   |   0x00000000
                  x17 =          0   |   0x00000000
                  x18 =          0   |   0x00000000
                  x19 =          0   |   0x00000000
                  x20 =          0   |   0x00000000
                  x21 =          0   |   0x00000000
                  x22 =          0   |   0x00000000
                  x23 =          0   |   0x00000000
                  x24 =          0   |   0x00000000
                  x25 =          0   |   0x00000000
                  x26 =          0   |   0x00000000
                  x27 =          0   |   0x00000000
                  x28 =          0   |   0x00000000
                  x29 =          0   |   0x00000000
                  x30 =          0   |   0x00000000
                  x31 =          0   |   0x00000000

// ------------------------[CYCLE 15]------------------------
PC = 0x00000034
Instr = 0x0471aa23 (sw x7, 84(x3)       # [96] = 14)

// Pipeline Stage Status ----------------
// FETCH ================================
          pcF0 = 0x00000038, pcF = 0x00000034, InstrF = 0x0471aa23
          PCPlus4F = 0x00000038, PCTargetE = 0x8084026b
          PCSrcE = 0, StallF = 0
// DECODE ===============================
                       pcD = 0x00000030, InstrD = 0x402383b3
          PCPlus4D = 0x00000034
                       StallD = 0, FlushD = 0
          Read1D =          3, Read2D =          5, ImmExtD = 2156134975
          Rs1D =  7, Rs2D =  2, RdD =  7
          RegWriteD = 1, ResultSrcD = 00, MemWriteD = 0, JumpD = 0, BranchD = 0
          ALUControlD = 0001, ALUSrcD = 00, top_ImmSrcD = 111
// EXECUTE ==============================
                       pcE = 0x0000002c
          PCPlus4E = 0x00000030, PCTargetE = 0x8084026b
                                    FlushE = 0
          Read1E =          0, Read2E =         18, ImmExtE = 2156134975
          Rs1E =  4, Rs2E =  5, RdE =  7
          RegWriteE = 1, ResultSrcE = 00, MemWriteE = 0, JumpE = 0, BranchE = 0, PCSrcE = 0
          ALUControlE = 0000, ALUSrcE = 00, ZeroE = 0, ALUResultEb0 = 1
          ResultSrcEb0 = 0
          SrcAE =          1, ScrBE =         18, ALUResultE =         19, WriteDataE =         18
          ForwardAE = 10, ForwardBE = 00
// MEMORY ===============================
          PCPlus4M = 0x0000002c
                                RdM =  4
          RegWriteM = 1, ResultSrcM = 00, MemWriteM = 0
                                  ALUResultM =          1, WriteDataM =          5
          ReadDataM =          0, ReadDataM_sel =          0
// WRITE-BACK ===========================
                                                  PCPlus4W = 0x00000000
                                RdW =  0
          RegWriteW = 0, ResultSrcW = 00
                                  ALUResultW = 2156134975
          ReadDataW =          0, ResultW = 2156134975

// Memory Data -----------------------------------
       Memory Read  @ 0x00000001:
                 Data =          0   |   0x00000000

// Registers Data --------------------------------
                  x0  =          0   |   0x00000000
                  x1  =          0   |   0x00000000
                  x2  =          5   |   0x00000005
                  x3  =         12   |   0x0000000c
                  x4  =          0   |   0x00000000
                  x5  =         18   |   0x00000012
                  x6  =          0   |   0x00000000
                  x7  =          3   |   0x00000003
                  x8  =          0   |   0x00000000
                  x9  =          0   |   0x00000000
                  x10 =          0   |   0x00000000
                  x11 =          0   |   0x00000000
                  x12 =          0   |   0x00000000
                  x13 =          0   |   0x00000000
                  x14 =          0   |   0x00000000
                  x15 =          0   |   0x00000000
                  x16 =          0   |   0x00000000
                  x17 =          0   |   0x00000000
                  x18 =          0   |   0x00000000
                  x19 =          0   |   0x00000000
                  x20 =          0   |   0x00000000
                  x21 =          0   |   0x00000000
                  x22 =          0   |   0x00000000
                  x23 =          0   |   0x00000000
                  x24 =          0   |   0x00000000
                  x25 =          0   |   0x00000000
                  x26 =          0   |   0x00000000
                  x27 =          0   |   0x00000000
                  x28 =          0   |   0x00000000
                  x29 =          0   |   0x00000000
                  x30 =          0   |   0x00000000
                  x31 =          0   |   0x00000000

// ------------------------[CYCLE 16]------------------------
PC = 0x00000038
Instr = 0x06002103 (lw x2, 96(x0)       # x2 = [96] = 14)

// Pipeline Stage Status ----------------
// FETCH ================================
          pcF0 = 0x0000003c, pcF = 0x00000038, InstrF = 0x06002103
          PCPlus4F = 0x0000003c, PCTargetE = 0x8084026f
          PCSrcE = 0, StallF = 0
// DECODE ===============================
                       pcD = 0x00000034, InstrD = 0x0471aa23
          PCPlus4D = 0x00000038
                       StallD = 0, FlushD = 0
          Read1D =         12, Read2D =          3, ImmExtD =         84
          Rs1D =  3, Rs2D =  7, RdD = 20
          RegWriteD = 0, ResultSrcD = 00, MemWriteD = 1, JumpD = 0, BranchD = 0
          ALUControlD = 0000, ALUSrcD = 01, top_ImmSrcD = 001
// EXECUTE ==============================
                       pcE = 0x00000030
          PCPlus4E = 0x00000034, PCTargetE = 0x8084026f
                                    FlushE = 0
          Read1E =          3, Read2E =          5, ImmExtE = 2156134975
          Rs1E =  7, Rs2E =  2, RdE =  7
          RegWriteE = 1, ResultSrcE = 00, MemWriteE = 0, JumpE = 0, BranchE = 0, PCSrcE = 0
          ALUControlE = 0001, ALUSrcE = 00, ZeroE = 0, ALUResultEb0 = 0
          ResultSrcEb0 = 0
          SrcAE =         19, ScrBE =          5, ALUResultE =         14, WriteDataE =          5
          ForwardAE = 10, ForwardBE = 00
// MEMORY ===============================
          PCPlus4M = 0x00000030
                                RdM =  7
          RegWriteM = 1, ResultSrcM = 00, MemWriteM = 0
                                  ALUResultM =         19, WriteDataM =         18
          ReadDataM =          0, ReadDataM_sel =          0
// WRITE-BACK ===========================
                                                  PCPlus4W = 0x0000002c
                                RdW =  4
          RegWriteW = 1, ResultSrcW = 00
                                  ALUResultW =          1
          ReadDataW =          0, ResultW =          1

// Memory Data -----------------------------------
       Memory Read  @ 0x00000013:
                 Data =          0   |   0x00000000

// Registers Data --------------------------------
                  x0  =          0   |   0x00000000
                  x1  =          0   |   0x00000000
                  x2  =          5   |   0x00000005
                  x3  =         12   |   0x0000000c
                  x4  =          1   |   0x00000001
                  x5  =         18   |   0x00000012
                  x6  =          0   |   0x00000000
                  x7  =          3   |   0x00000003
                  x8  =          0   |   0x00000000
                  x9  =          0   |   0x00000000
                  x10 =          0   |   0x00000000
                  x11 =          0   |   0x00000000
                  x12 =          0   |   0x00000000
                  x13 =          0   |   0x00000000
                  x14 =          0   |   0x00000000
                  x15 =          0   |   0x00000000
                  x16 =          0   |   0x00000000
                  x17 =          0   |   0x00000000
                  x18 =          0   |   0x00000000
                  x19 =          0   |   0x00000000
                  x20 =          0   |   0x00000000
                  x21 =          0   |   0x00000000
                  x22 =          0   |   0x00000000
                  x23 =          0   |   0x00000000
                  x24 =          0   |   0x00000000
                  x25 =          0   |   0x00000000
                  x26 =          0   |   0x00000000
                  x27 =          0   |   0x00000000
                  x28 =          0   |   0x00000000
                  x29 =          0   |   0x00000000
                  x30 =          0   |   0x00000000
                  x31 =          0   |   0x00000000

// ------------------------[CYCLE 17]------------------------
PC = 0x0000003c
Instr = 0x005104b3 (add x9, x2, x5      # x9 = (14 + 18) = 32)

// Pipeline Stage Status ----------------
// FETCH ================================
          pcF0 = 0x00000040, pcF = 0x0000003c, InstrF = 0x005104b3
          PCPlus4F = 0x00000040, PCTargetE = 0x00000088
          PCSrcE = 0, StallF = 0
// DECODE ===============================
                       pcD = 0x00000038, InstrD = 0x06002103
          PCPlus4D = 0x0000003c
                       StallD = 0, FlushD = 0
          Read1D =          0, Read2D =          0, ImmExtD =         96
          Rs1D =  0, Rs2D =  0, RdD =  2
          RegWriteD = 1, ResultSrcD = 01, MemWriteD = 0, JumpD = 0, BranchD = 0
          ALUControlD = 0000, ALUSrcD = 01, top_ImmSrcD = 000
// EXECUTE ==============================
                       pcE = 0x00000034
          PCPlus4E = 0x00000038, PCTargetE = 0x00000088
                                    FlushE = 0
          Read1E =         12, Read2E =          3, ImmExtE =         84
          Rs1E =  3, Rs2E =  7, RdE = 20
          RegWriteE = 0, ResultSrcE = 00, MemWriteE = 1, JumpE = 0, BranchE = 0, PCSrcE = 0
          ALUControlE = 0000, ALUSrcE = 01, ZeroE = 0, ALUResultEb0 = 0
          ResultSrcEb0 = 0
          SrcAE =         12, ScrBE =         84, ALUResultE =         96, WriteDataE =         14
          ForwardAE = 00, ForwardBE = 10
// MEMORY ===============================
          PCPlus4M = 0x00000034
                                RdM =  7
          RegWriteM = 1, ResultSrcM = 00, MemWriteM = 0
                                  ALUResultM =         14, WriteDataM =          5
          ReadDataM =          0, ReadDataM_sel =          0
// WRITE-BACK ===========================
                                                  PCPlus4W = 0x00000030
                                RdW =  7
          RegWriteW = 1, ResultSrcW = 00
                                  ALUResultW =         19
          ReadDataW =          0, ResultW =         19

// Memory Data -----------------------------------
       Memory Read  @ 0x0000000e:
                 Data =          0   |   0x00000000

// Registers Data --------------------------------
                  x0  =          0   |   0x00000000
                  x1  =          0   |   0x00000000
                  x2  =          5   |   0x00000005
                  x3  =         12   |   0x0000000c
                  x4  =          1   |   0x00000001
                  x5  =         18   |   0x00000012
                  x6  =          0   |   0x00000000
                  x7  =         19   |   0x00000013
                  x8  =          0   |   0x00000000
                  x9  =          0   |   0x00000000
                  x10 =          0   |   0x00000000
                  x11 =          0   |   0x00000000
                  x12 =          0   |   0x00000000
                  x13 =          0   |   0x00000000
                  x14 =          0   |   0x00000000
                  x15 =          0   |   0x00000000
                  x16 =          0   |   0x00000000
                  x17 =          0   |   0x00000000
                  x18 =          0   |   0x00000000
                  x19 =          0   |   0x00000000
                  x20 =          0   |   0x00000000
                  x21 =          0   |   0x00000000
                  x22 =          0   |   0x00000000
                  x23 =          0   |   0x00000000
                  x24 =          0   |   0x00000000
                  x25 =          0   |   0x00000000
                  x26 =          0   |   0x00000000
                  x27 =          0   |   0x00000000
                  x28 =          0   |   0x00000000
                  x29 =          0   |   0x00000000
                  x30 =          0   |   0x00000000
                  x31 =          0   |   0x00000000

// ------------------------[CYCLE 18]------------------------
PC = 0x00000040
Instr = 0x008001ef (jal x3, end         # jump to end, x3 = 0x44)

// Pipeline Stage Status ----------------
// FETCH ================================
          pcF0 = 0x00000044, pcF = 0x00000040, InstrF = 0x008001ef
          PCPlus4F = 0x00000044, PCTargetE = 0x00000098
          PCSrcE = 0, StallF = 1
// DECODE ===============================
                       pcD = 0x0000003c, InstrD = 0x005104b3
          PCPlus4D = 0x00000040
                       StallD = 1, FlushD = 0
          Read1D =          5, Read2D =         18, ImmExtD = 2156134975
          Rs1D =  2, Rs2D =  5, RdD =  9
          RegWriteD = 1, ResultSrcD = 00, MemWriteD = 0, JumpD = 0, BranchD = 0
          ALUControlD = 0000, ALUSrcD = 00, top_ImmSrcD = 111
// EXECUTE ==============================
                       pcE = 0x00000038
          PCPlus4E = 0x0000003c, PCTargetE = 0x00000098
                                    FlushE = 1
          Read1E =          0, Read2E =          0, ImmExtE =         96
          Rs1E =  0, Rs2E =  0, RdE =  2
          RegWriteE = 1, ResultSrcE = 01, MemWriteE = 0, JumpE = 0, BranchE = 0, PCSrcE = 0
          ALUControlE = 0000, ALUSrcE = 01, ZeroE = 0, ALUResultEb0 = 0
          ResultSrcEb0 = 1
          SrcAE =          0, ScrBE =         96, ALUResultE =         96, WriteDataE =          0
          ForwardAE = 00, ForwardBE = 00
// MEMORY ===============================
          PCPlus4M = 0x00000038
                                RdM = 20
          RegWriteM = 0, ResultSrcM = 00, MemWriteM = 1
                                  ALUResultM =         96, WriteDataM =         14
          ReadDataM =          0, ReadDataM_sel =          0
// WRITE-BACK ===========================
                                                  PCPlus4W = 0x00000034
                                RdW =  7
          RegWriteW = 1, ResultSrcW = 00
                                  ALUResultW =         14
          ReadDataW =          0, ResultW =         14

// Memory Data -----------------------------------
       Memory Write @ 0x00000060:
                 Data =         14   |   0x0000000e
       Memory Read  @ 0x00000060:
                 Data =          0   |   0x00000000

// Registers Data --------------------------------
                  x0  =          0   |   0x00000000
                  x1  =          0   |   0x00000000
                  x2  =          5   |   0x00000005
                  x3  =         12   |   0x0000000c
                  x4  =          1   |   0x00000001
                  x5  =         18   |   0x00000012
                  x6  =          0   |   0x00000000
                  x7  =         14   |   0x0000000e
                  x8  =          0   |   0x00000000
                  x9  =          0   |   0x00000000
                  x10 =          0   |   0x00000000
                  x11 =          0   |   0x00000000
                  x12 =          0   |   0x00000000
                  x13 =          0   |   0x00000000
                  x14 =          0   |   0x00000000
                  x15 =          0   |   0x00000000
                  x16 =          0   |   0x00000000
                  x17 =          0   |   0x00000000
                  x18 =          0   |   0x00000000
                  x19 =          0   |   0x00000000
                  x20 =          0   |   0x00000000
                  x21 =          0   |   0x00000000
                  x22 =          0   |   0x00000000
                  x23 =          0   |   0x00000000
                  x24 =          0   |   0x00000000
                  x25 =          0   |   0x00000000
                  x26 =          0   |   0x00000000
                  x27 =          0   |   0x00000000
                  x28 =          0   |   0x00000000
                  x29 =          0   |   0x00000000
                  x30 =          0   |   0x00000000
                  x31 =          0   |   0x00000000

// ------------------------[CYCLE 19]------------------------
PC = 0x00000040
Instr = 0x008001ef (jal x3, end         # jump to end, x3 = 0x44)

// Pipeline Stage Status ----------------
// FETCH ================================
          pcF0 = 0x00000044, pcF = 0x00000040, InstrF = 0x008001ef
          PCPlus4F = 0x00000044, PCTargetE = 0x00000000
          PCSrcE = 0, StallF = 0
// DECODE ===============================
                       pcD = 0x0000003c, InstrD = 0x005104b3
          PCPlus4D = 0x00000040
                       StallD = 0, FlushD = 0
          Read1D =          5, Read2D =         18, ImmExtD = 2156134975
          Rs1D =  2, Rs2D =  5, RdD =  9
          RegWriteD = 1, ResultSrcD = 00, MemWriteD = 0, JumpD = 0, BranchD = 0
          ALUControlD = 0000, ALUSrcD = 00, top_ImmSrcD = 111
// EXECUTE ==============================
                       pcE = 0x00000000
          PCPlus4E = 0x00000000, PCTargetE = 0x00000000
                                    FlushE = 0
          Read1E =          0, Read2E =          0, ImmExtE =          0
          Rs1E =  0, Rs2E =  0, RdE =  0
          RegWriteE = 0, ResultSrcE = 00, MemWriteE = 0, JumpE = 0, BranchE = 0, PCSrcE = 0
          ALUControlE = 0000, ALUSrcE = 00, ZeroE = 1, ALUResultEb0 = 0
          ResultSrcEb0 = 0
          SrcAE =          0, ScrBE =          0, ALUResultE =          0, WriteDataE =          0
          ForwardAE = 00, ForwardBE = 00
// MEMORY ===============================
          PCPlus4M = 0x0000003c
                                RdM =  2
          RegWriteM = 1, ResultSrcM = 01, MemWriteM = 0
                                  ALUResultM =         96, WriteDataM =          0
          ReadDataM =         14, ReadDataM_sel =         14
// WRITE-BACK ===========================
                                                  PCPlus4W = 0x00000038
                                RdW = 20
          RegWriteW = 0, ResultSrcW = 00
                                  ALUResultW =         96
          ReadDataW =          0, ResultW =         96

// Memory Data -----------------------------------
       Memory Read  @ 0x00000060:
                 Data =         14   |   0x0000000e

// Registers Data --------------------------------
                  x0  =          0   |   0x00000000
                  x1  =          0   |   0x00000000
                  x2  =          5   |   0x00000005
                  x3  =         12   |   0x0000000c
                  x4  =          1   |   0x00000001
                  x5  =         18   |   0x00000012
                  x6  =          0   |   0x00000000
                  x7  =         14   |   0x0000000e
                  x8  =          0   |   0x00000000
                  x9  =          0   |   0x00000000
                  x10 =          0   |   0x00000000
                  x11 =          0   |   0x00000000
                  x12 =          0   |   0x00000000
                  x13 =          0   |   0x00000000
                  x14 =          0   |   0x00000000
                  x15 =          0   |   0x00000000
                  x16 =          0   |   0x00000000
                  x17 =          0   |   0x00000000
                  x18 =          0   |   0x00000000
                  x19 =          0   |   0x00000000
                  x20 =          0   |   0x00000000
                  x21 =          0   |   0x00000000
                  x22 =          0   |   0x00000000
                  x23 =          0   |   0x00000000
                  x24 =          0   |   0x00000000
                  x25 =          0   |   0x00000000
                  x26 =          0   |   0x00000000
                  x27 =          0   |   0x00000000
                  x28 =          0   |   0x00000000
                  x29 =          0   |   0x00000000
                  x30 =          0   |   0x00000000
                  x31 =          0   |   0x00000000

// ------------------------[CYCLE 20]------------------------
PC = 0x00000044
Instr = 0x00100113 (addi x2, x0, 1      # shouldn't happen)

// Pipeline Stage Status ----------------
// FETCH ================================
          pcF0 = 0x00000048, pcF = 0x00000044, InstrF = 0x00100113
          PCPlus4F = 0x00000048, PCTargetE = 0x8084027b
          PCSrcE = 0, StallF = 0
// DECODE ===============================
                       pcD = 0x00000040, InstrD = 0x008001ef
          PCPlus4D = 0x00000044
                       StallD = 0, FlushD = 0
          Read1D =          0, Read2D =          0, ImmExtD =          8
          Rs1D =  0, Rs2D =  8, RdD =  3
          RegWriteD = 1, ResultSrcD = 10, MemWriteD = 0, JumpD = 1, BranchD = 0
          ALUControlD = 0000, ALUSrcD = 00, top_ImmSrcD = 011
// EXECUTE ==============================
                       pcE = 0x0000003c
          PCPlus4E = 0x00000040, PCTargetE = 0x8084027b
                                    FlushE = 0
          Read1E =          5, Read2E =         18, ImmExtE = 2156134975
          Rs1E =  2, Rs2E =  5, RdE =  9
          RegWriteE = 1, ResultSrcE = 00, MemWriteE = 0, JumpE = 0, BranchE = 0, PCSrcE = 0
          ALUControlE = 0000, ALUSrcE = 00, ZeroE = 0, ALUResultEb0 = 0
          ResultSrcEb0 = 0
          SrcAE =         14, ScrBE =         18, ALUResultE =         32, WriteDataE =         18
          ForwardAE = 01, ForwardBE = 00
// MEMORY ===============================
          PCPlus4M = 0x00000000
                                RdM =  0
          RegWriteM = 0, ResultSrcM = 00, MemWriteM = 0
                                  ALUResultM =          0, WriteDataM =          0
          ReadDataM =          0, ReadDataM_sel =          0
// WRITE-BACK ===========================
                                                  PCPlus4W = 0x0000003c
                                RdW =  2
          RegWriteW = 1, ResultSrcW = 01
                                  ALUResultW =         96
          ReadDataW =         14, ResultW =         14

// Memory Data -----------------------------------
       Memory Read  @ 0x00000000:
                 Data =          0   |   0x00000000

// Registers Data --------------------------------
                  x0  =          0   |   0x00000000
                  x1  =          0   |   0x00000000
                  x2  =         14   |   0x0000000e
                  x3  =         12   |   0x0000000c
                  x4  =          1   |   0x00000001
                  x5  =         18   |   0x00000012
                  x6  =          0   |   0x00000000
                  x7  =         14   |   0x0000000e
                  x8  =          0   |   0x00000000
                  x9  =          0   |   0x00000000
                  x10 =          0   |   0x00000000
                  x11 =          0   |   0x00000000
                  x12 =          0   |   0x00000000
                  x13 =          0   |   0x00000000
                  x14 =          0   |   0x00000000
                  x15 =          0   |   0x00000000
                  x16 =          0   |   0x00000000
                  x17 =          0   |   0x00000000
                  x18 =          0   |   0x00000000
                  x19 =          0   |   0x00000000
                  x20 =          0   |   0x00000000
                  x21 =          0   |   0x00000000
                  x22 =          0   |   0x00000000
                  x23 =          0   |   0x00000000
                  x24 =          0   |   0x00000000
                  x25 =          0   |   0x00000000
                  x26 =          0   |   0x00000000
                  x27 =          0   |   0x00000000
                  x28 =          0   |   0x00000000
                  x29 =          0   |   0x00000000
                  x30 =          0   |   0x00000000
                  x31 =          0   |   0x00000000

// ------------------------[CYCLE 21]------------------------
PC = 0x00000048
Instr = 0x00910133 (add x2, x2, x9      # x2 = (14 + 32) = 46)

// Pipeline Stage Status ----------------
// FETCH ================================
          pcF0 = 0x00000048, pcF = 0x00000048, InstrF = 0x00910133
          PCPlus4F = 0x0000004c, PCTargetE = 0x00000048
          PCSrcE = 1, StallF = 0
// DECODE ===============================
                       pcD = 0x00000044, InstrD = 0x00100113
          PCPlus4D = 0x00000048
                       StallD = 0, FlushD = 1
          Read1D =          0, Read2D =          0, ImmExtD =          1
          Rs1D =  0, Rs2D =  1, RdD =  2
          RegWriteD = 1, ResultSrcD = 00, MemWriteD = 0, JumpD = 0, BranchD = 0
          ALUControlD = 0000, ALUSrcD = 01, top_ImmSrcD = 000
// EXECUTE ==============================
                       pcE = 0x00000040
          PCPlus4E = 0x00000044, PCTargetE = 0x00000048
                                    FlushE = 1
          Read1E =          0, Read2E =          0, ImmExtE =          8
          Rs1E =  0, Rs2E =  8, RdE =  3
          RegWriteE = 1, ResultSrcE = 10, MemWriteE = 0, JumpE = 1, BranchE = 0, PCSrcE = 1
          ALUControlE = 0000, ALUSrcE = 00, ZeroE = 1, ALUResultEb0 = 0
          ResultSrcEb0 = 0
          SrcAE =          0, ScrBE =          0, ALUResultE =          0, WriteDataE =          0
          ForwardAE = 00, ForwardBE = 00
// MEMORY ===============================
          PCPlus4M = 0x00000040
                                RdM =  9
          RegWriteM = 1, ResultSrcM = 00, MemWriteM = 0
                                  ALUResultM =         32, WriteDataM =         18
          ReadDataM =          0, ReadDataM_sel =          0
// WRITE-BACK ===========================
                                                  PCPlus4W = 0x00000000
                                RdW =  0
          RegWriteW = 0, ResultSrcW = 00
                                  ALUResultW =          0
          ReadDataW =          0, ResultW =          0

// Memory Data -----------------------------------
       Memory Read  @ 0x00000020:
                 Data =          0   |   0x00000000

// Registers Data --------------------------------
                  x0  =          0   |   0x00000000
                  x1  =          0   |   0x00000000
                  x2  =         14   |   0x0000000e
                  x3  =         12   |   0x0000000c
                  x4  =          1   |   0x00000001
                  x5  =         18   |   0x00000012
                  x6  =          0   |   0x00000000
                  x7  =         14   |   0x0000000e
                  x8  =          0   |   0x00000000
                  x9  =          0   |   0x00000000
                  x10 =          0   |   0x00000000
                  x11 =          0   |   0x00000000
                  x12 =          0   |   0x00000000
                  x13 =          0   |   0x00000000
                  x14 =          0   |   0x00000000
                  x15 =          0   |   0x00000000
                  x16 =          0   |   0x00000000
                  x17 =          0   |   0x00000000
                  x18 =          0   |   0x00000000
                  x19 =          0   |   0x00000000
                  x20 =          0   |   0x00000000
                  x21 =          0   |   0x00000000
                  x22 =          0   |   0x00000000
                  x23 =          0   |   0x00000000
                  x24 =          0   |   0x00000000
                  x25 =          0   |   0x00000000
                  x26 =          0   |   0x00000000
                  x27 =          0   |   0x00000000
                  x28 =          0   |   0x00000000
                  x29 =          0   |   0x00000000
                  x30 =          0   |   0x00000000
                  x31 =          0   |   0x00000000

// ------------------------[CYCLE 22]------------------------
PC = 0x00000048
Instr = 0x00910133 (add x2, x2, x9      # x2 = (14 + 32) = 46)

// Pipeline Stage Status ----------------
// FETCH ================================
          pcF0 = 0x0000004c, pcF = 0x00000048, InstrF = 0x00910133
          PCPlus4F = 0x0000004c, PCTargetE = 0x00000000
          PCSrcE = 0, StallF = 0
// DECODE ===============================
                       pcD = 0x00000000, InstrD = 0x00000000
          PCPlus4D = 0x00000000
                       StallD = 0, FlushD = 0
          Read1D =          0, Read2D =          0, ImmExtD = 2156134975
          Rs1D =  0, Rs2D =  0, RdD =  0
          RegWriteD = 0, ResultSrcD = 00, MemWriteD = 0, JumpD = 0, BranchD = 0
          ALUControlD = 0000, ALUSrcD = 11, top_ImmSrcD = 111
// EXECUTE ==============================
                       pcE = 0x00000000
          PCPlus4E = 0x00000000, PCTargetE = 0x00000000
                                    FlushE = 0
          Read1E =          0, Read2E =          0, ImmExtE =          0
          Rs1E =  0, Rs2E =  0, RdE =  0
          RegWriteE = 0, ResultSrcE = 00, MemWriteE = 0, JumpE = 0, BranchE = 0, PCSrcE = 0
          ALUControlE = 0000, ALUSrcE = 00, ZeroE = 1, ALUResultEb0 = 0
          ResultSrcEb0 = 0
          SrcAE =          0, ScrBE =          0, ALUResultE =          0, WriteDataE =          0
          ForwardAE = 00, ForwardBE = 00
// MEMORY ===============================
          PCPlus4M = 0x00000044
                                RdM =  3
          RegWriteM = 1, ResultSrcM = 10, MemWriteM = 0
                                  ALUResultM =          0, WriteDataM =          0
          ReadDataM =          0, ReadDataM_sel =          0
// WRITE-BACK ===========================
                                                  PCPlus4W = 0x00000040
                                RdW =  9
          RegWriteW = 1, ResultSrcW = 00
                                  ALUResultW =         32
          ReadDataW =          0, ResultW =         32

// Memory Data -----------------------------------
       Memory Read  @ 0x00000000:
                 Data =          0   |   0x00000000

// Registers Data --------------------------------
                  x0  =          0   |   0x00000000
                  x1  =          0   |   0x00000000
                  x2  =         14   |   0x0000000e
                  x3  =         12   |   0x0000000c
                  x4  =          1   |   0x00000001
                  x5  =         18   |   0x00000012
                  x6  =          0   |   0x00000000
                  x7  =         14   |   0x0000000e
                  x8  =          0   |   0x00000000
                  x9  =         32   |   0x00000020
                  x10 =          0   |   0x00000000
                  x11 =          0   |   0x00000000
                  x12 =          0   |   0x00000000
                  x13 =          0   |   0x00000000
                  x14 =          0   |   0x00000000
                  x15 =          0   |   0x00000000
                  x16 =          0   |   0x00000000
                  x17 =          0   |   0x00000000
                  x18 =          0   |   0x00000000
                  x19 =          0   |   0x00000000
                  x20 =          0   |   0x00000000
                  x21 =          0   |   0x00000000
                  x22 =          0   |   0x00000000
                  x23 =          0   |   0x00000000
                  x24 =          0   |   0x00000000
                  x25 =          0   |   0x00000000
                  x26 =          0   |   0x00000000
                  x27 =          0   |   0x00000000
                  x28 =          0   |   0x00000000
                  x29 =          0   |   0x00000000
                  x30 =          0   |   0x00000000
                  x31 =          0   |   0x00000000

// ------------------------[CYCLE 23]------------------------
PC = 0x0000004c
Instr = 0x00100213 (addi x4, x0, 1      # x4 = 1)

// Pipeline Stage Status ----------------
// FETCH ================================
          pcF0 = 0x00000050, pcF = 0x0000004c, InstrF = 0x00100213
          PCPlus4F = 0x00000050, PCTargetE = 0x8084023f
          PCSrcE = 0, StallF = 0
// DECODE ===============================
                       pcD = 0x00000048, InstrD = 0x00910133
          PCPlus4D = 0x0000004c
                       StallD = 0, FlushD = 0
          Read1D =         14, Read2D =         32, ImmExtD = 2156134975
          Rs1D =  2, Rs2D =  9, RdD =  2
          RegWriteD = 1, ResultSrcD = 00, MemWriteD = 0, JumpD = 0, BranchD = 0
          ALUControlD = 0000, ALUSrcD = 00, top_ImmSrcD = 111
// EXECUTE ==============================
                       pcE = 0x00000000
          PCPlus4E = 0x00000000, PCTargetE = 0x8084023f
                                    FlushE = 0
          Read1E =          0, Read2E =          0, ImmExtE = 2156134975
          Rs1E =  0, Rs2E =  0, RdE =  0
          RegWriteE = 0, ResultSrcE = 00, MemWriteE = 0, JumpE = 0, BranchE = 0, PCSrcE = 0
          ALUControlE = 0000, ALUSrcE = 11, ZeroE = 0, ALUResultEb0 = 1
          ResultSrcEb0 = 0
          SrcAE =          0, ScrBE = 2156134975, ALUResultE = 2156134975, WriteDataE =          0
          ForwardAE = 00, ForwardBE = 00
// MEMORY ===============================
          PCPlus4M = 0x00000000
                                RdM =  0
          RegWriteM = 0, ResultSrcM = 00, MemWriteM = 0
                                  ALUResultM =          0, WriteDataM =          0
          ReadDataM =          0, ReadDataM_sel =          0
// WRITE-BACK ===========================
                                                  PCPlus4W = 0x00000044
                                RdW =  3
          RegWriteW = 1, ResultSrcW = 10
                                  ALUResultW =          0
          ReadDataW =          0, ResultW =         68

// Memory Data -----------------------------------
       Memory Read  @ 0x00000000:
                 Data =          0   |   0x00000000

// Registers Data --------------------------------
                  x0  =          0   |   0x00000000
                  x1  =          0   |   0x00000000
                  x2  =         14   |   0x0000000e
                  x3  =         68   |   0x00000044
                  x4  =          1   |   0x00000001
                  x5  =         18   |   0x00000012
                  x6  =          0   |   0x00000000
                  x7  =         14   |   0x0000000e
                  x8  =          0   |   0x00000000
                  x9  =         32   |   0x00000020
                  x10 =          0   |   0x00000000
                  x11 =          0   |   0x00000000
                  x12 =          0   |   0x00000000
                  x13 =          0   |   0x00000000
                  x14 =          0   |   0x00000000
                  x15 =          0   |   0x00000000
                  x16 =          0   |   0x00000000
                  x17 =          0   |   0x00000000
                  x18 =          0   |   0x00000000
                  x19 =          0   |   0x00000000
                  x20 =          0   |   0x00000000
                  x21 =          0   |   0x00000000
                  x22 =          0   |   0x00000000
                  x23 =          0   |   0x00000000
                  x24 =          0   |   0x00000000
                  x25 =          0   |   0x00000000
                  x26 =          0   |   0x00000000
                  x27 =          0   |   0x00000000
                  x28 =          0   |   0x00000000
                  x29 =          0   |   0x00000000
                  x30 =          0   |   0x00000000
                  x31 =          0   |   0x00000000

// ------------------------[CYCLE 24]------------------------
PC = 0x00000050
Instr = 0x800002b7 (lui x5, 0x80000     # x5 = 0x80000000)

// Pipeline Stage Status ----------------
// FETCH ================================
          pcF0 = 0x00000054, pcF = 0x00000050, InstrF = 0x800002b7
          PCPlus4F = 0x00000054, PCTargetE = 0x80840287
          PCSrcE = 0, StallF = 0
// DECODE ===============================
                       pcD = 0x0000004c, InstrD = 0x00100213
          PCPlus4D = 0x00000050
                       StallD = 0, FlushD = 0
          Read1D =          0, Read2D =          0, ImmExtD =          1
          Rs1D =  0, Rs2D =  1, RdD =  4
          RegWriteD = 1, ResultSrcD = 00, MemWriteD = 0, JumpD = 0, BranchD = 0
          ALUControlD = 0000, ALUSrcD = 01, top_ImmSrcD = 000
// EXECUTE ==============================
                       pcE = 0x00000048
          PCPlus4E = 0x0000004c, PCTargetE = 0x80840287
                                    FlushE = 0
          Read1E =         14, Read2E =         32, ImmExtE = 2156134975
          Rs1E =  2, Rs2E =  9, RdE =  2
          RegWriteE = 1, ResultSrcE = 00, MemWriteE = 0, JumpE = 0, BranchE = 0, PCSrcE = 0
          ALUControlE = 0000, ALUSrcE = 00, ZeroE = 0, ALUResultEb0 = 0
          ResultSrcEb0 = 0
          SrcAE =         14, ScrBE =         32, ALUResultE =         46, WriteDataE =         32
          ForwardAE = 00, ForwardBE = 00
// MEMORY ===============================
          PCPlus4M = 0x00000000
                                RdM =  0
          RegWriteM = 0, ResultSrcM = 00, MemWriteM = 0
                                  ALUResultM = 2156134975, WriteDataM =          0
          ReadDataM =          0, ReadDataM_sel =          0
// WRITE-BACK ===========================
                                                  PCPlus4W = 0x00000000
                                RdW =  0
          RegWriteW = 0, ResultSrcW = 00
                                  ALUResultW =          0
          ReadDataW =          0, ResultW =          0

// Memory Data -----------------------------------
       Memory Read  @ 0x8084023f:
                 Data =          0   |   0x00000000

// Registers Data --------------------------------
                  x0  =          0   |   0x00000000
                  x1  =          0   |   0x00000000
                  x2  =         14   |   0x0000000e
                  x3  =         68   |   0x00000044
                  x4  =          1   |   0x00000001
                  x5  =         18   |   0x00000012
                  x6  =          0   |   0x00000000
                  x7  =         14   |   0x0000000e
                  x8  =          0   |   0x00000000
                  x9  =         32   |   0x00000020
                  x10 =          0   |   0x00000000
                  x11 =          0   |   0x00000000
                  x12 =          0   |   0x00000000
                  x13 =          0   |   0x00000000
                  x14 =          0   |   0x00000000
                  x15 =          0   |   0x00000000
                  x16 =          0   |   0x00000000
                  x17 =          0   |   0x00000000
                  x18 =          0   |   0x00000000
                  x19 =          0   |   0x00000000
                  x20 =          0   |   0x00000000
                  x21 =          0   |   0x00000000
                  x22 =          0   |   0x00000000
                  x23 =          0   |   0x00000000
                  x24 =          0   |   0x00000000
                  x25 =          0   |   0x00000000
                  x26 =          0   |   0x00000000
                  x27 =          0   |   0x00000000
                  x28 =          0   |   0x00000000
                  x29 =          0   |   0x00000000
                  x30 =          0   |   0x00000000
                  x31 =          0   |   0x00000000

// ------------------------[CYCLE 25]------------------------
PC = 0x00000054
Instr = 0x0042a333 (slt x6, x5, x4      # x6 = 1)

// Pipeline Stage Status ----------------
// FETCH ================================
          pcF0 = 0x00000058, pcF = 0x00000054, InstrF = 0x0042a333
          PCPlus4F = 0x00000058, PCTargetE = 0x0000004d
          PCSrcE = 0, StallF = 0
// DECODE ===============================
                       pcD = 0x00000050, InstrD = 0x800002b7
          PCPlus4D = 0x00000054
                       StallD = 0, FlushD = 0
          Read1D =          0, Read2D =          0, ImmExtD = 2147483648
          Rs1D =  0, Rs2D =  0, RdD =  5
          RegWriteD = 1, ResultSrcD = 00, MemWriteD = 0, JumpD = 0, BranchD = 0
          ALUControlD = 1011, ALUSrcD = 01, top_ImmSrcD = 100
// EXECUTE ==============================
                       pcE = 0x0000004c
          PCPlus4E = 0x00000050, PCTargetE = 0x0000004d
                                    FlushE = 0
          Read1E =          0, Read2E =          0, ImmExtE =          1
          Rs1E =  0, Rs2E =  1, RdE =  4
          RegWriteE = 1, ResultSrcE = 00, MemWriteE = 0, JumpE = 0, BranchE = 0, PCSrcE = 0
          ALUControlE = 0000, ALUSrcE = 01, ZeroE = 0, ALUResultEb0 = 1
          ResultSrcEb0 = 0
          SrcAE =          0, ScrBE =          1, ALUResultE =          1, WriteDataE =          0
          ForwardAE = 00, ForwardBE = 00
// MEMORY ===============================
          PCPlus4M = 0x0000004c
                                RdM =  2
          RegWriteM = 1, ResultSrcM = 00, MemWriteM = 0
                                  ALUResultM =         46, WriteDataM =         32
          ReadDataM =          0, ReadDataM_sel =          0
// WRITE-BACK ===========================
                                                  PCPlus4W = 0x00000000
                                RdW =  0
          RegWriteW = 0, ResultSrcW = 00
                                  ALUResultW = 2156134975
          ReadDataW =          0, ResultW = 2156134975

// Memory Data -----------------------------------
       Memory Read  @ 0x0000002e:
                 Data =          0   |   0x00000000

// Registers Data --------------------------------
                  x0  =          0   |   0x00000000
                  x1  =          0   |   0x00000000
                  x2  =         14   |   0x0000000e
                  x3  =         68   |   0x00000044
                  x4  =          1   |   0x00000001
                  x5  =         18   |   0x00000012
                  x6  =          0   |   0x00000000
                  x7  =         14   |   0x0000000e
                  x8  =          0   |   0x00000000
                  x9  =         32   |   0x00000020
                  x10 =          0   |   0x00000000
                  x11 =          0   |   0x00000000
                  x12 =          0   |   0x00000000
                  x13 =          0   |   0x00000000
                  x14 =          0   |   0x00000000
                  x15 =          0   |   0x00000000
                  x16 =          0   |   0x00000000
                  x17 =          0   |   0x00000000
                  x18 =          0   |   0x00000000
                  x19 =          0   |   0x00000000
                  x20 =          0   |   0x00000000
                  x21 =          0   |   0x00000000
                  x22 =          0   |   0x00000000
                  x23 =          0   |   0x00000000
                  x24 =          0   |   0x00000000
                  x25 =          0   |   0x00000000
                  x26 =          0   |   0x00000000
                  x27 =          0   |   0x00000000
                  x28 =          0   |   0x00000000
                  x29 =          0   |   0x00000000
                  x30 =          0   |   0x00000000
                  x31 =          0   |   0x00000000

// ------------------------[CYCLE 26]------------------------
PC = 0x00000058
Instr = 0x00030063 (beq x6, x0, wrong   # shouldn't be taken)

// Pipeline Stage Status ----------------
// FETCH ================================
          pcF0 = 0x0000005c, pcF = 0x00000058, InstrF = 0x00030063
          PCPlus4F = 0x0000005c, PCTargetE = 0x80000050
          PCSrcE = 0, StallF = 0
// DECODE ===============================
                       pcD = 0x00000054, InstrD = 0x0042a333
          PCPlus4D = 0x00000058
                       StallD = 0, FlushD = 0
          Read1D =         18, Read2D =          1, ImmExtD = 2156134975
          Rs1D =  5, Rs2D =  4, RdD =  6
          RegWriteD = 1, ResultSrcD = 00, MemWriteD = 0, JumpD = 0, BranchD = 0
          ALUControlD = 0101, ALUSrcD = 00, top_ImmSrcD = 111
// EXECUTE ==============================
                       pcE = 0x00000050
          PCPlus4E = 0x00000054, PCTargetE = 0x80000050
                                    FlushE = 0
          Read1E =          0, Read2E =          0, ImmExtE = 2147483648
          Rs1E =  0, Rs2E =  0, RdE =  5
          RegWriteE = 1, ResultSrcE = 00, MemWriteE = 0, JumpE = 0, BranchE = 0, PCSrcE = 0
          ALUControlE = 1011, ALUSrcE = 01, ZeroE = 0, ALUResultEb0 = 0
          ResultSrcEb0 = 0
          SrcAE =          0, ScrBE = 2147483648, ALUResultE = 2147483648, WriteDataE =          0
          ForwardAE = 00, ForwardBE = 00
// MEMORY ===============================
          PCPlus4M = 0x00000050
                                RdM =  4
          RegWriteM = 1, ResultSrcM = 00, MemWriteM = 0
                                  ALUResultM =          1, WriteDataM =          0
          ReadDataM =          0, ReadDataM_sel =          0
// WRITE-BACK ===========================
                                                  PCPlus4W = 0x0000004c
                                RdW =  2
          RegWriteW = 1, ResultSrcW = 00
                                  ALUResultW =         46
          ReadDataW =          0, ResultW =         46

// Memory Data -----------------------------------
       Memory Read  @ 0x00000001:
                 Data =          0   |   0x00000000

// Registers Data --------------------------------
                  x0  =          0   |   0x00000000
                  x1  =          0   |   0x00000000
                  x2  =         46   |   0x0000002e
                  x3  =         68   |   0x00000044
                  x4  =          1   |   0x00000001
                  x5  =         18   |   0x00000012
                  x6  =          0   |   0x00000000
                  x7  =         14   |   0x0000000e
                  x8  =          0   |   0x00000000
                  x9  =         32   |   0x00000020
                  x10 =          0   |   0x00000000
                  x11 =          0   |   0x00000000
                  x12 =          0   |   0x00000000
                  x13 =          0   |   0x00000000
                  x14 =          0   |   0x00000000
                  x15 =          0   |   0x00000000
                  x16 =          0   |   0x00000000
                  x17 =          0   |   0x00000000
                  x18 =          0   |   0x00000000
                  x19 =          0   |   0x00000000
                  x20 =          0   |   0x00000000
                  x21 =          0   |   0x00000000
                  x22 =          0   |   0x00000000
                  x23 =          0   |   0x00000000
                  x24 =          0   |   0x00000000
                  x25 =          0   |   0x00000000
                  x26 =          0   |   0x00000000
                  x27 =          0   |   0x00000000
                  x28 =          0   |   0x00000000
                  x29 =          0   |   0x00000000
                  x30 =          0   |   0x00000000
                  x31 =          0   |   0x00000000

// ------------------------[CYCLE 27]------------------------
PC = 0x0000005c
Instr = 0xabcde4b7 (lui x9, 0xABCDE     # x9 = 0xABCDE000)

// Pipeline Stage Status ----------------
// FETCH ================================
          pcF0 = 0x00000060, pcF = 0x0000005c, InstrF = 0xabcde4b7
          PCPlus4F = 0x00000060, PCTargetE = 0x80840293
          PCSrcE = 0, StallF = 0
// DECODE ===============================
                       pcD = 0x00000058, InstrD = 0x00030063
          PCPlus4D = 0x0000005c
                       StallD = 0, FlushD = 0
          Read1D =          0, Read2D =          0, ImmExtD =          0
          Rs1D =  6, Rs2D =  0, RdD =  0
          RegWriteD = 0, ResultSrcD = 00, MemWriteD = 0, JumpD = 0, BranchD = 1
          ALUControlD = 0001, ALUSrcD = 00, top_ImmSrcD = 010
// EXECUTE ==============================
                       pcE = 0x00000054
          PCPlus4E = 0x00000058, PCTargetE = 0x80840293
                                    FlushE = 0
          Read1E =         18, Read2E =          1, ImmExtE = 2156134975
          Rs1E =  5, Rs2E =  4, RdE =  6
          RegWriteE = 1, ResultSrcE = 00, MemWriteE = 0, JumpE = 0, BranchE = 0, PCSrcE = 0
          ALUControlE = 0101, ALUSrcE = 00, ZeroE = 0, ALUResultEb0 = 1
          ResultSrcEb0 = 0
          SrcAE = 2147483648, ScrBE =          1, ALUResultE =          1, WriteDataE =          1
          ForwardAE = 10, ForwardBE = 01
// MEMORY ===============================
          PCPlus4M = 0x00000054
                                RdM =  5
          RegWriteM = 1, ResultSrcM = 00, MemWriteM = 0
                                  ALUResultM = 2147483648, WriteDataM =          0
          ReadDataM =          0, ReadDataM_sel =          0
// WRITE-BACK ===========================
                                                  PCPlus4W = 0x00000050
                                RdW =  4
          RegWriteW = 1, ResultSrcW = 00
                                  ALUResultW =          1
          ReadDataW =          0, ResultW =          1

// Memory Data -----------------------------------
       Memory Read  @ 0x80000000:
                 Data =          0   |   0x00000000

// Registers Data --------------------------------
                  x0  =          0   |   0x00000000
                  x1  =          0   |   0x00000000
                  x2  =         46   |   0x0000002e
                  x3  =         68   |   0x00000044
                  x4  =          1   |   0x00000001
                  x5  =         18   |   0x00000012
                  x6  =          0   |   0x00000000
                  x7  =         14   |   0x0000000e
                  x8  =          0   |   0x00000000
                  x9  =         32   |   0x00000020
                  x10 =          0   |   0x00000000
                  x11 =          0   |   0x00000000
                  x12 =          0   |   0x00000000
                  x13 =          0   |   0x00000000
                  x14 =          0   |   0x00000000
                  x15 =          0   |   0x00000000
                  x16 =          0   |   0x00000000
                  x17 =          0   |   0x00000000
                  x18 =          0   |   0x00000000
                  x19 =          0   |   0x00000000
                  x20 =          0   |   0x00000000
                  x21 =          0   |   0x00000000
                  x22 =          0   |   0x00000000
                  x23 =          0   |   0x00000000
                  x24 =          0   |   0x00000000
                  x25 =          0   |   0x00000000
                  x26 =          0   |   0x00000000
                  x27 =          0   |   0x00000000
                  x28 =          0   |   0x00000000
                  x29 =          0   |   0x00000000
                  x30 =          0   |   0x00000000
                  x31 =          0   |   0x00000000

// ------------------------[CYCLE 28]------------------------
PC = 0x00000060
Instr = 0x00910133 (add x2, x2, x9      # x2 = 0xABCDE02E)

// Pipeline Stage Status ----------------
// FETCH ================================
          pcF0 = 0x00000064, pcF = 0x00000060, InstrF = 0x00910133
          PCPlus4F = 0x00000064, PCTargetE = 0x00000058
          PCSrcE = 0, StallF = 0
// DECODE ===============================
                       pcD = 0x0000005c, InstrD = 0xabcde4b7
          PCPlus4D = 0x00000060
                       StallD = 0, FlushD = 0
          Read1D =          0, Read2D =          0, ImmExtD = 2882396160
          Rs1D = 27, Rs2D = 28, RdD =  9
          RegWriteD = 1, ResultSrcD = 00, MemWriteD = 0, JumpD = 0, BranchD = 0
          ALUControlD = 1011, ALUSrcD = 01, top_ImmSrcD = 100
// EXECUTE ==============================
                       pcE = 0x00000058
          PCPlus4E = 0x0000005c, PCTargetE = 0x00000058
                                    FlushE = 0
          Read1E =          0, Read2E =          0, ImmExtE =          0
          Rs1E =  6, Rs2E =  0, RdE =  0
          RegWriteE = 0, ResultSrcE = 00, MemWriteE = 0, JumpE = 0, BranchE = 1, PCSrcE = 0
          ALUControlE = 0001, ALUSrcE = 00, ZeroE = 0, ALUResultEb0 = 1
          ResultSrcEb0 = 0
          SrcAE =          1, ScrBE =          0, ALUResultE =          1, WriteDataE =          0
          ForwardAE = 10, ForwardBE = 00
// MEMORY ===============================
          PCPlus4M = 0x00000058
                                RdM =  6
          RegWriteM = 1, ResultSrcM = 00, MemWriteM = 0
                                  ALUResultM =          1, WriteDataM =          1
          ReadDataM =          0, ReadDataM_sel =          0
// WRITE-BACK ===========================
                                                  PCPlus4W = 0x00000054
                                RdW =  5
          RegWriteW = 1, ResultSrcW = 00
                                  ALUResultW = 2147483648
          ReadDataW =          0, ResultW = 2147483648

// Memory Data -----------------------------------
       Memory Read  @ 0x00000001:
                 Data =          0   |   0x00000000

// Registers Data --------------------------------
                  x0  =          0   |   0x00000000
                  x1  =          0   |   0x00000000
                  x2  =         46   |   0x0000002e
                  x3  =         68   |   0x00000044
                  x4  =          1   |   0x00000001
                  x5  = 2147483648   |   0x80000000
                  x6  =          0   |   0x00000000
                  x7  =         14   |   0x0000000e
                  x8  =          0   |   0x00000000
                  x9  =         32   |   0x00000020
                  x10 =          0   |   0x00000000
                  x11 =          0   |   0x00000000
                  x12 =          0   |   0x00000000
                  x13 =          0   |   0x00000000
                  x14 =          0   |   0x00000000
                  x15 =          0   |   0x00000000
                  x16 =          0   |   0x00000000
                  x17 =          0   |   0x00000000
                  x18 =          0   |   0x00000000
                  x19 =          0   |   0x00000000
                  x20 =          0   |   0x00000000
                  x21 =          0   |   0x00000000
                  x22 =          0   |   0x00000000
                  x23 =          0   |   0x00000000
                  x24 =          0   |   0x00000000
                  x25 =          0   |   0x00000000
                  x26 =          0   |   0x00000000
                  x27 =          0   |   0x00000000
                  x28 =          0   |   0x00000000
                  x29 =          0   |   0x00000000
                  x30 =          0   |   0x00000000
                  x31 =          0   |   0x00000000

// ------------------------[CYCLE 29]------------------------
PC = 0x00000064
Instr = 0x0421a023 (sw x2, 0x40(x3)     # mem[132] = 0xABCDE02E)

// Pipeline Stage Status ----------------
// FETCH ================================
          pcF0 = 0x00000068, pcF = 0x00000064, InstrF = 0x0421a023
          PCPlus4F = 0x00000068, PCTargetE = 0xabcde05c
          PCSrcE = 0, StallF = 0
// DECODE ===============================
                       pcD = 0x00000060, InstrD = 0x00910133
          PCPlus4D = 0x00000064
                       StallD = 0, FlushD = 0
          Read1D =         46, Read2D =         32, ImmExtD = 2156134975
          Rs1D =  2, Rs2D =  9, RdD =  2
          RegWriteD = 1, ResultSrcD = 00, MemWriteD = 0, JumpD = 0, BranchD = 0
          ALUControlD = 0000, ALUSrcD = 00, top_ImmSrcD = 111
// EXECUTE ==============================
                       pcE = 0x0000005c
          PCPlus4E = 0x00000060, PCTargetE = 0xabcde05c
                                    FlushE = 0
          Read1E =          0, Read2E =          0, ImmExtE = 2882396160
          Rs1E = 27, Rs2E = 28, RdE =  9
          RegWriteE = 1, ResultSrcE = 00, MemWriteE = 0, JumpE = 0, BranchE = 0, PCSrcE = 0
          ALUControlE = 1011, ALUSrcE = 01, ZeroE = 0, ALUResultEb0 = 0
          ResultSrcEb0 = 0
          SrcAE =          0, ScrBE = 2882396160, ALUResultE = 2882396160, WriteDataE =          0
          ForwardAE = 00, ForwardBE = 00
// MEMORY ===============================
          PCPlus4M = 0x0000005c
                                RdM =  0
          RegWriteM = 0, ResultSrcM = 00, MemWriteM = 0
                                  ALUResultM =          1, WriteDataM =          0
          ReadDataM =          0, ReadDataM_sel =          0
// WRITE-BACK ===========================
                                                  PCPlus4W = 0x00000058
                                RdW =  6
          RegWriteW = 1, ResultSrcW = 00
                                  ALUResultW =          1
          ReadDataW =          0, ResultW =          1

// Memory Data -----------------------------------
       Memory Read  @ 0x00000001:
                 Data =          0   |   0x00000000

// Registers Data --------------------------------
                  x0  =          0   |   0x00000000
                  x1  =          0   |   0x00000000
                  x2  =         46   |   0x0000002e
                  x3  =         68   |   0x00000044
                  x4  =          1   |   0x00000001
                  x5  = 2147483648   |   0x80000000
                  x6  =          1   |   0x00000001
                  x7  =         14   |   0x0000000e
                  x8  =          0   |   0x00000000
                  x9  =         32   |   0x00000020
                  x10 =          0   |   0x00000000
                  x11 =          0   |   0x00000000
                  x12 =          0   |   0x00000000
                  x13 =          0   |   0x00000000
                  x14 =          0   |   0x00000000
                  x15 =          0   |   0x00000000
                  x16 =          0   |   0x00000000
                  x17 =          0   |   0x00000000
                  x18 =          0   |   0x00000000
                  x19 =          0   |   0x00000000
                  x20 =          0   |   0x00000000
                  x21 =          0   |   0x00000000
                  x22 =          0   |   0x00000000
                  x23 =          0   |   0x00000000
                  x24 =          0   |   0x00000000
                  x25 =          0   |   0x00000000
                  x26 =          0   |   0x00000000
                  x27 =          0   |   0x00000000
                  x28 =          0   |   0x00000000
                  x29 =          0   |   0x00000000
                  x30 =          0   |   0x00000000
                  x31 =          0   |   0x00000000

// ------------------------[CYCLE 30]------------------------
PC = 0x00000068
Instr = 0x00210063 (beq x2, x2, done    # infinite loop)

// Pipeline Stage Status ----------------
// FETCH ================================
          pcF0 = 0x0000006c, pcF = 0x00000068, InstrF = 0x00210063
          PCPlus4F = 0x0000006c, PCTargetE = 0x8084029f
          PCSrcE = 0, StallF = 0
// DECODE ===============================
                       pcD = 0x00000064, InstrD = 0x0421a023
          PCPlus4D = 0x00000068
                       StallD = 0, FlushD = 0
          Read1D =         68, Read2D =         46, ImmExtD =         64
          Rs1D =  3, Rs2D =  2, RdD =  0
          RegWriteD = 0, ResultSrcD = 00, MemWriteD = 1, JumpD = 0, BranchD = 0
          ALUControlD = 0000, ALUSrcD = 01, top_ImmSrcD = 001
// EXECUTE ==============================
                       pcE = 0x00000060
          PCPlus4E = 0x00000064, PCTargetE = 0x8084029f
                                    FlushE = 0
          Read1E =         46, Read2E =         32, ImmExtE = 2156134975
          Rs1E =  2, Rs2E =  9, RdE =  2
          RegWriteE = 1, ResultSrcE = 00, MemWriteE = 0, JumpE = 0, BranchE = 0, PCSrcE = 0
          ALUControlE = 0000, ALUSrcE = 00, ZeroE = 0, ALUResultEb0 = 0
          ResultSrcEb0 = 0
          SrcAE =         46, ScrBE = 2882396160, ALUResultE = 2882396206, WriteDataE = 2882396160
          ForwardAE = 00, ForwardBE = 10
// MEMORY ===============================
          PCPlus4M = 0x00000060
                                RdM =  9
          RegWriteM = 1, ResultSrcM = 00, MemWriteM = 0
                                  ALUResultM = 2882396160, WriteDataM =          0
          ReadDataM =          0, ReadDataM_sel =          0
// WRITE-BACK ===========================
                                                  PCPlus4W = 0x0000005c
                                RdW =  0
          RegWriteW = 0, ResultSrcW = 00
                                  ALUResultW =          1
          ReadDataW =          0, ResultW =          1

// Memory Data -----------------------------------
       Memory Read  @ 0xabcde000:
                 Data =          0   |   0x00000000

// Registers Data --------------------------------
                  x0  =          0   |   0x00000000
                  x1  =          0   |   0x00000000
                  x2  =         46   |   0x0000002e
                  x3  =         68   |   0x00000044
                  x4  =          1   |   0x00000001
                  x5  = 2147483648   |   0x80000000
                  x6  =          1   |   0x00000001
                  x7  =         14   |   0x0000000e
                  x8  =          0   |   0x00000000
                  x9  =         32   |   0x00000020
                  x10 =          0   |   0x00000000
                  x11 =          0   |   0x00000000
                  x12 =          0   |   0x00000000
                  x13 =          0   |   0x00000000
                  x14 =          0   |   0x00000000
                  x15 =          0   |   0x00000000
                  x16 =          0   |   0x00000000
                  x17 =          0   |   0x00000000
                  x18 =          0   |   0x00000000
                  x19 =          0   |   0x00000000
                  x20 =          0   |   0x00000000
                  x21 =          0   |   0x00000000
                  x22 =          0   |   0x00000000
                  x23 =          0   |   0x00000000
                  x24 =          0   |   0x00000000
                  x25 =          0   |   0x00000000
                  x26 =          0   |   0x00000000
                  x27 =          0   |   0x00000000
                  x28 =          0   |   0x00000000
                  x29 =          0   |   0x00000000
                  x30 =          0   |   0x00000000
                  x31 =          0   |   0x00000000

// ------------------------[CYCLE 31]------------------------
PC = 0x0000006c
Instr = 0x00000000 (Unknown instruction)

// Pipeline Stage Status ----------------
// FETCH ================================
          pcF0 = 0x00000070, pcF = 0x0000006c, InstrF = 0x00000000
          PCPlus4F = 0x00000070, PCTargetE = 0x000000a4
          PCSrcE = 0, StallF = 0
// DECODE ===============================
                       pcD = 0x00000068, InstrD = 0x00210063
          PCPlus4D = 0x0000006c
                       StallD = 0, FlushD = 0
          Read1D =         46, Read2D =         46, ImmExtD =          0
          Rs1D =  2, Rs2D =  2, RdD =  0
          RegWriteD = 0, ResultSrcD = 00, MemWriteD = 0, JumpD = 0, BranchD = 1
          ALUControlD = 0001, ALUSrcD = 00, top_ImmSrcD = 010
// EXECUTE ==============================
                       pcE = 0x00000064
          PCPlus4E = 0x00000068, PCTargetE = 0x000000a4
                                    FlushE = 0
          Read1E =         68, Read2E =         46, ImmExtE =         64
          Rs1E =  3, Rs2E =  2, RdE =  0
          RegWriteE = 0, ResultSrcE = 00, MemWriteE = 1, JumpE = 0, BranchE = 0, PCSrcE = 0
          ALUControlE = 0000, ALUSrcE = 01, ZeroE = 0, ALUResultEb0 = 0
          ResultSrcEb0 = 0
          SrcAE =         68, ScrBE =         64, ALUResultE =        132, WriteDataE = 2882396206
          ForwardAE = 00, ForwardBE = 10
// MEMORY ===============================
          PCPlus4M = 0x00000064
                                RdM =  2
          RegWriteM = 1, ResultSrcM = 00, MemWriteM = 0
                                  ALUResultM = 2882396206, WriteDataM =          0
          ReadDataM =          0, ReadDataM_sel =          0
// WRITE-BACK ===========================
                                                  PCPlus4W = 0x00000060
                                RdW =  9
          RegWriteW = 1, ResultSrcW = 00
                                  ALUResultW = 2882396160
          ReadDataW =          0, ResultW = 2882396160

// Memory Data -----------------------------------
       Memory Read  @ 0xabcde02e:
                 Data =          0   |   0x00000000

// Registers Data --------------------------------
                  x0  =          0   |   0x00000000
                  x1  =          0   |   0x00000000
                  x2  =         46   |   0x0000002e
                  x3  =         68   |   0x00000044
                  x4  =          1   |   0x00000001
                  x5  = 2147483648   |   0x80000000
                  x6  =          1   |   0x00000001
                  x7  =         14   |   0x0000000e
                  x8  =          0   |   0x00000000
                  x9  = 2882396160   |   0xabcde000
                  x10 =          0   |   0x00000000
                  x11 =          0   |   0x00000000
                  x12 =          0   |   0x00000000
                  x13 =          0   |   0x00000000
                  x14 =          0   |   0x00000000
                  x15 =          0   |   0x00000000
                  x16 =          0   |   0x00000000
                  x17 =          0   |   0x00000000
                  x18 =          0   |   0x00000000
                  x19 =          0   |   0x00000000
                  x20 =          0   |   0x00000000
                  x21 =          0   |   0x00000000
                  x22 =          0   |   0x00000000
                  x23 =          0   |   0x00000000
                  x24 =          0   |   0x00000000
                  x25 =          0   |   0x00000000
                  x26 =          0   |   0x00000000
                  x27 =          0   |   0x00000000
                  x28 =          0   |   0x00000000
                  x29 =          0   |   0x00000000
                  x30 =          0   |   0x00000000
                  x31 =          0   |   0x00000000

// ------------------------[CYCLE 32]------------------------
PC = 0x00000070
Instr = 0x00000000 (Unknown instruction)

// Pipeline Stage Status ----------------
// FETCH ================================
          pcF0 = 0x00000068, pcF = 0x00000070, InstrF = 0x00000000
          PCPlus4F = 0x00000074, PCTargetE = 0x00000068
          PCSrcE = 1, StallF = 0
// DECODE ===============================
                       pcD = 0x0000006c, InstrD = 0x00000000
          PCPlus4D = 0x00000070
                       StallD = 0, FlushD = 1
          Read1D =          0, Read2D =          0, ImmExtD = 2156134975
          Rs1D =  0, Rs2D =  0, RdD =  0
          RegWriteD = 0, ResultSrcD = 00, MemWriteD = 0, JumpD = 0, BranchD = 0
          ALUControlD = 0000, ALUSrcD = 11, top_ImmSrcD = 111
// EXECUTE ==============================
                       pcE = 0x00000068
          PCPlus4E = 0x0000006c, PCTargetE = 0x00000068
                                    FlushE = 1
          Read1E =         46, Read2E =         46, ImmExtE =          0
          Rs1E =  2, Rs2E =  2, RdE =  0
          RegWriteE = 0, ResultSrcE = 00, MemWriteE = 0, JumpE = 0, BranchE = 1, PCSrcE = 1
          ALUControlE = 0001, ALUSrcE = 00, ZeroE = 1, ALUResultEb0 = 0
          ResultSrcEb0 = 0
          SrcAE = 2882396206, ScrBE = 2882396206, ALUResultE =          0, WriteDataE = 2882396206
          ForwardAE = 01, ForwardBE = 01
// MEMORY ===============================
          PCPlus4M = 0x00000068
                                RdM =  0
          RegWriteM = 0, ResultSrcM = 00, MemWriteM = 1
                                  ALUResultM =        132, WriteDataM = 2882396206
          ReadDataM =          0, ReadDataM_sel =          0
// WRITE-BACK ===========================
                                                  PCPlus4W = 0x00000064
                                RdW =  2
          RegWriteW = 1, ResultSrcW = 00
                                  ALUResultW = 2882396206
          ReadDataW =          0, ResultW = 2882396206

// Memory Data -----------------------------------
       Memory Write @ 0x00000084:
                 Data = 2882396206   |   0xabcde02e
       Memory Read  @ 0x00000084:
                 Data =          0   |   0x00000000

// Registers Data --------------------------------
                  x0  =          0   |   0x00000000
                  x1  =          0   |   0x00000000
                  x2  = 2882396206   |   0xabcde02e
                  x3  =         68   |   0x00000044
                  x4  =          1   |   0x00000001
                  x5  = 2147483648   |   0x80000000
                  x6  =          1   |   0x00000001
                  x7  =         14   |   0x0000000e
                  x8  =          0   |   0x00000000
                  x9  = 2882396160   |   0xabcde000
                  x10 =          0   |   0x00000000
                  x11 =          0   |   0x00000000
                  x12 =          0   |   0x00000000
                  x13 =          0   |   0x00000000
                  x14 =          0   |   0x00000000
                  x15 =          0   |   0x00000000
                  x16 =          0   |   0x00000000
                  x17 =          0   |   0x00000000
                  x18 =          0   |   0x00000000
                  x19 =          0   |   0x00000000
                  x20 =          0   |   0x00000000
                  x21 =          0   |   0x00000000
                  x22 =          0   |   0x00000000
                  x23 =          0   |   0x00000000
                  x24 =          0   |   0x00000000
                  x25 =          0   |   0x00000000
                  x26 =          0   |   0x00000000
                  x27 =          0   |   0x00000000
                  x28 =          0   |   0x00000000
                  x29 =          0   |   0x00000000
                  x30 =          0   |   0x00000000
                  x31 =          0   |   0x00000000

// ------------------------[CYCLE 33]------------------------
PC = 0x00000068
Instr = 0x00210063 (beq x2, x2, done    # infinite loop)

// Pipeline Stage Status ----------------
// FETCH ================================
          pcF0 = 0x0000006c, pcF = 0x00000068, InstrF = 0x00210063
          PCPlus4F = 0x0000006c, PCTargetE = 0x00000000
          PCSrcE = 0, StallF = 0
// DECODE ===============================
                       pcD = 0x00000000, InstrD = 0x00000000
          PCPlus4D = 0x00000000
                       StallD = 0, FlushD = 0
          Read1D =          0, Read2D =          0, ImmExtD = 2156134975
          Rs1D =  0, Rs2D =  0, RdD =  0
          RegWriteD = 0, ResultSrcD = 00, MemWriteD = 0, JumpD = 0, BranchD = 0
          ALUControlD = 0000, ALUSrcD = 11, top_ImmSrcD = 111
// EXECUTE ==============================
                       pcE = 0x00000000
          PCPlus4E = 0x00000000, PCTargetE = 0x00000000
                                    FlushE = 0
          Read1E =          0, Read2E =          0, ImmExtE =          0
          Rs1E =  0, Rs2E =  0, RdE =  0
          RegWriteE = 0, ResultSrcE = 00, MemWriteE = 0, JumpE = 0, BranchE = 0, PCSrcE = 0
          ALUControlE = 0000, ALUSrcE = 00, ZeroE = 1, ALUResultEb0 = 0
          ResultSrcEb0 = 0
          SrcAE =          0, ScrBE =          0, ALUResultE =          0, WriteDataE =          0
          ForwardAE = 00, ForwardBE = 00
// MEMORY ===============================
          PCPlus4M = 0x0000006c
                                RdM =  0
          RegWriteM = 0, ResultSrcM = 00, MemWriteM = 0
                                  ALUResultM =          0, WriteDataM =         46
          ReadDataM =          0, ReadDataM_sel =          0
// WRITE-BACK ===========================
                                                  PCPlus4W = 0x00000068
                                RdW =  0
          RegWriteW = 0, ResultSrcW = 00
                                  ALUResultW =        132
          ReadDataW =          0, ResultW =        132

// Memory Data -----------------------------------
       Memory Read  @ 0x00000000:
                 Data =          0   |   0x00000000

// Registers Data --------------------------------
                  x0  =          0   |   0x00000000
                  x1  =          0   |   0x00000000
                  x2  = 2882396206   |   0xabcde02e
                  x3  =         68   |   0x00000044
                  x4  =          1   |   0x00000001
                  x5  = 2147483648   |   0x80000000
                  x6  =          1   |   0x00000001
                  x7  =         14   |   0x0000000e
                  x8  =          0   |   0x00000000
                  x9  = 2882396160   |   0xabcde000
                  x10 =          0   |   0x00000000
                  x11 =          0   |   0x00000000
                  x12 =          0   |   0x00000000
                  x13 =          0   |   0x00000000
                  x14 =          0   |   0x00000000
                  x15 =          0   |   0x00000000
                  x16 =          0   |   0x00000000
                  x17 =          0   |   0x00000000
                  x18 =          0   |   0x00000000
                  x19 =          0   |   0x00000000
                  x20 =          0   |   0x00000000
                  x21 =          0   |   0x00000000
                  x22 =          0   |   0x00000000
                  x23 =          0   |   0x00000000
                  x24 =          0   |   0x00000000
                  x25 =          0   |   0x00000000
                  x26 =          0   |   0x00000000
                  x27 =          0   |   0x00000000
                  x28 =          0   |   0x00000000
                  x29 =          0   |   0x00000000
                  x30 =          0   |   0x00000000
                  x31 =          0   |   0x00000000

// ------------------------[CYCLE 34]------------------------
PC = 0x0000006c
Instr = 0x00000000 (Unknown instruction)

// Pipeline Stage Status ----------------
// FETCH ================================
          pcF0 = 0x00000070, pcF = 0x0000006c, InstrF = 0x00000000
          PCPlus4F = 0x00000070, PCTargetE = 0x8084023f
          PCSrcE = 0, StallF = 0
// DECODE ===============================
                       pcD = 0x00000068, InstrD = 0x00210063
          PCPlus4D = 0x0000006c
                       StallD = 0, FlushD = 0
          Read1D = 2882396206, Read2D = 2882396206, ImmExtD =          0
          Rs1D =  2, Rs2D =  2, RdD =  0
          RegWriteD = 0, ResultSrcD = 00, MemWriteD = 0, JumpD = 0, BranchD = 1
          ALUControlD = 0001, ALUSrcD = 00, top_ImmSrcD = 010
// EXECUTE ==============================
                       pcE = 0x00000000
          PCPlus4E = 0x00000000, PCTargetE = 0x8084023f
                                    FlushE = 0
          Read1E =          0, Read2E =          0, ImmExtE = 2156134975
          Rs1E =  0, Rs2E =  0, RdE =  0
          RegWriteE = 0, ResultSrcE = 00, MemWriteE = 0, JumpE = 0, BranchE = 0, PCSrcE = 0
          ALUControlE = 0000, ALUSrcE = 11, ZeroE = 0, ALUResultEb0 = 1
          ResultSrcEb0 = 0
          SrcAE =          0, ScrBE = 2156134975, ALUResultE = 2156134975, WriteDataE =          0
          ForwardAE = 00, ForwardBE = 00
// MEMORY ===============================
          PCPlus4M = 0x00000000
                                RdM =  0
          RegWriteM = 0, ResultSrcM = 00, MemWriteM = 0
                                  ALUResultM =          0, WriteDataM =          0
          ReadDataM =          0, ReadDataM_sel =          0
// WRITE-BACK ===========================
                                                  PCPlus4W = 0x0000006c
                                RdW =  0
          RegWriteW = 0, ResultSrcW = 00
                                  ALUResultW =          0
          ReadDataW =          0, ResultW =          0

// Memory Data -----------------------------------
       Memory Read  @ 0x00000000:
                 Data =          0   |   0x00000000

// Registers Data --------------------------------
                  x0  =          0   |   0x00000000
                  x1  =          0   |   0x00000000
                  x2  = 2882396206   |   0xabcde02e
                  x3  =         68   |   0x00000044
                  x4  =          1   |   0x00000001
                  x5  = 2147483648   |   0x80000000
                  x6  =          1   |   0x00000001
                  x7  =         14   |   0x0000000e
                  x8  =          0   |   0x00000000
                  x9  = 2882396160   |   0xabcde000
                  x10 =          0   |   0x00000000
                  x11 =          0   |   0x00000000
                  x12 =          0   |   0x00000000
                  x13 =          0   |   0x00000000
                  x14 =          0   |   0x00000000
                  x15 =          0   |   0x00000000
                  x16 =          0   |   0x00000000
                  x17 =          0   |   0x00000000
                  x18 =          0   |   0x00000000
                  x19 =          0   |   0x00000000
                  x20 =          0   |   0x00000000
                  x21 =          0   |   0x00000000
                  x22 =          0   |   0x00000000
                  x23 =          0   |   0x00000000
                  x24 =          0   |   0x00000000
                  x25 =          0   |   0x00000000
                  x26 =          0   |   0x00000000
                  x27 =          0   |   0x00000000
                  x28 =          0   |   0x00000000
                  x29 =          0   |   0x00000000
                  x30 =          0   |   0x00000000
                  x31 =          0   |   0x00000000

// ------------------------[CYCLE 35]------------------------
PC = 0x00000070
Instr = 0x00000000 (Unknown instruction)

// Pipeline Stage Status ----------------
// FETCH ================================
          pcF0 = 0x00000068, pcF = 0x00000070, InstrF = 0x00000000
          PCPlus4F = 0x00000074, PCTargetE = 0x00000068
          PCSrcE = 1, StallF = 0
// DECODE ===============================
                       pcD = 0x0000006c, InstrD = 0x00000000
          PCPlus4D = 0x00000070
                       StallD = 0, FlushD = 1
          Read1D =          0, Read2D =          0, ImmExtD = 2156134975
          Rs1D =  0, Rs2D =  0, RdD =  0
          RegWriteD = 0, ResultSrcD = 00, MemWriteD = 0, JumpD = 0, BranchD = 0
          ALUControlD = 0000, ALUSrcD = 11, top_ImmSrcD = 111
// EXECUTE ==============================
                       pcE = 0x00000068
          PCPlus4E = 0x0000006c, PCTargetE = 0x00000068
                                    FlushE = 1
          Read1E = 2882396206, Read2E = 2882396206, ImmExtE =          0
          Rs1E =  2, Rs2E =  2, RdE =  0
          RegWriteE = 0, ResultSrcE = 00, MemWriteE = 0, JumpE = 0, BranchE = 1, PCSrcE = 1
          ALUControlE = 0001, ALUSrcE = 00, ZeroE = 1, ALUResultEb0 = 0
          ResultSrcEb0 = 0
          SrcAE = 2882396206, ScrBE = 2882396206, ALUResultE =          0, WriteDataE = 2882396206
          ForwardAE = 00, ForwardBE = 00
// MEMORY ===============================
          PCPlus4M = 0x00000000
                                RdM =  0
          RegWriteM = 0, ResultSrcM = 00, MemWriteM = 0
                                  ALUResultM = 2156134975, WriteDataM =          0
          ReadDataM =          0, ReadDataM_sel =          0
// WRITE-BACK ===========================
                                                  PCPlus4W = 0x00000000
                                RdW =  0
          RegWriteW = 0, ResultSrcW = 00
                                  ALUResultW =          0
          ReadDataW =          0, ResultW =          0

// Memory Data -----------------------------------
       Memory Read  @ 0x8084023f:
                 Data =          0   |   0x00000000

// Registers Data --------------------------------
                  x0  =          0   |   0x00000000
                  x1  =          0   |   0x00000000
                  x2  = 2882396206   |   0xabcde02e
                  x3  =         68   |   0x00000044
                  x4  =          1   |   0x00000001
                  x5  = 2147483648   |   0x80000000
                  x6  =          1   |   0x00000001
                  x7  =         14   |   0x0000000e
                  x8  =          0   |   0x00000000
                  x9  = 2882396160   |   0xabcde000
                  x10 =          0   |   0x00000000
                  x11 =          0   |   0x00000000
                  x12 =          0   |   0x00000000
                  x13 =          0   |   0x00000000
                  x14 =          0   |   0x00000000
                  x15 =          0   |   0x00000000
                  x16 =          0   |   0x00000000
                  x17 =          0   |   0x00000000
                  x18 =          0   |   0x00000000
                  x19 =          0   |   0x00000000
                  x20 =          0   |   0x00000000
                  x21 =          0   |   0x00000000
                  x22 =          0   |   0x00000000
                  x23 =          0   |   0x00000000
                  x24 =          0   |   0x00000000
                  x25 =          0   |   0x00000000
                  x26 =          0   |   0x00000000
                  x27 =          0   |   0x00000000
                  x28 =          0   |   0x00000000
                  x29 =          0   |   0x00000000
                  x30 =          0   |   0x00000000
                  x31 =          0   |   0x00000000

// ------------------------[CYCLE 36]------------------------
PC = 0x00000068
Instr = 0x00210063 (beq x2, x2, done    # infinite loop)

// Pipeline Stage Status ----------------
// FETCH ================================
          pcF0 = 0x0000006c, pcF = 0x00000068, InstrF = 0x00210063
          PCPlus4F = 0x0000006c, PCTargetE = 0x00000000
          PCSrcE = 0, StallF = 0
// DECODE ===============================
                       pcD = 0x00000000, InstrD = 0x00000000
          PCPlus4D = 0x00000000
                       StallD = 0, FlushD = 0
          Read1D =          0, Read2D =          0, ImmExtD = 2156134975
          Rs1D =  0, Rs2D =  0, RdD =  0
          RegWriteD = 0, ResultSrcD = 00, MemWriteD = 0, JumpD = 0, BranchD = 0
          ALUControlD = 0000, ALUSrcD = 11, top_ImmSrcD = 111
// EXECUTE ==============================
                       pcE = 0x00000000
          PCPlus4E = 0x00000000, PCTargetE = 0x00000000
                                    FlushE = 0
          Read1E =          0, Read2E =          0, ImmExtE =          0
          Rs1E =  0, Rs2E =  0, RdE =  0
          RegWriteE = 0, ResultSrcE = 00, MemWriteE = 0, JumpE = 0, BranchE = 0, PCSrcE = 0
          ALUControlE = 0000, ALUSrcE = 00, ZeroE = 1, ALUResultEb0 = 0
          ResultSrcEb0 = 0
          SrcAE =          0, ScrBE =          0, ALUResultE =          0, WriteDataE =          0
          ForwardAE = 00, ForwardBE = 00
// MEMORY ===============================
          PCPlus4M = 0x0000006c
                                RdM =  0
          RegWriteM = 0, ResultSrcM = 00, MemWriteM = 0
                                  ALUResultM =          0, WriteDataM =         46
          ReadDataM =          0, ReadDataM_sel =          0
// WRITE-BACK ===========================
                                                  PCPlus4W = 0x00000000
                                RdW =  0
          RegWriteW = 0, ResultSrcW = 00
                                  ALUResultW = 2156134975
          ReadDataW =          0, ResultW = 2156134975

// Memory Data -----------------------------------
       Memory Read  @ 0x00000000:
                 Data =          0   |   0x00000000

// Registers Data --------------------------------
                  x0  =          0   |   0x00000000
                  x1  =          0   |   0x00000000
                  x2  = 2882396206   |   0xabcde02e
                  x3  =         68   |   0x00000044
                  x4  =          1   |   0x00000001
                  x5  = 2147483648   |   0x80000000
                  x6  =          1   |   0x00000001
                  x7  =         14   |   0x0000000e
                  x8  =          0   |   0x00000000
                  x9  = 2882396160   |   0xabcde000
                  x10 =          0   |   0x00000000
                  x11 =          0   |   0x00000000
                  x12 =          0   |   0x00000000
                  x13 =          0   |   0x00000000
                  x14 =          0   |   0x00000000
                  x15 =          0   |   0x00000000
                  x16 =          0   |   0x00000000
                  x17 =          0   |   0x00000000
                  x18 =          0   |   0x00000000
                  x19 =          0   |   0x00000000
                  x20 =          0   |   0x00000000
                  x21 =          0   |   0x00000000
                  x22 =          0   |   0x00000000
                  x23 =          0   |   0x00000000
                  x24 =          0   |   0x00000000
                  x25 =          0   |   0x00000000
                  x26 =          0   |   0x00000000
                  x27 =          0   |   0x00000000
                  x28 =          0   |   0x00000000
                  x29 =          0   |   0x00000000
                  x30 =          0   |   0x00000000
                  x31 =          0   |   0x00000000

✅ Test PASSED!
Final memory verification:
  Address: 0x00000084
  Data:    0xabcde02e

Test Statistics:
Total cycles: 37
