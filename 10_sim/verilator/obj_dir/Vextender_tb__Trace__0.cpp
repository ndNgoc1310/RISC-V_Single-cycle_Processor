// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vextender_tb__Syms.h"


void Vextender_tb___024root__trace_chg_0_sub_0(Vextender_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vextender_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextender_tb___024root__trace_chg_0\n"); );
    // Init
    Vextender_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vextender_tb___024root*>(voidSelf);
    Vextender_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vextender_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vextender_tb___024root__trace_chg_0_sub_0(Vextender_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextender_tb___024root__trace_chg_0_sub_0\n"); );
    Vextender_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgIData(oldp+0,(vlSelfRef.extender_tb__DOT__instr),25);
        bufp->chgCData(oldp+1,(vlSelfRef.extender_tb__DOT__immsrc),3);
        bufp->chgIData(oldp+2,(vlSelfRef.extender_tb__DOT__test_num),32);
        bufp->chgIData(oldp+3,(vlSelfRef.extender_tb__DOT__pass_count),32);
        bufp->chgIData(oldp+4,(vlSelfRef.extender_tb__DOT__fail_count),32);
    }
    bufp->chgIData(oldp+5,(vlSelfRef.extender_tb__DOT__immext),32);
}

void Vextender_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextender_tb___024root__trace_cleanup\n"); );
    // Init
    Vextender_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vextender_tb___024root*>(voidSelf);
    Vextender_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
