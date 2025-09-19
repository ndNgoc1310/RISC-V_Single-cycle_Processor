// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb__Syms.h"
#include "Vtop_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vtop_tb___024root___eval_initial__TOP__Vtiming__0(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"wave.vcd"});
    vlSymsp->_traceDumpOpen();
    vlSelf->top_tb__DOT__cycle_count = 0U;
    vlSelf->top_tb__DOT__rst = 1U;
    co_await vlSelf->__VdlySched.delay(0x55f0ULL, nullptr, 
                                       "../../01_bench/top_tb.sv", 
                                       55);
    vlSelf->top_tb__DOT__rst = 0U;
    co_await vlSelf->__VdlySched.delay(0x1e8480ULL, 
                                       nullptr, "../../01_bench/top_tb.sv", 
                                       57);
    VL_FINISH_MT("../../01_bench/top_tb.sv", 59, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__act(Vtop_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_tb___024root___eval_triggers__act(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->top_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__top_tb__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->top_tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__top_tb__DOT__clk__0))) 
                                     | ((IData)(vlSelf->top_tb__DOT__rst) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__top_tb__DOT__rst__0)))));
    vlSelf->__VactTriggered.set(2U, ((~ (IData)(vlSelf->top_tb__DOT__clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__top_tb__DOT__clk__0)));
    vlSelf->__VactTriggered.set(3U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__top_tb__DOT__clk__0 
        = vlSelf->top_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__top_tb__DOT__rst__0 
        = vlSelf->top_tb__DOT__rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
