// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontroller_tb.h for the primary calling header

#include "Vcontroller_tb__pch.h"
#include "Vcontroller_tb___024root.h"

VL_ATTR_COLD void Vcontroller_tb___024root___eval_initial__TOP(Vcontroller_tb___024root* vlSelf);
VlCoroutine Vcontroller_tb___024root___eval_initial__TOP__Vtiming__0(Vcontroller_tb___024root* vlSelf);

void Vcontroller_tb___024root___eval_initial(Vcontroller_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroller_tb___024root___eval_initial\n"); );
    Vcontroller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcontroller_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vcontroller_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

void Vcontroller_tb___024root___act_sequent__TOP__0(Vcontroller_tb___024root* vlSelf);

void Vcontroller_tb___024root___eval_act(Vcontroller_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroller_tb___024root___eval_act\n"); );
    Vcontroller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcontroller_tb___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

extern const VlUnpacked<CData/*3:0*/, 2048> Vcontroller_tb__ConstPool__TABLE_h0e286701_0;

VL_INLINE_OPT void Vcontroller_tb___024root___act_sequent__TOP__0(Vcontroller_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroller_tb___024root___act_sequent__TOP__0\n"); );
    Vcontroller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.controller_tb__DOT__Ecall = ((0x73U == (IData)(vlSelfRef.controller_tb__DOT__op)) 
                                           & (0U == (IData)(vlSelfRef.controller_tb__DOT__funct12)));
    vlSelfRef.controller_tb__DOT__Ebreak = ((0x73U 
                                             == (IData)(vlSelfRef.controller_tb__DOT__op)) 
                                            & (1U == (IData)(vlSelfRef.controller_tb__DOT__funct12)));
    vlSelfRef.controller_tb__DOT__PCSrcE = (1U & ((0x63U 
                                                   == (IData)(vlSelfRef.controller_tb__DOT__op))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.controller_tb__DOT__funct3))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.controller_tb__DOT__funct3))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.controller_tb__DOT__funct3))
                                                      ? 
                                                     (~ (IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0))
                                                      : (IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.controller_tb__DOT__funct3))
                                                      ? 
                                                     (~ (IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0))
                                                      : (IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0)))
                                                    : 
                                                   ((1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.controller_tb__DOT__funct3) 
                                                         >> 1U))) 
                                                    && (1U 
                                                        & ((1U 
                                                            & (IData)(vlSelfRef.controller_tb__DOT__funct3))
                                                            ? 
                                                           (~ (IData)(vlSelfRef.controller_tb__DOT__ZeroE))
                                                            : (IData)(vlSelfRef.controller_tb__DOT__ZeroE)))))
                                                   : 
                                                  ((0x6fU 
                                                    == (IData)(vlSelfRef.controller_tb__DOT__op)) 
                                                   | (0x67U 
                                                      == (IData)(vlSelfRef.controller_tb__DOT__op)))));
    vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls 
        = ((0x40U & (IData)(vlSelfRef.controller_tb__DOT__op))
            ? ((0x20U & (IData)(vlSelfRef.controller_tb__DOT__op))
                ? ((0x10U & (IData)(vlSelfRef.controller_tb__DOT__op))
                    ? ((8U & (IData)(vlSelfRef.controller_tb__DOT__op))
                        ? (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT____Vxrand_h878dd58b__0)
                        : ((4U & (IData)(vlSelfRef.controller_tb__DOT__op))
                            ? (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT____Vxrand_h878dd58b__0)
                            : ((2U & (IData)(vlSelfRef.controller_tb__DOT__op))
                                ? ((1U & (IData)(vlSelfRef.controller_tb__DOT__op))
                                    ? (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT____Vxrand_h87936ccd__0)
                                    : (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT____Vxrand_h878dd58b__0))
                                : (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT____Vxrand_h878dd58b__0))))
                    : ((8U & (IData)(vlSelfRef.controller_tb__DOT__op))
                        ? ((4U & (IData)(vlSelfRef.controller_tb__DOT__op))
                            ? ((2U & (IData)(vlSelfRef.controller_tb__DOT__op))
                                ? ((1U & (IData)(vlSelfRef.controller_tb__DOT__op))
                                    ? 0x1621U : (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT____Vxrand_h878dd58b__0))
                                : (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT____Vxrand_h878dd58b__0))
                            : (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT____Vxrand_h878dd58b__0))
                        : ((4U & (IData)(vlSelfRef.controller_tb__DOT__op))
                            ? ((2U & (IData)(vlSelfRef.controller_tb__DOT__op))
                                ? ((1U & (IData)(vlSelfRef.controller_tb__DOT__op))
                                    ? 0x10a1U : (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT____Vxrand_h878dd58b__0))
                                : (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT____Vxrand_h878dd58b__0))
                            : ((2U & (IData)(vlSelfRef.controller_tb__DOT__op))
                                ? ((1U & (IData)(vlSelfRef.controller_tb__DOT__op))
                                    ? 0x40aU : (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT____Vxrand_h878dd58b__0))
                                : (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT____Vxrand_h878dd58b__0)))))
                : (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT____Vxrand_h878dd58b__0))
            : ((0x20U & (IData)(vlSelfRef.controller_tb__DOT__op))
                ? ((0x10U & (IData)(vlSelfRef.controller_tb__DOT__op))
                    ? ((8U & (IData)(vlSelfRef.controller_tb__DOT__op))
                        ? (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT____Vxrand_h878dd58b__0)
                        : ((4U & (IData)(vlSelfRef.controller_tb__DOT__op))
                            ? ((2U & (IData)(vlSelfRef.controller_tb__DOT__op))
                                ? ((1U & (IData)(vlSelfRef.controller_tb__DOT__op))
                                    ? 0x1886U : (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT____Vxrand_h878dd58b__0))
                                : (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT____Vxrand_h878dd58b__0))
                            : ((2U & (IData)(vlSelfRef.controller_tb__DOT__op))
                                ? ((1U & (IData)(vlSelfRef.controller_tb__DOT__op))
                                    ? (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT____Vxrand_h878f4dba__0)
                                    : (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT____Vxrand_h878dd58b__0))
                                : (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT____Vxrand_h878dd58b__0))))
                    : ((8U & (IData)(vlSelfRef.controller_tb__DOT__op))
                        ? (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT____Vxrand_h878dd58b__0)
                        : ((4U & (IData)(vlSelfRef.controller_tb__DOT__op))
                            ? (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT____Vxrand_h878dd58b__0)
                            : ((2U & (IData)(vlSelfRef.controller_tb__DOT__op))
                                ? ((1U & (IData)(vlSelfRef.controller_tb__DOT__op))
                                    ? 0x2c0U : (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT____Vxrand_h878dd58b__0))
                                : (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT____Vxrand_h878dd58b__0)))))
                : ((0x10U & (IData)(vlSelfRef.controller_tb__DOT__op))
                    ? ((8U & (IData)(vlSelfRef.controller_tb__DOT__op))
                        ? (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT____Vxrand_h878dd58b__0)
                        : ((4U & (IData)(vlSelfRef.controller_tb__DOT__op))
                            ? ((2U & (IData)(vlSelfRef.controller_tb__DOT__op))
                                ? ((1U & (IData)(vlSelfRef.controller_tb__DOT__op))
                                    ? 0x1986U : (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT____Vxrand_h878dd58b__0))
                                : (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT____Vxrand_h878dd58b__0))
                            : ((2U & (IData)(vlSelfRef.controller_tb__DOT__op))
                                ? ((1U & (IData)(vlSelfRef.controller_tb__DOT__op))
                                    ? 0x1084U : (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT____Vxrand_h878dd58b__0))
                                : (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT____Vxrand_h878dd58b__0))))
                    : ((8U & (IData)(vlSelfRef.controller_tb__DOT__op))
                        ? (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT____Vxrand_h878dd58b__0)
                        : ((4U & (IData)(vlSelfRef.controller_tb__DOT__op))
                            ? (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT____Vxrand_h878dd58b__0)
                            : ((2U & (IData)(vlSelfRef.controller_tb__DOT__op))
                                ? ((1U & (IData)(vlSelfRef.controller_tb__DOT__op))
                                    ? 0x1090U : (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT____Vxrand_h878dd58b__0))
                                : (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT____Vxrand_h878dd58b__0)))))));
    __Vtableidx1 = ((((((IData)(vlSelfRef.controller_tb__DOT__funct7b5) 
                        & ((IData)(vlSelfRef.controller_tb__DOT__op) 
                           >> 5U)) ? 1U : 0U) << 7U) 
                     | ((IData)(vlSelfRef.controller_tb__DOT__funct7b5) 
                        << 6U)) | (((IData)(vlSelfRef.controller_tb__DOT__funct3) 
                                    << 3U) | ((4U & 
                                               ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                                >> 6U)) 
                                              | (3U 
                                                 & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                                    >> 1U)))));
    vlSelfRef.controller_tb__DOT__ALUControlD = Vcontroller_tb__ConstPool__TABLE_h0e286701_0
        [__Vtableidx1];
}

void Vcontroller_tb___024root___eval_nba(Vcontroller_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroller_tb___024root___eval_nba\n"); );
    Vcontroller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcontroller_tb___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
}

void Vcontroller_tb___024root___timing_resume(Vcontroller_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroller_tb___024root___timing_resume\n"); );
    Vcontroller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vcontroller_tb___024root___eval_triggers__act(Vcontroller_tb___024root* vlSelf);

bool Vcontroller_tb___024root___eval_phase__act(Vcontroller_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroller_tb___024root___eval_phase__act\n"); );
    Vcontroller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcontroller_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vcontroller_tb___024root___timing_resume(vlSelf);
        Vcontroller_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcontroller_tb___024root___eval_phase__nba(Vcontroller_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroller_tb___024root___eval_phase__nba\n"); );
    Vcontroller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcontroller_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontroller_tb___024root___dump_triggers__nba(Vcontroller_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontroller_tb___024root___dump_triggers__act(Vcontroller_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vcontroller_tb___024root___eval(Vcontroller_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroller_tb___024root___eval\n"); );
    Vcontroller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vcontroller_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../../01_bench/controller_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcontroller_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../../01_bench/controller_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vcontroller_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vcontroller_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcontroller_tb___024root___eval_debug_assertions(Vcontroller_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroller_tb___024root___eval_debug_assertions\n"); );
    Vcontroller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
