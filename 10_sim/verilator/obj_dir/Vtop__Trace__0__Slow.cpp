// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+560,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+561,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+562,0,"Ecall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+563,0,"Ebreak",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+564,0,"top_pcF",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+565,0,"top_InstrF",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+566,0,"top_ReadDataM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+567,0,"top_WriteDataM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+568,0,"top_ALUResultM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+569,0,"top_MemWriteM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+560,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+561,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+562,0,"Ecall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+563,0,"Ebreak",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+564,0,"top_pcF",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+565,0,"top_InstrF",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+566,0,"top_ReadDataM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+567,0,"top_WriteDataM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+568,0,"top_ALUResultM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+569,0,"top_MemWriteM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dm", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+560,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+569,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+568,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+567,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+566,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("im", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+564,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+565,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("proc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+560,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+561,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+562,0,"Ecall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+563,0,"Ebreak",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+565,0,"top_InstrF",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+564,0,"top_pcF",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+566,0,"top_ReadDataM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+569,0,"top_MemWriteM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+568,0,"top_ALUResultM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+567,0,"top_WriteDataM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+72,0,"RegWriteD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"MemWriteD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"JumpD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"JumplrD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"BranchD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"ALUSrcD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+78,0,"ALUControlD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+79,0,"ResultSrcD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+80,0,"ImmSrcD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+81,0,"LSTypeD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+82,0,"opD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+83,0,"funct3D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,12);
    tracep->declBit(c+84,0,"funct7Db5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"funct12D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+86,0,"ResultSrcEb0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"PCSrcE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+88,0,"JumpE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"JumplrE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"BranchE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+91,0,"FlagE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+92,0,"funct3E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+93,0,"StallF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"StallD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"FlushD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"Rs1D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+96,0,"Rs2D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+97,0,"FlushE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+98,0,"ForwardAE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+99,0,"ForwardBE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+100,0,"Rs1E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+101,0,"Rs2E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+102,0,"RdE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+33,0,"RegWriteM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"RdM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+35,0,"RegWriteW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"RdW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+103,0,"InstrF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"pcF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"ReadDataM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"ALUResultM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"WriteDataM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+38,0,"MemWriteM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ctrl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+82,0,"opD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+83,0,"funct3D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+84,0,"funct7Db5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"funct12D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+90,0,"BranchE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"JumpE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"JumplrE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"funct3E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+91,0,"FlagE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+72,0,"RegWriteD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"MemWriteD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"JumpD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"JumplrD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"BranchD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"ALUSrcD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+78,0,"ALUControlD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+79,0,"ResultSrcD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+80,0,"ImmSrcD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+81,0,"LSTypeD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+87,0,"PCSrcE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+562,0,"Ecall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+563,0,"Ebreak",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+107,0,"ALUOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("ad", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+108,0,"opDb5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"funct3D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+84,0,"funct7Db5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+107,0,"ALUOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+78,0,"ALUControlD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+109,0,"RtypeSub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bru", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+92,0,"funct3E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+90,0,"BranchE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"JumpE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"JumplrE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+91,0,"FlagE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+87,0,"PCSrcE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+110,0,"cond",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"Ovf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"Carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"Neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"Zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("eu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+82,0,"opD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+85,0,"funct12D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+562,0,"Ecall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+563,0,"Ebreak",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("lsu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+83,0,"funct3D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+81,0,"LSTypeD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("md", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+82,0,"opD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+72,0,"RegWriteD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"JumpD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"JumplrD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"BranchD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"MemWriteD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"ALUSrcD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"ResultSrcD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+80,0,"ImmSrcD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+107,0,"ALUOp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+115,0,"controls",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dp", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+560,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+561,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"RegWriteD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"MemWriteD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"JumpD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"JumplrD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"BranchD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"ALUSrcD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+78,0,"ALUControlD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+79,0,"ResultSrcD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+80,0,"ImmSrcD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+81,0,"LSTypeD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+82,0,"opD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+83,0,"funct3D",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,12);
    tracep->declBit(c+84,0,"funct7Db5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"funct12D",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+87,0,"PCSrcE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+88,0,"JumpE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"JumplrE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"BranchE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"funct3E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+91,0,"FlagE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+93,0,"StallF",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"StallD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"FlushD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"Rs1D",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+96,0,"Rs2D",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+97,0,"FlushE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+98,0,"ForwardAE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+99,0,"ForwardBE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+100,0,"Rs1E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+101,0,"Rs2E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+102,0,"RdE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+86,0,"ResultSrcEb0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"RegWriteM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"RdM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+35,0,"RegWriteW",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"RdW",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+103,0,"InstrF",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"pcF",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"ReadDataM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"ALUResultM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"WriteDataM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+38,0,"MemWriteM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"pcF0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"PCPlus4F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"InstrD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"pcD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"ImmExtD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"PCPlus4D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+570,0,"Read1D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+571,0,"Read2D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"RdD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+123,0,"Read1E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"Read2E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"pcE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"ImmExtE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"PCPlus4E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"PCTargetE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"SrcAE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"SrcBE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"ALUResultE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,0,"WriteDataE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+133,0,"RegWriteE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"MemWriteE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"ALUSrcE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+136,0,"ResultSrcE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+137,0,"ALUControlE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+138,0,"LSTypeE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+39,0,"PCPlus4M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"PCTargetM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"ResultSrcM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+42,0,"LSTypeM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+43,0,"tmp_WriteDataM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"ReadDataM_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"ResultSrcW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+45,0,"ALUResultW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"ReadDataW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"PCPlus4W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"PCTargetW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"ResultW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+140,0,"PCplus4cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"PCplusbranchcout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ALU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+129,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"ALUControl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+131,0,"rslt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+142,0,"isAddSub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"Ovf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"Carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"Neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"Zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+143,0,"src_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,0,"sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+145,0,"cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("entry", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+146+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("add1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+572,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+144,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+145,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+163,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("a1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+164,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+168,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+173,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+177,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+181,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+185,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+189,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+193,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a17", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+197,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+199,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a18", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+201,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a19", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+205,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+209,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a20", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+213,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+215,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a21", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+217,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a22", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+221,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+222,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+223,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+224,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a23", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+225,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+224,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a24", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+229,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+230,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+232,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a25", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+233,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+232,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a26", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+237,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+238,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a27", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+241,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+243,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a28", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+245,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a29", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+249,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+251,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+253,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a30", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+257,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+259,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a31", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+261,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+262,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+263,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+265,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+268,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+270,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+272,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+273,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+275,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+276,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+275,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+278,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+279,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+280,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+279,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+283,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+284,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+285,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+283,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+287,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+288,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+289,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+287,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+290,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("and1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+572,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+291,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+572,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"d0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+292,0,"d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+143,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+572,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+293,0,"d0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+294,0,"d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+291,0,"d2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+295,0,"d3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+296,0,"d4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+297,0,"d5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+298,0,"d6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"d7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+300,0,"d8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"d9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+302,0,"d10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+303,0,"d11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+304,0,"d12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+305,0,"d13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+306,0,"d14",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,0,"d15",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+131,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("or1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+572,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+295,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("sll1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+572,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+308,0,"shamt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+298,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+309,0,"shift1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"shift2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+311,0,"shift3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+312,0,"shift4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+298,0,"shift5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("sra1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+572,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+308,0,"shamt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+300,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+313,0,"shift1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+314,0,"shift2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+315,0,"shift3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+316,0,"shift4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+300,0,"shift5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("srl1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+572,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+308,0,"shamt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+299,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+317,0,"shift1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+318,0,"shift2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+319,0,"shift3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+320,0,"shift4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"shift5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("xor1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+572,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+296,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("Dreg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+573,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+560,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+561,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+321,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+322,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declArray(c+325,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->popPrefix();
    tracep->pushPrefix("Ereg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+574,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+560,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+561,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+575,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+65,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 194,0);
    tracep->declArray(c+328,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 194,0);
    tracep->popPrefix();
    tracep->pushPrefix("Freg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+572,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+560,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+561,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+321,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("Mreg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+577,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+560,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+561,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+575,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+335,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 141,0);
    tracep->declArray(c+50,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 141,0);
    tracep->popPrefix();
    tracep->pushPrefix("PCmux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+572,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"d0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"d2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+578,0,"d3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+116,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("PCplus4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+572,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+579,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+576,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+117,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+140,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("a1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+341,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+342,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+343,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+344,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+345,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+346,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+345,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+347,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+348,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+349,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+348,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+350,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+351,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+352,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+351,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+353,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+354,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+355,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+354,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+356,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+357,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+358,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+357,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+359,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+360,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+361,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+360,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+362,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+363,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a17", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+364,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+363,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+365,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+366,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a18", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+367,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+366,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+368,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+369,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a19", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+370,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+369,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+371,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+372,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+373,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a20", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+374,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+372,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+375,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+376,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a21", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+377,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+376,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+378,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+379,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a22", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+380,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+379,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+381,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+382,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a23", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+383,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+382,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+384,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+385,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a24", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+386,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+385,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+387,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+388,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a25", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+389,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+388,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+390,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+391,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a26", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+392,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+391,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+393,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+394,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a27", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+395,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+394,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+396,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+397,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a28", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+398,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+397,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+399,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+400,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a29", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+401,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+400,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+402,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+404,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+575,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+404,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a30", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+406,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+407,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+408,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a31", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+409,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+408,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+410,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+411,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+412,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+411,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+413,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+414,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+404,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+415,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+416,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+417,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+416,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+418,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+419,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+420,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+419,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+421,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+422,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+423,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+422,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+424,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+425,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+426,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+425,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+427,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+428,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+429,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+428,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+430,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+343,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PCplusbranch", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+572,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+576,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+141,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+431,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("a1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+432,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+433,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+435,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+436,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+437,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+438,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+440,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+441,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+442,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+440,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+443,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+444,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+445,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+446,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+444,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+447,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+448,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+449,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+450,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+448,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+451,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+452,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+453,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+454,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+452,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+455,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+456,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+457,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+458,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+456,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+459,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+460,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+461,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+460,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+463,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+464,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a17", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+465,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+466,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+464,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+467,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+468,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a18", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+469,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+470,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+468,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+471,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+472,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a19", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+473,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+474,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+472,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+475,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+476,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+477,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+478,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+435,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+480,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a20", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+481,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+482,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+476,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+483,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+484,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a21", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+485,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+484,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+487,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+488,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a22", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+489,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+488,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+491,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+492,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a23", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+493,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+492,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+495,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+496,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a24", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+497,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+496,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+499,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+500,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a25", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+501,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+502,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+500,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+503,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+504,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a26", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+505,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+504,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+507,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+508,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a27", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+509,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+508,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+511,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+512,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a28", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+513,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+512,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+516,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a29", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+517,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+518,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+516,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+519,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+520,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+521,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+522,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+480,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+523,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+524,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a30", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+525,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+526,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+520,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+527,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a31", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+529,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+530,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+531,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+533,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+534,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+535,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+536,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+537,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+524,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+538,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+539,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+540,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+539,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+542,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+543,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+544,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+545,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+543,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+546,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+547,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+548,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+549,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+547,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+550,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+551,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+552,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+553,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+551,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+554,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+555,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+556,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+557,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+555,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+558,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+438,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("Wreg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+580,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+560,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+561,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+575,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+60,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 135,0);
    tracep->declArray(c+55,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 135,0);
    tracep->popPrefix();
    tracep->pushPrefix("ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+559,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,7);
    tracep->declBus(c+80,0,"immsrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+120,0,"immext",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mrwu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+105,0,"ReadDataM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"tmp_WriteDataM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"LSTypeM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+139,0,"ReadDataM_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"WriteDataM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("rf", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+560,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+561,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"i_rd_addr_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+96,0,"i_rd_addr_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+36,0,"i_wr_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+35,0,"i_wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"i_wr_dat",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+570,0,"o_rd_dat_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+571,0,"o_rd_dat_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("REGFILE", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+35,0,"we3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"a1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+96,0,"a2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+36,0,"a3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+49,0,"wd3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+570,0,"rd1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+571,0,"rd2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("rsltmux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+572,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"d0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"d2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"d3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+49,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("srcAmux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+572,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"d0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"d2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+578,0,"d3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+129,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("srcBmux1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+572,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"d0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"d2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+578,0,"d3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+132,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("srcBmux2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+572,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,0,"d0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+135,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+130,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("hu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+95,0,"Rs1D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+96,0,"Rs2D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+100,0,"Rs1E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+101,0,"Rs2E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+102,0,"RdE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+34,0,"RdM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+36,0,"RdW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+86,0,"ResultSrcEb0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"RegWriteM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"RegWriteW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"PCSrcE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+93,0,"StallF",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"StallD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"FlushD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"FlushE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+98,0,"ForwardAE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+99,0,"ForwardBE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+93,0,"lwStallD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+572,(0x20U),32);
    bufp->fullIData(oldp+573,(0x60U),32);
    bufp->fullIData(oldp+574,(0xc3U),32);
    bufp->fullBit(oldp+575,(1U));
    bufp->fullBit(oldp+576,(0U));
    bufp->fullIData(oldp+577,(0x8eU),32);
    bufp->fullIData(oldp+578,(0U),32);
    bufp->fullIData(oldp+579,(4U),32);
    bufp->fullIData(oldp+580,(0x88U),32);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<5>/*159:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<7>/*223:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<5>/*159:0*/ __Vtemp_14;
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[0]),32);
    bufp->fullIData(oldp+2,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[1]),32);
    bufp->fullIData(oldp+3,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[2]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[3]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[4]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[5]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[6]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[7]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[8]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[9]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[10]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[11]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[12]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[13]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[14]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[15]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[16]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[17]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[18]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[19]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[20]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[21]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[22]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[23]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[24]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[25]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[26]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[27]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[28]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[29]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[30]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[31]),32);
    bufp->fullBit(oldp+33,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                                  >> 0xdU))));
    bufp->fullCData(oldp+34,((0x1fU & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U])),5);
    bufp->fullBit(oldp+35,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[4U] 
                                  >> 7U))));
    bufp->fullCData(oldp+36,((0x1fU & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[2U])),5);
    bufp->fullIData(oldp+37,(((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                               << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                            >> 5U))),32);
    bufp->fullBit(oldp+38,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                                  >> 0xaU))));
    bufp->fullIData(oldp+39,(vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[1U]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[0U]),32);
    bufp->fullCData(oldp+41,((3U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                                    >> 0xbU))),2);
    bufp->fullCData(oldp+42,((0x1fU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                                       >> 5U))),5);
    bufp->fullIData(oldp+43,(((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                               << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                            >> 5U))),32);
    bufp->fullCData(oldp+44,((3U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[4U] 
                                    >> 5U))),2);
    bufp->fullIData(oldp+45,(((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[4U] 
                               << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                            >> 5U))),32);
    bufp->fullIData(oldp+46,(((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                               << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[2U] 
                                            >> 5U))),32);
    bufp->fullIData(oldp+47,(vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U]),32);
    bufp->fullIData(oldp+48,(vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[0U]),32);
    bufp->fullIData(oldp+49,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ResultW),32);
    bufp->fullWData(oldp+50,(vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q),142);
    bufp->fullWData(oldp+55,(vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q),136);
    __Vtemp_5[0U] = vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[0U];
    __Vtemp_5[1U] = vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[1U];
    __Vtemp_5[2U] = (((IData)((((QData)((IData)(((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                                                  << 0x1bU) 
                                                 | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                                    >> 5U)))) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel)))) 
                      << 5U) | (0x1fU & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U]));
    __Vtemp_5[3U] = (((IData)((((QData)((IData)(((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                                                  << 0x1bU) 
                                                 | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                                    >> 5U)))) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel)))) 
                      >> 0x1bU) | ((IData)(((((QData)((IData)(
                                                              ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                                                                << 0x1bU) 
                                                               | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                                                  >> 5U)))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel))) 
                                            >> 0x20U)) 
                                   << 5U));
    __Vtemp_5[4U] = ((0xe0U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                               >> 6U)) | ((IData)((
                                                   (((QData)((IData)(
                                                                     ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                                                                       << 0x1bU) 
                                                                      | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                                                         >> 5U)))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel))) 
                                                   >> 0x20U)) 
                                          >> 0x1bU));
    bufp->fullWData(oldp+60,(__Vtemp_5),136);
    __Vtemp_7[2U] = (((IData)((((QData)((IData)((((0x100U 
                                                   & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                      << 1U)) 
                                                  | ((0xc0U 
                                                      & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                         << 6U)) 
                                                     | (0x20U 
                                                        & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                           << 1U)))) 
                                                 | (((IData)(vlSelfRef.top__DOT__proc__DOT__ALUControlD) 
                                                     << 1U) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                          >> 8U)))))) 
                                << 0x28U) | (((QData)((IData)(
                                                              (7U 
                                                               & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                                  >> 0xcU)))) 
                                              << 0x25U) 
                                             | (((QData)((IData)(vlSelfRef.top__DOT__proc__DOT__LSTypeD)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__rd1)))))) 
                      << 0xfU) | ((IData)(((((QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__rd2)) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[1U]))) 
                                           >> 0x20U)) 
                                  >> 0x11U));
    __Vtemp_7[3U] = (((IData)((((QData)((IData)((((0x100U 
                                                   & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                      << 1U)) 
                                                  | ((0xc0U 
                                                      & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                         << 6U)) 
                                                     | (0x20U 
                                                        & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                           << 1U)))) 
                                                 | (((IData)(vlSelfRef.top__DOT__proc__DOT__ALUControlD) 
                                                     << 1U) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                          >> 8U)))))) 
                                << 0x28U) | (((QData)((IData)(
                                                              (7U 
                                                               & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                                  >> 0xcU)))) 
                                              << 0x25U) 
                                             | (((QData)((IData)(vlSelfRef.top__DOT__proc__DOT__LSTypeD)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__rd1)))))) 
                      >> 0x11U) | ((IData)(((((QData)((IData)(
                                                              (((0x100U 
                                                                 & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                                    << 1U)) 
                                                                | ((0xc0U 
                                                                    & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                                       << 6U)) 
                                                                   | (0x20U 
                                                                      & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                                         << 1U)))) 
                                                               | (((IData)(vlSelfRef.top__DOT__proc__DOT__ALUControlD) 
                                                                   << 1U) 
                                                                  | (1U 
                                                                     & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                                        >> 8U)))))) 
                                              << 0x28U) 
                                             | (((QData)((IData)(
                                                                 (7U 
                                                                  & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                                     >> 0xcU)))) 
                                                 << 0x25U) 
                                                | (((QData)((IData)(vlSelfRef.top__DOT__proc__DOT__LSTypeD)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__rd1))))) 
                                            >> 0x20U)) 
                                   << 0xfU));
    __Vtemp_10[0U] = vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[0U];
    __Vtemp_10[1U] = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ImmExtD;
    __Vtemp_10[2U] = (((IData)((((QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__rd2)) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[1U])))) 
                       << 0xfU) | ((0x7c00U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                               >> 5U)) 
                                   | ((0x3e0U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                 >> 0xfU)) 
                                      | (0x1fU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                  >> 7U)))));
    __Vtemp_10[3U] = (((IData)((((QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__rd2)) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[1U])))) 
                       >> 0x11U) | ((IData)(((((QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__rd2)) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[1U]))) 
                                             >> 0x20U)) 
                                    << 0xfU));
    __Vtemp_10[4U] = __Vtemp_7[2U];
    __Vtemp_10[5U] = __Vtemp_7[3U];
    __Vtemp_10[6U] = ((4U & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                             >> 0xaU)) | (3U & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                >> 5U)));
    bufp->fullWData(oldp+65,(__Vtemp_10),195);
    bufp->fullBit(oldp+72,((1U & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                  >> 0xcU))));
    bufp->fullBit(oldp+73,((1U & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                  >> 7U))));
    bufp->fullBit(oldp+74,((1U & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                  >> 1U))));
    bufp->fullBit(oldp+75,((1U & (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))));
    bufp->fullBit(oldp+76,((1U & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                  >> 4U))));
    bufp->fullBit(oldp+77,((1U & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                  >> 8U))));
    bufp->fullCData(oldp+78,(vlSelfRef.top__DOT__proc__DOT__ALUControlD),4);
    bufp->fullCData(oldp+79,((3U & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                    >> 5U))),2);
    bufp->fullCData(oldp+80,((7U & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                    >> 9U))),3);
    bufp->fullCData(oldp+81,(vlSelfRef.top__DOT__proc__DOT__LSTypeD),5);
    bufp->fullCData(oldp+82,((0x7fU & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])),7);
    bufp->fullCData(oldp+83,((7U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+84,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                  >> 0x1eU))));
    bufp->fullSData(oldp+85,((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                              >> 0x14U)),12);
    bufp->fullBit(oldp+86,((1U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[6U])));
    bufp->fullCData(oldp+87,(vlSelfRef.top__DOT__proc__DOT__PCSrcE),2);
    bufp->fullBit(oldp+88,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                  >> 0x1eU))));
    bufp->fullBit(oldp+89,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                  >> 0x1dU))));
    bufp->fullBit(oldp+90,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                  >> 0x1cU))));
    bufp->fullCData(oldp+91,((((((~ ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                      >> 0x18U) ^ (
                                                   (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                                    ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcBE) 
                                                   >> 0x1fU))) 
                                 << 3U) & (((8U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                                   >> 0x1cU)) 
                                            ^ ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__Neg) 
                                               << 3U)) 
                                           & ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__isAddSub) 
                                              << 3U))) 
                               | ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__bru__DOT__Carry) 
                                  << 2U)) | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__Neg) 
                                              << 1U) 
                                             | (0xffffffffU 
                                                == 
                                                (~ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALUResultE))))),4);
    bufp->fullCData(oldp+92,((7U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                    >> 0x14U))),3);
    bufp->fullBit(oldp+93,(vlSelfRef.top__DOT__proc__DOT__StallF));
    bufp->fullBit(oldp+94,((0U != (IData)(vlSelfRef.top__DOT__proc__DOT__PCSrcE))));
    bufp->fullCData(oldp+95,((0x1fU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+96,((0x1fU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                       >> 0x14U))),5);
    bufp->fullBit(oldp+97,(((IData)(vlSelfRef.top__DOT__proc__DOT__StallF) 
                            | (0U != (IData)(vlSelfRef.top__DOT__proc__DOT__PCSrcE)))));
    bufp->fullCData(oldp+98,(vlSelfRef.top__DOT__proc__DOT__ForwardAE),2);
    bufp->fullCData(oldp+99,(vlSelfRef.top__DOT__proc__DOT__ForwardBE),2);
    bufp->fullCData(oldp+100,((0x1fU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                        >> 0xaU))),5);
    bufp->fullCData(oldp+101,((0x1fU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                        >> 5U))),5);
    bufp->fullCData(oldp+102,((0x1fU & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U])),5);
    bufp->fullIData(oldp+103,(vlSelfRef.top__DOT__im__DOT__IMEM
                              [(0xffU & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                         >> 2U))]),32);
    bufp->fullIData(oldp+104,(vlSelfRef.top__DOT__proc__DOT__pcF),32);
    bufp->fullIData(oldp+105,(vlSelfRef.top__DOT__proc__DOT__ReadDataM),32);
    bufp->fullIData(oldp+106,(vlSelfRef.top__DOT__proc__DOT__WriteDataM),32);
    bufp->fullCData(oldp+107,((3U & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                     >> 2U))),2);
    bufp->fullBit(oldp+108,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                   >> 5U))));
    bufp->fullBit(oldp+109,((IData)((0x40000020U == 
                                     (0x40000020U & 
                                      vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])))));
    bufp->fullBit(oldp+110,(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__bru__DOT__cond));
    bufp->fullBit(oldp+111,(((~ ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                  >> 0x18U) ^ ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                                ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcBE) 
                                               >> 0x1fU))) 
                             & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                  >> 0x1fU) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__Neg)) 
                                & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__isAddSub)))));
    bufp->fullBit(oldp+112,(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__bru__DOT__Carry));
    bufp->fullBit(oldp+113,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__Neg));
    bufp->fullBit(oldp+114,((0xffffffffU == (~ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALUResultE))));
    bufp->fullSData(oldp+115,(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls),13);
    bufp->fullIData(oldp+116,(((0x20000000U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
                                ? ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCmux__DOT____VdfgRegularize_hae03c8cc_0_0)
                                    ? 0U : vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALUResultE)
                                : ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCmux__DOT____VdfgRegularize_hae03c8cc_0_0)
                                    ? vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCTargetE
                                    : vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCPlus4F))),32);
    bufp->fullIData(oldp+117,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCPlus4F),32);
    bufp->fullIData(oldp+118,(vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U]),32);
    bufp->fullIData(oldp+119,(vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[1U]),32);
    bufp->fullIData(oldp+120,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ImmExtD),32);
    bufp->fullIData(oldp+121,(vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[0U]),32);
    bufp->fullCData(oldp+122,((0x1fU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                        >> 7U))),5);
    bufp->fullIData(oldp+123,(((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                << 0x11U) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[4U] 
                                             >> 0xfU))),32);
    bufp->fullIData(oldp+124,(((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[4U] 
                                << 0x11U) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                             >> 0xfU))),32);
    bufp->fullIData(oldp+125,(((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                << 0x11U) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                             >> 0xfU))),32);
    bufp->fullIData(oldp+126,(vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U]),32);
    bufp->fullIData(oldp+127,(vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[0U]),32);
    bufp->fullIData(oldp+128,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCTargetE),32);
    bufp->fullIData(oldp+129,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE),32);
    bufp->fullIData(oldp+130,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcBE),32);
    bufp->fullIData(oldp+131,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALUResultE),32);
    bufp->fullIData(oldp+132,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__WriteDataE),32);
    bufp->fullBit(oldp+133,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[6U] 
                                   >> 2U))));
    bufp->fullBit(oldp+134,((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+135,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                   >> 0x17U))));
    bufp->fullCData(oldp+136,((3U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[6U])),2);
    bufp->fullCData(oldp+137,((0xfU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+138,((0x1fU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                        >> 0xfU))),5);
    bufp->fullIData(oldp+139,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel),32);
    bufp->fullBit(oldp+140,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout) 
                             & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                >> 0x1fU))));
    bufp->fullBit(oldp+141,((1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                     >> 0xeU) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                                 >> 0x1fU)) 
                                   | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout) 
                                      & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0))))));
    bufp->fullBit(oldp+142,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__isAddSub));
    bufp->fullIData(oldp+143,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b),32);
    bufp->fullIData(oldp+144,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sum),32);
    bufp->fullBit(oldp+145,((1U & ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a32__cout) 
                                   ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                      >> 0x18U)))));
    bufp->fullIData(oldp+146,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[0]),32);
    bufp->fullIData(oldp+147,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[1]),32);
    bufp->fullIData(oldp+148,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[2]),32);
    bufp->fullIData(oldp+149,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[3]),32);
    bufp->fullIData(oldp+150,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[4]),32);
    bufp->fullIData(oldp+151,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[5]),32);
    bufp->fullIData(oldp+152,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[6]),32);
    bufp->fullIData(oldp+153,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[7]),32);
    bufp->fullIData(oldp+154,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[8]),32);
    bufp->fullIData(oldp+155,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[9]),32);
    bufp->fullIData(oldp+156,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[10]),32);
    bufp->fullIData(oldp+157,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[11]),32);
    bufp->fullIData(oldp+158,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[12]),32);
    bufp->fullIData(oldp+159,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[13]),32);
    bufp->fullIData(oldp+160,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[14]),32);
    bufp->fullIData(oldp+161,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[15]),32);
    bufp->fullBit(oldp+162,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                   >> 0x18U))));
    bufp->fullIData(oldp+163,((((((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a32__cout) 
                                    << 0x1fU) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a31__cout) 
                                                 << 0x1eU)) 
                                  | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a30__cout) 
                                      << 0x1dU) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a29__cout) 
                                                   << 0x1cU))) 
                                 | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a28__cout) 
                                      << 0x1bU) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a27__cout) 
                                                   << 0x1aU)) 
                                    | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a26__cout) 
                                        << 0x19U) | 
                                       ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a25__cout) 
                                        << 0x18U)))) 
                                | (((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a24__cout) 
                                      << 0x17U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a23__cout) 
                                                   << 0x16U)) 
                                    | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a22__cout) 
                                        << 0x15U) | 
                                       ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a21__cout) 
                                        << 0x14U))) 
                                   | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a20__cout) 
                                        << 0x13U) | 
                                       ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a19__cout) 
                                        << 0x12U)) 
                                      | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a18__cout) 
                                          << 0x11U) 
                                         | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a17__cout) 
                                            << 0x10U))))) 
                               | ((((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a16__cout) 
                                      << 0xfU) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a15__cout) 
                                                  << 0xeU)) 
                                    | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a14__cout) 
                                        << 0xdU) | 
                                       ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a13__cout) 
                                        << 0xcU))) 
                                   | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a12__cout) 
                                        << 0xbU) | 
                                       ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a11__cout) 
                                        << 0xaU)) | 
                                      (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a10__cout) 
                                        << 9U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a9__cout) 
                                                  << 8U)))) 
                                  | (((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a8__cout) 
                                        << 7U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a7__cout) 
                                                  << 6U)) 
                                      | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a6__cout) 
                                          << 5U) | 
                                         ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a5__cout) 
                                          << 4U))) 
                                     | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a4__cout) 
                                          << 3U) | 
                                         ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a3__cout) 
                                          << 2U)) | 
                                        (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a2__cout) 
                                          << 1U) | (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__carry__BRA__0__KET__))))))),32);
    bufp->fullBit(oldp+164,((1U & vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE)));
    bufp->fullBit(oldp+165,((1U & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b)));
    bufp->fullBit(oldp+166,((1U & ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a1__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                   ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                      >> 0x18U)))));
    bufp->fullBit(oldp+167,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__carry__BRA__0__KET__));
    bufp->fullBit(oldp+168,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                   >> 9U))));
    bufp->fullBit(oldp+169,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 9U))));
    bufp->fullBit(oldp+170,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a9__cout));
    bufp->fullBit(oldp+171,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a9__cout))));
    bufp->fullBit(oldp+172,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a10__cout));
    bufp->fullBit(oldp+173,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                   >> 0xaU))));
    bufp->fullBit(oldp+174,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0xaU))));
    bufp->fullBit(oldp+175,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a10__cout))));
    bufp->fullBit(oldp+176,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a11__cout));
    bufp->fullBit(oldp+177,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                   >> 0xbU))));
    bufp->fullBit(oldp+178,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0xbU))));
    bufp->fullBit(oldp+179,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a11__cout))));
    bufp->fullBit(oldp+180,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a12__cout));
    bufp->fullBit(oldp+181,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                   >> 0xcU))));
    bufp->fullBit(oldp+182,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0xcU))));
    bufp->fullBit(oldp+183,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a12__cout))));
    bufp->fullBit(oldp+184,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a13__cout));
    bufp->fullBit(oldp+185,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                   >> 0xdU))));
    bufp->fullBit(oldp+186,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0xdU))));
    bufp->fullBit(oldp+187,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a13__cout))));
    bufp->fullBit(oldp+188,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a14__cout));
    bufp->fullBit(oldp+189,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                   >> 0xeU))));
    bufp->fullBit(oldp+190,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0xeU))));
    bufp->fullBit(oldp+191,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a14__cout))));
    bufp->fullBit(oldp+192,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a15__cout));
    bufp->fullBit(oldp+193,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                   >> 0xfU))));
    bufp->fullBit(oldp+194,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0xfU))));
    bufp->fullBit(oldp+195,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a15__cout))));
    bufp->fullBit(oldp+196,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a16__cout));
    bufp->fullBit(oldp+197,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                   >> 0x10U))));
    bufp->fullBit(oldp+198,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x10U))));
    bufp->fullBit(oldp+199,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a16__cout))));
    bufp->fullBit(oldp+200,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a17__cout));
    bufp->fullBit(oldp+201,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                   >> 0x11U))));
    bufp->fullBit(oldp+202,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x11U))));
    bufp->fullBit(oldp+203,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a17__cout))));
    bufp->fullBit(oldp+204,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a18__cout));
    bufp->fullBit(oldp+205,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                   >> 0x12U))));
    bufp->fullBit(oldp+206,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x12U))));
    bufp->fullBit(oldp+207,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a18__cout))));
    bufp->fullBit(oldp+208,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a19__cout));
    bufp->fullBit(oldp+209,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                   >> 1U))));
    bufp->fullBit(oldp+210,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 1U))));
    bufp->fullBit(oldp+211,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__carry__BRA__0__KET__))));
    bufp->fullBit(oldp+212,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a2__cout));
    bufp->fullBit(oldp+213,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                   >> 0x13U))));
    bufp->fullBit(oldp+214,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x13U))));
    bufp->fullBit(oldp+215,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a19__cout))));
    bufp->fullBit(oldp+216,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a20__cout));
    bufp->fullBit(oldp+217,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                   >> 0x14U))));
    bufp->fullBit(oldp+218,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x14U))));
    bufp->fullBit(oldp+219,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a20__cout))));
    bufp->fullBit(oldp+220,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a21__cout));
    bufp->fullBit(oldp+221,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                   >> 0x15U))));
    bufp->fullBit(oldp+222,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x15U))));
    bufp->fullBit(oldp+223,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a21__cout))));
    bufp->fullBit(oldp+224,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a22__cout));
    bufp->fullBit(oldp+225,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                   >> 0x16U))));
    bufp->fullBit(oldp+226,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x16U))));
    bufp->fullBit(oldp+227,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a22__cout))));
    bufp->fullBit(oldp+228,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a23__cout));
    bufp->fullBit(oldp+229,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                   >> 0x17U))));
    bufp->fullBit(oldp+230,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x17U))));
    bufp->fullBit(oldp+231,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a23__cout))));
    bufp->fullBit(oldp+232,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a24__cout));
    bufp->fullBit(oldp+233,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                   >> 0x18U))));
    bufp->fullBit(oldp+234,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x18U))));
    bufp->fullBit(oldp+235,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a24__cout))));
    bufp->fullBit(oldp+236,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a25__cout));
    bufp->fullBit(oldp+237,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                   >> 0x19U))));
    bufp->fullBit(oldp+238,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x19U))));
    bufp->fullBit(oldp+239,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a25__cout))));
    bufp->fullBit(oldp+240,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a26__cout));
    bufp->fullBit(oldp+241,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+242,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+243,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a26__cout))));
    bufp->fullBit(oldp+244,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a27__cout));
    bufp->fullBit(oldp+245,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+246,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+247,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a27__cout))));
    bufp->fullBit(oldp+248,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a28__cout));
    bufp->fullBit(oldp+249,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+250,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+251,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a28__cout))));
    bufp->fullBit(oldp+252,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a29__cout));
    bufp->fullBit(oldp+253,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                   >> 2U))));
    bufp->fullBit(oldp+254,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 2U))));
    bufp->fullBit(oldp+255,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a2__cout))));
    bufp->fullBit(oldp+256,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a3__cout));
    bufp->fullBit(oldp+257,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+258,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+259,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a29__cout))));
    bufp->fullBit(oldp+260,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a30__cout));
    bufp->fullBit(oldp+261,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+262,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+263,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a30__cout))));
    bufp->fullBit(oldp+264,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a31__cout));
    bufp->fullBit(oldp+265,((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                             >> 0x1fU)));
    bufp->fullBit(oldp+266,((vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                             >> 0x1fU)));
    bufp->fullBit(oldp+267,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a32__cout));
    bufp->fullBit(oldp+268,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                   >> 3U))));
    bufp->fullBit(oldp+269,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 3U))));
    bufp->fullBit(oldp+270,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a3__cout))));
    bufp->fullBit(oldp+271,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a4__cout));
    bufp->fullBit(oldp+272,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                   >> 4U))));
    bufp->fullBit(oldp+273,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 4U))));
    bufp->fullBit(oldp+274,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a4__cout))));
    bufp->fullBit(oldp+275,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a5__cout));
    bufp->fullBit(oldp+276,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                   >> 5U))));
    bufp->fullBit(oldp+277,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 5U))));
    bufp->fullBit(oldp+278,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a5__cout))));
    bufp->fullBit(oldp+279,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a6__cout));
    bufp->fullBit(oldp+280,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                   >> 6U))));
    bufp->fullBit(oldp+281,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 6U))));
    bufp->fullBit(oldp+282,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a6__cout))));
    bufp->fullBit(oldp+283,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a7__cout));
    bufp->fullBit(oldp+284,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                   >> 7U))));
    bufp->fullBit(oldp+285,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 7U))));
    bufp->fullBit(oldp+286,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a7__cout))));
    bufp->fullBit(oldp+287,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a8__cout));
    bufp->fullBit(oldp+288,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                   >> 8U))));
    bufp->fullBit(oldp+289,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 8U))));
    bufp->fullBit(oldp+290,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a8__cout))));
    bufp->fullIData(oldp+291,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__and1__y),32);
    bufp->fullIData(oldp+292,((~ vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcBE)),32);
    bufp->fullIData(oldp+293,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                              [0U]),32);
    bufp->fullIData(oldp+294,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                              [1U]),32);
    bufp->fullIData(oldp+295,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__or1__y),32);
    bufp->fullIData(oldp+296,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__xor1__y),32);
    bufp->fullIData(oldp+297,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                              [5U]),32);
    bufp->fullIData(oldp+298,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift5),32);
    bufp->fullIData(oldp+299,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift5),32);
    bufp->fullIData(oldp+300,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift5),32);
    bufp->fullIData(oldp+301,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                              [9U]),32);
    bufp->fullIData(oldp+302,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                              [0xaU]),32);
    bufp->fullIData(oldp+303,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                              [0xbU]),32);
    bufp->fullIData(oldp+304,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                              [0xcU]),32);
    bufp->fullIData(oldp+305,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                              [0xdU]),32);
    bufp->fullIData(oldp+306,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                              [0xeU]),32);
    bufp->fullIData(oldp+307,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                              [0xfU]),32);
    bufp->fullCData(oldp+308,((0x1fU & vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcBE)),5);
    bufp->fullIData(oldp+309,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift1),32);
    bufp->fullIData(oldp+310,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift2),32);
    bufp->fullIData(oldp+311,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift3),32);
    bufp->fullIData(oldp+312,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift4),32);
    bufp->fullIData(oldp+313,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift1),32);
    bufp->fullIData(oldp+314,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift2),32);
    bufp->fullIData(oldp+315,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift3),32);
    bufp->fullIData(oldp+316,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift4),32);
    bufp->fullIData(oldp+317,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift1),32);
    bufp->fullIData(oldp+318,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift2),32);
    bufp->fullIData(oldp+319,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift3),32);
    bufp->fullIData(oldp+320,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift4),32);
    bufp->fullBit(oldp+321,((1U & (~ (IData)(vlSelfRef.top__DOT__proc__DOT__StallF)))));
    __Vtemp_11[0U] = vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCPlus4F;
    __Vtemp_11[1U] = (IData)((((QData)((IData)(vlSelfRef.top__DOT__im__DOT__IMEM
                                               [(0xffU 
                                                 & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                                    >> 2U))])) 
                               << 0x20U) | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__pcF))));
    __Vtemp_11[2U] = (IData)(((((QData)((IData)(vlSelfRef.top__DOT__im__DOT__IMEM
                                                [(0xffU 
                                                  & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                                     >> 2U))])) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__pcF))) 
                              >> 0x20U));
    bufp->fullWData(oldp+322,(__Vtemp_11),96);
    bufp->fullWData(oldp+325,(vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q),96);
    bufp->fullWData(oldp+328,(vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q),195);
    __Vtemp_14[0U] = (IData)((((QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[0U])) 
                               << 0x20U) | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCTargetE))));
    __Vtemp_14[1U] = (IData)(((((QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[0U])) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCTargetE))) 
                              >> 0x20U));
    __Vtemp_14[2U] = (((IData)((((QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALUResultE)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__WriteDataE)))) 
                       << 5U) | (0x1fU & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U]));
    __Vtemp_14[3U] = (((IData)((((QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALUResultE)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__WriteDataE)))) 
                       >> 0x1bU) | ((IData)(((((QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALUResultE)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__WriteDataE))) 
                                             >> 0x20U)) 
                                    << 5U));
    __Vtemp_14[4U] = ((0xffffffe0U & ((0x3c00U & ((
                                                   vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[6U] 
                                                   << 0xbU) 
                                                  | (0x400U 
                                                     & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                                        >> 0x15U)))) 
                                      | (0x3e0U & (
                                                   vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                                   >> 0xaU)))) 
                      | ((IData)(((((QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALUResultE)) 
                                    << 0x20U) | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__WriteDataE))) 
                                  >> 0x20U)) >> 0x1bU));
    bufp->fullWData(oldp+335,(__Vtemp_14),142);
    bufp->fullIData(oldp+340,(((((((0x80000000U & (
                                                   ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout) 
                                                    << 0x1fU) 
                                                   & vlSelfRef.top__DOT__proc__DOT__pcF)) 
                                   | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout) 
                                      << 0x1eU)) | 
                                  (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a30__cout) 
                                    << 0x1dU) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a29__cout) 
                                                 << 0x1cU))) 
                                 | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a28__cout) 
                                      << 0x1bU) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a27__cout) 
                                                   << 0x1aU)) 
                                    | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a26__cout) 
                                        << 0x19U) | 
                                       ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a25__cout) 
                                        << 0x18U)))) 
                                | (((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a24__cout) 
                                      << 0x17U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a23__cout) 
                                                   << 0x16U)) 
                                    | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a22__cout) 
                                        << 0x15U) | 
                                       ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a21__cout) 
                                        << 0x14U))) 
                                   | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a20__cout) 
                                        << 0x13U) | 
                                       ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a19__cout) 
                                        << 0x12U)) 
                                      | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a18__cout) 
                                          << 0x11U) 
                                         | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a17__cout) 
                                            << 0x10U))))) 
                               | ((((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a16__cout) 
                                      << 0xfU) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a15__cout) 
                                                  << 0xeU)) 
                                    | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a14__cout) 
                                        << 0xdU) | 
                                       ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a13__cout) 
                                        << 0xcU))) 
                                   | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a12__cout) 
                                        << 0xbU) | 
                                       ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a11__cout) 
                                        << 0xaU)) | 
                                      (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a10__cout) 
                                        << 9U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a9__cout) 
                                                  << 8U)))) 
                                  | (((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a8__cout) 
                                        << 7U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a7__cout) 
                                                  << 6U)) 
                                      | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a6__cout) 
                                          << 5U) | 
                                         ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a5__cout) 
                                          << 4U))) 
                                     | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a4__cout) 
                                         << 3U) | (4U 
                                                   & vlSelfRef.top__DOT__proc__DOT__pcF)))))),32);
    bufp->fullBit(oldp+341,((1U & vlSelfRef.top__DOT__proc__DOT__pcF)));
    bufp->fullBit(oldp+342,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                   >> 9U))));
    bufp->fullBit(oldp+343,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a9__cout));
    bufp->fullBit(oldp+344,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                    >> 9U) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a9__cout)))));
    bufp->fullBit(oldp+345,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a10__cout));
    bufp->fullBit(oldp+346,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                   >> 0xaU))));
    bufp->fullBit(oldp+347,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                    >> 0xaU) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a10__cout)))));
    bufp->fullBit(oldp+348,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a11__cout));
    bufp->fullBit(oldp+349,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                   >> 0xbU))));
    bufp->fullBit(oldp+350,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                    >> 0xbU) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a11__cout)))));
    bufp->fullBit(oldp+351,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a12__cout));
    bufp->fullBit(oldp+352,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                   >> 0xcU))));
    bufp->fullBit(oldp+353,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                    >> 0xcU) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a12__cout)))));
    bufp->fullBit(oldp+354,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a13__cout));
    bufp->fullBit(oldp+355,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                   >> 0xdU))));
    bufp->fullBit(oldp+356,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                    >> 0xdU) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a13__cout)))));
    bufp->fullBit(oldp+357,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a14__cout));
    bufp->fullBit(oldp+358,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                   >> 0xeU))));
    bufp->fullBit(oldp+359,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                    >> 0xeU) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a14__cout)))));
    bufp->fullBit(oldp+360,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a15__cout));
    bufp->fullBit(oldp+361,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                   >> 0xfU))));
    bufp->fullBit(oldp+362,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                    >> 0xfU) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a15__cout)))));
    bufp->fullBit(oldp+363,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a16__cout));
    bufp->fullBit(oldp+364,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                   >> 0x10U))));
    bufp->fullBit(oldp+365,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                    >> 0x10U) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a16__cout)))));
    bufp->fullBit(oldp+366,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a17__cout));
    bufp->fullBit(oldp+367,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                   >> 0x11U))));
    bufp->fullBit(oldp+368,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                    >> 0x11U) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a17__cout)))));
    bufp->fullBit(oldp+369,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a18__cout));
    bufp->fullBit(oldp+370,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                   >> 0x12U))));
    bufp->fullBit(oldp+371,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                    >> 0x12U) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a18__cout)))));
    bufp->fullBit(oldp+372,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a19__cout));
    bufp->fullBit(oldp+373,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                   >> 1U))));
    bufp->fullBit(oldp+374,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                   >> 0x13U))));
    bufp->fullBit(oldp+375,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                    >> 0x13U) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a19__cout)))));
    bufp->fullBit(oldp+376,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a20__cout));
    bufp->fullBit(oldp+377,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                   >> 0x14U))));
    bufp->fullBit(oldp+378,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                    >> 0x14U) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a20__cout)))));
    bufp->fullBit(oldp+379,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a21__cout));
    bufp->fullBit(oldp+380,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                   >> 0x15U))));
    bufp->fullBit(oldp+381,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                    >> 0x15U) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a21__cout)))));
    bufp->fullBit(oldp+382,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a22__cout));
    bufp->fullBit(oldp+383,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                   >> 0x16U))));
    bufp->fullBit(oldp+384,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                    >> 0x16U) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a22__cout)))));
    bufp->fullBit(oldp+385,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a23__cout));
    bufp->fullBit(oldp+386,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                   >> 0x17U))));
    bufp->fullBit(oldp+387,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                    >> 0x17U) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a23__cout)))));
    bufp->fullBit(oldp+388,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a24__cout));
    bufp->fullBit(oldp+389,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                   >> 0x18U))));
    bufp->fullBit(oldp+390,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                    >> 0x18U) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a24__cout)))));
    bufp->fullBit(oldp+391,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a25__cout));
    bufp->fullBit(oldp+392,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                   >> 0x19U))));
    bufp->fullBit(oldp+393,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                    >> 0x19U) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a25__cout)))));
    bufp->fullBit(oldp+394,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a26__cout));
    bufp->fullBit(oldp+395,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+396,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                    >> 0x1aU) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a26__cout)))));
    bufp->fullBit(oldp+397,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a27__cout));
    bufp->fullBit(oldp+398,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+399,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                    >> 0x1bU) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a27__cout)))));
    bufp->fullBit(oldp+400,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a28__cout));
    bufp->fullBit(oldp+401,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+402,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                    >> 0x1cU) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a28__cout)))));
    bufp->fullBit(oldp+403,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a29__cout));
    bufp->fullBit(oldp+404,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                   >> 2U))));
    bufp->fullBit(oldp+405,((1U & (~ (vlSelfRef.top__DOT__proc__DOT__pcF 
                                      >> 2U)))));
    bufp->fullBit(oldp+406,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+407,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                    >> 0x1dU) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a29__cout)))));
    bufp->fullBit(oldp+408,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a30__cout));
    bufp->fullBit(oldp+409,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+410,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                    >> 0x1eU) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a30__cout)))));
    bufp->fullBit(oldp+411,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout));
    bufp->fullBit(oldp+412,((vlSelfRef.top__DOT__proc__DOT__pcF 
                             >> 0x1fU)));
    bufp->fullBit(oldp+413,(((vlSelfRef.top__DOT__proc__DOT__pcF 
                              >> 0x1fU) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout))));
    bufp->fullBit(oldp+414,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                   >> 3U))));
    bufp->fullBit(oldp+415,((1U & VL_REDXOR_4((0xcU 
                                               & vlSelfRef.top__DOT__proc__DOT__pcF)))));
    bufp->fullBit(oldp+416,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a4__cout));
    bufp->fullBit(oldp+417,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                   >> 4U))));
    bufp->fullBit(oldp+418,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                    >> 4U) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a4__cout)))));
    bufp->fullBit(oldp+419,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a5__cout));
    bufp->fullBit(oldp+420,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                   >> 5U))));
    bufp->fullBit(oldp+421,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                    >> 5U) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a5__cout)))));
    bufp->fullBit(oldp+422,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a6__cout));
    bufp->fullBit(oldp+423,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                   >> 6U))));
    bufp->fullBit(oldp+424,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                    >> 6U) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a6__cout)))));
    bufp->fullBit(oldp+425,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a7__cout));
    bufp->fullBit(oldp+426,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                   >> 7U))));
    bufp->fullBit(oldp+427,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                    >> 7U) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a7__cout)))));
    bufp->fullBit(oldp+428,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a8__cout));
    bufp->fullBit(oldp+429,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                   >> 8U))));
    bufp->fullBit(oldp+430,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                    >> 8U) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a8__cout)))));
    bufp->fullIData(oldp+431,(((((((0x80000000U & (
                                                   (0x80000000U 
                                                    & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                                        << 0x11U) 
                                                       & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U])) 
                                                   | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout) 
                                                       & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0)) 
                                                      << 0x1fU))) 
                                   | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout) 
                                      << 0x1eU)) | 
                                  (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout) 
                                    << 0x1dU) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout) 
                                                 << 0x1cU))) 
                                 | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout) 
                                      << 0x1bU) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout) 
                                                   << 0x1aU)) 
                                    | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout) 
                                        << 0x19U) | 
                                       ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout) 
                                        << 0x18U)))) 
                                | (((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout) 
                                      << 0x17U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout) 
                                                   << 0x16U)) 
                                    | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout) 
                                        << 0x15U) | 
                                       ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout) 
                                        << 0x14U))) 
                                   | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout) 
                                        << 0x13U) | 
                                       ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout) 
                                        << 0x12U)) 
                                      | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout) 
                                          << 0x11U) 
                                         | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout) 
                                            << 0x10U))))) 
                               | ((((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout) 
                                      << 0xfU) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout) 
                                                  << 0xeU)) 
                                    | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout) 
                                        << 0xdU) | 
                                       ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout) 
                                        << 0xcU))) 
                                   | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout) 
                                        << 0xbU) | 
                                       ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout) 
                                        << 0xaU)) | 
                                      (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout) 
                                        << 9U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout) 
                                                  << 8U)))) 
                                  | (((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout) 
                                        << 7U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout) 
                                                  << 6U)) 
                                      | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout) 
                                          << 5U) | 
                                         ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout) 
                                          << 4U))) 
                                     | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout) 
                                          << 3U) | 
                                         ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout) 
                                          << 2U)) | 
                                        (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout) 
                                          << 1U) | (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__carry__BRA__0__KET__))))))),32);
    bufp->fullBit(oldp+432,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0xfU))));
    bufp->fullBit(oldp+433,((1U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U])));
    bufp->fullBit(oldp+434,((1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                    >> 0xfU) ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U]))));
    bufp->fullBit(oldp+435,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__carry__BRA__0__KET__));
    bufp->fullBit(oldp+436,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x18U))));
    bufp->fullBit(oldp+437,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 9U))));
    bufp->fullBit(oldp+438,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout));
    bufp->fullBit(oldp+439,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout))));
    bufp->fullBit(oldp+440,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout));
    bufp->fullBit(oldp+441,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x19U))));
    bufp->fullBit(oldp+442,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0xaU))));
    bufp->fullBit(oldp+443,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout))));
    bufp->fullBit(oldp+444,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout));
    bufp->fullBit(oldp+445,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+446,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0xbU))));
    bufp->fullBit(oldp+447,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout))));
    bufp->fullBit(oldp+448,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout));
    bufp->fullBit(oldp+449,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+450,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0xcU))));
    bufp->fullBit(oldp+451,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout))));
    bufp->fullBit(oldp+452,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout));
    bufp->fullBit(oldp+453,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+454,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0xdU))));
    bufp->fullBit(oldp+455,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout))));
    bufp->fullBit(oldp+456,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout));
    bufp->fullBit(oldp+457,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+458,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0xeU))));
    bufp->fullBit(oldp+459,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout))));
    bufp->fullBit(oldp+460,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout));
    bufp->fullBit(oldp+461,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+462,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0xfU))));
    bufp->fullBit(oldp+463,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout))));
    bufp->fullBit(oldp+464,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout));
    bufp->fullBit(oldp+465,((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+466,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x10U))));
    bufp->fullBit(oldp+467,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout))));
    bufp->fullBit(oldp+468,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout));
    bufp->fullBit(oldp+469,((1U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U])));
    bufp->fullBit(oldp+470,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x11U))));
    bufp->fullBit(oldp+471,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout))));
    bufp->fullBit(oldp+472,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout));
    bufp->fullBit(oldp+473,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                   >> 1U))));
    bufp->fullBit(oldp+474,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x12U))));
    bufp->fullBit(oldp+475,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout))));
    bufp->fullBit(oldp+476,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout));
    bufp->fullBit(oldp+477,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x10U))));
    bufp->fullBit(oldp+478,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 1U))));
    bufp->fullBit(oldp+479,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__carry__BRA__0__KET__))));
    bufp->fullBit(oldp+480,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout));
    bufp->fullBit(oldp+481,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                   >> 2U))));
    bufp->fullBit(oldp+482,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x13U))));
    bufp->fullBit(oldp+483,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout))));
    bufp->fullBit(oldp+484,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout));
    bufp->fullBit(oldp+485,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                   >> 3U))));
    bufp->fullBit(oldp+486,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x14U))));
    bufp->fullBit(oldp+487,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout))));
    bufp->fullBit(oldp+488,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout));
    bufp->fullBit(oldp+489,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                   >> 4U))));
    bufp->fullBit(oldp+490,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x15U))));
    bufp->fullBit(oldp+491,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout))));
    bufp->fullBit(oldp+492,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout));
    bufp->fullBit(oldp+493,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                   >> 5U))));
    bufp->fullBit(oldp+494,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x16U))));
    bufp->fullBit(oldp+495,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout))));
    bufp->fullBit(oldp+496,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout));
    bufp->fullBit(oldp+497,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                   >> 6U))));
    bufp->fullBit(oldp+498,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x17U))));
    bufp->fullBit(oldp+499,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout))));
    bufp->fullBit(oldp+500,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout));
    bufp->fullBit(oldp+501,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                   >> 7U))));
    bufp->fullBit(oldp+502,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x18U))));
    bufp->fullBit(oldp+503,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout))));
    bufp->fullBit(oldp+504,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout));
    bufp->fullBit(oldp+505,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                   >> 8U))));
    bufp->fullBit(oldp+506,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x19U))));
    bufp->fullBit(oldp+507,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout))));
    bufp->fullBit(oldp+508,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout));
    bufp->fullBit(oldp+509,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                   >> 9U))));
    bufp->fullBit(oldp+510,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+511,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout))));
    bufp->fullBit(oldp+512,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout));
    bufp->fullBit(oldp+513,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                   >> 0xaU))));
    bufp->fullBit(oldp+514,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+515,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout))));
    bufp->fullBit(oldp+516,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout));
    bufp->fullBit(oldp+517,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                   >> 0xbU))));
    bufp->fullBit(oldp+518,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+519,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout))));
    bufp->fullBit(oldp+520,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout));
    bufp->fullBit(oldp+521,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x11U))));
    bufp->fullBit(oldp+522,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 2U))));
    bufp->fullBit(oldp+523,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout))));
    bufp->fullBit(oldp+524,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout));
    bufp->fullBit(oldp+525,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                   >> 0xcU))));
    bufp->fullBit(oldp+526,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+527,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout))));
    bufp->fullBit(oldp+528,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout));
    bufp->fullBit(oldp+529,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                   >> 0xdU))));
    bufp->fullBit(oldp+530,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+531,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout))));
    bufp->fullBit(oldp+532,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout));
    bufp->fullBit(oldp+533,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                   >> 0xeU))));
    bufp->fullBit(oldp+534,((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+535,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout))));
    bufp->fullBit(oldp+536,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x12U))));
    bufp->fullBit(oldp+537,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 3U))));
    bufp->fullBit(oldp+538,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout))));
    bufp->fullBit(oldp+539,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout));
    bufp->fullBit(oldp+540,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x13U))));
    bufp->fullBit(oldp+541,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 4U))));
    bufp->fullBit(oldp+542,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout))));
    bufp->fullBit(oldp+543,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout));
    bufp->fullBit(oldp+544,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x14U))));
    bufp->fullBit(oldp+545,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 5U))));
    bufp->fullBit(oldp+546,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout))));
    bufp->fullBit(oldp+547,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout));
    bufp->fullBit(oldp+548,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x15U))));
    bufp->fullBit(oldp+549,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 6U))));
    bufp->fullBit(oldp+550,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout))));
    bufp->fullBit(oldp+551,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout));
    bufp->fullBit(oldp+552,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x16U))));
    bufp->fullBit(oldp+553,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 7U))));
    bufp->fullBit(oldp+554,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout))));
    bufp->fullBit(oldp+555,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout));
    bufp->fullBit(oldp+556,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x17U))));
    bufp->fullBit(oldp+557,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 8U))));
    bufp->fullBit(oldp+558,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout))));
    bufp->fullIData(oldp+559,((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                               >> 7U)),25);
    bufp->fullBit(oldp+560,(vlSelfRef.clk));
    bufp->fullBit(oldp+561,(vlSelfRef.rst));
    bufp->fullBit(oldp+562,(vlSelfRef.Ecall));
    bufp->fullBit(oldp+563,(vlSelfRef.Ebreak));
    bufp->fullIData(oldp+564,(vlSelfRef.top_pcF),32);
    bufp->fullIData(oldp+565,(vlSelfRef.top_InstrF),32);
    bufp->fullIData(oldp+566,(vlSelfRef.top_ReadDataM),32);
    bufp->fullIData(oldp+567,(vlSelfRef.top_WriteDataM),32);
    bufp->fullIData(oldp+568,(vlSelfRef.top_ALUResultM),32);
    bufp->fullBit(oldp+569,(vlSelfRef.top_MemWriteM));
    bufp->fullIData(oldp+570,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__rd1),32);
    bufp->fullIData(oldp+571,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__rd2),32);
}
