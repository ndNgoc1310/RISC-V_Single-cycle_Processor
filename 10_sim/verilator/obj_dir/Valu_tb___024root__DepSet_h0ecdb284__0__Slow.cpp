// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_tb.h for the primary calling header

#include "Valu_tb__pch.h"
#include "Valu_tb___024root.h"

VL_ATTR_COLD void Valu_tb___024root___eval_static__TOP(Valu_tb___024root* vlSelf);
VL_ATTR_COLD void Valu_tb___024root____Vm_traceActivitySetAll(Valu_tb___024root* vlSelf);

VL_ATTR_COLD void Valu_tb___024root___eval_static(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_static\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Valu_tb___024root___eval_static__TOP(vlSelf);
    Valu_tb___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Valu_tb___024root___eval_static__TOP(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_static__TOP\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.alu_tb__DOT__test_count = 0U;
    vlSelfRef.alu_tb__DOT__error_count = 0U;
}

VL_ATTR_COLD void Valu_tb___024root___eval_final(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_final\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_tb___024root___dump_triggers__stl(Valu_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Valu_tb___024root___eval_phase__stl(Valu_tb___024root* vlSelf);

VL_ATTR_COLD void Valu_tb___024root___eval_settle(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_settle\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Valu_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../../01_bench/alu_tb.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Valu_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_tb___024root___dump_triggers__stl(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___dump_triggers__stl\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Valu_tb___024root___act_sequent__TOP__0(Valu_tb___024root* vlSelf);

VL_ATTR_COLD void Valu_tb___024root___eval_stl(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_stl\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Valu_tb___024root___act_sequent__TOP__0(vlSelf);
        Valu_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Valu_tb___024root___eval_triggers__stl(Valu_tb___024root* vlSelf);

VL_ATTR_COLD bool Valu_tb___024root___eval_phase__stl(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_phase__stl\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Valu_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Valu_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_tb___024root___dump_triggers__act(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___dump_triggers__act\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Valu_tb___024root___dump_triggers__nba(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___dump_triggers__nba\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Valu_tb___024root____Vm_traceActivitySetAll(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root____Vm_traceActivitySetAll\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Valu_tb___024root___ctor_var_reset(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___ctor_var_reset\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->alu_tb__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->alu_tb__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->alu_tb__DOT__ALUControl = VL_RAND_RESET_I(3);
    vlSelf->alu_tb__DOT__rslt = VL_RAND_RESET_I(32);
    vlSelf->alu_tb__DOT__test_count = 0;
    vlSelf->alu_tb__DOT__error_count = 0;
    vlSelf->alu_tb__DOT__dut__DOT__src_b = VL_RAND_RESET_I(32);
    vlSelf->alu_tb__DOT__dut__DOT__sum = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->alu_tb__DOT__dut__DOT__entry[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->alu_tb__DOT__dut__DOT____Vcellout__and1__y = VL_RAND_RESET_I(32);
    vlSelf->alu_tb__DOT__dut__DOT____Vcellout__or1__y = VL_RAND_RESET_I(32);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT__carry__BRA__0__KET__ = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a1__b = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a2__cout = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a2__b = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a3__cout = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a3__b = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a4__cout = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a4__b = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a5__cout = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a5__b = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a6__cout = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a6__b = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a7__cout = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a7__b = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a8__cout = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a8__b = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a9__cout = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a9__b = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a10__cout = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a10__b = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a11__cout = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a11__b = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a12__cout = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a12__b = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a13__cout = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a13__b = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a14__cout = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a14__b = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a15__cout = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a15__b = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a16__cout = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a16__b = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a17__cout = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a17__b = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a18__cout = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a18__b = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a19__cout = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a19__b = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a20__cout = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a20__b = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a21__cout = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a21__b = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a22__cout = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a22__b = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a23__cout = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a23__b = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a24__cout = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a24__b = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a25__cout = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a25__b = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a26__cout = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a26__b = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a27__cout = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a27__b = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a28__cout = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a28__b = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a29__cout = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a29__b = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a30__cout = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a30__b = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a31__cout = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a31__b = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a32__b = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a32__sum = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT__a1__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__dut__DOT__add1__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
