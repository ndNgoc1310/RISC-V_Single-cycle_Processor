// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    Vtop___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__im__DOT__IMEM[0U] = 0x513U;
    vlSelfRef.top__DOT__im__DOT__IMEM[1U] = 0x100593U;
    vlSelfRef.top__DOT__im__DOT__IMEM[2U] = 0xfff00613U;
    vlSelfRef.top__DOT__im__DOT__IMEM[3U] = 0x7ff00713U;
    vlSelfRef.top__DOT__im__DOT__IMEM[4U] = 0x80000793U;
    vlSelfRef.top__DOT__im__DOT__IMEM[5U] = 0xb00813U;
    vlSelfRef.top__DOT__im__DOT__IMEM[6U] = 0xc00893U;
    vlSelfRef.top__DOT__im__DOT__IMEM[7U] = 0xfff00913U;
    vlSelfRef.top__DOT__im__DOT__IMEM[8U] = 0x993U;
    vlSelfRef.top__DOT__im__DOT__IMEM[9U] = 0xb54a33U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0xaU] = 0xc5cab3U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0xbU] = 0xe64b33U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0xcU] = 0xf74bb3U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0xdU] = 0x154c13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0xeU] = 0xfff5cc93U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0xfU] = 0x7ff64d13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x10U] = 0xb56db3U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x11U] = 0xc5ee33U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x12U] = 0xe66eb3U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x13U] = 0x156c13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x14U] = 0xfff5ec93U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x15U] = 0x7ff66d13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x16U] = 0xb57db3U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x17U] = 0xc5fe33U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x18U] = 0xe67eb3U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x19U] = 0x157c13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x1aU] = 0xfff5fc93U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x1bU] = 0x7ff67d13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x1cU] = 0xb51c33U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x1dU] = 0xc59cb3U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x1eU] = 0xe61d33U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x1fU] = 0xb65db3U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x20U] = 0xc75e33U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x21U] = 0xe7deb3U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x22U] = 0x40b65c33U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x23U] = 0x40c75cb3U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x24U] = 0x40e7dd33U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x25U] = 0x161d93U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x26U] = 0xf71e13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x27U] = 0x79e93U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x28U] = 0x165c13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x29U] = 0xf75c93U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x2aU] = 0x7dd13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x2bU] = 0x40165d93U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x2cU] = 0x40f75e13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x2dU] = 0x4007de93U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x2eU] = 0xb52c33U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x2fU] = 0xc5acb3U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x30U] = 0xe7ad33U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x31U] = 0xb53db3U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x32U] = 0xc5be33U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x33U] = 0xe7beb3U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x34U] = 0x152c13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x35U] = 0xfff5ac93U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x36U] = 0x7ff7ad13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x37U] = 0x153d93U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x38U] = 0xfff5be13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x39U] = 0x7ff7be93U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x3aU] = 0xb52223U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x3bU] = 0xc51423U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x3cU] = 0xe50623U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x3dU] = 0x452a03U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x3eU] = 0x851a83U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x3fU] = 0xc50b03U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x40U] = 0xc54b83U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x41U] = 0x855c03U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x42U] = 0xf5a823U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x43U] = 0x1059a23U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x44U] = 0x1158c23U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x45U] = 0x105ac83U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x46U] = 0x1459d03U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x47U] = 0x1858d83U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x48U] = 0x185ce03U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x49U] = 0x145de83U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x4aU] = 0xb58463U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x4bU] = 0x13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x4cU] = 0x13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x4dU] = 0xc58463U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x4eU] = 0xc59463U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x4fU] = 0x13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x50U] = 0x13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x51U] = 0xb59463U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x52U] = 0xb7c463U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x53U] = 0x13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x54U] = 0x13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x55U] = 0xf5c463U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x56U] = 0xf5d463U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x57U] = 0x13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x58U] = 0x13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x59U] = 0xb7d463U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x5aU] = 0xc5e463U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x5bU] = 0x13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x5cU] = 0x13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x5dU] = 0xb66463U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x5eU] = 0xb67463U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x5fU] = 0x13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x60U] = 0x13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x61U] = 0xc5f463U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x62U] = 0x1000a6fU;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x63U] = 0x13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x64U] = 0x13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x65U] = 0x13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x66U] = 0x13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x67U] = 0x1800aefU;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x68U] = 0x13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x69U] = 0x13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x6aU] = 0x13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x6bU] = 0x13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x6cU] = 0x13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x6dU] = 0x13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x6eU] = 0x28a8b67U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x6fU] = 0x13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x70U] = 0x13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x71U] = 0x13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x72U] = 0x13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x73U] = 0x28b0be7U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x74U] = 0x13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x75U] = 0x13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x76U] = 0x13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x77U] = 0x13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x78U] = 0x13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x79U] = 0x13U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x7aU] = 0xaaaaaa37U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x7bU] = 0xfff00ab7U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x7cU] = 0xffb37U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x7dU] = 0x1b97U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x7eU] = 0xfffffc17U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x7fU] = 0xffc97U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x80U] = 0x73U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x81U] = 0x100073U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x82U] = 0x500113U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x83U] = 0xc00193U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x84U] = 0xff718393U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x85U] = 0x23e233U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x86U] = 0x41c2b3U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x87U] = 0x4282b3U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x88U] = 0x2728863U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x89U] = 0x41a233U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x8aU] = 0x20463U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x8bU] = 0x293U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x8cU] = 0x23a233U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x8dU] = 0x5203b3U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x8eU] = 0x402383b3U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x8fU] = 0x471aa23U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x90U] = 0x6002103U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x91U] = 0x5104b3U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x92U] = 0x8001efU;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x93U] = 0x100113U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x94U] = 0x910133U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x95U] = 0x100213U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x96U] = 0x800002b7U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x97U] = 0x42a333U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x98U] = 0x30063U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x99U] = 0xabcde4b7U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x9aU] = 0x910133U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x9bU] = 0x421a023U;
    vlSelfRef.top__DOT__im__DOT__IMEM[0x9cU] = 0xffdff06fU;
    vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0 
        = (0xf0cU & VL_RAND_RESET_ASSIGN_I(13));
    vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791b458__0 
        = (0xf4cU & VL_RAND_RESET_ASSIGN_I(13));
    vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h87902ff0__0 
        = (0x1860U | (0x10cU & VL_RAND_RESET_ASSIGN_I(13)));
    vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h878f7ac9__0 
        = (0x1642U | (0x10cU & VL_RAND_RESET_ASSIGN_I(13)));
    vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8794bea6__0 
        = (0x414U | (0x40U & VL_RAND_RESET_ASSIGN_I(13)));
    vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8794a91d__0 
        = (0x380U | (0x40U & VL_RAND_RESET_ASSIGN_I(13)));
    vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h878f4ebb__0 
        = (0x1008U | (0xe00U & VL_RAND_RESET_ASSIGN_I(13)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ext__DOT____Vxrand_h8794da3b__0 
        = VL_RAND_RESET_ASSIGN_I(32);
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../../00_src/top.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        Vtop___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

extern const VlUnpacked<CData/*4:0*/, 8> Vtop__ConstPool__TABLE_h531dc83c_0;
extern const VlUnpacked<CData/*3:0*/, 1024> Vtop__ConstPool__TABLE_hcb2af5a2_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtop__ConstPool__TABLE_h51c4d583_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ top__DOT__proc__DOT__ctrl__DOT__bru__DOT____VdfgExtracted_h4ead3b55__0;
    top__DOT__proc__DOT__ctrl__DOT__bru__DOT____VdfgExtracted_h4ead3b55__0 = 0;
    CData/*0:0*/ top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0;
    top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0 = 0;
    SData/*9:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    SData/*8:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*2:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelfRef.Ecall = (IData)((0x73U == (0xfff0007fU 
                                         & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])));
    vlSelfRef.Ebreak = (IData)((0x100073U == (0xfff0007fU 
                                              & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])));
    vlSelfRef.top_pcF = vlSelfRef.top__DOT__proc__DOT__pcF;
    vlSelfRef.top_ALUResultM = ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                                 << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                              >> 5U));
    vlSelfRef.top_MemWriteM = (1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                                     >> 0xaU));
    vlSelfRef.top_InstrF = vlSelfRef.top__DOT__im__DOT__IMEM
        [(0xffU & (vlSelfRef.top__DOT__proc__DOT__pcF 
                   >> 2U))];
    vlSelfRef.top_ReadDataM = vlSelfRef.top__DOT__dm__DOT__RAM
        [(0x3fU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                   >> 7U))];
    vlSelfRef.top__DOT__proc__DOT__StallF = (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[6U] 
                                             & (((0x1fU 
                                                  & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U]) 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                     >> 0xfU))) 
                                                | ((0x1fU 
                                                    & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U]) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                       >> 0x14U)))));
    __Vtableidx3 = (7U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                          >> 0xcU));
    vlSelfRef.top__DOT__proc__DOT__LSTypeD = Vtop__ConstPool__TABLE_h531dc83c_0
        [__Vtableidx3];
    vlSelfRef.top__DOT__proc__DOT__ReadDataM = vlSelfRef.top__DOT__dm__DOT__RAM
        [(0x3fU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                   >> 7U))];
    vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls 
        = ((0x40U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
            ? ((0x20U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                ? ((0x10U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                    ? ((8U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                        ? (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0)
                        : ((4U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                            ? (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0)
                            : ((2U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                    ? (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791b458__0)
                                    : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0))
                                : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0))))
                    : ((8U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                        ? ((4U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                            ? ((2U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                    ? (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h878f7ac9__0)
                                    : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0))
                                : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0))
                            : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0))
                        : ((4U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                            ? ((2U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                    ? 0x1149U : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0))
                                : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0))
                            : ((2U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                    ? (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8794bea6__0)
                                    : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0))
                                : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0)))))
                : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0))
            : ((0x20U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                ? ((0x10U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                    ? ((8U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                        ? (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0)
                        : ((4U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                            ? ((2U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                    ? 0x190cU : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0))
                                : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0))
                            : ((2U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                    ? (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h878f4ebb__0)
                                    : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0))
                                : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0))))
                    : ((8U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                        ? (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0)
                        : ((4U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                            ? (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0)
                            : ((2U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                    ? (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8794a91d__0)
                                    : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0))
                                : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0)))))
                : ((0x10U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                    ? ((8U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                        ? (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0)
                        : ((4U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                            ? ((2U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                    ? (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h87902ff0__0)
                                    : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0))
                                : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0))
                            : ((2U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                    ? 0x1108U : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0))
                                : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0))))
                    : ((8U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                        ? (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0)
                        : ((4U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                            ? (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0)
                            : ((2U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])
                                    ? 0x1120U : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0))
                                : (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0)))))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  >> 0xeU) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                              >> 0x1fU)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__isAddSub 
        = (1U & ((IData)((0U == (0xe000000U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U]))) 
                 | ((IData)((0x1000000U == (0xb000000U 
                                            & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U]))) 
                    | (IData)((0x9000000U == (0x9000000U 
                                              & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U]))))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  >> 0xdU) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                              >> 0x1eU)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  >> 0xcU) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                              >> 0x1dU)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  >> 0xbU) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                              >> 0x1cU)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  >> 0xaU) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                              >> 0x1bU)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  >> 9U) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                            >> 0x1aU)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  >> 8U) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                            >> 0x19U)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  >> 7U) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                            >> 0x18U)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  >> 6U) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                            >> 0x17U)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  >> 5U) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                            >> 0x16U)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  >> 4U) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                            >> 0x15U)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  >> 3U) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                            >> 0x14U)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  >> 2U) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                            >> 0x13U)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  >> 1U) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                            >> 0x12U)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a4__cout 
        = (IData)((0xcU == (0xcU & vlSelfRef.top__DOT__proc__DOT__pcF)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                 ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                    >> 0x11U)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x1fU) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 0x10U)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x1eU) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 0xfU)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x1dU) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 0xeU)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x1cU) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 0xdU)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x1bU) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 0xcU)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x1aU) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 0xbU)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x19U) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 0xaU)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x18U) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 9U)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x17U) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 8U)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x16U) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 7U)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x15U) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 6U)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x14U) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 5U)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x13U) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 4U)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x12U) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 3U)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x11U) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 2U)));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__carry__BRA__0__KET__ 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0xfU) & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U]));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                  >> 0x10U) ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 1U)));
    vlSelfRef.top__DOT__proc__DOT__ForwardAE = 0U;
    if ((0U != (0x1fU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                         >> 0xaU)))) {
        if ((((0x1fU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                        >> 0xaU)) == (0x1fU & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U])) 
             & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                >> 0xdU))) {
            vlSelfRef.top__DOT__proc__DOT__ForwardAE = 2U;
        } else if ((((0x1fU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                               >> 0xaU)) == (0x1fU 
                                             & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[2U])) 
                    & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[4U] 
                       >> 7U))) {
            vlSelfRef.top__DOT__proc__DOT__ForwardAE = 1U;
        }
    }
    vlSelfRef.top__DOT__proc__DOT__ForwardBE = 0U;
    if ((0U != (0x1fU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                         >> 5U)))) {
        if ((((0x1fU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                        >> 5U)) == (0x1fU & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U])) 
             & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                >> 0xdU))) {
            vlSelfRef.top__DOT__proc__DOT__ForwardBE = 2U;
        } else if ((((0x1fU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                               >> 5U)) == (0x1fU & 
                                           vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[2U])) 
                    & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[4U] 
                       >> 7U))) {
            vlSelfRef.top__DOT__proc__DOT__ForwardBE = 1U;
        }
    }
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ResultW 
        = ((0x40U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[4U])
            ? ((0x20U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[4U])
                ? vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[0U]
                : vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])
            : ((0x20U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[4U])
                ? ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                    << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[2U] 
                                 >> 5U)) : ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[4U] 
                                             << 0x1bU) 
                                            | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                               >> 5U))));
    if ((0x200U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U])) {
        if ((0x100U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U])) {
            vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel 
                = vlSelfRef.top__DOT__proc__DOT__ReadDataM;
            vlSelfRef.top__DOT__proc__DOT__WriteDataM 
                = ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                    << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                 >> 5U));
        } else if ((0x80U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U])) {
            vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel 
                = vlSelfRef.top__DOT__proc__DOT__ReadDataM;
            vlSelfRef.top__DOT__proc__DOT__WriteDataM 
                = ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                    << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                 >> 5U));
        } else if ((0x40U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U])) {
            vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel 
                = vlSelfRef.top__DOT__proc__DOT__ReadDataM;
            vlSelfRef.top__DOT__proc__DOT__WriteDataM 
                = ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                    << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                 >> 5U));
        } else if ((0x20U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U])) {
            vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel 
                = vlSelfRef.top__DOT__proc__DOT__ReadDataM;
            vlSelfRef.top__DOT__proc__DOT__WriteDataM 
                = ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                    << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                 >> 5U));
        } else {
            vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel 
                = (((- (IData)((1U & (vlSelfRef.top__DOT__proc__DOT__ReadDataM 
                                      >> 7U)))) << 8U) 
                   | (0xffU & vlSelfRef.top__DOT__proc__DOT__ReadDataM));
            vlSelfRef.top__DOT__proc__DOT__WriteDataM 
                = ((0xffffff00U & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel) 
                   | (0xffU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                               >> 5U)));
        }
    } else if ((0x100U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U])) {
        if ((0x80U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U])) {
            vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel 
                = vlSelfRef.top__DOT__proc__DOT__ReadDataM;
            vlSelfRef.top__DOT__proc__DOT__WriteDataM 
                = ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                    << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                 >> 5U));
        } else if ((0x40U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U])) {
            vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel 
                = vlSelfRef.top__DOT__proc__DOT__ReadDataM;
            vlSelfRef.top__DOT__proc__DOT__WriteDataM 
                = ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                    << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                 >> 5U));
        } else if ((0x20U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U])) {
            vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel 
                = vlSelfRef.top__DOT__proc__DOT__ReadDataM;
            vlSelfRef.top__DOT__proc__DOT__WriteDataM 
                = ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                    << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                 >> 5U));
        } else {
            vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel 
                = (((- (IData)((1U & (vlSelfRef.top__DOT__proc__DOT__ReadDataM 
                                      >> 0xfU)))) << 0x10U) 
                   | (0xffffU & vlSelfRef.top__DOT__proc__DOT__ReadDataM));
            vlSelfRef.top__DOT__proc__DOT__WriteDataM 
                = ((0xffff0000U & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel) 
                   | (0xffffU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                 >> 5U)));
        }
    } else if ((0x80U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U])) {
        if ((0x40U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U])) {
            vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel 
                = vlSelfRef.top__DOT__proc__DOT__ReadDataM;
            vlSelfRef.top__DOT__proc__DOT__WriteDataM 
                = ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                    << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                 >> 5U));
        } else if ((0x20U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U])) {
            vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel 
                = vlSelfRef.top__DOT__proc__DOT__ReadDataM;
            vlSelfRef.top__DOT__proc__DOT__WriteDataM 
                = ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                    << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                 >> 5U));
        } else {
            vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel 
                = vlSelfRef.top__DOT__proc__DOT__ReadDataM;
            vlSelfRef.top__DOT__proc__DOT__WriteDataM 
                = ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                    << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                 >> 5U));
        }
    } else if ((0x40U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U])) {
        if ((0x20U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U])) {
            vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel 
                = vlSelfRef.top__DOT__proc__DOT__ReadDataM;
            vlSelfRef.top__DOT__proc__DOT__WriteDataM 
                = ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                    << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                 >> 5U));
        } else {
            vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel 
                = (0xffU & vlSelfRef.top__DOT__proc__DOT__ReadDataM);
            vlSelfRef.top__DOT__proc__DOT__WriteDataM 
                = ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                    << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                 >> 5U));
        }
    } else if ((0x20U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U])) {
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel 
            = (0xffffU & vlSelfRef.top__DOT__proc__DOT__ReadDataM);
        vlSelfRef.top__DOT__proc__DOT__WriteDataM = 
            ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
              << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                           >> 5U));
    } else {
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel 
            = vlSelfRef.top__DOT__proc__DOT__ReadDataM;
        vlSelfRef.top__DOT__proc__DOT__WriteDataM = 
            ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
              << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                           >> 5U));
    }
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ImmExtD 
        = ((0x800U & (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
            ? ((0x400U & (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                ? vlSelfRef.top__DOT__proc__DOT__dp__DOT__ext__DOT____Vxrand_h8794da3b__0
                : ((0x200U & (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                    ? vlSelfRef.top__DOT__proc__DOT__dp__DOT__ext__DOT____Vxrand_h8794da3b__0
                    : (0xfffff000U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])))
            : ((0x400U & (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                ? ((0x200U & (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                    ? (((- (IData)((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                    >> 0x1fU))) << 0x14U) 
                       | (((0xff000U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U]) 
                           | (0x800U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                        >> 9U))) | 
                          (0x7feU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                     >> 0x14U)))) : 
                   (((- (IData)((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                 >> 0x1fU))) << 0xcU) 
                    | ((0x800U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                  << 4U)) | ((0x7e0U 
                                              & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                 >> 0x14U)) 
                                             | (0x1eU 
                                                & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                   >> 7U))))))
                : ((0x200U & (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                    ? (((- (IData)((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                      >> 7U))))
                    : (((- (IData)((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                          >> 0x14U)))));
    __Vtableidx1 = (((((IData)((0x40000020U == (0x40000020U 
                                                & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])))
                        ? 1U : 0U) << 6U) | (0x20U 
                                             & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                >> 0x19U))) 
                    | ((0x1cU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                 >> 0xaU)) | (3U & 
                                              ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                               >> 2U))));
    vlSelfRef.top__DOT__proc__DOT__ALUControlD = Vtop__ConstPool__TABLE_hcb2af5a2_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a5__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a4__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 4U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x10U) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 1U)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__carry__BRA__0__KET__) 
                                           & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE = 
        ((2U & (IData)(vlSelfRef.top__DOT__proc__DOT__ForwardAE))
          ? ((1U & (IData)(vlSelfRef.top__DOT__proc__DOT__ForwardAE))
              ? 0U : ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                       << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                    >> 5U))) : ((1U 
                                                 & (IData)(vlSelfRef.top__DOT__proc__DOT__ForwardAE))
                                                 ? vlSelfRef.top__DOT__proc__DOT__dp__DOT__ResultW
                                                 : 
                                                ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                                  << 0x11U) 
                                                 | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[4U] 
                                                    >> 0xfU))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__WriteDataE 
        = ((2U & (IData)(vlSelfRef.top__DOT__proc__DOT__ForwardBE))
            ? ((1U & (IData)(vlSelfRef.top__DOT__proc__DOT__ForwardBE))
                ? 0U : ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                         << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                      >> 5U))) : ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__proc__DOT__ForwardBE))
                                                   ? vlSelfRef.top__DOT__proc__DOT__dp__DOT__ResultW
                                                   : 
                                                  ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[4U] 
                                                    << 0x11U) 
                                                   | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                                      >> 0xfU))));
    vlSelfRef.top_WriteDataM = vlSelfRef.top__DOT__proc__DOT__WriteDataM;
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a6__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a5__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 5U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x11U) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 2U)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout) 
                                           & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcBE = 
        ((0x800000U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
          ? vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U]
          : vlSelfRef.top__DOT__proc__DOT__dp__DOT__WriteDataE);
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a7__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a6__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 6U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x12U) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 3U)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout) 
                                           & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__and1__y 
        = (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
           & vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcBE);
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__or1__y 
        = (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
           | vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcBE);
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__xor1__y 
        = (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
           ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcBE);
    if ((1U & vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcBE)) {
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift1 
            = VL_SHIFTL_III(32,32,32, vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE, 1U);
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift1 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE, 1U);
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift1 
            = ((0x80000000U & vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE) 
               | (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  >> 1U));
    } else {
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift1 
            = vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE;
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift1 
            = vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE;
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift1 
            = vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE;
    }
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
        = ((0x1000000U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
            ? (~ vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcBE)
            : vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcBE);
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a8__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a7__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 7U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x13U) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 4U)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout) 
                                           & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[2U] 
        = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__and1__y;
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[3U] 
        = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__or1__y;
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[4U] 
        = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__xor1__y;
    if ((2U & vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcBE)) {
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift2 
            = VL_SHIFTL_III(32,32,32, vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift1, 2U);
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift2 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift1, 2U);
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift2 
            = (((- (IData)((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                            >> 0x1fU))) << 0x1eU) | 
               (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift1 
                >> 2U));
    } else {
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift2 
            = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift1;
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift2 
            = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift1;
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift2 
            = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift1;
    }
    top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0 
        = ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
            ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
           >> 0x1fU);
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x1eU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x1dU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x1cU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x1bU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x1aU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x19U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x18U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x17U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x16U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x15U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x14U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x13U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x12U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x11U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0x10U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0xfU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0xeU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0xdU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0xcU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0xbU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 0xaU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 9U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 8U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 7U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 6U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 5U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 4U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 3U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 2U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 >> 1U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a1__DOT____VdfgRegularize_h53fb3b80_0_0 
        = (1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                 ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a9__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a8__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 8U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x14U) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 5U)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout) 
                                           & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0))));
    if ((4U & vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcBE)) {
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift3 
            = VL_SHIFTL_III(32,32,32, vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift2, 4U);
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift3 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift2, 4U);
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift3 
            = (((- (IData)((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                            >> 0x1fU))) << 0x1cU) | 
               (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift2 
                >> 4U));
    } else {
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift3 
            = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift2;
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift3 
            = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift2;
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift3 
            = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift2;
    }
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__carry__BRA__0__KET__ 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                  & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                 | ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                     >> 0x18U) & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a1__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a10__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a9__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 9U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x15U) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 6U)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout) 
                                           & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0))));
    if ((8U & vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcBE)) {
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift4 
            = VL_SHIFTL_III(32,32,32, vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift3, 8U);
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift4 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift3, 8U);
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift4 
            = (((- (IData)((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                            >> 0x1fU))) << 0x18U) | 
               (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift3 
                >> 8U));
    } else {
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift4 
            = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift3;
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift4 
            = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift3;
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift4 
            = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift3;
    }
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a2__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 1U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__carry__BRA__0__KET__) 
                            & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a11__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a10__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 0xaU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x16U) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 7U)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout) 
                                           & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0))));
    if ((0x10U & vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcBE)) {
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift5 
            = VL_SHIFTL_III(32,32,32, vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift4, 0x10U);
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift5 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift4, 0x10U);
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift5 
            = (((- (IData)((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                            >> 0x1fU))) << 0x10U) | 
               (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift4 
                >> 0x10U));
    } else {
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift5 
            = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift4;
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift5 
            = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift4;
        vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift5 
            = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift4;
    }
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a3__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 2U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a2__cout) 
                            & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a12__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a11__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 0xbU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x17U) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 8U)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout) 
                                           & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[6U] 
        = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift5;
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[7U] 
        = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift5;
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[8U] 
        = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift5;
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a4__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 3U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a3__cout) 
                            & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a13__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a12__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 0xcU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x18U) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 9U)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout) 
                                           & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a5__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 4U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a4__cout) 
                            & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a14__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a13__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 0xdU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x19U) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 0xaU)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout) 
                                             & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a6__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 5U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a5__cout) 
                            & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a15__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a14__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 0xeU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x1aU) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 0xbU)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout) 
                                             & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a7__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 6U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a6__cout) 
                            & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a16__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a15__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 0xfU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x1bU) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 0xcU)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout) 
                                             & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a8__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 7U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a7__cout) 
                            & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a17__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a16__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 0x10U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x1cU) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 0xdU)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout) 
                                             & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a9__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 8U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a8__cout) 
                            & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a18__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a17__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 0x11U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x1dU) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 0xeU)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout) 
                                             & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a10__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 9U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a9__cout) 
                            & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a19__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a18__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 0x12U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x1eU) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 0xfU)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout) 
                                             & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a11__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0xaU) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a10__cout) 
                              & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a20__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a19__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 0x13U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                   >> 0x1fU) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 0x10U)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout) 
                                              & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a12__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0xbU) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a11__cout) 
                              & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a21__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a20__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 0x14U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout 
        = (1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                  & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                     >> 0x11U)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout) 
                                   & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a13__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0xcU) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a12__cout) 
                              & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a22__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a21__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 0x15U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                   >> 1U) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                             >> 0x12U)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout) 
                                           & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a14__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0xdU) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a13__cout) 
                              & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a23__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a22__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 0x16U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                   >> 2U) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                             >> 0x13U)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout) 
                                           & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a15__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0xeU) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a14__cout) 
                              & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a24__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a23__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 0x17U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                   >> 3U) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                             >> 0x14U)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout) 
                                           & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a16__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0xfU) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a15__cout) 
                              & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a25__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a24__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 0x18U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                   >> 4U) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                             >> 0x15U)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout) 
                                           & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a17__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x10U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a16__cout) 
                               & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a26__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a25__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 0x19U));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                   >> 5U) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                             >> 0x16U)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout) 
                                           & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a18__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x11U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a17__cout) 
                               & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a27__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a26__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 0x1aU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                   >> 6U) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                             >> 0x17U)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout) 
                                           & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a19__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x12U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a18__cout) 
                               & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a28__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a27__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 0x1bU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                   >> 7U) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                             >> 0x18U)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout) 
                                           & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a20__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x13U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a19__cout) 
                               & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a29__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a28__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 0x1cU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                   >> 8U) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                             >> 0x19U)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout) 
                                           & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a21__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x14U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a20__cout) 
                               & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a30__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a29__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 0x1dU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                   >> 9U) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                             >> 0x1aU)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout) 
                                           & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a22__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x15U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a21__cout) 
                               & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a30__cout) 
           & (vlSelfRef.top__DOT__proc__DOT__pcF >> 0x1eU));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                   >> 0xaU) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 0x1bU)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout) 
                                             & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a23__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x16U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a22__cout) 
                               & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCPlus4F 
        = (((((((0x80000000U & vlSelfRef.top__DOT__proc__DOT__pcF) 
                ^ ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout) 
                   << 0x1fU)) | (0x40000000U & ((0xc0000000U 
                                                 & vlSelfRef.top__DOT__proc__DOT__pcF) 
                                                ^ ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a30__cout) 
                                                   << 0x1eU)))) 
              | ((0x20000000U & ((0xe0000000U & vlSelfRef.top__DOT__proc__DOT__pcF) 
                                 ^ ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a29__cout) 
                                    << 0x1dU))) | (0x10000000U 
                                                   & ((0xf0000000U 
                                                       & vlSelfRef.top__DOT__proc__DOT__pcF) 
                                                      ^ 
                                                      ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a28__cout) 
                                                       << 0x1cU))))) 
             | (((0x8000000U & ((0xf8000000U & vlSelfRef.top__DOT__proc__DOT__pcF) 
                                ^ ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a27__cout) 
                                   << 0x1bU))) | (0x4000000U 
                                                  & ((0xfc000000U 
                                                      & vlSelfRef.top__DOT__proc__DOT__pcF) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a26__cout) 
                                                      << 0x1aU)))) 
                | ((0x2000000U & ((0xfe000000U & vlSelfRef.top__DOT__proc__DOT__pcF) 
                                  ^ ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a25__cout) 
                                     << 0x19U))) | 
                   (0x1000000U & ((0xff000000U & vlSelfRef.top__DOT__proc__DOT__pcF) 
                                  ^ ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a24__cout) 
                                     << 0x18U)))))) 
            | ((((0x800000U & ((0xff800000U & vlSelfRef.top__DOT__proc__DOT__pcF) 
                               ^ ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a23__cout) 
                                  << 0x17U))) | (0x400000U 
                                                 & ((0xffc00000U 
                                                     & vlSelfRef.top__DOT__proc__DOT__pcF) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a22__cout) 
                                                     << 0x16U)))) 
                | ((0x200000U & ((0xffe00000U & vlSelfRef.top__DOT__proc__DOT__pcF) 
                                 ^ ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a21__cout) 
                                    << 0x15U))) | (0x100000U 
                                                   & ((0xfff00000U 
                                                       & vlSelfRef.top__DOT__proc__DOT__pcF) 
                                                      ^ 
                                                      ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a20__cout) 
                                                       << 0x14U))))) 
               | (((0x80000U & ((0xfff80000U & vlSelfRef.top__DOT__proc__DOT__pcF) 
                                ^ ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a19__cout) 
                                   << 0x13U))) | (0x40000U 
                                                  & ((0xfffc0000U 
                                                      & vlSelfRef.top__DOT__proc__DOT__pcF) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a18__cout) 
                                                      << 0x12U)))) 
                  | ((0x20000U & ((0xfffe0000U & vlSelfRef.top__DOT__proc__DOT__pcF) 
                                  ^ ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a17__cout) 
                                     << 0x11U))) | 
                     (0x10000U & ((0xffff0000U & vlSelfRef.top__DOT__proc__DOT__pcF) 
                                  ^ ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a16__cout) 
                                     << 0x10U))))))) 
           | (((((0x8000U & ((0xffff8000U & vlSelfRef.top__DOT__proc__DOT__pcF) 
                             ^ ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a15__cout) 
                                << 0xfU))) | (0x4000U 
                                              & ((0xffffc000U 
                                                  & vlSelfRef.top__DOT__proc__DOT__pcF) 
                                                 ^ 
                                                 ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a14__cout) 
                                                  << 0xeU)))) 
                | ((0x2000U & ((0xffffe000U & vlSelfRef.top__DOT__proc__DOT__pcF) 
                               ^ ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a13__cout) 
                                  << 0xdU))) | (0x1000U 
                                                & ((0xfffff000U 
                                                    & vlSelfRef.top__DOT__proc__DOT__pcF) 
                                                   ^ 
                                                   ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a12__cout) 
                                                    << 0xcU))))) 
               | (((0x800U & ((0xfffff800U & vlSelfRef.top__DOT__proc__DOT__pcF) 
                              ^ ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a11__cout) 
                                 << 0xbU))) | (0x400U 
                                               & ((0xfffffc00U 
                                                   & vlSelfRef.top__DOT__proc__DOT__pcF) 
                                                  ^ 
                                                  ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a10__cout) 
                                                   << 0xaU)))) 
                  | ((0x200U & ((0xfffffe00U & vlSelfRef.top__DOT__proc__DOT__pcF) 
                                ^ ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a9__cout) 
                                   << 9U))) | (0x100U 
                                               & ((0xffffff00U 
                                                   & vlSelfRef.top__DOT__proc__DOT__pcF) 
                                                  ^ 
                                                  ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a8__cout) 
                                                   << 8U)))))) 
              | ((((0x80U & ((0xffffff80U & vlSelfRef.top__DOT__proc__DOT__pcF) 
                             ^ ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a7__cout) 
                                << 7U))) | (0x40U & 
                                            ((0xffffffc0U 
                                              & vlSelfRef.top__DOT__proc__DOT__pcF) 
                                             ^ ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a6__cout) 
                                                << 6U)))) 
                  | ((0x20U & ((0xffffffe0U & vlSelfRef.top__DOT__proc__DOT__pcF) 
                               ^ ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a5__cout) 
                                  << 5U))) | (0x10U 
                                              & ((0xfffffff0U 
                                                  & vlSelfRef.top__DOT__proc__DOT__pcF) 
                                                 ^ 
                                                 ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a4__cout) 
                                                  << 4U))))) 
                 | ((8U & (VL_REDXOR_4((0xcU & vlSelfRef.top__DOT__proc__DOT__pcF)) 
                           << 3U)) | ((4U & ((~ (vlSelfRef.top__DOT__proc__DOT__pcF 
                                                 >> 2U)) 
                                             << 2U)) 
                                      | (3U & vlSelfRef.top__DOT__proc__DOT__pcF))))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                   >> 0xbU) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 0x1cU)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout) 
                                             & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a24__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x17U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a23__cout) 
                               & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                   >> 0xcU) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 0x1dU)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout) 
                                             & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a25__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x18U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a24__cout) 
                               & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                   >> 0xdU) & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                               >> 0x1eU)) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout) 
                                             & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a26__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x19U) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a25__cout) 
                               & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCTargetE 
        = ((((((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0) 
                 ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout)) 
                << 0x1fU) | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0) 
                              ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout)) 
                             << 0x1eU)) | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout)) 
                                            << 0x1dU) 
                                           | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                               ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout)) 
                                              << 0x1cU))) 
             | (((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0) 
                   ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout)) 
                  << 0x1bU) | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout)) 
                               << 0x1aU)) | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                               ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout)) 
                                              << 0x19U) 
                                             | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                 ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout)) 
                                                << 0x18U)))) 
            | ((((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0) 
                   ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout)) 
                  << 0x17U) | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout)) 
                               << 0x16U)) | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                               ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout)) 
                                              << 0x15U) 
                                             | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                 ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout)) 
                                                << 0x14U))) 
               | (((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0) 
                     ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout)) 
                    << 0x13U) | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                  ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout)) 
                                 << 0x12U)) | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                 ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout)) 
                                                << 0x11U) 
                                               | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                   ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout)) 
                                                  << 0x10U))))) 
           | (((((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0) 
                   ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout)) 
                  << 0xfU) | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0) 
                               ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout)) 
                              << 0xeU)) | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout)) 
                                            << 0xdU) 
                                           | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                               ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout)) 
                                              << 0xcU))) 
               | (((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0) 
                     ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout)) 
                    << 0xbU) | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                 ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout)) 
                                << 0xaU)) | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                               ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout)) 
                                              << 9U) 
                                             | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                 ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout)) 
                                                << 8U)))) 
              | ((((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0) 
                     ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout)) 
                    << 7U) | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0) 
                               ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout)) 
                              << 6U)) | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                           ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout)) 
                                          << 5U) | 
                                         (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                           ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout)) 
                                          << 4U))) 
                 | (((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0) 
                       ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout)) 
                      << 3U) | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                 ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout)) 
                                << 2U)) | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__carry__BRA__0__KET__)) 
                                            << 1U) 
                                           | (1U & 
                                              ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                                >> 0xfU) 
                                               ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U])))))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a27__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x1aU) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a26__cout) 
                               & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a28__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x1bU) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a27__cout) 
                               & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a29__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x1cU) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a28__cout) 
                               & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a30__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x1dU) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a29__cout) 
                               & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a31__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x1eU) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a30__cout) 
                               & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a32__cout 
        = (1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b) 
                  >> 0x1fU) | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a31__cout) 
                               & (IData)(top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__Neg 
        = ((IData)(top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0) 
           ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a31__cout));
    vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__bru__DOT__Carry 
        = (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a32__cout) 
            ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
               >> 0x18U)) & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__isAddSub));
    top__DOT__proc__DOT__ctrl__DOT__bru__DOT____VdfgExtracted_h4ead3b55__0 
        = ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__Neg) 
           ^ ((~ ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                   >> 0x18U) ^ ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                 ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcBE) 
                                >> 0x1fU))) & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                                 >> 0x1fU) 
                                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__Neg)) 
                                               & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__isAddSub))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sum 
        = (((((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__Neg) 
                << 0x1fU) | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0) 
                              ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a30__cout)) 
                             << 0x1eU)) | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a29__cout)) 
                                            << 0x1dU) 
                                           | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                               ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a28__cout)) 
                                              << 0x1cU))) 
             | (((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0) 
                   ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a27__cout)) 
                  << 0x1bU) | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a26__cout)) 
                               << 0x1aU)) | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                               ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a25__cout)) 
                                              << 0x19U) 
                                             | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                 ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a24__cout)) 
                                                << 0x18U)))) 
            | ((((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0) 
                   ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a23__cout)) 
                  << 0x17U) | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a22__cout)) 
                               << 0x16U)) | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                               ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a21__cout)) 
                                              << 0x15U) 
                                             | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                 ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a20__cout)) 
                                                << 0x14U))) 
               | (((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0) 
                     ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a19__cout)) 
                    << 0x13U) | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                  ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a18__cout)) 
                                 << 0x12U)) | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                 ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a17__cout)) 
                                                << 0x11U) 
                                               | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                   ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a16__cout)) 
                                                  << 0x10U))))) 
           | (((((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0) 
                   ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a15__cout)) 
                  << 0xfU) | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0) 
                               ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a14__cout)) 
                              << 0xeU)) | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a13__cout)) 
                                            << 0xdU) 
                                           | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                               ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a12__cout)) 
                                              << 0xcU))) 
               | (((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0) 
                     ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a11__cout)) 
                    << 0xbU) | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                 ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a10__cout)) 
                                << 0xaU)) | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                               ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a9__cout)) 
                                              << 9U) 
                                             | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                 ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a8__cout)) 
                                                << 8U)))) 
              | ((((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0) 
                     ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a7__cout)) 
                    << 7U) | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0) 
                               ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a6__cout)) 
                              << 6U)) | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                           ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a5__cout)) 
                                          << 5U) | 
                                         (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                           ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a4__cout)) 
                                          << 4U))) 
                 | (((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0) 
                       ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a3__cout)) 
                      << 3U) | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                 ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a2__cout)) 
                                << 2U)) | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                             ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__carry__BRA__0__KET__)) 
                                            << 1U) 
                                           | (1U & 
                                              ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a1__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                               ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                                  >> 0x18U))))))));
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[0U] 
        = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sum;
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[1U] 
        = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sum;
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[5U] 
        = top__DOT__proc__DOT__ctrl__DOT__bru__DOT____VdfgExtracted_h4ead3b55__0;
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[9U] 
        = vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__bru__DOT__Carry;
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[0xaU] 
        = vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcBE;
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALUResultE 
        = ((0x8000000U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
            ? ((0x4000000U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
                ? ((0x2000000U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
                    ? ((0x1000000U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
                        ? vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                       [0xfU] : vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                       [0xeU]) : ((0x1000000U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
                                   ? vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                                  [0xdU] : vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                                  [0xcU])) : ((0x2000000U 
                                               & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
                                               ? ((0x1000000U 
                                                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
                                                   ? 
                                                  vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                                                  [0xbU]
                                                   : 
                                                  vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                                                  [0xaU])
                                               : ((0x1000000U 
                                                   & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
                                                   ? 
                                                  vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                                                  [9U]
                                                   : vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift5)))
            : ((0x4000000U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
                ? ((0x2000000U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
                    ? ((0x1000000U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
                        ? vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift5
                        : vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift5)
                    : ((0x1000000U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
                        ? vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                       [5U] : vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__xor1__y))
                : ((0x2000000U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
                    ? ((0x1000000U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
                        ? vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__or1__y
                        : vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__and1__y)
                    : ((0x1000000U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
                        ? vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                       [1U] : vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                       [0U]))));
    __Vtableidx2 = (((((0xffffffffU == (~ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALUResultE)) 
                       << 8U) | ((0x80U & ((~ (0xffffffffU 
                                               == (~ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALUResultE))) 
                                           << 7U)) 
                                 | ((IData)(top__DOT__proc__DOT__ctrl__DOT__bru__DOT____VdfgExtracted_h4ead3b55__0) 
                                    << 6U))) | ((0x20U 
                                                 & ((~ (IData)(top__DOT__proc__DOT__ctrl__DOT__bru__DOT____VdfgExtracted_h4ead3b55__0)) 
                                                    << 5U)) 
                                                | ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__bru__DOT__Carry) 
                                                   << 4U))) 
                    | ((8U & ((~ (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__bru__DOT__Carry)) 
                              << 3U)) | (7U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                               >> 0x14U))));
    vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__bru__DOT__cond 
        = Vtop__ConstPool__TABLE_h51c4d583_0[__Vtableidx2];
    vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCmux__DOT____VdfgRegularize_hae03c8cc_0_0 
        = (1U & ((~ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                     >> 0x1dU)) & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                    >> 0x1eU) | ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                                  >> 0x1cU) 
                                                 & (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__bru__DOT__cond)))));
    vlSelfRef.top__DOT__proc__DOT__PCSrcE = ((2U & 
                                              (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                               >> 0x1cU)) 
                                             | (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCmux__DOT____VdfgRegularize_hae03c8cc_0_0));
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge rst)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge rst)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vm_traceActivitySetAll\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->Ecall = VL_RAND_RESET_I(1);
    vlSelf->Ebreak = VL_RAND_RESET_I(1);
    vlSelf->top_pcF = VL_RAND_RESET_I(32);
    vlSelf->top_InstrF = VL_RAND_RESET_I(32);
    vlSelf->top_ReadDataM = VL_RAND_RESET_I(32);
    vlSelf->top_WriteDataM = VL_RAND_RESET_I(32);
    vlSelf->top_ALUResultM = VL_RAND_RESET_I(32);
    vlSelf->top_MemWriteM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__ALUControlD = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__proc__DOT__LSTypeD = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__proc__DOT__PCSrcE = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__proc__DOT__StallF = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__ForwardAE = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__proc__DOT__ForwardBE = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__proc__DOT__pcF = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__proc__DOT__ReadDataM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__proc__DOT__WriteDataM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791a488__0 = VL_RAND_RESET_I(13);
    vlSelf->top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8791b458__0 = VL_RAND_RESET_I(13);
    vlSelf->top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h87902ff0__0 = VL_RAND_RESET_I(13);
    vlSelf->top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h878f7ac9__0 = VL_RAND_RESET_I(13);
    vlSelf->top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8794bea6__0 = VL_RAND_RESET_I(13);
    vlSelf->top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8794a91d__0 = VL_RAND_RESET_I(13);
    vlSelf->top__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h878f4ebb__0 = VL_RAND_RESET_I(13);
    vlSelf->top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls = VL_RAND_RESET_I(13);
    vlSelf->top__DOT__proc__DOT__ctrl__DOT__bru__DOT__cond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__ctrl__DOT__bru__DOT__Carry = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCPlus4F = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ImmExtD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCTargetE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__proc__DOT__dp__DOT__SrcAE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__proc__DOT__dp__DOT__SrcBE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALUResultE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__proc__DOT__dp__DOT__WriteDataE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ReadDataM_sel = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ResultW = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(96, vlSelf->top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q);
    VL_RAND_RESET_W(195, vlSelf->top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q);
    VL_RAND_RESET_W(142, vlSelf->top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q);
    VL_RAND_RESET_W(136, vlSelf->top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCmux__DOT____VdfgRegularize_hae03c8cc_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a4__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a5__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a6__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a7__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a8__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a9__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a10__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a11__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a12__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a13__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a14__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a15__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a16__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a17__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a18__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a19__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a20__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a21__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a22__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a23__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a24__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a25__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a26__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a27__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a28__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a29__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a30__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__carry__BRA__0__KET__ = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__isAddSub = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__Neg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__sum = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__and1__y = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__or1__y = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__xor1__y = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__carry__BRA__0__KET__ = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a2__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a3__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a4__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a5__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a6__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a7__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a8__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a9__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a10__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a11__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a12__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a13__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a14__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a15__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a16__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a17__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a18__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a19__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a20__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a21__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a22__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a23__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a24__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a25__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a26__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a27__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a28__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a29__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a30__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a31__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a32__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a1__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift5 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift5 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift5 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__proc__DOT__dp__DOT__ext__DOT____Vxrand_h8794da3b__0 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__proc__DOT__dp__DOT__rf__DOT__rd2 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->top__DOT__dm__DOT__RAM[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->top__DOT__im__DOT__IMEM[__Vi0] = VL_RAND_RESET_I(32);
    }
    VL_RAND_RESET_W(195, vlSelf->__Vdly__top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
