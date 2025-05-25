// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VD_stage_tb.h for the primary calling header

#include "VD_stage_tb__pch.h"
#include "VD_stage_tb___024root.h"

VL_ATTR_COLD void VD_stage_tb___024root___eval_static__TOP(VD_stage_tb___024root* vlSelf);
VL_ATTR_COLD void VD_stage_tb___024root____Vm_traceActivitySetAll(VD_stage_tb___024root* vlSelf);

VL_ATTR_COLD void VD_stage_tb___024root___eval_static(VD_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_stage_tb___024root___eval_static\n"); );
    VD_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VD_stage_tb___024root___eval_static__TOP(vlSelf);
    VD_stage_tb___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__D_stage_tb__DOT__clk__0 
        = vlSelfRef.D_stage_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__D_stage_tb__DOT__rst__0 
        = vlSelfRef.D_stage_tb__DOT__rst;
}

VL_ATTR_COLD void VD_stage_tb___024root___eval_static__TOP(VD_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_stage_tb___024root___eval_static__TOP\n"); );
    VD_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D_stage_tb__DOT__mask_Read1D = 0xffffffffU;
    vlSelfRef.D_stage_tb__DOT__mask_Read2D = 0xffffffffU;
    vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD = 3U;
    vlSelfRef.D_stage_tb__DOT__mask_ALUControlD = 0xfU;
    vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD = 3U;
    vlSelfRef.D_stage_tb__DOT__mask_Rs1D = 0x1fU;
    vlSelfRef.D_stage_tb__DOT__mask_Rs2D = 0x1fU;
    vlSelfRef.D_stage_tb__DOT__mask_RdD = 0x1fU;
    vlSelfRef.D_stage_tb__DOT__mask_ImmExtD = 0xffffffffU;
    vlSelfRef.D_stage_tb__DOT__mask_MemSrcD = 0x1fU;
    vlSelfRef.D_stage_tb__DOT__test_num = 0U;
    vlSelfRef.D_stage_tb__DOT__pass_count = 0U;
    vlSelfRef.D_stage_tb__DOT__fail_count = 0U;
}

VL_ATTR_COLD void VD_stage_tb___024root___eval_initial__TOP(VD_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_stage_tb___024root___eval_initial__TOP\n"); );
    VD_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D_stage_tb__DOT____Vxrand_h8794da3b__19 
        = VL_RAND_RESET_ASSIGN_I(32);
    vlSelfRef.D_stage_tb__DOT____Vxrand_h87975fad__11 
        = (0x1fU & VL_RAND_RESET_ASSIGN_I(5));
    vlSelfRef.D_stage_tb__DOT____Vxrand_h8794da3b__18 
        = VL_RAND_RESET_ASSIGN_I(32);
    vlSelfRef.D_stage_tb__DOT____Vxrand_h87975fad__10 
        = (0x1fU & VL_RAND_RESET_ASSIGN_I(5));
    vlSelfRef.D_stage_tb__DOT____Vxrand_h87975fad__9 
        = (0x1fU & VL_RAND_RESET_ASSIGN_I(5));
    vlSelfRef.D_stage_tb__DOT____Vxrand_h87975fad__8 
        = (0x1fU & VL_RAND_RESET_ASSIGN_I(5));
    vlSelfRef.D_stage_tb__DOT____Vxrand_h8794da3b__17 
        = VL_RAND_RESET_ASSIGN_I(32);
    vlSelfRef.D_stage_tb__DOT____Vxrand_h8794da3b__16 
        = VL_RAND_RESET_ASSIGN_I(32);
    vlSelfRef.D_stage_tb__DOT____Vxrand_h8794da3b__15 
        = VL_RAND_RESET_ASSIGN_I(32);
    vlSelfRef.D_stage_tb__DOT____Vxrand_h87975fad__7 
        = (0x1fU & VL_RAND_RESET_ASSIGN_I(5));
    vlSelfRef.D_stage_tb__DOT____Vxrand_h87975fad__6 
        = (0x1fU & VL_RAND_RESET_ASSIGN_I(5));
    vlSelfRef.D_stage_tb__DOT____Vxrand_h8794da3b__14 
        = VL_RAND_RESET_ASSIGN_I(32);
    vlSelfRef.D_stage_tb__DOT____Vxrand_h8794da3b__13 
        = VL_RAND_RESET_ASSIGN_I(32);
    vlSelfRef.D_stage_tb__DOT____Vxrand_h8794da3b__12 
        = VL_RAND_RESET_ASSIGN_I(32);
    vlSelfRef.D_stage_tb__DOT____Vxrand_h87975fad__5 
        = (0x1fU & VL_RAND_RESET_ASSIGN_I(5));
    vlSelfRef.D_stage_tb__DOT____Vxrand_h87970bbd__2 
        = (3U & VL_RAND_RESET_ASSIGN_I(2));
    vlSelfRef.D_stage_tb__DOT____Vxrand_h8794da3b__11 
        = VL_RAND_RESET_ASSIGN_I(32);
    vlSelfRef.D_stage_tb__DOT____Vxrand_h8794da3b__10 
        = VL_RAND_RESET_ASSIGN_I(32);
    vlSelfRef.D_stage_tb__DOT____Vxrand_h8794da3b__9 
        = VL_RAND_RESET_ASSIGN_I(32);
    vlSelfRef.D_stage_tb__DOT____Vxrand_h87975fad__4 
        = (0x1fU & VL_RAND_RESET_ASSIGN_I(5));
    vlSelfRef.D_stage_tb__DOT____Vxrand_h8794da3b__8 
        = VL_RAND_RESET_ASSIGN_I(32);
    vlSelfRef.D_stage_tb__DOT____Vxrand_h8794da3b__7 
        = VL_RAND_RESET_ASSIGN_I(32);
    vlSelfRef.D_stage_tb__DOT____Vxrand_h87975fad__3 
        = (0x1fU & VL_RAND_RESET_ASSIGN_I(5));
    vlSelfRef.D_stage_tb__DOT____Vxrand_h87975fad__2 
        = (0x1fU & VL_RAND_RESET_ASSIGN_I(5));
    vlSelfRef.D_stage_tb__DOT____Vxrand_h8794da3b__6 
        = VL_RAND_RESET_ASSIGN_I(32);
    vlSelfRef.D_stage_tb__DOT____Vxrand_h8794da3b__5 
        = VL_RAND_RESET_ASSIGN_I(32);
    vlSelfRef.D_stage_tb__DOT____Vxrand_h87975fad__1 
        = (0x1fU & VL_RAND_RESET_ASSIGN_I(5));
    vlSelfRef.D_stage_tb__DOT____Vxrand_h8794da3b__4 
        = VL_RAND_RESET_ASSIGN_I(32);
    vlSelfRef.D_stage_tb__DOT____Vxrand_h8794da3b__3 
        = VL_RAND_RESET_ASSIGN_I(32);
    vlSelfRef.D_stage_tb__DOT____Vxrand_h87975fad__0 
        = (0x1fU & VL_RAND_RESET_ASSIGN_I(5));
    vlSelfRef.D_stage_tb__DOT____Vxrand_h8794da3b__2 
        = VL_RAND_RESET_ASSIGN_I(32);
    vlSelfRef.D_stage_tb__DOT____Vxrand_h87970bbd__1 
        = (3U & VL_RAND_RESET_ASSIGN_I(2));
    vlSelfRef.D_stage_tb__DOT____Vxrand_h8797496c__0 
        = (0xfU & VL_RAND_RESET_ASSIGN_I(4));
    vlSelfRef.D_stage_tb__DOT____Vxrand_h87970bbd__0 
        = (3U & VL_RAND_RESET_ASSIGN_I(2));
    vlSelfRef.D_stage_tb__DOT____Vxrand_h8794da3b__1 
        = VL_RAND_RESET_ASSIGN_I(32);
    vlSelfRef.D_stage_tb__DOT____Vxrand_h8794da3b__0 
        = VL_RAND_RESET_ASSIGN_I(32);
    vlSelfRef.D_stage_tb__DOT__ext__DOT____Vxrand_h8794da3b__0 
        = VL_RAND_RESET_ASSIGN_I(32);
    vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0 
        = (0xfb6U & VL_RAND_RESET_ASSIGN_I(13));
    vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h87936ccd__0 
        = (0xe00U & VL_RAND_RESET_ASSIGN_I(13));
    vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h878f4dba__0 
        = (0x1004U | (0xe00U & VL_RAND_RESET_ASSIGN_I(13)));
}

VL_ATTR_COLD void VD_stage_tb___024root___eval_final(VD_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_stage_tb___024root___eval_final\n"); );
    VD_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VD_stage_tb___024root___dump_triggers__stl(VD_stage_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VD_stage_tb___024root___eval_phase__stl(VD_stage_tb___024root* vlSelf);

VL_ATTR_COLD void VD_stage_tb___024root___eval_settle(VD_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_stage_tb___024root___eval_settle\n"); );
    VD_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VD_stage_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../../01_bench/D_stage_tb.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VD_stage_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VD_stage_tb___024root___dump_triggers__stl(VD_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_stage_tb___024root___dump_triggers__stl\n"); );
    VD_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void VD_stage_tb___024root___stl_sequent__TOP__0(VD_stage_tb___024root* vlSelf);

VL_ATTR_COLD void VD_stage_tb___024root___eval_stl(VD_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_stage_tb___024root___eval_stl\n"); );
    VD_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VD_stage_tb___024root___stl_sequent__TOP__0(vlSelf);
        VD_stage_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

extern const VlUnpacked<CData/*0:0*/, 128> VD_stage_tb__ConstPool__TABLE_h6a2a0221_0;
extern const VlUnpacked<CData/*3:0*/, 2048> VD_stage_tb__ConstPool__TABLE_h0e286701_0;

VL_ATTR_COLD void VD_stage_tb___024root___stl_sequent__TOP__0(VD_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_stage_tb___024root___stl_sequent__TOP__0\n"); );
    VD_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    __Vtableidx2 = ((((IData)(vlSelfRef.D_stage_tb__DOT__JumpE) 
                      << 6U) | (((IData)(vlSelfRef.D_stage_tb__DOT__ZeroE) 
                                 << 5U) | ((IData)(vlSelfRef.D_stage_tb__DOT__ALUResultEb0) 
                                           << 4U))) 
                    | ((0xeU & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                >> 0xbU)) | (IData)(vlSelfRef.D_stage_tb__DOT__BranchE)));
    vlSelfRef.D_stage_tb__DOT__PCSrcE = VD_stage_tb__ConstPool__TABLE_h6a2a0221_0
        [__Vtableidx2];
    vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls 
        = ((0x40U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
            ? ((0x20U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                ? ((0x10U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                    ? ((8U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                        ? (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0)
                        : ((4U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                            ? (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0)
                            : ((2U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                    ? (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h87936ccd__0)
                                    : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0))
                                : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0))))
                    : ((8U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                        ? ((4U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                            ? ((2U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                    ? 0x1621U : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0))
                                : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0))
                            : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0))
                        : ((4U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                            ? ((2U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                    ? 0x10a1U : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0))
                                : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0))
                            : ((2U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                    ? 0x40aU : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0))
                                : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0)))))
                : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0))
            : ((0x20U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                ? ((0x10U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                    ? ((8U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                        ? (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0)
                        : ((4U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                            ? ((2U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                    ? 0x1886U : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0))
                                : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0))
                            : ((2U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                    ? (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h878f4dba__0)
                                    : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0))
                                : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0))))
                    : ((8U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                        ? (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0)
                        : ((4U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                            ? (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0)
                            : ((2U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                    ? 0x2c0U : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0))
                                : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0)))))
                : ((0x10U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                    ? ((8U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                        ? (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0)
                        : ((4U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                            ? ((2U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                    ? 0x1986U : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0))
                                : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0))
                            : ((2U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                    ? 0x1084U : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0))
                                : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0))))
                    : ((8U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                        ? (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0)
                        : ((4U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                            ? (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0)
                            : ((2U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                ? ((1U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                    ? 0x1090U : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0))
                                : (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0)))))));
    vlSelfRef.D_stage_tb__DOT__ImmExtD = ((0x800U & (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls))
                                           ? ((0x400U 
                                               & (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls))
                                               ? vlSelfRef.D_stage_tb__DOT__ext__DOT____Vxrand_h8794da3b__0
                                               : ((0x200U 
                                                   & (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls))
                                                   ? vlSelfRef.D_stage_tb__DOT__ext__DOT____Vxrand_h8794da3b__0
                                                   : 
                                                  (0xfffff000U 
                                                   & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])))
                                           : ((0x400U 
                                               & (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls))
                                               ? ((0x200U 
                                                   & (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                                                >> 0x1fU))) 
                                                    << 0x14U) 
                                                   | (((0xff000U 
                                                        & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U]) 
                                                       | (0x800U 
                                                          & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                                             >> 9U))) 
                                                      | (0x7feU 
                                                         & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                                            >> 0x14U))))
                                                   : 
                                                  (((- (IData)(
                                                               (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | ((0x800U 
                                                       & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                                               >> 7U))))))
                                               : ((0x200U 
                                                   & (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | ((0xfe0U 
                                                       & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                                          >> 0x14U)) 
                                                      | (0x1fU 
                                                         & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                                            >> 7U))))
                                                   : 
                                                  (((- (IData)(
                                                               (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                                      >> 0x14U)))));
    __Vtableidx1 = (((((IData)((0x40000020U == (0x40000020U 
                                                & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])))
                        ? 1U : 0U) << 7U) | (0x40U 
                                             & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                                >> 0x18U))) 
                    | ((0x38U & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                 >> 9U)) | ((4U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                                   >> 6U)) 
                                            | (3U & 
                                               ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                                >> 1U)))));
    vlSelfRef.D_stage_tb__DOT__ALUControlD = VD_stage_tb__ConstPool__TABLE_h0e286701_0
        [__Vtableidx1];
}

VL_ATTR_COLD void VD_stage_tb___024root___eval_triggers__stl(VD_stage_tb___024root* vlSelf);

VL_ATTR_COLD bool VD_stage_tb___024root___eval_phase__stl(VD_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_stage_tb___024root___eval_phase__stl\n"); );
    VD_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VD_stage_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VD_stage_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VD_stage_tb___024root___dump_triggers__act(VD_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_stage_tb___024root___dump_triggers__act\n"); );
    VD_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge D_stage_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge D_stage_tb.rst)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge D_stage_tb.clk)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VD_stage_tb___024root___dump_triggers__nba(VD_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_stage_tb___024root___dump_triggers__nba\n"); );
    VD_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge D_stage_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge D_stage_tb.rst)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge D_stage_tb.clk)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VD_stage_tb___024root____Vm_traceActivitySetAll(VD_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_stage_tb___024root____Vm_traceActivitySetAll\n"); );
    VD_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void VD_stage_tb___024root___ctor_var_reset(VD_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_stage_tb___024root___ctor_var_reset\n"); );
    VD_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->D_stage_tb__DOT____Vxrand_h8794da3b__19 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT____Vxrand_h87975fad__11 = VL_RAND_RESET_I(5);
    vlSelf->D_stage_tb__DOT____Vxrand_h8794da3b__18 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT____Vxrand_h87975fad__10 = VL_RAND_RESET_I(5);
    vlSelf->D_stage_tb__DOT____Vxrand_h87975fad__9 = VL_RAND_RESET_I(5);
    vlSelf->D_stage_tb__DOT____Vxrand_h87975fad__8 = VL_RAND_RESET_I(5);
    vlSelf->D_stage_tb__DOT____Vxrand_h8794da3b__17 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT____Vxrand_h8794da3b__16 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT____Vxrand_h8794da3b__15 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT____Vxrand_h87975fad__7 = VL_RAND_RESET_I(5);
    vlSelf->D_stage_tb__DOT____Vxrand_h87975fad__6 = VL_RAND_RESET_I(5);
    vlSelf->D_stage_tb__DOT____Vxrand_h8794da3b__14 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT____Vxrand_h8794da3b__13 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT____Vxrand_h8794da3b__12 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT____Vxrand_h87975fad__5 = VL_RAND_RESET_I(5);
    vlSelf->D_stage_tb__DOT____Vxrand_h87970bbd__2 = VL_RAND_RESET_I(2);
    vlSelf->D_stage_tb__DOT____Vxrand_h8794da3b__11 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT____Vxrand_h8794da3b__10 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT____Vxrand_h8794da3b__9 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT____Vxrand_h87975fad__4 = VL_RAND_RESET_I(5);
    vlSelf->D_stage_tb__DOT____Vxrand_h8794da3b__8 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT____Vxrand_h8794da3b__7 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT____Vxrand_h87975fad__3 = VL_RAND_RESET_I(5);
    vlSelf->D_stage_tb__DOT____Vxrand_h87975fad__2 = VL_RAND_RESET_I(5);
    vlSelf->D_stage_tb__DOT____Vxrand_h8794da3b__6 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT____Vxrand_h8794da3b__5 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT____Vxrand_h87975fad__1 = VL_RAND_RESET_I(5);
    vlSelf->D_stage_tb__DOT____Vxrand_h8794da3b__4 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT____Vxrand_h8794da3b__3 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT____Vxrand_h87975fad__0 = VL_RAND_RESET_I(5);
    vlSelf->D_stage_tb__DOT____Vxrand_h8794da3b__2 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT____Vxrand_h87970bbd__1 = VL_RAND_RESET_I(2);
    vlSelf->D_stage_tb__DOT____Vxrand_h8797496c__0 = VL_RAND_RESET_I(4);
    vlSelf->D_stage_tb__DOT____Vxrand_h87970bbd__0 = VL_RAND_RESET_I(2);
    vlSelf->D_stage_tb__DOT____Vxrand_h8794da3b__1 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT____Vxrand_h8794da3b__0 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__i_debug_addr = VL_RAND_RESET_I(5);
    vlSelf->D_stage_tb__DOT__o_debug_data = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__mask_o_debug_data = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->D_stage_tb__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->D_stage_tb__DOT__InstrF = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__pcF = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__PCPlus4F = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__StallD = VL_RAND_RESET_I(1);
    vlSelf->D_stage_tb__DOT__FlushD = VL_RAND_RESET_I(1);
    vlSelf->D_stage_tb__DOT__ZeroE = VL_RAND_RESET_I(1);
    vlSelf->D_stage_tb__DOT__BranchE = VL_RAND_RESET_I(1);
    vlSelf->D_stage_tb__DOT__JumpE = VL_RAND_RESET_I(1);
    vlSelf->D_stage_tb__DOT__ALUResultEb0 = VL_RAND_RESET_I(1);
    vlSelf->D_stage_tb__DOT__RegWriteW = VL_RAND_RESET_I(1);
    vlSelf->D_stage_tb__DOT__RdW = VL_RAND_RESET_I(5);
    vlSelf->D_stage_tb__DOT__ResultW = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__mask_Read1D = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__mask_Read2D = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__mask_ResultSrcD = VL_RAND_RESET_I(2);
    vlSelf->D_stage_tb__DOT__mask_ALUControlD = VL_RAND_RESET_I(4);
    vlSelf->D_stage_tb__DOT__mask_ALUSrcD = VL_RAND_RESET_I(2);
    vlSelf->D_stage_tb__DOT__mask_Rs1D = VL_RAND_RESET_I(5);
    vlSelf->D_stage_tb__DOT__mask_Rs2D = VL_RAND_RESET_I(5);
    vlSelf->D_stage_tb__DOT__mask_RdD = VL_RAND_RESET_I(5);
    vlSelf->D_stage_tb__DOT__mask_ImmExtD = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__mask_MemSrcD = VL_RAND_RESET_I(5);
    vlSelf->D_stage_tb__DOT__opD = VL_RAND_RESET_I(7);
    vlSelf->D_stage_tb__DOT__funct3D = VL_RAND_RESET_I(3);
    vlSelf->D_stage_tb__DOT__funct7Db5 = VL_RAND_RESET_I(1);
    vlSelf->D_stage_tb__DOT__funct12D = VL_RAND_RESET_I(12);
    vlSelf->D_stage_tb__DOT__PCSrcE = VL_RAND_RESET_I(1);
    vlSelf->D_stage_tb__DOT__Read1D = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__Read2D = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__ALUControlD = VL_RAND_RESET_I(4);
    vlSelf->D_stage_tb__DOT__ImmExtD = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(96, vlSelf->D_stage_tb__DOT____Vcellout__Dreg__q);
    vlSelf->D_stage_tb__DOT__test_num = 0;
    vlSelf->D_stage_tb__DOT__pass_count = 0;
    vlSelf->D_stage_tb__DOT__fail_count = 0;
    vlSelf->D_stage_tb__DOT__rf__DOT__x01 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__rf__DOT__x02 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__rf__DOT__x03 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__rf__DOT__x04 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__rf__DOT__x05 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__rf__DOT__x06 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__rf__DOT__x07 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__rf__DOT__x08 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__rf__DOT__x09 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__rf__DOT__x10 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__rf__DOT__x11 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__rf__DOT__x12 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__rf__DOT__x13 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__rf__DOT__x14 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__rf__DOT__x15 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__rf__DOT__x16 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__rf__DOT__x17 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__rf__DOT__x18 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__rf__DOT__x19 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__rf__DOT__x20 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__rf__DOT__x21 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__rf__DOT__x22 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__rf__DOT__x23 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__rf__DOT__x24 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__rf__DOT__x25 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__rf__DOT__x26 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__rf__DOT__x27 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__rf__DOT__x28 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__rf__DOT__x29 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__rf__DOT__x30 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__rf__DOT__x31 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__ext__DOT____Vxrand_h8794da3b__0 = VL_RAND_RESET_I(32);
    vlSelf->D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0 = VL_RAND_RESET_I(13);
    vlSelf->D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h87936ccd__0 = VL_RAND_RESET_I(13);
    vlSelf->D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h878f4dba__0 = VL_RAND_RESET_I(13);
    vlSelf->D_stage_tb__DOT__ctrl__DOT__md__DOT__controls = VL_RAND_RESET_I(13);
    vlSelf->__Vtrigprevexpr___TOP__D_stage_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__D_stage_tb__DOT__rst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
