// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VF_stage_tb__Syms.h"


VL_ATTR_COLD void VF_stage_tb___024root__trace_init_sub__TOP__0(VF_stage_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF_stage_tb___024root__trace_init_sub__TOP__0\n"); );
    VF_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("F_stage_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+103,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"StallF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"PCSrcE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"PCTargetE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"pcF0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"pcF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"PCPlus4F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"InstrF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"PCplus4cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"test_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+6,0,"pass_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+7,0,"fail_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("Freg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+106,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+103,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+104,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("PCmux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+106,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"d0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+3,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+104,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("PCplus4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+106,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+107,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("a1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+13,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+14,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+18,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+21,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+24,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+27,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+30,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+33,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a17", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+36,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a18", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+39,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a19", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+42,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+45,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a20", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+46,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a21", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+49,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a22", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+52,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a23", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+55,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a24", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+58,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a25", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+61,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a26", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+64,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a27", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+67,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a28", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+70,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a29", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+73,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+76,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a30", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+78,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a31", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+81,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+84,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+86,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+89,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+92,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+95,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+98,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+101,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("imem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+9,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VF_stage_tb___024root__trace_init_top(VF_stage_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF_stage_tb___024root__trace_init_top\n"); );
    VF_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VF_stage_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VF_stage_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VF_stage_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VF_stage_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VF_stage_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VF_stage_tb___024root__trace_register(VF_stage_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF_stage_tb___024root__trace_register\n"); );
    VF_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VF_stage_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VF_stage_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VF_stage_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VF_stage_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VF_stage_tb___024root__trace_const_0_sub_0(VF_stage_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VF_stage_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF_stage_tb___024root__trace_const_0\n"); );
    // Init
    VF_stage_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VF_stage_tb___024root*>(voidSelf);
    VF_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VF_stage_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VF_stage_tb___024root__trace_const_0_sub_0(VF_stage_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF_stage_tb___024root__trace_const_0_sub_0\n"); );
    VF_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+106,(0x20U),32);
    bufp->fullBit(oldp+107,(0U));
    bufp->fullIData(oldp+108,(4U),32);
    bufp->fullBit(oldp+109,(1U));
}

VL_ATTR_COLD void VF_stage_tb___024root__trace_full_0_sub_0(VF_stage_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VF_stage_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF_stage_tb___024root__trace_full_0\n"); );
    // Init
    VF_stage_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VF_stage_tb___024root*>(voidSelf);
    VF_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VF_stage_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VF_stage_tb___024root__trace_full_0_sub_0(VF_stage_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF_stage_tb___024root__trace_full_0_sub_0\n"); );
    VF_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.F_stage_tb__DOT__rst));
    bufp->fullBit(oldp+2,(vlSelfRef.F_stage_tb__DOT__StallF));
    bufp->fullBit(oldp+3,(vlSelfRef.F_stage_tb__DOT__PCSrcE));
    bufp->fullIData(oldp+4,(vlSelfRef.F_stage_tb__DOT__PCTargetE),32);
    bufp->fullIData(oldp+5,(vlSelfRef.F_stage_tb__DOT__test_num),32);
    bufp->fullIData(oldp+6,(vlSelfRef.F_stage_tb__DOT__pass_count),32);
    bufp->fullIData(oldp+7,(vlSelfRef.F_stage_tb__DOT__fail_count),32);
    bufp->fullBit(oldp+8,((1U & (~ (IData)(vlSelfRef.F_stage_tb__DOT__StallF)))));
    bufp->fullIData(oldp+9,(vlSelfRef.F_stage_tb__DOT__pcF),32);
    bufp->fullIData(oldp+10,(vlSelfRef.F_stage_tb__DOT__PCPlus4F),32);
    bufp->fullBit(oldp+11,(((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a31__cout) 
                            & (vlSelfRef.F_stage_tb__DOT__pcF 
                               >> 0x1fU))));
    bufp->fullIData(oldp+12,(((((((0x80000000U & (((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a31__cout) 
                                                   << 0x1fU) 
                                                  & vlSelfRef.F_stage_tb__DOT__pcF)) 
                                  | ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a31__cout) 
                                     << 0x1eU)) | (
                                                   ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a30__cout) 
                                                    << 0x1dU) 
                                                   | ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a29__cout) 
                                                      << 0x1cU))) 
                                | ((((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a28__cout) 
                                     << 0x1bU) | ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a27__cout) 
                                                  << 0x1aU)) 
                                   | (((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a26__cout) 
                                       << 0x19U) | 
                                      ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a25__cout) 
                                       << 0x18U)))) 
                               | (((((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a24__cout) 
                                     << 0x17U) | ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a23__cout) 
                                                  << 0x16U)) 
                                   | (((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a22__cout) 
                                       << 0x15U) | 
                                      ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a21__cout) 
                                       << 0x14U))) 
                                  | ((((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a20__cout) 
                                       << 0x13U) | 
                                      ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a19__cout) 
                                       << 0x12U)) | 
                                     (((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a18__cout) 
                                       << 0x11U) | 
                                      ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a17__cout) 
                                       << 0x10U))))) 
                              | ((((((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a16__cout) 
                                     << 0xfU) | ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a15__cout) 
                                                 << 0xeU)) 
                                   | (((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a14__cout) 
                                       << 0xdU) | ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a13__cout) 
                                                   << 0xcU))) 
                                  | ((((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a12__cout) 
                                       << 0xbU) | ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a11__cout) 
                                                   << 0xaU)) 
                                     | (((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a10__cout) 
                                         << 9U) | ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a9__cout) 
                                                   << 8U)))) 
                                 | (((((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a8__cout) 
                                       << 7U) | ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a7__cout) 
                                                 << 6U)) 
                                     | (((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a6__cout) 
                                         << 5U) | ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a5__cout) 
                                                   << 4U))) 
                                    | (((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a4__cout) 
                                        << 3U) | (4U 
                                                  & vlSelfRef.F_stage_tb__DOT__pcF)))))),32);
    bufp->fullBit(oldp+13,((1U & vlSelfRef.F_stage_tb__DOT__pcF)));
    bufp->fullBit(oldp+14,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                  >> 9U))));
    bufp->fullBit(oldp+15,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a9__cout));
    bufp->fullBit(oldp+16,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                   >> 9U) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a9__cout)))));
    bufp->fullBit(oldp+17,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a10__cout));
    bufp->fullBit(oldp+18,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                  >> 0xaU))));
    bufp->fullBit(oldp+19,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                   >> 0xaU) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a10__cout)))));
    bufp->fullBit(oldp+20,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a11__cout));
    bufp->fullBit(oldp+21,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                  >> 0xbU))));
    bufp->fullBit(oldp+22,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                   >> 0xbU) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a11__cout)))));
    bufp->fullBit(oldp+23,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a12__cout));
    bufp->fullBit(oldp+24,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                  >> 0xcU))));
    bufp->fullBit(oldp+25,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                   >> 0xcU) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a12__cout)))));
    bufp->fullBit(oldp+26,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a13__cout));
    bufp->fullBit(oldp+27,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                  >> 0xdU))));
    bufp->fullBit(oldp+28,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                   >> 0xdU) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a13__cout)))));
    bufp->fullBit(oldp+29,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a14__cout));
    bufp->fullBit(oldp+30,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                  >> 0xeU))));
    bufp->fullBit(oldp+31,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                   >> 0xeU) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a14__cout)))));
    bufp->fullBit(oldp+32,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a15__cout));
    bufp->fullBit(oldp+33,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                  >> 0xfU))));
    bufp->fullBit(oldp+34,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                   >> 0xfU) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a15__cout)))));
    bufp->fullBit(oldp+35,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a16__cout));
    bufp->fullBit(oldp+36,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                  >> 0x10U))));
    bufp->fullBit(oldp+37,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                   >> 0x10U) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a16__cout)))));
    bufp->fullBit(oldp+38,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a17__cout));
    bufp->fullBit(oldp+39,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                  >> 0x11U))));
    bufp->fullBit(oldp+40,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                   >> 0x11U) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a17__cout)))));
    bufp->fullBit(oldp+41,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a18__cout));
    bufp->fullBit(oldp+42,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                  >> 0x12U))));
    bufp->fullBit(oldp+43,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                   >> 0x12U) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a18__cout)))));
    bufp->fullBit(oldp+44,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a19__cout));
    bufp->fullBit(oldp+45,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                  >> 1U))));
    bufp->fullBit(oldp+46,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                  >> 0x13U))));
    bufp->fullBit(oldp+47,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                   >> 0x13U) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a19__cout)))));
    bufp->fullBit(oldp+48,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a20__cout));
    bufp->fullBit(oldp+49,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                  >> 0x14U))));
    bufp->fullBit(oldp+50,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                   >> 0x14U) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a20__cout)))));
    bufp->fullBit(oldp+51,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a21__cout));
    bufp->fullBit(oldp+52,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                  >> 0x15U))));
    bufp->fullBit(oldp+53,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                   >> 0x15U) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a21__cout)))));
    bufp->fullBit(oldp+54,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a22__cout));
    bufp->fullBit(oldp+55,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                  >> 0x16U))));
    bufp->fullBit(oldp+56,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                   >> 0x16U) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a22__cout)))));
    bufp->fullBit(oldp+57,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a23__cout));
    bufp->fullBit(oldp+58,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                  >> 0x17U))));
    bufp->fullBit(oldp+59,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                   >> 0x17U) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a23__cout)))));
    bufp->fullBit(oldp+60,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a24__cout));
    bufp->fullBit(oldp+61,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                  >> 0x18U))));
    bufp->fullBit(oldp+62,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                   >> 0x18U) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a24__cout)))));
    bufp->fullBit(oldp+63,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a25__cout));
    bufp->fullBit(oldp+64,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                  >> 0x19U))));
    bufp->fullBit(oldp+65,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                   >> 0x19U) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a25__cout)))));
    bufp->fullBit(oldp+66,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a26__cout));
    bufp->fullBit(oldp+67,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                  >> 0x1aU))));
    bufp->fullBit(oldp+68,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                   >> 0x1aU) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a26__cout)))));
    bufp->fullBit(oldp+69,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a27__cout));
    bufp->fullBit(oldp+70,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                  >> 0x1bU))));
    bufp->fullBit(oldp+71,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                   >> 0x1bU) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a27__cout)))));
    bufp->fullBit(oldp+72,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a28__cout));
    bufp->fullBit(oldp+73,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                  >> 0x1cU))));
    bufp->fullBit(oldp+74,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                   >> 0x1cU) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a28__cout)))));
    bufp->fullBit(oldp+75,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a29__cout));
    bufp->fullBit(oldp+76,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                  >> 2U))));
    bufp->fullBit(oldp+77,((1U & (~ (vlSelfRef.F_stage_tb__DOT__pcF 
                                     >> 2U)))));
    bufp->fullBit(oldp+78,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                  >> 0x1dU))));
    bufp->fullBit(oldp+79,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                   >> 0x1dU) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a29__cout)))));
    bufp->fullBit(oldp+80,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a30__cout));
    bufp->fullBit(oldp+81,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                  >> 0x1eU))));
    bufp->fullBit(oldp+82,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                   >> 0x1eU) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a30__cout)))));
    bufp->fullBit(oldp+83,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a31__cout));
    bufp->fullBit(oldp+84,((vlSelfRef.F_stage_tb__DOT__pcF 
                            >> 0x1fU)));
    bufp->fullBit(oldp+85,(((vlSelfRef.F_stage_tb__DOT__pcF 
                             >> 0x1fU) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a31__cout))));
    bufp->fullBit(oldp+86,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                  >> 3U))));
    bufp->fullBit(oldp+87,((1U & VL_REDXOR_4((0xcU 
                                              & vlSelfRef.F_stage_tb__DOT__pcF)))));
    bufp->fullBit(oldp+88,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a4__cout));
    bufp->fullBit(oldp+89,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                  >> 4U))));
    bufp->fullBit(oldp+90,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                   >> 4U) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a4__cout)))));
    bufp->fullBit(oldp+91,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a5__cout));
    bufp->fullBit(oldp+92,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                  >> 5U))));
    bufp->fullBit(oldp+93,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                   >> 5U) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a5__cout)))));
    bufp->fullBit(oldp+94,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a6__cout));
    bufp->fullBit(oldp+95,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                  >> 6U))));
    bufp->fullBit(oldp+96,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                   >> 6U) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a6__cout)))));
    bufp->fullBit(oldp+97,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a7__cout));
    bufp->fullBit(oldp+98,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                  >> 7U))));
    bufp->fullBit(oldp+99,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                   >> 7U) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a7__cout)))));
    bufp->fullBit(oldp+100,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a8__cout));
    bufp->fullBit(oldp+101,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                   >> 8U))));
    bufp->fullBit(oldp+102,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                    >> 8U) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a8__cout)))));
    bufp->fullBit(oldp+103,(vlSelfRef.F_stage_tb__DOT__clk));
    bufp->fullIData(oldp+104,(((IData)(vlSelfRef.F_stage_tb__DOT__PCSrcE)
                                ? vlSelfRef.F_stage_tb__DOT__PCTargetE
                                : vlSelfRef.F_stage_tb__DOT__PCPlus4F)),32);
    bufp->fullIData(oldp+105,(vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
                              [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                                         >> 2U))]),32);
}
