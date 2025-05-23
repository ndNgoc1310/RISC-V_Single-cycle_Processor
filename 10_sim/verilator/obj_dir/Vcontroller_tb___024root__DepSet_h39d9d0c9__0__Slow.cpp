// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontroller_tb.h for the primary calling header

#include "Vcontroller_tb__pch.h"
#include "Vcontroller_tb__Syms.h"
#include "Vcontroller_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontroller_tb___024root___dump_triggers__stl(Vcontroller_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcontroller_tb___024root___eval_triggers__stl(Vcontroller_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroller_tb___024root___eval_triggers__stl\n"); );
    Vcontroller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcontroller_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
