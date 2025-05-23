// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcontroller_tb__Syms.h"


void Vcontroller_tb___024root__trace_chg_0_sub_0(Vcontroller_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcontroller_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroller_tb___024root__trace_chg_0\n"); );
    // Init
    Vcontroller_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcontroller_tb___024root*>(voidSelf);
    Vcontroller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcontroller_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcontroller_tb___024root__trace_chg_0_sub_0(Vcontroller_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroller_tb___024root__trace_chg_0_sub_0\n"); );
    Vcontroller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgCData(oldp+0,(vlSelfRef.controller_tb__DOT__op),7);
        bufp->chgCData(oldp+1,(vlSelfRef.controller_tb__DOT__funct3),3);
        bufp->chgBit(oldp+2,(vlSelfRef.controller_tb__DOT__funct7b5));
        bufp->chgBit(oldp+3,(vlSelfRef.controller_tb__DOT__ZeroE));
        bufp->chgBit(oldp+4,(vlSelfRef.controller_tb__DOT__BranchE));
        bufp->chgBit(oldp+5,(vlSelfRef.controller_tb__DOT__JumpE));
        bufp->chgBit(oldp+6,(vlSelfRef.controller_tb__DOT__ALUResultEb0));
        bufp->chgSData(oldp+7,(vlSelfRef.controller_tb__DOT__funct12),12);
        bufp->chgBit(oldp+8,((1U & ((0x63U == (IData)(vlSelfRef.controller_tb__DOT__op))
                                     ? ((4U & (IData)(vlSelfRef.controller_tb__DOT__funct3))
                                         ? ((2U & (IData)(vlSelfRef.controller_tb__DOT__funct3))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.controller_tb__DOT__funct3))
                                                 ? 
                                                (~ (IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0))
                                                 : (IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0))
                                             : ((1U 
                                                 & (IData)(vlSelfRef.controller_tb__DOT__funct3))
                                                 ? 
                                                (~ (IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0))
                                                 : (IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0)))
                                         : ((1U & (~ 
                                                   ((IData)(vlSelfRef.controller_tb__DOT__funct3) 
                                                    >> 1U))) 
                                            && (1U 
                                                & ((1U 
                                                    & (IData)(vlSelfRef.controller_tb__DOT__funct3))
                                                    ? 
                                                   (~ (IData)(vlSelfRef.controller_tb__DOT__ZeroE))
                                                    : (IData)(vlSelfRef.controller_tb__DOT__ZeroE)))))
                                     : ((0x6fU == (IData)(vlSelfRef.controller_tb__DOT__op)) 
                                        | (0x67U == (IData)(vlSelfRef.controller_tb__DOT__op)))))));
        bufp->chgBit(oldp+9,(((0x73U == (IData)(vlSelfRef.controller_tb__DOT__op)) 
                              & (0U == (IData)(vlSelfRef.controller_tb__DOT__funct12)))));
        bufp->chgBit(oldp+10,(((0x73U == (IData)(vlSelfRef.controller_tb__DOT__op)) 
                               & (1U == (IData)(vlSelfRef.controller_tb__DOT__funct12)))));
        bufp->chgIData(oldp+11,(vlSelfRef.controller_tb__DOT__test_num),32);
        bufp->chgIData(oldp+12,(vlSelfRef.controller_tb__DOT__pass_count),32);
        bufp->chgIData(oldp+13,(vlSelfRef.controller_tb__DOT__fail_count),32);
        bufp->chgBit(oldp+14,((1U & ((IData)(vlSelfRef.controller_tb__DOT__op) 
                                     >> 5U))));
        bufp->chgBit(oldp+15,(((IData)(vlSelfRef.controller_tb__DOT__funct7b5) 
                               & ((IData)(vlSelfRef.controller_tb__DOT__op) 
                                  >> 5U))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgCData(oldp+16,((3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                       >> 4U))),2);
        bufp->chgCData(oldp+17,((3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                       >> 7U))),2);
        bufp->chgBit(oldp+18,((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                     >> 6U))));
        bufp->chgBit(oldp+19,((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                     >> 0xcU))));
        bufp->chgBit(oldp+20,((1U & (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls))));
        bufp->chgBit(oldp+21,((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                     >> 3U))));
        bufp->chgCData(oldp+22,((7U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                       >> 9U))),3);
        bufp->chgCData(oldp+23,(vlSelfRef.controller_tb__DOT__ALUControlD),4);
        bufp->chgCData(oldp+24,((3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                       >> 1U))),2);
        bufp->chgBit(oldp+25,((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                     >> 8U))));
        bufp->chgSData(oldp+26,(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls),13);
    }
}

void Vcontroller_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroller_tb___024root__trace_cleanup\n"); );
    // Init
    Vcontroller_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcontroller_tb___024root*>(voidSelf);
    Vcontroller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
