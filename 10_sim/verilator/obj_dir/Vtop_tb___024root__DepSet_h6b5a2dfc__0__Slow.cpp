// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb___024root.h"

VL_ATTR_COLD void Vtop_tb___024root___eval_static(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop_tb___024root___eval_initial__TOP(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df35725__0 
        = (0xf0cU & VL_RAND_RESET_I(13));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df36935__0 
        = (0xf4cU & VL_RAND_RESET_I(13));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8defbd8d__0 
        = (0x1860U | (0x10cU & VL_RAND_RESET_I(13)));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df14fac__0 
        = (0x1642U | (0x10cU & VL_RAND_RESET_I(13)));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df4b0c7__0 
        = (0x414U | (0x40U & VL_RAND_RESET_I(13)));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df49580__0 
        = (0x380U | (0x40U & VL_RAND_RESET_I(13)));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8def22da__0 
        = (0x1008U | (0xe00U & VL_RAND_RESET_I(13)));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ext__DOT____Vxrand_h8df4a42a__0 
        = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0U] = 0x513U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[1U] = 0x100593U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[2U] = 0xfff00613U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[3U] = 0x7ff00713U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[4U] = 0x80000793U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[5U] = 0xb00813U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[6U] = 0xc00893U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[7U] = 0xfff00913U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[8U] = 0x993U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[9U] = 0xb54a33U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0xaU] = 0xc5cab3U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0xbU] = 0xe64b33U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0xcU] = 0xf74bb3U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0xdU] = 0x154c13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0xeU] = 0xfff5cc93U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0xfU] = 0x7ff64d13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x10U] = 0xb56db3U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x11U] = 0xc5ee33U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x12U] = 0xe66eb3U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x13U] = 0x156c13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x14U] = 0xfff5ec93U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x15U] = 0x7ff66d13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x16U] = 0xb57db3U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x17U] = 0xc5fe33U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x18U] = 0xe67eb3U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x19U] = 0x157c13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x1aU] = 0xfff5fc93U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x1bU] = 0x7ff67d13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x1cU] = 0xb51c33U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x1dU] = 0xc59cb3U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x1eU] = 0xe61d33U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x1fU] = 0xb65db3U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x20U] = 0xc75e33U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x21U] = 0xe7deb3U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x22U] = 0x40b65c33U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x23U] = 0x40c75cb3U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x24U] = 0x40e7dd33U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x25U] = 0x161d93U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x26U] = 0xf71e13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x27U] = 0x79e93U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x28U] = 0x165c13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x29U] = 0xf75c93U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x2aU] = 0x7dd13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x2bU] = 0x40165d93U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x2cU] = 0x40f75e13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x2dU] = 0x4007de93U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x2eU] = 0xb52c33U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x2fU] = 0xc5acb3U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x30U] = 0xe7ad33U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x31U] = 0xb53db3U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x32U] = 0xc5be33U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x33U] = 0xe7beb3U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x34U] = 0x152c13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x35U] = 0xfff5ac93U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x36U] = 0x7ff7ad13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x37U] = 0x153d93U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x38U] = 0xfff5be13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x39U] = 0x7ff7be93U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x3aU] = 0xb52223U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x3bU] = 0xc51423U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x3cU] = 0xe50623U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x3dU] = 0x452a03U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x3eU] = 0x851a83U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x3fU] = 0xc50b03U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x40U] = 0xc54b83U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x41U] = 0x855c03U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x42U] = 0xf5a823U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x43U] = 0x1059a23U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x44U] = 0x1158c23U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x45U] = 0x105ac83U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x46U] = 0x1459d03U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x47U] = 0x1858d83U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x48U] = 0x185ce03U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x49U] = 0x145de83U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x4aU] = 0xb58463U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x4bU] = 0x13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x4cU] = 0x13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x4dU] = 0xc58463U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x4eU] = 0xc59463U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x4fU] = 0x13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x50U] = 0x13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x51U] = 0xb59463U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x52U] = 0xb7c463U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x53U] = 0x13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x54U] = 0x13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x55U] = 0xf5c463U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x56U] = 0xf5d463U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x57U] = 0x13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x58U] = 0x13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x59U] = 0xb7d463U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x5aU] = 0xc5e463U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x5bU] = 0x13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x5cU] = 0x13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x5dU] = 0xb66463U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x5eU] = 0xb67463U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x5fU] = 0x13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x60U] = 0x13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x61U] = 0xc5f463U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x62U] = 0x1000a6fU;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x63U] = 0x13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x64U] = 0x13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x65U] = 0x13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x66U] = 0x13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x67U] = 0x1800aefU;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x68U] = 0x13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x69U] = 0x13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x6aU] = 0x13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x6bU] = 0x13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x6cU] = 0x13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x6dU] = 0x13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x6eU] = 0x28a8b67U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x6fU] = 0x13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x70U] = 0x13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x71U] = 0x13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x72U] = 0x13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x73U] = 0x28b0be7U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x74U] = 0x13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x75U] = 0x13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x76U] = 0x13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x77U] = 0x13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x78U] = 0x13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x79U] = 0x13U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x7aU] = 0xaaaaaa37U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x7bU] = 0xfff00ab7U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x7cU] = 0xffb37U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x7dU] = 0x1b97U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x7eU] = 0xfffffc17U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x7fU] = 0xffc97U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x80U] = 0x73U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x81U] = 0x100073U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x82U] = 0x500113U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x83U] = 0xc00193U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x84U] = 0xff718393U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x85U] = 0x23e233U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x86U] = 0x41c2b3U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x87U] = 0x4282b3U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x88U] = 0x2728863U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x89U] = 0x41a233U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x8aU] = 0x20463U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x8bU] = 0x293U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x8cU] = 0x23a233U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x8dU] = 0x5203b3U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x8eU] = 0x402383b3U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x8fU] = 0x471aa23U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x90U] = 0x6002103U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x91U] = 0x5104b3U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x92U] = 0x8001efU;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x93U] = 0x100113U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x94U] = 0x910133U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x95U] = 0x100213U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x96U] = 0x800002b7U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x97U] = 0x42a333U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x98U] = 0x30063U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x99U] = 0xabcde4b7U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x9aU] = 0x910133U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x9bU] = 0x421a023U;
    vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[0x9cU] = 0xffdff06fU;
}

VL_ATTR_COLD void Vtop_tb___024root___eval_final(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__stl(Vtop_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop_tb___024root___eval_phase__stl(Vtop_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_tb___024root___eval_settle(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../../01_bench/top_tb.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__stl(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_tb___024root___stl_sequent__TOP__0(Vtop_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_tb___024root___eval_stl(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop_tb___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

extern const VlUnpacked<CData/*4:0*/, 8> Vtop_tb__ConstPool__TABLE_h04b19207_0;
extern const VlUnpacked<CData/*3:0*/, 1024> Vtop_tb__ConstPool__TABLE_h91662cc3_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtop_tb__ConstPool__TABLE_h651780dc_0;

VL_ATTR_COLD void Vtop_tb___024root___stl_sequent__TOP__0(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__bru__DOT____VdfgExtracted_h2d7dafda__0;
    top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__bru__DOT____VdfgExtracted_h2d7dafda__0 = 0;
    CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0;
    top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0 = 0;
    SData/*9:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    SData/*8:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*2:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
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
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__SrcB 
        = ((0x100U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
            ? vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt
            : vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd2);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a8__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a7__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 7U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 1U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a1__cout) 
                            & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0))));
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
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a9__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a8__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 8U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 2U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout) 
                            & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0))));
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
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a10__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a9__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 9U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 3U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout) 
                            & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0))));
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
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a11__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a10__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 0xaU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 4U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout) 
                            & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0))));
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
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a12__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a11__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 0xbU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 5U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout) 
                            & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0))));
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
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a13__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a12__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 0xcU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 6U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout) 
                            & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0))));
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
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a14__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a13__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 0xdU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 7U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout) 
                            & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a5__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 4U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a4__cout) 
                            & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a15__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a14__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 0xeU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 8U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout) 
                            & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a6__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 5U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a5__cout) 
                            & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a16__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a15__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 0xfU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 9U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout) 
                            & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a7__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 6U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a6__cout) 
                            & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a17__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a16__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 0x10U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 0xaU) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout) 
                              & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a8__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 7U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a7__cout) 
                            & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a18__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a17__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 0x11U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 0xbU) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout) 
                              & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a9__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 8U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a8__cout) 
                            & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a19__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a18__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 0x12U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 0xcU) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout) 
                              & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a10__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 9U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a9__cout) 
                            & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a20__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a19__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 0x13U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 0xdU) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout) 
                              & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a11__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0xaU) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a10__cout) 
                              & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a21__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a20__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 0x14U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 0xeU) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout) 
                              & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a12__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0xbU) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a11__cout) 
                              & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a22__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a21__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 0x15U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 0xfU) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout) 
                              & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a13__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0xcU) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a12__cout) 
                              & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a23__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a22__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 0x16U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 0x10U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a14__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0xdU) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a13__cout) 
                              & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a24__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a23__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 0x17U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 0x11U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a15__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0xeU) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a14__cout) 
                              & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a25__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a24__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 0x18U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 0x12U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a16__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0xfU) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a15__cout) 
                              & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a26__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a25__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 0x19U));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 0x13U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a17__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x10U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a16__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a27__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a26__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 0x1aU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 0x14U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a18__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x11U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a17__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a28__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a27__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 0x1bU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 0x15U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a19__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x12U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a18__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a29__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a28__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 0x1cU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 0x16U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a20__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x13U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a19__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a30__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a29__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 0x1dU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 0x17U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a21__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x14U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a20__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a30__cout) 
           & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
              >> 0x1eU));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 0x18U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a22__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x15U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a21__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0))));
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
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a23__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x16U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a22__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 0x1aU) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a24__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x17U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a23__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 0x1bU) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a25__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x18U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a24__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 0x1cU) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a26__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x19U) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a25__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 0x1dU) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a27__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x1aU) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a26__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout 
        = (1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                  >> 0x1eU) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout) 
                               & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0))));
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
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ReadData 
        = vlSelf->top_tb__DOT__dut__DOT__dm__DOT__RAM
        [(0x3fU & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUResult 
                   >> 2U))];
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
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCmux__DOT____VdfgRegularize_hae03c8cc_0_0 
        = (1U & ((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls)) 
                 & (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                     >> 1U) | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                >> 4U) & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__bru__DOT__cond)))));
}

VL_ATTR_COLD void Vtop_tb___024root___eval_triggers__stl(Vtop_tb___024root* vlSelf);

VL_ATTR_COLD bool Vtop_tb___024root___eval_phase__stl(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__act(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge top_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge top_tb.clk or posedge top_tb.rst)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge top_tb.clk)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__nba(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge top_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge top_tb.clk or posedge top_tb.rst)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge top_tb.clk)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_tb___024root___ctor_var_reset(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->top_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__i_Instr = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__top_ReadData = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__top_WriteData = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__top_ALUResult = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__top_top_MemWrite = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__expected_data = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__expected_addr = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__cycle_count = 0;
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUControl = VL_RAND_RESET_I(4);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__LSType = VL_RAND_RESET_I(5);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op = VL_RAND_RESET_I(7);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__funct7b5 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ResultSrcEb0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ReadData = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUResult = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__WriteData = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df35725__0 = VL_RAND_RESET_I(13);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df36935__0 = VL_RAND_RESET_I(13);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8defbd8d__0 = VL_RAND_RESET_I(13);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df14fac__0 = VL_RAND_RESET_I(13);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df4b0c7__0 = VL_RAND_RESET_I(13);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df49580__0 = VL_RAND_RESET_I(13);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8def22da__0 = VL_RAND_RESET_I(13);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls = VL_RAND_RESET_I(13);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__bru__DOT__cond = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__bru__DOT__Carry = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCPlus4 = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ScrA = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__SrcB = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ReadData_result = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellinp__ext__instr = VL_RAND_RESET_I(25);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCmux__DOT____VdfgRegularize_hae03c8cc_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a4__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a5__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a6__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a7__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a8__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a9__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a10__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a11__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a12__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a13__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a14__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a15__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a16__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a17__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a18__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a19__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a20__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a21__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a22__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a23__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a24__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a25__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a26__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a27__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a28__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a29__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a30__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a1__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a1__sum = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__isAddSub = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__Neg = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sum = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__and1__y = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__or1__y = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__xor1__y = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a1__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a2__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a3__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a4__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a5__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a6__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a7__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a8__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a9__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a10__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a11__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a12__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a13__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a14__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a15__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a16__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a17__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a18__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a19__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a20__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a21__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a22__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a23__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a24__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a25__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a26__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a27__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a28__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a29__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a30__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a31__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a32__cout = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a1__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift1 = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift2 = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift3 = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift4 = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift5 = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift1 = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift2 = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift3 = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift4 = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift5 = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift1 = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift2 = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift3 = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift4 = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift5 = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ext__DOT____Vxrand_h8df4a42a__0 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd2 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->top_tb__DOT__dut__DOT__dm__DOT__RAM[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vdlyvset__top_tb__DOT__clk__v0 = 0;
    vlSelf->__Vdlyvset__top_tb__DOT__clk__v1 = 0;
    vlSelf->__Vdly__top_tb__DOT__cycle_count = 0;
    vlSelf->__Vtrigprevexpr___TOP__top_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__top_tb__DOT__rst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
