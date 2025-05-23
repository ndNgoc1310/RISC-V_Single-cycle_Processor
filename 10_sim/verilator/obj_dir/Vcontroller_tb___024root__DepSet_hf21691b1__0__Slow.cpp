// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontroller_tb.h for the primary calling header

#include "Vcontroller_tb__pch.h"
#include "Vcontroller_tb___024root.h"

VL_ATTR_COLD void Vcontroller_tb___024root___eval_static__TOP(Vcontroller_tb___024root* vlSelf);
VL_ATTR_COLD void Vcontroller_tb___024root____Vm_traceActivitySetAll(Vcontroller_tb___024root* vlSelf);

VL_ATTR_COLD void Vcontroller_tb___024root___eval_static(Vcontroller_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroller_tb___024root___eval_static\n"); );
    Vcontroller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcontroller_tb___024root___eval_static__TOP(vlSelf);
    Vcontroller_tb___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vcontroller_tb___024root___eval_static__TOP(Vcontroller_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroller_tb___024root___eval_static__TOP\n"); );
    Vcontroller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.controller_tb__DOT__test_num = 0U;
    vlSelfRef.controller_tb__DOT__pass_count = 0U;
    vlSelfRef.controller_tb__DOT__fail_count = 0U;
}

VL_ATTR_COLD void Vcontroller_tb___024root___eval_initial__TOP(Vcontroller_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroller_tb___024root___eval_initial__TOP\n"); );
    Vcontroller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.controller_tb__DOT____Vxrand_h87975763__5 
        = (7U & VL_RAND_RESET_ASSIGN_I(3));
    vlSelfRef.controller_tb__DOT____Vxrand_h87975763__4 
        = (7U & VL_RAND_RESET_ASSIGN_I(3));
    vlSelfRef.controller_tb__DOT____Vxrand_h87975763__3 
        = (7U & VL_RAND_RESET_ASSIGN_I(3));
    vlSelfRef.controller_tb__DOT____Vxrand_h87975763__2 
        = (7U & VL_RAND_RESET_ASSIGN_I(3));
    vlSelfRef.controller_tb__DOT____Vxrand_h87975763__1 
        = (7U & VL_RAND_RESET_ASSIGN_I(3));
    vlSelfRef.controller_tb__DOT____Vxrand_h87975763__0 
        = (7U & VL_RAND_RESET_ASSIGN_I(3));
    vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT____Vxrand_h878dd58b__0 
        = (0x1fffU & VL_RAND_RESET_ASSIGN_I(13));
    vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT____Vxrand_h87936ccd__0 
        = (0xe00U & VL_RAND_RESET_ASSIGN_I(13));
    vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT____Vxrand_h878f4dba__0 
        = (0x1004U | (0xe00U & VL_RAND_RESET_ASSIGN_I(13)));
}

VL_ATTR_COLD void Vcontroller_tb___024root___eval_final(Vcontroller_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroller_tb___024root___eval_final\n"); );
    Vcontroller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontroller_tb___024root___dump_triggers__stl(Vcontroller_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcontroller_tb___024root___eval_phase__stl(Vcontroller_tb___024root* vlSelf);

VL_ATTR_COLD void Vcontroller_tb___024root___eval_settle(Vcontroller_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroller_tb___024root___eval_settle\n"); );
    Vcontroller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vcontroller_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../../01_bench/controller_tb.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vcontroller_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontroller_tb___024root___dump_triggers__stl(Vcontroller_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroller_tb___024root___dump_triggers__stl\n"); );
    Vcontroller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vcontroller_tb___024root___act_sequent__TOP__0(Vcontroller_tb___024root* vlSelf);

VL_ATTR_COLD void Vcontroller_tb___024root___eval_stl(Vcontroller_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroller_tb___024root___eval_stl\n"); );
    Vcontroller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcontroller_tb___024root___act_sequent__TOP__0(vlSelf);
        Vcontroller_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vcontroller_tb___024root___eval_triggers__stl(Vcontroller_tb___024root* vlSelf);

VL_ATTR_COLD bool Vcontroller_tb___024root___eval_phase__stl(Vcontroller_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroller_tb___024root___eval_phase__stl\n"); );
    Vcontroller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcontroller_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vcontroller_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontroller_tb___024root___dump_triggers__act(Vcontroller_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroller_tb___024root___dump_triggers__act\n"); );
    Vcontroller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vcontroller_tb___024root___dump_triggers__nba(Vcontroller_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroller_tb___024root___dump_triggers__nba\n"); );
    Vcontroller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vcontroller_tb___024root____Vm_traceActivitySetAll(Vcontroller_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroller_tb___024root____Vm_traceActivitySetAll\n"); );
    Vcontroller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Vcontroller_tb___024root___ctor_var_reset(Vcontroller_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroller_tb___024root___ctor_var_reset\n"); );
    Vcontroller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->controller_tb__DOT____Vxrand_h87975763__5 = VL_RAND_RESET_I(3);
    vlSelf->controller_tb__DOT____Vxrand_h87975763__4 = VL_RAND_RESET_I(3);
    vlSelf->controller_tb__DOT____Vxrand_h87975763__3 = VL_RAND_RESET_I(3);
    vlSelf->controller_tb__DOT____Vxrand_h87975763__2 = VL_RAND_RESET_I(3);
    vlSelf->controller_tb__DOT____Vxrand_h87975763__1 = VL_RAND_RESET_I(3);
    vlSelf->controller_tb__DOT____Vxrand_h87975763__0 = VL_RAND_RESET_I(3);
    vlSelf->controller_tb__DOT__op = VL_RAND_RESET_I(7);
    vlSelf->controller_tb__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->controller_tb__DOT__funct7b5 = VL_RAND_RESET_I(1);
    vlSelf->controller_tb__DOT__ZeroE = VL_RAND_RESET_I(1);
    vlSelf->controller_tb__DOT__BranchE = VL_RAND_RESET_I(1);
    vlSelf->controller_tb__DOT__JumpE = VL_RAND_RESET_I(1);
    vlSelf->controller_tb__DOT__ALUResultEb0 = VL_RAND_RESET_I(1);
    vlSelf->controller_tb__DOT__funct12 = VL_RAND_RESET_I(12);
    vlSelf->controller_tb__DOT__PCSrcE = VL_RAND_RESET_I(1);
    vlSelf->controller_tb__DOT__ALUControlD = VL_RAND_RESET_I(4);
    vlSelf->controller_tb__DOT__Ecall = VL_RAND_RESET_I(1);
    vlSelf->controller_tb__DOT__Ebreak = VL_RAND_RESET_I(1);
    vlSelf->controller_tb__DOT__test_num = 0;
    vlSelf->controller_tb__DOT__pass_count = 0;
    vlSelf->controller_tb__DOT__fail_count = 0;
    vlSelf->controller_tb__DOT__dut__DOT__md__DOT____Vxrand_h878dd58b__0 = VL_RAND_RESET_I(13);
    vlSelf->controller_tb__DOT__dut__DOT__md__DOT____Vxrand_h87936ccd__0 = VL_RAND_RESET_I(13);
    vlSelf->controller_tb__DOT__dut__DOT__md__DOT____Vxrand_h878f4dba__0 = VL_RAND_RESET_I(13);
    vlSelf->controller_tb__DOT__dut__DOT__md__DOT__controls = VL_RAND_RESET_I(13);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
