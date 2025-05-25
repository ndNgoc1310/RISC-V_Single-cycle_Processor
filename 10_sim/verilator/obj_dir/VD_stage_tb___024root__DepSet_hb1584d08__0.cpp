// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VD_stage_tb.h for the primary calling header

#include "VD_stage_tb__pch.h"
#include "VD_stage_tb___024root.h"

VL_ATTR_COLD void VD_stage_tb___024root___eval_initial__TOP(VD_stage_tb___024root* vlSelf);
VlCoroutine VD_stage_tb___024root___eval_initial__TOP__Vtiming__0(VD_stage_tb___024root* vlSelf);
VlCoroutine VD_stage_tb___024root___eval_initial__TOP__Vtiming__1(VD_stage_tb___024root* vlSelf);

void VD_stage_tb___024root___eval_initial(VD_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_stage_tb___024root___eval_initial\n"); );
    VD_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VD_stage_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VD_stage_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VD_stage_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void VD_stage_tb___024root___act_comb__TOP__0(VD_stage_tb___024root* vlSelf);

void VD_stage_tb___024root___eval_act(VD_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_stage_tb___024root___eval_act\n"); );
    VD_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((9ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VD_stage_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*0:0*/, 128> VD_stage_tb__ConstPool__TABLE_h6a2a0221_0;

VL_INLINE_OPT void VD_stage_tb___024root___act_comb__TOP__0(VD_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_stage_tb___024root___act_comb__TOP__0\n"); );
    VD_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    __Vtableidx2 = ((((IData)(vlSelfRef.D_stage_tb__DOT__JumpE) 
                      << 6U) | (((IData)(vlSelfRef.D_stage_tb__DOT__ZeroE) 
                                 << 5U) | ((IData)(vlSelfRef.D_stage_tb__DOT__ALUResultEb0) 
                                           << 4U))) 
                    | ((0xeU & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                >> 0xbU)) | (IData)(vlSelfRef.D_stage_tb__DOT__BranchE)));
    vlSelfRef.D_stage_tb__DOT__PCSrcE = VD_stage_tb__ConstPool__TABLE_h6a2a0221_0
        [__Vtableidx2];
}

void VD_stage_tb___024root___nba_sequent__TOP__0(VD_stage_tb___024root* vlSelf);
void VD_stage_tb___024root___nba_sequent__TOP__1(VD_stage_tb___024root* vlSelf);
void VD_stage_tb___024root___nba_sequent__TOP__2(VD_stage_tb___024root* vlSelf);

void VD_stage_tb___024root___eval_nba(VD_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_stage_tb___024root___eval_nba\n"); );
    VD_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VD_stage_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VD_stage_tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VD_stage_tb___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((0xbULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VD_stage_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VD_stage_tb___024root___nba_sequent__TOP__0(VD_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_stage_tb___024root___nba_sequent__TOP__0\n"); );
    VD_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D_stage_tb__DOT__o_debug_data = ((IData)(vlSelfRef.D_stage_tb__DOT__rst)
                                                ? 0U
                                                : (
                                                   (0x10U 
                                                    & (IData)(vlSelfRef.D_stage_tb__DOT__i_debug_addr))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.D_stage_tb__DOT__i_debug_addr))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.D_stage_tb__DOT__i_debug_addr))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.D_stage_tb__DOT__i_debug_addr))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.D_stage_tb__DOT__i_debug_addr))
                                                        ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x31
                                                        : vlSelfRef.D_stage_tb__DOT__rf__DOT__x30)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.D_stage_tb__DOT__i_debug_addr))
                                                        ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x29
                                                        : vlSelfRef.D_stage_tb__DOT__rf__DOT__x28))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.D_stage_tb__DOT__i_debug_addr))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.D_stage_tb__DOT__i_debug_addr))
                                                        ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x27
                                                        : vlSelfRef.D_stage_tb__DOT__rf__DOT__x26)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.D_stage_tb__DOT__i_debug_addr))
                                                        ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x25
                                                        : vlSelfRef.D_stage_tb__DOT__rf__DOT__x24)))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.D_stage_tb__DOT__i_debug_addr))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.D_stage_tb__DOT__i_debug_addr))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.D_stage_tb__DOT__i_debug_addr))
                                                        ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x23
                                                        : vlSelfRef.D_stage_tb__DOT__rf__DOT__x22)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.D_stage_tb__DOT__i_debug_addr))
                                                        ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x21
                                                        : vlSelfRef.D_stage_tb__DOT__rf__DOT__x20))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.D_stage_tb__DOT__i_debug_addr))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.D_stage_tb__DOT__i_debug_addr))
                                                        ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x19
                                                        : vlSelfRef.D_stage_tb__DOT__rf__DOT__x18)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.D_stage_tb__DOT__i_debug_addr))
                                                        ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x17
                                                        : vlSelfRef.D_stage_tb__DOT__rf__DOT__x16))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.D_stage_tb__DOT__i_debug_addr))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.D_stage_tb__DOT__i_debug_addr))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.D_stage_tb__DOT__i_debug_addr))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.D_stage_tb__DOT__i_debug_addr))
                                                        ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x15
                                                        : vlSelfRef.D_stage_tb__DOT__rf__DOT__x14)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.D_stage_tb__DOT__i_debug_addr))
                                                        ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x13
                                                        : vlSelfRef.D_stage_tb__DOT__rf__DOT__x12))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.D_stage_tb__DOT__i_debug_addr))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.D_stage_tb__DOT__i_debug_addr))
                                                        ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x11
                                                        : vlSelfRef.D_stage_tb__DOT__rf__DOT__x10)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.D_stage_tb__DOT__i_debug_addr))
                                                        ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x09
                                                        : vlSelfRef.D_stage_tb__DOT__rf__DOT__x08)))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.D_stage_tb__DOT__i_debug_addr))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.D_stage_tb__DOT__i_debug_addr))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.D_stage_tb__DOT__i_debug_addr))
                                                        ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x07
                                                        : vlSelfRef.D_stage_tb__DOT__rf__DOT__x06)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.D_stage_tb__DOT__i_debug_addr))
                                                        ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x05
                                                        : vlSelfRef.D_stage_tb__DOT__rf__DOT__x04))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.D_stage_tb__DOT__i_debug_addr))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.D_stage_tb__DOT__i_debug_addr))
                                                        ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x03
                                                        : vlSelfRef.D_stage_tb__DOT__rf__DOT__x02)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.D_stage_tb__DOT__i_debug_addr))
                                                        ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x01
                                                        : 0U))))));
}

VL_INLINE_OPT void VD_stage_tb___024root___nba_sequent__TOP__1(VD_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_stage_tb___024root___nba_sequent__TOP__1\n"); );
    VD_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.D_stage_tb__DOT__rst) {
        vlSelfRef.D_stage_tb__DOT__Read1D = 0U;
        vlSelfRef.D_stage_tb__DOT__Read2D = 0U;
        vlSelfRef.D_stage_tb__DOT__rf__DOT__x31 = 0U;
        vlSelfRef.D_stage_tb__DOT__rf__DOT__x30 = 0U;
        vlSelfRef.D_stage_tb__DOT__rf__DOT__x29 = 0U;
        vlSelfRef.D_stage_tb__DOT__rf__DOT__x28 = 0U;
        vlSelfRef.D_stage_tb__DOT__rf__DOT__x27 = 0U;
        vlSelfRef.D_stage_tb__DOT__rf__DOT__x26 = 0U;
        vlSelfRef.D_stage_tb__DOT__rf__DOT__x25 = 0U;
        vlSelfRef.D_stage_tb__DOT__rf__DOT__x24 = 0U;
        vlSelfRef.D_stage_tb__DOT__rf__DOT__x23 = 0U;
        vlSelfRef.D_stage_tb__DOT__rf__DOT__x22 = 0U;
        vlSelfRef.D_stage_tb__DOT__rf__DOT__x21 = 0U;
        vlSelfRef.D_stage_tb__DOT__rf__DOT__x20 = 0U;
        vlSelfRef.D_stage_tb__DOT__rf__DOT__x19 = 0U;
        vlSelfRef.D_stage_tb__DOT__rf__DOT__x18 = 0U;
        vlSelfRef.D_stage_tb__DOT__rf__DOT__x17 = 0U;
        vlSelfRef.D_stage_tb__DOT__rf__DOT__x16 = 0U;
        vlSelfRef.D_stage_tb__DOT__rf__DOT__x15 = 0U;
        vlSelfRef.D_stage_tb__DOT__rf__DOT__x14 = 0U;
        vlSelfRef.D_stage_tb__DOT__rf__DOT__x13 = 0U;
        vlSelfRef.D_stage_tb__DOT__rf__DOT__x12 = 0U;
        vlSelfRef.D_stage_tb__DOT__rf__DOT__x11 = 0U;
        vlSelfRef.D_stage_tb__DOT__rf__DOT__x10 = 0U;
        vlSelfRef.D_stage_tb__DOT__rf__DOT__x09 = 0U;
        vlSelfRef.D_stage_tb__DOT__rf__DOT__x08 = 0U;
        vlSelfRef.D_stage_tb__DOT__rf__DOT__x07 = 0U;
        vlSelfRef.D_stage_tb__DOT__rf__DOT__x06 = 0U;
        vlSelfRef.D_stage_tb__DOT__rf__DOT__x05 = 0U;
        vlSelfRef.D_stage_tb__DOT__rf__DOT__x04 = 0U;
        vlSelfRef.D_stage_tb__DOT__rf__DOT__x03 = 0U;
        vlSelfRef.D_stage_tb__DOT__rf__DOT__x02 = 0U;
        vlSelfRef.D_stage_tb__DOT__rf__DOT__x01 = 0U;
    } else {
        vlSelfRef.D_stage_tb__DOT__Read1D = ((0x80000U 
                                              & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                              ? ((0x40000U 
                                                  & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                  ? 
                                                 ((0x20000U 
                                                   & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                   ? 
                                                  ((0x10000U 
                                                    & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                     ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x31
                                                     : vlSelfRef.D_stage_tb__DOT__rf__DOT__x30)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                     ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x29
                                                     : vlSelfRef.D_stage_tb__DOT__rf__DOT__x28))
                                                   : 
                                                  ((0x10000U 
                                                    & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                     ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x27
                                                     : vlSelfRef.D_stage_tb__DOT__rf__DOT__x26)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                     ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x25
                                                     : vlSelfRef.D_stage_tb__DOT__rf__DOT__x24)))
                                                  : 
                                                 ((0x20000U 
                                                   & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                   ? 
                                                  ((0x10000U 
                                                    & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                     ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x23
                                                     : vlSelfRef.D_stage_tb__DOT__rf__DOT__x22)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                     ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x21
                                                     : vlSelfRef.D_stage_tb__DOT__rf__DOT__x20))
                                                   : 
                                                  ((0x10000U 
                                                    & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                     ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x19
                                                     : vlSelfRef.D_stage_tb__DOT__rf__DOT__x18)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                     ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x17
                                                     : vlSelfRef.D_stage_tb__DOT__rf__DOT__x16))))
                                              : ((0x40000U 
                                                  & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                  ? 
                                                 ((0x20000U 
                                                   & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                   ? 
                                                  ((0x10000U 
                                                    & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                     ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x15
                                                     : vlSelfRef.D_stage_tb__DOT__rf__DOT__x14)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                     ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x13
                                                     : vlSelfRef.D_stage_tb__DOT__rf__DOT__x12))
                                                   : 
                                                  ((0x10000U 
                                                    & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                     ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x11
                                                     : vlSelfRef.D_stage_tb__DOT__rf__DOT__x10)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                     ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x09
                                                     : vlSelfRef.D_stage_tb__DOT__rf__DOT__x08)))
                                                  : 
                                                 ((0x20000U 
                                                   & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                   ? 
                                                  ((0x10000U 
                                                    & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                     ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x07
                                                     : vlSelfRef.D_stage_tb__DOT__rf__DOT__x06)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                     ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x05
                                                     : vlSelfRef.D_stage_tb__DOT__rf__DOT__x04))
                                                   : 
                                                  ((0x10000U 
                                                    & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                     ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x03
                                                     : vlSelfRef.D_stage_tb__DOT__rf__DOT__x02)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                     ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x01
                                                     : 0U)))));
        vlSelfRef.D_stage_tb__DOT__Read2D = ((0x1000000U 
                                              & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                              ? ((0x800000U 
                                                  & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                  ? 
                                                 ((0x400000U 
                                                   & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                   ? 
                                                  ((0x200000U 
                                                    & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                    ? 
                                                   ((0x100000U 
                                                     & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                     ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x31
                                                     : vlSelfRef.D_stage_tb__DOT__rf__DOT__x30)
                                                    : 
                                                   ((0x100000U 
                                                     & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                     ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x29
                                                     : vlSelfRef.D_stage_tb__DOT__rf__DOT__x28))
                                                   : 
                                                  ((0x200000U 
                                                    & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                    ? 
                                                   ((0x100000U 
                                                     & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                     ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x27
                                                     : vlSelfRef.D_stage_tb__DOT__rf__DOT__x26)
                                                    : 
                                                   ((0x100000U 
                                                     & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                     ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x25
                                                     : vlSelfRef.D_stage_tb__DOT__rf__DOT__x24)))
                                                  : 
                                                 ((0x400000U 
                                                   & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                   ? 
                                                  ((0x200000U 
                                                    & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                    ? 
                                                   ((0x100000U 
                                                     & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                     ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x23
                                                     : vlSelfRef.D_stage_tb__DOT__rf__DOT__x22)
                                                    : 
                                                   ((0x100000U 
                                                     & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                     ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x21
                                                     : vlSelfRef.D_stage_tb__DOT__rf__DOT__x20))
                                                   : 
                                                  ((0x200000U 
                                                    & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                    ? 
                                                   ((0x100000U 
                                                     & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                     ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x19
                                                     : vlSelfRef.D_stage_tb__DOT__rf__DOT__x18)
                                                    : 
                                                   ((0x100000U 
                                                     & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                     ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x17
                                                     : vlSelfRef.D_stage_tb__DOT__rf__DOT__x16))))
                                              : ((0x800000U 
                                                  & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                  ? 
                                                 ((0x400000U 
                                                   & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                   ? 
                                                  ((0x200000U 
                                                    & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                    ? 
                                                   ((0x100000U 
                                                     & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                     ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x15
                                                     : vlSelfRef.D_stage_tb__DOT__rf__DOT__x14)
                                                    : 
                                                   ((0x100000U 
                                                     & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                     ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x13
                                                     : vlSelfRef.D_stage_tb__DOT__rf__DOT__x12))
                                                   : 
                                                  ((0x200000U 
                                                    & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                    ? 
                                                   ((0x100000U 
                                                     & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                     ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x11
                                                     : vlSelfRef.D_stage_tb__DOT__rf__DOT__x10)
                                                    : 
                                                   ((0x100000U 
                                                     & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                     ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x09
                                                     : vlSelfRef.D_stage_tb__DOT__rf__DOT__x08)))
                                                  : 
                                                 ((0x400000U 
                                                   & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                   ? 
                                                  ((0x200000U 
                                                    & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                    ? 
                                                   ((0x100000U 
                                                     & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                     ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x07
                                                     : vlSelfRef.D_stage_tb__DOT__rf__DOT__x06)
                                                    : 
                                                   ((0x100000U 
                                                     & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                     ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x05
                                                     : vlSelfRef.D_stage_tb__DOT__rf__DOT__x04))
                                                   : 
                                                  ((0x200000U 
                                                    & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                    ? 
                                                   ((0x100000U 
                                                     & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                     ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x03
                                                     : vlSelfRef.D_stage_tb__DOT__rf__DOT__x02)
                                                    : 
                                                   ((0x100000U 
                                                     & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                     ? vlSelfRef.D_stage_tb__DOT__rf__DOT__x01
                                                     : 0U)))));
        if (((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
             & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                   >> 0x1fU)))) {
            vlSelfRef.D_stage_tb__DOT__rf__DOT__x31 
                = vlSelfRef.D_stage_tb__DOT__ResultW;
        }
        if (((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
             & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                   >> 0x1eU)))) {
            vlSelfRef.D_stage_tb__DOT__rf__DOT__x30 
                = vlSelfRef.D_stage_tb__DOT__ResultW;
        }
        if (((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
             & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                   >> 0x1dU)))) {
            vlSelfRef.D_stage_tb__DOT__rf__DOT__x29 
                = vlSelfRef.D_stage_tb__DOT__ResultW;
        }
        if (((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
             & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                   >> 0x1cU)))) {
            vlSelfRef.D_stage_tb__DOT__rf__DOT__x28 
                = vlSelfRef.D_stage_tb__DOT__ResultW;
        }
        if (((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
             & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                   >> 0x1bU)))) {
            vlSelfRef.D_stage_tb__DOT__rf__DOT__x27 
                = vlSelfRef.D_stage_tb__DOT__ResultW;
        }
        if (((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
             & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                   >> 0x1aU)))) {
            vlSelfRef.D_stage_tb__DOT__rf__DOT__x26 
                = vlSelfRef.D_stage_tb__DOT__ResultW;
        }
        if (((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
             & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                   >> 0x19U)))) {
            vlSelfRef.D_stage_tb__DOT__rf__DOT__x25 
                = vlSelfRef.D_stage_tb__DOT__ResultW;
        }
        if (((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
             & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                   >> 0x18U)))) {
            vlSelfRef.D_stage_tb__DOT__rf__DOT__x24 
                = vlSelfRef.D_stage_tb__DOT__ResultW;
        }
        if (((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
             & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                   >> 0x17U)))) {
            vlSelfRef.D_stage_tb__DOT__rf__DOT__x23 
                = vlSelfRef.D_stage_tb__DOT__ResultW;
        }
        if (((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
             & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                   >> 0x16U)))) {
            vlSelfRef.D_stage_tb__DOT__rf__DOT__x22 
                = vlSelfRef.D_stage_tb__DOT__ResultW;
        }
        if (((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
             & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                   >> 0x15U)))) {
            vlSelfRef.D_stage_tb__DOT__rf__DOT__x21 
                = vlSelfRef.D_stage_tb__DOT__ResultW;
        }
        if (((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
             & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                   >> 0x14U)))) {
            vlSelfRef.D_stage_tb__DOT__rf__DOT__x20 
                = vlSelfRef.D_stage_tb__DOT__ResultW;
        }
        if (((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
             & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                   >> 0x13U)))) {
            vlSelfRef.D_stage_tb__DOT__rf__DOT__x19 
                = vlSelfRef.D_stage_tb__DOT__ResultW;
        }
        if (((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
             & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                   >> 0x12U)))) {
            vlSelfRef.D_stage_tb__DOT__rf__DOT__x18 
                = vlSelfRef.D_stage_tb__DOT__ResultW;
        }
        if (((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
             & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                   >> 0x11U)))) {
            vlSelfRef.D_stage_tb__DOT__rf__DOT__x17 
                = vlSelfRef.D_stage_tb__DOT__ResultW;
        }
        if (((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
             & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                   >> 0x10U)))) {
            vlSelfRef.D_stage_tb__DOT__rf__DOT__x16 
                = vlSelfRef.D_stage_tb__DOT__ResultW;
        }
        if (((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
             & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                   >> 0xfU)))) {
            vlSelfRef.D_stage_tb__DOT__rf__DOT__x15 
                = vlSelfRef.D_stage_tb__DOT__ResultW;
        }
        if (((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
             & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                   >> 0xeU)))) {
            vlSelfRef.D_stage_tb__DOT__rf__DOT__x14 
                = vlSelfRef.D_stage_tb__DOT__ResultW;
        }
        if (((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
             & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                   >> 0xdU)))) {
            vlSelfRef.D_stage_tb__DOT__rf__DOT__x13 
                = vlSelfRef.D_stage_tb__DOT__ResultW;
        }
        if (((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
             & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                   >> 0xcU)))) {
            vlSelfRef.D_stage_tb__DOT__rf__DOT__x12 
                = vlSelfRef.D_stage_tb__DOT__ResultW;
        }
        if (((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
             & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                   >> 0xbU)))) {
            vlSelfRef.D_stage_tb__DOT__rf__DOT__x11 
                = vlSelfRef.D_stage_tb__DOT__ResultW;
        }
        if (((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
             & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                   >> 0xaU)))) {
            vlSelfRef.D_stage_tb__DOT__rf__DOT__x10 
                = vlSelfRef.D_stage_tb__DOT__ResultW;
        }
        if (((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
             & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                   >> 9U)))) {
            vlSelfRef.D_stage_tb__DOT__rf__DOT__x09 
                = vlSelfRef.D_stage_tb__DOT__ResultW;
        }
        if (((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
             & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                   >> 8U)))) {
            vlSelfRef.D_stage_tb__DOT__rf__DOT__x08 
                = vlSelfRef.D_stage_tb__DOT__ResultW;
        }
        if (((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
             & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                   >> 7U)))) {
            vlSelfRef.D_stage_tb__DOT__rf__DOT__x07 
                = vlSelfRef.D_stage_tb__DOT__ResultW;
        }
        if (((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
             & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                   >> 6U)))) {
            vlSelfRef.D_stage_tb__DOT__rf__DOT__x06 
                = vlSelfRef.D_stage_tb__DOT__ResultW;
        }
        if (((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
             & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                   >> 5U)))) {
            vlSelfRef.D_stage_tb__DOT__rf__DOT__x05 
                = vlSelfRef.D_stage_tb__DOT__ResultW;
        }
        if (((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
             & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                   >> 4U)))) {
            vlSelfRef.D_stage_tb__DOT__rf__DOT__x04 
                = vlSelfRef.D_stage_tb__DOT__ResultW;
        }
        if (((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
             & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                   >> 3U)))) {
            vlSelfRef.D_stage_tb__DOT__rf__DOT__x03 
                = vlSelfRef.D_stage_tb__DOT__ResultW;
        }
        if (((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
             & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                   >> 2U)))) {
            vlSelfRef.D_stage_tb__DOT__rf__DOT__x02 
                = vlSelfRef.D_stage_tb__DOT__ResultW;
        }
        if (((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
             & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                   >> 1U)))) {
            vlSelfRef.D_stage_tb__DOT__rf__DOT__x01 
                = vlSelfRef.D_stage_tb__DOT__ResultW;
        }
    }
}

extern const VlUnpacked<CData/*3:0*/, 2048> VD_stage_tb__ConstPool__TABLE_h0e286701_0;

VL_INLINE_OPT void VD_stage_tb___024root___nba_sequent__TOP__2(VD_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_stage_tb___024root___nba_sequent__TOP__2\n"); );
    VD_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    if (vlSelfRef.D_stage_tb__DOT__rst) {
        vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[0U] = 0U;
        vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[1U] = 0U;
        vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] = 0U;
    } else if (vlSelfRef.D_stage_tb__DOT__FlushD) {
        vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[0U] = 0U;
        vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[1U] = 0U;
        vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.D_stage_tb__DOT__StallD)))) {
        vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[0U] 
            = vlSelfRef.D_stage_tb__DOT__PCPlus4F;
        vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[1U] 
            = (IData)((((QData)((IData)(vlSelfRef.D_stage_tb__DOT__InstrF)) 
                        << 0x20U) | (QData)((IData)(vlSelfRef.D_stage_tb__DOT__pcF))));
        vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
            = (IData)(((((QData)((IData)(vlSelfRef.D_stage_tb__DOT__InstrF)) 
                         << 0x20U) | (QData)((IData)(vlSelfRef.D_stage_tb__DOT__pcF))) 
                       >> 0x20U));
    }
    vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls 
        = ((0x40U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
            ? ((0x20U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                ? ((0x10U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                    ? ((8U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                        ? (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0)
                        : ((4U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                            ? (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0)
                            : ((2U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                    ? (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h87936ccd__0)
                                    : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0))
                                : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0))))
                    : ((8U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                        ? ((4U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                            ? ((2U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                    ? 0x1621U : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0))
                                : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0))
                            : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0))
                        : ((4U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                            ? ((2U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                    ? 0x10a1U : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0))
                                : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0))
                            : ((2U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                    ? 0x40aU : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0))
                                : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0)))))
                : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0))
            : ((0x20U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                ? ((0x10U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                    ? ((8U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                        ? (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0)
                        : ((4U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                            ? ((2U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                    ? 0x1886U : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0))
                                : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0))
                            : ((2U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                    ? (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h878f4dba__0)
                                    : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0))
                                : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0))))
                    : ((8U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                        ? (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0)
                        : ((4U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                            ? (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0)
                            : ((2U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                    ? 0x2c0U : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0))
                                : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0)))))
                : ((0x10U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                    ? ((8U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                        ? (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0)
                        : ((4U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                            ? ((2U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                    ? 0x1986U : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0))
                                : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0))
                            : ((2U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                    ? 0x1084U : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0))
                                : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0))))
                    : ((8U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                        ? (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0)
                        : ((4U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                            ? (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0)
                            : ((2U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                    ? 0x1090U : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0))
                                : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0)))))));
    vlSelfRef.D_stage_tb__DOT__ImmExtD = ((0x800U & (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls))
                                           ? ((0x400U 
                                               & (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls))
                                               ? vlSelfRef.D_stage_tb__DOT__ext__DOT____Vxrand_h8794da3b__0
                                               : ((0x200U 
                                                   & (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls))
                                                   ? vlSelfRef.D_stage_tb__DOT__ext__DOT____Vxrand_h8794da3b__0
                                                   : 
                                                  (0xfffff000U 
                                                   & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])))
                                           : ((0x400U 
                                               & (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls))
                                               ? ((0x200U 
                                                   & (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                                                >> 0x1fU))) 
                                                    << 0x14U) 
                                                   | (((0xff000U 
                                                        & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U]) 
                                                       | (0x800U 
                                                          & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                                             >> 9U))) 
                                                      | (0x7feU 
                                                         & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                                            >> 0x14U))))
                                                   : 
                                                  (((- (IData)(
                                                               (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | ((0x800U 
                                                       & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                                               >> 7U))))))
                                               : ((0x200U 
                                                   & (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | ((0xfe0U 
                                                       & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                                          >> 0x14U)) 
                                                      | (0x1fU 
                                                         & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                                            >> 7U))))
                                                   : 
                                                  (((- (IData)(
                                                               (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                                      >> 0x14U)))));
    __Vtableidx1 = (((((IData)((0x40000020U == (0x40000020U 
                                                & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])))
                        ? 1U : 0U) << 7U) | (0x40U 
                                             & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                                >> 0x18U))) 
                    | ((0x38U & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                 >> 9U)) | ((4U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                                   >> 6U)) 
                                            | (3U & 
                                               ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                                >> 1U)))));
    vlSelfRef.D_stage_tb__DOT__ALUControlD = VD_stage_tb__ConstPool__TABLE_h0e286701_0
        [__Vtableidx1];
}

void VD_stage_tb___024root___timing_resume(VD_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_stage_tb___024root___timing_resume\n"); );
    VD_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h1a3cedb5__0.resume(
                                                   "@(posedge D_stage_tb.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VD_stage_tb___024root___timing_commit(VD_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_stage_tb___024root___timing_commit\n"); );
    VD_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h1a3cedb5__0.commit(
                                                   "@(posedge D_stage_tb.clk)");
    }
}

void VD_stage_tb___024root___eval_triggers__act(VD_stage_tb___024root* vlSelf);

bool VD_stage_tb___024root___eval_phase__act(VD_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_stage_tb___024root___eval_phase__act\n"); );
    VD_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VD_stage_tb___024root___eval_triggers__act(vlSelf);
    VD_stage_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VD_stage_tb___024root___timing_resume(vlSelf);
        VD_stage_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VD_stage_tb___024root___eval_phase__nba(VD_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_stage_tb___024root___eval_phase__nba\n"); );
    VD_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VD_stage_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VD_stage_tb___024root___dump_triggers__nba(VD_stage_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VD_stage_tb___024root___dump_triggers__act(VD_stage_tb___024root* vlSelf);
#endif  // VL_DEBUG

void VD_stage_tb___024root___eval(VD_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_stage_tb___024root___eval\n"); );
    VD_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VD_stage_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../../01_bench/D_stage_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VD_stage_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../../01_bench/D_stage_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VD_stage_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VD_stage_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VD_stage_tb___024root___eval_debug_assertions(VD_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_stage_tb___024root___eval_debug_assertions\n"); );
    VD_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
