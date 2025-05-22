// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench___024root.h"

VL_ATTR_COLD void Vtestbench___024root___eval_static(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_static\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
}

VL_ATTR_COLD void Vtestbench___024root___eval_initial__TOP(Vtestbench___024root* vlSelf);
VL_ATTR_COLD void Vtestbench___024root____Vm_traceActivitySetAll(Vtestbench___024root* vlSelf);

VL_ATTR_COLD void Vtestbench___024root___eval_initial(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtestbench___024root___eval_initial__TOP(vlSelf);
    Vtestbench___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vtestbench___024root___eval_final(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_final\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__stl(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtestbench___024root___eval_phase__stl(Vtestbench___024root* vlSelf);

VL_ATTR_COLD void Vtestbench___024root___eval_settle(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_settle\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtestbench___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../../01_bench/testbench.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtestbench___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__stl(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___dump_triggers__stl\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtestbench___024root___stl_sequent__TOP__0(Vtestbench___024root* vlSelf);

VL_ATTR_COLD void Vtestbench___024root___eval_stl(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_stl\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtestbench___024root___stl_sequent__TOP__0(vlSelf);
        Vtestbench___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

extern const VlUnpacked<CData/*2:0*/, 2048> Vtestbench__ConstPool__TABLE_h460f7593_0;

VL_ATTR_COLD void Vtestbench___024root___stl_sequent__TOP__0(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___stl_sequent__TOP__0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  >> 0xeU) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                              >> 0x1fU)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__StallF 
        = ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
            >> 0x16U) & (((0x1fU & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U]) 
                          == (0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                       >> 0xfU))) | 
                         ((0x1fU & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U]) 
                          == (0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                       >> 0x14U)))));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  >> 0xdU) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                              >> 0x1eU)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls 
        = ((0x40U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
            ? ((0x20U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                ? ((0x10U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                    ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8793d66c__0)
                    : ((8U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                        ? ((4U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                            ? ((2U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                    ? 0x721U : (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8793d66c__0))
                                : (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8793d66c__0))
                            : (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8793d66c__0))
                        : ((4U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                            ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8793d66c__0)
                            : ((2U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                    ? 0x20aU : (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8793d66c__0))
                                : (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8793d66c__0)))))
                : (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8793d66c__0))
            : ((0x20U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                ? ((0x10U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                    ? ((8U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                        ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8793d66c__0)
                        : ((4U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                            ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8793d66c__0)
                            : ((2U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                    ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8793946e__0)
                                    : (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8793d66c__0))
                                : (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8793d66c__0))))
                    : ((8U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                        ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8793d66c__0)
                        : ((4U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                            ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8793d66c__0)
                            : ((2U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                    ? 0x1c0U : (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8793d66c__0))
                                : (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8793d66c__0)))))
                : ((0x10U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                    ? ((8U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                        ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8793d66c__0)
                        : ((4U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                            ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8793d66c__0)
                            : ((2U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                    ? 0x484U : (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8793d66c__0))
                                : (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8793d66c__0))))
                    : ((8U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                        ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8793d66c__0)
                        : ((4U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                            ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8793d66c__0)
                            : ((2U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                    ? 0x490U : (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8793d66c__0))
                                : (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8793d66c__0)))))));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  >> 0xcU) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                              >> 0x1dU)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  >> 0xbU) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                              >> 0x1cU)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  >> 0xaU) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                              >> 0x1bU)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  >> 9U) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                            >> 0x1aU)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  >> 8U) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                            >> 0x19U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  >> 7U) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                            >> 0x18U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  >> 6U) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                            >> 0x17U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  >> 5U) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                            >> 0x16U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  >> 4U) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                            >> 0x15U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  >> 3U) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                            >> 0x14U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  >> 2U) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                            >> 0x13U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  >> 1U) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                            >> 0x12U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                 ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                    >> 0x11U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x1fU) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 0x10U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x1eU) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 0xfU)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x1dU) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 0xeU)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x1cU) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 0xdU)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x1bU) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 0xcU)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x1aU) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 0xbU)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x19U) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 0xaU)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x18U) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 9U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x17U) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 8U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x16U) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 7U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x15U) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 6U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x14U) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 5U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x13U) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 4U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x12U) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 3U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x11U) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 2U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__carry__BRA__0__KET__ 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0xfU) & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U]));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x10U) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 1U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a4__cout 
        = (IData)((0xcU == (0xcU & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ForwardAE = 0U;
    if ((0U != (0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                         >> 0xaU)))) {
        if ((((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                        >> 0xaU)) == (0x1fU & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[1U])) 
             & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                >> 8U))) {
            vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ForwardAE = 2U;
        } else if ((((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                               >> 0xaU)) == (0x1fU 
                                             & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                    & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                       >> 7U))) {
            vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ForwardAE = 1U;
        }
    }
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ForwardBE = 0U;
    if ((0U != (0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                         >> 5U)))) {
        if ((((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                        >> 5U)) == (0x1fU & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[1U])) 
             & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                >> 8U))) {
            vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ForwardBE = 2U;
        } else if ((((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                               >> 5U)) == (0x1fU & 
                                           vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                    & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                       >> 7U))) {
            vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ForwardBE = 1U;
        }
    }
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ResultW 
        = ((0x40U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U])
            ? vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[0U]
            : ((0x20U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U])
                ? ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[2U] 
                    << 0x1bU) | (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U] 
                                 >> 5U)) : ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                             << 0x1bU) 
                                            | (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[2U] 
                                               >> 5U))));
    __Vtableidx1 = (((((IData)((0x40000020U == (0x40000020U 
                                                & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])))
                        ? 1U : 0U) << 8U) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__ad__DOT____Vxrand_h87975763__0) 
                                             << 5U)) 
                    | ((0x1cU & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                 >> 0xaU)) | (3U & 
                                              ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                               >> 1U))));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ALUControlD 
        = Vtestbench__ConstPool__TABLE_h460f7593_0[__Vtableidx1];
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout 
        = (1U & (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x10U) & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 1U)) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__carry__BRA__0__KET__) 
                                           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a5__cout 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a4__cout) 
           & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
              >> 4U));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
        = ((2U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ForwardAE))
            ? ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                << 0x1bU) | (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                             >> 5U)) : ((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ForwardAE))
                                         ? vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ResultW
                                         : ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                             << 0x11U) 
                                            | (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[4U] 
                                               >> 0xfU))));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__WriteDataE 
        = ((2U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ForwardBE))
            ? ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                << 0x1bU) | (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                             >> 5U)) : ((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ForwardBE))
                                         ? vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ResultW
                                         : ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[4U] 
                                             << 0x11U) 
                                            | (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                               >> 0xfU))));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout 
        = (1U & (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x11U) & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 2U)) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout) 
                                           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a6__cout 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a5__cout) 
           & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
              >> 5U));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__SrcBE 
        = ((0x8000U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
            ? vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U]
            : vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__WriteDataE);
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout 
        = (1U & (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x12U) & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 3U)) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout) 
                                           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a7__cout 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a6__cout) 
           & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
              >> 6U));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT____VdfgRegularize_h5f12ffbc_0_0 
        = ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
            ^ vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__SrcBE) 
           >> 0x1fU);
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
        = ((0x10000U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
            ? (~ vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__SrcBE)
            : vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__SrcBE);
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout 
        = (1U & (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x13U) & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 4U)) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout) 
                                           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a8__cout 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a7__cout) 
           & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
              >> 7U));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a32__b 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                  >> 0x1fU) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                               >> 0x10U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a31__b 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                  >> 0x1eU) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                               >> 0x10U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a30__b 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                  >> 0x1dU) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                               >> 0x10U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a29__b 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                  >> 0x1cU) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                               >> 0x10U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a28__b 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                  >> 0x1bU) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                               >> 0x10U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a27__b 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                  >> 0x1aU) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                               >> 0x10U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a26__b 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                  >> 0x19U) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                               >> 0x10U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a25__b 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                  >> 0x18U) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                               >> 0x10U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a24__b 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                  >> 0x17U) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                               >> 0x10U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a23__b 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                  >> 0x16U) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                               >> 0x10U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a22__b 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                  >> 0x15U) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                               >> 0x10U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a21__b 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                  >> 0x14U) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                               >> 0x10U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a20__b 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                  >> 0x13U) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                               >> 0x10U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a19__b 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                  >> 0x12U) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                               >> 0x10U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a18__b 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                  >> 0x11U) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                               >> 0x10U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a17__b 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                  ^ vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U]) 
                 >> 0x10U));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a16__b 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                  >> 0xfU) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                              >> 0x10U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a15__b 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                  >> 0xeU) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                              >> 0x10U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a14__b 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                  >> 0xdU) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                              >> 0x10U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a13__b 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                  >> 0xcU) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                              >> 0x10U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a12__b 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                  >> 0xbU) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                              >> 0x10U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a11__b 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                  >> 0xaU) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                              >> 0x10U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a10__b 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                  >> 9U) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                            >> 0x10U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a9__b 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                  >> 8U) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                            >> 0x10U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a8__b 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                  >> 7U) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                            >> 0x10U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a7__b 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                  >> 6U) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                            >> 0x10U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a6__b 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                  >> 5U) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                            >> 0x10U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a5__b 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                  >> 4U) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                            >> 0x10U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a4__b 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                  >> 3U) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                            >> 0x10U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a3__b 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                  >> 2U) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                            >> 0x10U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a2__b 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                  >> 1U) ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                            >> 0x10U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a1__b 
        = (1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                 ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                    >> 0x10U)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout 
        = (1U & (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x14U) & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 5U)) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout) 
                                           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a9__cout 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a8__cout) 
           & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
              >> 8U));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0 
        = ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
            >> 0x1fU) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a32__b));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                  >> 0x1eU) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a31__b)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                  >> 0x1dU) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a30__b)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                  >> 0x1cU) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a29__b)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                  >> 0x1bU) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a28__b)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                  >> 0x1aU) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a27__b)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                  >> 0x19U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a26__b)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                  >> 0x18U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a25__b)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                  >> 0x17U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a24__b)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                  >> 0x16U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a23__b)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                  >> 0x15U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a22__b)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                  >> 0x14U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a21__b)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                  >> 0x13U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a20__b)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                  >> 0x12U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a19__b)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                  >> 0x11U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a18__b)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                  >> 0x10U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a17__b)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                  >> 0xfU) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a16__b)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                  >> 0xeU) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a15__b)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                  >> 0xdU) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a14__b)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                  >> 0xcU) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a13__b)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                  >> 0xbU) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a12__b)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                  >> 0xaU) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a11__b)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                  >> 9U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a10__b)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                  >> 8U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a9__b)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                  >> 7U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a8__b)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                  >> 6U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a7__b)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                  >> 5U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a6__b)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                  >> 4U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a5__b)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                  >> 3U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a4__b)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                  >> 2U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a3__b)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                  >> 1U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a2__b)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a1__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                 ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a1__b)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout 
        = (1U & (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x15U) & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 6U)) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout) 
                                           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a10__cout 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a9__cout) 
           & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
              >> 9U));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__carry__BRA__0__KET__ 
        = ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
            & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a1__b)) 
           | ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
               >> 0x10U) & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a1__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout 
        = (1U & (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x16U) & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 7U)) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout) 
                                           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a11__cout 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a10__cout) 
           & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
              >> 0xaU));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a2__cout 
        = (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
             >> 1U) & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a2__b)) 
           | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__carry__BRA__0__KET__) 
              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout 
        = (1U & (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x17U) & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 8U)) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout) 
                                           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a12__cout 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a11__cout) 
           & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
              >> 0xbU));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a3__cout 
        = (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
             >> 2U) & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a3__b)) 
           | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a2__cout) 
              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout 
        = (1U & (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x18U) & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 9U)) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout) 
                                           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a13__cout 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a12__cout) 
           & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
              >> 0xcU));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a4__cout 
        = (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
             >> 3U) & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a4__b)) 
           | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a3__cout) 
              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout 
        = (1U & (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x19U) & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 0xaU)) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout) 
                                             & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a14__cout 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a13__cout) 
           & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
              >> 0xdU));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a5__cout 
        = (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
             >> 4U) & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a5__b)) 
           | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a4__cout) 
              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout 
        = (1U & (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x1aU) & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 0xbU)) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout) 
                                             & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a15__cout 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a14__cout) 
           & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
              >> 0xeU));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a6__cout 
        = (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
             >> 5U) & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a6__b)) 
           | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a5__cout) 
              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout 
        = (1U & (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x1bU) & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 0xcU)) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout) 
                                             & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a16__cout 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a15__cout) 
           & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
              >> 0xfU));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a7__cout 
        = (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
             >> 6U) & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a7__b)) 
           | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a6__cout) 
              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout 
        = (1U & (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x1cU) & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 0xdU)) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout) 
                                             & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a17__cout 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a16__cout) 
           & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
              >> 0x10U));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a8__cout 
        = (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
             >> 7U) & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a8__b)) 
           | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a7__cout) 
              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout 
        = (1U & (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x1dU) & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 0xeU)) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout) 
                                             & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a18__cout 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a17__cout) 
           & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
              >> 0x11U));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a9__cout 
        = (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
             >> 8U) & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a9__b)) 
           | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a8__cout) 
              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout 
        = (1U & (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x1eU) & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 0xfU)) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout) 
                                             & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a19__cout 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a18__cout) 
           & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
              >> 0x12U));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a10__cout 
        = (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
             >> 9U) & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a10__b)) 
           | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a9__cout) 
              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout 
        = (1U & (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x1fU) & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 0x10U)) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout) 
                                              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a20__cout 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a19__cout) 
           & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
              >> 0x13U));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a11__cout 
        = (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
             >> 0xaU) & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a11__b)) 
           | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a10__cout) 
              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                     >> 0x11U)) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout) 
                                   & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a21__cout 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a20__cout) 
           & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
              >> 0x14U));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a12__cout 
        = (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
             >> 0xbU) & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a12__b)) 
           | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a11__cout) 
              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout 
        = (1U & (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                   >> 1U) & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                             >> 0x12U)) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout) 
                                           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a22__cout 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a21__cout) 
           & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
              >> 0x15U));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a13__cout 
        = (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
             >> 0xcU) & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a13__b)) 
           | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a12__cout) 
              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout 
        = (1U & (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                   >> 2U) & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                             >> 0x13U)) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout) 
                                           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a23__cout 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a22__cout) 
           & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
              >> 0x16U));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a14__cout 
        = (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
             >> 0xdU) & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a14__b)) 
           | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a13__cout) 
              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout 
        = (1U & (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                   >> 3U) & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                             >> 0x14U)) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout) 
                                           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a24__cout 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a23__cout) 
           & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
              >> 0x17U));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a15__cout 
        = (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
             >> 0xeU) & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a15__b)) 
           | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a14__cout) 
              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout 
        = (1U & (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                   >> 4U) & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                             >> 0x15U)) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout) 
                                           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a25__cout 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a24__cout) 
           & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
              >> 0x18U));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a16__cout 
        = (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
             >> 0xfU) & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a16__b)) 
           | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a15__cout) 
              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout 
        = (1U & (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                   >> 5U) & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                             >> 0x16U)) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout) 
                                           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a26__cout 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a25__cout) 
           & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
              >> 0x19U));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a17__cout 
        = (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
             >> 0x10U) & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a17__b)) 
           | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a16__cout) 
              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout 
        = (1U & (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                   >> 6U) & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                             >> 0x17U)) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout) 
                                           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a27__cout 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a26__cout) 
           & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
              >> 0x1aU));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a18__cout 
        = (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
             >> 0x11U) & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a18__b)) 
           | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a17__cout) 
              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout 
        = (1U & (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                   >> 7U) & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                             >> 0x18U)) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout) 
                                           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a28__cout 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a27__cout) 
           & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
              >> 0x1bU));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a19__cout 
        = (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
             >> 0x12U) & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a19__b)) 
           | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a18__cout) 
              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout 
        = (1U & (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                   >> 8U) & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                             >> 0x19U)) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout) 
                                           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a29__cout 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a28__cout) 
           & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
              >> 0x1cU));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a20__cout 
        = (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
             >> 0x13U) & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a20__b)) 
           | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a19__cout) 
              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout 
        = (1U & (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                   >> 9U) & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                             >> 0x1aU)) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout) 
                                           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a30__cout 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a29__cout) 
           & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
              >> 0x1dU));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a21__cout 
        = (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
             >> 0x14U) & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a21__b)) 
           | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a20__cout) 
              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout 
        = (1U & (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                   >> 0xaU) & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 0x1bU)) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout) 
                                             & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a30__cout) 
           & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
              >> 0x1eU));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a22__cout 
        = (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
             >> 0x15U) & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a22__b)) 
           | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a21__cout) 
              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout 
        = (1U & (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                   >> 0xbU) & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 0x1cU)) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout) 
                                             & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCPlus4F 
        = (((((((0x80000000U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF) 
                ^ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout) 
                   << 0x1fU)) | (0x40000000U & ((0xc0000000U 
                                                 & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF) 
                                                ^ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a30__cout) 
                                                   << 0x1eU)))) 
              | ((0x20000000U & ((0xe0000000U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF) 
                                 ^ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a29__cout) 
                                    << 0x1dU))) | (0x10000000U 
                                                   & ((0xf0000000U 
                                                       & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF) 
                                                      ^ 
                                                      ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a28__cout) 
                                                       << 0x1cU))))) 
             | (((0x8000000U & ((0xf8000000U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF) 
                                ^ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a27__cout) 
                                   << 0x1bU))) | (0x4000000U 
                                                  & ((0xfc000000U 
                                                      & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a26__cout) 
                                                      << 0x1aU)))) 
                | ((0x2000000U & ((0xfe000000U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF) 
                                  ^ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a25__cout) 
                                     << 0x19U))) | 
                   (0x1000000U & ((0xff000000U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF) 
                                  ^ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a24__cout) 
                                     << 0x18U)))))) 
            | ((((0x800000U & ((0xff800000U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF) 
                               ^ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a23__cout) 
                                  << 0x17U))) | (0x400000U 
                                                 & ((0xffc00000U 
                                                     & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a22__cout) 
                                                     << 0x16U)))) 
                | ((0x200000U & ((0xffe00000U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF) 
                                 ^ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a21__cout) 
                                    << 0x15U))) | (0x100000U 
                                                   & ((0xfff00000U 
                                                       & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF) 
                                                      ^ 
                                                      ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a20__cout) 
                                                       << 0x14U))))) 
               | (((0x80000U & ((0xfff80000U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF) 
                                ^ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a19__cout) 
                                   << 0x13U))) | (0x40000U 
                                                  & ((0xfffc0000U 
                                                      & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a18__cout) 
                                                      << 0x12U)))) 
                  | ((0x20000U & ((0xfffe0000U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF) 
                                  ^ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a17__cout) 
                                     << 0x11U))) | 
                     (0x10000U & ((0xffff0000U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF) 
                                  ^ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a16__cout) 
                                     << 0x10U))))))) 
           | (((((0x8000U & ((0xffff8000U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF) 
                             ^ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a15__cout) 
                                << 0xfU))) | (0x4000U 
                                              & ((0xffffc000U 
                                                  & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF) 
                                                 ^ 
                                                 ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a14__cout) 
                                                  << 0xeU)))) 
                | ((0x2000U & ((0xffffe000U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF) 
                               ^ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a13__cout) 
                                  << 0xdU))) | (0x1000U 
                                                & ((0xfffff000U 
                                                    & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF) 
                                                   ^ 
                                                   ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a12__cout) 
                                                    << 0xcU))))) 
               | (((0x800U & ((0xfffff800U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF) 
                              ^ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a11__cout) 
                                 << 0xbU))) | (0x400U 
                                               & ((0xfffffc00U 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF) 
                                                  ^ 
                                                  ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a10__cout) 
                                                   << 0xaU)))) 
                  | ((0x200U & ((0xfffffe00U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF) 
                                ^ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a9__cout) 
                                   << 9U))) | (0x100U 
                                               & ((0xffffff00U 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF) 
                                                  ^ 
                                                  ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a8__cout) 
                                                   << 8U)))))) 
              | ((((0x80U & ((0xffffff80U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF) 
                             ^ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a7__cout) 
                                << 7U))) | (0x40U & 
                                            ((0xffffffc0U 
                                              & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF) 
                                             ^ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a6__cout) 
                                                << 6U)))) 
                  | ((0x20U & ((0xffffffe0U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF) 
                               ^ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a5__cout) 
                                  << 5U))) | (0x10U 
                                              & ((0xfffffff0U 
                                                  & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF) 
                                                 ^ 
                                                 ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a4__cout) 
                                                  << 4U))))) 
                 | ((8U & (VL_REDXOR_4((0xcU & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF)) 
                           << 3U)) | ((4U & ((~ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                                 >> 2U)) 
                                             << 2U)) 
                                      | (3U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF))))));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a23__cout 
        = (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
             >> 0x16U) & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a23__b)) 
           | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a22__cout) 
              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout 
        = (1U & (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                   >> 0xcU) & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 0x1dU)) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout) 
                                             & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a24__cout 
        = (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
             >> 0x17U) & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a24__b)) 
           | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a23__cout) 
              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout 
        = (1U & (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                   >> 0xdU) & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 0x1eU)) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout) 
                                             & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a25__cout 
        = (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
             >> 0x18U) & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a25__b)) 
           | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a24__cout) 
              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a26__cout 
        = (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
             >> 0x19U) & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a26__b)) 
           | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a25__cout) 
              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a27__cout 
        = (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
             >> 0x1aU) & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a27__b)) 
           | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a26__cout) 
              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a28__cout 
        = (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
             >> 0x1bU) & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a28__b)) 
           | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a27__cout) 
              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a29__cout 
        = (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
             >> 0x1cU) & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a29__b)) 
           | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a28__cout) 
              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a30__cout 
        = (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
             >> 0x1dU) & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a30__b)) 
           | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a29__cout) 
              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a31__cout 
        = (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
             >> 0x1eU) & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a31__b)) 
           | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a30__cout) 
              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0)));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a32__sum 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0) 
           ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a31__cout));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALUResultE 
        = ((0x40000U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
            ? ((0x20000U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
                ? 0U : ((0x10000U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
                         ? (((~ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                 >> 0x11U)) & ((~ (
                                                   (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                                    >> 0x10U) 
                                                   ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT____VdfgRegularize_h5f12ffbc_0_0))) 
                                               & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT____VdfgRegularize_h5f12ffbc_0_0))) 
                            ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a32__sum))
                         : 0U)) : ((0x20000U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
                                    ? ((0x10000U & 
                                        vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
                                        ? (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                           | vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__SrcBE)
                                        : (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                           & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__SrcBE))
                                    : (((((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a32__sum) 
                                            << 0x1fU) 
                                           | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                               ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a30__cout)) 
                                              << 0x1eU)) 
                                          | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                               ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a29__cout)) 
                                              << 0x1dU) 
                                             | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                 ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a28__cout)) 
                                                << 0x1cU))) 
                                         | (((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                               ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a27__cout)) 
                                              << 0x1bU) 
                                             | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                 ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a26__cout)) 
                                                << 0x1aU)) 
                                            | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                 ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a25__cout)) 
                                                << 0x19U) 
                                               | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                   ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a24__cout)) 
                                                  << 0x18U)))) 
                                        | ((((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                               ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a23__cout)) 
                                              << 0x17U) 
                                             | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                 ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a22__cout)) 
                                                << 0x16U)) 
                                            | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                 ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a21__cout)) 
                                                << 0x15U) 
                                               | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                   ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a20__cout)) 
                                                  << 0x14U))) 
                                           | (((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                 ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a19__cout)) 
                                                << 0x13U) 
                                               | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                   ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a18__cout)) 
                                                  << 0x12U)) 
                                              | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                   ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a17__cout)) 
                                                  << 0x11U) 
                                                 | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                     ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a16__cout)) 
                                                    << 0x10U))))) 
                                       | (((((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                               ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a15__cout)) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                 ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a14__cout)) 
                                                << 0xeU)) 
                                            | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                 ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a13__cout)) 
                                                << 0xdU) 
                                               | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                   ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a12__cout)) 
                                                  << 0xcU))) 
                                           | (((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                 ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a11__cout)) 
                                                << 0xbU) 
                                               | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                   ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a10__cout)) 
                                                  << 0xaU)) 
                                              | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                   ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a9__cout)) 
                                                  << 9U) 
                                                 | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                     ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a8__cout)) 
                                                    << 8U)))) 
                                          | ((((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                 ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a7__cout)) 
                                                << 7U) 
                                               | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                   ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a6__cout)) 
                                                  << 6U)) 
                                              | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                   ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a5__cout)) 
                                                  << 5U) 
                                                 | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                     ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a4__cout)) 
                                                    << 4U))) 
                                             | (((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                   ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a3__cout)) 
                                                  << 3U) 
                                                 | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                     ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a2__cout)) 
                                                    << 2U)) 
                                                | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                     ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__carry__BRA__0__KET__)) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a1__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                         ^ 
                                                         (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                                          >> 0x10U))))))))));
    vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__PCSrcE 
        = (1U & (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                   >> 0x13U) & (0xffffffffU == (~ vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALUResultE))) 
                 | (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                    >> 0x14U)));
}

VL_ATTR_COLD void Vtestbench___024root___eval_triggers__stl(Vtestbench___024root* vlSelf);

VL_ATTR_COLD bool Vtestbench___024root___eval_phase__stl(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_phase__stl\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtestbench___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtestbench___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__act(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___dump_triggers__act\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(negedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__nba(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___dump_triggers__nba\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(negedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtestbench___024root____Vm_traceActivitySetAll(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root____Vm_traceActivitySetAll\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Vtestbench___024root___ctor_var_reset(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___ctor_var_reset\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__ALUControlD = VL_RAND_RESET_I(3);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__PCSrcE = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__StallF = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__ForwardAE = VL_RAND_RESET_I(2);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__ForwardBE = VL_RAND_RESET_I(2);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__pcF = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8793d66c__0 = VL_RAND_RESET_I(11);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8793946e__0 = VL_RAND_RESET_I(11);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls = VL_RAND_RESET_I(11);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__ad__DOT____Vxrand_h87975763__0 = VL_RAND_RESET_I(3);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCPlus4F = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__Read1D = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__Read2D = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__SrcBE = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALUResultE = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__WriteDataE = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ResultW = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(96, vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q);
    VL_RAND_RESET_W(185, vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q);
    VL_RAND_RESET_W(105, vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q);
    VL_RAND_RESET_W(104, vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a4__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a5__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a6__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a7__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a8__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a9__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a10__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a11__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a12__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a13__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a14__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a15__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a16__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a17__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a18__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a19__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a20__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a21__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a22__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a23__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a24__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a25__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a26__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a27__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a28__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a29__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a30__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__carry__BRA__0__KET__ = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT____VdfgRegularize_h5f12ffbc_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__carry__BRA__0__KET__ = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a1__b = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a2__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a2__b = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a3__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a3__b = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a4__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a4__b = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a5__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a5__b = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a6__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a6__b = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a7__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a7__b = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a8__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a8__b = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a9__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a9__b = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a10__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a10__b = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a11__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a11__b = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a12__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a12__b = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a13__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a13__b = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a14__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a14__b = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a15__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a15__b = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a16__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a16__b = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a17__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a17__b = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a18__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a18__b = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a19__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a19__b = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a20__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a20__b = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a21__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a21__b = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a22__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a22__b = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a23__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a23__b = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a24__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a24__b = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a25__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a25__b = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a26__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a26__b = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a27__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a27__b = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a28__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a28__b = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a29__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a29__b = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a30__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a30__b = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a31__cout = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a31__b = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellinp__a32__b = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT____Vcellout__a32__sum = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a1__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__a1__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x01 = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x02 = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x03 = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x04 = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x05 = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x06 = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x07 = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x08 = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x09 = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x10 = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x11 = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x12 = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x13 = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x14 = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x15 = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x16 = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x17 = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x18 = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x19 = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x20 = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x21 = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x22 = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x23 = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x24 = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x25 = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x26 = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x27 = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x28 = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x29 = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x30 = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x31 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->testbench__DOT__dut__DOT__dm__DOT__RAM[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->testbench__DOT__dut__DOT__im__DOT__RAM[__Vi0] = VL_RAND_RESET_I(32);
    }
    VL_RAND_RESET_W(105, vlSelf->__Vdly__testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q);
    vlSelf->__VdlyVal__testbench__DOT__dut__DOT__dm__DOT__RAM__v0 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyDim0__testbench__DOT__dut__DOT__dm__DOT__RAM__v0 = VL_RAND_RESET_I(6);
    vlSelf->__VdlySet__testbench__DOT__dut__DOT__dm__DOT__RAM__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
