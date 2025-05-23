// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vextender_tb.h for the primary calling header

#include "Vextender_tb__pch.h"
#include "Vextender_tb___024root.h"

VL_ATTR_COLD void Vextender_tb___024root___eval_static__TOP(Vextender_tb___024root* vlSelf);
VL_ATTR_COLD void Vextender_tb___024root____Vm_traceActivitySetAll(Vextender_tb___024root* vlSelf);

VL_ATTR_COLD void Vextender_tb___024root___eval_static(Vextender_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextender_tb___024root___eval_static\n"); );
    Vextender_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vextender_tb___024root___eval_static__TOP(vlSelf);
    Vextender_tb___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vextender_tb___024root___eval_static__TOP(Vextender_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextender_tb___024root___eval_static__TOP\n"); );
    Vextender_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.extender_tb__DOT__test_num = 0U;
    vlSelfRef.extender_tb__DOT__pass_count = 0U;
    vlSelfRef.extender_tb__DOT__fail_count = 0U;
}

VL_ATTR_COLD void Vextender_tb___024root___eval_initial__TOP(Vextender_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextender_tb___024root___eval_initial__TOP\n"); );
    Vextender_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.extender_tb__DOT__dut__DOT____Vxrand_h8794da3b__0 
        = VL_RAND_RESET_ASSIGN_I(32);
}

VL_ATTR_COLD void Vextender_tb___024root___eval_final(Vextender_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextender_tb___024root___eval_final\n"); );
    Vextender_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vextender_tb___024root___dump_triggers__stl(Vextender_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vextender_tb___024root___eval_phase__stl(Vextender_tb___024root* vlSelf);

VL_ATTR_COLD void Vextender_tb___024root___eval_settle(Vextender_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextender_tb___024root___eval_settle\n"); );
    Vextender_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vextender_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../../01_bench/extender_tb.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vextender_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vextender_tb___024root___dump_triggers__stl(Vextender_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextender_tb___024root___dump_triggers__stl\n"); );
    Vextender_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vextender_tb___024root___act_sequent__TOP__0(Vextender_tb___024root* vlSelf);

VL_ATTR_COLD void Vextender_tb___024root___eval_stl(Vextender_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextender_tb___024root___eval_stl\n"); );
    Vextender_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vextender_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vextender_tb___024root___eval_triggers__stl(Vextender_tb___024root* vlSelf);

VL_ATTR_COLD bool Vextender_tb___024root___eval_phase__stl(Vextender_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextender_tb___024root___eval_phase__stl\n"); );
    Vextender_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vextender_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vextender_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vextender_tb___024root___dump_triggers__act(Vextender_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextender_tb___024root___dump_triggers__act\n"); );
    Vextender_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vextender_tb___024root___dump_triggers__nba(Vextender_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextender_tb___024root___dump_triggers__nba\n"); );
    Vextender_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vextender_tb___024root____Vm_traceActivitySetAll(Vextender_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextender_tb___024root____Vm_traceActivitySetAll\n"); );
    Vextender_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vextender_tb___024root___ctor_var_reset(Vextender_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextender_tb___024root___ctor_var_reset\n"); );
    Vextender_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->extender_tb__DOT__instr = VL_RAND_RESET_I(25);
    vlSelf->extender_tb__DOT__immsrc = VL_RAND_RESET_I(3);
    vlSelf->extender_tb__DOT__immext = VL_RAND_RESET_I(32);
    vlSelf->extender_tb__DOT__test_num = 0;
    vlSelf->extender_tb__DOT__pass_count = 0;
    vlSelf->extender_tb__DOT__fail_count = 0;
    vlSelf->extender_tb__DOT__dut__DOT____Vxrand_h8794da3b__0 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
