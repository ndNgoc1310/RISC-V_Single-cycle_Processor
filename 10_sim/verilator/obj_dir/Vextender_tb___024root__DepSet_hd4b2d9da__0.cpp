// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vextender_tb.h for the primary calling header

#include "Vextender_tb__pch.h"
#include "Vextender_tb___024root.h"

VL_ATTR_COLD void Vextender_tb___024root___eval_initial__TOP(Vextender_tb___024root* vlSelf);
VlCoroutine Vextender_tb___024root___eval_initial__TOP__Vtiming__0(Vextender_tb___024root* vlSelf);

void Vextender_tb___024root___eval_initial(Vextender_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextender_tb___024root___eval_initial\n"); );
    Vextender_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vextender_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vextender_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

void Vextender_tb___024root___act_sequent__TOP__0(Vextender_tb___024root* vlSelf);

void Vextender_tb___024root___eval_act(Vextender_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextender_tb___024root___eval_act\n"); );
    Vextender_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vextender_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vextender_tb___024root___act_sequent__TOP__0(Vextender_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextender_tb___024root___act_sequent__TOP__0\n"); );
    Vextender_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.extender_tb__DOT__immext = ((4U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))
                                           ? ((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))
                                               ? vlSelfRef.extender_tb__DOT__dut__DOT____Vxrand_h8794da3b__0
                                               : ((1U 
                                                   & (IData)(vlSelfRef.extender_tb__DOT__immsrc))
                                                   ? vlSelfRef.extender_tb__DOT__dut__DOT____Vxrand_h8794da3b__0
                                                   : 
                                                  (0xfffff000U 
                                                   & (vlSelfRef.extender_tb__DOT__instr 
                                                      << 7U))))
                                           : ((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.extender_tb__DOT__immsrc))
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.extender_tb__DOT__instr 
                                                                   >> 0x18U)))) 
                                                    << 0x14U) 
                                                   | (((0xff000U 
                                                        & (vlSelfRef.extender_tb__DOT__instr 
                                                           << 7U)) 
                                                       | (0x800U 
                                                          & (vlSelfRef.extender_tb__DOT__instr 
                                                             >> 2U))) 
                                                      | (0x7feU 
                                                         & (vlSelfRef.extender_tb__DOT__instr 
                                                            >> 0xdU))))
                                                   : 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.extender_tb__DOT__instr 
                                                                   >> 0x18U)))) 
                                                    << 0xcU) 
                                                   | ((0x800U 
                                                       & (vlSelfRef.extender_tb__DOT__instr 
                                                          << 0xbU)) 
                                                      | ((0x7e0U 
                                                          & (vlSelfRef.extender_tb__DOT__instr 
                                                             >> 0xdU)) 
                                                         | (0x1eU 
                                                            & vlSelfRef.extender_tb__DOT__instr)))))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.extender_tb__DOT__immsrc))
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.extender_tb__DOT__instr 
                                                                   >> 0x18U)))) 
                                                    << 0xcU) 
                                                   | ((0xfe0U 
                                                       & (vlSelfRef.extender_tb__DOT__instr 
                                                          >> 0xdU)) 
                                                      | (0x1fU 
                                                         & vlSelfRef.extender_tb__DOT__instr)))
                                                   : 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.extender_tb__DOT__instr 
                                                                   >> 0x18U)))) 
                                                    << 0xcU) 
                                                   | (0xfffU 
                                                      & (vlSelfRef.extender_tb__DOT__instr 
                                                         >> 0xdU))))));
}

void Vextender_tb___024root___eval_nba(Vextender_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextender_tb___024root___eval_nba\n"); );
    Vextender_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vextender_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vextender_tb___024root___timing_resume(Vextender_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextender_tb___024root___timing_resume\n"); );
    Vextender_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vextender_tb___024root___eval_triggers__act(Vextender_tb___024root* vlSelf);

bool Vextender_tb___024root___eval_phase__act(Vextender_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextender_tb___024root___eval_phase__act\n"); );
    Vextender_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vextender_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vextender_tb___024root___timing_resume(vlSelf);
        Vextender_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vextender_tb___024root___eval_phase__nba(Vextender_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextender_tb___024root___eval_phase__nba\n"); );
    Vextender_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vextender_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vextender_tb___024root___dump_triggers__nba(Vextender_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vextender_tb___024root___dump_triggers__act(Vextender_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vextender_tb___024root___eval(Vextender_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextender_tb___024root___eval\n"); );
    Vextender_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vextender_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../../01_bench/extender_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vextender_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../../01_bench/extender_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vextender_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vextender_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vextender_tb___024root___eval_debug_assertions(Vextender_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextender_tb___024root___eval_debug_assertions\n"); );
    Vextender_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
