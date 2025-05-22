// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu_tb__Syms.h"


VL_ATTR_COLD void Valu_tb___024root__trace_init_sub__TOP__0(Valu_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root__trace_init_sub__TOP__0\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("alu_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"ALUControl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+151,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+152,0,"zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"ALUControl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+151,0,"rslt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+152,0,"zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"src_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"src_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+153,0,"cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("entry", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+40+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("add1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+158,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+153,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+155,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("a1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+5,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+6,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+7,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+8,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+9,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+10,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+11,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+12,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a17", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+13,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a18", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+14,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a19", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+15,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+16,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a20", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+17,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a21", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+18,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a22", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+19,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a23", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+20,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a24", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+21,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a25", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+22,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a26", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+23,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a27", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+24,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a28", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+25,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a29", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+26,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+27,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a30", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+28,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a31", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+29,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+30,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+31,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+32,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+33,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+34,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+35,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+36,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("and1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+158,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+158,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"d0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+158,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,0,"d0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"d2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"d3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"d4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"d5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"d6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"d7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+151,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("or1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+158,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Valu_tb___024root__trace_init_top(Valu_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root__trace_init_top\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Valu_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Valu_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Valu_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Valu_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Valu_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Valu_tb___024root__trace_register(Valu_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root__trace_register\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Valu_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Valu_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Valu_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Valu_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Valu_tb___024root__trace_const_0_sub_0(Valu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Valu_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root__trace_const_0\n"); );
    // Init
    Valu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_tb___024root*>(voidSelf);
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Valu_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Valu_tb___024root__trace_const_0_sub_0(Valu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root__trace_const_0_sub_0\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+158,(0x20U),32);
}

VL_ATTR_COLD void Valu_tb___024root__trace_full_0_sub_0(Valu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Valu_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root__trace_full_0\n"); );
    // Init
    Valu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_tb___024root*>(voidSelf);
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Valu_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Valu_tb___024root__trace_full_0_sub_0(Valu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root__trace_full_0_sub_0\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.alu_tb__DOT__a),32);
    bufp->fullIData(oldp+2,(vlSelfRef.alu_tb__DOT__b),32);
    bufp->fullCData(oldp+3,(vlSelfRef.alu_tb__DOT__ALUControl),3);
    bufp->fullBit(oldp+4,((1U & (IData)(vlSelfRef.alu_tb__DOT__ALUControl))));
    bufp->fullBit(oldp+5,((1U & vlSelfRef.alu_tb__DOT__a)));
    bufp->fullBit(oldp+6,((1U & (vlSelfRef.alu_tb__DOT__a 
                                 >> 9U))));
    bufp->fullBit(oldp+7,((1U & (vlSelfRef.alu_tb__DOT__a 
                                 >> 0xaU))));
    bufp->fullBit(oldp+8,((1U & (vlSelfRef.alu_tb__DOT__a 
                                 >> 0xbU))));
    bufp->fullBit(oldp+9,((1U & (vlSelfRef.alu_tb__DOT__a 
                                 >> 0xcU))));
    bufp->fullBit(oldp+10,((1U & (vlSelfRef.alu_tb__DOT__a 
                                  >> 0xdU))));
    bufp->fullBit(oldp+11,((1U & (vlSelfRef.alu_tb__DOT__a 
                                  >> 0xeU))));
    bufp->fullBit(oldp+12,((1U & (vlSelfRef.alu_tb__DOT__a 
                                  >> 0xfU))));
    bufp->fullBit(oldp+13,((1U & (vlSelfRef.alu_tb__DOT__a 
                                  >> 0x10U))));
    bufp->fullBit(oldp+14,((1U & (vlSelfRef.alu_tb__DOT__a 
                                  >> 0x11U))));
    bufp->fullBit(oldp+15,((1U & (vlSelfRef.alu_tb__DOT__a 
                                  >> 0x12U))));
    bufp->fullBit(oldp+16,((1U & (vlSelfRef.alu_tb__DOT__a 
                                  >> 1U))));
    bufp->fullBit(oldp+17,((1U & (vlSelfRef.alu_tb__DOT__a 
                                  >> 0x13U))));
    bufp->fullBit(oldp+18,((1U & (vlSelfRef.alu_tb__DOT__a 
                                  >> 0x14U))));
    bufp->fullBit(oldp+19,((1U & (vlSelfRef.alu_tb__DOT__a 
                                  >> 0x15U))));
    bufp->fullBit(oldp+20,((1U & (vlSelfRef.alu_tb__DOT__a 
                                  >> 0x16U))));
    bufp->fullBit(oldp+21,((1U & (vlSelfRef.alu_tb__DOT__a 
                                  >> 0x17U))));
    bufp->fullBit(oldp+22,((1U & (vlSelfRef.alu_tb__DOT__a 
                                  >> 0x18U))));
    bufp->fullBit(oldp+23,((1U & (vlSelfRef.alu_tb__DOT__a 
                                  >> 0x19U))));
    bufp->fullBit(oldp+24,((1U & (vlSelfRef.alu_tb__DOT__a 
                                  >> 0x1aU))));
    bufp->fullBit(oldp+25,((1U & (vlSelfRef.alu_tb__DOT__a 
                                  >> 0x1bU))));
    bufp->fullBit(oldp+26,((1U & (vlSelfRef.alu_tb__DOT__a 
                                  >> 0x1cU))));
    bufp->fullBit(oldp+27,((1U & (vlSelfRef.alu_tb__DOT__a 
                                  >> 2U))));
    bufp->fullBit(oldp+28,((1U & (vlSelfRef.alu_tb__DOT__a 
                                  >> 0x1dU))));
    bufp->fullBit(oldp+29,((1U & (vlSelfRef.alu_tb__DOT__a 
                                  >> 0x1eU))));
    bufp->fullBit(oldp+30,((vlSelfRef.alu_tb__DOT__a 
                            >> 0x1fU)));
    bufp->fullBit(oldp+31,((1U & (vlSelfRef.alu_tb__DOT__a 
                                  >> 3U))));
    bufp->fullBit(oldp+32,((1U & (vlSelfRef.alu_tb__DOT__a 
                                  >> 4U))));
    bufp->fullBit(oldp+33,((1U & (vlSelfRef.alu_tb__DOT__a 
                                  >> 5U))));
    bufp->fullBit(oldp+34,((1U & (vlSelfRef.alu_tb__DOT__a 
                                  >> 6U))));
    bufp->fullBit(oldp+35,((1U & (vlSelfRef.alu_tb__DOT__a 
                                  >> 7U))));
    bufp->fullBit(oldp+36,((1U & (vlSelfRef.alu_tb__DOT__a 
                                  >> 8U))));
    bufp->fullIData(oldp+37,((~ vlSelfRef.alu_tb__DOT__b)),32);
    bufp->fullIData(oldp+38,(vlSelfRef.alu_tb__DOT__dut__DOT__src_b),32);
    bufp->fullIData(oldp+39,(vlSelfRef.alu_tb__DOT__dut__DOT__sum),32);
    bufp->fullIData(oldp+40,(vlSelfRef.alu_tb__DOT__dut__DOT__entry[0]),32);
    bufp->fullIData(oldp+41,(vlSelfRef.alu_tb__DOT__dut__DOT__entry[1]),32);
    bufp->fullIData(oldp+42,(vlSelfRef.alu_tb__DOT__dut__DOT__entry[2]),32);
    bufp->fullIData(oldp+43,(vlSelfRef.alu_tb__DOT__dut__DOT__entry[3]),32);
    bufp->fullIData(oldp+44,(vlSelfRef.alu_tb__DOT__dut__DOT__entry[4]),32);
    bufp->fullIData(oldp+45,(vlSelfRef.alu_tb__DOT__dut__DOT__entry[5]),32);
    bufp->fullIData(oldp+46,(vlSelfRef.alu_tb__DOT__dut__DOT__entry[6]),32);
    bufp->fullIData(oldp+47,(vlSelfRef.alu_tb__DOT__dut__DOT__entry[7]),32);
    bufp->fullIData(oldp+48,(vlSelfRef.alu_tb__DOT__dut__DOT__entry[8]),32);
    bufp->fullBit(oldp+49,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a1__b));
    bufp->fullBit(oldp+50,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__carry__BRA__0__KET__));
    bufp->fullBit(oldp+51,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a10__b));
    bufp->fullBit(oldp+52,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a9__cout));
    bufp->fullBit(oldp+53,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0) 
                            ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a9__cout))));
    bufp->fullBit(oldp+54,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a10__cout));
    bufp->fullBit(oldp+55,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a11__b));
    bufp->fullBit(oldp+56,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0) 
                            ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a10__cout))));
    bufp->fullBit(oldp+57,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a11__cout));
    bufp->fullBit(oldp+58,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a12__b));
    bufp->fullBit(oldp+59,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0) 
                            ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a11__cout))));
    bufp->fullBit(oldp+60,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a12__cout));
    bufp->fullBit(oldp+61,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a13__b));
    bufp->fullBit(oldp+62,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0) 
                            ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a12__cout))));
    bufp->fullBit(oldp+63,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a13__cout));
    bufp->fullBit(oldp+64,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a14__b));
    bufp->fullBit(oldp+65,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0) 
                            ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a13__cout))));
    bufp->fullBit(oldp+66,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a14__cout));
    bufp->fullBit(oldp+67,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a15__b));
    bufp->fullBit(oldp+68,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0) 
                            ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a14__cout))));
    bufp->fullBit(oldp+69,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a15__cout));
    bufp->fullBit(oldp+70,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a16__b));
    bufp->fullBit(oldp+71,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0) 
                            ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a15__cout))));
    bufp->fullBit(oldp+72,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a16__cout));
    bufp->fullBit(oldp+73,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a17__b));
    bufp->fullBit(oldp+74,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0) 
                            ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a16__cout))));
    bufp->fullBit(oldp+75,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a17__cout));
    bufp->fullBit(oldp+76,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a18__b));
    bufp->fullBit(oldp+77,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0) 
                            ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a17__cout))));
    bufp->fullBit(oldp+78,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a18__cout));
    bufp->fullBit(oldp+79,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a19__b));
    bufp->fullBit(oldp+80,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0) 
                            ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a18__cout))));
    bufp->fullBit(oldp+81,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a19__cout));
    bufp->fullBit(oldp+82,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a2__b));
    bufp->fullBit(oldp+83,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0) 
                            ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__carry__BRA__0__KET__))));
    bufp->fullBit(oldp+84,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a2__cout));
    bufp->fullBit(oldp+85,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a20__b));
    bufp->fullBit(oldp+86,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0) 
                            ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a19__cout))));
    bufp->fullBit(oldp+87,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a20__cout));
    bufp->fullBit(oldp+88,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a21__b));
    bufp->fullBit(oldp+89,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0) 
                            ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a20__cout))));
    bufp->fullBit(oldp+90,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a21__cout));
    bufp->fullBit(oldp+91,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a22__b));
    bufp->fullBit(oldp+92,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0) 
                            ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a21__cout))));
    bufp->fullBit(oldp+93,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a22__cout));
    bufp->fullBit(oldp+94,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a23__b));
    bufp->fullBit(oldp+95,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0) 
                            ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a22__cout))));
    bufp->fullBit(oldp+96,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a23__cout));
    bufp->fullBit(oldp+97,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a24__b));
    bufp->fullBit(oldp+98,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0) 
                            ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a23__cout))));
    bufp->fullBit(oldp+99,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a24__cout));
    bufp->fullBit(oldp+100,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a25__b));
    bufp->fullBit(oldp+101,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a24__cout))));
    bufp->fullBit(oldp+102,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a25__cout));
    bufp->fullBit(oldp+103,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a26__b));
    bufp->fullBit(oldp+104,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a25__cout))));
    bufp->fullBit(oldp+105,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a26__cout));
    bufp->fullBit(oldp+106,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a27__b));
    bufp->fullBit(oldp+107,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a26__cout))));
    bufp->fullBit(oldp+108,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a27__cout));
    bufp->fullBit(oldp+109,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a28__b));
    bufp->fullBit(oldp+110,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a27__cout))));
    bufp->fullBit(oldp+111,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a28__cout));
    bufp->fullBit(oldp+112,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a29__b));
    bufp->fullBit(oldp+113,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a28__cout))));
    bufp->fullBit(oldp+114,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a29__cout));
    bufp->fullBit(oldp+115,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a3__b));
    bufp->fullBit(oldp+116,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a2__cout))));
    bufp->fullBit(oldp+117,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a3__cout));
    bufp->fullBit(oldp+118,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a30__b));
    bufp->fullBit(oldp+119,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a29__cout))));
    bufp->fullBit(oldp+120,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a30__cout));
    bufp->fullBit(oldp+121,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a31__b));
    bufp->fullBit(oldp+122,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a30__cout))));
    bufp->fullBit(oldp+123,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a31__cout));
    bufp->fullBit(oldp+124,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a32__b));
    bufp->fullBit(oldp+125,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a32__sum));
    bufp->fullBit(oldp+126,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a4__b));
    bufp->fullBit(oldp+127,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a3__cout))));
    bufp->fullBit(oldp+128,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a4__cout));
    bufp->fullBit(oldp+129,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a5__b));
    bufp->fullBit(oldp+130,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a4__cout))));
    bufp->fullBit(oldp+131,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a5__cout));
    bufp->fullBit(oldp+132,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a6__b));
    bufp->fullBit(oldp+133,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a5__cout))));
    bufp->fullBit(oldp+134,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a6__cout));
    bufp->fullBit(oldp+135,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a7__b));
    bufp->fullBit(oldp+136,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a6__cout))));
    bufp->fullBit(oldp+137,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a7__cout));
    bufp->fullBit(oldp+138,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a8__b));
    bufp->fullBit(oldp+139,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a7__cout))));
    bufp->fullBit(oldp+140,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a8__cout));
    bufp->fullBit(oldp+141,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a9__b));
    bufp->fullBit(oldp+142,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a8__cout))));
    bufp->fullIData(oldp+143,(vlSelfRef.alu_tb__DOT__dut__DOT____Vcellout__and1__y),32);
    bufp->fullIData(oldp+144,(vlSelfRef.alu_tb__DOT__dut__DOT__entry
                              [0U]),32);
    bufp->fullIData(oldp+145,(vlSelfRef.alu_tb__DOT__dut__DOT__entry
                              [1U]),32);
    bufp->fullIData(oldp+146,(vlSelfRef.alu_tb__DOT__dut__DOT____Vcellout__or1__y),32);
    bufp->fullIData(oldp+147,(vlSelfRef.alu_tb__DOT__dut__DOT__entry
                              [4U]),32);
    bufp->fullIData(oldp+148,(vlSelfRef.alu_tb__DOT__dut__DOT__entry
                              [5U]),32);
    bufp->fullIData(oldp+149,(vlSelfRef.alu_tb__DOT__dut__DOT__entry
                              [6U]),32);
    bufp->fullIData(oldp+150,(vlSelfRef.alu_tb__DOT__dut__DOT__entry
                              [7U]),32);
    bufp->fullIData(oldp+151,(((4U & (IData)(vlSelfRef.alu_tb__DOT__ALUControl))
                                ? ((2U & (IData)(vlSelfRef.alu_tb__DOT__ALUControl))
                                    ? ((1U & (IData)(vlSelfRef.alu_tb__DOT__ALUControl))
                                        ? vlSelfRef.alu_tb__DOT__dut__DOT__entry
                                       [7U] : vlSelfRef.alu_tb__DOT__dut__DOT__entry
                                       [6U]) : ((1U 
                                                 & (IData)(vlSelfRef.alu_tb__DOT__ALUControl))
                                                 ? 
                                                vlSelfRef.alu_tb__DOT__dut__DOT__entry
                                                [5U]
                                                 : 
                                                vlSelfRef.alu_tb__DOT__dut__DOT__entry
                                                [4U]))
                                : ((2U & (IData)(vlSelfRef.alu_tb__DOT__ALUControl))
                                    ? ((1U & (IData)(vlSelfRef.alu_tb__DOT__ALUControl))
                                        ? vlSelfRef.alu_tb__DOT__dut__DOT____Vcellout__or1__y
                                        : vlSelfRef.alu_tb__DOT__dut__DOT____Vcellout__and1__y)
                                    : ((1U & (IData)(vlSelfRef.alu_tb__DOT__ALUControl))
                                        ? vlSelfRef.alu_tb__DOT__dut__DOT__entry
                                       [1U] : vlSelfRef.alu_tb__DOT__dut__DOT__entry
                                       [0U])))),32);
    bufp->fullBit(oldp+152,((0xffffffffU == (~ ((4U 
                                                 & (IData)(vlSelfRef.alu_tb__DOT__ALUControl))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelfRef.alu_tb__DOT__ALUControl))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.alu_tb__DOT__ALUControl))
                                                   ? 
                                                  vlSelfRef.alu_tb__DOT__dut__DOT__entry
                                                  [7U]
                                                   : 
                                                  vlSelfRef.alu_tb__DOT__dut__DOT__entry
                                                  [6U])
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.alu_tb__DOT__ALUControl))
                                                   ? 
                                                  vlSelfRef.alu_tb__DOT__dut__DOT__entry
                                                  [5U]
                                                   : 
                                                  vlSelfRef.alu_tb__DOT__dut__DOT__entry
                                                  [4U]))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelfRef.alu_tb__DOT__ALUControl))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.alu_tb__DOT__ALUControl))
                                                   ? vlSelfRef.alu_tb__DOT__dut__DOT____Vcellout__or1__y
                                                   : vlSelfRef.alu_tb__DOT__dut__DOT____Vcellout__and1__y)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.alu_tb__DOT__ALUControl))
                                                   ? 
                                                  vlSelfRef.alu_tb__DOT__dut__DOT__entry
                                                  [1U]
                                                   : 
                                                  vlSelfRef.alu_tb__DOT__dut__DOT__entry
                                                  [0U])))))));
    bufp->fullBit(oldp+153,((1U & ((((vlSelfRef.alu_tb__DOT__a 
                                      >> 0x1fU) & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a32__b)) 
                                    | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a31__cout) 
                                       & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0))) 
                                   ^ (IData)(vlSelfRef.alu_tb__DOT__ALUControl)))));
    bufp->fullBit(oldp+154,((1U & ((~ ((IData)(vlSelfRef.alu_tb__DOT__ALUControl) 
                                       >> 1U)) & ((~ 
                                                   ((IData)(vlSelfRef.alu_tb__DOT__ALUControl) 
                                                    ^ 
                                                    ((vlSelfRef.alu_tb__DOT__a 
                                                      ^ vlSelfRef.alu_tb__DOT__b) 
                                                     >> 0x1fU))) 
                                                  & ((vlSelfRef.alu_tb__DOT__a 
                                                      >> 0x1fU) 
                                                     ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a32__sum)))))));
    bufp->fullIData(oldp+155,((((((((0x80000000U & 
                                     (vlSelfRef.alu_tb__DOT__a 
                                      & ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a32__b) 
                                         << 0x1fU))) 
                                    | (((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a31__cout) 
                                        & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0)) 
                                       << 0x1fU)) | 
                                   ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a31__cout) 
                                    << 0x1eU)) | (((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a30__cout) 
                                                   << 0x1dU) 
                                                  | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a29__cout) 
                                                     << 0x1cU))) 
                                 | ((((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a28__cout) 
                                      << 0x1bU) | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a27__cout) 
                                                   << 0x1aU)) 
                                    | (((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a26__cout) 
                                        << 0x19U) | 
                                       ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a25__cout) 
                                        << 0x18U)))) 
                                | (((((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a24__cout) 
                                      << 0x17U) | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a23__cout) 
                                                   << 0x16U)) 
                                    | (((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a22__cout) 
                                        << 0x15U) | 
                                       ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a21__cout) 
                                        << 0x14U))) 
                                   | ((((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a20__cout) 
                                        << 0x13U) | 
                                       ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a19__cout) 
                                        << 0x12U)) 
                                      | (((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a18__cout) 
                                          << 0x11U) 
                                         | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a17__cout) 
                                            << 0x10U))))) 
                               | ((((((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a16__cout) 
                                      << 0xfU) | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a15__cout) 
                                                  << 0xeU)) 
                                    | (((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a14__cout) 
                                        << 0xdU) | 
                                       ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a13__cout) 
                                        << 0xcU))) 
                                   | ((((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a12__cout) 
                                        << 0xbU) | 
                                       ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a11__cout) 
                                        << 0xaU)) | 
                                      (((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a10__cout) 
                                        << 9U) | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a9__cout) 
                                                  << 8U)))) 
                                  | (((((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a8__cout) 
                                        << 7U) | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a7__cout) 
                                                  << 6U)) 
                                      | (((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a6__cout) 
                                          << 5U) | 
                                         ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a5__cout) 
                                          << 4U))) 
                                     | ((((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a4__cout) 
                                          << 3U) | 
                                         ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a3__cout) 
                                          << 2U)) | 
                                        (((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a2__cout) 
                                          << 1U) | (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__carry__BRA__0__KET__))))))),32);
    bufp->fullBit(oldp+156,((1U & ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a1__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                   ^ (IData)(vlSelfRef.alu_tb__DOT__ALUControl)))));
    bufp->fullBit(oldp+157,((((vlSelfRef.alu_tb__DOT__a 
                               >> 0x1fU) & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a32__b)) 
                             | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a31__cout) 
                                & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0)))));
}
