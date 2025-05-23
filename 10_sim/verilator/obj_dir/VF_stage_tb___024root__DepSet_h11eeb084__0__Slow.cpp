// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VF_stage_tb.h for the primary calling header

#include "VF_stage_tb__pch.h"
#include "VF_stage_tb__Syms.h"
#include "VF_stage_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VF_stage_tb___024root___dump_triggers__stl(VF_stage_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VF_stage_tb___024root___eval_triggers__stl(VF_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF_stage_tb___024root___eval_triggers__stl\n"); );
    VF_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VF_stage_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
