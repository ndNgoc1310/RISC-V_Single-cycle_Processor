// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtestbench__Syms.h"


VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__0(Vtestbench___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+531,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("testbench", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+531,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+331,0,"WriteData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+332,0,"DataAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+333,0,"MemWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+531,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+331,0,"WriteData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+332,0,"DataAddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+333,0,"MemWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"InstrF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"pcF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+526,0,"ReadDataM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+332,0,"ALUResultM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+331,0,"WriteDataM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+333,0,"MemWriteM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dm", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+534,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+535,0,"RAM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+531,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+333,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+334,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+331,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+526,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("im", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+534,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+535,0,"RAM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("proc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+531,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"i_InstrF",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"o_pcF",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+333,0,"o_MemWriteM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+526,0,"i_ReadDataM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+332,0,"o_ALUResultM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+331,0,"o_WriteDataM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"RegWriteD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"MemWriteD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"JumpD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"BranchD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"ALUSrcD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"ALUControlD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+10,0,"ResultSrcD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+11,0,"ImmSrcD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+12,0,"op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+13,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,12);
    tracep->declBit(c+14,0,"funct7b5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"ResultSrcEb0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+335,0,"PCSrcE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"JumpE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"BranchE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"ZeroE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"StallF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"StallD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+335,0,"FlushD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"Rs1D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+20,0,"Rs2D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+289,0,"FlushE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+337,0,"ForwardAE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+338,0,"ForwardBE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+21,0,"Rs1E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+22,0,"Rs2E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+23,0,"RdE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+339,0,"RegWriteM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"RdM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+341,0,"RegWriteW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+342,0,"RdW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1,0,"InstrF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"pcF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+526,0,"ReadDataM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+332,0,"ALUResultM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+331,0,"WriteDataM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+333,0,"MemWriteM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ctrl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+12,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+13,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+14,0,"funct7b5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"ZeroE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"BranchE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"JumpE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"ResultSrcD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+5,0,"MemWriteD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+335,0,"PCSrcE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"ALUSrcD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"RegWriteD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"JumpD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"BranchD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"ImmSrcD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+9,0,"ALUControlD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+24,0,"ALUOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("ad", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+25,0,"opb5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+14,0,"funct7b5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"ALUOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+9,0,"ALUControlD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+26,0,"RtypeSub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("md", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+12,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+4,0,"RegWriteD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"JumpD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"BranchD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"MemWriteD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"ALUSrcD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"ResultSrcD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+11,0,"ImmSrcD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+24,0,"ALUOp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+27,0,"controls",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dp", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+531,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"RegWriteD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"MemWriteD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"JumpD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"BranchD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"ALUSrcD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"ALUControlD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+10,0,"ResultSrcD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+11,0,"ImmSrcD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+12,0,"op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+13,0,"funct3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,12);
    tracep->declBit(c+14,0,"funct7b5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+335,0,"PCSrcE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"JumpE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"BranchE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"ZeroE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"StallF",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"StallD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+335,0,"FlushD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"Rs1D",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+20,0,"Rs2D",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+289,0,"FlushE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+337,0,"ForwardAE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+338,0,"ForwardBE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+21,0,"Rs1E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+22,0,"Rs2E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+23,0,"RdE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+15,0,"ResultSrcEb0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+339,0,"RegWriteM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"RdM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+341,0,"RegWriteW",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+342,0,"RdW",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1,0,"InstrF",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"pcF",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+526,0,"ReadDataM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+332,0,"ALUResultM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+331,0,"WriteDataM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+333,0,"MemWriteM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+290,0,"pcF0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"PCPlus4F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"InstrD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"pcD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"ImmExtD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"PCPlus4D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"Read1D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"Read2D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"RdD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+36,0,"Read1E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"Read2E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"pcE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"ImmExtE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"PCPlus4E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"PCTargetE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+343,0,"SrcAE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+344,0,"SrcBE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+345,0,"ALUResultE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+346,0,"WriteDataE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+42,0,"RegWriteE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"MemWriteE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"ALUSrcE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"ResultSrcE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+46,0,"ALUControlE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+347,0,"PCPlus4M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+348,0,"ResultSrcM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+349,0,"ResultSrcW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+350,0,"ALUResultW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+351,0,"ReadDataW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+352,0,"PCPlus4W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+353,0,"ResultW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+47,0,"PCplus4cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"PCplusbranchcout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+291,0,"OverflowE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ALU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+343,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+344,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"ALUControl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+345,0,"rslt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+336,0,"zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+291,0,"overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+343,0,"src_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+354,0,"src_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+292,0,"sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+293,0,"cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("a1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+343,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+354,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+49,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+292,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+293,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+355,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("a1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+356,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+357,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+294,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+358,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+359,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+360,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+361,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+362,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+363,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+364,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+365,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+363,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+366,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+367,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+368,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+369,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+367,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+371,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+372,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+371,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+374,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+375,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+376,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+375,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+378,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+379,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+380,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+381,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+379,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+382,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+383,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+384,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+385,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+383,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+386,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+387,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a17", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+388,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+389,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+387,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+390,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+391,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a18", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+392,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+393,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+391,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+394,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+395,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a19", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+396,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+397,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+395,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+398,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+399,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+400,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+401,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+358,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+402,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a20", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+404,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+399,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+406,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+407,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a21", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+408,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+409,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+407,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+410,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+411,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a22", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+412,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+413,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+411,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+414,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+415,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a23", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+416,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+417,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+415,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+418,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+419,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a24", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+420,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+421,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+419,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+422,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+423,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a25", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+424,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+425,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+423,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+426,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+427,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a26", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+428,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+429,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+427,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+430,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+431,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a27", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+432,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+433,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+431,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+435,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a28", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+436,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+437,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+435,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+438,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a29", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+440,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+441,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+442,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+443,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+444,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+445,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+446,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+447,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a30", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+448,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+449,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+443,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+450,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+451,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a31", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+452,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+453,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+451,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+454,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+455,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+456,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+457,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+455,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+458,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+459,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+460,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+461,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+447,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+463,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+464,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+465,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+463,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+466,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+467,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+468,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+469,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+467,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+470,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+471,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+472,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+473,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+471,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+474,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+475,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+476,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+477,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+475,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+478,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+480,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+481,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+482,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+361,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("m1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+344,0,"d0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+483,0,"d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+49,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+354,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("m2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+292,0,"d0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+292,0,"d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+484,0,"d2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+485,0,"d3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+537,0,"d4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+295,0,"d5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+537,0,"d6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+537,0,"d7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+345,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("Dreg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+538,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+531,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+335,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+51,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declArray(c+54,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->popPrefix();
    tracep->pushPrefix("Ereg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+539,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+531,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+540,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+289,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+57,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 184,0);
    tracep->declArray(c+63,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 184,0);
    tracep->popPrefix();
    tracep->pushPrefix("Freg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+531,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+290,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("Mreg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+542,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+531,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+540,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+296,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+486,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->popPrefix();
    tracep->pushPrefix("PCmux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"d0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+335,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+290,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("PCplus4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+543,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+541,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+47,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("a1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+70,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+71,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+75,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+78,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+81,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+84,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+87,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+90,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a17", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+93,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a18", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+96,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a19", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+99,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+102,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a20", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+103,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a21", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+106,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a22", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+109,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a23", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+112,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a24", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+115,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a25", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+118,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a26", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+121,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a27", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+124,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a28", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+127,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a29", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+130,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+133,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+540,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a30", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+135,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a31", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+138,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+141,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+143,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+146,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+149,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+152,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+155,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+158,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PCplusbranch", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+541,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+48,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+160,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("a1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+161,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+165,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+170,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+174,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+178,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+182,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+186,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+190,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a17", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+194,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a18", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+198,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+199,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a19", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+202,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+206,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+209,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a20", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+210,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a21", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+214,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+215,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a22", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+218,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a23", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+222,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+223,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+224,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+225,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a24", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+226,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+225,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+229,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a25", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+230,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+229,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+232,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a26", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+234,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a27", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+238,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a28", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+242,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+243,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a29", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+246,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+250,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+251,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+209,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a30", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+254,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a31", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+258,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+259,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+261,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+262,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+263,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+261,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+265,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+268,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+269,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+270,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+268,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+273,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+275,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+276,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+277,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+278,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+276,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+279,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+280,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+281,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+280,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+283,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+284,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+285,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+284,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+287,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("Wreg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+544,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+531,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+540,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+527,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 103,0);
    tracep->declArray(c+490,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 103,0);
    tracep->popPrefix();
    tracep->pushPrefix("ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+288,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,7);
    tracep->declBus(c+11,0,"immsrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+31,0,"immext",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("rf", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+533,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"i_rd_addr_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+20,0,"i_rd_addr_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+342,0,"i_wr_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+341,0,"i_wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+353,0,"i_wr_dat",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"o_rd_dat_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"o_rd_dat_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+537,0,"x00",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+300,0,"x01",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"x02",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+302,0,"x03",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+303,0,"x04",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+304,0,"x05",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+305,0,"x06",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+306,0,"x07",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,0,"x08",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+308,0,"x09",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+309,0,"x10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"x11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+311,0,"x12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+312,0,"x13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+313,0,"x14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+314,0,"x15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+315,0,"x16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+316,0,"x17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+317,0,"x18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+318,0,"x19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+319,0,"x20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+320,0,"x21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+321,0,"x22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+322,0,"x23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+323,0,"x24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+324,0,"x25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+325,0,"x26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+326,0,"x27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+327,0,"x28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+328,0,"x29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+329,0,"x30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+330,0,"x31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+494,0,"i_wr_ens",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("r_x01", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+533,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+495,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+353,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+300,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("r_x02", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+533,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+496,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+353,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("r_x03", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+533,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+497,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+353,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+302,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("r_x04", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+533,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+353,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+303,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("r_x05", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+533,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+499,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+353,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+304,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("r_x06", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+533,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+500,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+353,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+305,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("r_x07", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+533,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+501,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+353,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+306,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("r_x08", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+533,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+502,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+353,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("r_x09", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+533,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+503,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+353,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+308,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("r_x10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+533,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+504,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+353,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+309,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("r_x11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+533,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+505,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+353,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("r_x12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+533,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+353,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+311,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("r_x13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+533,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+507,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+353,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+312,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("r_x14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+533,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+508,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+353,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+313,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("r_x15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+533,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+509,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+353,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+314,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("r_x16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+533,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+353,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+315,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("r_x17", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+533,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+511,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+353,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+316,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("r_x18", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+533,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+512,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+353,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+317,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("r_x19", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+533,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+513,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+353,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+318,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("r_x20", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+533,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+353,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+319,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("r_x21", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+533,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+353,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+320,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("r_x22", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+533,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+516,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+353,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+321,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("r_x23", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+533,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+517,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+353,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+322,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("r_x24", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+533,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+518,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+353,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+323,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("r_x25", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+533,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+519,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+353,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+324,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("r_x26", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+533,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+520,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+353,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+325,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("r_x27", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+533,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+521,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+353,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+326,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("r_x28", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+533,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+522,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+353,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+327,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("r_x29", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+533,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+523,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+353,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+328,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("r_x30", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+533,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+524,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+353,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+329,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("r_x31", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+533,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+525,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+353,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+330,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rsltmux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+350,0,"d0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+351,0,"d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+352,0,"d2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+349,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+353,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("srcAmux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"d0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+353,0,"d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+332,0,"d2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+337,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+343,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("srcBmux1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"d0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+353,0,"d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+332,0,"d2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+338,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+346,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("srcBmux2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+346,0,"d0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+44,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+344,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("hu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+19,0,"Rs1D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+20,0,"Rs2D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+21,0,"Rs1E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+22,0,"Rs2E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+23,0,"RdE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+340,0,"RdM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+342,0,"RdW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+335,0,"PCSrcE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"ResultSrcEb0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+339,0,"RegWriteM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"RegWriteW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"StallF",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"StallD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+335,0,"FlushD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+289,0,"FlushE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+337,0,"ForwardAE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+338,0,"ForwardBE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+18,0,"lwStallD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_top(Vtestbench___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_top\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtestbench___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtestbench___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtestbench___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtestbench___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtestbench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtestbench___024root__trace_register(Vtestbench___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_register\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtestbench___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtestbench___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtestbench___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtestbench___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtestbench___024root__trace_const_0_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtestbench___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_const_0\n"); );
    // Init
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtestbench___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtestbench___024root__trace_const_0_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_const_0_sub_0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+534,(6U),32);
    bufp->fullIData(oldp+535,(0x40U),32);
    bufp->fullIData(oldp+536,(0x20U),32);
    bufp->fullIData(oldp+537,(0U),32);
    bufp->fullIData(oldp+538,(0x60U),32);
    bufp->fullIData(oldp+539,(0xb9U),32);
    bufp->fullBit(oldp+540,(1U));
    bufp->fullBit(oldp+541,(0U));
    bufp->fullIData(oldp+542,(0x69U),32);
    bufp->fullIData(oldp+543,(4U),32);
    bufp->fullIData(oldp+544,(0x68U),32);
}

VL_ATTR_COLD void Vtestbench___024root__trace_full_0_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtestbench___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_full_0\n"); );
    // Init
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtestbench___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtestbench___024root__trace_full_0_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_full_0_sub_0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<6>/*191:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_8;
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.testbench__DOT__dut__DOT__im__DOT__RAM
                            [(0x3fU & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF)]),32);
    bufp->fullIData(oldp+2,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF),32);
    bufp->fullCData(oldp+3,((0x3fU & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF)),6);
    bufp->fullBit(oldp+4,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                 >> 0xaU))));
    bufp->fullBit(oldp+5,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                 >> 6U))));
    bufp->fullBit(oldp+6,((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))));
    bufp->fullBit(oldp+7,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                 >> 3U))));
    bufp->fullBit(oldp+8,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                 >> 7U))));
    bufp->fullCData(oldp+9,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ALUControlD),3);
    bufp->fullCData(oldp+10,((3U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                    >> 4U))),2);
    bufp->fullCData(oldp+11,((3U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                    >> 8U))),2);
    bufp->fullCData(oldp+12,((0x7fU & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])),7);
    bufp->fullCData(oldp+13,((7U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+14,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                  >> 0x1eU))));
    bufp->fullBit(oldp+15,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                  >> 0x16U))));
    bufp->fullBit(oldp+16,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                  >> 0x14U))));
    bufp->fullBit(oldp+17,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                  >> 0x13U))));
    bufp->fullBit(oldp+18,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__StallF));
    bufp->fullCData(oldp+19,((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+20,((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+21,((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                       >> 0xaU))),5);
    bufp->fullCData(oldp+22,((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                       >> 5U))),5);
    bufp->fullCData(oldp+23,((0x1fU & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U])),5);
    bufp->fullCData(oldp+24,((3U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                    >> 1U))),2);
    bufp->fullBit(oldp+25,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                  >> 5U))));
    bufp->fullBit(oldp+26,((IData)((0x40000020U == 
                                    (0x40000020U & 
                                     vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])))));
    bufp->fullSData(oldp+27,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls),11);
    bufp->fullIData(oldp+28,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCPlus4F),32);
    bufp->fullIData(oldp+29,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[1U]),32);
    bufp->fullIData(oldp+31,(((0x200U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                               ? ((0x100U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                                   ? (((- (IData)((
                                                   vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                   >> 0x1fU))) 
                                       << 0x14U) | 
                                      (((0xff000U & 
                                         vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U]) 
                                        | (0x800U & 
                                           (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                            >> 9U))) 
                                       | (0x7feU & 
                                          (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                           >> 0x14U))))
                                   : (((- (IData)((
                                                   vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (
                                                   (0x800U 
                                                    & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                            >> 7U))))))
                               : ((0x100U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                                   ? (((- (IData)((
                                                   vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (
                                                   (0xfe0U 
                                                    & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                       >> 0x14U)) 
                                                   | (0x1fU 
                                                      & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                         >> 7U))))
                                   : (((- (IData)((
                                                   vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (
                                                   vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                   >> 0x14U))))),32);
    bufp->fullIData(oldp+32,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[0U]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__Read1D),32);
    bufp->fullIData(oldp+34,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__Read2D),32);
    bufp->fullCData(oldp+35,((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                       >> 7U))),5);
    bufp->fullIData(oldp+36,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                               << 0x11U) | (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[4U] 
                                            >> 0xfU))),32);
    bufp->fullIData(oldp+37,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[4U] 
                               << 0x11U) | (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                            >> 0xfU))),32);
    bufp->fullIData(oldp+38,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                               << 0x11U) | (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                            >> 0xfU))),32);
    bufp->fullIData(oldp+39,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[0U]),32);
    bufp->fullIData(oldp+41,(((((((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                    ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout)) 
                                   << 0x1fU) | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                 ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout)) 
                                                << 0x1eU)) 
                                 | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                      ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout)) 
                                     << 0x1dU) | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                   ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout)) 
                                                  << 0x1cU))) 
                                | (((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                      ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout)) 
                                     << 0x1bU) | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                   ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout)) 
                                                  << 0x1aU)) 
                                   | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                        ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout)) 
                                       << 0x19U) | 
                                      (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                        ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout)) 
                                       << 0x18U)))) 
                               | ((((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                      ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout)) 
                                     << 0x17U) | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                   ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout)) 
                                                  << 0x16U)) 
                                   | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                        ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout)) 
                                       << 0x15U) | 
                                      (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                        ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout)) 
                                       << 0x14U))) 
                                  | (((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                        ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout)) 
                                       << 0x13U) | 
                                      (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                        ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout)) 
                                       << 0x12U)) | 
                                     ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                        ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout)) 
                                       << 0x11U) | 
                                      (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                        ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout)) 
                                       << 0x10U))))) 
                              | (((((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                      ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout)) 
                                     << 0xfU) | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                  ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout)) 
                                                 << 0xeU)) 
                                   | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                        ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout)) 
                                       << 0xdU) | (
                                                   ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                    ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout)) 
                                                   << 0xcU))) 
                                  | (((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                        ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout)) 
                                       << 0xbU) | (
                                                   ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                    ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout)) 
                                                   << 0xaU)) 
                                     | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                          ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout)) 
                                         << 9U) | (
                                                   ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                    ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout)) 
                                                   << 8U)))) 
                                 | ((((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                        ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout)) 
                                       << 7U) | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                  ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout)) 
                                                 << 6U)) 
                                     | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                          ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout)) 
                                         << 5U) | (
                                                   ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                    ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout)) 
                                                   << 4U))) 
                                    | (((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                          ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout)) 
                                         << 3U) | (
                                                   ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                    ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout)) 
                                                   << 2U)) 
                                       | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                            ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__carry__BRA__0__KET__)) 
                                           << 1U) | 
                                          (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                                  >> 0xfU) 
                                                 ^ 
                                                 vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U])))))))),32);
    bufp->fullBit(oldp+42,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                  >> 0x18U))));
    bufp->fullBit(oldp+43,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                  >> 0x15U))));
    bufp->fullBit(oldp+44,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                  >> 0xfU))));
    bufp->fullCData(oldp+45,((3U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                    >> 0x16U))),2);
    bufp->fullCData(oldp+46,((7U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                    >> 0x10U))),3);
    bufp->fullBit(oldp+47,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout) 
                            & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                               >> 0x1fU))));
    bufp->fullBit(oldp+48,((1U & (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                    >> 0xeU) & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                                >> 0x1fU)) 
                                  | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout) 
                                     & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0))))));
    bufp->fullBit(oldp+49,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                  >> 0x10U))));
    bufp->fullBit(oldp+50,((1U & (~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__StallF)))));
    __Vtemp_1[0U] = vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCPlus4F;
    __Vtemp_1[1U] = (IData)((((QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__im__DOT__RAM
                                              [(0x3fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF)])) 
                              << 0x20U) | (QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF))));
    __Vtemp_1[2U] = (IData)(((((QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__im__DOT__RAM
                                               [(0x3fU 
                                                 & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF)])) 
                               << 0x20U) | (QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF))) 
                             >> 0x20U));
    bufp->fullWData(oldp+51,(__Vtemp_1),96);
    bufp->fullWData(oldp+54,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q),96);
    __Vtemp_3[2U] = (((IData)((((QData)((IData)((((0x10U 
                                                   & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                      >> 6U)) 
                                                  | (0xcU 
                                                     & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                        >> 2U))) 
                                                 | ((2U 
                                                     & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                        >> 5U)) 
                                                    | (1U 
                                                       & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls)))))) 
                                << 0x25U) | (((QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                                  >> 3U)))) 
                                              << 0x24U) 
                                             | (((QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ALUControlD)) 
                                                 << 0x21U) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                                        >> 7U)))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__Read1D))))))) 
                      << 0xfU) | ((IData)(((((QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__Read2D)) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[1U]))) 
                                           >> 0x20U)) 
                                  >> 0x11U));
    __Vtemp_3[3U] = (((IData)((((QData)((IData)((((0x10U 
                                                   & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                      >> 6U)) 
                                                  | (0xcU 
                                                     & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                        >> 2U))) 
                                                 | ((2U 
                                                     & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                        >> 5U)) 
                                                    | (1U 
                                                       & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls)))))) 
                                << 0x25U) | (((QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                                  >> 3U)))) 
                                              << 0x24U) 
                                             | (((QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ALUControlD)) 
                                                 << 0x21U) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                                        >> 7U)))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__Read1D))))))) 
                      >> 0x11U) | ((IData)(((((QData)((IData)(
                                                              (((0x10U 
                                                                 & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                                    >> 6U)) 
                                                                | (0xcU 
                                                                   & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                                      >> 2U))) 
                                                               | ((2U 
                                                                   & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                                      >> 5U)) 
                                                                  | (1U 
                                                                     & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls)))))) 
                                              << 0x25U) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                                     >> 3U)))) 
                                                 << 0x24U) 
                                                | (((QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ALUControlD)) 
                                                    << 0x21U) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                                           >> 7U)))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__Read1D)))))) 
                                            >> 0x20U)) 
                                   << 0xfU));
    __Vtemp_4[0U] = (IData)((((QData)((IData)(((0x200U 
                                                & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                                                ? (
                                                   (0x100U 
                                                    & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                                 >> 0x1fU))) 
                                                     << 0x14U) 
                                                    | (((0xff000U 
                                                         & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U]) 
                                                        | (0x800U 
                                                           & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                              >> 9U))) 
                                                       | (0x7feU 
                                                          & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                             >> 0x14U))))
                                                    : 
                                                   (((- (IData)(
                                                                (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | ((0x800U 
                                                        & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                           << 4U)) 
                                                       | ((0x7e0U 
                                                           & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                              >> 0x14U)) 
                                                          | (0x1eU 
                                                             & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                                >> 7U))))))
                                                : (
                                                   (0x100U 
                                                    & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | ((0xfe0U 
                                                        & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                           >> 0x14U)) 
                                                       | (0x1fU 
                                                          & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                             >> 7U))))
                                                    : 
                                                   (((- (IData)(
                                                                (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                       >> 0x14U)))))) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[0U]))));
    __Vtemp_4[1U] = (IData)(((((QData)((IData)(((0x200U 
                                                 & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                                                 ? 
                                                ((0x100U 
                                                  & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                               >> 0x1fU))) 
                                                   << 0x14U) 
                                                  | (((0xff000U 
                                                       & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U]) 
                                                      | (0x800U 
                                                         & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                            >> 9U))) 
                                                     | (0x7feU 
                                                        & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                           >> 0x14U))))
                                                  : 
                                                 (((- (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0x800U 
                                                      & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                         << 4U)) 
                                                     | ((0x7e0U 
                                                         & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                            >> 0x14U)) 
                                                        | (0x1eU 
                                                           & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                              >> 7U))))))
                                                 : 
                                                ((0x100U 
                                                  & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0xfe0U 
                                                      & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                           >> 7U))))
                                                  : 
                                                 (((- (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                     >> 0x14U)))))) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[0U]))) 
                             >> 0x20U));
    __Vtemp_4[2U] = (((IData)((((QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__Read2D)) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[1U])))) 
                      << 0xfU) | ((0x7c00U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                              >> 5U)) 
                                  | ((0x3e0U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                >> 0xfU)) 
                                     | (0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                 >> 7U)))));
    __Vtemp_4[3U] = (((IData)((((QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__Read2D)) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[1U])))) 
                      >> 0x11U) | ((IData)(((((QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__Read2D)) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[1U]))) 
                                            >> 0x20U)) 
                                   << 0xfU));
    __Vtemp_4[4U] = __Vtemp_3[2U];
    __Vtemp_4[5U] = __Vtemp_3[3U];
    bufp->fullWData(oldp+57,(__Vtemp_4),185);
    bufp->fullWData(oldp+63,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q),185);
    bufp->fullIData(oldp+69,(((((((0x80000000U & (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout) 
                                                   << 0x1fU) 
                                                  & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF)) 
                                  | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout) 
                                     << 0x1eU)) | (
                                                   ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a30__cout) 
                                                    << 0x1dU) 
                                                   | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a29__cout) 
                                                      << 0x1cU))) 
                                | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a28__cout) 
                                     << 0x1bU) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a27__cout) 
                                                  << 0x1aU)) 
                                   | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a26__cout) 
                                       << 0x19U) | 
                                      ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a25__cout) 
                                       << 0x18U)))) 
                               | (((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a24__cout) 
                                     << 0x17U) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a23__cout) 
                                                  << 0x16U)) 
                                   | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a22__cout) 
                                       << 0x15U) | 
                                      ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a21__cout) 
                                       << 0x14U))) 
                                  | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a20__cout) 
                                       << 0x13U) | 
                                      ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a19__cout) 
                                       << 0x12U)) | 
                                     (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a18__cout) 
                                       << 0x11U) | 
                                      ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a17__cout) 
                                       << 0x10U))))) 
                              | ((((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a16__cout) 
                                     << 0xfU) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a15__cout) 
                                                 << 0xeU)) 
                                   | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a14__cout) 
                                       << 0xdU) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a13__cout) 
                                                   << 0xcU))) 
                                  | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a12__cout) 
                                       << 0xbU) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a11__cout) 
                                                   << 0xaU)) 
                                     | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a10__cout) 
                                         << 9U) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a9__cout) 
                                                   << 8U)))) 
                                 | (((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a8__cout) 
                                       << 7U) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a7__cout) 
                                                 << 6U)) 
                                     | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a6__cout) 
                                         << 5U) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a5__cout) 
                                                   << 4U))) 
                                    | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a4__cout) 
                                        << 3U) | (4U 
                                                  & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF)))))),32);
    bufp->fullBit(oldp+70,((1U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF)));
    bufp->fullBit(oldp+71,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                  >> 9U))));
    bufp->fullBit(oldp+72,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a9__cout));
    bufp->fullBit(oldp+73,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                   >> 9U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a9__cout)))));
    bufp->fullBit(oldp+74,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a10__cout));
    bufp->fullBit(oldp+75,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                  >> 0xaU))));
    bufp->fullBit(oldp+76,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                   >> 0xaU) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a10__cout)))));
    bufp->fullBit(oldp+77,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a11__cout));
    bufp->fullBit(oldp+78,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                  >> 0xbU))));
    bufp->fullBit(oldp+79,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                   >> 0xbU) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a11__cout)))));
    bufp->fullBit(oldp+80,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a12__cout));
    bufp->fullBit(oldp+81,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                  >> 0xcU))));
    bufp->fullBit(oldp+82,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                   >> 0xcU) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a12__cout)))));
    bufp->fullBit(oldp+83,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a13__cout));
    bufp->fullBit(oldp+84,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                  >> 0xdU))));
    bufp->fullBit(oldp+85,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                   >> 0xdU) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a13__cout)))));
    bufp->fullBit(oldp+86,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a14__cout));
    bufp->fullBit(oldp+87,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                  >> 0xeU))));
    bufp->fullBit(oldp+88,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                   >> 0xeU) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a14__cout)))));
    bufp->fullBit(oldp+89,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a15__cout));
    bufp->fullBit(oldp+90,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                  >> 0xfU))));
    bufp->fullBit(oldp+91,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                   >> 0xfU) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a15__cout)))));
    bufp->fullBit(oldp+92,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a16__cout));
    bufp->fullBit(oldp+93,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                  >> 0x10U))));
    bufp->fullBit(oldp+94,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                   >> 0x10U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a16__cout)))));
    bufp->fullBit(oldp+95,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a17__cout));
    bufp->fullBit(oldp+96,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                  >> 0x11U))));
    bufp->fullBit(oldp+97,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                   >> 0x11U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a17__cout)))));
    bufp->fullBit(oldp+98,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a18__cout));
    bufp->fullBit(oldp+99,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                  >> 0x12U))));
    bufp->fullBit(oldp+100,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                    >> 0x12U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a18__cout)))));
    bufp->fullBit(oldp+101,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a19__cout));
    bufp->fullBit(oldp+102,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                   >> 1U))));
    bufp->fullBit(oldp+103,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                   >> 0x13U))));
    bufp->fullBit(oldp+104,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                    >> 0x13U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a19__cout)))));
    bufp->fullBit(oldp+105,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a20__cout));
    bufp->fullBit(oldp+106,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                   >> 0x14U))));
    bufp->fullBit(oldp+107,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                    >> 0x14U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a20__cout)))));
    bufp->fullBit(oldp+108,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a21__cout));
    bufp->fullBit(oldp+109,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                   >> 0x15U))));
    bufp->fullBit(oldp+110,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                    >> 0x15U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a21__cout)))));
    bufp->fullBit(oldp+111,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a22__cout));
    bufp->fullBit(oldp+112,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                   >> 0x16U))));
    bufp->fullBit(oldp+113,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                    >> 0x16U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a22__cout)))));
    bufp->fullBit(oldp+114,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a23__cout));
    bufp->fullBit(oldp+115,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                   >> 0x17U))));
    bufp->fullBit(oldp+116,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                    >> 0x17U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a23__cout)))));
    bufp->fullBit(oldp+117,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a24__cout));
    bufp->fullBit(oldp+118,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                   >> 0x18U))));
    bufp->fullBit(oldp+119,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                    >> 0x18U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a24__cout)))));
    bufp->fullBit(oldp+120,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a25__cout));
    bufp->fullBit(oldp+121,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                   >> 0x19U))));
    bufp->fullBit(oldp+122,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                    >> 0x19U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a25__cout)))));
    bufp->fullBit(oldp+123,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a26__cout));
    bufp->fullBit(oldp+124,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+125,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                    >> 0x1aU) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a26__cout)))));
    bufp->fullBit(oldp+126,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a27__cout));
    bufp->fullBit(oldp+127,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+128,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                    >> 0x1bU) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a27__cout)))));
    bufp->fullBit(oldp+129,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a28__cout));
    bufp->fullBit(oldp+130,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+131,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                    >> 0x1cU) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a28__cout)))));
    bufp->fullBit(oldp+132,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a29__cout));
    bufp->fullBit(oldp+133,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                   >> 2U))));
    bufp->fullBit(oldp+134,((1U & (~ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                      >> 2U)))));
    bufp->fullBit(oldp+135,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+136,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                    >> 0x1dU) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a29__cout)))));
    bufp->fullBit(oldp+137,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a30__cout));
    bufp->fullBit(oldp+138,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+139,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                    >> 0x1eU) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a30__cout)))));
    bufp->fullBit(oldp+140,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout));
    bufp->fullBit(oldp+141,((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                             >> 0x1fU)));
    bufp->fullBit(oldp+142,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                              >> 0x1fU) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout))));
    bufp->fullBit(oldp+143,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                   >> 3U))));
    bufp->fullBit(oldp+144,((1U & VL_REDXOR_4((0xcU 
                                               & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF)))));
    bufp->fullBit(oldp+145,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a4__cout));
    bufp->fullBit(oldp+146,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                   >> 4U))));
    bufp->fullBit(oldp+147,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                    >> 4U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a4__cout)))));
    bufp->fullBit(oldp+148,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a5__cout));
    bufp->fullBit(oldp+149,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                   >> 5U))));
    bufp->fullBit(oldp+150,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                    >> 5U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a5__cout)))));
    bufp->fullBit(oldp+151,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a6__cout));
    bufp->fullBit(oldp+152,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                   >> 6U))));
    bufp->fullBit(oldp+153,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                    >> 6U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a6__cout)))));
    bufp->fullBit(oldp+154,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a7__cout));
    bufp->fullBit(oldp+155,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                   >> 7U))));
    bufp->fullBit(oldp+156,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                    >> 7U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a7__cout)))));
    bufp->fullBit(oldp+157,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a8__cout));
    bufp->fullBit(oldp+158,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                   >> 8U))));
    bufp->fullBit(oldp+159,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                    >> 8U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a8__cout)))));
    bufp->fullIData(oldp+160,(((((((0x80000000U & (
                                                   (0x80000000U 
                                                    & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                                        << 0x11U) 
                                                       & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U])) 
                                                   | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout) 
                                                       & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0)) 
                                                      << 0x1fU))) 
                                   | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout) 
                                      << 0x1eU)) | 
                                  (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout) 
                                    << 0x1dU) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout) 
                                                 << 0x1cU))) 
                                 | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout) 
                                      << 0x1bU) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout) 
                                                   << 0x1aU)) 
                                    | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout) 
                                        << 0x19U) | 
                                       ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout) 
                                        << 0x18U)))) 
                                | (((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout) 
                                      << 0x17U) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout) 
                                                   << 0x16U)) 
                                    | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout) 
                                        << 0x15U) | 
                                       ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout) 
                                        << 0x14U))) 
                                   | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout) 
                                        << 0x13U) | 
                                       ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout) 
                                        << 0x12U)) 
                                      | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout) 
                                          << 0x11U) 
                                         | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout) 
                                            << 0x10U))))) 
                               | ((((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout) 
                                      << 0xfU) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout) 
                                                  << 0xeU)) 
                                    | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout) 
                                        << 0xdU) | 
                                       ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout) 
                                        << 0xcU))) 
                                   | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout) 
                                        << 0xbU) | 
                                       ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout) 
                                        << 0xaU)) | 
                                      (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout) 
                                        << 9U) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout) 
                                                  << 8U)))) 
                                  | (((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout) 
                                        << 7U) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout) 
                                                  << 6U)) 
                                      | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout) 
                                          << 5U) | 
                                         ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout) 
                                          << 4U))) 
                                     | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout) 
                                          << 3U) | 
                                         ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout) 
                                          << 2U)) | 
                                        (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout) 
                                          << 1U) | (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__carry__BRA__0__KET__))))))),32);
    bufp->fullBit(oldp+161,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0xfU))));
    bufp->fullBit(oldp+162,((1U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U])));
    bufp->fullBit(oldp+163,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                    >> 0xfU) ^ vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U]))));
    bufp->fullBit(oldp+164,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__carry__BRA__0__KET__));
    bufp->fullBit(oldp+165,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x18U))));
    bufp->fullBit(oldp+166,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 9U))));
    bufp->fullBit(oldp+167,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout));
    bufp->fullBit(oldp+168,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout))));
    bufp->fullBit(oldp+169,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout));
    bufp->fullBit(oldp+170,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x19U))));
    bufp->fullBit(oldp+171,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0xaU))));
    bufp->fullBit(oldp+172,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout))));
    bufp->fullBit(oldp+173,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout));
    bufp->fullBit(oldp+174,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+175,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0xbU))));
    bufp->fullBit(oldp+176,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout))));
    bufp->fullBit(oldp+177,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout));
    bufp->fullBit(oldp+178,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+179,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0xcU))));
    bufp->fullBit(oldp+180,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout))));
    bufp->fullBit(oldp+181,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout));
    bufp->fullBit(oldp+182,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+183,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0xdU))));
    bufp->fullBit(oldp+184,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout))));
    bufp->fullBit(oldp+185,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout));
    bufp->fullBit(oldp+186,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+187,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0xeU))));
    bufp->fullBit(oldp+188,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout))));
    bufp->fullBit(oldp+189,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout));
    bufp->fullBit(oldp+190,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+191,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0xfU))));
    bufp->fullBit(oldp+192,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout))));
    bufp->fullBit(oldp+193,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout));
    bufp->fullBit(oldp+194,((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+195,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x10U))));
    bufp->fullBit(oldp+196,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout))));
    bufp->fullBit(oldp+197,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout));
    bufp->fullBit(oldp+198,((1U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U])));
    bufp->fullBit(oldp+199,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x11U))));
    bufp->fullBit(oldp+200,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout))));
    bufp->fullBit(oldp+201,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout));
    bufp->fullBit(oldp+202,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                   >> 1U))));
    bufp->fullBit(oldp+203,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x12U))));
    bufp->fullBit(oldp+204,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout))));
    bufp->fullBit(oldp+205,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout));
    bufp->fullBit(oldp+206,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x10U))));
    bufp->fullBit(oldp+207,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 1U))));
    bufp->fullBit(oldp+208,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__carry__BRA__0__KET__))));
    bufp->fullBit(oldp+209,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout));
    bufp->fullBit(oldp+210,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                   >> 2U))));
    bufp->fullBit(oldp+211,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x13U))));
    bufp->fullBit(oldp+212,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout))));
    bufp->fullBit(oldp+213,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout));
    bufp->fullBit(oldp+214,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                   >> 3U))));
    bufp->fullBit(oldp+215,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x14U))));
    bufp->fullBit(oldp+216,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout))));
    bufp->fullBit(oldp+217,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout));
    bufp->fullBit(oldp+218,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                   >> 4U))));
    bufp->fullBit(oldp+219,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x15U))));
    bufp->fullBit(oldp+220,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout))));
    bufp->fullBit(oldp+221,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout));
    bufp->fullBit(oldp+222,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                   >> 5U))));
    bufp->fullBit(oldp+223,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x16U))));
    bufp->fullBit(oldp+224,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout))));
    bufp->fullBit(oldp+225,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout));
    bufp->fullBit(oldp+226,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                   >> 6U))));
    bufp->fullBit(oldp+227,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x17U))));
    bufp->fullBit(oldp+228,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout))));
    bufp->fullBit(oldp+229,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout));
    bufp->fullBit(oldp+230,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                   >> 7U))));
    bufp->fullBit(oldp+231,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x18U))));
    bufp->fullBit(oldp+232,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout))));
    bufp->fullBit(oldp+233,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout));
    bufp->fullBit(oldp+234,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                   >> 8U))));
    bufp->fullBit(oldp+235,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x19U))));
    bufp->fullBit(oldp+236,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout))));
    bufp->fullBit(oldp+237,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout));
    bufp->fullBit(oldp+238,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                   >> 9U))));
    bufp->fullBit(oldp+239,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+240,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout))));
    bufp->fullBit(oldp+241,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout));
    bufp->fullBit(oldp+242,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                   >> 0xaU))));
    bufp->fullBit(oldp+243,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+244,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout))));
    bufp->fullBit(oldp+245,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout));
    bufp->fullBit(oldp+246,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                   >> 0xbU))));
    bufp->fullBit(oldp+247,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+248,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout))));
    bufp->fullBit(oldp+249,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout));
    bufp->fullBit(oldp+250,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x11U))));
    bufp->fullBit(oldp+251,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 2U))));
    bufp->fullBit(oldp+252,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout))));
    bufp->fullBit(oldp+253,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout));
    bufp->fullBit(oldp+254,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                   >> 0xcU))));
    bufp->fullBit(oldp+255,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+256,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout))));
    bufp->fullBit(oldp+257,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout));
    bufp->fullBit(oldp+258,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                   >> 0xdU))));
    bufp->fullBit(oldp+259,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+260,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout))));
    bufp->fullBit(oldp+261,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout));
    bufp->fullBit(oldp+262,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                   >> 0xeU))));
    bufp->fullBit(oldp+263,((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+264,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout))));
    bufp->fullBit(oldp+265,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x12U))));
    bufp->fullBit(oldp+266,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 3U))));
    bufp->fullBit(oldp+267,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout))));
    bufp->fullBit(oldp+268,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout));
    bufp->fullBit(oldp+269,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x13U))));
    bufp->fullBit(oldp+270,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 4U))));
    bufp->fullBit(oldp+271,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout))));
    bufp->fullBit(oldp+272,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout));
    bufp->fullBit(oldp+273,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x14U))));
    bufp->fullBit(oldp+274,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 5U))));
    bufp->fullBit(oldp+275,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout))));
    bufp->fullBit(oldp+276,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout));
    bufp->fullBit(oldp+277,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x15U))));
    bufp->fullBit(oldp+278,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 6U))));
    bufp->fullBit(oldp+279,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout))));
    bufp->fullBit(oldp+280,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout));
    bufp->fullBit(oldp+281,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x16U))));
    bufp->fullBit(oldp+282,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 7U))));
    bufp->fullBit(oldp+283,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout))));
    bufp->fullBit(oldp+284,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout));
    bufp->fullBit(oldp+285,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x17U))));
    bufp->fullBit(oldp+286,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 8U))));
    bufp->fullBit(oldp+287,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout))));
    bufp->fullIData(oldp+288,((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                               >> 7U)),25);
    bufp->fullBit(oldp+289,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__StallF) 
                             | (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__PCSrcE))));
    bufp->fullIData(oldp+290,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__PCSrcE)
                                ? ((((((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                         ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout)) 
                                        << 0x1fU) | 
                                       (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                         ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout)) 
                                        << 0x1eU)) 
                                      | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                           ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout)) 
                                          << 0x1dU) 
                                         | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout)) 
                                            << 0x1cU))) 
                                     | (((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                           ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout)) 
                                          << 0x1bU) 
                                         | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout)) 
                                            << 0x1aU)) 
                                        | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout)) 
                                            << 0x19U) 
                                           | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                               ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout)) 
                                              << 0x18U)))) 
                                    | ((((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                           ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout)) 
                                          << 0x17U) 
                                         | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout)) 
                                            << 0x16U)) 
                                        | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout)) 
                                            << 0x15U) 
                                           | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                               ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout)) 
                                              << 0x14U))) 
                                       | (((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout)) 
                                            << 0x13U) 
                                           | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                               ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout)) 
                                              << 0x12U)) 
                                          | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                               ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout)) 
                                              << 0x11U) 
                                             | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                 ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout)) 
                                                << 0x10U))))) 
                                   | (((((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                           ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout)) 
                                          << 0xfU) 
                                         | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout)) 
                                            << 0xeU)) 
                                        | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout)) 
                                            << 0xdU) 
                                           | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                               ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout)) 
                                              << 0xcU))) 
                                       | (((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout)) 
                                            << 0xbU) 
                                           | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                               ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout)) 
                                              << 0xaU)) 
                                          | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                               ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout)) 
                                              << 9U) 
                                             | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                 ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout)) 
                                                << 8U)))) 
                                      | ((((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout)) 
                                            << 7U) 
                                           | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                               ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout)) 
                                              << 6U)) 
                                          | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                               ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout)) 
                                              << 5U) 
                                             | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                 ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout)) 
                                                << 4U))) 
                                         | (((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                               ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout)) 
                                              << 3U) 
                                             | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                 ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout)) 
                                                << 2U)) 
                                            | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                 ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__carry__BRA__0__KET__)) 
                                                << 1U) 
                                               | (1U 
                                                  & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                                      >> 0xfU) 
                                                     ^ 
                                                     vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U])))))))
                                : vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCPlus4F)),32);
    bufp->fullBit(oldp+291,(((~ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                 >> 0x11U)) & ((~ (
                                                   (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                                    >> 0x10U) 
                                                   ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT____VdfgRegularize_h5f12ffbc_0_0))) 
                                               & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT____VdfgRegularize_h5f12ffbc_0_0)))));
    bufp->fullIData(oldp+292,((((((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a32__sum) 
                                    << 0x1fU) | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                  ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a30__cout)) 
                                                 << 0x1eU)) 
                                  | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                       ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a29__cout)) 
                                      << 0x1dU) | (
                                                   ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                    ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a28__cout)) 
                                                   << 0x1cU))) 
                                 | (((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                       ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a27__cout)) 
                                      << 0x1bU) | (
                                                   ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                    ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a26__cout)) 
                                                   << 0x1aU)) 
                                    | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                         ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a25__cout)) 
                                        << 0x19U) | 
                                       (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                         ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a24__cout)) 
                                        << 0x18U)))) 
                                | ((((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                       ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a23__cout)) 
                                      << 0x17U) | (
                                                   ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                    ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a22__cout)) 
                                                   << 0x16U)) 
                                    | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                         ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a21__cout)) 
                                        << 0x15U) | 
                                       (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                         ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a20__cout)) 
                                        << 0x14U))) 
                                   | (((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                         ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a19__cout)) 
                                        << 0x13U) | 
                                       (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                         ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a18__cout)) 
                                        << 0x12U)) 
                                      | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                           ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a17__cout)) 
                                          << 0x11U) 
                                         | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a16__cout)) 
                                            << 0x10U))))) 
                               | (((((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                       ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a15__cout)) 
                                      << 0xfU) | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                   ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a14__cout)) 
                                                  << 0xeU)) 
                                    | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                         ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a13__cout)) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                         ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a12__cout)) 
                                        << 0xcU))) 
                                   | (((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                         ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a11__cout)) 
                                        << 0xbU) | 
                                       (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                         ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a10__cout)) 
                                        << 0xaU)) | 
                                      ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                         ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a9__cout)) 
                                        << 9U) | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                   ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a8__cout)) 
                                                  << 8U)))) 
                                  | ((((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                         ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a7__cout)) 
                                        << 7U) | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                   ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a6__cout)) 
                                                  << 6U)) 
                                      | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                           ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a5__cout)) 
                                          << 5U) | 
                                         (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                           ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a4__cout)) 
                                          << 4U))) 
                                     | (((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                           ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a3__cout)) 
                                          << 3U) | 
                                         (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                           ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a2__cout)) 
                                          << 2U)) | 
                                        ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                           ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__carry__BRA__0__KET__)) 
                                          << 1U) | 
                                         (1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a1__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                ^ (
                                                   vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                                   >> 0x10U))))))))),32);
    bufp->fullBit(oldp+293,((1U & ((((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                      >> 0x1fU) & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a32__b)) 
                                    | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a31__cout) 
                                       & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0))) 
                                   ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                      >> 0x10U)))));
    bufp->fullBit(oldp+294,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a1__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                   ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                      >> 0x10U)))));
    bufp->fullIData(oldp+295,((((~ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                    >> 0x11U)) & ((~ 
                                                   ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                                     >> 0x10U) 
                                                    ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT____VdfgRegularize_h5f12ffbc_0_0))) 
                                                  & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT____VdfgRegularize_h5f12ffbc_0_0))) 
                               ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a32__sum))),32);
    __Vtemp_6[0U] = (IData)((((QData)((IData)((0x1fU 
                                               & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U]))) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[0U]))));
    __Vtemp_6[1U] = ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__WriteDataE 
                      << 5U) | (IData)(((((QData)((IData)(
                                                          (0x1fU 
                                                           & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U]))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[0U]))) 
                                        >> 0x20U)));
    __Vtemp_6[2U] = (((IData)((((QData)((IData)((0xfU 
                                                 & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                                    >> 0x15U)))) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALUResultE)))) 
                      << 5U) | (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__WriteDataE 
                                >> 0x1bU));
    __Vtemp_6[3U] = (((IData)((((QData)((IData)((0xfU 
                                                 & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                                    >> 0x15U)))) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALUResultE)))) 
                      >> 0x1bU) | ((IData)(((((QData)((IData)(
                                                              (0xfU 
                                                               & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                                                  >> 0x15U)))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALUResultE))) 
                                            >> 0x20U)) 
                                   << 5U));
    bufp->fullWData(oldp+296,(__Vtemp_6),105);
    bufp->fullIData(oldp+300,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x01),32);
    bufp->fullIData(oldp+301,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x02),32);
    bufp->fullIData(oldp+302,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x03),32);
    bufp->fullIData(oldp+303,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x04),32);
    bufp->fullIData(oldp+304,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x05),32);
    bufp->fullIData(oldp+305,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x06),32);
    bufp->fullIData(oldp+306,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x07),32);
    bufp->fullIData(oldp+307,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x08),32);
    bufp->fullIData(oldp+308,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x09),32);
    bufp->fullIData(oldp+309,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x10),32);
    bufp->fullIData(oldp+310,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x11),32);
    bufp->fullIData(oldp+311,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x12),32);
    bufp->fullIData(oldp+312,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x13),32);
    bufp->fullIData(oldp+313,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x14),32);
    bufp->fullIData(oldp+314,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x15),32);
    bufp->fullIData(oldp+315,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x16),32);
    bufp->fullIData(oldp+316,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x17),32);
    bufp->fullIData(oldp+317,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x18),32);
    bufp->fullIData(oldp+318,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x19),32);
    bufp->fullIData(oldp+319,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x20),32);
    bufp->fullIData(oldp+320,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x21),32);
    bufp->fullIData(oldp+321,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x22),32);
    bufp->fullIData(oldp+322,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x23),32);
    bufp->fullIData(oldp+323,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x24),32);
    bufp->fullIData(oldp+324,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x25),32);
    bufp->fullIData(oldp+325,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x26),32);
    bufp->fullIData(oldp+326,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x27),32);
    bufp->fullIData(oldp+327,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x28),32);
    bufp->fullIData(oldp+328,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x29),32);
    bufp->fullIData(oldp+329,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x30),32);
    bufp->fullIData(oldp+330,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x31),32);
    bufp->fullIData(oldp+331,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                << 0x1bU) | (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[1U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+332,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                << 0x1bU) | (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                             >> 5U))),32);
    bufp->fullBit(oldp+333,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                   >> 5U))));
    bufp->fullCData(oldp+334,((0x3fU & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                        >> 5U))),6);
    bufp->fullBit(oldp+335,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__PCSrcE));
    bufp->fullBit(oldp+336,((0xffffffffU == (~ vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALUResultE))));
    bufp->fullCData(oldp+337,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ForwardAE),2);
    bufp->fullCData(oldp+338,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ForwardBE),2);
    bufp->fullBit(oldp+339,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                   >> 8U))));
    bufp->fullCData(oldp+340,((0x1fU & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[1U])),5);
    bufp->fullBit(oldp+341,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                   >> 7U))));
    bufp->fullCData(oldp+342,((0x1fU & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])),5);
    bufp->fullIData(oldp+343,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a),32);
    bufp->fullIData(oldp+344,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__SrcBE),32);
    bufp->fullIData(oldp+345,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALUResultE),32);
    bufp->fullIData(oldp+346,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__WriteDataE),32);
    bufp->fullIData(oldp+347,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[0U]),32);
    bufp->fullCData(oldp+348,((3U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                     >> 6U))),2);
    bufp->fullCData(oldp+349,((3U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                     >> 5U))),2);
    bufp->fullIData(oldp+350,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                << 0x1bU) | (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[2U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+351,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[2U] 
                                << 0x1bU) | (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+352,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[0U]),32);
    bufp->fullIData(oldp+353,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ResultW),32);
    bufp->fullIData(oldp+354,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b),32);
    bufp->fullIData(oldp+355,((((((((0x80000000U & 
                                     (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                      & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a32__b) 
                                         << 0x1fU))) 
                                    | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a31__cout) 
                                        & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0)) 
                                       << 0x1fU)) | 
                                   ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a31__cout) 
                                    << 0x1eU)) | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a30__cout) 
                                                   << 0x1dU) 
                                                  | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a29__cout) 
                                                     << 0x1cU))) 
                                 | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a28__cout) 
                                      << 0x1bU) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a27__cout) 
                                                   << 0x1aU)) 
                                    | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a26__cout) 
                                        << 0x19U) | 
                                       ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a25__cout) 
                                        << 0x18U)))) 
                                | (((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a24__cout) 
                                      << 0x17U) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a23__cout) 
                                                   << 0x16U)) 
                                    | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a22__cout) 
                                        << 0x15U) | 
                                       ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a21__cout) 
                                        << 0x14U))) 
                                   | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a20__cout) 
                                        << 0x13U) | 
                                       ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a19__cout) 
                                        << 0x12U)) 
                                      | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a18__cout) 
                                          << 0x11U) 
                                         | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a17__cout) 
                                            << 0x10U))))) 
                               | ((((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a16__cout) 
                                      << 0xfU) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a15__cout) 
                                                  << 0xeU)) 
                                    | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a14__cout) 
                                        << 0xdU) | 
                                       ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a13__cout) 
                                        << 0xcU))) 
                                   | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a12__cout) 
                                        << 0xbU) | 
                                       ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a11__cout) 
                                        << 0xaU)) | 
                                      (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a10__cout) 
                                        << 9U) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a9__cout) 
                                                  << 8U)))) 
                                  | (((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a8__cout) 
                                        << 7U) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a7__cout) 
                                                  << 6U)) 
                                      | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a6__cout) 
                                          << 5U) | 
                                         ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a5__cout) 
                                          << 4U))) 
                                     | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a4__cout) 
                                          << 3U) | 
                                         ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a3__cout) 
                                          << 2U)) | 
                                        (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a2__cout) 
                                          << 1U) | (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__carry__BRA__0__KET__))))))),32);
    bufp->fullBit(oldp+356,((1U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a)));
    bufp->fullBit(oldp+357,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a1__b));
    bufp->fullBit(oldp+358,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__carry__BRA__0__KET__));
    bufp->fullBit(oldp+359,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                   >> 9U))));
    bufp->fullBit(oldp+360,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a10__b));
    bufp->fullBit(oldp+361,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a9__cout));
    bufp->fullBit(oldp+362,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a9__cout))));
    bufp->fullBit(oldp+363,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a10__cout));
    bufp->fullBit(oldp+364,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                   >> 0xaU))));
    bufp->fullBit(oldp+365,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a11__b));
    bufp->fullBit(oldp+366,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a10__cout))));
    bufp->fullBit(oldp+367,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a11__cout));
    bufp->fullBit(oldp+368,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                   >> 0xbU))));
    bufp->fullBit(oldp+369,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a12__b));
    bufp->fullBit(oldp+370,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a11__cout))));
    bufp->fullBit(oldp+371,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a12__cout));
    bufp->fullBit(oldp+372,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                   >> 0xcU))));
    bufp->fullBit(oldp+373,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a13__b));
    bufp->fullBit(oldp+374,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a12__cout))));
    bufp->fullBit(oldp+375,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a13__cout));
    bufp->fullBit(oldp+376,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                   >> 0xdU))));
    bufp->fullBit(oldp+377,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a14__b));
    bufp->fullBit(oldp+378,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a13__cout))));
    bufp->fullBit(oldp+379,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a14__cout));
    bufp->fullBit(oldp+380,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                   >> 0xeU))));
    bufp->fullBit(oldp+381,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a15__b));
    bufp->fullBit(oldp+382,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a14__cout))));
    bufp->fullBit(oldp+383,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a15__cout));
    bufp->fullBit(oldp+384,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                   >> 0xfU))));
    bufp->fullBit(oldp+385,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a16__b));
    bufp->fullBit(oldp+386,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a15__cout))));
    bufp->fullBit(oldp+387,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a16__cout));
    bufp->fullBit(oldp+388,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                   >> 0x10U))));
    bufp->fullBit(oldp+389,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a17__b));
    bufp->fullBit(oldp+390,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a16__cout))));
    bufp->fullBit(oldp+391,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a17__cout));
    bufp->fullBit(oldp+392,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                   >> 0x11U))));
    bufp->fullBit(oldp+393,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a18__b));
    bufp->fullBit(oldp+394,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a17__cout))));
    bufp->fullBit(oldp+395,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a18__cout));
    bufp->fullBit(oldp+396,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                   >> 0x12U))));
    bufp->fullBit(oldp+397,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a19__b));
    bufp->fullBit(oldp+398,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a18__cout))));
    bufp->fullBit(oldp+399,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a19__cout));
    bufp->fullBit(oldp+400,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                   >> 1U))));
    bufp->fullBit(oldp+401,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a2__b));
    bufp->fullBit(oldp+402,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__carry__BRA__0__KET__))));
    bufp->fullBit(oldp+403,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a2__cout));
    bufp->fullBit(oldp+404,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                   >> 0x13U))));
    bufp->fullBit(oldp+405,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a20__b));
    bufp->fullBit(oldp+406,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a19__cout))));
    bufp->fullBit(oldp+407,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a20__cout));
    bufp->fullBit(oldp+408,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                   >> 0x14U))));
    bufp->fullBit(oldp+409,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a21__b));
    bufp->fullBit(oldp+410,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a20__cout))));
    bufp->fullBit(oldp+411,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a21__cout));
    bufp->fullBit(oldp+412,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                   >> 0x15U))));
    bufp->fullBit(oldp+413,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a22__b));
    bufp->fullBit(oldp+414,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a21__cout))));
    bufp->fullBit(oldp+415,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a22__cout));
    bufp->fullBit(oldp+416,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                   >> 0x16U))));
    bufp->fullBit(oldp+417,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a23__b));
    bufp->fullBit(oldp+418,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a22__cout))));
    bufp->fullBit(oldp+419,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a23__cout));
    bufp->fullBit(oldp+420,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                   >> 0x17U))));
    bufp->fullBit(oldp+421,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a24__b));
    bufp->fullBit(oldp+422,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a23__cout))));
    bufp->fullBit(oldp+423,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a24__cout));
    bufp->fullBit(oldp+424,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                   >> 0x18U))));
    bufp->fullBit(oldp+425,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a25__b));
    bufp->fullBit(oldp+426,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a24__cout))));
    bufp->fullBit(oldp+427,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a25__cout));
    bufp->fullBit(oldp+428,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                   >> 0x19U))));
    bufp->fullBit(oldp+429,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a26__b));
    bufp->fullBit(oldp+430,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a25__cout))));
    bufp->fullBit(oldp+431,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a26__cout));
    bufp->fullBit(oldp+432,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+433,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a27__b));
    bufp->fullBit(oldp+434,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a26__cout))));
    bufp->fullBit(oldp+435,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a27__cout));
    bufp->fullBit(oldp+436,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+437,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a28__b));
    bufp->fullBit(oldp+438,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a27__cout))));
    bufp->fullBit(oldp+439,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a28__cout));
    bufp->fullBit(oldp+440,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+441,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a29__b));
    bufp->fullBit(oldp+442,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a28__cout))));
    bufp->fullBit(oldp+443,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a29__cout));
    bufp->fullBit(oldp+444,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                   >> 2U))));
    bufp->fullBit(oldp+445,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a3__b));
    bufp->fullBit(oldp+446,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a2__cout))));
    bufp->fullBit(oldp+447,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a3__cout));
    bufp->fullBit(oldp+448,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+449,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a30__b));
    bufp->fullBit(oldp+450,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a29__cout))));
    bufp->fullBit(oldp+451,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a30__cout));
    bufp->fullBit(oldp+452,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+453,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a31__b));
    bufp->fullBit(oldp+454,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a30__cout))));
    bufp->fullBit(oldp+455,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a31__cout));
    bufp->fullBit(oldp+456,((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                             >> 0x1fU)));
    bufp->fullBit(oldp+457,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a32__b));
    bufp->fullBit(oldp+458,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a32__sum));
    bufp->fullBit(oldp+459,((((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                               >> 0x1fU) & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a32__b)) 
                             | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a31__cout) 
                                & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0)))));
    bufp->fullBit(oldp+460,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                   >> 3U))));
    bufp->fullBit(oldp+461,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a4__b));
    bufp->fullBit(oldp+462,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a3__cout))));
    bufp->fullBit(oldp+463,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a4__cout));
    bufp->fullBit(oldp+464,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                   >> 4U))));
    bufp->fullBit(oldp+465,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a5__b));
    bufp->fullBit(oldp+466,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a4__cout))));
    bufp->fullBit(oldp+467,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a5__cout));
    bufp->fullBit(oldp+468,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                   >> 5U))));
    bufp->fullBit(oldp+469,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a6__b));
    bufp->fullBit(oldp+470,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a5__cout))));
    bufp->fullBit(oldp+471,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a6__cout));
    bufp->fullBit(oldp+472,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                   >> 6U))));
    bufp->fullBit(oldp+473,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a7__b));
    bufp->fullBit(oldp+474,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a6__cout))));
    bufp->fullBit(oldp+475,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a7__cout));
    bufp->fullBit(oldp+476,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                   >> 7U))));
    bufp->fullBit(oldp+477,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a8__b));
    bufp->fullBit(oldp+478,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a7__cout))));
    bufp->fullBit(oldp+479,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a8__cout));
    bufp->fullBit(oldp+480,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                   >> 8U))));
    bufp->fullBit(oldp+481,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a9__b));
    bufp->fullBit(oldp+482,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a8__cout))));
    bufp->fullIData(oldp+483,((~ vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__SrcBE)),32);
    bufp->fullIData(oldp+484,((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                               & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__SrcBE)),32);
    bufp->fullIData(oldp+485,((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                               | vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__SrcBE)),32);
    bufp->fullWData(oldp+486,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q),105);
    bufp->fullWData(oldp+490,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q),104);
    bufp->fullIData(oldp+494,(((0x80U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U])
                                ? ((0U == (0x1fU & 
                                           vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U]))
                                    ? 0U : ((IData)(1U) 
                                            << (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])))
                                : 0U)),32);
    bufp->fullBit(oldp+495,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                              >> 7U) & ((0U != (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                        & (((IData)(1U) 
                                            << (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           >> 1U)))));
    bufp->fullBit(oldp+496,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                              >> 7U) & ((0U != (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                        & (((IData)(1U) 
                                            << (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           >> 2U)))));
    bufp->fullBit(oldp+497,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                              >> 7U) & ((0U != (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                        & (((IData)(1U) 
                                            << (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           >> 3U)))));
    bufp->fullBit(oldp+498,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                              >> 7U) & ((0U != (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                        & (((IData)(1U) 
                                            << (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           >> 4U)))));
    bufp->fullBit(oldp+499,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                              >> 7U) & ((0U != (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                        & (((IData)(1U) 
                                            << (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           >> 5U)))));
    bufp->fullBit(oldp+500,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                              >> 7U) & ((0U != (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                        & (((IData)(1U) 
                                            << (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           >> 6U)))));
    bufp->fullBit(oldp+501,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                              >> 7U) & ((0U != (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                        & (((IData)(1U) 
                                            << (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           >> 7U)))));
    bufp->fullBit(oldp+502,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                              >> 7U) & ((0U != (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                        & (((IData)(1U) 
                                            << (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           >> 8U)))));
    bufp->fullBit(oldp+503,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                              >> 7U) & ((0U != (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                        & (((IData)(1U) 
                                            << (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           >> 9U)))));
    bufp->fullBit(oldp+504,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                              >> 7U) & ((0U != (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                        & (((IData)(1U) 
                                            << (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           >> 0xaU)))));
    bufp->fullBit(oldp+505,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                              >> 7U) & ((0U != (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                        & (((IData)(1U) 
                                            << (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           >> 0xbU)))));
    bufp->fullBit(oldp+506,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                              >> 7U) & ((0U != (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                        & (((IData)(1U) 
                                            << (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           >> 0xcU)))));
    bufp->fullBit(oldp+507,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                              >> 7U) & ((0U != (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                        & (((IData)(1U) 
                                            << (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           >> 0xdU)))));
    bufp->fullBit(oldp+508,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                              >> 7U) & ((0U != (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                        & (((IData)(1U) 
                                            << (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           >> 0xeU)))));
    bufp->fullBit(oldp+509,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                              >> 7U) & ((0U != (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                        & (((IData)(1U) 
                                            << (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           >> 0xfU)))));
    bufp->fullBit(oldp+510,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                              >> 7U) & ((0U != (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                        & (((IData)(1U) 
                                            << (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           >> 0x10U)))));
    bufp->fullBit(oldp+511,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                              >> 7U) & ((0U != (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                        & (((IData)(1U) 
                                            << (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           >> 0x11U)))));
    bufp->fullBit(oldp+512,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                              >> 7U) & ((0U != (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                        & (((IData)(1U) 
                                            << (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           >> 0x12U)))));
    bufp->fullBit(oldp+513,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                              >> 7U) & ((0U != (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                        & (((IData)(1U) 
                                            << (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           >> 0x13U)))));
    bufp->fullBit(oldp+514,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                              >> 7U) & ((0U != (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                        & (((IData)(1U) 
                                            << (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           >> 0x14U)))));
    bufp->fullBit(oldp+515,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                              >> 7U) & ((0U != (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                        & (((IData)(1U) 
                                            << (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           >> 0x15U)))));
    bufp->fullBit(oldp+516,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                              >> 7U) & ((0U != (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                        & (((IData)(1U) 
                                            << (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           >> 0x16U)))));
    bufp->fullBit(oldp+517,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                              >> 7U) & ((0U != (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                        & (((IData)(1U) 
                                            << (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           >> 0x17U)))));
    bufp->fullBit(oldp+518,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                              >> 7U) & ((0U != (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                        & (((IData)(1U) 
                                            << (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           >> 0x18U)))));
    bufp->fullBit(oldp+519,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                              >> 7U) & ((0U != (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                        & (((IData)(1U) 
                                            << (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           >> 0x19U)))));
    bufp->fullBit(oldp+520,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                              >> 7U) & ((0U != (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                        & (((IData)(1U) 
                                            << (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           >> 0x1aU)))));
    bufp->fullBit(oldp+521,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                              >> 7U) & ((0U != (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                        & (((IData)(1U) 
                                            << (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           >> 0x1bU)))));
    bufp->fullBit(oldp+522,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                              >> 7U) & ((0U != (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                        & (((IData)(1U) 
                                            << (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+523,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                              >> 7U) & ((0U != (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                        & (((IData)(1U) 
                                            << (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           >> 0x1dU)))));
    bufp->fullBit(oldp+524,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                              >> 7U) & ((0U != (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                        & (((IData)(1U) 
                                            << (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           >> 0x1eU)))));
    bufp->fullBit(oldp+525,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                              >> 7U) & ((0U != (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                        & (((IData)(1U) 
                                            << (0x1fU 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           >> 0x1fU)))));
    bufp->fullIData(oldp+526,(vlSelfRef.testbench__DOT__dut__DOT__dm__DOT__RAM
                              [(0x3fU & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                         >> 5U))]),32);
    __Vtemp_8[0U] = (IData)((0x1fffffffffULL & (((QData)((IData)(
                                                                 vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[0U])))));
    __Vtemp_8[1U] = ((vlSelfRef.testbench__DOT__dut__DOT__dm__DOT__RAM
                      [(0x3fU & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                 >> 5U))] << 5U) | (IData)(
                                                           ((0x1fffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[0U])))) 
                                                            >> 0x20U)));
    __Vtemp_8[2U] = (((IData)((((QData)((IData)((7U 
                                                 & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                                    >> 6U)))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                                              << 0x1bU) 
                                                             | (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                                                >> 5U)))))) 
                      << 5U) | (vlSelfRef.testbench__DOT__dut__DOT__dm__DOT__RAM
                                [(0x3fU & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                           >> 5U))] 
                                >> 0x1bU));
    __Vtemp_8[3U] = (((IData)((((QData)((IData)((7U 
                                                 & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                                    >> 6U)))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                                              << 0x1bU) 
                                                             | (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                                                >> 5U)))))) 
                      >> 0x1bU) | ((IData)(((((QData)((IData)(
                                                              (7U 
                                                               & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                                                  >> 6U)))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                                                 << 0x1bU) 
                                                                | (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                                                   >> 5U))))) 
                                            >> 0x20U)) 
                                   << 5U));
    bufp->fullWData(oldp+527,(__Vtemp_8),104);
    bufp->fullBit(oldp+531,(vlSelfRef.clk));
    bufp->fullBit(oldp+532,(vlSelfRef.rst));
    bufp->fullBit(oldp+533,((1U & (~ (IData)(vlSelfRef.clk)))));
}
