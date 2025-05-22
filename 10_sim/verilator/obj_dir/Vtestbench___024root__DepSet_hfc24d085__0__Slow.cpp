// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench___024root.h"

VL_ATTR_COLD void Vtestbench___024root___eval_initial__TOP(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"wave.vcd"});
    vlSymsp->_traceDumpOpen();
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8793d66c__0 
        = (0x7ffU & VL_RAND_RESET_ASSIGN_I(11));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8793946e__0 
        = (0x404U | (0x300U & VL_RAND_RESET_ASSIGN_I(11)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__ad__DOT____Vxrand_h87975763__0 
        = (7U & VL_RAND_RESET_ASSIGN_I(3));
    __Vtemp_1[0U] = 0x2e747874U;
    __Vtemp_1[1U] = 0x74657374U;
    __Vtemp_1[2U] = 0x69736376U;
    __Vtemp_1[3U] = 0x72U;
    VL_READMEM_N(true, 32, 64, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_1)
                 ,  &(vlSelfRef.testbench__DOT__dut__DOT__im__DOT__RAM)
                 , 0, ~0ULL);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__stl(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtestbench___024root___eval_triggers__stl(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_triggers__stl\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtestbench___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
