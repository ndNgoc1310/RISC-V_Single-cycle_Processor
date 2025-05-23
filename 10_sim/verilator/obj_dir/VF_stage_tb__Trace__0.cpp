// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VF_stage_tb__Syms.h"


void VF_stage_tb___024root__trace_chg_0_sub_0(VF_stage_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VF_stage_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF_stage_tb___024root__trace_chg_0\n"); );
    // Init
    VF_stage_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VF_stage_tb___024root*>(voidSelf);
    VF_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VF_stage_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VF_stage_tb___024root__trace_chg_0_sub_0(VF_stage_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF_stage_tb___024root__trace_chg_0_sub_0\n"); );
    VF_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.F_stage_tb__DOT__rst));
        bufp->chgBit(oldp+1,(vlSelfRef.F_stage_tb__DOT__StallF));
        bufp->chgBit(oldp+2,(vlSelfRef.F_stage_tb__DOT__PCSrcE));
        bufp->chgIData(oldp+3,(vlSelfRef.F_stage_tb__DOT__PCTargetE),32);
        bufp->chgIData(oldp+4,(vlSelfRef.F_stage_tb__DOT__test_num),32);
        bufp->chgIData(oldp+5,(vlSelfRef.F_stage_tb__DOT__pass_count),32);
        bufp->chgIData(oldp+6,(vlSelfRef.F_stage_tb__DOT__fail_count),32);
        bufp->chgBit(oldp+7,((1U & (~ (IData)(vlSelfRef.F_stage_tb__DOT__StallF)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+8,(vlSelfRef.F_stage_tb__DOT__pcF),32);
        bufp->chgIData(oldp+9,(vlSelfRef.F_stage_tb__DOT__PCPlus4F),32);
        bufp->chgBit(oldp+10,(((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a31__cout) 
                               & (vlSelfRef.F_stage_tb__DOT__pcF 
                                  >> 0x1fU))));
        bufp->chgIData(oldp+11,(((((((0x80000000U & 
                                      (((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a31__cout) 
                                        << 0x1fU) & vlSelfRef.F_stage_tb__DOT__pcF)) 
                                     | ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a31__cout) 
                                        << 0x1eU)) 
                                    | (((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a30__cout) 
                                        << 0x1dU) | 
                                       ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a29__cout) 
                                        << 0x1cU))) 
                                   | ((((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a28__cout) 
                                        << 0x1bU) | 
                                       ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a27__cout) 
                                        << 0x1aU)) 
                                      | (((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a26__cout) 
                                          << 0x19U) 
                                         | ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a25__cout) 
                                            << 0x18U)))) 
                                  | (((((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a24__cout) 
                                        << 0x17U) | 
                                       ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a23__cout) 
                                        << 0x16U)) 
                                      | (((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a22__cout) 
                                          << 0x15U) 
                                         | ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a21__cout) 
                                            << 0x14U))) 
                                     | ((((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a20__cout) 
                                          << 0x13U) 
                                         | ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a19__cout) 
                                            << 0x12U)) 
                                        | (((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a18__cout) 
                                            << 0x11U) 
                                           | ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a17__cout) 
                                              << 0x10U))))) 
                                 | ((((((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a16__cout) 
                                        << 0xfU) | 
                                       ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a15__cout) 
                                        << 0xeU)) | 
                                      (((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a14__cout) 
                                        << 0xdU) | 
                                       ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a13__cout) 
                                        << 0xcU))) 
                                     | ((((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a12__cout) 
                                          << 0xbU) 
                                         | ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a11__cout) 
                                            << 0xaU)) 
                                        | (((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a10__cout) 
                                            << 9U) 
                                           | ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a9__cout) 
                                              << 8U)))) 
                                    | (((((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a8__cout) 
                                          << 7U) | 
                                         ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a7__cout) 
                                          << 6U)) | 
                                        (((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a6__cout) 
                                          << 5U) | 
                                         ((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a5__cout) 
                                          << 4U))) 
                                       | (((IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a4__cout) 
                                           << 3U) | 
                                          (4U & vlSelfRef.F_stage_tb__DOT__pcF)))))),32);
        bufp->chgBit(oldp+12,((1U & vlSelfRef.F_stage_tb__DOT__pcF)));
        bufp->chgBit(oldp+13,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                     >> 9U))));
        bufp->chgBit(oldp+14,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a9__cout));
        bufp->chgBit(oldp+15,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                      >> 9U) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a9__cout)))));
        bufp->chgBit(oldp+16,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a10__cout));
        bufp->chgBit(oldp+17,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                     >> 0xaU))));
        bufp->chgBit(oldp+18,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                      >> 0xaU) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a10__cout)))));
        bufp->chgBit(oldp+19,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a11__cout));
        bufp->chgBit(oldp+20,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                     >> 0xbU))));
        bufp->chgBit(oldp+21,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                      >> 0xbU) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a11__cout)))));
        bufp->chgBit(oldp+22,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a12__cout));
        bufp->chgBit(oldp+23,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                     >> 0xcU))));
        bufp->chgBit(oldp+24,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                      >> 0xcU) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a12__cout)))));
        bufp->chgBit(oldp+25,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a13__cout));
        bufp->chgBit(oldp+26,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                     >> 0xdU))));
        bufp->chgBit(oldp+27,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                      >> 0xdU) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a13__cout)))));
        bufp->chgBit(oldp+28,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a14__cout));
        bufp->chgBit(oldp+29,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                     >> 0xeU))));
        bufp->chgBit(oldp+30,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                      >> 0xeU) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a14__cout)))));
        bufp->chgBit(oldp+31,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a15__cout));
        bufp->chgBit(oldp+32,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                     >> 0xfU))));
        bufp->chgBit(oldp+33,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                      >> 0xfU) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a15__cout)))));
        bufp->chgBit(oldp+34,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a16__cout));
        bufp->chgBit(oldp+35,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                     >> 0x10U))));
        bufp->chgBit(oldp+36,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                      >> 0x10U) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a16__cout)))));
        bufp->chgBit(oldp+37,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a17__cout));
        bufp->chgBit(oldp+38,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                     >> 0x11U))));
        bufp->chgBit(oldp+39,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                      >> 0x11U) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a17__cout)))));
        bufp->chgBit(oldp+40,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a18__cout));
        bufp->chgBit(oldp+41,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                     >> 0x12U))));
        bufp->chgBit(oldp+42,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                      >> 0x12U) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a18__cout)))));
        bufp->chgBit(oldp+43,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a19__cout));
        bufp->chgBit(oldp+44,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                     >> 1U))));
        bufp->chgBit(oldp+45,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                     >> 0x13U))));
        bufp->chgBit(oldp+46,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                      >> 0x13U) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a19__cout)))));
        bufp->chgBit(oldp+47,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a20__cout));
        bufp->chgBit(oldp+48,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                     >> 0x14U))));
        bufp->chgBit(oldp+49,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                      >> 0x14U) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a20__cout)))));
        bufp->chgBit(oldp+50,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a21__cout));
        bufp->chgBit(oldp+51,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                     >> 0x15U))));
        bufp->chgBit(oldp+52,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                      >> 0x15U) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a21__cout)))));
        bufp->chgBit(oldp+53,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a22__cout));
        bufp->chgBit(oldp+54,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                     >> 0x16U))));
        bufp->chgBit(oldp+55,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                      >> 0x16U) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a22__cout)))));
        bufp->chgBit(oldp+56,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a23__cout));
        bufp->chgBit(oldp+57,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                     >> 0x17U))));
        bufp->chgBit(oldp+58,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                      >> 0x17U) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a23__cout)))));
        bufp->chgBit(oldp+59,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a24__cout));
        bufp->chgBit(oldp+60,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                     >> 0x18U))));
        bufp->chgBit(oldp+61,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                      >> 0x18U) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a24__cout)))));
        bufp->chgBit(oldp+62,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a25__cout));
        bufp->chgBit(oldp+63,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                     >> 0x19U))));
        bufp->chgBit(oldp+64,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                      >> 0x19U) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a25__cout)))));
        bufp->chgBit(oldp+65,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a26__cout));
        bufp->chgBit(oldp+66,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                     >> 0x1aU))));
        bufp->chgBit(oldp+67,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                      >> 0x1aU) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a26__cout)))));
        bufp->chgBit(oldp+68,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a27__cout));
        bufp->chgBit(oldp+69,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                     >> 0x1bU))));
        bufp->chgBit(oldp+70,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                      >> 0x1bU) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a27__cout)))));
        bufp->chgBit(oldp+71,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a28__cout));
        bufp->chgBit(oldp+72,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                     >> 0x1cU))));
        bufp->chgBit(oldp+73,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                      >> 0x1cU) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a28__cout)))));
        bufp->chgBit(oldp+74,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a29__cout));
        bufp->chgBit(oldp+75,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                     >> 2U))));
        bufp->chgBit(oldp+76,((1U & (~ (vlSelfRef.F_stage_tb__DOT__pcF 
                                        >> 2U)))));
        bufp->chgBit(oldp+77,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                     >> 0x1dU))));
        bufp->chgBit(oldp+78,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                      >> 0x1dU) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a29__cout)))));
        bufp->chgBit(oldp+79,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a30__cout));
        bufp->chgBit(oldp+80,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                     >> 0x1eU))));
        bufp->chgBit(oldp+81,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                      >> 0x1eU) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a30__cout)))));
        bufp->chgBit(oldp+82,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a31__cout));
        bufp->chgBit(oldp+83,((vlSelfRef.F_stage_tb__DOT__pcF 
                               >> 0x1fU)));
        bufp->chgBit(oldp+84,(((vlSelfRef.F_stage_tb__DOT__pcF 
                                >> 0x1fU) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a31__cout))));
        bufp->chgBit(oldp+85,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                     >> 3U))));
        bufp->chgBit(oldp+86,((1U & VL_REDXOR_4((0xcU 
                                                 & vlSelfRef.F_stage_tb__DOT__pcF)))));
        bufp->chgBit(oldp+87,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a4__cout));
        bufp->chgBit(oldp+88,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                     >> 4U))));
        bufp->chgBit(oldp+89,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                      >> 4U) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a4__cout)))));
        bufp->chgBit(oldp+90,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a5__cout));
        bufp->chgBit(oldp+91,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                     >> 5U))));
        bufp->chgBit(oldp+92,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                      >> 5U) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a5__cout)))));
        bufp->chgBit(oldp+93,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a6__cout));
        bufp->chgBit(oldp+94,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                     >> 6U))));
        bufp->chgBit(oldp+95,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                      >> 6U) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a6__cout)))));
        bufp->chgBit(oldp+96,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a7__cout));
        bufp->chgBit(oldp+97,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                     >> 7U))));
        bufp->chgBit(oldp+98,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                      >> 7U) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a7__cout)))));
        bufp->chgBit(oldp+99,(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a8__cout));
        bufp->chgBit(oldp+100,((1U & (vlSelfRef.F_stage_tb__DOT__pcF 
                                      >> 8U))));
        bufp->chgBit(oldp+101,((1U & ((vlSelfRef.F_stage_tb__DOT__pcF 
                                       >> 8U) ^ (IData)(vlSelfRef.F_stage_tb__DOT__PCplus4__DOT____Vcellout__a8__cout)))));
    }
    bufp->chgBit(oldp+102,(vlSelfRef.F_stage_tb__DOT__clk));
    bufp->chgIData(oldp+103,(((IData)(vlSelfRef.F_stage_tb__DOT__PCSrcE)
                               ? vlSelfRef.F_stage_tb__DOT__PCTargetE
                               : vlSelfRef.F_stage_tb__DOT__PCPlus4F)),32);
    bufp->chgIData(oldp+104,(vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
                             [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                                        >> 2U))]),32);
}

void VF_stage_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF_stage_tb___024root__trace_cleanup\n"); );
    // Init
    VF_stage_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VF_stage_tb___024root*>(voidSelf);
    VF_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
