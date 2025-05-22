// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_tb.h for the primary calling header

#include "Valu_tb__pch.h"
#include "Valu_tb___024root.h"

VlCoroutine Valu_tb___024root___eval_initial__TOP__Vtiming__0(Valu_tb___024root* vlSelf);

void Valu_tb___024root___eval_initial(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_initial\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Valu_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

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
    CData/*2:0*/ __Vtask_alu_tb__DOT__run_test__1__op;
    __Vtask_alu_tb__DOT__run_test__1__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__1__expected;
    __Vtask_alu_tb__DOT__run_test__1__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__1__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__2__in_a;
    __Vtask_alu_tb__DOT__run_test__2__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__2__in_b;
    __Vtask_alu_tb__DOT__run_test__2__in_b = 0;
    CData/*2:0*/ __Vtask_alu_tb__DOT__run_test__2__op;
    __Vtask_alu_tb__DOT__run_test__2__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__2__expected;
    __Vtask_alu_tb__DOT__run_test__2__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__2__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__3__in_a;
    __Vtask_alu_tb__DOT__run_test__3__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__3__in_b;
    __Vtask_alu_tb__DOT__run_test__3__in_b = 0;
    CData/*2:0*/ __Vtask_alu_tb__DOT__run_test__3__op;
    __Vtask_alu_tb__DOT__run_test__3__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__3__expected;
    __Vtask_alu_tb__DOT__run_test__3__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__3__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__4__in_a;
    __Vtask_alu_tb__DOT__run_test__4__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__4__in_b;
    __Vtask_alu_tb__DOT__run_test__4__in_b = 0;
    CData/*2:0*/ __Vtask_alu_tb__DOT__run_test__4__op;
    __Vtask_alu_tb__DOT__run_test__4__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__4__expected;
    __Vtask_alu_tb__DOT__run_test__4__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__4__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__5__in_a;
    __Vtask_alu_tb__DOT__run_test__5__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__5__in_b;
    __Vtask_alu_tb__DOT__run_test__5__in_b = 0;
    CData/*2:0*/ __Vtask_alu_tb__DOT__run_test__5__op;
    __Vtask_alu_tb__DOT__run_test__5__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__5__expected;
    __Vtask_alu_tb__DOT__run_test__5__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__5__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__6__in_a;
    __Vtask_alu_tb__DOT__run_test__6__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__6__in_b;
    __Vtask_alu_tb__DOT__run_test__6__in_b = 0;
    CData/*2:0*/ __Vtask_alu_tb__DOT__run_test__6__op;
    __Vtask_alu_tb__DOT__run_test__6__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__6__expected;
    __Vtask_alu_tb__DOT__run_test__6__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__6__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__7__in_a;
    __Vtask_alu_tb__DOT__run_test__7__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__7__in_b;
    __Vtask_alu_tb__DOT__run_test__7__in_b = 0;
    CData/*2:0*/ __Vtask_alu_tb__DOT__run_test__7__op;
    __Vtask_alu_tb__DOT__run_test__7__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__7__expected;
    __Vtask_alu_tb__DOT__run_test__7__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__7__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__8__in_a;
    __Vtask_alu_tb__DOT__run_test__8__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__8__in_b;
    __Vtask_alu_tb__DOT__run_test__8__in_b = 0;
    CData/*2:0*/ __Vtask_alu_tb__DOT__run_test__8__op;
    __Vtask_alu_tb__DOT__run_test__8__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__8__expected;
    __Vtask_alu_tb__DOT__run_test__8__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__8__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__9__in_a;
    __Vtask_alu_tb__DOT__run_test__9__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__9__in_b;
    __Vtask_alu_tb__DOT__run_test__9__in_b = 0;
    CData/*2:0*/ __Vtask_alu_tb__DOT__run_test__9__op;
    __Vtask_alu_tb__DOT__run_test__9__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__9__expected;
    __Vtask_alu_tb__DOT__run_test__9__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__9__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__10__in_a;
    __Vtask_alu_tb__DOT__run_test__10__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__10__in_b;
    __Vtask_alu_tb__DOT__run_test__10__in_b = 0;
    CData/*2:0*/ __Vtask_alu_tb__DOT__run_test__10__op;
    __Vtask_alu_tb__DOT__run_test__10__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__10__expected;
    __Vtask_alu_tb__DOT__run_test__10__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__10__instr_name;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__11__in_a;
    __Vtask_alu_tb__DOT__run_test__11__in_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__11__in_b;
    __Vtask_alu_tb__DOT__run_test__11__in_b = 0;
    CData/*2:0*/ __Vtask_alu_tb__DOT__run_test__11__op;
    __Vtask_alu_tb__DOT__run_test__11__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__11__expected;
    __Vtask_alu_tb__DOT__run_test__11__expected = 0;
    std::string __Vtask_alu_tb__DOT__run_test__11__instr_name;
    // Body
    VL_WRITEF_NX("===== ALU Instruction Tests =====\n",0);
    __Vtask_alu_tb__DOT__run_test__0__instr_name = 
        std::string{"ADD"};
    __Vtask_alu_tb__DOT__run_test__0__expected = 0xfU;
    vlSelfRef.alu_tb__DOT__a = 0xaU;
    vlSelfRef.alu_tb__DOT__b = 5U;
    vlSelfRef.alu_tb__DOT__ALUControl = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         23);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.alu_tb__DOT__result != __Vtask_alu_tb__DOT__run_test__0__expected)) {
        VL_WRITEF_NX("\342\235\214 %@ FAILED: a=%x, b=%x, ALUControl=%b => result=%x (expected %x)\n",0,
                     -1,&(__Vtask_alu_tb__DOT__run_test__0__instr_name),
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,3,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     32,__Vtask_alu_tb__DOT__run_test__0__expected);
    } else {
        VL_WRITEF_NX("\342\234\205 %@ PASSED: a=%x, b=%x, ALUControl=%b => result=%x\n",0,
                     -1,&(__Vtask_alu_tb__DOT__run_test__0__instr_name),
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,3,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result);
    }
    __Vtask_alu_tb__DOT__run_test__1__instr_name = 
        std::string{"ADDI"};
    __Vtask_alu_tb__DOT__run_test__1__expected = 0x20U;
    __Vtask_alu_tb__DOT__run_test__1__op = 0U;
    __Vtask_alu_tb__DOT__run_test__1__in_b = 0xcU;
    __Vtask_alu_tb__DOT__run_test__1__in_a = 0x14U;
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__1__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__1__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__1__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         23);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.alu_tb__DOT__result != __Vtask_alu_tb__DOT__run_test__1__expected)) {
        VL_WRITEF_NX("\342\235\214 %@ FAILED: a=%x, b=%x, ALUControl=%b => result=%x (expected %x)\n",0,
                     -1,&(__Vtask_alu_tb__DOT__run_test__1__instr_name),
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,3,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     32,__Vtask_alu_tb__DOT__run_test__1__expected);
    } else {
        VL_WRITEF_NX("\342\234\205 %@ PASSED: a=%x, b=%x, ALUControl=%b => result=%x\n",0,
                     -1,&(__Vtask_alu_tb__DOT__run_test__1__instr_name),
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,3,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result);
    }
    __Vtask_alu_tb__DOT__run_test__2__instr_name = 
        std::string{"SUB"};
    __Vtask_alu_tb__DOT__run_test__2__expected = 7U;
    __Vtask_alu_tb__DOT__run_test__2__op = 1U;
    __Vtask_alu_tb__DOT__run_test__2__in_b = 3U;
    __Vtask_alu_tb__DOT__run_test__2__in_a = 0xaU;
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__2__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__2__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__2__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         23);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.alu_tb__DOT__result != __Vtask_alu_tb__DOT__run_test__2__expected)) {
        VL_WRITEF_NX("\342\235\214 %@ FAILED: a=%x, b=%x, ALUControl=%b => result=%x (expected %x)\n",0,
                     -1,&(__Vtask_alu_tb__DOT__run_test__2__instr_name),
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,3,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     32,__Vtask_alu_tb__DOT__run_test__2__expected);
    } else {
        VL_WRITEF_NX("\342\234\205 %@ PASSED: a=%x, b=%x, ALUControl=%b => result=%x\n",0,
                     -1,&(__Vtask_alu_tb__DOT__run_test__2__instr_name),
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,3,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result);
    }
    __Vtask_alu_tb__DOT__run_test__3__instr_name = 
        std::string{"AND"};
    __Vtask_alu_tb__DOT__run_test__3__expected = 0xf000f00U;
    __Vtask_alu_tb__DOT__run_test__3__op = 2U;
    __Vtask_alu_tb__DOT__run_test__3__in_b = 0xf0f0f0fU;
    __Vtask_alu_tb__DOT__run_test__3__in_a = 0xff00ff00U;
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__3__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__3__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__3__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         23);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.alu_tb__DOT__result != __Vtask_alu_tb__DOT__run_test__3__expected)) {
        VL_WRITEF_NX("\342\235\214 %@ FAILED: a=%x, b=%x, ALUControl=%b => result=%x (expected %x)\n",0,
                     -1,&(__Vtask_alu_tb__DOT__run_test__3__instr_name),
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,3,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     32,__Vtask_alu_tb__DOT__run_test__3__expected);
    } else {
        VL_WRITEF_NX("\342\234\205 %@ PASSED: a=%x, b=%x, ALUControl=%b => result=%x\n",0,
                     -1,&(__Vtask_alu_tb__DOT__run_test__3__instr_name),
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,3,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result);
    }
    __Vtask_alu_tb__DOT__run_test__4__instr_name = 
        std::string{"ANDI"};
    __Vtask_alu_tb__DOT__run_test__4__expected = 0xf0U;
    __Vtask_alu_tb__DOT__run_test__4__op = 2U;
    __Vtask_alu_tb__DOT__run_test__4__in_b = 0xf0U;
    __Vtask_alu_tb__DOT__run_test__4__in_a = 0xffU;
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__4__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__4__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__4__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         23);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.alu_tb__DOT__result != __Vtask_alu_tb__DOT__run_test__4__expected)) {
        VL_WRITEF_NX("\342\235\214 %@ FAILED: a=%x, b=%x, ALUControl=%b => result=%x (expected %x)\n",0,
                     -1,&(__Vtask_alu_tb__DOT__run_test__4__instr_name),
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,3,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     32,__Vtask_alu_tb__DOT__run_test__4__expected);
    } else {
        VL_WRITEF_NX("\342\234\205 %@ PASSED: a=%x, b=%x, ALUControl=%b => result=%x\n",0,
                     -1,&(__Vtask_alu_tb__DOT__run_test__4__instr_name),
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,3,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result);
    }
    __Vtask_alu_tb__DOT__run_test__5__instr_name = 
        std::string{"OR"};
    __Vtask_alu_tb__DOT__run_test__5__expected = 0xff000000U;
    __Vtask_alu_tb__DOT__run_test__5__op = 3U;
    __Vtask_alu_tb__DOT__run_test__5__in_b = 0xf000000U;
    __Vtask_alu_tb__DOT__run_test__5__in_a = 0xf0000000U;
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__5__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__5__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__5__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         23);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.alu_tb__DOT__result != __Vtask_alu_tb__DOT__run_test__5__expected)) {
        VL_WRITEF_NX("\342\235\214 %@ FAILED: a=%x, b=%x, ALUControl=%b => result=%x (expected %x)\n",0,
                     -1,&(__Vtask_alu_tb__DOT__run_test__5__instr_name),
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,3,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     32,__Vtask_alu_tb__DOT__run_test__5__expected);
    } else {
        VL_WRITEF_NX("\342\234\205 %@ PASSED: a=%x, b=%x, ALUControl=%b => result=%x\n",0,
                     -1,&(__Vtask_alu_tb__DOT__run_test__5__instr_name),
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,3,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result);
    }
    __Vtask_alu_tb__DOT__run_test__6__instr_name = 
        std::string{"ORI"};
    __Vtask_alu_tb__DOT__run_test__6__expected = 0xffU;
    __Vtask_alu_tb__DOT__run_test__6__op = 3U;
    __Vtask_alu_tb__DOT__run_test__6__in_b = 0xf0U;
    __Vtask_alu_tb__DOT__run_test__6__in_a = 0xfU;
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__6__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__6__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__6__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         23);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.alu_tb__DOT__result != __Vtask_alu_tb__DOT__run_test__6__expected)) {
        VL_WRITEF_NX("\342\235\214 %@ FAILED: a=%x, b=%x, ALUControl=%b => result=%x (expected %x)\n",0,
                     -1,&(__Vtask_alu_tb__DOT__run_test__6__instr_name),
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,3,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     32,__Vtask_alu_tb__DOT__run_test__6__expected);
    } else {
        VL_WRITEF_NX("\342\234\205 %@ PASSED: a=%x, b=%x, ALUControl=%b => result=%x\n",0,
                     -1,&(__Vtask_alu_tb__DOT__run_test__6__instr_name),
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,3,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result);
    }
    __Vtask_alu_tb__DOT__run_test__7__instr_name = 
        std::string{"SLT"};
    __Vtask_alu_tb__DOT__run_test__7__expected = 1U;
    __Vtask_alu_tb__DOT__run_test__7__op = 5U;
    __Vtask_alu_tb__DOT__run_test__7__in_b = 4U;
    __Vtask_alu_tb__DOT__run_test__7__in_a = 3U;
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__7__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__7__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__7__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         23);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.alu_tb__DOT__result != __Vtask_alu_tb__DOT__run_test__7__expected)) {
        VL_WRITEF_NX("\342\235\214 %@ FAILED: a=%x, b=%x, ALUControl=%b => result=%x (expected %x)\n",0,
                     -1,&(__Vtask_alu_tb__DOT__run_test__7__instr_name),
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,3,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     32,__Vtask_alu_tb__DOT__run_test__7__expected);
    } else {
        VL_WRITEF_NX("\342\234\205 %@ PASSED: a=%x, b=%x, ALUControl=%b => result=%x\n",0,
                     -1,&(__Vtask_alu_tb__DOT__run_test__7__instr_name),
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,3,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result);
    }
    __Vtask_alu_tb__DOT__run_test__8__instr_name = 
        std::string{"SLT"};
    __Vtask_alu_tb__DOT__run_test__8__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__8__op = 5U;
    __Vtask_alu_tb__DOT__run_test__8__in_b = 2U;
    __Vtask_alu_tb__DOT__run_test__8__in_a = 0xaU;
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__8__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__8__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__8__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         23);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.alu_tb__DOT__result != __Vtask_alu_tb__DOT__run_test__8__expected)) {
        VL_WRITEF_NX("\342\235\214 %@ FAILED: a=%x, b=%x, ALUControl=%b => result=%x (expected %x)\n",0,
                     -1,&(__Vtask_alu_tb__DOT__run_test__8__instr_name),
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,3,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     32,__Vtask_alu_tb__DOT__run_test__8__expected);
    } else {
        VL_WRITEF_NX("\342\234\205 %@ PASSED: a=%x, b=%x, ALUControl=%b => result=%x\n",0,
                     -1,&(__Vtask_alu_tb__DOT__run_test__8__instr_name),
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,3,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result);
    }
    __Vtask_alu_tb__DOT__run_test__9__instr_name = 
        std::string{"SLTI"};
    __Vtask_alu_tb__DOT__run_test__9__expected = 1U;
    __Vtask_alu_tb__DOT__run_test__9__op = 5U;
    __Vtask_alu_tb__DOT__run_test__9__in_b = 8U;
    __Vtask_alu_tb__DOT__run_test__9__in_a = 7U;
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__9__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__9__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__9__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         23);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.alu_tb__DOT__result != __Vtask_alu_tb__DOT__run_test__9__expected)) {
        VL_WRITEF_NX("\342\235\214 %@ FAILED: a=%x, b=%x, ALUControl=%b => result=%x (expected %x)\n",0,
                     -1,&(__Vtask_alu_tb__DOT__run_test__9__instr_name),
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,3,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     32,__Vtask_alu_tb__DOT__run_test__9__expected);
    } else {
        VL_WRITEF_NX("\342\234\205 %@ PASSED: a=%x, b=%x, ALUControl=%b => result=%x\n",0,
                     -1,&(__Vtask_alu_tb__DOT__run_test__9__instr_name),
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,3,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result);
    }
    __Vtask_alu_tb__DOT__run_test__10__instr_name = 
        std::string{"SLTI"};
    __Vtask_alu_tb__DOT__run_test__10__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__10__op = 5U;
    __Vtask_alu_tb__DOT__run_test__10__in_b = 3U;
    __Vtask_alu_tb__DOT__run_test__10__in_a = 9U;
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__10__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__10__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__10__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         23);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.alu_tb__DOT__result != __Vtask_alu_tb__DOT__run_test__10__expected)) {
        VL_WRITEF_NX("\342\235\214 %@ FAILED: a=%x, b=%x, ALUControl=%b => result=%x (expected %x)\n",0,
                     -1,&(__Vtask_alu_tb__DOT__run_test__10__instr_name),
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,3,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     32,__Vtask_alu_tb__DOT__run_test__10__expected);
    } else {
        VL_WRITEF_NX("\342\234\205 %@ PASSED: a=%x, b=%x, ALUControl=%b => result=%x\n",0,
                     -1,&(__Vtask_alu_tb__DOT__run_test__10__instr_name),
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,3,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result);
    }
    vlSelfRef.alu_tb__DOT__a = 0x2aU;
    vlSelfRef.alu_tb__DOT__b = 0x2aU;
    vlSelfRef.alu_tb__DOT__ALUControl = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         63);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result))) {
        VL_WRITEF_NX("\342\234\205 BEQ PASS\n",0);
    } else {
        VL_WRITEF_NX("\342\235\214 BEQ FAIL: expected zero=1, got %b\n",0,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)));
    }
    vlSelfRef.alu_tb__DOT__a = 0x2aU;
    vlSelfRef.alu_tb__DOT__b = 0x2bU;
    vlSelfRef.alu_tb__DOT__ALUControl = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         67);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result))) {
        VL_WRITEF_NX("\342\235\214 BEQ FAIL: expected zero=0, got %b\n",0,
                     1,(0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result)));
    } else {
        VL_WRITEF_NX("\342\234\205 BEQ PASS\n",0);
    }
    __Vtask_alu_tb__DOT__run_test__11__instr_name = 
        std::string{"LW/SW"};
    __Vtask_alu_tb__DOT__run_test__11__expected = 0x3fcU;
    __Vtask_alu_tb__DOT__run_test__11__op = 0U;
    __Vtask_alu_tb__DOT__run_test__11__in_b = 0x14U;
    __Vtask_alu_tb__DOT__run_test__11__in_a = 0x3e8U;
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__11__in_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__11__in_b;
    vlSelfRef.alu_tb__DOT__ALUControl = __Vtask_alu_tb__DOT__run_test__11__op;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "../../01_bench/alu_tb.sv", 
                                         23);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.alu_tb__DOT__result != __Vtask_alu_tb__DOT__run_test__11__expected)) {
        VL_WRITEF_NX("\342\235\214 %@ FAILED: a=%x, b=%x, ALUControl=%b => result=%x (expected %x)\n",0,
                     -1,&(__Vtask_alu_tb__DOT__run_test__11__instr_name),
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,3,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result,
                     32,__Vtask_alu_tb__DOT__run_test__11__expected);
    } else {
        VL_WRITEF_NX("\342\234\205 %@ PASSED: a=%x, b=%x, ALUControl=%b => result=%x\n",0,
                     -1,&(__Vtask_alu_tb__DOT__run_test__11__instr_name),
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,3,(IData)(vlSelfRef.alu_tb__DOT__ALUControl),
                     32,vlSelfRef.alu_tb__DOT__result);
    }
    VL_WRITEF_NX("===== ALU Testing Finished =====\n",0);
    VL_FINISH_MT("../../01_bench/alu_tb.sv", 75, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

void Valu_tb___024root___act_sequent__TOP__0(Valu_tb___024root* vlSelf);

void Valu_tb___024root___eval_act(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_act\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Valu_tb___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Valu_tb___024root___act_sequent__TOP__0(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___act_sequent__TOP__0\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.alu_tb__DOT__dut__DOT____Vcellout__and1__y 
        = (vlSelfRef.alu_tb__DOT__a & vlSelfRef.alu_tb__DOT__b);
    vlSelfRef.alu_tb__DOT__dut__DOT____Vcellout__or1__y 
        = (vlSelfRef.alu_tb__DOT__a | vlSelfRef.alu_tb__DOT__b);
    vlSelfRef.alu_tb__DOT__dut__DOT__src_b = ((1U & (IData)(vlSelfRef.alu_tb__DOT__ALUControl))
                                               ? (~ vlSelfRef.alu_tb__DOT__b)
                                               : vlSelfRef.alu_tb__DOT__b);
    vlSelfRef.alu_tb__DOT__dut__DOT__entry[2U] = vlSelfRef.alu_tb__DOT__dut__DOT____Vcellout__and1__y;
    vlSelfRef.alu_tb__DOT__dut__DOT__entry[3U] = vlSelfRef.alu_tb__DOT__dut__DOT____Vcellout__or1__y;
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a32__b 
        = (1U & ((vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                  >> 0x1fU) ^ (IData)(vlSelfRef.alu_tb__DOT__ALUControl)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a31__b 
        = (1U & ((vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                  >> 0x1eU) ^ (IData)(vlSelfRef.alu_tb__DOT__ALUControl)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a30__b 
        = (1U & ((vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                  >> 0x1dU) ^ (IData)(vlSelfRef.alu_tb__DOT__ALUControl)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a29__b 
        = (1U & ((vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                  >> 0x1cU) ^ (IData)(vlSelfRef.alu_tb__DOT__ALUControl)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a28__b 
        = (1U & ((vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                  >> 0x1bU) ^ (IData)(vlSelfRef.alu_tb__DOT__ALUControl)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a27__b 
        = (1U & ((vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                  >> 0x1aU) ^ (IData)(vlSelfRef.alu_tb__DOT__ALUControl)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a26__b 
        = (1U & ((vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                  >> 0x19U) ^ (IData)(vlSelfRef.alu_tb__DOT__ALUControl)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a25__b 
        = (1U & ((vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                  >> 0x18U) ^ (IData)(vlSelfRef.alu_tb__DOT__ALUControl)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a24__b 
        = (1U & ((vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                  >> 0x17U) ^ (IData)(vlSelfRef.alu_tb__DOT__ALUControl)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a23__b 
        = (1U & ((vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                  >> 0x16U) ^ (IData)(vlSelfRef.alu_tb__DOT__ALUControl)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a22__b 
        = (1U & ((vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                  >> 0x15U) ^ (IData)(vlSelfRef.alu_tb__DOT__ALUControl)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a21__b 
        = (1U & ((vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                  >> 0x14U) ^ (IData)(vlSelfRef.alu_tb__DOT__ALUControl)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a20__b 
        = (1U & ((vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                  >> 0x13U) ^ (IData)(vlSelfRef.alu_tb__DOT__ALUControl)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a19__b 
        = (1U & ((vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                  >> 0x12U) ^ (IData)(vlSelfRef.alu_tb__DOT__ALUControl)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a18__b 
        = (1U & ((vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                  >> 0x11U) ^ (IData)(vlSelfRef.alu_tb__DOT__ALUControl)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a17__b 
        = (1U & ((vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                  >> 0x10U) ^ (IData)(vlSelfRef.alu_tb__DOT__ALUControl)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a16__b 
        = (1U & ((vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                  >> 0xfU) ^ (IData)(vlSelfRef.alu_tb__DOT__ALUControl)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a15__b 
        = (1U & ((vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                  >> 0xeU) ^ (IData)(vlSelfRef.alu_tb__DOT__ALUControl)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a14__b 
        = (1U & ((vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                  >> 0xdU) ^ (IData)(vlSelfRef.alu_tb__DOT__ALUControl)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a13__b 
        = (1U & ((vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                  >> 0xcU) ^ (IData)(vlSelfRef.alu_tb__DOT__ALUControl)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a12__b 
        = (1U & ((vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                  >> 0xbU) ^ (IData)(vlSelfRef.alu_tb__DOT__ALUControl)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a11__b 
        = (1U & ((vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                  >> 0xaU) ^ (IData)(vlSelfRef.alu_tb__DOT__ALUControl)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a10__b 
        = (1U & ((vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                  >> 9U) ^ (IData)(vlSelfRef.alu_tb__DOT__ALUControl)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a9__b 
        = (1U & ((vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                  >> 8U) ^ (IData)(vlSelfRef.alu_tb__DOT__ALUControl)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a8__b 
        = (1U & ((vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                  >> 7U) ^ (IData)(vlSelfRef.alu_tb__DOT__ALUControl)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a7__b 
        = (1U & ((vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                  >> 6U) ^ (IData)(vlSelfRef.alu_tb__DOT__ALUControl)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a6__b 
        = (1U & ((vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                  >> 5U) ^ (IData)(vlSelfRef.alu_tb__DOT__ALUControl)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a5__b 
        = (1U & ((vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                  >> 4U) ^ (IData)(vlSelfRef.alu_tb__DOT__ALUControl)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a4__b 
        = (1U & ((vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                  >> 3U) ^ (IData)(vlSelfRef.alu_tb__DOT__ALUControl)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a3__b 
        = (1U & ((vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                  >> 2U) ^ (IData)(vlSelfRef.alu_tb__DOT__ALUControl)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a2__b 
        = (1U & ((vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                  >> 1U) ^ (IData)(vlSelfRef.alu_tb__DOT__ALUControl)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a1__b 
        = (1U & (vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                 ^ (IData)(vlSelfRef.alu_tb__DOT__ALUControl)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0 
        = ((vlSelfRef.alu_tb__DOT__a >> 0x1fU) ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a32__b));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a >> 0x1eU) 
                 ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a31__b)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a >> 0x1dU) 
                 ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a30__b)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a >> 0x1cU) 
                 ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a29__b)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a >> 0x1bU) 
                 ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a28__b)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a >> 0x1aU) 
                 ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a27__b)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a >> 0x19U) 
                 ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a26__b)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a >> 0x18U) 
                 ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a25__b)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a >> 0x17U) 
                 ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a24__b)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a >> 0x16U) 
                 ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a23__b)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a >> 0x15U) 
                 ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a22__b)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a >> 0x14U) 
                 ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a21__b)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a >> 0x13U) 
                 ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a20__b)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a >> 0x12U) 
                 ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a19__b)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a >> 0x11U) 
                 ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a18__b)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a >> 0x10U) 
                 ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a17__b)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a >> 0xfU) 
                 ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a16__b)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a >> 0xeU) 
                 ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a15__b)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a >> 0xdU) 
                 ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a14__b)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a >> 0xcU) 
                 ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a13__b)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a >> 0xbU) 
                 ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a12__b)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a >> 0xaU) 
                 ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a11__b)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a >> 9U) ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a10__b)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a >> 8U) ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a9__b)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a >> 7U) ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a8__b)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a >> 6U) ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a7__b)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a >> 5U) ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a6__b)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a >> 4U) ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a5__b)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a >> 3U) ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a4__b)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a >> 2U) ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a3__b)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a >> 1U) ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a2__b)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a1__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & (vlSelfRef.alu_tb__DOT__a ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a1__b)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__carry__BRA__0__KET__ 
        = ((vlSelfRef.alu_tb__DOT__a & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a1__b)) 
           | ((IData)(vlSelfRef.alu_tb__DOT__ALUControl) 
              & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a1__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a2__cout 
        = (((vlSelfRef.alu_tb__DOT__a >> 1U) & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a2__b)) 
           | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__carry__BRA__0__KET__) 
              & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a3__cout 
        = (((vlSelfRef.alu_tb__DOT__a >> 2U) & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a3__b)) 
           | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a2__cout) 
              & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a4__cout 
        = (((vlSelfRef.alu_tb__DOT__a >> 3U) & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a4__b)) 
           | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a3__cout) 
              & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a5__cout 
        = (((vlSelfRef.alu_tb__DOT__a >> 4U) & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a5__b)) 
           | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a4__cout) 
              & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a6__cout 
        = (((vlSelfRef.alu_tb__DOT__a >> 5U) & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a6__b)) 
           | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a5__cout) 
              & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a7__cout 
        = (((vlSelfRef.alu_tb__DOT__a >> 6U) & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a7__b)) 
           | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a6__cout) 
              & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a8__cout 
        = (((vlSelfRef.alu_tb__DOT__a >> 7U) & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a8__b)) 
           | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a7__cout) 
              & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a9__cout 
        = (((vlSelfRef.alu_tb__DOT__a >> 8U) & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a9__b)) 
           | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a8__cout) 
              & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a10__cout 
        = (((vlSelfRef.alu_tb__DOT__a >> 9U) & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a10__b)) 
           | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a9__cout) 
              & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a11__cout 
        = (((vlSelfRef.alu_tb__DOT__a >> 0xaU) & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a11__b)) 
           | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a10__cout) 
              & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a12__cout 
        = (((vlSelfRef.alu_tb__DOT__a >> 0xbU) & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a12__b)) 
           | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a11__cout) 
              & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a13__cout 
        = (((vlSelfRef.alu_tb__DOT__a >> 0xcU) & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a13__b)) 
           | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a12__cout) 
              & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a14__cout 
        = (((vlSelfRef.alu_tb__DOT__a >> 0xdU) & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a14__b)) 
           | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a13__cout) 
              & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a15__cout 
        = (((vlSelfRef.alu_tb__DOT__a >> 0xeU) & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a15__b)) 
           | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a14__cout) 
              & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a16__cout 
        = (((vlSelfRef.alu_tb__DOT__a >> 0xfU) & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a16__b)) 
           | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a15__cout) 
              & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a17__cout 
        = (((vlSelfRef.alu_tb__DOT__a >> 0x10U) & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a17__b)) 
           | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a16__cout) 
              & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a18__cout 
        = (((vlSelfRef.alu_tb__DOT__a >> 0x11U) & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a18__b)) 
           | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a17__cout) 
              & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a19__cout 
        = (((vlSelfRef.alu_tb__DOT__a >> 0x12U) & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a19__b)) 
           | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a18__cout) 
              & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a20__cout 
        = (((vlSelfRef.alu_tb__DOT__a >> 0x13U) & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a20__b)) 
           | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a19__cout) 
              & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a21__cout 
        = (((vlSelfRef.alu_tb__DOT__a >> 0x14U) & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a21__b)) 
           | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a20__cout) 
              & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a22__cout 
        = (((vlSelfRef.alu_tb__DOT__a >> 0x15U) & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a22__b)) 
           | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a21__cout) 
              & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a23__cout 
        = (((vlSelfRef.alu_tb__DOT__a >> 0x16U) & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a23__b)) 
           | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a22__cout) 
              & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a24__cout 
        = (((vlSelfRef.alu_tb__DOT__a >> 0x17U) & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a24__b)) 
           | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a23__cout) 
              & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a25__cout 
        = (((vlSelfRef.alu_tb__DOT__a >> 0x18U) & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a25__b)) 
           | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a24__cout) 
              & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a26__cout 
        = (((vlSelfRef.alu_tb__DOT__a >> 0x19U) & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a26__b)) 
           | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a25__cout) 
              & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a27__cout 
        = (((vlSelfRef.alu_tb__DOT__a >> 0x1aU) & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a27__b)) 
           | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a26__cout) 
              & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a28__cout 
        = (((vlSelfRef.alu_tb__DOT__a >> 0x1bU) & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a28__b)) 
           | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a27__cout) 
              & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a29__cout 
        = (((vlSelfRef.alu_tb__DOT__a >> 0x1cU) & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a29__b)) 
           | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a28__cout) 
              & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a30__cout 
        = (((vlSelfRef.alu_tb__DOT__a >> 0x1dU) & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a30__b)) 
           | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a29__cout) 
              & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a31__cout 
        = (((vlSelfRef.alu_tb__DOT__a >> 0x1eU) & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a31__b)) 
           | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a30__cout) 
              & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a32__sum 
        = ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0) 
           ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a31__cout));
    vlSelfRef.alu_tb__DOT__dut__DOT__sum = (((((((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a32__sum) 
                                                 << 0x1fU) 
                                                | (((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                    ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a30__cout)) 
                                                   << 0x1eU)) 
                                               | ((((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                    ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a29__cout)) 
                                                   << 0x1dU) 
                                                  | (((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                      ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a28__cout)) 
                                                     << 0x1cU))) 
                                              | (((((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                    ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a27__cout)) 
                                                   << 0x1bU) 
                                                  | (((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                      ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a26__cout)) 
                                                     << 0x1aU)) 
                                                 | ((((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                      ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a25__cout)) 
                                                     << 0x19U) 
                                                    | (((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                        ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a24__cout)) 
                                                       << 0x18U)))) 
                                             | ((((((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                    ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a23__cout)) 
                                                   << 0x17U) 
                                                  | (((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                      ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a22__cout)) 
                                                     << 0x16U)) 
                                                 | ((((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                      ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a21__cout)) 
                                                     << 0x15U) 
                                                    | (((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                        ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a20__cout)) 
                                                       << 0x14U))) 
                                                | (((((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                      ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a19__cout)) 
                                                     << 0x13U) 
                                                    | (((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                        ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a18__cout)) 
                                                       << 0x12U)) 
                                                   | ((((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                        ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a17__cout)) 
                                                       << 0x11U) 
                                                      | (((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                          ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a16__cout)) 
                                                         << 0x10U))))) 
                                            | (((((((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                    ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a15__cout)) 
                                                   << 0xfU) 
                                                  | (((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                      ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a14__cout)) 
                                                     << 0xeU)) 
                                                 | ((((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                      ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a13__cout)) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                        ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a12__cout)) 
                                                       << 0xcU))) 
                                                | (((((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                      ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a11__cout)) 
                                                     << 0xbU) 
                                                    | (((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                        ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a10__cout)) 
                                                       << 0xaU)) 
                                                   | ((((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                        ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a9__cout)) 
                                                       << 9U) 
                                                      | (((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                          ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a8__cout)) 
                                                         << 8U)))) 
                                               | ((((((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                      ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a7__cout)) 
                                                     << 7U) 
                                                    | (((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                        ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a6__cout)) 
                                                       << 6U)) 
                                                   | ((((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                        ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a5__cout)) 
                                                       << 5U) 
                                                      | (((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                          ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a4__cout)) 
                                                         << 4U))) 
                                                  | (((((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                        ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a3__cout)) 
                                                       << 3U) 
                                                      | (((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                          ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a2__cout)) 
                                                         << 2U)) 
                                                     | ((((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                          ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__carry__BRA__0__KET__)) 
                                                         << 1U) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a1__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                              ^ (IData)(vlSelfRef.alu_tb__DOT__ALUControl))))))));
    vlSelfRef.alu_tb__DOT__dut__DOT__entry[0U] = vlSelfRef.alu_tb__DOT__dut__DOT__sum;
    vlSelfRef.alu_tb__DOT__dut__DOT__entry[1U] = vlSelfRef.alu_tb__DOT__dut__DOT__sum;
    vlSelfRef.alu_tb__DOT__dut__DOT__entry[4U] = 0U;
    vlSelfRef.alu_tb__DOT__dut__DOT__entry[5U] = (1U 
                                                  & (((~ 
                                                       ((IData)(vlSelfRef.alu_tb__DOT__ALUControl) 
                                                        >> 1U)) 
                                                      & ((~ 
                                                          ((IData)(vlSelfRef.alu_tb__DOT__ALUControl) 
                                                           ^ 
                                                           ((vlSelfRef.alu_tb__DOT__a 
                                                             ^ vlSelfRef.alu_tb__DOT__b) 
                                                            >> 0x1fU))) 
                                                         & ((vlSelfRef.alu_tb__DOT__a 
                                                             >> 0x1fU) 
                                                            ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a32__sum)))) 
                                                     ^ 
                                                     (vlSelfRef.alu_tb__DOT__dut__DOT__sum 
                                                      >> 0x1fU)));
    vlSelfRef.alu_tb__DOT__dut__DOT__entry[6U] = 0U;
    vlSelfRef.alu_tb__DOT__dut__DOT__entry[7U] = 0U;
    vlSelfRef.alu_tb__DOT__result = ((4U & (IData)(vlSelfRef.alu_tb__DOT__ALUControl))
                                      ? ((2U & (IData)(vlSelfRef.alu_tb__DOT__ALUControl))
                                          ? ((1U & (IData)(vlSelfRef.alu_tb__DOT__ALUControl))
                                              ? vlSelfRef.alu_tb__DOT__dut__DOT__entry
                                             [7U] : 
                                             vlSelfRef.alu_tb__DOT__dut__DOT__entry
                                             [6U]) : 
                                         ((1U & (IData)(vlSelfRef.alu_tb__DOT__ALUControl))
                                           ? vlSelfRef.alu_tb__DOT__dut__DOT__entry
                                          [5U] : vlSelfRef.alu_tb__DOT__dut__DOT__entry
                                          [4U])) : 
                                     ((2U & (IData)(vlSelfRef.alu_tb__DOT__ALUControl))
                                       ? ((1U & (IData)(vlSelfRef.alu_tb__DOT__ALUControl))
                                           ? vlSelfRef.alu_tb__DOT__dut__DOT____Vcellout__or1__y
                                           : vlSelfRef.alu_tb__DOT__dut__DOT____Vcellout__and1__y)
                                       : ((1U & (IData)(vlSelfRef.alu_tb__DOT__ALUControl))
                                           ? vlSelfRef.alu_tb__DOT__dut__DOT__entry
                                          [1U] : vlSelfRef.alu_tb__DOT__dut__DOT__entry
                                          [0U])));
}

void Valu_tb___024root___eval_nba(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_nba\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Valu_tb___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
}

void Valu_tb___024root___timing_resume(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___timing_resume\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Valu_tb___024root___eval_triggers__act(Valu_tb___024root* vlSelf);

bool Valu_tb___024root___eval_phase__act(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_phase__act\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Valu_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Valu_tb___024root___timing_resume(vlSelf);
        Valu_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Valu_tb___024root___eval_phase__nba(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_phase__nba\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Valu_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_tb___024root___dump_triggers__nba(Valu_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_tb___024root___dump_triggers__act(Valu_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Valu_tb___024root___eval(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Valu_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../../01_bench/alu_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Valu_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../../01_bench/alu_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Valu_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Valu_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Valu_tb___024root___eval_debug_assertions(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_debug_assertions\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
