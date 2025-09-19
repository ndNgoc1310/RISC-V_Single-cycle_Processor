// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb___024root.h"

VL_ATTR_COLD void Vtop_tb___024root___eval_initial__TOP(Vtop_tb___024root* vlSelf);
VlCoroutine Vtop_tb___024root___eval_initial__TOP__Vtiming__0(Vtop_tb___024root* vlSelf);
VlCoroutine Vtop_tb___024root___eval_initial__TOP__Vtiming__1(Vtop_tb___024root* vlSelf);

void Vtop_tb___024root___eval_initial(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_initial\n"); );
    // Body
    Vtop_tb___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtop_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtop_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__top_tb__DOT__clk__0 
        = vlSelf->top_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__top_tb__DOT__rst__0 
        = vlSelf->top_tb__DOT__rst;
}

VL_INLINE_OPT VlCoroutine Vtop_tb___024root___eval_initial__TOP__Vtiming__1(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        vlSelf->__Vdlyvset__top_tb__DOT__clk__v0 = 1U;
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "../../01_bench/top_tb.sv", 
                                           25);
        vlSelf->__Vdlyvset__top_tb__DOT__clk__v1 = 1U;
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "../../01_bench/top_tb.sv", 
                                           26);
    }
}

void Vtop_tb___024root___eval_act(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_act\n"); );
}

void Vtop_tb___024root___nba_sequent__TOP__0(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__1(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__2(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__3(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__4(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_comb__TOP__0(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_comb__TOP__1(Vtop_tb___024root* vlSelf);

void Vtop_tb___024root___eval_nba(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((6ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___nba_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
}

VL_INLINE_OPT void Vtop_tb___024root___nba_sequent__TOP__0(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__top_tb__DOT__cycle_count = vlSelf->top_tb__DOT__cycle_count;
    vlSelf->__Vdly__top_tb__DOT__cycle_count = ((IData)(vlSelf->top_tb__DOT__rst)
                                                 ? 0U
                                                 : 
                                                ((IData)(1U) 
                                                 + vlSelf->top_tb__DOT__cycle_count));
}

VL_INLINE_OPT void Vtop_tb___024root___nba_sequent__TOP__1(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE__v0;
    __Vdlyvdim0__top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE__v0;
    __Vdlyvval__top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE__v0;
    __Vdlyvset__top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__top_tb__DOT__dut__DOT__dm__DOT__RAM__v0;
    __Vdlyvdim0__top_tb__DOT__dut__DOT__dm__DOT__RAM__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top_tb__DOT__dut__DOT__dm__DOT__RAM__v0;
    __Vdlyvval__top_tb__DOT__dut__DOT__dm__DOT__RAM__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top_tb__DOT__dut__DOT__dm__DOT__RAM__v0;
    __Vdlyvset__top_tb__DOT__dut__DOT__dm__DOT__RAM__v0 = 0;
    // Body
    __Vdlyvset__top_tb__DOT__dut__DOT__dm__DOT__RAM__v0 = 0U;
    VL_WRITEF_NX("Cycle %0d: PC = 0x%x, Instr = 0x%x\n",0,
                 32,vlSelf->top_tb__DOT__cycle_count,
                 32,vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc,
                 32,vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM
                 [(0xffU & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                            >> 2U))]);
    if (VL_UNLIKELY((0x80U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls)))) {
        VL_WRITEF_NX("  Memory Write @ 0x%x: Data = 0x%x\n",0,
                     32,vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUResult,
                     32,vlSelf->top_tb__DOT__dut__DOT__proc__DOT__WriteData);
    }
    VL_WRITEF_NX("  Memory Read @ 0x%x: Data = 0x%x\n",0,
                 32,vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUResult,
                 32,vlSelf->top_tb__DOT__dut__DOT__dm__DOT__RAM
                 [(0x3fU & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUResult 
                            >> 2U))]);
    if ((0x80U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))) {
        __Vdlyvval__top_tb__DOT__dut__DOT__dm__DOT__RAM__v0 
            = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__WriteData;
        __Vdlyvset__top_tb__DOT__dut__DOT__dm__DOT__RAM__v0 = 1U;
        __Vdlyvdim0__top_tb__DOT__dut__DOT__dm__DOT__RAM__v0 
            = (0x3fU & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUResult 
                        >> 2U));
    }
    __Vdlyvset__top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE__v0 = 0U;
    if ((0x1000U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))) {
        __Vdlyvval__top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE__v0 
            = ((0x40U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                ? ((0x20U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                    ? 0U : vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCPlus4)
                : ((0x20U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                    ? vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ReadData_result
                    : vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUResult));
        __Vdlyvset__top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE__v0 = 1U;
        __Vdlyvdim0__top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE__v0 
            = (0x1fU & (vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM
                        [(0xffU & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                   >> 2U))] >> 7U));
    }
    if (__Vdlyvset__top_tb__DOT__dut__DOT__dm__DOT__RAM__v0) {
        vlSelf->top_tb__DOT__dut__DOT__dm__DOT__RAM[__Vdlyvdim0__top_tb__DOT__dut__DOT__dm__DOT__RAM__v0] 
            = __Vdlyvval__top_tb__DOT__dut__DOT__dm__DOT__RAM__v0;
    }
    if (__Vdlyvset__top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE__v0) {
        vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[__Vdlyvdim0__top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE__v0] 
            = __Vdlyvval__top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE__v0;
    }
}

VL_INLINE_OPT void Vtop_tb___024root___nba_sequent__TOP__2(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->__Vdlyvset__top_tb__DOT__clk__v0) {
        vlSelf->top_tb__DOT__clk = 1U;
        vlSelf->__Vdlyvset__top_tb__DOT__clk__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__top_tb__DOT__clk__v1) {
        vlSelf->top_tb__DOT__clk = 0U;
        vlSelf->__Vdlyvset__top_tb__DOT__clk__v1 = 0U;
    }
}

VL_INLINE_OPT void Vtop_tb___024root___nba_sequent__TOP__3(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
        = ((0U != (0x1fU & (vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM
                            [(0xffU & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                       >> 2U))] >> 0xfU)))
            ? vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE
           [(0x1fU & (vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM
                      [(0xffU & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                 >> 2U))] >> 0xfU))]
            : 0U);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd2 
        = ((0U != (0x1fU & (vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM
                            [(0xffU & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                       >> 2U))] >> 0x14U)))
            ? vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE
           [(0x1fU & (vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM
                      [(0xffU & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                 >> 2U))] >> 0x14U))]
            : 0U);
}

extern const VlUnpacked<CData/*4:0*/, 8> Vtop_tb__ConstPool__TABLE_h04b19207_0;
extern const VlUnpacked<CData/*3:0*/, 1024> Vtop_tb__ConstPool__TABLE_h91662cc3_0;

VL_INLINE_OPT void Vtop_tb___024root___nba_sequent__TOP__4(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__4\n"); );
    // Init
    SData/*9:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*2:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelf->top_tb__DOT__cycle_count = vlSelf->__Vdly__top_tb__DOT__cycle_count;
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc = 
        ((IData)(vlSelf->top_tb__DOT__rst) ? 0U : (
                                                   (1U 
                                                    & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                                                    ? 
                                                   ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCmux__DOT____VdfgRegularize_hae03c8cc_0_0)
                                                     ? 0U
                                                     : vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUResult)
                                                    : 
                                                   ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCmux__DOT____VdfgRegularize_hae03c8cc_0_0)
                                                     ? 
                                                    ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                       ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout)) 
                                                      << 0x1fU) 
                                                     | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                          ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout)) 
                                                         << 0x1eU) 
                                                        | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout)) 
                                                            << 0x1dU) 
                                                           | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout)) 
                                                               << 0x1cU) 
                                                              | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                   ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout)) 
                                                                  << 0x1bU) 
                                                                 | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                      ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout)) 
                                                                     << 0x1aU) 
                                                                    | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                         ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout)) 
                                                                        << 0x19U) 
                                                                       | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                            ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout)) 
                                                                           << 0x18U) 
                                                                          | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                               ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout)) 
                                                                              << 0x17U) 
                                                                             | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout)) 
                                                                                << 0x16U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout)) 
                                                                                << 0x15U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout)) 
                                                                                << 0x14U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout)) 
                                                                                << 0x13U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout)) 
                                                                                << 0x12U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout)) 
                                                                                << 0x11U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout)) 
                                                                                << 0x10U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout)) 
                                                                                << 0xfU) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout)) 
                                                                                << 0xeU) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout)) 
                                                                                << 0xdU) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout)) 
                                                                                << 0xcU) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout)) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout)) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout)) 
                                                                                << 9U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout)) 
                                                                                << 8U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout)) 
                                                                                << 7U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout)) 
                                                                                << 6U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout)) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout)) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout)) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout)) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a1__cout)) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a1__sum))))))))))))))))))))))))))))))))
                                                     : vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCPlus4)));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a4__cout 
        = (IData)((0xcU == (0xcU & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc)));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__funct7b5 
        = (1U & (vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM
                 [(0xffU & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                            >> 2U))] >> 0x1eU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__funct3 
        = (7U & (vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM
                 [(0xffU & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                            >> 2U))] >> 0xcU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellinp__ext__instr 
        = (vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM
           [(0xffU & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                      >> 2U))] >> 7U);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op = 
        (0x7fU & vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM
         [(0xffU & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                    >> 2U))]);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a5__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a4__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 4U));
    __Vtableidx3 = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__funct3;
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__LSType 
        = Vtop_tb__ConstPool__TABLE_h04b19207_0[__Vtableidx3];
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls 
        = ((0x40U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op))
            ? ((0x20U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op))
                ? ((0x10U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op))
                    ? ((8U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op))
                        ? (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df35725__0)
                        : ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op))
                            ? (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df35725__0)
                            : ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op))
                                ? ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op))
                                    ? (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df36935__0)
                                    : (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df35725__0))
                                : (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df35725__0))))
                    : ((8U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op))
                        ? ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op))
                            ? ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op))
                                ? ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op))
                                    ? (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df14fac__0)
                                    : (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df35725__0))
                                : (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df35725__0))
                            : (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df35725__0))
                        : ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op))
                            ? ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op))
                                ? ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op))
                                    ? 0x1149U : (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df35725__0))
                                : (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df35725__0))
                            : ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op))
                                ? ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op))
                                    ? (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df4b0c7__0)
                                    : (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df35725__0))
                                : (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df35725__0)))))
                : (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df35725__0))
            : ((0x20U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op))
                ? ((0x10U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op))
                    ? ((8U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op))
                        ? (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df35725__0)
                        : ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op))
                            ? ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op))
                                ? ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op))
                                    ? 0x190cU : (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df35725__0))
                                : (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df35725__0))
                            : ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op))
                                ? ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op))
                                    ? (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8def22da__0)
                                    : (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df35725__0))
                                : (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df35725__0))))
                    : ((8U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op))
                        ? (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df35725__0)
                        : ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op))
                            ? (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df35725__0)
                            : ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op))
                                ? ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op))
                                    ? (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df49580__0)
                                    : (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df35725__0))
                                : (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df35725__0)))))
                : ((0x10U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op))
                    ? ((8U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op))
                        ? (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df35725__0)
                        : ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op))
                            ? ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op))
                                ? ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op))
                                    ? (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8defbd8d__0)
                                    : (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df35725__0))
                                : (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df35725__0))
                            : ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op))
                                ? ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op))
                                    ? 0x1108U : (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df35725__0))
                                : (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df35725__0))))
                    : ((8U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op))
                        ? (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df35725__0)
                        : ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op))
                            ? (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df35725__0)
                            : ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op))
                                ? ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op))
                                    ? 0x1120U : (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df35725__0))
                                : (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df35725__0)))))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a6__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a5__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 5U));
    __Vtableidx1 = (((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__funct7b5) 
                       & (vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM
                          [(0xffU & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                     >> 2U))] >> 5U))
                       ? 1U : 0U) << 6U) | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__funct7b5) 
                                             << 5U) 
                                            | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__funct3) 
                                                << 2U) 
                                               | (3U 
                                                  & ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                     >> 2U)))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUControl 
        = Vtop_tb__ConstPool__TABLE_h91662cc3_0[__Vtableidx1];
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
        = ((0x800U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
            ? ((0x400U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                ? vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ext__DOT____Vxrand_h8df4a42a__0
                : ((0x200U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                    ? vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ext__DOT____Vxrand_h8df4a42a__0
                    : (0xfffff000U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellinp__ext__instr 
                                      << 7U)))) : (
                                                   (0x400U 
                                                    & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                                                    ? 
                                                   ((0x200U 
                                                     & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellinp__ext__instr 
                                                                     >> 0x18U)))) 
                                                      << 0x14U) 
                                                     | ((0xff000U 
                                                         & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellinp__ext__instr 
                                                            << 7U)) 
                                                        | ((0x800U 
                                                            & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellinp__ext__instr 
                                                               >> 2U)) 
                                                           | (0x7feU 
                                                              & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellinp__ext__instr 
                                                                 >> 0xdU)))))
                                                     : 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellinp__ext__instr 
                                                                     >> 0x18U)))) 
                                                      << 0xcU) 
                                                     | ((0x800U 
                                                         & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellinp__ext__instr 
                                                            << 0xbU)) 
                                                        | ((0x7e0U 
                                                            & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellinp__ext__instr 
                                                               >> 0xdU)) 
                                                           | (0x1eU 
                                                              & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellinp__ext__instr)))))
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellinp__ext__instr 
                                                                     >> 0x18U)))) 
                                                      << 0xcU) 
                                                     | ((0xfe0U 
                                                         & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellinp__ext__instr 
                                                            >> 0xdU)) 
                                                        | (0x1fU 
                                                           & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellinp__ext__instr)))
                                                     : 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellinp__ext__instr 
                                                                     >> 0x18U)))) 
                                                      << 0xcU) 
                                                     | (0xfffU 
                                                        & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellinp__ext__instr 
                                                           >> 0xdU))))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a7__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a6__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 6U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__isAddSub 
        = (1U & ((IData)((0U == (0xeU & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUControl)))) 
                 | ((IData)((1U == (0xbU & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUControl)))) 
                    | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUControl) 
                        >> 3U) & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUControl)))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a1__sum 
        = (1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                 ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0 
        = ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
            ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
           >> 0x1fU);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                 >> 0x1eU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                 >> 0x1dU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                 >> 0x1cU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                 >> 0x1bU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                 >> 0x1aU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                 >> 0x19U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                 >> 0x18U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                 >> 0x17U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                 >> 0x16U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                 >> 0x15U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                 >> 0x14U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                 >> 0x13U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                 >> 0x12U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                 >> 0x11U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                 >> 0x10U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                 >> 0xfU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                 >> 0xeU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                 >> 0xdU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                 >> 0xcU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                 >> 0xbU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                 >> 0xaU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                 >> 9U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                 >> 8U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                 >> 7U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                 >> 6U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                 >> 5U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                 >> 4U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                 >> 3U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                 >> 2U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a1__cout 
        = (1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                 & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                 >> 1U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a8__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a7__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 7U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 1U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a1__cout) 
                            & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a9__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a8__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 8U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 2U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout) 
                            & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a10__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a9__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 9U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 3U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout) 
                            & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a11__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a10__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 0xaU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 4U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout) 
                            & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a12__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a11__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 0xbU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 5U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout) 
                            & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a13__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a12__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 0xcU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 6U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout) 
                            & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a14__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a13__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 0xdU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 7U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout) 
                            & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a15__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a14__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 0xeU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 8U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout) 
                            & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a16__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a15__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 0xfU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 9U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout) 
                            & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a17__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a16__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 0x10U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 0xaU) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout) 
                              & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a18__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a17__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 0x11U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 0xbU) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout) 
                              & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a19__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a18__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 0x12U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 0xcU) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout) 
                              & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a20__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a19__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 0x13U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 0xdU) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout) 
                              & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a21__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a20__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 0x14U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 0xeU) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout) 
                              & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a22__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a21__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 0x15U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 0xfU) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout) 
                              & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a23__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a22__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 0x16U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 0x10U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a24__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a23__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 0x17U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 0x11U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a25__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a24__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 0x18U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 0x12U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a26__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a25__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 0x19U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 0x13U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a27__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a26__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 0x1aU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 0x14U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a28__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a27__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 0x1bU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 0x15U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a29__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a28__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 0x1cU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 0x16U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a30__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a29__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 0x1dU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 0x17U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a30__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 0x1eU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 0x18U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCPlus4 
        = (((0x80000000U & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc) 
            ^ ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout) 
               << 0x1fU)) | ((0x40000000U & ((0xc0000000U 
                                              & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc) 
                                             ^ ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a30__cout) 
                                                << 0x1eU))) 
                             | ((0x20000000U & ((0xe0000000U 
                                                 & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc) 
                                                ^ ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a29__cout) 
                                                   << 0x1dU))) 
                                | ((0x10000000U & (
                                                   (0xf0000000U 
                                                    & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc) 
                                                   ^ 
                                                   ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a28__cout) 
                                                    << 0x1cU))) 
                                   | ((0x8000000U & 
                                       ((0xf8000000U 
                                         & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc) 
                                        ^ ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a27__cout) 
                                           << 0x1bU))) 
                                      | ((0x4000000U 
                                          & ((0xfc000000U 
                                              & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc) 
                                             ^ ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a26__cout) 
                                                << 0x1aU))) 
                                         | ((0x2000000U 
                                             & ((0xfe000000U 
                                                 & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc) 
                                                ^ ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a25__cout) 
                                                   << 0x19U))) 
                                            | ((0x1000000U 
                                                & ((0xff000000U 
                                                    & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc) 
                                                   ^ 
                                                   ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a24__cout) 
                                                    << 0x18U))) 
                                               | ((0x800000U 
                                                   & ((0xff800000U 
                                                       & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc) 
                                                      ^ 
                                                      ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a23__cout) 
                                                       << 0x17U))) 
                                                  | ((0x400000U 
                                                      & ((0xffc00000U 
                                                          & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc) 
                                                         ^ 
                                                         ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a22__cout) 
                                                          << 0x16U))) 
                                                     | ((0x200000U 
                                                         & ((0xffe00000U 
                                                             & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc) 
                                                            ^ 
                                                            ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a21__cout) 
                                                             << 0x15U))) 
                                                        | ((0x100000U 
                                                            & ((0xfff00000U 
                                                                & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc) 
                                                               ^ 
                                                               ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a20__cout) 
                                                                << 0x14U))) 
                                                           | ((0x80000U 
                                                               & ((0xfff80000U 
                                                                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc) 
                                                                  ^ 
                                                                  ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a19__cout) 
                                                                   << 0x13U))) 
                                                              | ((0x40000U 
                                                                  & ((0xfffc0000U 
                                                                      & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc) 
                                                                     ^ 
                                                                     ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a18__cout) 
                                                                      << 0x12U))) 
                                                                 | ((0x20000U 
                                                                     & ((0xfffe0000U 
                                                                         & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc) 
                                                                        ^ 
                                                                        ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a17__cout) 
                                                                         << 0x11U))) 
                                                                    | ((0x10000U 
                                                                        & ((0xffff0000U 
                                                                            & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc) 
                                                                           ^ 
                                                                           ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a16__cout) 
                                                                            << 0x10U))) 
                                                                       | ((0x8000U 
                                                                           & ((0xffff8000U 
                                                                               & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc) 
                                                                              ^ 
                                                                              ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a15__cout) 
                                                                               << 0xfU))) 
                                                                          | ((0x4000U 
                                                                              & ((0xffffc000U 
                                                                                & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a14__cout) 
                                                                                << 0xeU))) 
                                                                             | ((0x2000U 
                                                                                & ((0xffffe000U 
                                                                                & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a13__cout) 
                                                                                << 0xdU))) 
                                                                                | ((0x1000U 
                                                                                & ((0xfffff000U 
                                                                                & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a12__cout) 
                                                                                << 0xcU))) 
                                                                                | ((0x800U 
                                                                                & ((0xfffff800U 
                                                                                & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a11__cout) 
                                                                                << 0xbU))) 
                                                                                | ((0x400U 
                                                                                & ((0xfffffc00U 
                                                                                & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a10__cout) 
                                                                                << 0xaU))) 
                                                                                | ((0x200U 
                                                                                & ((0xfffffe00U 
                                                                                & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a9__cout) 
                                                                                << 9U))) 
                                                                                | ((0x100U 
                                                                                & ((0xffffff00U 
                                                                                & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a8__cout) 
                                                                                << 8U))) 
                                                                                | ((0x80U 
                                                                                & ((0xffffff80U 
                                                                                & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a7__cout) 
                                                                                << 7U))) 
                                                                                | ((0x40U 
                                                                                & ((0xffffffc0U 
                                                                                & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a6__cout) 
                                                                                << 6U))) 
                                                                                | ((0x20U 
                                                                                & ((0xffffffe0U 
                                                                                & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a5__cout) 
                                                                                << 5U))) 
                                                                                | ((0x10U 
                                                                                & ((0xfffffff0U 
                                                                                & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a4__cout) 
                                                                                << 4U))) 
                                                                                | ((8U 
                                                                                & (VL_REDXOR_4(
                                                                                (0xcU 
                                                                                & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | (3U 
                                                                                & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc)))))))))))))))))))))))))))))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 0x19U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 0x1aU) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 0x1bU) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 0x1cU) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 0x1dU) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 0x1eU) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0))));
}

extern const VlUnpacked<CData/*0:0*/, 512> Vtop_tb__ConstPool__TABLE_h651780dc_0;

VL_INLINE_OPT void Vtop_tb___024root___nba_comb__TOP__0(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__bru__DOT____VdfgExtracted_h2d7dafda__0;
    top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__bru__DOT____VdfgExtracted_h2d7dafda__0 = 0;
    CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0;
    top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0 = 0;
    SData/*8:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__SrcB 
        = ((0x100U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
            ? vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt
            : vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd2);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__and1__y 
        = (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
           & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__SrcB);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__or1__y 
        = (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
           | vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__SrcB);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__xor1__y 
        = (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
           ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__SrcB);
    if ((1U & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__SrcB)) {
        vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift1 
            = VL_SHIFTL_III(32,32,32, vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1, 1U);
        vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift1 
            = VL_SHIFTR_III(32,32,32, vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1, 1U);
        vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift1 
            = ((0x80000000U & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1) 
               | (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                  >> 1U));
    } else {
        vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift1 
            = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1;
        vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift1 
            = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1;
        vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift1 
            = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1;
    }
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
        = ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUControl))
            ? (~ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__SrcB)
            : vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__SrcB);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[2U] 
        = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__and1__y;
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[3U] 
        = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__or1__y;
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[4U] 
        = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__xor1__y;
    if ((2U & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__SrcB)) {
        vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift2 
            = VL_SHIFTL_III(32,32,32, vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift1, 2U);
        vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift2 
            = VL_SHIFTR_III(32,32,32, vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift1, 2U);
        vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift2 
            = (((- (IData)((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                            >> 0x1fU))) << 0x1eU) | 
               (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift1 
                >> 2U));
    } else {
        vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift2 
            = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift1;
        vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift2 
            = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift1;
        vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift2 
            = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift1;
    }
    top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0 
        = ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
            ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
           >> 0x1fU);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x1eU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x1dU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x1cU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x1bU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x1aU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x19U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x18U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x17U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x16U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x15U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x14U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x13U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x12U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x11U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x10U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0xfU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0xeU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0xdU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0xcU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0xbU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0xaU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 9U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 8U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 7U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 6U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 5U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 4U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 3U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 2U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                  ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 1U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a1__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                 ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b));
    if ((4U & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__SrcB)) {
        vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift3 
            = VL_SHIFTL_III(32,32,32, vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift2, 4U);
        vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift3 
            = VL_SHIFTR_III(32,32,32, vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift2, 4U);
        vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift3 
            = (((- (IData)((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                            >> 0x1fU))) << 0x1cU) | 
               (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift2 
                >> 4U));
    } else {
        vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift3 
            = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift2;
        vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift3 
            = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift2;
        vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift3 
            = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift2;
    }
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a1__cout 
        = (1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                  & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUControl) 
                    & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a1__DOT____VdfgRegularize_h53fb3b80_0_0))));
    if ((8U & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__SrcB)) {
        vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift4 
            = VL_SHIFTL_III(32,32,32, vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift3, 8U);
        vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift4 
            = VL_SHIFTR_III(32,32,32, vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift3, 8U);
        vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift4 
            = (((- (IData)((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                            >> 0x1fU))) << 0x18U) | 
               (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift3 
                >> 8U));
    } else {
        vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift4 
            = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift3;
        vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift4 
            = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift3;
        vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift4 
            = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift3;
    }
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a2__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 1U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a1__cout) 
                            & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0))));
    if ((0x10U & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__SrcB)) {
        vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift5 
            = VL_SHIFTL_III(32,32,32, vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift4, 0x10U);
        vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift5 
            = VL_SHIFTR_III(32,32,32, vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift4, 0x10U);
        vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift5 
            = (((- (IData)((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                            >> 0x1fU))) << 0x10U) | 
               (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift4 
                >> 0x10U));
    } else {
        vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift5 
            = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift4;
        vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift5 
            = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift4;
        vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift5 
            = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift4;
    }
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a3__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 2U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a2__cout) 
                            & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[6U] 
        = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift5;
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[7U] 
        = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift5;
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[8U] 
        = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift5;
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a4__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 3U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a3__cout) 
                            & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a5__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 4U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a4__cout) 
                            & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a6__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 5U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a5__cout) 
                            & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a7__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 6U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a6__cout) 
                            & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a8__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 7U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a7__cout) 
                            & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a9__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 8U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a8__cout) 
                            & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a10__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 9U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a9__cout) 
                            & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a11__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0xaU) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a10__cout) 
                              & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a12__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0xbU) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a11__cout) 
                              & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a13__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0xcU) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a12__cout) 
                              & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a14__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0xdU) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a13__cout) 
                              & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a15__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0xeU) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a14__cout) 
                              & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a16__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0xfU) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a15__cout) 
                              & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a17__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x10U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a16__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a18__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x11U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a17__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a19__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x12U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a18__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a20__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x13U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a19__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a21__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x14U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a20__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a22__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x15U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a21__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a23__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x16U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a22__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a24__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x17U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a23__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a25__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x18U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a24__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a26__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x19U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a25__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a27__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x1aU) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a26__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a28__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x1bU) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a27__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a29__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x1cU) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a28__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a30__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x1dU) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a29__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a31__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x1eU) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a30__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a32__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x1fU) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a31__cout) 
                               & (IData)(top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__Neg 
        = ((IData)(top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0) 
           ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a31__cout));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__bru__DOT__Carry 
        = (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a32__cout) 
            ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUControl)) 
           & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__isAddSub));
    top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__bru__DOT____VdfgExtracted_h2d7dafda__0 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__Neg) 
           ^ ((~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUControl) 
                  ^ ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                      ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__SrcB) 
                     >> 0x1fU))) & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                      >> 0x1fU) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__Neg)) 
                                    & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__isAddSub))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sum 
        = (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__Neg) 
            << 0x1fU) | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0) 
                           ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a30__cout)) 
                          << 0x1eU) | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                         ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a29__cout)) 
                                        << 0x1dU) | 
                                       ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                          ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a28__cout)) 
                                         << 0x1cU) 
                                        | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a27__cout)) 
                                            << 0x1bU) 
                                           | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a26__cout)) 
                                               << 0x1aU) 
                                              | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                   ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a25__cout)) 
                                                  << 0x19U) 
                                                 | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                      ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a24__cout)) 
                                                     << 0x18U) 
                                                    | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                         ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a23__cout)) 
                                                        << 0x17U) 
                                                       | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                            ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a22__cout)) 
                                                           << 0x16U) 
                                                          | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                               ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a21__cout)) 
                                                              << 0x15U) 
                                                             | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                  ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a20__cout)) 
                                                                 << 0x14U) 
                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                     ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a19__cout)) 
                                                                    << 0x13U) 
                                                                   | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                        ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a18__cout)) 
                                                                       << 0x12U) 
                                                                      | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                           ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a17__cout)) 
                                                                          << 0x11U) 
                                                                         | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                              ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a16__cout)) 
                                                                             << 0x10U) 
                                                                            | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a15__cout)) 
                                                                                << 0xfU) 
                                                                               | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a14__cout)) 
                                                                                << 0xeU) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a13__cout)) 
                                                                                << 0xdU) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a12__cout)) 
                                                                                << 0xcU) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a11__cout)) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a10__cout)) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a9__cout)) 
                                                                                << 9U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a8__cout)) 
                                                                                << 8U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a7__cout)) 
                                                                                << 7U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a6__cout)) 
                                                                                << 6U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a5__cout)) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a4__cout)) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a3__cout)) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a2__cout)) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a1__cout)) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a1__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUControl))))))))))))))))))))))))))))))))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[0U] 
        = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sum;
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[1U] 
        = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sum;
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[5U] 
        = top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__bru__DOT____VdfgExtracted_h2d7dafda__0;
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[9U] 
        = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__bru__DOT__Carry;
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[0xaU] 
        = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__SrcB;
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUResult 
        = ((8U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUControl))
            ? ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUControl))
                ? ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUControl))
                    ? ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUControl))
                        ? vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                       [0xfU] : vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                       [0xeU]) : ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUControl))
                                   ? vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                                  [0xdU] : vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                                  [0xcU])) : ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUControl))
                                               ? ((1U 
                                                   & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUControl))
                                                   ? 
                                                  vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                                                  [0xbU]
                                                   : 
                                                  vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                                                  [0xaU])
                                               : ((1U 
                                                   & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUControl))
                                                   ? 
                                                  vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                                                  [9U]
                                                   : vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift5)))
            : ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUControl))
                ? ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUControl))
                    ? ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUControl))
                        ? vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift5
                        : vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift5)
                    : ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUControl))
                        ? vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                       [5U] : vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__xor1__y))
                : ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUControl))
                    ? ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUControl))
                        ? vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__or1__y
                        : vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__and1__y)
                    : ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUControl))
                        ? vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                       [1U] : vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                       [0U]))));
    __Vtableidx2 = (((IData)((0xffffffffU == (~ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUResult))) 
                     << 8U) | ((0x80U & ((~ (IData)(
                                                    (0xffffffffU 
                                                     == 
                                                     (~ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUResult)))) 
                                         << 7U)) | 
                               (((IData)(top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__bru__DOT____VdfgExtracted_h2d7dafda__0) 
                                 << 6U) | ((0x20U & 
                                            ((~ (IData)(top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__bru__DOT____VdfgExtracted_h2d7dafda__0)) 
                                             << 5U)) 
                                           | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__bru__DOT__Carry) 
                                               << 4U) 
                                              | ((8U 
                                                  & ((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__bru__DOT__Carry)) 
                                                     << 3U)) 
                                                 | (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__funct3)))))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__bru__DOT__cond 
        = Vtop_tb__ConstPool__TABLE_h651780dc_0[__Vtableidx2];
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCmux__DOT____VdfgRegularize_hae03c8cc_0_0 
        = (1U & ((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls)) 
                 & (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                     >> 1U) | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                >> 4U) & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__bru__DOT__cond)))));
}

VL_INLINE_OPT void Vtop_tb___024root___nba_comb__TOP__1(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ReadData 
        = vlSelf->top_tb__DOT__dut__DOT__dm__DOT__RAM
        [(0x3fU & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUResult 
                   >> 2U))];
    if ((0x10U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__LSType))) {
        if ((8U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__LSType))) {
            vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ReadData_result 
                = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ReadData;
            vlSelf->top_tb__DOT__dut__DOT__proc__DOT__WriteData 
                = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd2;
        } else if ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__LSType))) {
            vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ReadData_result 
                = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ReadData;
            vlSelf->top_tb__DOT__dut__DOT__proc__DOT__WriteData 
                = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd2;
        } else if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__LSType))) {
            vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ReadData_result 
                = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ReadData;
            vlSelf->top_tb__DOT__dut__DOT__proc__DOT__WriteData 
                = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd2;
        } else if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__LSType))) {
            vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ReadData_result 
                = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ReadData;
            vlSelf->top_tb__DOT__dut__DOT__proc__DOT__WriteData 
                = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd2;
        } else {
            vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ReadData_result 
                = (((- (IData)((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ReadData 
                                      >> 7U)))) << 8U) 
                   | (0xffU & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ReadData));
            vlSelf->top_tb__DOT__dut__DOT__proc__DOT__WriteData 
                = ((0xffffff00U & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ReadData_result) 
                   | (0xffU & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd2));
        }
    } else if ((8U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__LSType))) {
        if ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__LSType))) {
            vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ReadData_result 
                = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ReadData;
            vlSelf->top_tb__DOT__dut__DOT__proc__DOT__WriteData 
                = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd2;
        } else if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__LSType))) {
            vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ReadData_result 
                = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ReadData;
            vlSelf->top_tb__DOT__dut__DOT__proc__DOT__WriteData 
                = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd2;
        } else if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__LSType))) {
            vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ReadData_result 
                = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ReadData;
            vlSelf->top_tb__DOT__dut__DOT__proc__DOT__WriteData 
                = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd2;
        } else {
            vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ReadData_result 
                = (((- (IData)((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ReadData 
                                      >> 0xfU)))) << 0x10U) 
                   | (0xffffU & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ReadData));
            vlSelf->top_tb__DOT__dut__DOT__proc__DOT__WriteData 
                = ((0xffff0000U & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ReadData_result) 
                   | (0xffffU & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd2));
        }
    } else if ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__LSType))) {
        if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__LSType))) {
            vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ReadData_result 
                = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ReadData;
            vlSelf->top_tb__DOT__dut__DOT__proc__DOT__WriteData 
                = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd2;
        } else if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__LSType))) {
            vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ReadData_result 
                = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ReadData;
            vlSelf->top_tb__DOT__dut__DOT__proc__DOT__WriteData 
                = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd2;
        } else {
            vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ReadData_result 
                = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ReadData;
            vlSelf->top_tb__DOT__dut__DOT__proc__DOT__WriteData 
                = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd2;
        }
    } else if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__LSType))) {
        if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__LSType))) {
            vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ReadData_result 
                = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ReadData;
            vlSelf->top_tb__DOT__dut__DOT__proc__DOT__WriteData 
                = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd2;
        } else {
            vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ReadData_result 
                = (0xffU & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ReadData);
            vlSelf->top_tb__DOT__dut__DOT__proc__DOT__WriteData 
                = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd2;
        }
    } else if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__LSType))) {
        vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ReadData_result 
            = (0xffffU & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ReadData);
        vlSelf->top_tb__DOT__dut__DOT__proc__DOT__WriteData 
            = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd2;
    } else {
        vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ReadData_result 
            = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ReadData;
        vlSelf->top_tb__DOT__dut__DOT__proc__DOT__WriteData 
            = vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd2;
    }
}

void Vtop_tb___024root___timing_resume(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___timing_resume\n"); );
    // Body
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtop_tb___024root___eval_triggers__act(Vtop_tb___024root* vlSelf);

bool Vtop_tb___024root___eval_phase__act(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop_tb___024root___timing_resume(vlSelf);
        Vtop_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop_tb___024root___eval_phase__nba(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__nba(Vtop_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__act(Vtop_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_tb___024root___eval(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../../01_bench/top_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../../01_bench/top_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop_tb___024root___eval_debug_assertions(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
