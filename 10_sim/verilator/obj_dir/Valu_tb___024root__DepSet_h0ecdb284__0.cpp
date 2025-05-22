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
    // Init
    CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0;
    alu_tb__DOT__dut__DOT__add1__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0 = 0;
    // Body
    vlSelfRef.alu_tb__DOT__dut__DOT____Vcellout__and1__y 
        = (vlSelfRef.alu_tb__DOT__a & vlSelfRef.alu_tb__DOT__b);
    vlSelfRef.alu_tb__DOT__dut__DOT____Vcellout__or1__y 
        = (vlSelfRef.alu_tb__DOT__a | vlSelfRef.alu_tb__DOT__b);
    vlSelfRef.alu_tb__DOT__dut__DOT____Vcellout__xor1__y 
        = (vlSelfRef.alu_tb__DOT__a ^ vlSelfRef.alu_tb__DOT__b);
    if ((1U & vlSelfRef.alu_tb__DOT__b)) {
        vlSelfRef.alu_tb__DOT__dut__DOT__sll1__DOT__shift1 
            = VL_SHIFTL_III(32,32,32, vlSelfRef.alu_tb__DOT__a, 1U);
        vlSelfRef.alu_tb__DOT__dut__DOT__srl1__DOT__shift1 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.alu_tb__DOT__a, 1U);
        vlSelfRef.alu_tb__DOT__dut__DOT__sra1__DOT__shift1 
            = ((0x80000000U & vlSelfRef.alu_tb__DOT__a) 
               | (vlSelfRef.alu_tb__DOT__a >> 1U));
    } else {
        vlSelfRef.alu_tb__DOT__dut__DOT__sll1__DOT__shift1 
            = vlSelfRef.alu_tb__DOT__a;
        vlSelfRef.alu_tb__DOT__dut__DOT__srl1__DOT__shift1 
            = vlSelfRef.alu_tb__DOT__a;
        vlSelfRef.alu_tb__DOT__dut__DOT__sra1__DOT__shift1 
            = vlSelfRef.alu_tb__DOT__a;
    }
    vlSelfRef.alu_tb__DOT__dut__DOT__src_b = ((1U & (IData)(vlSelfRef.alu_tb__DOT__ALUControl))
                                               ? (~ vlSelfRef.alu_tb__DOT__b)
                                               : vlSelfRef.alu_tb__DOT__b);
    vlSelfRef.alu_tb__DOT__dut__DOT__entry[2U] = vlSelfRef.alu_tb__DOT__dut__DOT____Vcellout__and1__y;
    vlSelfRef.alu_tb__DOT__dut__DOT__entry[3U] = vlSelfRef.alu_tb__DOT__dut__DOT____Vcellout__or1__y;
    vlSelfRef.alu_tb__DOT__dut__DOT__entry[4U] = vlSelfRef.alu_tb__DOT__dut__DOT____Vcellout__xor1__y;
    if ((2U & vlSelfRef.alu_tb__DOT__b)) {
        vlSelfRef.alu_tb__DOT__dut__DOT__sll1__DOT__shift2 
            = VL_SHIFTL_III(32,32,32, vlSelfRef.alu_tb__DOT__dut__DOT__sll1__DOT__shift1, 2U);
        vlSelfRef.alu_tb__DOT__dut__DOT__srl1__DOT__shift2 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.alu_tb__DOT__dut__DOT__srl1__DOT__shift1, 2U);
        vlSelfRef.alu_tb__DOT__dut__DOT__sra1__DOT__shift2 
            = (((- (IData)((vlSelfRef.alu_tb__DOT__a 
                            >> 0x1fU))) << 0x1eU) | 
               (vlSelfRef.alu_tb__DOT__dut__DOT__sra1__DOT__shift1 
                >> 2U));
    } else {
        vlSelfRef.alu_tb__DOT__dut__DOT__sll1__DOT__shift2 
            = vlSelfRef.alu_tb__DOT__dut__DOT__sll1__DOT__shift1;
        vlSelfRef.alu_tb__DOT__dut__DOT__srl1__DOT__shift2 
            = vlSelfRef.alu_tb__DOT__dut__DOT__srl1__DOT__shift1;
        vlSelfRef.alu_tb__DOT__dut__DOT__sra1__DOT__shift2 
            = vlSelfRef.alu_tb__DOT__dut__DOT__sra1__DOT__shift1;
    }
    alu_tb__DOT__dut__DOT__add1__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0 
        = ((vlSelfRef.alu_tb__DOT__a ^ vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
           >> 0x1fU);
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a ^ vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                 >> 0x1eU));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a ^ vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                 >> 0x1dU));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a ^ vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                 >> 0x1cU));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a ^ vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                 >> 0x1bU));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a ^ vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                 >> 0x1aU));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a ^ vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                 >> 0x19U));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a ^ vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                 >> 0x18U));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a ^ vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                 >> 0x17U));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a ^ vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                 >> 0x16U));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a ^ vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                 >> 0x15U));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a ^ vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                 >> 0x14U));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a ^ vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                 >> 0x13U));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a ^ vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                 >> 0x12U));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a ^ vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                 >> 0x11U));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a ^ vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                 >> 0x10U));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a ^ vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                 >> 0xfU));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a ^ vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                 >> 0xeU));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a ^ vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                 >> 0xdU));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a ^ vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                 >> 0xcU));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a ^ vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                 >> 0xbU));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a ^ vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                 >> 0xaU));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a ^ vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                 >> 9U));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a ^ vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                 >> 8U));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a ^ vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                 >> 7U));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a ^ vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                 >> 6U));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a ^ vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                 >> 5U));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a ^ vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                 >> 4U));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a ^ vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                 >> 3U));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a ^ vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                 >> 2U));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.alu_tb__DOT__a ^ vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                 >> 1U));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a1__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & (vlSelfRef.alu_tb__DOT__a ^ vlSelfRef.alu_tb__DOT__dut__DOT__src_b));
    if ((4U & vlSelfRef.alu_tb__DOT__b)) {
        vlSelfRef.alu_tb__DOT__dut__DOT__sll1__DOT__shift3 
            = VL_SHIFTL_III(32,32,32, vlSelfRef.alu_tb__DOT__dut__DOT__sll1__DOT__shift2, 4U);
        vlSelfRef.alu_tb__DOT__dut__DOT__srl1__DOT__shift3 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.alu_tb__DOT__dut__DOT__srl1__DOT__shift2, 4U);
        vlSelfRef.alu_tb__DOT__dut__DOT__sra1__DOT__shift3 
            = (((- (IData)((vlSelfRef.alu_tb__DOT__a 
                            >> 0x1fU))) << 0x1cU) | 
               (vlSelfRef.alu_tb__DOT__dut__DOT__sra1__DOT__shift2 
                >> 4U));
    } else {
        vlSelfRef.alu_tb__DOT__dut__DOT__sll1__DOT__shift3 
            = vlSelfRef.alu_tb__DOT__dut__DOT__sll1__DOT__shift2;
        vlSelfRef.alu_tb__DOT__dut__DOT__srl1__DOT__shift3 
            = vlSelfRef.alu_tb__DOT__dut__DOT__srl1__DOT__shift2;
        vlSelfRef.alu_tb__DOT__dut__DOT__sra1__DOT__shift3 
            = vlSelfRef.alu_tb__DOT__dut__DOT__sra1__DOT__shift2;
    }
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__carry__BRA__0__KET__ 
        = (1U & ((vlSelfRef.alu_tb__DOT__a & vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                 | ((IData)(vlSelfRef.alu_tb__DOT__ALUControl) 
                    & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a1__DOT____VdfgRegularize_h53fb3b80_0_0))));
    if ((8U & vlSelfRef.alu_tb__DOT__b)) {
        vlSelfRef.alu_tb__DOT__dut__DOT__sll1__DOT__shift4 
            = VL_SHIFTL_III(32,32,32, vlSelfRef.alu_tb__DOT__dut__DOT__sll1__DOT__shift3, 8U);
        vlSelfRef.alu_tb__DOT__dut__DOT__srl1__DOT__shift4 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.alu_tb__DOT__dut__DOT__srl1__DOT__shift3, 8U);
        vlSelfRef.alu_tb__DOT__dut__DOT__sra1__DOT__shift4 
            = (((- (IData)((vlSelfRef.alu_tb__DOT__a 
                            >> 0x1fU))) << 0x18U) | 
               (vlSelfRef.alu_tb__DOT__dut__DOT__sra1__DOT__shift3 
                >> 8U));
    } else {
        vlSelfRef.alu_tb__DOT__dut__DOT__sll1__DOT__shift4 
            = vlSelfRef.alu_tb__DOT__dut__DOT__sll1__DOT__shift3;
        vlSelfRef.alu_tb__DOT__dut__DOT__srl1__DOT__shift4 
            = vlSelfRef.alu_tb__DOT__dut__DOT__srl1__DOT__shift3;
        vlSelfRef.alu_tb__DOT__dut__DOT__sra1__DOT__shift4 
            = vlSelfRef.alu_tb__DOT__dut__DOT__sra1__DOT__shift3;
    }
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a2__cout 
        = (1U & (((vlSelfRef.alu_tb__DOT__a & vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                  >> 1U) | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__carry__BRA__0__KET__) 
                            & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0))));
    if ((0x10U & vlSelfRef.alu_tb__DOT__b)) {
        vlSelfRef.alu_tb__DOT__dut__DOT__sll1__DOT__shift5 
            = VL_SHIFTL_III(32,32,32, vlSelfRef.alu_tb__DOT__dut__DOT__sll1__DOT__shift4, 0x10U);
        vlSelfRef.alu_tb__DOT__dut__DOT__srl1__DOT__shift5 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.alu_tb__DOT__dut__DOT__srl1__DOT__shift4, 0x10U);
        vlSelfRef.alu_tb__DOT__dut__DOT__sra1__DOT__shift5 
            = (((- (IData)((vlSelfRef.alu_tb__DOT__a 
                            >> 0x1fU))) << 0x10U) | 
               (vlSelfRef.alu_tb__DOT__dut__DOT__sra1__DOT__shift4 
                >> 0x10U));
    } else {
        vlSelfRef.alu_tb__DOT__dut__DOT__sll1__DOT__shift5 
            = vlSelfRef.alu_tb__DOT__dut__DOT__sll1__DOT__shift4;
        vlSelfRef.alu_tb__DOT__dut__DOT__srl1__DOT__shift5 
            = vlSelfRef.alu_tb__DOT__dut__DOT__srl1__DOT__shift4;
        vlSelfRef.alu_tb__DOT__dut__DOT__sra1__DOT__shift5 
            = vlSelfRef.alu_tb__DOT__dut__DOT__sra1__DOT__shift4;
    }
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a3__cout 
        = (1U & (((vlSelfRef.alu_tb__DOT__a & vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                  >> 2U) | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a2__cout) 
                            & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.alu_tb__DOT__dut__DOT__entry[6U] = vlSelfRef.alu_tb__DOT__dut__DOT__sll1__DOT__shift5;
    vlSelfRef.alu_tb__DOT__dut__DOT__entry[7U] = vlSelfRef.alu_tb__DOT__dut__DOT__srl1__DOT__shift5;
    vlSelfRef.alu_tb__DOT__dut__DOT__entry[8U] = vlSelfRef.alu_tb__DOT__dut__DOT__sra1__DOT__shift5;
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a4__cout 
        = (1U & (((vlSelfRef.alu_tb__DOT__a & vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                  >> 3U) | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a3__cout) 
                            & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a5__cout 
        = (1U & (((vlSelfRef.alu_tb__DOT__a & vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                  >> 4U) | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a4__cout) 
                            & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a6__cout 
        = (1U & (((vlSelfRef.alu_tb__DOT__a & vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                  >> 5U) | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a5__cout) 
                            & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a7__cout 
        = (1U & (((vlSelfRef.alu_tb__DOT__a & vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                  >> 6U) | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a6__cout) 
                            & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a8__cout 
        = (1U & (((vlSelfRef.alu_tb__DOT__a & vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                  >> 7U) | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a7__cout) 
                            & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a9__cout 
        = (1U & (((vlSelfRef.alu_tb__DOT__a & vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                  >> 8U) | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a8__cout) 
                            & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a10__cout 
        = (1U & (((vlSelfRef.alu_tb__DOT__a & vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                  >> 9U) | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a9__cout) 
                            & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a11__cout 
        = (1U & (((vlSelfRef.alu_tb__DOT__a & vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                  >> 0xaU) | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a10__cout) 
                              & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a12__cout 
        = (1U & (((vlSelfRef.alu_tb__DOT__a & vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                  >> 0xbU) | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a11__cout) 
                              & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a13__cout 
        = (1U & (((vlSelfRef.alu_tb__DOT__a & vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                  >> 0xcU) | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a12__cout) 
                              & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a14__cout 
        = (1U & (((vlSelfRef.alu_tb__DOT__a & vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                  >> 0xdU) | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a13__cout) 
                              & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a15__cout 
        = (1U & (((vlSelfRef.alu_tb__DOT__a & vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                  >> 0xeU) | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a14__cout) 
                              & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a16__cout 
        = (1U & (((vlSelfRef.alu_tb__DOT__a & vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                  >> 0xfU) | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a15__cout) 
                              & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a17__cout 
        = (1U & (((vlSelfRef.alu_tb__DOT__a & vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                  >> 0x10U) | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a16__cout) 
                               & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a18__cout 
        = (1U & (((vlSelfRef.alu_tb__DOT__a & vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                  >> 0x11U) | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a17__cout) 
                               & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a19__cout 
        = (1U & (((vlSelfRef.alu_tb__DOT__a & vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                  >> 0x12U) | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a18__cout) 
                               & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a20__cout 
        = (1U & (((vlSelfRef.alu_tb__DOT__a & vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                  >> 0x13U) | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a19__cout) 
                               & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a21__cout 
        = (1U & (((vlSelfRef.alu_tb__DOT__a & vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                  >> 0x14U) | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a20__cout) 
                               & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a22__cout 
        = (1U & (((vlSelfRef.alu_tb__DOT__a & vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                  >> 0x15U) | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a21__cout) 
                               & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a23__cout 
        = (1U & (((vlSelfRef.alu_tb__DOT__a & vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                  >> 0x16U) | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a22__cout) 
                               & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a24__cout 
        = (1U & (((vlSelfRef.alu_tb__DOT__a & vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                  >> 0x17U) | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a23__cout) 
                               & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a25__cout 
        = (1U & (((vlSelfRef.alu_tb__DOT__a & vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                  >> 0x18U) | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a24__cout) 
                               & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a26__cout 
        = (1U & (((vlSelfRef.alu_tb__DOT__a & vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                  >> 0x19U) | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a25__cout) 
                               & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a27__cout 
        = (1U & (((vlSelfRef.alu_tb__DOT__a & vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                  >> 0x1aU) | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a26__cout) 
                               & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a28__cout 
        = (1U & (((vlSelfRef.alu_tb__DOT__a & vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                  >> 0x1bU) | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a27__cout) 
                               & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a29__cout 
        = (1U & (((vlSelfRef.alu_tb__DOT__a & vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                  >> 0x1cU) | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a28__cout) 
                               & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a30__cout 
        = (1U & (((vlSelfRef.alu_tb__DOT__a & vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                  >> 0x1dU) | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a29__cout) 
                               & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a31__cout 
        = (1U & (((vlSelfRef.alu_tb__DOT__a & vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                  >> 0x1eU) | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a30__cout) 
                               & (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a32__cout 
        = (1U & (((vlSelfRef.alu_tb__DOT__a & vlSelfRef.alu_tb__DOT__dut__DOT__src_b) 
                  >> 0x1fU) | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a31__cout) 
                               & (IData)(alu_tb__DOT__dut__DOT__add1__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a32__sum 
        = ((IData)(alu_tb__DOT__dut__DOT__add1__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0) 
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
    vlSelfRef.alu_tb__DOT__dut__DOT__entry[9U] = (1U 
                                                  & ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a32__cout) 
                                                     ^ (IData)(vlSelfRef.alu_tb__DOT__ALUControl)));
    vlSelfRef.alu_tb__DOT__dut__DOT__entry[0xaU] = 
        (0xfffffffeU & vlSelfRef.alu_tb__DOT__dut__DOT__sum);
    vlSelfRef.alu_tb__DOT__dut__DOT__entry[0xbU] = vlSelfRef.alu_tb__DOT__b;
    vlSelfRef.alu_tb__DOT__dut__DOT__entry[0xcU] = vlSelfRef.alu_tb__DOT__dut__DOT__sum;
    vlSelfRef.alu_tb__DOT__result = ((8U & (IData)(vlSelfRef.alu_tb__DOT__ALUControl))
                                      ? ((4U & (IData)(vlSelfRef.alu_tb__DOT__ALUControl))
                                          ? ((2U & (IData)(vlSelfRef.alu_tb__DOT__ALUControl))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.alu_tb__DOT__ALUControl))
                                                  ? 
                                                 vlSelfRef.alu_tb__DOT__dut__DOT__entry
                                                 [0xfU]
                                                  : 
                                                 vlSelfRef.alu_tb__DOT__dut__DOT__entry
                                                 [0xeU])
                                              : ((1U 
                                                  & (IData)(vlSelfRef.alu_tb__DOT__ALUControl))
                                                  ? 
                                                 vlSelfRef.alu_tb__DOT__dut__DOT__entry
                                                 [0xdU]
                                                  : 
                                                 vlSelfRef.alu_tb__DOT__dut__DOT__entry
                                                 [0xcU]))
                                          : ((2U & (IData)(vlSelfRef.alu_tb__DOT__ALUControl))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.alu_tb__DOT__ALUControl))
                                                  ? 
                                                 vlSelfRef.alu_tb__DOT__dut__DOT__entry
                                                 [0xbU]
                                                  : 
                                                 vlSelfRef.alu_tb__DOT__dut__DOT__entry
                                                 [0xaU])
                                              : ((1U 
                                                  & (IData)(vlSelfRef.alu_tb__DOT__ALUControl))
                                                  ? 
                                                 vlSelfRef.alu_tb__DOT__dut__DOT__entry
                                                 [9U]
                                                  : vlSelfRef.alu_tb__DOT__dut__DOT__sra1__DOT__shift5)))
                                      : ((4U & (IData)(vlSelfRef.alu_tb__DOT__ALUControl))
                                          ? ((2U & (IData)(vlSelfRef.alu_tb__DOT__ALUControl))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.alu_tb__DOT__ALUControl))
                                                  ? vlSelfRef.alu_tb__DOT__dut__DOT__srl1__DOT__shift5
                                                  : vlSelfRef.alu_tb__DOT__dut__DOT__sll1__DOT__shift5)
                                              : ((1U 
                                                  & (IData)(vlSelfRef.alu_tb__DOT__ALUControl))
                                                  ? 
                                                 vlSelfRef.alu_tb__DOT__dut__DOT__entry
                                                 [5U]
                                                  : vlSelfRef.alu_tb__DOT__dut__DOT____Vcellout__xor1__y))
                                          : ((2U & (IData)(vlSelfRef.alu_tb__DOT__ALUControl))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.alu_tb__DOT__ALUControl))
                                                  ? vlSelfRef.alu_tb__DOT__dut__DOT____Vcellout__or1__y
                                                  : vlSelfRef.alu_tb__DOT__dut__DOT____Vcellout__and1__y)
                                              : ((1U 
                                                  & (IData)(vlSelfRef.alu_tb__DOT__ALUControl))
                                                  ? 
                                                 vlSelfRef.alu_tb__DOT__dut__DOT__entry
                                                 [1U]
                                                  : 
                                                 vlSelfRef.alu_tb__DOT__dut__DOT__entry
                                                 [0U]))));
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
