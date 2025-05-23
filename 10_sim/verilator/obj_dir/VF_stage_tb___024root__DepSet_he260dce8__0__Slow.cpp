// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VF_stage_tb.h for the primary calling header

#include "VF_stage_tb__pch.h"
#include "VF_stage_tb___024root.h"

VL_ATTR_COLD void VF_stage_tb___024root___eval_static__TOP(VF_stage_tb___024root* vlSelf);
VL_ATTR_COLD void VF_stage_tb___024root____Vm_traceActivitySetAll(VF_stage_tb___024root* vlSelf);

VL_ATTR_COLD void VF_stage_tb___024root___eval_static(VF_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF_stage_tb___024root___eval_static\n"); );
    VF_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VF_stage_tb___024root___eval_static__TOP(vlSelf);
    VF_stage_tb___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__F_stage_tb__DOT__clk__0 
        = vlSelfRef.F_stage_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__F_stage_tb__DOT__rst__0 
        = vlSelfRef.F_stage_tb__DOT__rst;
}

VL_ATTR_COLD void VF_stage_tb___024root___eval_static__TOP(VF_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF_stage_tb___024root___eval_static__TOP\n"); );
    VF_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.F_stage_tb__DOT__test_num = 0U;
    vlSelfRef.F_stage_tb__DOT__pass_count = 0U;
    vlSelfRef.F_stage_tb__DOT__fail_count = 0U;
}

VL_ATTR_COLD void VF_stage_tb___024root___eval_initial__TOP(VF_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF_stage_tb___024root___eval_initial__TOP\n"); );
    VF_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_READMEM_N(true, 32, 64, 0, std::string{"imem.txt"}
                 ,  &(vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VF_stage_tb___024root___eval_final(VF_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF_stage_tb___024root___eval_final\n"); );
    VF_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VF_stage_tb___024root___dump_triggers__stl(VF_stage_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VF_stage_tb___024root___eval_phase__stl(VF_stage_tb___024root* vlSelf);

VL_ATTR_COLD void VF_stage_tb___024root___eval_settle(VF_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF_stage_tb___024root___eval_settle\n"); );
    VF_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VF_stage_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../../01_bench/F_stage_tb.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VF_stage_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VF_stage_tb___024root___dump_triggers__stl(VF_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF_stage_tb___024root___dump_triggers__stl\n"); );
    VF_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void VF_stage_tb___024root___stl_sequent__TOP__0(VF_stage_tb___024root* vlSelf);

VL_ATTR_COLD void VF_stage_tb___024root___eval_stl(VF_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF_stage_tb___024root___eval_stl\n"); );
    VF_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VF_stage_tb___024root___stl_sequent__TOP__0(vlSelf);
        VF_stage_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void VF_stage_tb___024root___stl_sequent__TOP__0(VF_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF_stage_tb___024root___stl_sequent__TOP__0\n"); );
    VF_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a4__cout 
        = (IData)((0xcU == (0xcU & vlSelfRef.F_stage_tb__DOT__pcF)));
    vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a5__cout 
        = ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a4__cout) 
           & (vlSelfRef.F_stage_tb__DOT__pcF >> 4U));
    vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a6__cout 
        = ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a5__cout) 
           & (vlSelfRef.F_stage_tb__DOT__pcF >> 5U));
    vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a7__cout 
        = ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a6__cout) 
           & (vlSelfRef.F_stage_tb__DOT__pcF >> 6U));
    vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a8__cout 
        = ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a7__cout) 
           & (vlSelfRef.F_stage_tb__DOT__pcF >> 7U));
    vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a9__cout 
        = ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a8__cout) 
           & (vlSelfRef.F_stage_tb__DOT__pcF >> 8U));
    vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a10__cout 
        = ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a9__cout) 
           & (vlSelfRef.F_stage_tb__DOT__pcF >> 9U));
    vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a11__cout 
        = ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a10__cout) 
           & (vlSelfRef.F_stage_tb__DOT__pcF >> 0xaU));
    vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a12__cout 
        = ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a11__cout) 
           & (vlSelfRef.F_stage_tb__DOT__pcF >> 0xbU));
    vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a13__cout 
        = ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a12__cout) 
           & (vlSelfRef.F_stage_tb__DOT__pcF >> 0xcU));
    vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a14__cout 
        = ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a13__cout) 
           & (vlSelfRef.F_stage_tb__DOT__pcF >> 0xdU));
    vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a15__cout 
        = ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a14__cout) 
           & (vlSelfRef.F_stage_tb__DOT__pcF >> 0xeU));
    vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a16__cout 
        = ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a15__cout) 
           & (vlSelfRef.F_stage_tb__DOT__pcF >> 0xfU));
    vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a17__cout 
        = ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a16__cout) 
           & (vlSelfRef.F_stage_tb__DOT__pcF >> 0x10U));
    vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a18__cout 
        = ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a17__cout) 
           & (vlSelfRef.F_stage_tb__DOT__pcF >> 0x11U));
    vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a19__cout 
        = ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a18__cout) 
           & (vlSelfRef.F_stage_tb__DOT__pcF >> 0x12U));
    vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a20__cout 
        = ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a19__cout) 
           & (vlSelfRef.F_stage_tb__DOT__pcF >> 0x13U));
    vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a21__cout 
        = ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a20__cout) 
           & (vlSelfRef.F_stage_tb__DOT__pcF >> 0x14U));
    vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a22__cout 
        = ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a21__cout) 
           & (vlSelfRef.F_stage_tb__DOT__pcF >> 0x15U));
    vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a23__cout 
        = ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a22__cout) 
           & (vlSelfRef.F_stage_tb__DOT__pcF >> 0x16U));
    vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a24__cout 
        = ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a23__cout) 
           & (vlSelfRef.F_stage_tb__DOT__pcF >> 0x17U));
    vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a25__cout 
        = ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a24__cout) 
           & (vlSelfRef.F_stage_tb__DOT__pcF >> 0x18U));
    vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a26__cout 
        = ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a25__cout) 
           & (vlSelfRef.F_stage_tb__DOT__pcF >> 0x19U));
    vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a27__cout 
        = ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a26__cout) 
           & (vlSelfRef.F_stage_tb__DOT__pcF >> 0x1aU));
    vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a28__cout 
        = ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a27__cout) 
           & (vlSelfRef.F_stage_tb__DOT__pcF >> 0x1bU));
    vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a29__cout 
        = ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a28__cout) 
           & (vlSelfRef.F_stage_tb__DOT__pcF >> 0x1cU));
    vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a30__cout 
        = ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a29__cout) 
           & (vlSelfRef.F_stage_tb__DOT__pcF >> 0x1dU));
    vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a31__cout 
        = ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a30__cout) 
           & (vlSelfRef.F_stage_tb__DOT__pcF >> 0x1eU));
    vlSelfRef.F_stage_tb__DOT__PCPlus4F = (((((((0x80000000U 
                                                 & vlSelfRef.F_stage_tb__DOT__pcF) 
                                                ^ ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a31__cout) 
                                                   << 0x1fU)) 
                                               | (0x40000000U 
                                                  & ((0xc0000000U 
                                                      & vlSelfRef.F_stage_tb__DOT__pcF) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a30__cout) 
                                                      << 0x1eU)))) 
                                              | ((0x20000000U 
                                                  & ((0xe0000000U 
                                                      & vlSelfRef.F_stage_tb__DOT__pcF) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a29__cout) 
                                                      << 0x1dU))) 
                                                 | (0x10000000U 
                                                    & ((0xf0000000U 
                                                        & vlSelfRef.F_stage_tb__DOT__pcF) 
                                                       ^ 
                                                       ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a28__cout) 
                                                        << 0x1cU))))) 
                                             | (((0x8000000U 
                                                  & ((0xf8000000U 
                                                      & vlSelfRef.F_stage_tb__DOT__pcF) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a27__cout) 
                                                      << 0x1bU))) 
                                                 | (0x4000000U 
                                                    & ((0xfc000000U 
                                                        & vlSelfRef.F_stage_tb__DOT__pcF) 
                                                       ^ 
                                                       ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a26__cout) 
                                                        << 0x1aU)))) 
                                                | ((0x2000000U 
                                                    & ((0xfe000000U 
                                                        & vlSelfRef.F_stage_tb__DOT__pcF) 
                                                       ^ 
                                                       ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a25__cout) 
                                                        << 0x19U))) 
                                                   | (0x1000000U 
                                                      & ((0xff000000U 
                                                          & vlSelfRef.F_stage_tb__DOT__pcF) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a24__cout) 
                                                          << 0x18U)))))) 
                                            | ((((0x800000U 
                                                  & ((0xff800000U 
                                                      & vlSelfRef.F_stage_tb__DOT__pcF) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a23__cout) 
                                                      << 0x17U))) 
                                                 | (0x400000U 
                                                    & ((0xffc00000U 
                                                        & vlSelfRef.F_stage_tb__DOT__pcF) 
                                                       ^ 
                                                       ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a22__cout) 
                                                        << 0x16U)))) 
                                                | ((0x200000U 
                                                    & ((0xffe00000U 
                                                        & vlSelfRef.F_stage_tb__DOT__pcF) 
                                                       ^ 
                                                       ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a21__cout) 
                                                        << 0x15U))) 
                                                   | (0x100000U 
                                                      & ((0xfff00000U 
                                                          & vlSelfRef.F_stage_tb__DOT__pcF) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a20__cout) 
                                                          << 0x14U))))) 
                                               | (((0x80000U 
                                                    & ((0xfff80000U 
                                                        & vlSelfRef.F_stage_tb__DOT__pcF) 
                                                       ^ 
                                                       ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a19__cout) 
                                                        << 0x13U))) 
                                                   | (0x40000U 
                                                      & ((0xfffc0000U 
                                                          & vlSelfRef.F_stage_tb__DOT__pcF) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a18__cout) 
                                                          << 0x12U)))) 
                                                  | ((0x20000U 
                                                      & ((0xfffe0000U 
                                                          & vlSelfRef.F_stage_tb__DOT__pcF) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a17__cout) 
                                                          << 0x11U))) 
                                                     | (0x10000U 
                                                        & ((0xffff0000U 
                                                            & vlSelfRef.F_stage_tb__DOT__pcF) 
                                                           ^ 
                                                           ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a16__cout) 
                                                            << 0x10U))))))) 
                                           | (((((0x8000U 
                                                  & ((0xffff8000U 
                                                      & vlSelfRef.F_stage_tb__DOT__pcF) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a15__cout) 
                                                      << 0xfU))) 
                                                 | (0x4000U 
                                                    & ((0xffffc000U 
                                                        & vlSelfRef.F_stage_tb__DOT__pcF) 
                                                       ^ 
                                                       ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a14__cout) 
                                                        << 0xeU)))) 
                                                | ((0x2000U 
                                                    & ((0xffffe000U 
                                                        & vlSelfRef.F_stage_tb__DOT__pcF) 
                                                       ^ 
                                                       ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a13__cout) 
                                                        << 0xdU))) 
                                                   | (0x1000U 
                                                      & ((0xfffff000U 
                                                          & vlSelfRef.F_stage_tb__DOT__pcF) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a12__cout) 
                                                          << 0xcU))))) 
                                               | (((0x800U 
                                                    & ((0xfffff800U 
                                                        & vlSelfRef.F_stage_tb__DOT__pcF) 
                                                       ^ 
                                                       ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a11__cout) 
                                                        << 0xbU))) 
                                                   | (0x400U 
                                                      & ((0xfffffc00U 
                                                          & vlSelfRef.F_stage_tb__DOT__pcF) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a10__cout) 
                                                          << 0xaU)))) 
                                                  | ((0x200U 
                                                      & ((0xfffffe00U 
                                                          & vlSelfRef.F_stage_tb__DOT__pcF) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a9__cout) 
                                                          << 9U))) 
                                                     | (0x100U 
                                                        & ((0xffffff00U 
                                                            & vlSelfRef.F_stage_tb__DOT__pcF) 
                                                           ^ 
                                                           ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a8__cout) 
                                                            << 8U)))))) 
                                              | ((((0x80U 
                                                    & ((0xffffff80U 
                                                        & vlSelfRef.F_stage_tb__DOT__pcF) 
                                                       ^ 
                                                       ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a7__cout) 
                                                        << 7U))) 
                                                   | (0x40U 
                                                      & ((0xffffffc0U 
                                                          & vlSelfRef.F_stage_tb__DOT__pcF) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a6__cout) 
                                                          << 6U)))) 
                                                  | ((0x20U 
                                                      & ((0xffffffe0U 
                                                          & vlSelfRef.F_stage_tb__DOT__pcF) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a5__cout) 
                                                          << 5U))) 
                                                     | (0x10U 
                                                        & ((0xfffffff0U 
                                                            & vlSelfRef.F_stage_tb__DOT__pcF) 
                                                           ^ 
                                                           ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a4__cout) 
                                                            << 4U))))) 
                                                 | ((8U 
                                                     & (VL_REDXOR_4(
                                                                    (0xcU 
                                                                     & vlSelfRef.F_stage_tb__DOT__pcF)) 
                                                        << 3U)) 
                                                    | ((4U 
                                                        & ((~ 
                                                            (vlSelfRef.F_stage_tb__DOT__pcF 
                                                             >> 2U)) 
                                                           << 2U)) 
                                                       | (3U 
                                                          & vlSelfRef.F_stage_tb__DOT__pcF))))));
    vlSelfRef.F_stage_tb__DOT__pcF0 = ((IData)(vlSelfRef.F_stage_tb__DOT__PCSrcE)
                                        ? vlSelfRef.F_stage_tb__DOT__PCTargetE
                                        : vlSelfRef.F_stage_tb__DOT__PCPlus4F);
}

VL_ATTR_COLD void VF_stage_tb___024root___eval_triggers__stl(VF_stage_tb___024root* vlSelf);

VL_ATTR_COLD bool VF_stage_tb___024root___eval_phase__stl(VF_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF_stage_tb___024root___eval_phase__stl\n"); );
    VF_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VF_stage_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VF_stage_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VF_stage_tb___024root___dump_triggers__act(VF_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF_stage_tb___024root___dump_triggers__act\n"); );
    VF_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge F_stage_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge F_stage_tb.rst)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VF_stage_tb___024root___dump_triggers__nba(VF_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF_stage_tb___024root___dump_triggers__nba\n"); );
    VF_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge F_stage_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge F_stage_tb.rst)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VF_stage_tb___024root____Vm_traceActivitySetAll(VF_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF_stage_tb___024root____Vm_traceActivitySetAll\n"); );
    VF_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void VF_stage_tb___024root___ctor_var_reset(VF_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF_stage_tb___024root___ctor_var_reset\n"); );
    VF_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->F_stage_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->F_stage_tb__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->F_stage_tb__DOT__StallF = VL_RAND_RESET_I(1);
    vlSelf->F_stage_tb__DOT__PCSrcE = VL_RAND_RESET_I(1);
    vlSelf->F_stage_tb__DOT__PCTargetE = VL_RAND_RESET_I(32);
    vlSelf->F_stage_tb__DOT__pcF0 = VL_RAND_RESET_I(32);
    vlSelf->F_stage_tb__DOT__pcF = VL_RAND_RESET_I(32);
    vlSelf->F_stage_tb__DOT__PCPlus4F = VL_RAND_RESET_I(32);
    vlSelf->F_stage_tb__DOT__test_num = 0;
    vlSelf->F_stage_tb__DOT__pass_count = 0;
    vlSelf->F_stage_tb__DOT__fail_count = 0;
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->F_stage_tb__DOT__imem__DOT__RAM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->F_stage_tb__DOT__PCplus4__DOT____Vcellout__a4__cout = VL_RAND_RESET_I(1);
    vlSelf->F_stage_tb__DOT__PCplus4__DOT____Vcellout__a5__cout = VL_RAND_RESET_I(1);
    vlSelf->F_stage_tb__DOT__PCplus4__DOT____Vcellout__a6__cout = VL_RAND_RESET_I(1);
    vlSelf->F_stage_tb__DOT__PCplus4__DOT____Vcellout__a7__cout = VL_RAND_RESET_I(1);
    vlSelf->F_stage_tb__DOT__PCplus4__DOT____Vcellout__a8__cout = VL_RAND_RESET_I(1);
    vlSelf->F_stage_tb__DOT__PCplus4__DOT____Vcellout__a9__cout = VL_RAND_RESET_I(1);
    vlSelf->F_stage_tb__DOT__PCplus4__DOT____Vcellout__a10__cout = VL_RAND_RESET_I(1);
    vlSelf->F_stage_tb__DOT__PCplus4__DOT____Vcellout__a11__cout = VL_RAND_RESET_I(1);
    vlSelf->F_stage_tb__DOT__PCplus4__DOT____Vcellout__a12__cout = VL_RAND_RESET_I(1);
    vlSelf->F_stage_tb__DOT__PCplus4__DOT____Vcellout__a13__cout = VL_RAND_RESET_I(1);
    vlSelf->F_stage_tb__DOT__PCplus4__DOT____Vcellout__a14__cout = VL_RAND_RESET_I(1);
    vlSelf->F_stage_tb__DOT__PCplus4__DOT____Vcellout__a15__cout = VL_RAND_RESET_I(1);
    vlSelf->F_stage_tb__DOT__PCplus4__DOT____Vcellout__a16__cout = VL_RAND_RESET_I(1);
    vlSelf->F_stage_tb__DOT__PCplus4__DOT____Vcellout__a17__cout = VL_RAND_RESET_I(1);
    vlSelf->F_stage_tb__DOT__PCplus4__DOT____Vcellout__a18__cout = VL_RAND_RESET_I(1);
    vlSelf->F_stage_tb__DOT__PCplus4__DOT____Vcellout__a19__cout = VL_RAND_RESET_I(1);
    vlSelf->F_stage_tb__DOT__PCplus4__DOT____Vcellout__a20__cout = VL_RAND_RESET_I(1);
    vlSelf->F_stage_tb__DOT__PCplus4__DOT____Vcellout__a21__cout = VL_RAND_RESET_I(1);
    vlSelf->F_stage_tb__DOT__PCplus4__DOT____Vcellout__a22__cout = VL_RAND_RESET_I(1);
    vlSelf->F_stage_tb__DOT__PCplus4__DOT____Vcellout__a23__cout = VL_RAND_RESET_I(1);
    vlSelf->F_stage_tb__DOT__PCplus4__DOT____Vcellout__a24__cout = VL_RAND_RESET_I(1);
    vlSelf->F_stage_tb__DOT__PCplus4__DOT____Vcellout__a25__cout = VL_RAND_RESET_I(1);
    vlSelf->F_stage_tb__DOT__PCplus4__DOT____Vcellout__a26__cout = VL_RAND_RESET_I(1);
    vlSelf->F_stage_tb__DOT__PCplus4__DOT____Vcellout__a27__cout = VL_RAND_RESET_I(1);
    vlSelf->F_stage_tb__DOT__PCplus4__DOT____Vcellout__a28__cout = VL_RAND_RESET_I(1);
    vlSelf->F_stage_tb__DOT__PCplus4__DOT____Vcellout__a29__cout = VL_RAND_RESET_I(1);
    vlSelf->F_stage_tb__DOT__PCplus4__DOT____Vcellout__a30__cout = VL_RAND_RESET_I(1);
    vlSelf->F_stage_tb__DOT__PCplus4__DOT____Vcellout__a31__cout = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__F_stage_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__F_stage_tb__DOT__rst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
