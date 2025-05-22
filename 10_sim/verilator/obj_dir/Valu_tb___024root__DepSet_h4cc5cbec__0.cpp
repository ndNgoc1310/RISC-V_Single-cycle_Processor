// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_tb.h for the primary calling header

#include "Valu_tb__pch.h"
#include "Valu_tb__Syms.h"
#include "Valu_tb___024root.h"

VL_INLINE_OPT VlCoroutine Valu_tb___024root___eval_initial__TOP__Vtiming__0(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__0__expected;
    __Vtask_alu_tb__DOT__run_test__0__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__0__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__1__in_a;
    __Vtask_alu_tb__DOT__run_test__1__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__1__in_b;
    __Vtask_alu_tb__DOT__run_test__1__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__1__op;
    __Vtask_alu_tb__DOT__run_test__1__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__1__expected;
    __Vtask_alu_tb__DOT__run_test__1__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__1__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__2__in_a;
    __Vtask_alu_tb__DOT__run_test__2__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__2__in_b;
    __Vtask_alu_tb__DOT__run_test__2__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__2__op;
    __Vtask_alu_tb__DOT__run_test__2__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__2__expected;
    __Vtask_alu_tb__DOT__run_test__2__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__2__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__3__in_a;
    __Vtask_alu_tb__DOT__run_test__3__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__3__in_b;
    __Vtask_alu_tb__DOT__run_test__3__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__3__op;
    __Vtask_alu_tb__DOT__run_test__3__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__3__expected;
    __Vtask_alu_tb__DOT__run_test__3__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__3__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__4__in_a;
    __Vtask_alu_tb__DOT__run_test__4__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__4__in_b;
    __Vtask_alu_tb__DOT__run_test__4__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__4__op;
    __Vtask_alu_tb__DOT__run_test__4__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__4__expected;
    __Vtask_alu_tb__DOT__run_test__4__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__4__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__5__in_a;
    __Vtask_alu_tb__DOT__run_test__5__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__5__in_b;
    __Vtask_alu_tb__DOT__run_test__5__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__5__op;
    __Vtask_alu_tb__DOT__run_test__5__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__5__expected;
    __Vtask_alu_tb__DOT__run_test__5__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__5__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__6__in_a;
    __Vtask_alu_tb__DOT__run_test__6__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__6__in_b;
    __Vtask_alu_tb__DOT__run_test__6__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__6__op;
    __Vtask_alu_tb__DOT__run_test__6__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__6__expected;
    __Vtask_alu_tb__DOT__run_test__6__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__6__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__7__in_a;
    __Vtask_alu_tb__DOT__run_test__7__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__7__in_b;
    __Vtask_alu_tb__DOT__run_test__7__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__7__op;
    __Vtask_alu_tb__DOT__run_test__7__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__7__expected;
    __Vtask_alu_tb__DOT__run_test__7__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__7__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__8__in_a;
    __Vtask_alu_tb__DOT__run_test__8__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__8__in_b;
    __Vtask_alu_tb__DOT__run_test__8__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__8__op;
    __Vtask_alu_tb__DOT__run_test__8__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__8__expected;
    __Vtask_alu_tb__DOT__run_test__8__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__8__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__9__in_a;
    __Vtask_alu_tb__DOT__run_test__9__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__9__in_b;
    __Vtask_alu_tb__DOT__run_test__9__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__9__op;
    __Vtask_alu_tb__DOT__run_test__9__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__9__expected;
    __Vtask_alu_tb__DOT__run_test__9__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__9__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__10__in_a;
    __Vtask_alu_tb__DOT__run_test__10__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__10__in_b;
    __Vtask_alu_tb__DOT__run_test__10__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__10__op;
    __Vtask_alu_tb__DOT__run_test__10__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__10__expected;
    __Vtask_alu_tb__DOT__run_test__10__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__10__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__11__in_a;
    __Vtask_alu_tb__DOT__run_test__11__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__11__in_b;
    __Vtask_alu_tb__DOT__run_test__11__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__11__op;
    __Vtask_alu_tb__DOT__run_test__11__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__11__expected;
    __Vtask_alu_tb__DOT__run_test__11__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__11__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__12__in_a;
    __Vtask_alu_tb__DOT__run_test__12__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__12__in_b;
    __Vtask_alu_tb__DOT__run_test__12__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__12__op;
    __Vtask_alu_tb__DOT__run_test__12__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__12__expected;
    __Vtask_alu_tb__DOT__run_test__12__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__12__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__13__in_a;
    __Vtask_alu_tb__DOT__run_test__13__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__13__in_b;
    __Vtask_alu_tb__DOT__run_test__13__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__13__op;
    __Vtask_alu_tb__DOT__run_test__13__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__13__expected;
    __Vtask_alu_tb__DOT__run_test__13__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__13__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__14__in_a;
    __Vtask_alu_tb__DOT__run_test__14__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__14__in_b;
    __Vtask_alu_tb__DOT__run_test__14__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__14__op;
    __Vtask_alu_tb__DOT__run_test__14__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__14__expected;
    __Vtask_alu_tb__DOT__run_test__14__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__14__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__15__in_a;
    __Vtask_alu_tb__DOT__run_test__15__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__15__in_b;
    __Vtask_alu_tb__DOT__run_test__15__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__15__op;
    __Vtask_alu_tb__DOT__run_test__15__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__15__expected;
    __Vtask_alu_tb__DOT__run_test__15__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__15__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__16__in_a;
    __Vtask_alu_tb__DOT__run_test__16__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__16__in_b;
    __Vtask_alu_tb__DOT__run_test__16__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__16__op;
    __Vtask_alu_tb__DOT__run_test__16__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__16__expected;
    __Vtask_alu_tb__DOT__run_test__16__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__16__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__17__in_a;
    __Vtask_alu_tb__DOT__run_test__17__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__17__in_b;
    __Vtask_alu_tb__DOT__run_test__17__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__17__op;
    __Vtask_alu_tb__DOT__run_test__17__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__17__expected;
    __Vtask_alu_tb__DOT__run_test__17__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__17__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__18__in_a;
    __Vtask_alu_tb__DOT__run_test__18__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__18__in_b;
    __Vtask_alu_tb__DOT__run_test__18__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__18__op;
    __Vtask_alu_tb__DOT__run_test__18__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__18__expected;
    __Vtask_alu_tb__DOT__run_test__18__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__18__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__19__in_a;
    __Vtask_alu_tb__DOT__run_test__19__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__19__in_b;
    __Vtask_alu_tb__DOT__run_test__19__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__19__op;
    __Vtask_alu_tb__DOT__run_test__19__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__19__expected;
    __Vtask_alu_tb__DOT__run_test__19__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__19__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__20__in_a;
    __Vtask_alu_tb__DOT__run_test__20__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__20__in_b;
    __Vtask_alu_tb__DOT__run_test__20__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__20__op;
    __Vtask_alu_tb__DOT__run_test__20__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__20__expected;
    __Vtask_alu_tb__DOT__run_test__20__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__20__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__21__in_a;
    __Vtask_alu_tb__DOT__run_test__21__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__21__in_b;
    __Vtask_alu_tb__DOT__run_test__21__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__21__op;
    __Vtask_alu_tb__DOT__run_test__21__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__21__expected;
    __Vtask_alu_tb__DOT__run_test__21__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__21__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__22__in_a;
    __Vtask_alu_tb__DOT__run_test__22__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__22__in_b;
    __Vtask_alu_tb__DOT__run_test__22__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__22__op;
    __Vtask_alu_tb__DOT__run_test__22__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__22__expected;
    __Vtask_alu_tb__DOT__run_test__22__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__22__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__23__in_a;
    __Vtask_alu_tb__DOT__run_test__23__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__23__in_b;
    __Vtask_alu_tb__DOT__run_test__23__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__23__op;
    __Vtask_alu_tb__DOT__run_test__23__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__23__expected;
    __Vtask_alu_tb__DOT__run_test__23__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__23__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__24__in_a;
    __Vtask_alu_tb__DOT__run_test__24__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__24__in_b;
    __Vtask_alu_tb__DOT__run_test__24__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__24__op;
    __Vtask_alu_tb__DOT__run_test__24__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__24__expected;
    __Vtask_alu_tb__DOT__run_test__24__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__24__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__25__in_a;
    __Vtask_alu_tb__DOT__run_test__25__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__25__in_b;
    __Vtask_alu_tb__DOT__run_test__25__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__25__op;
    __Vtask_alu_tb__DOT__run_test__25__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__25__expected;
    __Vtask_alu_tb__DOT__run_test__25__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__25__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__26__in_a;
    __Vtask_alu_tb__DOT__run_test__26__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__26__in_b;
    __Vtask_alu_tb__DOT__run_test__26__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__26__op;
    __Vtask_alu_tb__DOT__run_test__26__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__26__expected;
    __Vtask_alu_tb__DOT__run_test__26__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__26__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__27__in_a;
    __Vtask_alu_tb__DOT__run_test__27__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__27__in_b;
    __Vtask_alu_tb__DOT__run_test__27__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__27__op;
    __Vtask_alu_tb__DOT__run_test__27__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__27__expected;
    __Vtask_alu_tb__DOT__run_test__27__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__27__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__28__in_a;
    __Vtask_alu_tb__DOT__run_test__28__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__28__in_b;
    __Vtask_alu_tb__DOT__run_test__28__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__28__op;
    __Vtask_alu_tb__DOT__run_test__28__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__28__expected;
    __Vtask_alu_tb__DOT__run_test__28__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__28__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__29__in_a;
    __Vtask_alu_tb__DOT__run_test__29__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__29__in_b;
    __Vtask_alu_tb__DOT__run_test__29__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__29__op;
    __Vtask_alu_tb__DOT__run_test__29__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__29__expected;
    __Vtask_alu_tb__DOT__run_test__29__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__29__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__30__in_a;
    __Vtask_alu_tb__DOT__run_test__30__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__30__in_b;
    __Vtask_alu_tb__DOT__run_test__30__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__30__op;
    __Vtask_alu_tb__DOT__run_test__30__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__30__expected;
    __Vtask_alu_tb__DOT__run_test__30__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__30__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__31__in_a;
    __Vtask_alu_tb__DOT__run_test__31__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__31__in_b;
    __Vtask_alu_tb__DOT__run_test__31__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__31__op;
    __Vtask_alu_tb__DOT__run_test__31__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__31__expected;
    __Vtask_alu_tb__DOT__run_test__31__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__31__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__32__in_a;
    __Vtask_alu_tb__DOT__run_test__32__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__32__in_b;
    __Vtask_alu_tb__DOT__run_test__32__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__32__op;
    __Vtask_alu_tb__DOT__run_test__32__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__32__expected;
    __Vtask_alu_tb__DOT__run_test__32__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__32__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__33__in_a;
    __Vtask_alu_tb__DOT__run_test__33__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__33__in_b;
    __Vtask_alu_tb__DOT__run_test__33__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__33__op;
    __Vtask_alu_tb__DOT__run_test__33__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__33__expected;
    __Vtask_alu_tb__DOT__run_test__33__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__33__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__34__in_a;
    __Vtask_alu_tb__DOT__run_test__34__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__34__in_b;
    __Vtask_alu_tb__DOT__run_test__34__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__34__op;
    __Vtask_alu_tb__DOT__run_test__34__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__34__expected;
    __Vtask_alu_tb__DOT__run_test__34__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__34__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__35__in_a;
    __Vtask_alu_tb__DOT__run_test__35__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__35__in_b;
    __Vtask_alu_tb__DOT__run_test__35__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__35__op;
    __Vtask_alu_tb__DOT__run_test__35__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__35__expected;
    __Vtask_alu_tb__DOT__run_test__35__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__35__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__36__in_a;
    __Vtask_alu_tb__DOT__run_test__36__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__36__in_b;
    __Vtask_alu_tb__DOT__run_test__36__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__36__op;
    __Vtask_alu_tb__DOT__run_test__36__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__36__expected;
    __Vtask_alu_tb__DOT__run_test__36__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__36__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__37__in_a;
    __Vtask_alu_tb__DOT__run_test__37__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__37__in_b;
    __Vtask_alu_tb__DOT__run_test__37__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__37__op;
    __Vtask_alu_tb__DOT__run_test__37__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__37__expected;
    __Vtask_alu_tb__DOT__run_test__37__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__37__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__38__in_a;
    __Vtask_alu_tb__DOT__run_test__38__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__38__in_b;
    __Vtask_alu_tb__DOT__run_test__38__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__38__op;
    __Vtask_alu_tb__DOT__run_test__38__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__38__expected;
    __Vtask_alu_tb__DOT__run_test__38__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__38__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__39__in_a;
    __Vtask_alu_tb__DOT__run_test__39__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__39__in_b;
    __Vtask_alu_tb__DOT__run_test__39__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__39__op;
    __Vtask_alu_tb__DOT__run_test__39__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__39__expected;
    __Vtask_alu_tb__DOT__run_test__39__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__39__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__40__in_a;
    __Vtask_alu_tb__DOT__run_test__40__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__40__in_b;
    __Vtask_alu_tb__DOT__run_test__40__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__40__op;
    __Vtask_alu_tb__DOT__run_test__40__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__40__expected;
    __Vtask_alu_tb__DOT__run_test__40__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__40__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__41__in_a;
    __Vtask_alu_tb__DOT__run_test__41__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__41__in_b;
    __Vtask_alu_tb__DOT__run_test__41__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__41__op;
    __Vtask_alu_tb__DOT__run_test__41__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__41__expected;
    __Vtask_alu_tb__DOT__run_test__41__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__41__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__42__in_a;
    __Vtask_alu_tb__DOT__run_test__42__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__42__in_b;
    __Vtask_alu_tb__DOT__run_test__42__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__42__op;
    __Vtask_alu_tb__DOT__run_test__42__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__42__expected;
    __Vtask_alu_tb__DOT__run_test__42__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__42__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__43__in_a;
    __Vtask_alu_tb__DOT__run_test__43__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__43__in_b;
    __Vtask_alu_tb__DOT__run_test__43__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__43__op;
    __Vtask_alu_tb__DOT__run_test__43__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__43__expected;
    __Vtask_alu_tb__DOT__run_test__43__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__43__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__44__in_a;
    __Vtask_alu_tb__DOT__run_test__44__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__44__in_b;
    __Vtask_alu_tb__DOT__run_test__44__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__44__op;
    __Vtask_alu_tb__DOT__run_test__44__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__44__expected;
    __Vtask_alu_tb__DOT__run_test__44__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__44__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__45__in_a;
    __Vtask_alu_tb__DOT__run_test__45__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__45__in_b;
    __Vtask_alu_tb__DOT__run_test__45__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__45__op;
    __Vtask_alu_tb__DOT__run_test__45__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__45__expected;
    __Vtask_alu_tb__DOT__run_test__45__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__45__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__46__in_a;
    __Vtask_alu_tb__DOT__run_test__46__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__46__in_b;
    __Vtask_alu_tb__DOT__run_test__46__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__46__op;
    __Vtask_alu_tb__DOT__run_test__46__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__46__expected;
    __Vtask_alu_tb__DOT__run_test__46__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__46__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__47__in_a;
    __Vtask_alu_tb__DOT__run_test__47__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__47__in_b;
    __Vtask_alu_tb__DOT__run_test__47__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__47__op;
    __Vtask_alu_tb__DOT__run_test__47__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__47__expected;
    __Vtask_alu_tb__DOT__run_test__47__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__47__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__48__in_a;
    __Vtask_alu_tb__DOT__run_test__48__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__48__in_b;
    __Vtask_alu_tb__DOT__run_test__48__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__48__op;
    __Vtask_alu_tb__DOT__run_test__48__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__48__expected;
    __Vtask_alu_tb__DOT__run_test__48__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__48__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__49__in_a;
    __Vtask_alu_tb__DOT__run_test__49__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__49__in_b;
    __Vtask_alu_tb__DOT__run_test__49__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__49__op;
    __Vtask_alu_tb__DOT__run_test__49__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__49__expected;
    __Vtask_alu_tb__DOT__run_test__49__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__49__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__50__in_a;
    __Vtask_alu_tb__DOT__run_test__50__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__50__in_b;
    __Vtask_alu_tb__DOT__run_test__50__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__50__op;
    __Vtask_alu_tb__DOT__run_test__50__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__50__expected;
    __Vtask_alu_tb__DOT__run_test__50__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__50__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__51__in_a;
    __Vtask_alu_tb__DOT__run_test__51__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__51__in_b;
    __Vtask_alu_tb__DOT__run_test__51__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__51__op;
    __Vtask_alu_tb__DOT__run_test__51__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__51__expected;
    __Vtask_alu_tb__DOT__run_test__51__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__51__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__52__in_a;
    __Vtask_alu_tb__DOT__run_test__52__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__52__in_b;
    __Vtask_alu_tb__DOT__run_test__52__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__52__op;
    __Vtask_alu_tb__DOT__run_test__52__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__52__expected;
    __Vtask_alu_tb__DOT__run_test__52__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__52__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__53__in_a;
    __Vtask_alu_tb__DOT__run_test__53__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__53__in_b;
    __Vtask_alu_tb__DOT__run_test__53__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__53__op;
    __Vtask_alu_tb__DOT__run_test__53__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__53__expected;
    __Vtask_alu_tb__DOT__run_test__53__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__53__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__54__in_a;
    __Vtask_alu_tb__DOT__run_test__54__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__54__in_b;
    __Vtask_alu_tb__DOT__run_test__54__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__54__op;
    __Vtask_alu_tb__DOT__run_test__54__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__54__expected;
    __Vtask_alu_tb__DOT__run_test__54__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__54__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__55__in_a;
    __Vtask_alu_tb__DOT__run_test__55__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__55__in_b;
    __Vtask_alu_tb__DOT__run_test__55__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__55__op;
    __Vtask_alu_tb__DOT__run_test__55__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__55__expected;
    __Vtask_alu_tb__DOT__run_test__55__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__55__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__56__in_a;
    __Vtask_alu_tb__DOT__run_test__56__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__56__in_b;
    __Vtask_alu_tb__DOT__run_test__56__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__56__op;
    __Vtask_alu_tb__DOT__run_test__56__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__56__expected;
    __Vtask_alu_tb__DOT__run_test__56__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__56__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__57__in_a;
    __Vtask_alu_tb__DOT__run_test__57__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__57__in_b;
    __Vtask_alu_tb__DOT__run_test__57__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__57__op;
    __Vtask_alu_tb__DOT__run_test__57__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__57__expected;
    __Vtask_alu_tb__DOT__run_test__57__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__57__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__58__in_a;
    __Vtask_alu_tb__DOT__run_test__58__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__58__in_b;
    __Vtask_alu_tb__DOT__run_test__58__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__58__op;
    __Vtask_alu_tb__DOT__run_test__58__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__58__expected;
    __Vtask_alu_tb__DOT__run_test__58__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__58__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__59__in_a;
    __Vtask_alu_tb__DOT__run_test__59__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__59__in_b;
    __Vtask_alu_tb__DOT__run_test__59__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__59__op;
    __Vtask_alu_tb__DOT__run_test__59__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__59__expected;
    __Vtask_alu_tb__DOT__run_test__59__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__59__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__60__in_a;
    __Vtask_alu_tb__DOT__run_test__60__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__60__in_b;
    __Vtask_alu_tb__DOT__run_test__60__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__60__op;
    __Vtask_alu_tb__DOT__run_test__60__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__60__expected;
    __Vtask_alu_tb__DOT__run_test__60__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__60__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__61__in_a;
    __Vtask_alu_tb__DOT__run_test__61__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__61__in_b;
    __Vtask_alu_tb__DOT__run_test__61__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__61__op;
    __Vtask_alu_tb__DOT__run_test__61__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__61__expected;
    __Vtask_alu_tb__DOT__run_test__61__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__61__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__62__in_a;
    __Vtask_alu_tb__DOT__run_test__62__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__62__in_b;
    __Vtask_alu_tb__DOT__run_test__62__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__62__op;
    __Vtask_alu_tb__DOT__run_test__62__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__62__expected;
    __Vtask_alu_tb__DOT__run_test__62__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__62__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__63__in_a;
    __Vtask_alu_tb__DOT__run_test__63__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__63__in_b;
    __Vtask_alu_tb__DOT__run_test__63__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__63__op;
    __Vtask_alu_tb__DOT__run_test__63__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__63__expected;
    __Vtask_alu_tb__DOT__run_test__63__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__63__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__64__in_a;
    __Vtask_alu_tb__DOT__run_test__64__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__64__in_b;
    __Vtask_alu_tb__DOT__run_test__64__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__64__op;
    __Vtask_alu_tb__DOT__run_test__64__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__64__expected;
    __Vtask_alu_tb__DOT__run_test__64__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__64__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__65__in_a;
    __Vtask_alu_tb__DOT__run_test__65__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__65__in_b;
    __Vtask_alu_tb__DOT__run_test__65__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__65__op;
    __Vtask_alu_tb__DOT__run_test__65__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__65__expected;
    __Vtask_alu_tb__DOT__run_test__65__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__65__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__66__in_a;
    __Vtask_alu_tb__DOT__run_test__66__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__66__in_b;
    __Vtask_alu_tb__DOT__run_test__66__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__66__op;
    __Vtask_alu_tb__DOT__run_test__66__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__66__expected;
    __Vtask_alu_tb__DOT__run_test__66__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__66__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__67__in_a;
    __Vtask_alu_tb__DOT__run_test__67__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__67__in_b;
    __Vtask_alu_tb__DOT__run_test__67__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__67__op;
    __Vtask_alu_tb__DOT__run_test__67__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__67__expected;
    __Vtask_alu_tb__DOT__run_test__67__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__67__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__68__in_a;
    __Vtask_alu_tb__DOT__run_test__68__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__68__in_b;
    __Vtask_alu_tb__DOT__run_test__68__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__68__op;
    __Vtask_alu_tb__DOT__run_test__68__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__68__expected;
    __Vtask_alu_tb__DOT__run_test__68__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__68__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__69__in_a;
    __Vtask_alu_tb__DOT__run_test__69__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__69__in_b;
    __Vtask_alu_tb__DOT__run_test__69__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__69__op;
    __Vtask_alu_tb__DOT__run_test__69__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__69__expected;
    __Vtask_alu_tb__DOT__run_test__69__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__69__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__70__in_a;
    __Vtask_alu_tb__DOT__run_test__70__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__70__in_b;
    __Vtask_alu_tb__DOT__run_test__70__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__70__op;
    __Vtask_alu_tb__DOT__run_test__70__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__70__expected;
    __Vtask_alu_tb__DOT__run_test__70__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__70__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__71__in_a;
    __Vtask_alu_tb__DOT__run_test__71__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__71__in_b;
    __Vtask_alu_tb__DOT__run_test__71__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__71__op;
    __Vtask_alu_tb__DOT__run_test__71__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__71__expected;
    __Vtask_alu_tb__DOT__run_test__71__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__71__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__72__in_a;
    __Vtask_alu_tb__DOT__run_test__72__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__72__in_b;
    __Vtask_alu_tb__DOT__run_test__72__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__72__op;
    __Vtask_alu_tb__DOT__run_test__72__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__72__expected;
    __Vtask_alu_tb__DOT__run_test__72__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__72__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__73__in_a;
    __Vtask_alu_tb__DOT__run_test__73__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__73__in_b;
    __Vtask_alu_tb__DOT__run_test__73__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__73__op;
    __Vtask_alu_tb__DOT__run_test__73__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__73__expected;
    __Vtask_alu_tb__DOT__run_test__73__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__73__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__74__in_a;
    __Vtask_alu_tb__DOT__run_test__74__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__74__in_b;
    __Vtask_alu_tb__DOT__run_test__74__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__74__op;
    __Vtask_alu_tb__DOT__run_test__74__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__74__expected;
    __Vtask_alu_tb__DOT__run_test__74__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__74__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__75__in_a;
    __Vtask_alu_tb__DOT__run_test__75__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__75__in_b;
    __Vtask_alu_tb__DOT__run_test__75__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__75__op;
    __Vtask_alu_tb__DOT__run_test__75__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__75__expected;
    __Vtask_alu_tb__DOT__run_test__75__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__75__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__76__in_a;
    __Vtask_alu_tb__DOT__run_test__76__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__76__in_b;
    __Vtask_alu_tb__DOT__run_test__76__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__76__op;
    __Vtask_alu_tb__DOT__run_test__76__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__76__expected;
    __Vtask_alu_tb__DOT__run_test__76__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__76__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__77__in_a;
    __Vtask_alu_tb__DOT__run_test__77__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__77__in_b;
    __Vtask_alu_tb__DOT__run_test__77__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__77__op;
    __Vtask_alu_tb__DOT__run_test__77__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__77__expected;
    __Vtask_alu_tb__DOT__run_test__77__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__77__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__78__in_a;
    __Vtask_alu_tb__DOT__run_test__78__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__78__in_b;
    __Vtask_alu_tb__DOT__run_test__78__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__78__op;
    __Vtask_alu_tb__DOT__run_test__78__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__78__expected;
    __Vtask_alu_tb__DOT__run_test__78__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__78__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__79__in_a;
    __Vtask_alu_tb__DOT__run_test__79__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__79__in_b;
    __Vtask_alu_tb__DOT__run_test__79__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__79__op;
    __Vtask_alu_tb__DOT__run_test__79__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__79__expected;
    __Vtask_alu_tb__DOT__run_test__79__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__79__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__80__in_a;
    __Vtask_alu_tb__DOT__run_test__80__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__80__in_b;
    __Vtask_alu_tb__DOT__run_test__80__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__80__op;
    __Vtask_alu_tb__DOT__run_test__80__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__80__expected;
    __Vtask_alu_tb__DOT__run_test__80__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__80__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__81__in_a;
    __Vtask_alu_tb__DOT__run_test__81__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__81__in_b;
    __Vtask_alu_tb__DOT__run_test__81__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__81__op;
    __Vtask_alu_tb__DOT__run_test__81__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__81__expected;
    __Vtask_alu_tb__DOT__run_test__81__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__81__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__82__in_a;
    __Vtask_alu_tb__DOT__run_test__82__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__82__in_b;
    __Vtask_alu_tb__DOT__run_test__82__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__82__op;
    __Vtask_alu_tb__DOT__run_test__82__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__82__expected;
    __Vtask_alu_tb__DOT__run_test__82__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__82__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__83__in_a;
    __Vtask_alu_tb__DOT__run_test__83__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__83__in_b;
    __Vtask_alu_tb__DOT__run_test__83__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__83__op;
    __Vtask_alu_tb__DOT__run_test__83__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__83__expected;
    __Vtask_alu_tb__DOT__run_test__83__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__83__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__84__in_a;
    __Vtask_alu_tb__DOT__run_test__84__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__84__in_b;
    __Vtask_alu_tb__DOT__run_test__84__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__84__op;
    __Vtask_alu_tb__DOT__run_test__84__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__84__expected;
    __Vtask_alu_tb__DOT__run_test__84__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__84__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__85__in_a;
    __Vtask_alu_tb__DOT__run_test__85__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__85__in_b;
    __Vtask_alu_tb__DOT__run_test__85__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__85__op;
    __Vtask_alu_tb__DOT__run_test__85__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__85__expected;
    __Vtask_alu_tb__DOT__run_test__85__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__85__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__86__in_a;
    __Vtask_alu_tb__DOT__run_test__86__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__86__in_b;
    __Vtask_alu_tb__DOT__run_test__86__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__86__op;
    __Vtask_alu_tb__DOT__run_test__86__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__86__expected;
    __Vtask_alu_tb__DOT__run_test__86__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__86__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__87__in_a;
    __Vtask_alu_tb__DOT__run_test__87__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__87__in_b;
    __Vtask_alu_tb__DOT__run_test__87__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__87__op;
    __Vtask_alu_tb__DOT__run_test__87__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__87__expected;
    __Vtask_alu_tb__DOT__run_test__87__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__87__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__88__in_a;
    __Vtask_alu_tb__DOT__run_test__88__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__88__in_b;
    __Vtask_alu_tb__DOT__run_test__88__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__88__op;
    __Vtask_alu_tb__DOT__run_test__88__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__88__expected;
    __Vtask_alu_tb__DOT__run_test__88__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__88__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__89__in_a;
    __Vtask_alu_tb__DOT__run_test__89__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__89__in_b;
    __Vtask_alu_tb__DOT__run_test__89__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__89__op;
    __Vtask_alu_tb__DOT__run_test__89__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__89__expected;
    __Vtask_alu_tb__DOT__run_test__89__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__89__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__90__in_a;
    __Vtask_alu_tb__DOT__run_test__90__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__90__in_b;
    __Vtask_alu_tb__DOT__run_test__90__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__90__op;
    __Vtask_alu_tb__DOT__run_test__90__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__90__expected;
    __Vtask_alu_tb__DOT__run_test__90__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__90__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__91__in_a;
    __Vtask_alu_tb__DOT__run_test__91__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__91__in_b;
    __Vtask_alu_tb__DOT__run_test__91__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__91__op;
    __Vtask_alu_tb__DOT__run_test__91__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__91__expected;
    __Vtask_alu_tb__DOT__run_test__91__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__91__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__92__in_a;
    __Vtask_alu_tb__DOT__run_test__92__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__92__in_b;
    __Vtask_alu_tb__DOT__run_test__92__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__92__op;
    __Vtask_alu_tb__DOT__run_test__92__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__92__expected;
    __Vtask_alu_tb__DOT__run_test__92__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__92__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__93__in_a;
    __Vtask_alu_tb__DOT__run_test__93__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__93__in_b;
    __Vtask_alu_tb__DOT__run_test__93__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__93__op;
    __Vtask_alu_tb__DOT__run_test__93__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__93__expected;
    __Vtask_alu_tb__DOT__run_test__93__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__93__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__94__in_a;
    __Vtask_alu_tb__DOT__run_test__94__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__94__in_b;
    __Vtask_alu_tb__DOT__run_test__94__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__94__op;
    __Vtask_alu_tb__DOT__run_test__94__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__94__expected;
    __Vtask_alu_tb__DOT__run_test__94__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__94__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__95__in_a;
    __Vtask_alu_tb__DOT__run_test__95__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__95__in_b;
    __Vtask_alu_tb__DOT__run_test__95__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__95__op;
    __Vtask_alu_tb__DOT__run_test__95__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__95__expected;
    __Vtask_alu_tb__DOT__run_test__95__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__95__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__96__in_a;
    __Vtask_alu_tb__DOT__run_test__96__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__96__in_b;
    __Vtask_alu_tb__DOT__run_test__96__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__96__op;
    __Vtask_alu_tb__DOT__run_test__96__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__96__expected;
    __Vtask_alu_tb__DOT__run_test__96__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__96__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__97__in_a;
    __Vtask_alu_tb__DOT__run_test__97__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__97__in_b;
    __Vtask_alu_tb__DOT__run_test__97__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__97__op;
    __Vtask_alu_tb__DOT__run_test__97__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__97__expected;
    __Vtask_alu_tb__DOT__run_test__97__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__97__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__98__in_a;
    __Vtask_alu_tb__DOT__run_test__98__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__98__in_b;
    __Vtask_alu_tb__DOT__run_test__98__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__98__op;
    __Vtask_alu_tb__DOT__run_test__98__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__98__expected;
    __Vtask_alu_tb__DOT__run_test__98__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__98__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__99__in_a;
    __Vtask_alu_tb__DOT__run_test__99__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__99__in_b;
    __Vtask_alu_tb__DOT__run_test__99__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__99__op;
    __Vtask_alu_tb__DOT__run_test__99__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__99__expected;
    __Vtask_alu_tb__DOT__run_test__99__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__99__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__100__in_a;
    __Vtask_alu_tb__DOT__run_test__100__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__100__in_b;
    __Vtask_alu_tb__DOT__run_test__100__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__100__op;
    __Vtask_alu_tb__DOT__run_test__100__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__100__expected;
    __Vtask_alu_tb__DOT__run_test__100__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__100__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__101__in_a;
    __Vtask_alu_tb__DOT__run_test__101__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__101__in_b;
    __Vtask_alu_tb__DOT__run_test__101__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__101__op;
    __Vtask_alu_tb__DOT__run_test__101__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__101__expected;
    __Vtask_alu_tb__DOT__run_test__101__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__101__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__102__in_a;
    __Vtask_alu_tb__DOT__run_test__102__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__102__in_b;
    __Vtask_alu_tb__DOT__run_test__102__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__102__op;
    __Vtask_alu_tb__DOT__run_test__102__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__102__expected;
    __Vtask_alu_tb__DOT__run_test__102__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__102__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__103__in_a;
    __Vtask_alu_tb__DOT__run_test__103__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__103__in_b;
    __Vtask_alu_tb__DOT__run_test__103__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__103__op;
    __Vtask_alu_tb__DOT__run_test__103__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__103__expected;
    __Vtask_alu_tb__DOT__run_test__103__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__103__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__104__in_a;
    __Vtask_alu_tb__DOT__run_test__104__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__104__in_b;
    __Vtask_alu_tb__DOT__run_test__104__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__104__op;
    __Vtask_alu_tb__DOT__run_test__104__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__104__expected;
    __Vtask_alu_tb__DOT__run_test__104__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__104__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__105__in_a;
    __Vtask_alu_tb__DOT__run_test__105__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__105__in_b;
    __Vtask_alu_tb__DOT__run_test__105__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__105__op;
    __Vtask_alu_tb__DOT__run_test__105__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__105__expected;
    __Vtask_alu_tb__DOT__run_test__105__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__105__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__106__in_a;
    __Vtask_alu_tb__DOT__run_test__106__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__106__in_b;
    __Vtask_alu_tb__DOT__run_test__106__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__106__op;
    __Vtask_alu_tb__DOT__run_test__106__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__106__expected;
    __Vtask_alu_tb__DOT__run_test__106__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__106__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__107__in_a;
    __Vtask_alu_tb__DOT__run_test__107__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__107__in_b;
    __Vtask_alu_tb__DOT__run_test__107__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__107__op;
    __Vtask_alu_tb__DOT__run_test__107__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__107__expected;
    __Vtask_alu_tb__DOT__run_test__107__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__107__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__108__in_a;
    __Vtask_alu_tb__DOT__run_test__108__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__108__in_b;
    __Vtask_alu_tb__DOT__run_test__108__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__108__op;
    __Vtask_alu_tb__DOT__run_test__108__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__108__expected;
    __Vtask_alu_tb__DOT__run_test__108__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__108__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__109__in_a;
    __Vtask_alu_tb__DOT__run_test__109__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__109__in_b;
    __Vtask_alu_tb__DOT__run_test__109__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__109__op;
    __Vtask_alu_tb__DOT__run_test__109__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__109__expected;
    __Vtask_alu_tb__DOT__run_test__109__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__109__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__110__in_a;
    __Vtask_alu_tb__DOT__run_test__110__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__110__in_b;
    __Vtask_alu_tb__DOT__run_test__110__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__110__op;
    __Vtask_alu_tb__DOT__run_test__110__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__110__expected;
    __Vtask_alu_tb__DOT__run_test__110__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__110__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__111__in_a;
    __Vtask_alu_tb__DOT__run_test__111__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__111__in_b;
    __Vtask_alu_tb__DOT__run_test__111__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__111__op;
    __Vtask_alu_tb__DOT__run_test__111__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__111__expected;
    __Vtask_alu_tb__DOT__run_test__111__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__111__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__112__in_a;
    __Vtask_alu_tb__DOT__run_test__112__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__112__in_b;
    __Vtask_alu_tb__DOT__run_test__112__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__112__op;
    __Vtask_alu_tb__DOT__run_test__112__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__112__expected;
    __Vtask_alu_tb__DOT__run_test__112__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__112__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__113__in_a;
    __Vtask_alu_tb__DOT__run_test__113__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__113__in_b;
    __Vtask_alu_tb__DOT__run_test__113__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__113__op;
    __Vtask_alu_tb__DOT__run_test__113__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__113__expected;
    __Vtask_alu_tb__DOT__run_test__113__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__113__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__114__in_a;
    __Vtask_alu_tb__DOT__run_test__114__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__114__in_b;
    __Vtask_alu_tb__DOT__run_test__114__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__114__op;
    __Vtask_alu_tb__DOT__run_test__114__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__114__expected;
    __Vtask_alu_tb__DOT__run_test__114__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__114__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__115__in_a;
    __Vtask_alu_tb__DOT__run_test__115__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__115__in_b;
    __Vtask_alu_tb__DOT__run_test__115__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__115__op;
    __Vtask_alu_tb__DOT__run_test__115__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__115__expected;
    __Vtask_alu_tb__DOT__run_test__115__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__115__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__116__in_a;
    __Vtask_alu_tb__DOT__run_test__116__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__116__in_b;
    __Vtask_alu_tb__DOT__run_test__116__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__116__op;
    __Vtask_alu_tb__DOT__run_test__116__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__116__expected;
    __Vtask_alu_tb__DOT__run_test__116__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__116__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__117__in_a;
    __Vtask_alu_tb__DOT__run_test__117__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__117__in_b;
    __Vtask_alu_tb__DOT__run_test__117__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__117__op;
    __Vtask_alu_tb__DOT__run_test__117__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__117__expected;
    __Vtask_alu_tb__DOT__run_test__117__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__117__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__118__in_a;
    __Vtask_alu_tb__DOT__run_test__118__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__118__in_b;
    __Vtask_alu_tb__DOT__run_test__118__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__118__op;
    __Vtask_alu_tb__DOT__run_test__118__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__118__expected;
    __Vtask_alu_tb__DOT__run_test__118__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__118__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__119__in_a;
    __Vtask_alu_tb__DOT__run_test__119__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__119__in_b;
    __Vtask_alu_tb__DOT__run_test__119__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__119__op;
    __Vtask_alu_tb__DOT__run_test__119__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__119__expected;
    __Vtask_alu_tb__DOT__run_test__119__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__119__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__120__in_a;
    __Vtask_alu_tb__DOT__run_test__120__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__120__in_b;
    __Vtask_alu_tb__DOT__run_test__120__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__120__op;
    __Vtask_alu_tb__DOT__run_test__120__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__120__expected;
    __Vtask_alu_tb__DOT__run_test__120__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__120__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__121__in_a;
    __Vtask_alu_tb__DOT__run_test__121__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__121__in_b;
    __Vtask_alu_tb__DOT__run_test__121__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__121__op;
    __Vtask_alu_tb__DOT__run_test__121__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__121__expected;
    __Vtask_alu_tb__DOT__run_test__121__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__121__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__122__in_a;
    __Vtask_alu_tb__DOT__run_test__122__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__122__in_b;
    __Vtask_alu_tb__DOT__run_test__122__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__122__op;
    __Vtask_alu_tb__DOT__run_test__122__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__122__expected;
    __Vtask_alu_tb__DOT__run_test__122__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__122__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__123__in_a;
    __Vtask_alu_tb__DOT__run_test__123__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__123__in_b;
    __Vtask_alu_tb__DOT__run_test__123__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__123__op;
    __Vtask_alu_tb__DOT__run_test__123__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__123__expected;
    __Vtask_alu_tb__DOT__run_test__123__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__123__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__124__in_a;
    __Vtask_alu_tb__DOT__run_test__124__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__124__in_b;
    __Vtask_alu_tb__DOT__run_test__124__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__124__op;
    __Vtask_alu_tb__DOT__run_test__124__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__124__expected;
    __Vtask_alu_tb__DOT__run_test__124__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__124__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__125__in_a;
    __Vtask_alu_tb__DOT__run_test__125__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__125__in_b;
    __Vtask_alu_tb__DOT__run_test__125__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__125__op;
    __Vtask_alu_tb__DOT__run_test__125__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__125__expected;
    __Vtask_alu_tb__DOT__run_test__125__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__125__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__126__in_a;
    __Vtask_alu_tb__DOT__run_test__126__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__126__in_b;
    __Vtask_alu_tb__DOT__run_test__126__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__126__op;
    __Vtask_alu_tb__DOT__run_test__126__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__126__expected;
    __Vtask_alu_tb__DOT__run_test__126__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__126__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__127__in_a;
    __Vtask_alu_tb__DOT__run_test__127__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__127__in_b;
    __Vtask_alu_tb__DOT__run_test__127__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__127__op;
    __Vtask_alu_tb__DOT__run_test__127__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__127__expected;
    __Vtask_alu_tb__DOT__run_test__127__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__127__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__128__in_a;
    __Vtask_alu_tb__DOT__run_test__128__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__128__in_b;
    __Vtask_alu_tb__DOT__run_test__128__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__128__op;
    __Vtask_alu_tb__DOT__run_test__128__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__128__expected;
    __Vtask_alu_tb__DOT__run_test__128__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__128__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__129__in_a;
    __Vtask_alu_tb__DOT__run_test__129__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__129__in_b;
    __Vtask_alu_tb__DOT__run_test__129__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__129__op;
    __Vtask_alu_tb__DOT__run_test__129__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__129__expected;
    __Vtask_alu_tb__DOT__run_test__129__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__129__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__130__in_a;
    __Vtask_alu_tb__DOT__run_test__130__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__130__in_b;
    __Vtask_alu_tb__DOT__run_test__130__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__130__op;
    __Vtask_alu_tb__DOT__run_test__130__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__130__expected;
    __Vtask_alu_tb__DOT__run_test__130__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__130__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__131__in_a;
    __Vtask_alu_tb__DOT__run_test__131__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__131__in_b;
    __Vtask_alu_tb__DOT__run_test__131__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__131__op;
    __Vtask_alu_tb__DOT__run_test__131__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__131__expected;
    __Vtask_alu_tb__DOT__run_test__131__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__131__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__132__in_a;
    __Vtask_alu_tb__DOT__run_test__132__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__132__in_b;
    __Vtask_alu_tb__DOT__run_test__132__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__132__op;
    __Vtask_alu_tb__DOT__run_test__132__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__132__expected;
    __Vtask_alu_tb__DOT__run_test__132__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__132__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__133__in_a;
    __Vtask_alu_tb__DOT__run_test__133__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__133__in_b;
    __Vtask_alu_tb__DOT__run_test__133__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__133__op;
    __Vtask_alu_tb__DOT__run_test__133__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__133__expected;
    __Vtask_alu_tb__DOT__run_test__133__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__133__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__134__in_a;
    __Vtask_alu_tb__DOT__run_test__134__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__134__in_b;
    __Vtask_alu_tb__DOT__run_test__134__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__134__op;
    __Vtask_alu_tb__DOT__run_test__134__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__134__expected;
    __Vtask_alu_tb__DOT__run_test__134__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__134__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__135__in_a;
    __Vtask_alu_tb__DOT__run_test__135__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__135__in_b;
    __Vtask_alu_tb__DOT__run_test__135__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__135__op;
    __Vtask_alu_tb__DOT__run_test__135__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__135__expected;
    __Vtask_alu_tb__DOT__run_test__135__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__135__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__136__in_a;
    __Vtask_alu_tb__DOT__run_test__136__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__136__in_b;
    __Vtask_alu_tb__DOT__run_test__136__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__136__op;
    __Vtask_alu_tb__DOT__run_test__136__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__136__expected;
    __Vtask_alu_tb__DOT__run_test__136__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__136__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__137__in_a;
    __Vtask_alu_tb__DOT__run_test__137__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__137__in_b;
    __Vtask_alu_tb__DOT__run_test__137__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__137__op;
    __Vtask_alu_tb__DOT__run_test__137__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__137__expected;
    __Vtask_alu_tb__DOT__run_test__137__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__137__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__138__in_a;
    __Vtask_alu_tb__DOT__run_test__138__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__138__in_b;
    __Vtask_alu_tb__DOT__run_test__138__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__138__op;
    __Vtask_alu_tb__DOT__run_test__138__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__138__expected;
    __Vtask_alu_tb__DOT__run_test__138__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__138__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__139__in_a;
    __Vtask_alu_tb__DOT__run_test__139__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__139__in_b;
    __Vtask_alu_tb__DOT__run_test__139__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__139__op;
    __Vtask_alu_tb__DOT__run_test__139__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__139__expected;
    __Vtask_alu_tb__DOT__run_test__139__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__139__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__140__in_a;
    __Vtask_alu_tb__DOT__run_test__140__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__140__in_b;
    __Vtask_alu_tb__DOT__run_test__140__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__140__op;
    __Vtask_alu_tb__DOT__run_test__140__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__140__expected;
    __Vtask_alu_tb__DOT__run_test__140__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__140__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__141__in_a;
    __Vtask_alu_tb__DOT__run_test__141__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__141__in_b;
    __Vtask_alu_tb__DOT__run_test__141__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__141__op;
    __Vtask_alu_tb__DOT__run_test__141__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__141__expected;
    __Vtask_alu_tb__DOT__run_test__141__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__141__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__142__in_a;
    __Vtask_alu_tb__DOT__run_test__142__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__142__in_b;
    __Vtask_alu_tb__DOT__run_test__142__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__142__op;
    __Vtask_alu_tb__DOT__run_test__142__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__142__expected;
    __Vtask_alu_tb__DOT__run_test__142__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__142__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__143__in_a;
    __Vtask_alu_tb__DOT__run_test__143__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__143__in_b;
    __Vtask_alu_tb__DOT__run_test__143__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__143__op;
    __Vtask_alu_tb__DOT__run_test__143__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__143__expected;
    __Vtask_alu_tb__DOT__run_test__143__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__143__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__144__in_a;
    __Vtask_alu_tb__DOT__run_test__144__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__144__in_b;
    __Vtask_alu_tb__DOT__run_test__144__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__144__op;
    __Vtask_alu_tb__DOT__run_test__144__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__144__expected;
    __Vtask_alu_tb__DOT__run_test__144__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__144__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__145__in_a;
    __Vtask_alu_tb__DOT__run_test__145__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__145__in_b;
    __Vtask_alu_tb__DOT__run_test__145__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__145__op;
    __Vtask_alu_tb__DOT__run_test__145__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__145__expected;
    __Vtask_alu_tb__DOT__run_test__145__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__145__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__146__in_a;
    __Vtask_alu_tb__DOT__run_test__146__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__146__in_b;
    __Vtask_alu_tb__DOT__run_test__146__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__146__op;
    __Vtask_alu_tb__DOT__run_test__146__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__146__expected;
    __Vtask_alu_tb__DOT__run_test__146__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__146__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__147__in_a;
    __Vtask_alu_tb__DOT__run_test__147__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__147__in_b;
    __Vtask_alu_tb__DOT__run_test__147__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__147__op;
    __Vtask_alu_tb__DOT__run_test__147__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__147__expected;
    __Vtask_alu_tb__DOT__run_test__147__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__147__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__148__in_a;
    __Vtask_alu_tb__DOT__run_test__148__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__148__in_b;
    __Vtask_alu_tb__DOT__run_test__148__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__148__op;
    __Vtask_alu_tb__DOT__run_test__148__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__148__expected;
    __Vtask_alu_tb__DOT__run_test__148__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__148__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__149__in_a;
    __Vtask_alu_tb__DOT__run_test__149__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__149__in_b;
    __Vtask_alu_tb__DOT__run_test__149__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__149__op;
    __Vtask_alu_tb__DOT__run_test__149__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__149__expected;
    __Vtask_alu_tb__DOT__run_test__149__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__149__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__150__in_a;
    __Vtask_alu_tb__DOT__run_test__150__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__150__in_b;
    __Vtask_alu_tb__DOT__run_test__150__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__150__op;
    __Vtask_alu_tb__DOT__run_test__150__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__150__expected;
    __Vtask_alu_tb__DOT__run_test__150__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__150__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__151__in_a;
    __Vtask_alu_tb__DOT__run_test__151__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__151__in_b;
    __Vtask_alu_tb__DOT__run_test__151__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__151__op;
    __Vtask_alu_tb__DOT__run_test__151__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__151__expected;
    __Vtask_alu_tb__DOT__run_test__151__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__151__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__152__in_a;
    __Vtask_alu_tb__DOT__run_test__152__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__152__in_b;
    __Vtask_alu_tb__DOT__run_test__152__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__152__op;
    __Vtask_alu_tb__DOT__run_test__152__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__152__expected;
    __Vtask_alu_tb__DOT__run_test__152__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__152__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__153__in_a;
    __Vtask_alu_tb__DOT__run_test__153__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__153__in_b;
    __Vtask_alu_tb__DOT__run_test__153__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__153__op;
    __Vtask_alu_tb__DOT__run_test__153__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__153__expected;
    __Vtask_alu_tb__DOT__run_test__153__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__153__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__154__in_a;
    __Vtask_alu_tb__DOT__run_test__154__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__154__in_b;
    __Vtask_alu_tb__DOT__run_test__154__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__154__op;
    __Vtask_alu_tb__DOT__run_test__154__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__154__expected;
    __Vtask_alu_tb__DOT__run_test__154__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__154__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__155__in_a;
    __Vtask_alu_tb__DOT__run_test__155__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__155__in_b;
    __Vtask_alu_tb__DOT__run_test__155__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__155__op;
    __Vtask_alu_tb__DOT__run_test__155__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__155__expected;
    __Vtask_alu_tb__DOT__run_test__155__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__155__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__156__in_a;
    __Vtask_alu_tb__DOT__run_test__156__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__156__in_b;
    __Vtask_alu_tb__DOT__run_test__156__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__156__op;
    __Vtask_alu_tb__DOT__run_test__156__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__156__expected;
    __Vtask_alu_tb__DOT__run_test__156__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__156__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__157__in_a;
    __Vtask_alu_tb__DOT__run_test__157__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__157__in_b;
    __Vtask_alu_tb__DOT__run_test__157__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__157__op;
    __Vtask_alu_tb__DOT__run_test__157__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__157__expected;
    __Vtask_alu_tb__DOT__run_test__157__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__157__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__158__in_a;
    __Vtask_alu_tb__DOT__run_test__158__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__158__in_b;
    __Vtask_alu_tb__DOT__run_test__158__in_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__158__op;
    __Vtask_alu_tb__DOT__run_test__158__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__158__expected;
    __Vtask_alu_tb__DOT__run_test__158__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__158__instr_name;
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"wave.vcd"});
    vlSymsp->_traceDumpOpen();
    VL_WRITEF_NX("\n===== ALU Instruction Tests =====\n\n----------- ADD -----------\n",0);
    __Vtask_alu_tb__DOT__run_test__0__instr_name = 
        std::string{"ADD_ZERO_ZERO"};
    __Vtask_alu_tb__DOT__run_test__0__expected = 0U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero = 1U;
    vlSelfRef.alu_tb__DOT__a = 0U;
    vlSelfRef.alu_tb__DOT__b = 0U;
    vlSelfRef.alu_tb__DOT__ALUControl = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__0__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__0__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__0__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__0__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__0__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__0__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__1__instr_name = 
        std::string{"ADD_ONE_ZERO"};
    __Vtask_alu_tb__DOT__run_test__1__expected = 1U;
    __Vtask_alu_tb__DOT__run_test__1__op = 0U;
    __Vtask_alu_tb__DOT__run_test__1__in_b = 0U;
    __Vtask_alu_tb__DOT__run_test__1__in_a = 1U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__1__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__1__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__1__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__1__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__1__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__1__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__1__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__1__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__1__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__1__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__2__instr_name = 
        std::string{"ADD_ZERO_ONE"};
    __Vtask_alu_tb__DOT__run_test__2__expected = 1U;
    __Vtask_alu_tb__DOT__run_test__2__op = 0U;
    __Vtask_alu_tb__DOT__run_test__2__in_b = 1U;
    __Vtask_alu_tb__DOT__run_test__2__in_a = 0U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__2__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__2__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__2__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__2__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__2__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__2__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__2__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__2__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__2__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__2__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__3__instr_name = 
        std::string{"ADD_SMALL_POS"};
    __Vtask_alu_tb__DOT__run_test__3__expected = 0x243U;
    __Vtask_alu_tb__DOT__run_test__3__op = 0U;
    __Vtask_alu_tb__DOT__run_test__3__in_b = 0x1c8U;
    __Vtask_alu_tb__DOT__run_test__3__in_a = 0x7bU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__3__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__3__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__3__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__3__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__3__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__3__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__3__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__3__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__3__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__3__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__4__instr_name = 
        std::string{"ADD_TINY_POS"};
    __Vtask_alu_tb__DOT__run_test__4__expected = 3U;
    __Vtask_alu_tb__DOT__run_test__4__op = 0U;
    __Vtask_alu_tb__DOT__run_test__4__in_b = 2U;
    __Vtask_alu_tb__DOT__run_test__4__in_a = 1U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__4__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__4__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__4__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__4__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__4__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__4__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__4__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__4__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__4__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__4__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__5__instr_name = 
        std::string{"ADD_MAX_POS_ZERO"};
    __Vtask_alu_tb__DOT__run_test__5__expected = 0x7fffffffU;
    __Vtask_alu_tb__DOT__run_test__5__op = 0U;
    __Vtask_alu_tb__DOT__run_test__5__in_b = 0U;
    __Vtask_alu_tb__DOT__run_test__5__in_a = 0x7fffffffU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__5__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__5__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__5__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__5__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__5__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__5__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__5__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__5__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__5__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__5__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__6__instr_name = 
        std::string{"ADD_MAX_POS_ONE"};
    __Vtask_alu_tb__DOT__run_test__6__expected = 0x80000000U;
    __Vtask_alu_tb__DOT__run_test__6__op = 0U;
    __Vtask_alu_tb__DOT__run_test__6__in_b = 1U;
    __Vtask_alu_tb__DOT__run_test__6__in_a = 0x7fffffffU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__6__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__6__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__6__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__6__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__6__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__6__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__6__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__6__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__6__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__6__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__7__instr_name = 
        std::string{"ADD_MAX_POS_MAX_POS"};
    __Vtask_alu_tb__DOT__run_test__7__expected = 0xfffffffeU;
    __Vtask_alu_tb__DOT__run_test__7__op = 0U;
    __Vtask_alu_tb__DOT__run_test__7__in_b = 0x7fffffffU;
    __Vtask_alu_tb__DOT__run_test__7__in_a = 0x7fffffffU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__7__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__7__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__7__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__7__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__7__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__7__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__7__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__7__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__7__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__7__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__8__instr_name = 
        std::string{"ADD_MIN_NEG_ZERO"};
    __Vtask_alu_tb__DOT__run_test__8__expected = 0x80000000U;
    __Vtask_alu_tb__DOT__run_test__8__op = 0U;
    __Vtask_alu_tb__DOT__run_test__8__in_b = 0U;
    __Vtask_alu_tb__DOT__run_test__8__in_a = 0x80000000U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__8__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__8__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__8__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__8__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__8__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__8__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__8__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__8__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__8__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__8__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__9__instr_name = 
        std::string{"ADD_MIN_NEG_NEG_ONE"};
    __Vtask_alu_tb__DOT__run_test__9__expected = 0x7fffffffU;
    __Vtask_alu_tb__DOT__run_test__9__op = 0U;
    __Vtask_alu_tb__DOT__run_test__9__in_b = 0xffffffffU;
    __Vtask_alu_tb__DOT__run_test__9__in_a = 0x80000000U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__9__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__9__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__9__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__9__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__9__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__9__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__9__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__9__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__9__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__9__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__10__instr_name = 
        std::string{"ADD_MIN_NEG_MIN_NEG"};
    __Vtask_alu_tb__DOT__run_test__10__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__10__op = 0U;
    __Vtask_alu_tb__DOT__run_test__10__in_b = 0x80000000U;
    __Vtask_alu_tb__DOT__run_test__10__in_a = 0x80000000U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__10__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__10__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__10__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__10__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__10__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__10__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__10__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__10__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__10__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__10__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__11__instr_name = 
        std::string{"ADD_NEG_ONE_POS_ONE"};
    __Vtask_alu_tb__DOT__run_test__11__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__11__op = 0U;
    __Vtask_alu_tb__DOT__run_test__11__in_b = 1U;
    __Vtask_alu_tb__DOT__run_test__11__in_a = 0xffffffffU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__11__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__11__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__11__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__11__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__11__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__11__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__11__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__11__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__11__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__11__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__12__instr_name = 
        std::string{"ADD_NEG_TWO_POS_TWO"};
    __Vtask_alu_tb__DOT__run_test__12__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__12__op = 0U;
    __Vtask_alu_tb__DOT__run_test__12__in_b = 2U;
    __Vtask_alu_tb__DOT__run_test__12__in_a = 0xfffffffeU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__12__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__12__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__12__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__12__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__12__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__12__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__12__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__12__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__12__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__12__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__13__instr_name = 
        std::string{"ADD_MIN_NEG_MAX_POS"};
    __Vtask_alu_tb__DOT__run_test__13__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__run_test__13__op = 0U;
    __Vtask_alu_tb__DOT__run_test__13__in_b = 0x7fffffffU;
    __Vtask_alu_tb__DOT__run_test__13__in_a = 0x80000000U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__13__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__13__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__13__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__13__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__13__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__13__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__13__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__13__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__13__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__13__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__14__instr_name = 
        std::string{"ADD_UNSIGNED_MAX_MAX"};
    __Vtask_alu_tb__DOT__run_test__14__expected = 0xfffffffeU;
    __Vtask_alu_tb__DOT__run_test__14__op = 0U;
    __Vtask_alu_tb__DOT__run_test__14__in_b = 0xffffffffU;
    __Vtask_alu_tb__DOT__run_test__14__in_a = 0xffffffffU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__14__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__14__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__14__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__14__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__14__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__14__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__14__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__14__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__14__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__14__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__15__instr_name = 
        std::string{"ADD_UNSIGNED_MAX_ONE"};
    __Vtask_alu_tb__DOT__run_test__15__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__15__op = 0U;
    __Vtask_alu_tb__DOT__run_test__15__in_b = 1U;
    __Vtask_alu_tb__DOT__run_test__15__in_a = 0xffffffffU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__15__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__15__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__15__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__15__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__15__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__15__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__15__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__15__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__15__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__15__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__16__instr_name = 
        std::string{"ADD_UNSIGNED_NEAR_MAX"};
    __Vtask_alu_tb__DOT__run_test__16__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__16__op = 0U;
    __Vtask_alu_tb__DOT__run_test__16__in_b = 2U;
    __Vtask_alu_tb__DOT__run_test__16__in_a = 0xfffffffeU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__16__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__16__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__16__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__16__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__16__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__16__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__16__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__16__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__16__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__16__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__17__instr_name = 
        std::string{"ADD_ALT_BITS"};
    __Vtask_alu_tb__DOT__run_test__17__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__run_test__17__op = 0U;
    __Vtask_alu_tb__DOT__run_test__17__in_b = 0x55555555U;
    __Vtask_alu_tb__DOT__run_test__17__in_a = 0xaaaaaaaaU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__17__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__17__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__17__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__17__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__17__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__17__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__17__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__17__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__17__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__17__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__18__instr_name = 
        std::string{"ADD_NIBBLE_PATTERN"};
    __Vtask_alu_tb__DOT__run_test__18__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__run_test__18__op = 0U;
    __Vtask_alu_tb__DOT__run_test__18__in_b = 0xf0f0f0fU;
    __Vtask_alu_tb__DOT__run_test__18__in_a = 0xf0f0f0f0U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__18__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__18__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__18__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__18__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__18__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__18__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__18__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__18__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__18__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__18__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__19__instr_name = 
        std::string{"ADD_SEQUENTIAL"};
    __Vtask_alu_tb__DOT__run_test__19__expected = 0x99999999U;
    __Vtask_alu_tb__DOT__run_test__19__op = 0U;
    __Vtask_alu_tb__DOT__run_test__19__in_b = 0x87654321U;
    __Vtask_alu_tb__DOT__run_test__19__in_a = 0x12345678U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__19__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__19__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__19__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__19__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__19__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__19__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__19__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__19__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__19__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__19__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    VL_WRITEF_NX("\n----------- SUB -----------\n",0);
    __Vtask_alu_tb__DOT__run_test__20__instr_name = 
        std::string{"SUB_ZERO_ZERO"};
    __Vtask_alu_tb__DOT__run_test__20__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__20__op = 1U;
    __Vtask_alu_tb__DOT__run_test__20__in_b = 0U;
    __Vtask_alu_tb__DOT__run_test__20__in_a = 0U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__20__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__20__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__20__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__20__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__20__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__20__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__20__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__20__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__20__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__20__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__21__instr_name = 
        std::string{"SUB_ONE_ZERO"};
    __Vtask_alu_tb__DOT__run_test__21__expected = 1U;
    __Vtask_alu_tb__DOT__run_test__21__op = 1U;
    __Vtask_alu_tb__DOT__run_test__21__in_b = 0U;
    __Vtask_alu_tb__DOT__run_test__21__in_a = 1U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__21__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__21__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__21__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__21__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__21__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__21__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__21__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__21__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__21__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__21__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__22__instr_name = 
        std::string{"SUB_ZERO_ONE"};
    __Vtask_alu_tb__DOT__run_test__22__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__run_test__22__op = 1U;
    __Vtask_alu_tb__DOT__run_test__22__in_b = 1U;
    __Vtask_alu_tb__DOT__run_test__22__in_a = 0U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__22__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__22__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__22__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__22__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__22__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__22__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__22__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__22__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__22__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__22__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__23__instr_name = 
        std::string{"SUB_SMALL_POS"};
    __Vtask_alu_tb__DOT__run_test__23__expected = 0x84U;
    __Vtask_alu_tb__DOT__run_test__23__op = 1U;
    __Vtask_alu_tb__DOT__run_test__23__in_b = 0x7bU;
    __Vtask_alu_tb__DOT__run_test__23__in_a = 0xffU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__23__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__23__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__23__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__23__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__23__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__23__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__23__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__23__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__23__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__23__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__24__instr_name = 
        std::string{"SUB_TINY_POS"};
    __Vtask_alu_tb__DOT__run_test__24__expected = 2U;
    __Vtask_alu_tb__DOT__run_test__24__op = 1U;
    __Vtask_alu_tb__DOT__run_test__24__in_b = 3U;
    __Vtask_alu_tb__DOT__run_test__24__in_a = 5U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__24__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__24__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__24__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__24__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__24__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__24__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__24__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__24__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__24__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__24__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__25__instr_name = 
        std::string{"SUB_MAX_POS_ZERO"};
    __Vtask_alu_tb__DOT__run_test__25__expected = 0x7fffffffU;
    __Vtask_alu_tb__DOT__run_test__25__op = 1U;
    __Vtask_alu_tb__DOT__run_test__25__in_b = 0U;
    __Vtask_alu_tb__DOT__run_test__25__in_a = 0x7fffffffU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__25__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__25__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__25__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__25__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__25__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__25__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__25__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__25__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__25__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__25__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__26__instr_name = 
        std::string{"SUB_MAX_POS_MAX_POS"};
    __Vtask_alu_tb__DOT__run_test__26__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__26__op = 1U;
    __Vtask_alu_tb__DOT__run_test__26__in_b = 0x7fffffffU;
    __Vtask_alu_tb__DOT__run_test__26__in_a = 0x7fffffffU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__26__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__26__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__26__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__26__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__26__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__26__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__26__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__26__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__26__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__26__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__27__instr_name = 
        std::string{"SUB_MAX_POS_MIN_NEG"};
    __Vtask_alu_tb__DOT__run_test__27__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__run_test__27__op = 1U;
    __Vtask_alu_tb__DOT__run_test__27__in_b = 0x80000000U;
    __Vtask_alu_tb__DOT__run_test__27__in_a = 0x7fffffffU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__27__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__27__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__27__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__27__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__27__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__27__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__27__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__27__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__27__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__27__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__28__instr_name = 
        std::string{"SUB_MIN_NEG_ZERO"};
    __Vtask_alu_tb__DOT__run_test__28__expected = 0x80000000U;
    __Vtask_alu_tb__DOT__run_test__28__op = 1U;
    __Vtask_alu_tb__DOT__run_test__28__in_b = 0U;
    __Vtask_alu_tb__DOT__run_test__28__in_a = 0x80000000U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__28__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__28__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__28__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__28__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__28__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__28__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__28__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__28__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__28__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__28__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__29__instr_name = 
        std::string{"SUB_MIN_NEG_MIN_NEG"};
    __Vtask_alu_tb__DOT__run_test__29__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__29__op = 1U;
    __Vtask_alu_tb__DOT__run_test__29__in_b = 0x80000000U;
    __Vtask_alu_tb__DOT__run_test__29__in_a = 0x80000000U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__29__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__29__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__29__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__29__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__29__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__29__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__29__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__29__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__29__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__29__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__30__instr_name = 
        std::string{"SUB_MIN_NEG_MAX_POS"};
    __Vtask_alu_tb__DOT__run_test__30__expected = 1U;
    __Vtask_alu_tb__DOT__run_test__30__op = 1U;
    __Vtask_alu_tb__DOT__run_test__30__in_b = 0x7fffffffU;
    __Vtask_alu_tb__DOT__run_test__30__in_a = 0x80000000U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__30__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__30__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__30__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__30__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__30__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__30__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__30__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__30__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__30__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__30__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__31__instr_name = 
        std::string{"SUB_POS_ONE_NEG_ONE"};
    __Vtask_alu_tb__DOT__run_test__31__expected = 2U;
    __Vtask_alu_tb__DOT__run_test__31__op = 1U;
    __Vtask_alu_tb__DOT__run_test__31__in_b = 0xffffffffU;
    __Vtask_alu_tb__DOT__run_test__31__in_a = 1U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__31__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__31__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__31__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__31__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__31__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__31__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__31__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__31__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__31__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__31__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__32__instr_name = 
        std::string{"SUB_NEG_ONE_POS_ONE"};
    __Vtask_alu_tb__DOT__run_test__32__expected = 0xfffffffeU;
    __Vtask_alu_tb__DOT__run_test__32__op = 1U;
    __Vtask_alu_tb__DOT__run_test__32__in_b = 1U;
    __Vtask_alu_tb__DOT__run_test__32__in_a = 0xffffffffU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__32__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__32__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__32__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__32__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__32__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__32__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__32__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__32__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__32__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__32__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__33__instr_name = 
        std::string{"SUB_ZERO_MIN_NEG"};
    __Vtask_alu_tb__DOT__run_test__33__expected = 0x80000000U;
    __Vtask_alu_tb__DOT__run_test__33__op = 1U;
    __Vtask_alu_tb__DOT__run_test__33__in_b = 0x80000000U;
    __Vtask_alu_tb__DOT__run_test__33__in_a = 0U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__33__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__33__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__33__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__33__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__33__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__33__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__33__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__33__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__33__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__33__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__34__instr_name = 
        std::string{"SUB_MAX_POS_NEG_ONE"};
    __Vtask_alu_tb__DOT__run_test__34__expected = 0x80000000U;
    __Vtask_alu_tb__DOT__run_test__34__op = 1U;
    __Vtask_alu_tb__DOT__run_test__34__in_b = 0xffffffffU;
    __Vtask_alu_tb__DOT__run_test__34__in_a = 0x7fffffffU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__34__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__34__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__34__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__34__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__34__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__34__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__34__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__34__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__34__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__34__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__35__instr_name = 
        std::string{"SUB_MIN_NEG_POS_ONE"};
    __Vtask_alu_tb__DOT__run_test__35__expected = 0x7fffffffU;
    __Vtask_alu_tb__DOT__run_test__35__op = 1U;
    __Vtask_alu_tb__DOT__run_test__35__in_b = 1U;
    __Vtask_alu_tb__DOT__run_test__35__in_a = 0x80000000U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__35__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__35__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__35__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__35__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__35__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__35__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__35__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__35__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__35__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__35__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__36__instr_name = 
        std::string{"SUB_ZERO_MAX_POS"};
    __Vtask_alu_tb__DOT__run_test__36__expected = 0x80000001U;
    __Vtask_alu_tb__DOT__run_test__36__op = 1U;
    __Vtask_alu_tb__DOT__run_test__36__in_b = 0x7fffffffU;
    __Vtask_alu_tb__DOT__run_test__36__in_a = 0U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__36__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__36__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__36__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__36__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__36__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__36__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__36__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__36__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__36__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__36__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__37__instr_name = 
        std::string{"SUB_ALT_BITS"};
    __Vtask_alu_tb__DOT__run_test__37__expected = 0x55555555U;
    __Vtask_alu_tb__DOT__run_test__37__op = 1U;
    __Vtask_alu_tb__DOT__run_test__37__in_b = 0x55555555U;
    __Vtask_alu_tb__DOT__run_test__37__in_a = 0xaaaaaaaaU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__37__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__37__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__37__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__37__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__37__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__37__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__37__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__37__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__37__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__37__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__38__instr_name = 
        std::string{"SUB_NIBBLE_PATTERN"};
    __Vtask_alu_tb__DOT__run_test__38__expected = 0xe1e1e1e1U;
    __Vtask_alu_tb__DOT__run_test__38__op = 1U;
    __Vtask_alu_tb__DOT__run_test__38__in_b = 0xf0f0f0fU;
    __Vtask_alu_tb__DOT__run_test__38__in_a = 0xf0f0f0f0U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__38__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__38__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__38__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__38__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__38__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__38__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__38__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__38__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__38__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__38__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__39__instr_name = 
        std::string{"SUB_SEQUENTIAL"};
    __Vtask_alu_tb__DOT__run_test__39__expected = 0x8acf1357U;
    __Vtask_alu_tb__DOT__run_test__39__op = 1U;
    __Vtask_alu_tb__DOT__run_test__39__in_b = 0x87654321U;
    __Vtask_alu_tb__DOT__run_test__39__in_a = 0x12345678U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__39__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__39__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__39__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__39__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__39__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__39__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__39__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__39__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__39__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__39__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    VL_WRITEF_NX("\n----------- AND -----------\n",0);
    __Vtask_alu_tb__DOT__run_test__40__instr_name = 
        std::string{"AND_ZERO_ZERO"};
    __Vtask_alu_tb__DOT__run_test__40__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__40__op = 2U;
    __Vtask_alu_tb__DOT__run_test__40__in_b = 0U;
    __Vtask_alu_tb__DOT__run_test__40__in_a = 0U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__40__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__40__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__40__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__40__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__40__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__40__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__40__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__40__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__40__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__40__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__41__instr_name = 
        std::string{"AND_ALL_ZERO"};
    __Vtask_alu_tb__DOT__run_test__41__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__41__op = 2U;
    __Vtask_alu_tb__DOT__run_test__41__in_b = 0U;
    __Vtask_alu_tb__DOT__run_test__41__in_a = 0xffffffffU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__41__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__41__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__41__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__41__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__41__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__41__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__41__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__41__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__41__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__41__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__42__instr_name = 
        std::string{"AND_ALL_ONES"};
    __Vtask_alu_tb__DOT__run_test__42__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__run_test__42__op = 2U;
    __Vtask_alu_tb__DOT__run_test__42__in_b = 0xffffffffU;
    __Vtask_alu_tb__DOT__run_test__42__in_a = 0xffffffffU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__42__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__42__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__42__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__42__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__42__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__42__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__42__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__42__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__42__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__42__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__43__instr_name = 
        std::string{"AND_ALT_BITS"};
    __Vtask_alu_tb__DOT__run_test__43__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__43__op = 2U;
    __Vtask_alu_tb__DOT__run_test__43__in_b = 0x55555555U;
    __Vtask_alu_tb__DOT__run_test__43__in_a = 0xaaaaaaaaU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__43__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__43__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__43__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__43__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__43__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__43__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__43__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__43__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__43__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__43__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__44__instr_name = 
        std::string{"AND_NIBBLE_PATTERN"};
    __Vtask_alu_tb__DOT__run_test__44__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__44__op = 2U;
    __Vtask_alu_tb__DOT__run_test__44__in_b = 0xf0f0f0fU;
    __Vtask_alu_tb__DOT__run_test__44__in_a = 0xf0f0f0f0U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__44__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__44__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__44__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__44__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__44__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__44__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__44__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__44__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__44__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__44__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__45__instr_name = 
        std::string{"AND_BYTE_PATTERN"};
    __Vtask_alu_tb__DOT__run_test__45__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__45__op = 2U;
    __Vtask_alu_tb__DOT__run_test__45__in_b = 0xff00ffU;
    __Vtask_alu_tb__DOT__run_test__45__in_a = 0xff00ff00U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__45__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__45__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__45__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__45__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__45__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__45__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__45__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__45__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__45__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__45__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__46__instr_name = 
        std::string{"AND_MSB"};
    __Vtask_alu_tb__DOT__run_test__46__expected = 0x80000000U;
    __Vtask_alu_tb__DOT__run_test__46__op = 2U;
    __Vtask_alu_tb__DOT__run_test__46__in_b = 0x80000000U;
    __Vtask_alu_tb__DOT__run_test__46__in_a = 0x80000000U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__46__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__46__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__46__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__46__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__46__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__46__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__46__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__46__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__46__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__46__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__47__instr_name = 
        std::string{"AND_LSB"};
    __Vtask_alu_tb__DOT__run_test__47__expected = 1U;
    __Vtask_alu_tb__DOT__run_test__47__op = 2U;
    __Vtask_alu_tb__DOT__run_test__47__in_b = 1U;
    __Vtask_alu_tb__DOT__run_test__47__in_a = 1U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__47__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__47__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__47__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__47__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__47__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__47__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__47__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__47__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__47__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__47__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__48__instr_name = 
        std::string{"AND_MIDDLE_BIT"};
    __Vtask_alu_tb__DOT__run_test__48__expected = 0x8000U;
    __Vtask_alu_tb__DOT__run_test__48__op = 2U;
    __Vtask_alu_tb__DOT__run_test__48__in_b = 0x8000U;
    __Vtask_alu_tb__DOT__run_test__48__in_a = 0x8000U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__48__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__48__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__48__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__48__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__48__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__48__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__48__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__48__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__48__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__48__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    VL_WRITEF_NX("\n----------- OR ------------\n",0);
    __Vtask_alu_tb__DOT__run_test__49__instr_name = 
        std::string{"OR_ZERO_ZERO"};
    __Vtask_alu_tb__DOT__run_test__49__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__49__op = 3U;
    __Vtask_alu_tb__DOT__run_test__49__in_b = 0U;
    __Vtask_alu_tb__DOT__run_test__49__in_a = 0U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__49__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__49__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__49__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__49__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__49__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__49__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__49__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__49__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__49__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__49__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__50__instr_name = 
        std::string{"OR_ALL_ZERO"};
    __Vtask_alu_tb__DOT__run_test__50__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__run_test__50__op = 3U;
    __Vtask_alu_tb__DOT__run_test__50__in_b = 0U;
    __Vtask_alu_tb__DOT__run_test__50__in_a = 0xffffffffU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__50__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__50__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__50__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__50__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__50__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__50__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__50__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__50__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__50__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__50__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__51__instr_name = 
        std::string{"OR_ALL_ONES"};
    __Vtask_alu_tb__DOT__run_test__51__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__run_test__51__op = 3U;
    __Vtask_alu_tb__DOT__run_test__51__in_b = 0xffffffffU;
    __Vtask_alu_tb__DOT__run_test__51__in_a = 0xffffffffU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__51__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__51__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__51__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__51__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__51__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__51__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__51__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__51__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__51__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__51__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__52__instr_name = 
        std::string{"OR_ALT_BITS"};
    __Vtask_alu_tb__DOT__run_test__52__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__run_test__52__op = 3U;
    __Vtask_alu_tb__DOT__run_test__52__in_b = 0x55555555U;
    __Vtask_alu_tb__DOT__run_test__52__in_a = 0xaaaaaaaaU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__52__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__52__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__52__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__52__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__52__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__52__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__52__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__52__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__52__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__52__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__53__instr_name = 
        std::string{"OR_NIBBLE_PATTERN"};
    __Vtask_alu_tb__DOT__run_test__53__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__run_test__53__op = 3U;
    __Vtask_alu_tb__DOT__run_test__53__in_b = 0xf0f0f0fU;
    __Vtask_alu_tb__DOT__run_test__53__in_a = 0xf0f0f0f0U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__53__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__53__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__53__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__53__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__53__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__53__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__53__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__53__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__53__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__53__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__54__instr_name = 
        std::string{"OR_BYTE_PATTERN"};
    __Vtask_alu_tb__DOT__run_test__54__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__run_test__54__op = 3U;
    __Vtask_alu_tb__DOT__run_test__54__in_b = 0xff00ffU;
    __Vtask_alu_tb__DOT__run_test__54__in_a = 0xff00ff00U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__54__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__54__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__54__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__54__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__54__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__54__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__54__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__54__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__54__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__54__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__55__instr_name = 
        std::string{"OR_MSB"};
    __Vtask_alu_tb__DOT__run_test__55__expected = 0x80000000U;
    __Vtask_alu_tb__DOT__run_test__55__op = 3U;
    __Vtask_alu_tb__DOT__run_test__55__in_b = 0U;
    __Vtask_alu_tb__DOT__run_test__55__in_a = 0x80000000U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__55__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__55__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__55__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__55__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__55__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__55__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__55__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__55__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__55__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__55__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__56__instr_name = 
        std::string{"OR_LSB"};
    __Vtask_alu_tb__DOT__run_test__56__expected = 1U;
    __Vtask_alu_tb__DOT__run_test__56__op = 3U;
    __Vtask_alu_tb__DOT__run_test__56__in_b = 0U;
    __Vtask_alu_tb__DOT__run_test__56__in_a = 1U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__56__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__56__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__56__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__56__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__56__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__56__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__56__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__56__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__56__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__56__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__57__instr_name = 
        std::string{"OR_MIDDLE_BIT"};
    __Vtask_alu_tb__DOT__run_test__57__expected = 0x8000U;
    __Vtask_alu_tb__DOT__run_test__57__op = 3U;
    __Vtask_alu_tb__DOT__run_test__57__in_b = 0U;
    __Vtask_alu_tb__DOT__run_test__57__in_a = 0x8000U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__57__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__57__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__57__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__57__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__57__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__57__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__57__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__57__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__57__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__57__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    VL_WRITEF_NX("\n----------- SLT -----------\n",0);
    __Vtask_alu_tb__DOT__run_test__58__instr_name = 
        std::string{"SLT_EQUAL_ZERO"};
    __Vtask_alu_tb__DOT__run_test__58__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__58__op = 5U;
    __Vtask_alu_tb__DOT__run_test__58__in_b = 0U;
    __Vtask_alu_tb__DOT__run_test__58__in_a = 0U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__58__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__58__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__58__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__58__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__58__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__58__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__58__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__58__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__58__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__58__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__59__instr_name = 
        std::string{"SLT_SMALL_POS"};
    __Vtask_alu_tb__DOT__run_test__59__expected = 1U;
    __Vtask_alu_tb__DOT__run_test__59__op = 5U;
    __Vtask_alu_tb__DOT__run_test__59__in_b = 2U;
    __Vtask_alu_tb__DOT__run_test__59__in_a = 1U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__59__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__59__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__59__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__59__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__59__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__59__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__59__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__59__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__59__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__59__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__60__instr_name = 
        std::string{"SLT_SMALL_POS_FALSE"};
    __Vtask_alu_tb__DOT__run_test__60__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__60__op = 5U;
    __Vtask_alu_tb__DOT__run_test__60__in_b = 1U;
    __Vtask_alu_tb__DOT__run_test__60__in_a = 2U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__60__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__60__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__60__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__60__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__60__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__60__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__60__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__60__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__60__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__60__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__61__instr_name = 
        std::string{"SLT_MAX_POS_EQUAL"};
    __Vtask_alu_tb__DOT__run_test__61__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__61__op = 5U;
    __Vtask_alu_tb__DOT__run_test__61__in_b = 0x7fffffffU;
    __Vtask_alu_tb__DOT__run_test__61__in_a = 0x7fffffffU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__61__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__61__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__61__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__61__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__61__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__61__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__61__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__61__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__61__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__61__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__62__instr_name = 
        std::string{"SLT_NEAR_MAX_POS"};
    __Vtask_alu_tb__DOT__run_test__62__expected = 1U;
    __Vtask_alu_tb__DOT__run_test__62__op = 5U;
    __Vtask_alu_tb__DOT__run_test__62__in_b = 0x7fffffffU;
    __Vtask_alu_tb__DOT__run_test__62__in_a = 0x7ffffffeU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__62__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__62__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__62__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__62__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__62__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__62__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__62__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__62__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__62__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__62__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__63__instr_name = 
        std::string{"SLT_NEAR_MAX_POS_FALSE"};
    __Vtask_alu_tb__DOT__run_test__63__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__63__op = 5U;
    __Vtask_alu_tb__DOT__run_test__63__in_b = 0x7ffffffeU;
    __Vtask_alu_tb__DOT__run_test__63__in_a = 0x7fffffffU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__63__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__63__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__63__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__63__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__63__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__63__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__63__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__63__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__63__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__63__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__64__instr_name = 
        std::string{"SLT_MIN_NEG_EQUAL"};
    __Vtask_alu_tb__DOT__run_test__64__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__64__op = 5U;
    __Vtask_alu_tb__DOT__run_test__64__in_b = 0x80000000U;
    __Vtask_alu_tb__DOT__run_test__64__in_a = 0x80000000U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__64__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__64__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__64__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__64__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__64__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__64__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__64__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__64__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__64__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__64__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__65__instr_name = 
        std::string{"SLT_MIN_NEG"};
    __Vtask_alu_tb__DOT__run_test__65__expected = 1U;
    __Vtask_alu_tb__DOT__run_test__65__op = 5U;
    __Vtask_alu_tb__DOT__run_test__65__in_b = 0x80000001U;
    __Vtask_alu_tb__DOT__run_test__65__in_a = 0x80000000U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__65__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__65__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__65__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__65__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__65__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__65__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__65__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__65__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__65__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__65__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__66__instr_name = 
        std::string{"SLT_MIN_NEG_FALSE"};
    __Vtask_alu_tb__DOT__run_test__66__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__66__op = 5U;
    __Vtask_alu_tb__DOT__run_test__66__in_b = 0x80000000U;
    __Vtask_alu_tb__DOT__run_test__66__in_a = 0x80000001U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__66__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__66__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__66__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__66__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__66__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__66__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__66__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__66__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__66__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__66__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__67__instr_name = 
        std::string{"SLT_POS_VS_NEG"};
    __Vtask_alu_tb__DOT__run_test__67__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__67__op = 5U;
    __Vtask_alu_tb__DOT__run_test__67__in_b = 0x80000000U;
    __Vtask_alu_tb__DOT__run_test__67__in_a = 0x7fffffffU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__67__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__67__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__67__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__67__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__67__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__67__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__67__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__67__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__67__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__67__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__68__instr_name = 
        std::string{"SLT_NEG_VS_POS"};
    __Vtask_alu_tb__DOT__run_test__68__expected = 1U;
    __Vtask_alu_tb__DOT__run_test__68__op = 5U;
    __Vtask_alu_tb__DOT__run_test__68__in_b = 0x7fffffffU;
    __Vtask_alu_tb__DOT__run_test__68__in_a = 0x80000000U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__68__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__68__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__68__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__68__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__68__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__68__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__68__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__68__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__68__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__68__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__69__instr_name = 
        std::string{"SLT_ZERO_VS_NEG"};
    __Vtask_alu_tb__DOT__run_test__69__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__69__op = 5U;
    __Vtask_alu_tb__DOT__run_test__69__in_b = 0x80000000U;
    __Vtask_alu_tb__DOT__run_test__69__in_a = 0U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__69__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__69__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__69__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__69__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__69__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__69__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__69__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__69__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__69__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__69__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__70__instr_name = 
        std::string{"SLT_NEG_ONE_VS_ONE"};
    __Vtask_alu_tb__DOT__run_test__70__expected = 1U;
    __Vtask_alu_tb__DOT__run_test__70__op = 5U;
    __Vtask_alu_tb__DOT__run_test__70__in_b = 1U;
    __Vtask_alu_tb__DOT__run_test__70__in_a = 0xffffffffU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__70__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__70__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__70__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__70__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__70__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__70__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__70__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__70__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__70__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__70__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__71__instr_name = 
        std::string{"SLT_ONE_VS_NEG_ONE"};
    __Vtask_alu_tb__DOT__run_test__71__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__71__op = 5U;
    __Vtask_alu_tb__DOT__run_test__71__in_b = 0xffffffffU;
    __Vtask_alu_tb__DOT__run_test__71__in_a = 1U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__71__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__71__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__71__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__71__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__71__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__71__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__71__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__71__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__71__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__71__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__72__instr_name = 
        std::string{"SLT_ZERO_VS_NEG_ONE"};
    __Vtask_alu_tb__DOT__run_test__72__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__72__op = 5U;
    __Vtask_alu_tb__DOT__run_test__72__in_b = 0xffffffffU;
    __Vtask_alu_tb__DOT__run_test__72__in_a = 0U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__72__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__72__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__72__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__72__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__72__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__72__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__72__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__72__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__72__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__72__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__73__instr_name = 
        std::string{"SLT_NEG_ONE_VS_MIN"};
    __Vtask_alu_tb__DOT__run_test__73__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__73__op = 5U;
    __Vtask_alu_tb__DOT__run_test__73__in_b = 0x80000000U;
    __Vtask_alu_tb__DOT__run_test__73__in_a = 0xffffffffU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__73__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__73__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__73__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__73__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__73__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__73__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__73__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__73__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__73__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__73__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__74__instr_name = 
        std::string{"SLT_MIN_VS_NEG_ONE"};
    __Vtask_alu_tb__DOT__run_test__74__expected = 1U;
    __Vtask_alu_tb__DOT__run_test__74__op = 5U;
    __Vtask_alu_tb__DOT__run_test__74__in_b = 0xffffffffU;
    __Vtask_alu_tb__DOT__run_test__74__in_a = 0x80000000U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__74__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__74__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__74__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__74__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__74__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__74__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__74__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__74__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__74__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__74__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__75__instr_name = 
        std::string{"SLT_MAX_VS_NEG_ONE"};
    __Vtask_alu_tb__DOT__run_test__75__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__75__op = 5U;
    __Vtask_alu_tb__DOT__run_test__75__in_b = 0xffffffffU;
    __Vtask_alu_tb__DOT__run_test__75__in_a = 0x7fffffffU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__75__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__75__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__75__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__75__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__75__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__75__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__75__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__75__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__75__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__75__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    VL_WRITEF_NX("\n----------- BEQ (via SUB) -----------\n",0);
    __Vtask_alu_tb__DOT__run_test__76__instr_name = 
        std::string{"BEQ_ZERO_ZERO"};
    __Vtask_alu_tb__DOT__run_test__76__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__76__op = 1U;
    __Vtask_alu_tb__DOT__run_test__76__in_b = 0U;
    __Vtask_alu_tb__DOT__run_test__76__in_a = 0U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__76__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__76__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__76__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__76__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__76__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__76__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__76__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__76__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__76__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__76__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__77__instr_name = 
        std::string{"BEQ_ONE_ONE"};
    __Vtask_alu_tb__DOT__run_test__77__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__77__op = 1U;
    __Vtask_alu_tb__DOT__run_test__77__in_b = 1U;
    __Vtask_alu_tb__DOT__run_test__77__in_a = 1U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__77__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__77__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__77__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__77__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__77__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__77__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__77__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__77__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__77__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__77__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__78__instr_name = 
        std::string{"BEQ_NEG_ONE_NEG_ONE"};
    __Vtask_alu_tb__DOT__run_test__78__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__78__op = 1U;
    __Vtask_alu_tb__DOT__run_test__78__in_b = 0xffffffffU;
    __Vtask_alu_tb__DOT__run_test__78__in_a = 0xffffffffU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__78__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__78__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__78__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__78__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__78__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__78__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__78__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__78__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__78__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__78__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__79__instr_name = 
        std::string{"BEQ_ZERO_ONE"};
    __Vtask_alu_tb__DOT__run_test__79__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__run_test__79__op = 1U;
    __Vtask_alu_tb__DOT__run_test__79__in_b = 1U;
    __Vtask_alu_tb__DOT__run_test__79__in_a = 0U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__79__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__79__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__79__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__79__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__79__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__79__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__79__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__79__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__79__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__79__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__80__instr_name = 
        std::string{"BEQ_ONE_ZERO"};
    __Vtask_alu_tb__DOT__run_test__80__expected = 1U;
    __Vtask_alu_tb__DOT__run_test__80__op = 1U;
    __Vtask_alu_tb__DOT__run_test__80__in_b = 0U;
    __Vtask_alu_tb__DOT__run_test__80__in_a = 1U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__80__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__80__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__80__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__80__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__80__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__80__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__80__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__80__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__80__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__80__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__81__instr_name = 
        std::string{"BEQ_NEG_ONE_ZERO"};
    __Vtask_alu_tb__DOT__run_test__81__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__run_test__81__op = 1U;
    __Vtask_alu_tb__DOT__run_test__81__in_b = 0U;
    __Vtask_alu_tb__DOT__run_test__81__in_a = 0xffffffffU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__81__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__81__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__81__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__81__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__81__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__81__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__81__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__81__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__81__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__81__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__82__instr_name = 
        std::string{"BEQ_MAX_POS_EQUAL"};
    __Vtask_alu_tb__DOT__run_test__82__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__82__op = 1U;
    __Vtask_alu_tb__DOT__run_test__82__in_b = 0x7fffffffU;
    __Vtask_alu_tb__DOT__run_test__82__in_a = 0x7fffffffU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__82__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__82__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__82__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__82__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__82__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__82__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__82__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__82__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__82__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__82__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__83__instr_name = 
        std::string{"BEQ_MAX_POS_DIFF"};
    __Vtask_alu_tb__DOT__run_test__83__expected = 1U;
    __Vtask_alu_tb__DOT__run_test__83__op = 1U;
    __Vtask_alu_tb__DOT__run_test__83__in_b = 0x7ffffffeU;
    __Vtask_alu_tb__DOT__run_test__83__in_a = 0x7fffffffU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__83__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__83__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__83__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__83__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__83__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__83__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__83__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__83__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__83__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__83__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__84__instr_name = 
        std::string{"BEQ_MAX_POS_MIN_NEG"};
    __Vtask_alu_tb__DOT__run_test__84__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__run_test__84__op = 1U;
    __Vtask_alu_tb__DOT__run_test__84__in_b = 0x80000000U;
    __Vtask_alu_tb__DOT__run_test__84__in_a = 0x7fffffffU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__84__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__84__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__84__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__84__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__84__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__84__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__84__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__84__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__84__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__84__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__85__instr_name = 
        std::string{"BEQ_MIN_NEG_EQUAL"};
    __Vtask_alu_tb__DOT__run_test__85__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__85__op = 1U;
    __Vtask_alu_tb__DOT__run_test__85__in_b = 0x80000000U;
    __Vtask_alu_tb__DOT__run_test__85__in_a = 0x80000000U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__85__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__85__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__85__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__85__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__85__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__85__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__85__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__85__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__85__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__85__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__86__instr_name = 
        std::string{"BEQ_MIN_NEG_DIFF"};
    __Vtask_alu_tb__DOT__run_test__86__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__run_test__86__op = 1U;
    __Vtask_alu_tb__DOT__run_test__86__in_b = 0x80000001U;
    __Vtask_alu_tb__DOT__run_test__86__in_a = 0x80000000U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__86__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__86__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__86__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__86__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__86__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__86__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__86__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__86__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__86__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__86__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__87__instr_name = 
        std::string{"BEQ_MIN_NEG_MAX_POS"};
    __Vtask_alu_tb__DOT__run_test__87__expected = 1U;
    __Vtask_alu_tb__DOT__run_test__87__op = 1U;
    __Vtask_alu_tb__DOT__run_test__87__in_b = 0x7fffffffU;
    __Vtask_alu_tb__DOT__run_test__87__in_a = 0x80000000U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__87__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__87__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__87__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__87__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__87__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__87__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__87__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__87__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__87__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__87__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__88__instr_name = 
        std::string{"BEQ_ZERO_NEG_ONE"};
    __Vtask_alu_tb__DOT__run_test__88__expected = 1U;
    __Vtask_alu_tb__DOT__run_test__88__op = 1U;
    __Vtask_alu_tb__DOT__run_test__88__in_b = 0xffffffffU;
    __Vtask_alu_tb__DOT__run_test__88__in_a = 0U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__88__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__88__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__88__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__88__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__88__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__88__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__88__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__88__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__88__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__88__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__89__instr_name = 
        std::string{"BEQ_ADJ_POS"};
    __Vtask_alu_tb__DOT__run_test__89__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__run_test__89__op = 1U;
    __Vtask_alu_tb__DOT__run_test__89__in_b = 2U;
    __Vtask_alu_tb__DOT__run_test__89__in_a = 1U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__89__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__89__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__89__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__89__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__89__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__89__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__89__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__89__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__89__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__89__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__90__instr_name = 
        std::string{"BEQ_ADJ_NEG"};
    __Vtask_alu_tb__DOT__run_test__90__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__run_test__90__op = 1U;
    __Vtask_alu_tb__DOT__run_test__90__in_b = 0xffffffffU;
    __Vtask_alu_tb__DOT__run_test__90__in_a = 0xfffffffeU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__90__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__90__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__90__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__90__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__90__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__90__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__90__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__90__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__90__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__90__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__91__instr_name = 
        std::string{"BEQ_ALT_BITS_EQUAL"};
    __Vtask_alu_tb__DOT__run_test__91__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__91__op = 1U;
    __Vtask_alu_tb__DOT__run_test__91__in_b = 0xaaaaaaaaU;
    __Vtask_alu_tb__DOT__run_test__91__in_a = 0xaaaaaaaaU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__91__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__91__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__91__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__91__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__91__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__91__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__91__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__91__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__91__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__91__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__92__instr_name = 
        std::string{"BEQ_NIBBLE_EQUAL"};
    __Vtask_alu_tb__DOT__run_test__92__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__92__op = 1U;
    __Vtask_alu_tb__DOT__run_test__92__in_b = 0xf0f0f0f0U;
    __Vtask_alu_tb__DOT__run_test__92__in_a = 0xf0f0f0f0U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__92__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__92__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__92__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__92__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__92__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__92__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__92__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__92__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__92__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__92__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__93__instr_name = 
        std::string{"BEQ_BYTE_EQUAL"};
    __Vtask_alu_tb__DOT__run_test__93__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__93__op = 1U;
    __Vtask_alu_tb__DOT__run_test__93__in_b = 0xff00ff00U;
    __Vtask_alu_tb__DOT__run_test__93__in_a = 0xff00ff00U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__93__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__93__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__93__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__93__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__93__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__93__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__93__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__93__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__93__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__93__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__94__instr_name = 
        std::string{"BEQ_NEG_ONE_ONE"};
    __Vtask_alu_tb__DOT__run_test__94__expected = 0xfffffffeU;
    __Vtask_alu_tb__DOT__run_test__94__op = 1U;
    __Vtask_alu_tb__DOT__run_test__94__in_b = 1U;
    __Vtask_alu_tb__DOT__run_test__94__in_a = 0xffffffffU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__94__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__94__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__94__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__94__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__94__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__94__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__94__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__94__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__94__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__94__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__95__instr_name = 
        std::string{"BEQ_COMPLEMENT"};
    __Vtask_alu_tb__DOT__run_test__95__expected = 0xaaaaaaabU;
    __Vtask_alu_tb__DOT__run_test__95__op = 1U;
    __Vtask_alu_tb__DOT__run_test__95__in_b = 0xaaaaaaaaU;
    __Vtask_alu_tb__DOT__run_test__95__in_a = 0x55555555U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__95__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__95__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__95__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__95__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__95__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__95__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__95__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__95__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__95__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__95__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__96__instr_name = 
        std::string{"BEQ_PATTERN_EQUAL"};
    __Vtask_alu_tb__DOT__run_test__96__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__96__op = 1U;
    __Vtask_alu_tb__DOT__run_test__96__in_b = 0x12345678U;
    __Vtask_alu_tb__DOT__run_test__96__in_a = 0x12345678U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__96__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__96__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__96__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__96__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__96__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__96__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__96__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__96__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__96__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__96__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    VL_WRITEF_NX("\n----------- SLL -----------\n",0);
    __Vtask_alu_tb__DOT__run_test__97__instr_name = 
        std::string{"SLL_NO_SHIFT"};
    __Vtask_alu_tb__DOT__run_test__97__expected = 1U;
    __Vtask_alu_tb__DOT__run_test__97__op = 6U;
    __Vtask_alu_tb__DOT__run_test__97__in_b = 0U;
    __Vtask_alu_tb__DOT__run_test__97__in_a = 1U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__97__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__97__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__97__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__97__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__97__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__97__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__97__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__97__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__97__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__97__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__98__instr_name = 
        std::string{"SLL_SHIFT_1"};
    __Vtask_alu_tb__DOT__run_test__98__expected = 2U;
    __Vtask_alu_tb__DOT__run_test__98__op = 6U;
    __Vtask_alu_tb__DOT__run_test__98__in_b = 1U;
    __Vtask_alu_tb__DOT__run_test__98__in_a = 1U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__98__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__98__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__98__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__98__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__98__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__98__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__98__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__98__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__98__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__98__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__99__instr_name = 
        std::string{"SLL_SHIFT_4"};
    __Vtask_alu_tb__DOT__run_test__99__expected = 0x10U;
    __Vtask_alu_tb__DOT__run_test__99__op = 6U;
    __Vtask_alu_tb__DOT__run_test__99__in_b = 4U;
    __Vtask_alu_tb__DOT__run_test__99__in_a = 1U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__99__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__99__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__99__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__99__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__99__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__99__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__99__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__99__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__99__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__99__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__100__instr_name = 
        std::string{"SLL_MSB_SHIFT_1"};
    __Vtask_alu_tb__DOT__run_test__100__expected = 0x80000000U;
    __Vtask_alu_tb__DOT__run_test__100__op = 6U;
    __Vtask_alu_tb__DOT__run_test__100__in_b = 1U;
    __Vtask_alu_tb__DOT__run_test__100__in_a = 0x40000000U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__100__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__100__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__100__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__100__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__100__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__100__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__100__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__100__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__100__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__100__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__101__instr_name = 
        std::string{"SLL_OVERFLOW_SHIFT_1"};
    __Vtask_alu_tb__DOT__run_test__101__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__101__op = 6U;
    __Vtask_alu_tb__DOT__run_test__101__in_b = 1U;
    __Vtask_alu_tb__DOT__run_test__101__in_a = 0x80000000U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__101__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__101__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__101__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__101__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__101__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__101__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__101__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__101__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__101__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__101__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__102__instr_name = 
        std::string{"SLL_MAX_SHIFT"};
    __Vtask_alu_tb__DOT__run_test__102__expected = 0x80000000U;
    __Vtask_alu_tb__DOT__run_test__102__op = 6U;
    __Vtask_alu_tb__DOT__run_test__102__in_b = 0x1fU;
    __Vtask_alu_tb__DOT__run_test__102__in_a = 1U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__102__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__102__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__102__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__102__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__102__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__102__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__102__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__102__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__102__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__102__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__103__instr_name = 
        std::string{"SLL_HALF_WORD"};
    __Vtask_alu_tb__DOT__run_test__103__expected = 0xffff0000U;
    __Vtask_alu_tb__DOT__run_test__103__op = 6U;
    __Vtask_alu_tb__DOT__run_test__103__in_b = 0x10U;
    __Vtask_alu_tb__DOT__run_test__103__in_a = 0xffffU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__103__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__103__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__103__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__103__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__103__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__103__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__103__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__103__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__103__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__103__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__104__instr_name = 
        std::string{"SLL_ALT_PATTERN"};
    __Vtask_alu_tb__DOT__run_test__104__expected = 0x55555554U;
    __Vtask_alu_tb__DOT__run_test__104__op = 6U;
    __Vtask_alu_tb__DOT__run_test__104__in_b = 1U;
    __Vtask_alu_tb__DOT__run_test__104__in_a = 0xaaaaaaaaU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__104__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__104__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__104__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__104__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__104__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__104__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__104__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__104__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__104__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__104__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__105__instr_name = 
        std::string{"SLL_ALL_ONES"};
    __Vtask_alu_tb__DOT__run_test__105__expected = 0xfffffff0U;
    __Vtask_alu_tb__DOT__run_test__105__op = 6U;
    __Vtask_alu_tb__DOT__run_test__105__in_b = 4U;
    __Vtask_alu_tb__DOT__run_test__105__in_a = 0xffffffffU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__105__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__105__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__105__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__105__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__105__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__105__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__105__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__105__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__105__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__105__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    VL_WRITEF_NX("\n----------- SRL -----------\n",0);
    __Vtask_alu_tb__DOT__run_test__106__instr_name = 
        std::string{"SRL_NO_SHIFT"};
    __Vtask_alu_tb__DOT__run_test__106__expected = 0x80000000U;
    __Vtask_alu_tb__DOT__run_test__106__op = 7U;
    __Vtask_alu_tb__DOT__run_test__106__in_b = 0U;
    __Vtask_alu_tb__DOT__run_test__106__in_a = 0x80000000U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__106__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__106__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__106__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__106__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__106__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__106__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__106__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__106__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__106__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__106__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__107__instr_name = 
        std::string{"SRL_SHIFT_1"};
    __Vtask_alu_tb__DOT__run_test__107__expected = 0x40000000U;
    __Vtask_alu_tb__DOT__run_test__107__op = 7U;
    __Vtask_alu_tb__DOT__run_test__107__in_b = 1U;
    __Vtask_alu_tb__DOT__run_test__107__in_a = 0x80000000U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__107__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__107__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__107__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__107__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__107__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__107__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__107__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__107__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__107__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__107__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__108__instr_name = 
        std::string{"SRL_SHIFT_4"};
    __Vtask_alu_tb__DOT__run_test__108__expected = 0x8000000U;
    __Vtask_alu_tb__DOT__run_test__108__op = 7U;
    __Vtask_alu_tb__DOT__run_test__108__in_b = 4U;
    __Vtask_alu_tb__DOT__run_test__108__in_a = 0x80000000U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__108__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__108__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__108__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__108__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__108__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__108__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__108__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__108__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__108__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__108__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__109__instr_name = 
        std::string{"SRL_LSB_SHIFT_1"};
    __Vtask_alu_tb__DOT__run_test__109__expected = 1U;
    __Vtask_alu_tb__DOT__run_test__109__op = 7U;
    __Vtask_alu_tb__DOT__run_test__109__in_b = 1U;
    __Vtask_alu_tb__DOT__run_test__109__in_a = 2U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__109__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__109__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__109__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__109__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__109__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__109__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__109__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__109__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__109__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__109__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__110__instr_name = 
        std::string{"SRL_UNDERFLOW_SHIFT_1"};
    __Vtask_alu_tb__DOT__run_test__110__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__110__op = 7U;
    __Vtask_alu_tb__DOT__run_test__110__in_b = 1U;
    __Vtask_alu_tb__DOT__run_test__110__in_a = 1U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__110__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__110__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__110__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__110__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__110__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__110__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__110__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__110__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__110__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__110__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__111__instr_name = 
        std::string{"SRL_MAX_SHIFT"};
    __Vtask_alu_tb__DOT__run_test__111__expected = 1U;
    __Vtask_alu_tb__DOT__run_test__111__op = 7U;
    __Vtask_alu_tb__DOT__run_test__111__in_b = 0x1fU;
    __Vtask_alu_tb__DOT__run_test__111__in_a = 0x80000000U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__111__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__111__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__111__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__111__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__111__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__111__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__111__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__111__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__111__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__111__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__112__instr_name = 
        std::string{"SRL_HALF_WORD"};
    __Vtask_alu_tb__DOT__run_test__112__expected = 0xffffU;
    __Vtask_alu_tb__DOT__run_test__112__op = 7U;
    __Vtask_alu_tb__DOT__run_test__112__in_b = 0x10U;
    __Vtask_alu_tb__DOT__run_test__112__in_a = 0xffff0000U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__112__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__112__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__112__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__112__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__112__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__112__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__112__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__112__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__112__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__112__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__113__instr_name = 
        std::string{"SRL_ALT_PATTERN"};
    __Vtask_alu_tb__DOT__run_test__113__expected = 0x55555555U;
    __Vtask_alu_tb__DOT__run_test__113__op = 7U;
    __Vtask_alu_tb__DOT__run_test__113__in_b = 1U;
    __Vtask_alu_tb__DOT__run_test__113__in_a = 0xaaaaaaaaU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__113__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__113__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__113__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__113__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__113__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__113__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__113__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__113__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__113__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__113__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__114__instr_name = 
        std::string{"SRL_ALL_ONES"};
    __Vtask_alu_tb__DOT__run_test__114__expected = 0xfffffffU;
    __Vtask_alu_tb__DOT__run_test__114__op = 7U;
    __Vtask_alu_tb__DOT__run_test__114__in_b = 4U;
    __Vtask_alu_tb__DOT__run_test__114__in_a = 0xffffffffU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__114__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__114__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__114__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__114__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__114__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__114__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__114__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__114__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__114__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__114__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    VL_WRITEF_NX("\n----------- SRA -----------\n",0);
    __Vtask_alu_tb__DOT__run_test__115__instr_name = 
        std::string{"SRA_NO_SHIFT"};
    __Vtask_alu_tb__DOT__run_test__115__expected = 0x80000000U;
    __Vtask_alu_tb__DOT__run_test__115__op = 8U;
    __Vtask_alu_tb__DOT__run_test__115__in_b = 0U;
    __Vtask_alu_tb__DOT__run_test__115__in_a = 0x80000000U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__115__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__115__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__115__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__115__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__115__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__115__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__115__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__115__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__115__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__115__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__116__instr_name = 
        std::string{"SRA_NEG_SHIFT_1"};
    __Vtask_alu_tb__DOT__run_test__116__expected = 0xc0000000U;
    __Vtask_alu_tb__DOT__run_test__116__op = 8U;
    __Vtask_alu_tb__DOT__run_test__116__in_b = 1U;
    __Vtask_alu_tb__DOT__run_test__116__in_a = 0x80000000U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__116__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__116__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__116__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__116__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__116__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__116__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__116__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__116__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__116__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__116__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__117__instr_name = 
        std::string{"SRA_POS_SHIFT_1"};
    __Vtask_alu_tb__DOT__run_test__117__expected = 0x20000000U;
    __Vtask_alu_tb__DOT__run_test__117__op = 8U;
    __Vtask_alu_tb__DOT__run_test__117__in_b = 1U;
    __Vtask_alu_tb__DOT__run_test__117__in_a = 0x40000000U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__117__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__117__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__117__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__117__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__117__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__117__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__117__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__117__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__117__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__117__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__118__instr_name = 
        std::string{"SRA_SIGN_EXTEND_4"};
    __Vtask_alu_tb__DOT__run_test__118__expected = 0xf8000000U;
    __Vtask_alu_tb__DOT__run_test__118__op = 8U;
    __Vtask_alu_tb__DOT__run_test__118__in_b = 4U;
    __Vtask_alu_tb__DOT__run_test__118__in_a = 0x80000000U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__118__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__118__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__118__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__118__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__118__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__118__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__118__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__118__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__118__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__118__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__119__instr_name = 
        std::string{"SRA_MAX_SHIFT_NEG"};
    __Vtask_alu_tb__DOT__run_test__119__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__run_test__119__op = 8U;
    __Vtask_alu_tb__DOT__run_test__119__in_b = 0x1fU;
    __Vtask_alu_tb__DOT__run_test__119__in_a = 0x80000000U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__119__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__119__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__119__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__119__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__119__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__119__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__119__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__119__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__119__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__119__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__120__instr_name = 
        std::string{"SRA_MAX_SHIFT_POS"};
    __Vtask_alu_tb__DOT__run_test__120__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__120__op = 8U;
    __Vtask_alu_tb__DOT__run_test__120__in_b = 0x1fU;
    __Vtask_alu_tb__DOT__run_test__120__in_a = 0x7fffffffU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__120__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__120__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__120__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__120__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__120__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__120__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__120__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__120__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__120__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__120__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__121__instr_name = 
        std::string{"SRA_NEG_HALF_WORD"};
    __Vtask_alu_tb__DOT__run_test__121__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__run_test__121__op = 8U;
    __Vtask_alu_tb__DOT__run_test__121__in_b = 0x10U;
    __Vtask_alu_tb__DOT__run_test__121__in_a = 0xffff0000U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__121__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__121__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__121__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__121__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__121__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__121__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__121__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__121__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__121__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__121__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__122__instr_name = 
        std::string{"SRA_POS_HALF_WORD"};
    __Vtask_alu_tb__DOT__run_test__122__expected = 0x7fffU;
    __Vtask_alu_tb__DOT__run_test__122__op = 8U;
    __Vtask_alu_tb__DOT__run_test__122__in_b = 0x10U;
    __Vtask_alu_tb__DOT__run_test__122__in_a = 0x7fff0000U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__122__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__122__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__122__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__122__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__122__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__122__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__122__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__122__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__122__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__122__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__123__instr_name = 
        std::string{"SRA_ALT_PATTERN"};
    __Vtask_alu_tb__DOT__run_test__123__expected = 0xfaaaaaaaU;
    __Vtask_alu_tb__DOT__run_test__123__op = 8U;
    __Vtask_alu_tb__DOT__run_test__123__in_b = 4U;
    __Vtask_alu_tb__DOT__run_test__123__in_a = 0xaaaaaaaaU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__123__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__123__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__123__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__123__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__123__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__123__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__123__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__123__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__123__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__123__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    VL_WRITEF_NX("\n----------- SLTU -----------\n",0);
    __Vtask_alu_tb__DOT__run_test__124__instr_name = 
        std::string{"SLTU_EQUAL_ZERO"};
    __Vtask_alu_tb__DOT__run_test__124__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__124__op = 9U;
    __Vtask_alu_tb__DOT__run_test__124__in_b = 0U;
    __Vtask_alu_tb__DOT__run_test__124__in_a = 0U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__124__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__124__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__124__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__124__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__124__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__124__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__124__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__124__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__124__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__124__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__125__instr_name = 
        std::string{"SLTU_SMALL_POS"};
    __Vtask_alu_tb__DOT__run_test__125__expected = 1U;
    __Vtask_alu_tb__DOT__run_test__125__op = 9U;
    __Vtask_alu_tb__DOT__run_test__125__in_b = 2U;
    __Vtask_alu_tb__DOT__run_test__125__in_a = 1U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__125__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__125__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__125__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__125__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__125__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__125__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__125__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__125__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__125__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__125__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__126__instr_name = 
        std::string{"SLTU_SMALL_POS_FALSE"};
    __Vtask_alu_tb__DOT__run_test__126__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__126__op = 9U;
    __Vtask_alu_tb__DOT__run_test__126__in_b = 1U;
    __Vtask_alu_tb__DOT__run_test__126__in_a = 2U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__126__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__126__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__126__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__126__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__126__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__126__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__126__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__126__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__126__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__126__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__127__instr_name = 
        std::string{"SLTU_MAX_VS_ONE"};
    __Vtask_alu_tb__DOT__run_test__127__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__127__op = 9U;
    __Vtask_alu_tb__DOT__run_test__127__in_b = 1U;
    __Vtask_alu_tb__DOT__run_test__127__in_a = 0xffffffffU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__127__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__127__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__127__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__127__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__127__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__127__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__127__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__127__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__127__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__127__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__128__instr_name = 
        std::string{"SLTU_ONE_VS_MAX"};
    __Vtask_alu_tb__DOT__run_test__128__expected = 1U;
    __Vtask_alu_tb__DOT__run_test__128__op = 9U;
    __Vtask_alu_tb__DOT__run_test__128__in_b = 0xffffffffU;
    __Vtask_alu_tb__DOT__run_test__128__in_a = 1U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__128__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__128__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__128__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__128__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__128__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__128__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__128__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__128__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__128__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__128__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__129__instr_name = 
        std::string{"SLTU_HIGH_BIT"};
    __Vtask_alu_tb__DOT__run_test__129__expected = 1U;
    __Vtask_alu_tb__DOT__run_test__129__op = 9U;
    __Vtask_alu_tb__DOT__run_test__129__in_b = 0xffffffffU;
    __Vtask_alu_tb__DOT__run_test__129__in_a = 0x80000000U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__129__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__129__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__129__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__129__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__129__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__129__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__129__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__129__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__129__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__129__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__130__instr_name = 
        std::string{"SLTU_MAX_EQUAL"};
    __Vtask_alu_tb__DOT__run_test__130__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__130__op = 9U;
    __Vtask_alu_tb__DOT__run_test__130__in_b = 0xffffffffU;
    __Vtask_alu_tb__DOT__run_test__130__in_a = 0xffffffffU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__130__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__130__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__130__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__130__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__130__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__130__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__130__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__130__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__130__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__130__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__131__instr_name = 
        std::string{"SLTU_NEAR_MAX"};
    __Vtask_alu_tb__DOT__run_test__131__expected = 1U;
    __Vtask_alu_tb__DOT__run_test__131__op = 9U;
    __Vtask_alu_tb__DOT__run_test__131__in_b = 0xffffffffU;
    __Vtask_alu_tb__DOT__run_test__131__in_a = 0xfffffffeU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__131__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__131__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__131__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__131__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__131__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__131__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__131__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__131__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__131__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__131__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__132__instr_name = 
        std::string{"SLTU_SIGNED_CROSS"};
    __Vtask_alu_tb__DOT__run_test__132__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__132__op = 9U;
    __Vtask_alu_tb__DOT__run_test__132__in_b = 0x7fffffffU;
    __Vtask_alu_tb__DOT__run_test__132__in_a = 0x80000000U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__132__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__132__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__132__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__132__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__132__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__132__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__132__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__132__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__132__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__132__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__133__instr_name = 
        std::string{"BNE_EQUAL_ZERO"};
    __Vtask_alu_tb__DOT__run_test__133__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__133__op = 1U;
    __Vtask_alu_tb__DOT__run_test__133__in_b = 0U;
    __Vtask_alu_tb__DOT__run_test__133__in_a = 0U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__133__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__133__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__133__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__133__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__133__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__133__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__133__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__133__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__133__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__133__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__134__instr_name = 
        std::string{"BNE_DIFF_POS"};
    __Vtask_alu_tb__DOT__run_test__134__expected = 0xffffffffU;
    __Vtask_alu_tb__DOT__run_test__134__op = 1U;
    __Vtask_alu_tb__DOT__run_test__134__in_b = 2U;
    __Vtask_alu_tb__DOT__run_test__134__in_a = 1U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__134__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__134__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__134__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__134__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__134__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__134__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__134__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__134__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__134__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__134__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__135__instr_name = 
        std::string{"BNE_DIFF_SIGN"};
    __Vtask_alu_tb__DOT__run_test__135__expected = 1U;
    __Vtask_alu_tb__DOT__run_test__135__op = 1U;
    __Vtask_alu_tb__DOT__run_test__135__in_b = 0x7fffffffU;
    __Vtask_alu_tb__DOT__run_test__135__in_a = 0x80000000U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__135__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__135__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__135__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__135__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__135__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__135__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__135__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__135__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__135__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__135__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__136__instr_name = 
        std::string{"BLT_LESS"};
    __Vtask_alu_tb__DOT__run_test__136__expected = 1U;
    __Vtask_alu_tb__DOT__run_test__136__op = 5U;
    __Vtask_alu_tb__DOT__run_test__136__in_b = 2U;
    __Vtask_alu_tb__DOT__run_test__136__in_a = 1U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__136__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__136__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__136__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__136__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__136__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__136__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__136__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__136__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__136__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__136__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__137__instr_name = 
        std::string{"BLT_GREATER"};
    __Vtask_alu_tb__DOT__run_test__137__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__137__op = 5U;
    __Vtask_alu_tb__DOT__run_test__137__in_b = 1U;
    __Vtask_alu_tb__DOT__run_test__137__in_a = 2U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__137__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__137__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__137__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__137__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__137__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__137__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__137__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__137__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__137__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__137__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__138__instr_name = 
        std::string{"BLT_NEG_POS"};
    __Vtask_alu_tb__DOT__run_test__138__expected = 1U;
    __Vtask_alu_tb__DOT__run_test__138__op = 5U;
    __Vtask_alu_tb__DOT__run_test__138__in_b = 0x7fffffffU;
    __Vtask_alu_tb__DOT__run_test__138__in_a = 0x80000000U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__138__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__138__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__138__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__138__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__138__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__138__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__138__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__138__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__138__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__138__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__139__instr_name = 
        std::string{"BGE_LESS"};
    __Vtask_alu_tb__DOT__run_test__139__expected = 1U;
    __Vtask_alu_tb__DOT__run_test__139__op = 5U;
    __Vtask_alu_tb__DOT__run_test__139__in_b = 2U;
    __Vtask_alu_tb__DOT__run_test__139__in_a = 1U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__139__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__139__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__139__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__139__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__139__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__139__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__139__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__139__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__139__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__139__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__140__instr_name = 
        std::string{"BGE_GREATER"};
    __Vtask_alu_tb__DOT__run_test__140__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__140__op = 5U;
    __Vtask_alu_tb__DOT__run_test__140__in_b = 1U;
    __Vtask_alu_tb__DOT__run_test__140__in_a = 2U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__140__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__140__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__140__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__140__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__140__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__140__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__140__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__140__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__140__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__140__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__141__instr_name = 
        std::string{"BGE_EQUAL"};
    __Vtask_alu_tb__DOT__run_test__141__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__141__op = 5U;
    __Vtask_alu_tb__DOT__run_test__141__in_b = 2U;
    __Vtask_alu_tb__DOT__run_test__141__in_a = 2U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__141__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__141__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__141__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__141__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__141__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__141__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__141__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__141__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__141__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__141__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__142__instr_name = 
        std::string{"BLTU_LESS"};
    __Vtask_alu_tb__DOT__run_test__142__expected = 1U;
    __Vtask_alu_tb__DOT__run_test__142__op = 9U;
    __Vtask_alu_tb__DOT__run_test__142__in_b = 2U;
    __Vtask_alu_tb__DOT__run_test__142__in_a = 1U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__142__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__142__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__142__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__142__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__142__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__142__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__142__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__142__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__142__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__142__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__143__instr_name = 
        std::string{"BLTU_UNSIGNED_MAX"};
    __Vtask_alu_tb__DOT__run_test__143__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__143__op = 9U;
    __Vtask_alu_tb__DOT__run_test__143__in_b = 1U;
    __Vtask_alu_tb__DOT__run_test__143__in_a = 0xffffffffU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__143__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__143__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__143__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__143__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__143__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__143__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__143__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__143__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__143__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__143__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__144__instr_name = 
        std::string{"BLTU_SIGN_BIT"};
    __Vtask_alu_tb__DOT__run_test__144__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__144__op = 9U;
    __Vtask_alu_tb__DOT__run_test__144__in_b = 0x7fffffffU;
    __Vtask_alu_tb__DOT__run_test__144__in_a = 0x80000000U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__144__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__144__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__144__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__144__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__144__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__144__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__144__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__144__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__144__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__144__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__145__instr_name = 
        std::string{"BGEU_GREATER"};
    __Vtask_alu_tb__DOT__run_test__145__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__145__op = 9U;
    __Vtask_alu_tb__DOT__run_test__145__in_b = 1U;
    __Vtask_alu_tb__DOT__run_test__145__in_a = 2U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__145__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__145__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__145__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__145__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__145__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__145__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__145__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__145__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__145__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__145__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__146__instr_name = 
        std::string{"BGEU_UNSIGNED_MAX"};
    __Vtask_alu_tb__DOT__run_test__146__expected = 1U;
    __Vtask_alu_tb__DOT__run_test__146__op = 9U;
    __Vtask_alu_tb__DOT__run_test__146__in_b = 0xffffffffU;
    __Vtask_alu_tb__DOT__run_test__146__in_a = 1U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__146__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__146__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__146__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__146__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__146__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__146__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__146__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__146__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__146__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__146__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__147__instr_name = 
        std::string{"BGEU_EQUAL"};
    __Vtask_alu_tb__DOT__run_test__147__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__147__op = 9U;
    __Vtask_alu_tb__DOT__run_test__147__in_b = 1U;
    __Vtask_alu_tb__DOT__run_test__147__in_a = 1U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__147__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__147__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__147__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__147__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__147__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__147__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__147__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__147__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__147__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__147__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    VL_WRITEF_NX("\n----------- JAL -----------\n",0);
    __Vtask_alu_tb__DOT__run_test__148__instr_name = 
        std::string{"JAL_PASS_PC"};
    __Vtask_alu_tb__DOT__run_test__148__expected = 0x1000U;
    __Vtask_alu_tb__DOT__run_test__148__op = 0U;
    __Vtask_alu_tb__DOT__run_test__148__in_b = 0U;
    __Vtask_alu_tb__DOT__run_test__148__in_a = 0x1000U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__148__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__148__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__148__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__148__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__148__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__148__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__148__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__148__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__148__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__148__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__149__instr_name = 
        std::string{"JAL_MAX_PC"};
    __Vtask_alu_tb__DOT__run_test__149__expected = 0xfffffffcU;
    __Vtask_alu_tb__DOT__run_test__149__op = 0U;
    __Vtask_alu_tb__DOT__run_test__149__in_b = 0U;
    __Vtask_alu_tb__DOT__run_test__149__in_a = 0xfffffffcU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__149__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__149__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__149__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__149__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__149__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__149__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__149__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__149__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__149__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__149__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    VL_WRITEF_NX("\n----------- JALR -----------\n",0);
    __Vtask_alu_tb__DOT__run_test__150__instr_name = 
        std::string{"JALR_ALIGNED"};
    __Vtask_alu_tb__DOT__run_test__150__expected = 0x1000U;
    __Vtask_alu_tb__DOT__run_test__150__op = 0xaU;
    __Vtask_alu_tb__DOT__run_test__150__in_b = 0U;
    __Vtask_alu_tb__DOT__run_test__150__in_a = 0x1000U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__150__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__150__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__150__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__150__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__150__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__150__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__150__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__150__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__150__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__150__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__151__instr_name = 
        std::string{"JALR_UNALIGNED_IN"};
    __Vtask_alu_tb__DOT__run_test__151__expected = 0x1000U;
    __Vtask_alu_tb__DOT__run_test__151__op = 0xaU;
    __Vtask_alu_tb__DOT__run_test__151__in_b = 0U;
    __Vtask_alu_tb__DOT__run_test__151__in_a = 0x1001U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__151__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__151__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__151__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__151__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__151__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__151__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__151__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__151__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__151__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__151__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__152__instr_name = 
        std::string{"JALR_POS_OFFSET"};
    __Vtask_alu_tb__DOT__run_test__152__expected = 0x1004U;
    __Vtask_alu_tb__DOT__run_test__152__op = 0xaU;
    __Vtask_alu_tb__DOT__run_test__152__in_b = 4U;
    __Vtask_alu_tb__DOT__run_test__152__in_a = 0x1000U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__152__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__152__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__152__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__152__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__152__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__152__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__152__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__152__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__152__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__152__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__153__instr_name = 
        std::string{"JALR_NEG_OFFSET"};
    __Vtask_alu_tb__DOT__run_test__153__expected = 0xffcU;
    __Vtask_alu_tb__DOT__run_test__153__op = 0xaU;
    __Vtask_alu_tb__DOT__run_test__153__in_b = 0xfffffffcU;
    __Vtask_alu_tb__DOT__run_test__153__in_a = 0x1000U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__153__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__153__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__153__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__153__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__153__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__153__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__153__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__153__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__153__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__153__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__154__instr_name = 
        std::string{"JALR_MAX_ALIGNED"};
    __Vtask_alu_tb__DOT__run_test__154__expected = 0xfffffffeU;
    __Vtask_alu_tb__DOT__run_test__154__op = 0xaU;
    __Vtask_alu_tb__DOT__run_test__154__in_b = 0U;
    __Vtask_alu_tb__DOT__run_test__154__in_a = 0xfffffffeU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__154__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__154__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__154__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__154__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__154__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__154__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__154__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__154__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__154__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__154__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__155__instr_name = 
        std::string{"JALR_MAX_UNALIGNED"};
    __Vtask_alu_tb__DOT__run_test__155__expected = 0xfffffffeU;
    __Vtask_alu_tb__DOT__run_test__155__op = 0xaU;
    __Vtask_alu_tb__DOT__run_test__155__in_b = 0U;
    __Vtask_alu_tb__DOT__run_test__155__in_a = 0xffffffffU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__155__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__155__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__155__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__155__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__155__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__155__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__155__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__155__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__155__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__155__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__156__instr_name = 
        std::string{"JALR_NEG_MAX_OFFSET"};
    __Vtask_alu_tb__DOT__run_test__156__expected = 0xfffffffeU;
    __Vtask_alu_tb__DOT__run_test__156__op = 0xaU;
    __Vtask_alu_tb__DOT__run_test__156__in_b = 0xfffffffeU;
    __Vtask_alu_tb__DOT__run_test__156__in_a = 0U;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__156__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__156__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__156__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__156__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__156__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__156__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__156__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__156__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__156__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__156__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__157__instr_name = 
        std::string{"JALR_OVERFLOW"};
    __Vtask_alu_tb__DOT__run_test__157__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__157__op = 0xaU;
    __Vtask_alu_tb__DOT__run_test__157__in_b = 1U;
    __Vtask_alu_tb__DOT__run_test__157__in_a = 0xffffffffU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__157__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__157__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__157__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__157__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__157__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__157__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__157__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__157__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__157__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__157__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    __Vtask_alu_tb__DOT__run_test__158__instr_name = 
        std::string{"JALR_POS_TO_NEG"};
    __Vtask_alu_tb__DOT__run_test__158__expected = 0x80000000U;
    __Vtask_alu_tb__DOT__run_test__158__op = 0xaU;
    __Vtask_alu_tb__DOT__run_test__158__in_b = 1U;
    __Vtask_alu_tb__DOT__run_test__158__in_a = 0x7fffffffU;
    vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero 
        = (0U == __Vtask_alu_tb__DOT__run_test__158__expected);
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__158__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__158__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__158__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_tb__DOT__test_num = ((IData)(1U) 
                                       + vlSelfRef.alu_tb__DOT__test_num);
    if (VL_LIKELY((((vlSelfRef.alu_tb__DOT__result 
                     != __Vtask_alu_tb__DOT__run_test__158__expected) 
                    | ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                       != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero)))))) {
        if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__result 
                          != __Vtask_alu_tb__DOT__run_test__158__expected)))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x expected=32'h%08x zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         32,__Vtask_alu_tb__DOT__run_test__158__expected,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         -1,&(__Vtask_alu_tb__DOT__run_test__158__instr_name));
        } else if (VL_UNLIKELY((((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)) 
                                 != (IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero))))) {
            VL_WRITEF_NX("%02d \342\235\214FAILED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b expected_zero=%0b %@\n",0,
                         32,vlSelfRef.alu_tb__DOT__test_num,
                         32,vlSelfRef.alu_tb__DOT__a,
                         32,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                         32,vlSelfRef.alu_tb__DOT__result,
                         1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                         1,(IData)(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero),
                         -1,&(__Vtask_alu_tb__DOT__run_test__158__instr_name));
        }
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("%02d \342\234\205PASSED a=32'h%08x b=32'h%08x ALUControl=4'b%04b result=32'h%08x zero=%0b %@\n",0,
                     32,vlSelfRef.alu_tb__DOT__test_num,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)),
                     -1,&(__Vtask_alu_tb__DOT__run_test__158__instr_name));
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    }
    VL_WRITEF_NX("\n===== ALU Testing Finished =====\n\n===== Test Statistics =====\nTotal Tests:  %0d\n\342\234\205 Tests Passed: %0d (%0.1f%%)\n\342\235\214 Tests Failed: %0d (%0.1f%%)\n===========================\n\n",0,
                 32,vlSelfRef.alu_tb__DOT__test_num,
                 32,vlSelfRef.alu_tb__DOT__pass_count,
                 64,((100.0 * VL_ISTOR_D_I(32, vlSelfRef.alu_tb__DOT__pass_count)) 
                     / VL_ISTOR_D_I(32, vlSelfRef.alu_tb__DOT__test_num)),
                 32,vlSelfRef.alu_tb__DOT__fail_count,
                 64,((100.0 * VL_ISTOR_D_I(32, vlSelfRef.alu_tb__DOT__fail_count)) 
                     / VL_ISTOR_D_I(32, vlSelfRef.alu_tb__DOT__test_num)));
    VL_FINISH_MT("../../01_bench/alu_tb.sv", 387, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}
