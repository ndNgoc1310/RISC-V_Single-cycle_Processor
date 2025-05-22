`timescale 1ns/1ps

module processor
(
    // System signals
    input   logic           clk, rst,
    output  logic           Ecall, Ebreak,

    // Data path - Instruction Memory
    input   logic   [31:0]  i_InstrF,
    output  logic   [31:0]  o_pcF,
    
    // Controller - Data Memory
    output  logic           o_MemWriteM,

    // Data path - Data Memory
    input   logic   [31:0]  i_ReadDataM,
    output  logic   [31:0]  o_ALUResultM, o_WriteDataM
);

// From/To Controller signals/buses
logic           RegWriteD, MemWriteD, JumpD, BranchD; 
logic   [3:0]   ALUControlD;
logic   [1:0]   ResultSrcD, ALUSrcD;
logic   [2:0]   ImmSrcD;


logic   [6:0]   op;
logic   [14:12] funct3;
logic           funct7b5;
logic   [11:0]  funct12;

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
    .op             (op),
    .funct3         (funct3),
    .funct7b5       (funct7b5),
    .funct12        (funct12),
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
    .ALUControlD    (ALUControlD),
    .Ecall          (Ecall),
    .Ebreak         (Ebreak)
);

data_path dp
(
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
    .op             (op),
    .funct3         (funct3),
    .funct7b5       (funct7b5),
    .funct12        (funct12),

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


