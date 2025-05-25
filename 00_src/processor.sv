`timescale 1ns/1ps

module processor
(
    // Debugging: Add debug ports for regfile
    input  logic [4:0]  i_debug_addr,
    output logic [31:0] o_debug_data,
    
    // System signals
    input   logic           clk, rst,
    output  logic           Ecall, Ebreak,

    // Data path - Instruction Memory
    input   logic   [31:0]  i_InstrF,
    output  logic   [31:0]  o_pcF,

    // Data path - Data Memory
    input   logic   [31:0]  i_ReadDataM,
    output  logic           o_MemWriteM,
    output  logic   [31:0]  o_ALUResultM, o_WriteDataM
);

// From/To Controller signals/buses
logic           RegWriteD, MemWriteD, JumpD, BranchD; 
logic   [3:0]   ALUControlD;
logic   [1:0]   ResultSrcD, ALUSrcD;
logic   [2:0]   ImmSrcD;
logic   [4:0]   MemSrcD; // MemSrcD = {membD, memhD, lwD, membuD, memhuD}

logic   [6:0]   opD;
logic   [14:12] funct3D;
logic           funct7Db5;
logic   [11:0]  funct12D;

logic           ResultSrcEb0;
logic           PCSrcE;
logic           JumpE, BranchE, ZeroE, ALUResultEb0;

// From/To Hazard Unit signals/buses
logic           StallF;
logic           StallD, FlushD;
logic   [4:0]   Rs1D, Rs2D;
logic           FlushE; 
logic   [1:0]   ForwardAE, ForwardBE;
logic   [4:0]   Rs1E, Rs2E, RdE; 
logic           RegWriteM;
logic   [4:0]   RdM;
logic           RegWriteW;
logic   [4:0]   RdW;

// From/To Instruction Memory signals/buses
logic   [31:0]  InstrF;
logic   [31:0]  pcF;

assign InstrF = i_InstrF;

// From/To Data Memory signals/buses
logic   [31:0]  ReadDataM;
logic   [31:0]  ALUResultM, WriteDataM;
logic           MemWriteM;

assign ReadDataM = i_ReadDataM;

controller ctrl
(
    .opD            (opD),
    .funct3D        (funct3D),
    .funct7Db5      (funct7Db5),
    .funct12D       (funct12D),
    .ZeroE          (ZeroE),
    .BranchE        (BranchE),
    .JumpE          (JumpE),
    .ALUResultEb0   (ALUResultEb0),
    .ResultSrcD     (ResultSrcD),
    .MemWriteD      (MemWriteD),
    .PCSrcE         (PCSrcE),
    .ALUSrcD        (ALUSrcD),
    .RegWriteD      (RegWriteD),
    .JumpD          (JumpD),
    .BranchD        (BranchD),
    .ImmSrcD        (ImmSrcD),
    .MemSrcD        (MemSrcD),
    .ALUControlD    (ALUControlD),
    .Ecall          (Ecall),
    .Ebreak         (Ebreak)
);

data_path dp
(
    // Debugging regfile
    .i_debug_addr   (i_debug_addr),
    .o_debug_data   (o_debug_data),
    
    // System signals
    .clk            (clk),
    .rst            (rst),

    // From/To Controller signals/buses 
    .RegWriteD      (RegWriteD),
    .MemWriteD      (MemWriteD),
    .JumpD          (JumpD),
    .BranchD        (BranchD),
    .ALUSrcD        (ALUSrcD),
    .ALUControlD    (ALUControlD),
    .ResultSrcD     (ResultSrcD),
    .ImmSrcD        (ImmSrcD),
    .MemSrcD        (MemSrcD),
    .opD            (opD),
    .funct3D        (funct3D),
    .funct7Db5      (funct7Db5),
    .funct12D       (funct12D),

    .PCSrcE         (PCSrcE),
    .JumpE          (JumpE),
    .BranchE        (BranchE),
    .ZeroE          (ZeroE),
    .ALUResultEb0   (ALUResultEb0),

    // From/To Hazard Unit signals/buses
    .StallF         (StallF),

    .StallD         (StallD),
    .FlushD         (FlushD),
    .Rs1D           (Rs1D),
    .Rs2D           (Rs2D),

    .ResultSrcEb0   (ResultSrcEb0),
    .FlushE         (FlushE),
    .ForwardAE      (ForwardAE),
    .ForwardBE      (ForwardBE),
    .Rs1E           (Rs1E),
    .Rs2E           (Rs2E),
    .RdE            (RdE),

    .RegWriteM      (RegWriteM),
    .RdM            (RdM),

    .RegWriteW      (RegWriteW),
    .RdW            (RdW),

    // From/To Instruction Memory signals/buses
    .InstrF         (InstrF),
    .pcF            (pcF),

    // From/To Data Memory signals/buses
    .ReadDataM      (ReadDataM),
    .ALUResultM     (ALUResultM),
    .WriteDataM     (WriteDataM),
    .MemWriteM      (MemWriteM)
);

hazard_unit hu
(
    .Rs1D         (Rs1D),
    .Rs2D         (Rs2D),
    .Rs1E         (Rs1E),
    .Rs2E         (Rs2E),
    .RdE          (RdE),
    .RdM          (RdM),
    .RdW          (RdW),
    .PCSrcE       (PCSrcE),
    .ResultSrcEb0 (ResultSrcEb0),
    .RegWriteM    (RegWriteM),
    .RegWriteW    (RegWriteW),

    .StallF       (StallF),
    .StallD       (StallD),
    .FlushD       (FlushD),
    .FlushE       (FlushE),
    .ForwardAE    (ForwardAE),
    .ForwardBE    (ForwardBE)
);

assign o_pcF = pcF;
assign o_MemWriteM = MemWriteM;
assign o_ALUResultM = ALUResultM;
assign o_WriteDataM = WriteDataM;

endmodule:processor


