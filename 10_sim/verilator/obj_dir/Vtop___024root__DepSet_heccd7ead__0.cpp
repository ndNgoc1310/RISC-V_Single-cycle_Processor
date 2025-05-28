// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE__v0;
    __VdlyVal__top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE__v0 = 0;
    CData/*4:0*/ __VdlyDim0__top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE__v0;
    __VdlyDim0__top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE__v0;
    __VdlySet__top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE__v0 = 0;
    IData/*31:0*/ __VdlyVal__top__DOT__dm__DOT__RAM__v0;
    __VdlyVal__top__DOT__dm__DOT__RAM__v0 = 0;
    CData/*5:0*/ __VdlyDim0__top__DOT__dm__DOT__RAM__v0;
    __VdlyDim0__top__DOT__dm__DOT__RAM__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__dm__DOT__RAM__v0;
    __VdlySet__top__DOT__dm__DOT__RAM__v0 = 0;
    // Body
    __VdlySet__top__DOT__dm__DOT__RAM__v0 = 0U;
    __VdlySet__top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE__v0 = 0U;
    if (vlSelfRef.top_MemWriteM) {
        __VdlyVal__top__DOT__dm__DOT__RAM__v0 = vlSelfRef.top_WriteDataM;
        __VdlyDim0__top__DOT__dm__DOT__RAM__v0 = (0x3fU 
                                                  & (vlSelfRef.top_ALUResultM 
                                                     >> 2U));
        __VdlySet__top__DOT__dm__DOT__RAM__v0 = 1U;
    }
    if ((0x80U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[4U])) {
        __VdlyVal__top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE__v0 
            = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ResultW;
        __VdlyDim0__top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE__v0 
            = (0x1fU & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[2U]);
        __VdlySet__top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE__v0 = 1U;
    }
    if (__VdlySet__top__DOT__dm__DOT__RAM__v0) {
        vlSelfRef.top__DOT__dm__DOT__RAM[__VdlyDim0__top__DOT__dm__DOT__RAM__v0] 
            = __VdlyVal__top__DOT__dm__DOT__RAM__v0;
    }
    if (__VdlySet__top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE__v0) {
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[__VdlyDim0__top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE__v0] 
            = __VdlyVal__top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE__v0;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_4;
    // Body
    vlSelfRef.__Vdly__top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[0U] 
        = vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[0U];
    vlSelfRef.__Vdly__top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
        = vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U];
    vlSelfRef.__Vdly__top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
        = vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U];
    vlSelfRef.__Vdly__top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
        = vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U];
    vlSelfRef.__Vdly__top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[4U] 
        = vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[4U];
    vlSelfRef.__Vdly__top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
        = vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U];
    vlSelfRef.__Vdly__top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[6U] 
        = vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[6U];
    __Vtemp_4[2U] = (((IData)((((QData)((IData)((((0x100U 
                                                   & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                      << 1U)) 
                                                  | ((0xc0U 
                                                      & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                         << 6U)) 
                                                     | (0x20U 
                                                        & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                           << 1U)))) 
                                                 | (((IData)(vlSelfRef.top__DOT__proc__DOT__ALUControlD) 
                                                     << 1U) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                          >> 8U)))))) 
                                << 0x28U) | (((QData)((IData)(
                                                              (7U 
                                                               & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                                  >> 0xcU)))) 
                                              << 0x25U) 
                                             | (((QData)((IData)(vlSelfRef.top__DOT__proc__DOT__LSTypeD)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__rd1)))))) 
                      << 0xfU) | ((IData)(((((QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__rd2)) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[1U]))) 
                                           >> 0x20U)) 
                                  >> 0x11U));
    __Vtemp_4[3U] = (((IData)((((QData)((IData)((((0x100U 
                                                   & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                      << 1U)) 
                                                  | ((0xc0U 
                                                      & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                         << 6U)) 
                                                     | (0x20U 
                                                        & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                           << 1U)))) 
                                                 | (((IData)(vlSelfRef.top__DOT__proc__DOT__ALUControlD) 
                                                     << 1U) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                          >> 8U)))))) 
                                << 0x28U) | (((QData)((IData)(
                                                              (7U 
                                                               & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                                  >> 0xcU)))) 
                                              << 0x25U) 
                                             | (((QData)((IData)(vlSelfRef.top__DOT__proc__DOT__LSTypeD)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__rd1)))))) 
                      >> 0x11U) | ((IData)(((((QData)((IData)(
                                                              (((0x100U 
                                                                 & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                                    << 1U)) 
                                                                | ((0xc0U 
                                                                    & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                                       << 6U)) 
                                                                   | (0x20U 
                                                                      & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                                         << 1U)))) 
                                                               | (((IData)(vlSelfRef.top__DOT__proc__DOT__ALUControlD) 
                                                                   << 1U) 
                                                                  | (1U 
                                                                     & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                                        >> 8U)))))) 
                                              << 0x28U) 
                                             | (((QData)((IData)(
                                                                 (7U 
                                                                  & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                                     >> 0xcU)))) 
                                                 << 0x25U) 
                                                | (((QData)((IData)(vlSelfRef.top__DOT__proc__DOT__LSTypeD)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__rd1))))) 
                                            >> 0x20U)) 
                                   << 0xfU));
    if (vlSelfRef.rst) {
        vlSelfRef.__Vdly__top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[0U] = 0U;
        vlSelfRef.__Vdly__top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] = 0U;
        vlSelfRef.__Vdly__top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] = 0U;
        vlSelfRef.__Vdly__top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] = 0U;
        vlSelfRef.__Vdly__top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[4U] = 0U;
        vlSelfRef.__Vdly__top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] = 0U;
        vlSelfRef.__Vdly__top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[6U] = 0U;
        vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[0U] = 0U;
        vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U] = 0U;
        vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[2U] = 0U;
        vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] = 0U;
        vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[4U] = 0U;
        vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[0U] = 0U;
        vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[1U] = 0U;
        vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] = 0U;
        vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] = 0U;
        vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U] = 0U;
    } else {
        if (((IData)(vlSelfRef.top__DOT__proc__DOT__StallF) 
             | (0U != (IData)(vlSelfRef.top__DOT__proc__DOT__PCSrcE)))) {
            vlSelfRef.__Vdly__top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[0U] = 0U;
            vlSelfRef.__Vdly__top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] = 0U;
            vlSelfRef.__Vdly__top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] = 0U;
            vlSelfRef.__Vdly__top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] = 0U;
            vlSelfRef.__Vdly__top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[4U] = 0U;
            vlSelfRef.__Vdly__top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] = 0U;
            vlSelfRef.__Vdly__top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[6U] = 0U;
        } else {
            vlSelfRef.__Vdly__top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[0U] 
                = vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[0U];
            vlSelfRef.__Vdly__top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ImmExtD;
            vlSelfRef.__Vdly__top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                = (((IData)((((QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__rd2)) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[1U])))) 
                    << 0xfU) | ((0x7c00U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                            >> 5U)) 
                                | ((0x3e0U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                              >> 0xfU)) 
                                   | (0x1fU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                               >> 7U)))));
            vlSelfRef.__Vdly__top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                = (((IData)((((QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__rd2)) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[1U])))) 
                    >> 0x11U) | ((IData)(((((QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__rd2)) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[1U]))) 
                                          >> 0x20U)) 
                                 << 0xfU));
            vlSelfRef.__Vdly__top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[4U] 
                = __Vtemp_4[2U];
            vlSelfRef.__Vdly__top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                = __Vtemp_4[3U];
            vlSelfRef.__Vdly__top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[6U] 
                = ((4U & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                          >> 0xaU)) | (3U & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                             >> 5U)));
        }
        vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[0U] 
            = vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[0U];
        vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U] 
            = vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[1U];
        vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[2U] 
            = (((IData)((((QData)((IData)(((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                                            << 0x1bU) 
                                           | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                              >> 5U)))) 
                          << 0x20U) | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel)))) 
                << 5U) | (0x1fU & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U]));
        vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
            = (((IData)((((QData)((IData)(((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                                            << 0x1bU) 
                                           | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                              >> 5U)))) 
                          << 0x20U) | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel)))) 
                >> 0x1bU) | ((IData)(((((QData)((IData)(
                                                        ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                                                          << 0x1bU) 
                                                         | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                                            >> 5U)))) 
                                        << 0x20U) | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel))) 
                                      >> 0x20U)) << 5U));
        vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[4U] 
            = ((0xe0U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                         >> 6U)) | ((IData)(((((QData)((IData)(
                                                               ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                                                                 << 0x1bU) 
                                                                | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                                                   >> 5U)))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel))) 
                                             >> 0x20U)) 
                                    >> 0x1bU));
        vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[0U] 
            = (IData)((((QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[0U])) 
                        << 0x20U) | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCTargetE))));
        vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[1U] 
            = (IData)(((((QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[0U])) 
                         << 0x20U) | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCTargetE))) 
                       >> 0x20U));
        vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
            = (((IData)((((QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALUResultE)) 
                          << 0x20U) | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__WriteDataE)))) 
                << 5U) | (0x1fU & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U]));
        vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
            = (((IData)((((QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALUResultE)) 
                          << 0x20U) | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__WriteDataE)))) 
                >> 0x1bU) | ((IData)(((((QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALUResultE)) 
                                        << 0x20U) | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__WriteDataE))) 
                                      >> 0x20U)) << 5U));
        vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
            = ((0xffffffe0U & ((0x3c00U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[6U] 
                                            << 0xbU) 
                                           | (0x400U 
                                              & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                                 >> 0x15U)))) 
                               | (0x3e0U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                            >> 0xaU)))) 
               | ((IData)(((((QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALUResultE)) 
                             << 0x20U) | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__WriteDataE))) 
                           >> 0x20U)) >> 0x1bU));
    }
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ResultW 
        = ((0x40U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[4U])
            ? ((0x20U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[4U])
                ? vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[0U]
                : vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])
            : ((0x20U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[4U])
                ? ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                    << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[2U] 
                                 >> 5U)) : ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[4U] 
                                             << 0x1bU) 
                                            | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                               >> 5U))));
    vlSelfRef.top_ALUResultM = ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                                 << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                              >> 5U));
    vlSelfRef.top_MemWriteM = (1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                                     >> 0xaU));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
        = ((0U != (0x1fU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                            >> 0xfU))) ? vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE
           [(0x1fU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                      >> 0xfU))] : 0U);
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__rd2 
        = ((0U != (0x1fU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                            >> 0x14U))) ? vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE
           [(0x1fU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                      >> 0x14U))] : 0U);
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_ReadDataM = vlSelfRef.top__DOT__dm__DOT__RAM
        [(0x3fU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                   >> 7U))];
    vlSelfRef.top__DOT__proc__DOT__ReadDataM = vlSelfRef.top__DOT__dm__DOT__RAM
        [(0x3fU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                   >> 7U))];
    if ((0x200U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U])) {
        if ((0x100U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U])) {
            vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel 
                = vlSelfRef.top__DOT__proc__DOT__ReadDataM;
            vlSelfRef.top__DOT__proc__DOT__WriteDataM 
                = ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                    << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                 >> 5U));
        } else if ((0x80U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U])) {
            vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel 
                = vlSelfRef.top__DOT__proc__DOT__ReadDataM;
            vlSelfRef.top__DOT__proc__DOT__WriteDataM 
                = ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                    << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                 >> 5U));
        } else if ((0x40U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U])) {
            vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel 
                = vlSelfRef.top__DOT__proc__DOT__ReadDataM;
            vlSelfRef.top__DOT__proc__DOT__WriteDataM 
                = ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                    << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                 >> 5U));
        } else if ((0x20U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U])) {
            vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel 
                = vlSelfRef.top__DOT__proc__DOT__ReadDataM;
            vlSelfRef.top__DOT__proc__DOT__WriteDataM 
                = ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                    << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                 >> 5U));
        } else {
            vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel 
                = (((- (IData)((1U & (vlSelfRef.top__DOT__proc__DOT__ReadDataM 
                                      >> 7U)))) << 8U) 
                   | (0xffU & vlSelfRef.top__DOT__proc__DOT__ReadDataM));
            vlSelfRef.top__DOT__proc__DOT__WriteDataM 
                = ((0xffffff00U & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel) 
                   | (0xffU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                               >> 5U)));
        }
    } else if ((0x100U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U])) {
        if ((0x80U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U])) {
            vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel 
                = vlSelfRef.top__DOT__proc__DOT__ReadDataM;
            vlSelfRef.top__DOT__proc__DOT__WriteDataM 
                = ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                    << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                 >> 5U));
        } else if ((0x40U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U])) {
            vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel 
                = vlSelfRef.top__DOT__proc__DOT__ReadDataM;
            vlSelfRef.top__DOT__proc__DOT__WriteDataM 
                = ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                    << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                 >> 5U));
        } else if ((0x20U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U])) {
            vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel 
                = vlSelfRef.top__DOT__proc__DOT__ReadDataM;
            vlSelfRef.top__DOT__proc__DOT__WriteDataM 
                = ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                    << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                 >> 5U));
        } else {
            vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel 
                = (((- (IData)((1U & (vlSelfRef.top__DOT__proc__DOT__ReadDataM 
                                      >> 0xfU)))) << 0x10U) 
                   | (0xffffU & vlSelfRef.top__DOT__proc__DOT__ReadDataM));
            vlSelfRef.top__DOT__proc__DOT__WriteDataM 
                = ((0xffff0000U & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel) 
                   | (0xffffU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                 >> 5U)));
        }
    } else if ((0x80U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U])) {
        if ((0x40U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U])) {
            vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel 
                = vlSelfRef.top__DOT__proc__DOT__ReadDataM;
            vlSelfRef.top__DOT__proc__DOT__WriteDataM 
                = ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                    << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                 >> 5U));
        } else if ((0x20U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U])) {
            vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel 
                = vlSelfRef.top__DOT__proc__DOT__ReadDataM;
            vlSelfRef.top__DOT__proc__DOT__WriteDataM 
                = ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                    << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                 >> 5U));
        } else {
            vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel 
                = vlSelfRef.top__DOT__proc__DOT__ReadDataM;
            vlSelfRef.top__DOT__proc__DOT__WriteDataM 
                = ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                    << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                 >> 5U));
        }
    } else if ((0x40U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U])) {
        if ((0x20U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U])) {
            vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel 
                = vlSelfRef.top__DOT__proc__DOT__ReadDataM;
            vlSelfRef.top__DOT__proc__DOT__WriteDataM 
                = ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                    << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                 >> 5U));
        } else {
            vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel 
                = (0xffU & vlSelfRef.top__DOT__proc__DOT__ReadDataM);
            vlSelfRef.top__DOT__proc__DOT__WriteDataM 
                = ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                    << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                 >> 5U));
        }
    } else if ((0x20U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U])) {
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel 
            = (0xffffU & vlSelfRef.top__DOT__proc__DOT__ReadDataM);
        vlSelfRef.top__DOT__proc__DOT__WriteDataM = 
            ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
              << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                           >> 5U));
    } else {
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel 
            = vlSelfRef.top__DOT__proc__DOT__ReadDataM;
        vlSelfRef.top__DOT__proc__DOT__WriteDataM = 
            ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
              << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                           >> 5U));
    }
    vlSelfRef.top_WriteDataM = vlSelfRef.top__DOT__proc__DOT__WriteDataM;
}

extern const VlUnpacked<CData/*4:0*/, 8> Vtop__ConstPool__TABLE_h531dc83c_0;
extern const VlUnpacked<CData/*3:0*/, 1024> Vtop__ConstPool__TABLE_hcb2af5a2_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtop__ConstPool__TABLE_h51c4d583_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ top__DOT__proc__DOT__ctrl__DOT__bru__DOT____VdfgExtracted_h4ead3b55__0;
    top__DOT__proc__DOT__ctrl__DOT__bru__DOT____VdfgExtracted_h4ead3b55__0 = 0;
    CData/*0:0*/ top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0;
    top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0 = 0;
    SData/*9:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    SData/*8:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*2:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    if (vlSelfRef.rst) {
        vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[0U] = 0U;
        vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[1U] = 0U;
        vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] = 0U;
        vlSelfRef.top__DOT__proc__DOT__pcF = 0U;
    } else {
        if ((0U != (IData)(vlSelfRef.top__DOT__proc__DOT__PCSrcE))) {
            vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[0U] = 0U;
            vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[1U] = 0U;
            vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.top__DOT__proc__DOT__StallF)))) {
            vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[0U] 
                = vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCPlus4F;
            vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[1U] 
                = (IData)((((QData)((IData)(vlSelfRef.top__DOT__im__DOT__IMEM
                                            [(0xffU 
                                              & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                                 >> 2U))])) 
                            << 0x20U) | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__pcF))));
            vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                = (IData)(((((QData)((IData)(vlSelfRef.top__DOT__im__DOT__IMEM
                                             [(0xffU 
                                               & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                                  >> 2U))])) 
                             << 0x20U) | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__pcF))) 
                           >> 0x20U));
        }
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__proc__DOT__StallF)))) {
            vlSelfRef.top__DOT__proc__DOT__pcF = ((0x20000000U 
                                                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
                                                   ? 
                                                  ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCmux__DOT____VdfgRegularize_hae03c8cc_0_0)
                                                    ? 0U
                                                    : vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALUResultE)
                                                   : 
                                                  ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCmux__DOT____VdfgRegularize_hae03c8cc_0_0)
                                                    ? vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCTargetE
                                                    : vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCPlus4F));
        }
    }
    vlSelfRef.Ecall = (IData)((0x73U == (0xfff0007fU 
                                         & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])));
    vlSelfRef.Ebreak = (IData)((0x100073U == (0xfff0007fU 
                                              & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])));
    __Vtableidx3 = (7U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                          >> 0xcU));
    vlSelfRef.top__DOT__proc__DOT__LSTypeD = Vtop__ConstPool__TABLE_h531dc83c_0
        [__Vtableidx3];
    vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls 
        = ((0x40U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
            ? ((0x20U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                ? ((0x10U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                    ? ((8U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                        ? (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0)
                        : ((4U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                            ? (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0)
                            : ((2U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                    ? (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791b458__0)
                                    : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0))
                                : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0))))
                    : ((8U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                        ? ((4U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                            ? ((2U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                    ? (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h878f7ac9__0)
                                    : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0))
                                : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0))
                            : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0))
                        : ((4U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                            ? ((2U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                    ? 0x1149U : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0))
                                : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0))
                            : ((2U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                    ? (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8794bea6__0)
                                    : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0))
                                : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0)))))
                : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0))
            : ((0x20U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                ? ((0x10U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                    ? ((8U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                        ? (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0)
                        : ((4U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                            ? ((2U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                    ? 0x190cU : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0))
                                : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0))
                            : ((2U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                    ? (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h878f4ebb__0)
                                    : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0))
                                : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0))))
                    : ((8U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                        ? (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0)
                        : ((4U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                            ? (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0)
                            : ((2U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                    ? (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8794a91d__0)
                                    : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0))
                                : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0)))))
                : ((0x10U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                    ? ((8U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                        ? (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0)
                        : ((4U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                            ? ((2U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                    ? (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h87902ff0__0)
                                    : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0))
                                : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0))
                            : ((2U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                    ? 0x1108U : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0))
                                : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0))))
                    : ((8U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                        ? (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0)
                        : ((4U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                            ? (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0)
                            : ((2U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                    ? 0x1120U : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0))
                                : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0)))))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ImmExtD 
        = ((0x800U & (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
            ? ((0x400U & (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                ? vlSelfRef.top__DOT__proc__DOT__dp__DOT__ext__DOT____Vxrand_h8794da3b__0
                : ((0x200U & (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                    ? vlSelfRef.top__DOT__proc__DOT__dp__DOT__ext__DOT____Vxrand_h8794da3b__0
                    : (0xfffff000U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])))
            : ((0x400U & (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                ? ((0x200U & (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                    ? (((- (IData)((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                    >> 0x1fU))) << 0x14U) 
                       | (((0xff000U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U]) 
                           | (0x800U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                        >> 9U))) | 
                          (0x7feU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                     >> 0x14U)))) : 
                   (((- (IData)((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                 >> 0x1fU))) << 0xcU) 
                    | ((0x800U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                  << 4U)) | ((0x7e0U 
                                              & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                 >> 0x14U)) 
                                             | (0x1eU 
                                                & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                   >> 7U))))))
                : ((0x200U & (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                    ? (((- (IData)((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                      >> 7U))))
                    : (((- (IData)((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                          >> 0x14U)))));
    __Vtableidx1 = (((((IData)((0x40000020U == (0x40000020U 
                                                & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])))
                        ? 1U : 0U) << 6U) | (0x20U 
                                             & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                >> 0x19U))) 
                    | ((0x1cU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                 >> 0xaU)) | (3U & 
                                              ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                               >> 2U))));
    vlSelfRef.top__DOT__proc__DOT__ALUControlD = Vtop__ConstPool__TABLE_hcb2af5a2_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[0U] 
        = vlSelfRef.__Vdly__top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[0U];
    vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
        = vlSelfRef.__Vdly__top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U];
    vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
        = vlSelfRef.__Vdly__top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U];
    vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
        = vlSelfRef.__Vdly__top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U];
    vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[4U] 
        = vlSelfRef.__Vdly__top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[4U];
    vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
        = vlSelfRef.__Vdly__top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U];
    vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[6U] 
        = vlSelfRef.__Vdly__top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[6U];
    vlSelfRef.top_pcF = vlSelfRef.top__DOT__proc__DOT__pcF;
    vlSelfRef.top_InstrF = vlSelfRef.top__DOT__im__DOT__IMEM
        [(0xffU & (vlSelfRef.top__DOT__proc__DOT__pcF 
                   >> 2U))];
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a4__cout 
        = (IData)((0xcU == (0xcU & vlSelfRef.top__DOT__proc__DOT__pcF)));
    vlSelfRef.top__DOT__proc__DOT__StallF = (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[6U] 
                                             & (((0x1fU 
                                                  & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U]) 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                     >> 0xfU))) 
                                                | ((0x1fU 
                                                    & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U]) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                       >> 0x14U)))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  >> 0xeU) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                              >> 0x1fU)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__isAddSub 
        = (1U & ((IData)((0U == (0xe000000U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U]))) 
                 | ((IData)((0x1000000U == (0xb000000U 
                                            & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U]))) 
                    | (IData)((0x9000000U == (0x9000000U 
                                              & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U]))))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  >> 0xdU) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                              >> 0x1eU)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  >> 0xcU) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                              >> 0x1dU)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  >> 0xbU) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                              >> 0x1cU)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  >> 0xaU) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                              >> 0x1bU)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  >> 9U) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                            >> 0x1aU)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  >> 8U) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                            >> 0x19U)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  >> 7U) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                            >> 0x18U)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  >> 6U) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                            >> 0x17U)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  >> 5U) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                            >> 0x16U)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  >> 4U) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                            >> 0x15U)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  >> 3U) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                            >> 0x14U)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  >> 2U) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                            >> 0x13U)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  >> 1U) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                            >> 0x12U)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                 ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                    >> 0x11U)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x1fU) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 0x10U)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x1eU) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 0xfU)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x1dU) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 0xeU)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x1cU) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 0xdU)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x1bU) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 0xcU)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x1aU) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 0xbU)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x19U) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 0xaU)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x18U) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 9U)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x17U) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 8U)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x16U) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 7U)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x15U) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 6U)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x14U) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 5U)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x13U) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 4U)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x12U) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 3U)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x11U) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 2U)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__carry__BRA__0__KET__ 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0xfU) & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U]));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x10U) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 1U)));
    vlSelfRef.top__DOT__proc__DOT__ForwardAE = 0U;
    if ((0U != (0x1fU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                         >> 0xaU)))) {
        if ((((0x1fU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                        >> 0xaU)) == (0x1fU & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U])) 
             & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                >> 0xdU))) {
            vlSelfRef.top__DOT__proc__DOT__ForwardAE = 2U;
        } else if ((((0x1fU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                               >> 0xaU)) == (0x1fU 
                                             & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[2U])) 
                    & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[4U] 
                       >> 7U))) {
            vlSelfRef.top__DOT__proc__DOT__ForwardAE = 1U;
        }
    }
    vlSelfRef.top__DOT__proc__DOT__ForwardBE = 0U;
    if ((0U != (0x1fU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                         >> 5U)))) {
        if ((((0x1fU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                        >> 5U)) == (0x1fU & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U])) 
             & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                >> 0xdU))) {
            vlSelfRef.top__DOT__proc__DOT__ForwardBE = 2U;
        } else if ((((0x1fU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                               >> 5U)) == (0x1fU & 
                                           vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[2U])) 
                    & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[4U] 
                       >> 7U))) {
            vlSelfRef.top__DOT__proc__DOT__ForwardBE = 1U;
        }
    }
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a5__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a4__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 4U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x10U) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 1U)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__carry__BRA__0__KET__) 
                                           & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE = 
        ((2U & (IData)(vlSelfRef.top__DOT__proc__DOT__ForwardAE))
          ? ((1U & (IData)(vlSelfRef.top__DOT__proc__DOT__ForwardAE))
              ? 0U : ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                       << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                    >> 5U))) : ((1U 
                                                 & (IData)(vlSelfRef.top__DOT__proc__DOT__ForwardAE))
                                                 ? vlSelfRef.top__DOT__proc__DOT__dp__DOT__ResultW
                                                 : 
                                                ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                                  << 0x11U) 
                                                 | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[4U] 
                                                    >> 0xfU))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__WriteDataE 
        = ((2U & (IData)(vlSelfRef.top__DOT__proc__DOT__ForwardBE))
            ? ((1U & (IData)(vlSelfRef.top__DOT__proc__DOT__ForwardBE))
                ? 0U : ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                         << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                      >> 5U))) : ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__proc__DOT__ForwardBE))
                                                   ? vlSelfRef.top__DOT__proc__DOT__dp__DOT__ResultW
                                                   : 
                                                  ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[4U] 
                                                    << 0x11U) 
                                                   | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                                      >> 0xfU))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a6__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a5__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 5U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x11U) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 2U)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout) 
                                           & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcBE = 
        ((0x800000U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
          ? vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U]
          : vlSelfRef.top__DOT__proc__DOT__dp__DOT__WriteDataE);
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a7__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a6__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 6U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x12U) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 3U)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout) 
                                           & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__and1__y 
        = (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
           & vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcBE);
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__or1__y 
        = (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
           | vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcBE);
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__xor1__y 
        = (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
           ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcBE);
    if ((1U & vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcBE)) {
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift1 
            = VL_SHIFTL_III(32,32,32, vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE, 1U);
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift1 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE, 1U);
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift1 
            = ((0x80000000U & vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE) 
               | (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  >> 1U));
    } else {
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift1 
            = vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE;
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift1 
            = vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE;
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift1 
            = vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE;
    }
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
        = ((0x1000000U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
            ? (~ vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcBE)
            : vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcBE);
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a8__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a7__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 7U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x13U) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 4U)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout) 
                                           & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[2U] 
        = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__and1__y;
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[3U] 
        = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__or1__y;
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[4U] 
        = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__xor1__y;
    if ((2U & vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcBE)) {
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift2 
            = VL_SHIFTL_III(32,32,32, vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift1, 2U);
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift2 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift1, 2U);
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift2 
            = (((- (IData)((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                            >> 0x1fU))) << 0x1eU) | 
               (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift1 
                >> 2U));
    } else {
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift2 
            = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift1;
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift2 
            = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift1;
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift2 
            = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift1;
    }
    top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0 
        = ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
            ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
           >> 0x1fU);
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x1eU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x1dU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x1cU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x1bU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x1aU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x19U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x18U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x17U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x16U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x15U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x14U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x13U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x12U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x11U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x10U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0xfU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0xeU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0xdU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0xcU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0xbU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0xaU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 9U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 8U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 7U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 6U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 5U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 4U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 3U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 2U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 1U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a1__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                 ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a9__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a8__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 8U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x14U) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 5U)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout) 
                                           & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0))));
    if ((4U & vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcBE)) {
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift3 
            = VL_SHIFTL_III(32,32,32, vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift2, 4U);
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift3 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift2, 4U);
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift3 
            = (((- (IData)((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                            >> 0x1fU))) << 0x1cU) | 
               (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift2 
                >> 4U));
    } else {
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift3 
            = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift2;
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift3 
            = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift2;
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift3 
            = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift2;
    }
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__carry__BRA__0__KET__ 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 | ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                     >> 0x18U) & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a1__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a10__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a9__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 9U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x15U) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 6U)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout) 
                                           & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0))));
    if ((8U & vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcBE)) {
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift4 
            = VL_SHIFTL_III(32,32,32, vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift3, 8U);
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift4 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift3, 8U);
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift4 
            = (((- (IData)((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                            >> 0x1fU))) << 0x18U) | 
               (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift3 
                >> 8U));
    } else {
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift4 
            = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift3;
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift4 
            = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift3;
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift4 
            = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift3;
    }
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a2__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 1U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__carry__BRA__0__KET__) 
                            & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a11__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a10__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 0xaU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x16U) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 7U)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout) 
                                           & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0))));
    if ((0x10U & vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcBE)) {
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift5 
            = VL_SHIFTL_III(32,32,32, vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift4, 0x10U);
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift5 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift4, 0x10U);
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift5 
            = (((- (IData)((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                            >> 0x1fU))) << 0x10U) | 
               (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift4 
                >> 0x10U));
    } else {
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift5 
            = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift4;
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift5 
            = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift4;
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift5 
            = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift4;
    }
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a3__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 2U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a2__cout) 
                            & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a12__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a11__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 0xbU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x17U) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 8U)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout) 
                                           & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[6U] 
        = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift5;
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[7U] 
        = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift5;
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[8U] 
        = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift5;
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a4__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 3U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a3__cout) 
                            & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a13__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a12__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 0xcU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x18U) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 9U)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout) 
                                           & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a5__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 4U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a4__cout) 
                            & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a14__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a13__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 0xdU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x19U) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 0xaU)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout) 
                                             & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a6__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 5U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a5__cout) 
                            & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a15__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a14__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 0xeU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x1aU) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 0xbU)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout) 
                                             & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a7__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 6U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a6__cout) 
                            & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a16__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a15__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 0xfU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x1bU) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 0xcU)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout) 
                                             & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a8__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 7U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a7__cout) 
                            & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a17__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a16__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 0x10U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x1cU) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 0xdU)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout) 
                                             & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a9__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 8U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a8__cout) 
                            & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a18__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a17__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 0x11U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x1dU) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 0xeU)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout) 
                                             & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a10__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 9U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a9__cout) 
                            & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a19__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a18__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 0x12U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x1eU) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 0xfU)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout) 
                                             & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a11__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0xaU) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a10__cout) 
                              & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a20__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a19__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 0x13U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x1fU) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 0x10U)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout) 
                                              & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a12__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0xbU) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a11__cout) 
                              & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a21__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a20__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 0x14U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                     >> 0x11U)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout) 
                                   & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a13__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0xcU) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a12__cout) 
                              & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a22__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a21__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 0x15U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                   >> 1U) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                             >> 0x12U)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout) 
                                           & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a14__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0xdU) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a13__cout) 
                              & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a23__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a22__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 0x16U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                   >> 2U) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                             >> 0x13U)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout) 
                                           & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a15__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0xeU) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a14__cout) 
                              & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a24__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a23__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 0x17U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                   >> 3U) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                             >> 0x14U)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout) 
                                           & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a16__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0xfU) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a15__cout) 
                              & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a25__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a24__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 0x18U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                   >> 4U) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                             >> 0x15U)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout) 
                                           & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a17__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x10U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a16__cout) 
                               & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a26__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a25__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 0x19U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                   >> 5U) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                             >> 0x16U)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout) 
                                           & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a18__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x11U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a17__cout) 
                               & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a27__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a26__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 0x1aU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                   >> 6U) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                             >> 0x17U)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout) 
                                           & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a19__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x12U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a18__cout) 
                               & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a28__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a27__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 0x1bU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                   >> 7U) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                             >> 0x18U)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout) 
                                           & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a20__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x13U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a19__cout) 
                               & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a29__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a28__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 0x1cU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                   >> 8U) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                             >> 0x19U)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout) 
                                           & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a21__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x14U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a20__cout) 
                               & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a30__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a29__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 0x1dU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                   >> 9U) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                             >> 0x1aU)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout) 
                                           & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a22__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x15U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a21__cout) 
                               & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a30__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 0x1eU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                   >> 0xaU) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 0x1bU)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout) 
                                             & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a23__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x16U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a22__cout) 
                               & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCPlus4F 
        = (((((((0x80000000U & vlSelfRef.top__DOT__proc__DOT__pcF) 
                ^ ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout) 
                   << 0x1fU)) | (0x40000000U & ((0xc0000000U 
                                                 & vlSelfRef.top__DOT__proc__DOT__pcF) 
                                                ^ ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a30__cout) 
                                                   << 0x1eU)))) 
              | ((0x20000000U & ((0xe0000000U & vlSelfRef.top__DOT__proc__DOT__pcF) 
                                 ^ ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a29__cout) 
                                    << 0x1dU))) | (0x10000000U 
                                                   & ((0xf0000000U 
                                                       & vlSelfRef.top__DOT__proc__DOT__pcF) 
                                                      ^ 
                                                      ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a28__cout) 
                                                       << 0x1cU))))) 
             | (((0x8000000U & ((0xf8000000U & vlSelfRef.top__DOT__proc__DOT__pcF) 
                                ^ ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a27__cout) 
                                   << 0x1bU))) | (0x4000000U 
                                                  & ((0xfc000000U 
                                                      & vlSelfRef.top__DOT__proc__DOT__pcF) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a26__cout) 
                                                      << 0x1aU)))) 
                | ((0x2000000U & ((0xfe000000U & vlSelfRef.top__DOT__proc__DOT__pcF) 
                                  ^ ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a25__cout) 
                                     << 0x19U))) | 
                   (0x1000000U & ((0xff000000U & vlSelfRef.top__DOT__proc__DOT__pcF) 
                                  ^ ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a24__cout) 
                                     << 0x18U)))))) 
            | ((((0x800000U & ((0xff800000U & vlSelfRef.top__DOT__proc__DOT__pcF) 
                               ^ ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a23__cout) 
                                  << 0x17U))) | (0x400000U 
                                                 & ((0xffc00000U 
                                                     & vlSelfRef.top__DOT__proc__DOT__pcF) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a22__cout) 
                                                     << 0x16U)))) 
                | ((0x200000U & ((0xffe00000U & vlSelfRef.top__DOT__proc__DOT__pcF) 
                                 ^ ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a21__cout) 
                                    << 0x15U))) | (0x100000U 
                                                   & ((0xfff00000U 
                                                       & vlSelfRef.top__DOT__proc__DOT__pcF) 
                                                      ^ 
                                                      ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a20__cout) 
                                                       << 0x14U))))) 
               | (((0x80000U & ((0xfff80000U & vlSelfRef.top__DOT__proc__DOT__pcF) 
                                ^ ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a19__cout) 
                                   << 0x13U))) | (0x40000U 
                                                  & ((0xfffc0000U 
                                                      & vlSelfRef.top__DOT__proc__DOT__pcF) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a18__cout) 
                                                      << 0x12U)))) 
                  | ((0x20000U & ((0xfffe0000U & vlSelfRef.top__DOT__proc__DOT__pcF) 
                                  ^ ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a17__cout) 
                                     << 0x11U))) | 
                     (0x10000U & ((0xffff0000U & vlSelfRef.top__DOT__proc__DOT__pcF) 
                                  ^ ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a16__cout) 
                                     << 0x10U))))))) 
           | (((((0x8000U & ((0xffff8000U & vlSelfRef.top__DOT__proc__DOT__pcF) 
                             ^ ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a15__cout) 
                                << 0xfU))) | (0x4000U 
                                              & ((0xffffc000U 
                                                  & vlSelfRef.top__DOT__proc__DOT__pcF) 
                                                 ^ 
                                                 ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a14__cout) 
                                                  << 0xeU)))) 
                | ((0x2000U & ((0xffffe000U & vlSelfRef.top__DOT__proc__DOT__pcF) 
                               ^ ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a13__cout) 
                                  << 0xdU))) | (0x1000U 
                                                & ((0xfffff000U 
                                                    & vlSelfRef.top__DOT__proc__DOT__pcF) 
                                                   ^ 
                                                   ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a12__cout) 
                                                    << 0xcU))))) 
               | (((0x800U & ((0xfffff800U & vlSelfRef.top__DOT__proc__DOT__pcF) 
                              ^ ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a11__cout) 
                                 << 0xbU))) | (0x400U 
                                               & ((0xfffffc00U 
                                                   & vlSelfRef.top__DOT__proc__DOT__pcF) 
                                                  ^ 
                                                  ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a10__cout) 
                                                   << 0xaU)))) 
                  | ((0x200U & ((0xfffffe00U & vlSelfRef.top__DOT__proc__DOT__pcF) 
                                ^ ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a9__cout) 
                                   << 9U))) | (0x100U 
                                               & ((0xffffff00U 
                                                   & vlSelfRef.top__DOT__proc__DOT__pcF) 
                                                  ^ 
                                                  ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a8__cout) 
                                                   << 8U)))))) 
              | ((((0x80U & ((0xffffff80U & vlSelfRef.top__DOT__proc__DOT__pcF) 
                             ^ ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a7__cout) 
                                << 7U))) | (0x40U & 
                                            ((0xffffffc0U 
                                              & vlSelfRef.top__DOT__proc__DOT__pcF) 
                                             ^ ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a6__cout) 
                                                << 6U)))) 
                  | ((0x20U & ((0xffffffe0U & vlSelfRef.top__DOT__proc__DOT__pcF) 
                               ^ ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a5__cout) 
                                  << 5U))) | (0x10U 
                                              & ((0xfffffff0U 
                                                  & vlSelfRef.top__DOT__proc__DOT__pcF) 
                                                 ^ 
                                                 ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a4__cout) 
                                                  << 4U))))) 
                 | ((8U & (VL_REDXOR_4((0xcU & vlSelfRef.top__DOT__proc__DOT__pcF)) 
                           << 3U)) | ((4U & ((~ (vlSelfRef.top__DOT__proc__DOT__pcF 
                                                 >> 2U)) 
                                             << 2U)) 
                                      | (3U & vlSelfRef.top__DOT__proc__DOT__pcF))))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                   >> 0xbU) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 0x1cU)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout) 
                                             & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a24__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x17U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a23__cout) 
                               & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                   >> 0xcU) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 0x1dU)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout) 
                                             & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a25__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x18U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a24__cout) 
                               & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                   >> 0xdU) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 0x1eU)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout) 
                                             & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a26__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x19U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a25__cout) 
                               & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCTargetE 
        = ((((((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0) 
                 ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout)) 
                << 0x1fU) | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0) 
                              ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout)) 
                             << 0x1eU)) | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout)) 
                                            << 0x1dU) 
                                           | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                               ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout)) 
                                              << 0x1cU))) 
             | (((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0) 
                   ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout)) 
                  << 0x1bU) | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout)) 
                               << 0x1aU)) | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                               ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout)) 
                                              << 0x19U) 
                                             | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                 ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout)) 
                                                << 0x18U)))) 
            | ((((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0) 
                   ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout)) 
                  << 0x17U) | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout)) 
                               << 0x16U)) | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                               ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout)) 
                                              << 0x15U) 
                                             | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                 ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout)) 
                                                << 0x14U))) 
               | (((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0) 
                     ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout)) 
                    << 0x13U) | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                  ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout)) 
                                 << 0x12U)) | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                 ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout)) 
                                                << 0x11U) 
                                               | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                   ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout)) 
                                                  << 0x10U))))) 
           | (((((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0) 
                   ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout)) 
                  << 0xfU) | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0) 
                               ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout)) 
                              << 0xeU)) | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout)) 
                                            << 0xdU) 
                                           | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                               ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout)) 
                                              << 0xcU))) 
               | (((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0) 
                     ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout)) 
                    << 0xbU) | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                 ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout)) 
                                << 0xaU)) | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                               ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout)) 
                                              << 9U) 
                                             | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                 ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout)) 
                                                << 8U)))) 
              | ((((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0) 
                     ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout)) 
                    << 7U) | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0) 
                               ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout)) 
                              << 6U)) | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                           ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout)) 
                                          << 5U) | 
                                         (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                           ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout)) 
                                          << 4U))) 
                 | (((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0) 
                       ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout)) 
                      << 3U) | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                 ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout)) 
                                << 2U)) | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__carry__BRA__0__KET__)) 
                                            << 1U) 
                                           | (1U & 
                                              ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                                >> 0xfU) 
                                               ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U])))))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a27__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x1aU) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a26__cout) 
                               & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a28__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x1bU) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a27__cout) 
                               & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a29__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x1cU) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a28__cout) 
                               & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a30__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x1dU) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a29__cout) 
                               & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a31__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x1eU) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a30__cout) 
                               & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a32__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x1fU) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a31__cout) 
                               & (IData)(top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__Neg 
        = ((IData)(top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0) 
           ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a31__cout));
    vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__bru__DOT__Carry 
        = (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a32__cout) 
            ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
               >> 0x18U)) & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__isAddSub));
    top__DOT__proc__DOT__ctrl__DOT__bru__DOT____VdfgExtracted_h4ead3b55__0 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__Neg) 
           ^ ((~ ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                   >> 0x18U) ^ ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                 ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcBE) 
                                >> 0x1fU))) & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                                 >> 0x1fU) 
                                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__Neg)) 
                                               & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__isAddSub))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sum 
        = (((((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__Neg) 
                << 0x1fU) | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0) 
                              ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a30__cout)) 
                             << 0x1eU)) | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a29__cout)) 
                                            << 0x1dU) 
                                           | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                               ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a28__cout)) 
                                              << 0x1cU))) 
             | (((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0) 
                   ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a27__cout)) 
                  << 0x1bU) | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a26__cout)) 
                               << 0x1aU)) | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                               ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a25__cout)) 
                                              << 0x19U) 
                                             | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                 ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a24__cout)) 
                                                << 0x18U)))) 
            | ((((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0) 
                   ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a23__cout)) 
                  << 0x17U) | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a22__cout)) 
                               << 0x16U)) | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                               ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a21__cout)) 
                                              << 0x15U) 
                                             | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                 ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a20__cout)) 
                                                << 0x14U))) 
               | (((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0) 
                     ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a19__cout)) 
                    << 0x13U) | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                  ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a18__cout)) 
                                 << 0x12U)) | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                 ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a17__cout)) 
                                                << 0x11U) 
                                               | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                   ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a16__cout)) 
                                                  << 0x10U))))) 
           | (((((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0) 
                   ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a15__cout)) 
                  << 0xfU) | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0) 
                               ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a14__cout)) 
                              << 0xeU)) | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a13__cout)) 
                                            << 0xdU) 
                                           | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                               ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a12__cout)) 
                                              << 0xcU))) 
               | (((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0) 
                     ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a11__cout)) 
                    << 0xbU) | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                 ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a10__cout)) 
                                << 0xaU)) | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                               ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a9__cout)) 
                                              << 9U) 
                                             | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                 ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a8__cout)) 
                                                << 8U)))) 
              | ((((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0) 
                     ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a7__cout)) 
                    << 7U) | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0) 
                               ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a6__cout)) 
                              << 6U)) | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                           ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a5__cout)) 
                                          << 5U) | 
                                         (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                           ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a4__cout)) 
                                          << 4U))) 
                 | (((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0) 
                       ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a3__cout)) 
                      << 3U) | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                 ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a2__cout)) 
                                << 2U)) | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__carry__BRA__0__KET__)) 
                                            << 1U) 
                                           | (1U & 
                                              ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a1__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                               ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                                  >> 0x18U))))))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[0U] 
        = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sum;
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[1U] 
        = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sum;
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[5U] 
        = top__DOT__proc__DOT__ctrl__DOT__bru__DOT____VdfgExtracted_h4ead3b55__0;
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[9U] 
        = vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__bru__DOT__Carry;
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[0xaU] 
        = vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcBE;
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALUResultE 
        = ((0x8000000U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
            ? ((0x4000000U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
                ? ((0x2000000U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
                    ? ((0x1000000U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
                        ? vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                       [0xfU] : vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                       [0xeU]) : ((0x1000000U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
                                   ? vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                                  [0xdU] : vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                                  [0xcU])) : ((0x2000000U 
                                               & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
                                               ? ((0x1000000U 
                                                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
                                                   ? 
                                                  vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                                                  [0xbU]
                                                   : 
                                                  vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                                                  [0xaU])
                                               : ((0x1000000U 
                                                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
                                                   ? 
                                                  vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                                                  [9U]
                                                   : vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift5)))
            : ((0x4000000U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
                ? ((0x2000000U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
                    ? ((0x1000000U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
                        ? vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift5
                        : vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift5)
                    : ((0x1000000U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
                        ? vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                       [5U] : vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__xor1__y))
                : ((0x2000000U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
                    ? ((0x1000000U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
                        ? vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__or1__y
                        : vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__and1__y)
                    : ((0x1000000U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
                        ? vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                       [1U] : vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                       [0U]))));
    __Vtableidx2 = (((((0xffffffffU == (~ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALUResultE)) 
                       << 8U) | ((0x80U & ((~ (0xffffffffU 
                                               == (~ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALUResultE))) 
                                           << 7U)) 
                                 | ((IData)(top__DOT__proc__DOT__ctrl__DOT__bru__DOT____VdfgExtracted_h4ead3b55__0) 
                                    << 6U))) | ((0x20U 
                                                 & ((~ (IData)(top__DOT__proc__DOT__ctrl__DOT__bru__DOT____VdfgExtracted_h4ead3b55__0)) 
                                                    << 5U)) 
                                                | ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__bru__DOT__Carry) 
                                                   << 4U))) 
                    | ((8U & ((~ (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__bru__DOT__Carry)) 
                              << 3U)) | (7U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                               >> 0x14U))));
    vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__bru__DOT__cond 
        = Vtop__ConstPool__TABLE_h51c4d583_0[__Vtableidx2];
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCmux__DOT____VdfgRegularize_hae03c8cc_0_0 
        = (1U & ((~ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                     >> 0x1dU)) & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                    >> 0x1eU) | ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                                  >> 0x1cU) 
                                                 & (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__bru__DOT__cond)))));
    vlSelfRef.top__DOT__proc__DOT__PCSrcE = ((2U & 
                                              (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                               >> 0x1cU)) 
                                             | (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCmux__DOT____VdfgRegularize_hae03c8cc_0_0));
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../../00_src/top.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../../00_src/top.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
