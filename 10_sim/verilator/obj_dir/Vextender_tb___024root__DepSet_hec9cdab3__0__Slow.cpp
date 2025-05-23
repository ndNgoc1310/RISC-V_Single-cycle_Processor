// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vextender_tb.h for the primary calling header

#include "Vextender_tb__pch.h"
#include "Vextender_tb__Syms.h"
#include "Vextender_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vextender_tb___024root___dump_triggers__stl(Vextender_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vextender_tb___024root___eval_triggers__stl(Vextender_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextender_tb___024root___eval_triggers__stl\n"); );
    Vextender_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vextender_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
