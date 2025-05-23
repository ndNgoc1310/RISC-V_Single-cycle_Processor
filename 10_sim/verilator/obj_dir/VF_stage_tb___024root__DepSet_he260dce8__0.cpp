// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VF_stage_tb.h for the primary calling header

#include "VF_stage_tb__pch.h"
#include "VF_stage_tb___024root.h"

VL_ATTR_COLD void VF_stage_tb___024root___eval_initial__TOP(VF_stage_tb___024root* vlSelf);
VlCoroutine VF_stage_tb___024root___eval_initial__TOP__Vtiming__0(VF_stage_tb___024root* vlSelf);
VlCoroutine VF_stage_tb___024root___eval_initial__TOP__Vtiming__1(VF_stage_tb___024root* vlSelf);

void VF_stage_tb___024root___eval_initial(VF_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF_stage_tb___024root___eval_initial\n"); );
    VF_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VF_stage_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VF_stage_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VF_stage_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void VF_stage_tb___024root___act_comb__TOP__0(VF_stage_tb___024root* vlSelf);

void VF_stage_tb___024root___eval_act(VF_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF_stage_tb___024root___eval_act\n"); );
    VF_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((5ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VF_stage_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VF_stage_tb___024root___act_comb__TOP__0(VF_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF_stage_tb___024root___act_comb__TOP__0\n"); );
    VF_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.F_stage_tb__DOT__pcF0 = ((IData)(vlSelfRef.F_stage_tb__DOT__PCSrcE)
                                        ? vlSelfRef.F_stage_tb__DOT__PCTargetE
                                        : vlSelfRef.F_stage_tb__DOT__PCPlus4F);
}

void VF_stage_tb___024root___nba_sequent__TOP__0(VF_stage_tb___024root* vlSelf);

void VF_stage_tb___024root___eval_nba(VF_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF_stage_tb___024root___eval_nba\n"); );
    VF_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VF_stage_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VF_stage_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VF_stage_tb___024root___nba_sequent__TOP__0(VF_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF_stage_tb___024root___nba_sequent__TOP__0\n"); );
    VF_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.F_stage_tb__DOT__rst) {
        vlSelfRef.F_stage_tb__DOT__pcF = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.F_stage_tb__DOT__StallF)))) {
        vlSelfRef.F_stage_tb__DOT__pcF = ((IData)(vlSelfRef.F_stage_tb__DOT__PCSrcE)
                                           ? vlSelfRef.F_stage_tb__DOT__PCTargetE
                                           : vlSelfRef.F_stage_tb__DOT__PCPlus4F);
    }
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
}

void VF_stage_tb___024root___timing_resume(VF_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF_stage_tb___024root___timing_resume\n"); );
    VF_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h599addb5__0.resume(
                                                   "@(posedge F_stage_tb.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VF_stage_tb___024root___timing_commit(VF_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF_stage_tb___024root___timing_commit\n"); );
    VF_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h599addb5__0.commit(
                                                   "@(posedge F_stage_tb.clk)");
    }
}

void VF_stage_tb___024root___eval_triggers__act(VF_stage_tb___024root* vlSelf);

bool VF_stage_tb___024root___eval_phase__act(VF_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF_stage_tb___024root___eval_phase__act\n"); );
    VF_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VF_stage_tb___024root___eval_triggers__act(vlSelf);
    VF_stage_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VF_stage_tb___024root___timing_resume(vlSelf);
        VF_stage_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VF_stage_tb___024root___eval_phase__nba(VF_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF_stage_tb___024root___eval_phase__nba\n"); );
    VF_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VF_stage_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VF_stage_tb___024root___dump_triggers__nba(VF_stage_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VF_stage_tb___024root___dump_triggers__act(VF_stage_tb___024root* vlSelf);
#endif  // VL_DEBUG

void VF_stage_tb___024root___eval(VF_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF_stage_tb___024root___eval\n"); );
    VF_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VF_stage_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../../01_bench/F_stage_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VF_stage_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../../01_bench/F_stage_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VF_stage_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VF_stage_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VF_stage_tb___024root___eval_debug_assertions(VF_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF_stage_tb___024root___eval_debug_assertions\n"); );
    VF_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
