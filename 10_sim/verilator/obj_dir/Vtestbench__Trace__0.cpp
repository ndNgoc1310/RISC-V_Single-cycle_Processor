// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtestbench__Syms.h"


void Vtestbench___024root__trace_chg_0_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtestbench___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_chg_0\n"); );
    // Init
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtestbench___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtestbench___024root__trace_chg_0_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_chg_0_sub_0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<6>/*191:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_8;
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.testbench__DOT__dut__DOT__im__DOT__RAM
                               [(0x3fU & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF)]),32);
        bufp->chgIData(oldp+1,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF),32);
        bufp->chgCData(oldp+2,((0x3fU & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF)),6);
        bufp->chgBit(oldp+3,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                    >> 0xaU))));
        bufp->chgBit(oldp+4,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                    >> 6U))));
        bufp->chgBit(oldp+5,((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))));
        bufp->chgBit(oldp+6,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                    >> 3U))));
        bufp->chgBit(oldp+7,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                    >> 7U))));
        bufp->chgCData(oldp+8,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ALUControlD),3);
        bufp->chgCData(oldp+9,((3U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                      >> 4U))),2);
        bufp->chgCData(oldp+10,((3U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                       >> 8U))),2);
        bufp->chgCData(oldp+11,((0x7fU & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])),7);
        bufp->chgCData(oldp+12,((7U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+13,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                     >> 0x1eU))));
        bufp->chgBit(oldp+14,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                     >> 0x16U))));
        bufp->chgBit(oldp+15,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                     >> 0x14U))));
        bufp->chgBit(oldp+16,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                     >> 0x13U))));
        bufp->chgBit(oldp+17,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__StallF));
        bufp->chgCData(oldp+18,((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+19,((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+20,((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                          >> 0xaU))),5);
        bufp->chgCData(oldp+21,((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                          >> 5U))),5);
        bufp->chgCData(oldp+22,((0x1fU & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U])),5);
        bufp->chgCData(oldp+23,((3U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                       >> 1U))),2);
        bufp->chgBit(oldp+24,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                     >> 5U))));
        bufp->chgBit(oldp+25,((IData)((0x40000020U 
                                       == (0x40000020U 
                                           & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])))));
        bufp->chgSData(oldp+26,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls),11);
        bufp->chgIData(oldp+27,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCPlus4F),32);
        bufp->chgIData(oldp+28,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[1U]),32);
        bufp->chgIData(oldp+30,(((0x200U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                                  ? ((0x100U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                                      ? (((- (IData)(
                                                     (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                      >> 0x1fU))) 
                                          << 0x14U) 
                                         | (((0xff000U 
                                              & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U]) 
                                             | (0x800U 
                                                & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                   >> 9U))) 
                                            | (0x7feU 
                                               & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                  >> 0x14U))))
                                      : (((- (IData)(
                                                     (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                      >> 0x1fU))) 
                                          << 0xcU) 
                                         | ((0x800U 
                                             & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                     >> 7U))))))
                                  : ((0x100U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                                      ? (((- (IData)(
                                                     (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                      >> 0x1fU))) 
                                          << 0xcU) 
                                         | ((0xfe0U 
                                             & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                  >> 7U))))
                                      : (((- (IData)(
                                                     (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                      >> 0x1fU))) 
                                          << 0xcU) 
                                         | (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                            >> 0x14U))))),32);
        bufp->chgIData(oldp+31,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[0U]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__Read1D),32);
        bufp->chgIData(oldp+33,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__Read2D),32);
        bufp->chgCData(oldp+34,((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                          >> 7U))),5);
        bufp->chgIData(oldp+35,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                  << 0x11U) | (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[4U] 
                                               >> 0xfU))),32);
        bufp->chgIData(oldp+36,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[4U] 
                                  << 0x11U) | (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                               >> 0xfU))),32);
        bufp->chgIData(oldp+37,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                  << 0x11U) | (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                               >> 0xfU))),32);
        bufp->chgIData(oldp+38,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[0U]),32);
        bufp->chgIData(oldp+40,(((((((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                       ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout)) 
                                      << 0x1fU) | (
                                                   ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                    ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout)) 
                                                   << 0x1eU)) 
                                    | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                         ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout)) 
                                        << 0x1dU) | 
                                       (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                         ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout)) 
                                        << 0x1cU))) 
                                   | (((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                         ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout)) 
                                        << 0x1bU) | 
                                       (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                         ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout)) 
                                        << 0x1aU)) 
                                      | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                           ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout)) 
                                          << 0x19U) 
                                         | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout)) 
                                            << 0x18U)))) 
                                  | ((((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                         ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout)) 
                                        << 0x17U) | 
                                       (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                         ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout)) 
                                        << 0x16U)) 
                                      | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                           ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout)) 
                                          << 0x15U) 
                                         | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout)) 
                                            << 0x14U))) 
                                     | (((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                           ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout)) 
                                          << 0x13U) 
                                         | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout)) 
                                            << 0x12U)) 
                                        | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout)) 
                                            << 0x11U) 
                                           | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                               ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout)) 
                                              << 0x10U))))) 
                                 | (((((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                         ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout)) 
                                        << 0xfU) | 
                                       (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                         ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout)) 
                                        << 0xeU)) | 
                                      ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                         ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout)) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                         ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout)) 
                                        << 0xcU))) 
                                     | (((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                           ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout)) 
                                          << 0xbU) 
                                         | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout)) 
                                            << 0xaU)) 
                                        | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout)) 
                                            << 9U) 
                                           | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                               ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout)) 
                                              << 8U)))) 
                                    | ((((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                           ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout)) 
                                          << 7U) | 
                                         (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                           ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout)) 
                                          << 6U)) | 
                                        ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                           ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout)) 
                                          << 5U) | 
                                         (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                           ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout)) 
                                          << 4U))) 
                                       | (((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                             ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout)) 
                                            << 3U) 
                                           | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                               ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout)) 
                                              << 2U)) 
                                          | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                               ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__carry__BRA__0__KET__)) 
                                              << 1U) 
                                             | (1U 
                                                & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                                    >> 0xfU) 
                                                   ^ 
                                                   vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U])))))))),32);
        bufp->chgBit(oldp+41,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                     >> 0x18U))));
        bufp->chgBit(oldp+42,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                     >> 0x15U))));
        bufp->chgBit(oldp+43,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                     >> 0xfU))));
        bufp->chgCData(oldp+44,((3U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                       >> 0x16U))),2);
        bufp->chgCData(oldp+45,((7U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                       >> 0x10U))),3);
        bufp->chgBit(oldp+46,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout) 
                               & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                  >> 0x1fU))));
        bufp->chgBit(oldp+47,((1U & (((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                       >> 0xeU) & (
                                                   vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                                   >> 0x1fU)) 
                                     | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout) 
                                        & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0))))));
        bufp->chgBit(oldp+48,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                     >> 0x10U))));
        bufp->chgBit(oldp+49,((1U & (~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__StallF)))));
        __Vtemp_1[0U] = vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCPlus4F;
        __Vtemp_1[1U] = (IData)((((QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__im__DOT__RAM
                                                  [
                                                  (0x3fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF)])) 
                                  << 0x20U) | (QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF))));
        __Vtemp_1[2U] = (IData)(((((QData)((IData)(
                                                   vlSelfRef.testbench__DOT__dut__DOT__im__DOT__RAM
                                                   [
                                                   (0x3fU 
                                                    & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF)])) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF))) 
                                 >> 0x20U));
        bufp->chgWData(oldp+50,(__Vtemp_1),96);
        bufp->chgWData(oldp+53,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q),96);
        __Vtemp_3[2U] = (((IData)((((QData)((IData)(
                                                    (((0x10U 
                                                       & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                          >> 6U)) 
                                                      | (0xcU 
                                                         & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                            >> 2U))) 
                                                     | ((2U 
                                                         & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                            >> 5U)) 
                                                        | (1U 
                                                           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls)))))) 
                                    << 0x25U) | (((QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                                      >> 3U)))) 
                                                  << 0x24U) 
                                                 | (((QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ALUControlD)) 
                                                     << 0x21U) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                                            >> 7U)))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__Read1D))))))) 
                          << 0xfU) | ((IData)(((((QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__Read2D)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[1U]))) 
                                               >> 0x20U)) 
                                      >> 0x11U));
        __Vtemp_3[3U] = (((IData)((((QData)((IData)(
                                                    (((0x10U 
                                                       & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                          >> 6U)) 
                                                      | (0xcU 
                                                         & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                            >> 2U))) 
                                                     | ((2U 
                                                         & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                            >> 5U)) 
                                                        | (1U 
                                                           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls)))))) 
                                    << 0x25U) | (((QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                                      >> 3U)))) 
                                                  << 0x24U) 
                                                 | (((QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ALUControlD)) 
                                                     << 0x21U) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                                            >> 7U)))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__Read1D))))))) 
                          >> 0x11U) | ((IData)(((((QData)((IData)(
                                                                  (((0x10U 
                                                                     & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                                        >> 6U)) 
                                                                    | (0xcU 
                                                                       & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                                          >> 2U))) 
                                                                   | ((2U 
                                                                       & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                                          >> 5U)) 
                                                                      | (1U 
                                                                         & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls)))))) 
                                                  << 0x25U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                                         >> 3U)))) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ALUControlD)) 
                                                        << 0x21U) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                                               >> 7U)))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__Read1D)))))) 
                                                >> 0x20U)) 
                                       << 0xfU));
        __Vtemp_4[0U] = (IData)((((QData)((IData)((
                                                   (0x200U 
                                                    & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                                                    ? 
                                                   ((0x100U 
                                                     & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                                  >> 0x1fU))) 
                                                      << 0x14U) 
                                                     | (((0xff000U 
                                                          & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U]) 
                                                         | (0x800U 
                                                            & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                               >> 9U))) 
                                                        | (0x7feU 
                                                           & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                              >> 0x14U))))
                                                     : 
                                                    (((- (IData)(
                                                                 (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | ((0x800U 
                                                         & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                                 >> 7U))))))
                                                    : 
                                                   ((0x100U 
                                                     & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | ((0xfe0U 
                                                         & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                            >> 0x14U)) 
                                                        | (0x1fU 
                                                           & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                              >> 7U))))
                                                     : 
                                                    (((- (IData)(
                                                                 (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                        >> 0x14U)))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[0U]))));
        __Vtemp_4[1U] = (IData)(((((QData)((IData)(
                                                   ((0x200U 
                                                     & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                                                     ? 
                                                    ((0x100U 
                                                      & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                                   >> 0x1fU))) 
                                                       << 0x14U) 
                                                      | (((0xff000U 
                                                           & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U]) 
                                                          | (0x800U 
                                                             & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                                >> 9U))) 
                                                         | (0x7feU 
                                                            & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                               >> 0x14U))))
                                                      : 
                                                     (((- (IData)(
                                                                  (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | ((0x800U 
                                                          & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                             << 4U)) 
                                                         | ((0x7e0U 
                                                             & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                                >> 0x14U)) 
                                                            | (0x1eU 
                                                               & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                                  >> 7U))))))
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | ((0xfe0U 
                                                          & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                             >> 0x14U)) 
                                                         | (0x1fU 
                                                            & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                               >> 7U))))
                                                      : 
                                                     (((- (IData)(
                                                                  (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                         >> 0x14U)))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[0U]))) 
                                 >> 0x20U));
        __Vtemp_4[2U] = (((IData)((((QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__Read2D)) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[1U])))) 
                          << 0xfU) | ((0x7c00U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                  >> 5U)) 
                                      | ((0x3e0U & 
                                          (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                           >> 0xfU)) 
                                         | (0x1fU & 
                                            (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                             >> 7U)))));
        __Vtemp_4[3U] = (((IData)((((QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__Read2D)) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[1U])))) 
                          >> 0x11U) | ((IData)(((((QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__Read2D)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[1U]))) 
                                                >> 0x20U)) 
                                       << 0xfU));
        __Vtemp_4[4U] = __Vtemp_3[2U];
        __Vtemp_4[5U] = __Vtemp_3[3U];
        bufp->chgWData(oldp+56,(__Vtemp_4),185);
        bufp->chgWData(oldp+62,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q),185);
        bufp->chgIData(oldp+68,(((((((0x80000000U & 
                                      (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout) 
                                        << 0x1fU) & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF)) 
                                     | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout) 
                                        << 0x1eU)) 
                                    | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a30__cout) 
                                        << 0x1dU) | 
                                       ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a29__cout) 
                                        << 0x1cU))) 
                                   | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a28__cout) 
                                        << 0x1bU) | 
                                       ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a27__cout) 
                                        << 0x1aU)) 
                                      | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a26__cout) 
                                          << 0x19U) 
                                         | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a25__cout) 
                                            << 0x18U)))) 
                                  | (((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a24__cout) 
                                        << 0x17U) | 
                                       ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a23__cout) 
                                        << 0x16U)) 
                                      | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a22__cout) 
                                          << 0x15U) 
                                         | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a21__cout) 
                                            << 0x14U))) 
                                     | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a20__cout) 
                                          << 0x13U) 
                                         | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a19__cout) 
                                            << 0x12U)) 
                                        | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a18__cout) 
                                            << 0x11U) 
                                           | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a17__cout) 
                                              << 0x10U))))) 
                                 | ((((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a16__cout) 
                                        << 0xfU) | 
                                       ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a15__cout) 
                                        << 0xeU)) | 
                                      (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a14__cout) 
                                        << 0xdU) | 
                                       ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a13__cout) 
                                        << 0xcU))) 
                                     | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a12__cout) 
                                          << 0xbU) 
                                         | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a11__cout) 
                                            << 0xaU)) 
                                        | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a10__cout) 
                                            << 9U) 
                                           | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a9__cout) 
                                              << 8U)))) 
                                    | (((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a8__cout) 
                                          << 7U) | 
                                         ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a7__cout) 
                                          << 6U)) | 
                                        (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a6__cout) 
                                          << 5U) | 
                                         ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a5__cout) 
                                          << 4U))) 
                                       | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a4__cout) 
                                           << 3U) | 
                                          (4U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF)))))),32);
        bufp->chgBit(oldp+69,((1U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF)));
        bufp->chgBit(oldp+70,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                     >> 9U))));
        bufp->chgBit(oldp+71,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a9__cout));
        bufp->chgBit(oldp+72,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                      >> 9U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a9__cout)))));
        bufp->chgBit(oldp+73,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a10__cout));
        bufp->chgBit(oldp+74,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                     >> 0xaU))));
        bufp->chgBit(oldp+75,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                      >> 0xaU) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a10__cout)))));
        bufp->chgBit(oldp+76,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a11__cout));
        bufp->chgBit(oldp+77,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                     >> 0xbU))));
        bufp->chgBit(oldp+78,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                      >> 0xbU) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a11__cout)))));
        bufp->chgBit(oldp+79,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a12__cout));
        bufp->chgBit(oldp+80,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                     >> 0xcU))));
        bufp->chgBit(oldp+81,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                      >> 0xcU) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a12__cout)))));
        bufp->chgBit(oldp+82,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a13__cout));
        bufp->chgBit(oldp+83,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                     >> 0xdU))));
        bufp->chgBit(oldp+84,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                      >> 0xdU) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a13__cout)))));
        bufp->chgBit(oldp+85,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a14__cout));
        bufp->chgBit(oldp+86,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                     >> 0xeU))));
        bufp->chgBit(oldp+87,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                      >> 0xeU) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a14__cout)))));
        bufp->chgBit(oldp+88,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a15__cout));
        bufp->chgBit(oldp+89,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                     >> 0xfU))));
        bufp->chgBit(oldp+90,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                      >> 0xfU) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a15__cout)))));
        bufp->chgBit(oldp+91,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a16__cout));
        bufp->chgBit(oldp+92,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                     >> 0x10U))));
        bufp->chgBit(oldp+93,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                      >> 0x10U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a16__cout)))));
        bufp->chgBit(oldp+94,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a17__cout));
        bufp->chgBit(oldp+95,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                     >> 0x11U))));
        bufp->chgBit(oldp+96,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                      >> 0x11U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a17__cout)))));
        bufp->chgBit(oldp+97,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a18__cout));
        bufp->chgBit(oldp+98,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                     >> 0x12U))));
        bufp->chgBit(oldp+99,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                      >> 0x12U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a18__cout)))));
        bufp->chgBit(oldp+100,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a19__cout));
        bufp->chgBit(oldp+101,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                      >> 1U))));
        bufp->chgBit(oldp+102,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                      >> 0x13U))));
        bufp->chgBit(oldp+103,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                       >> 0x13U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a19__cout)))));
        bufp->chgBit(oldp+104,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a20__cout));
        bufp->chgBit(oldp+105,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                      >> 0x14U))));
        bufp->chgBit(oldp+106,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                       >> 0x14U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a20__cout)))));
        bufp->chgBit(oldp+107,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a21__cout));
        bufp->chgBit(oldp+108,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                      >> 0x15U))));
        bufp->chgBit(oldp+109,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                       >> 0x15U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a21__cout)))));
        bufp->chgBit(oldp+110,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a22__cout));
        bufp->chgBit(oldp+111,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                      >> 0x16U))));
        bufp->chgBit(oldp+112,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                       >> 0x16U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a22__cout)))));
        bufp->chgBit(oldp+113,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a23__cout));
        bufp->chgBit(oldp+114,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                      >> 0x17U))));
        bufp->chgBit(oldp+115,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                       >> 0x17U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a23__cout)))));
        bufp->chgBit(oldp+116,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a24__cout));
        bufp->chgBit(oldp+117,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                      >> 0x18U))));
        bufp->chgBit(oldp+118,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                       >> 0x18U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a24__cout)))));
        bufp->chgBit(oldp+119,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a25__cout));
        bufp->chgBit(oldp+120,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                      >> 0x19U))));
        bufp->chgBit(oldp+121,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                       >> 0x19U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a25__cout)))));
        bufp->chgBit(oldp+122,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a26__cout));
        bufp->chgBit(oldp+123,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+124,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                       >> 0x1aU) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a26__cout)))));
        bufp->chgBit(oldp+125,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a27__cout));
        bufp->chgBit(oldp+126,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+127,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                       >> 0x1bU) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a27__cout)))));
        bufp->chgBit(oldp+128,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a28__cout));
        bufp->chgBit(oldp+129,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+130,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                       >> 0x1cU) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a28__cout)))));
        bufp->chgBit(oldp+131,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a29__cout));
        bufp->chgBit(oldp+132,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                      >> 2U))));
        bufp->chgBit(oldp+133,((1U & (~ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                         >> 2U)))));
        bufp->chgBit(oldp+134,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+135,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                       >> 0x1dU) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a29__cout)))));
        bufp->chgBit(oldp+136,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a30__cout));
        bufp->chgBit(oldp+137,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+138,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                       >> 0x1eU) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a30__cout)))));
        bufp->chgBit(oldp+139,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout));
        bufp->chgBit(oldp+140,((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                >> 0x1fU)));
        bufp->chgBit(oldp+141,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                 >> 0x1fU) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout))));
        bufp->chgBit(oldp+142,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                      >> 3U))));
        bufp->chgBit(oldp+143,((1U & VL_REDXOR_4((0xcU 
                                                  & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF)))));
        bufp->chgBit(oldp+144,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a4__cout));
        bufp->chgBit(oldp+145,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                      >> 4U))));
        bufp->chgBit(oldp+146,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                       >> 4U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a4__cout)))));
        bufp->chgBit(oldp+147,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a5__cout));
        bufp->chgBit(oldp+148,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                      >> 5U))));
        bufp->chgBit(oldp+149,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                       >> 5U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a5__cout)))));
        bufp->chgBit(oldp+150,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a6__cout));
        bufp->chgBit(oldp+151,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                      >> 6U))));
        bufp->chgBit(oldp+152,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                       >> 6U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a6__cout)))));
        bufp->chgBit(oldp+153,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a7__cout));
        bufp->chgBit(oldp+154,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                      >> 7U))));
        bufp->chgBit(oldp+155,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                       >> 7U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a7__cout)))));
        bufp->chgBit(oldp+156,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a8__cout));
        bufp->chgBit(oldp+157,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                      >> 8U))));
        bufp->chgBit(oldp+158,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__pcF 
                                       >> 8U) ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a8__cout)))));
        bufp->chgIData(oldp+159,(((((((0x80000000U 
                                       & ((0x80000000U 
                                           & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                               << 0x11U) 
                                              & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U])) 
                                          | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout) 
                                              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0)) 
                                             << 0x1fU))) 
                                      | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout) 
                                         << 0x1eU)) 
                                     | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout) 
                                         << 0x1dU) 
                                        | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout) 
                                           << 0x1cU))) 
                                    | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout) 
                                         << 0x1bU) 
                                        | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout) 
                                           << 0x1aU)) 
                                       | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout) 
                                           << 0x19U) 
                                          | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout) 
                                             << 0x18U)))) 
                                   | (((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout) 
                                         << 0x17U) 
                                        | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout) 
                                           << 0x16U)) 
                                       | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout) 
                                           << 0x15U) 
                                          | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout) 
                                             << 0x14U))) 
                                      | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout) 
                                           << 0x13U) 
                                          | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout) 
                                             << 0x12U)) 
                                         | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout) 
                                             << 0x11U) 
                                            | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout) 
                                               << 0x10U))))) 
                                  | ((((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout) 
                                         << 0xfU) | 
                                        ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout) 
                                         << 0xeU)) 
                                       | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout) 
                                           << 0xdU) 
                                          | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout) 
                                             << 0xcU))) 
                                      | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout) 
                                           << 0xbU) 
                                          | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout) 
                                             << 0xaU)) 
                                         | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout) 
                                             << 9U) 
                                            | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout) 
                                               << 8U)))) 
                                     | (((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout) 
                                           << 7U) | 
                                          ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout) 
                                           << 6U)) 
                                         | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout) 
                                             << 5U) 
                                            | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout) 
                                               << 4U))) 
                                        | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout) 
                                             << 3U) 
                                            | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout) 
                                               << 2U)) 
                                           | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__carry__BRA__0__KET__))))))),32);
        bufp->chgBit(oldp+160,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+161,((1U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U])));
        bufp->chgBit(oldp+162,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                       >> 0xfU) ^ vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U]))));
        bufp->chgBit(oldp+163,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__carry__BRA__0__KET__));
        bufp->chgBit(oldp+164,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+165,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 9U))));
        bufp->chgBit(oldp+166,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout));
        bufp->chgBit(oldp+167,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout))));
        bufp->chgBit(oldp+168,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout));
        bufp->chgBit(oldp+169,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+170,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+171,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout))));
        bufp->chgBit(oldp+172,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout));
        bufp->chgBit(oldp+173,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+174,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+175,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout))));
        bufp->chgBit(oldp+176,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout));
        bufp->chgBit(oldp+177,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+178,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+179,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout))));
        bufp->chgBit(oldp+180,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout));
        bufp->chgBit(oldp+181,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+182,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+183,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout))));
        bufp->chgBit(oldp+184,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout));
        bufp->chgBit(oldp+185,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+186,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 0xeU))));
        bufp->chgBit(oldp+187,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout))));
        bufp->chgBit(oldp+188,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout));
        bufp->chgBit(oldp+189,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+190,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+191,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout))));
        bufp->chgBit(oldp+192,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout));
        bufp->chgBit(oldp+193,((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+194,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+195,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout))));
        bufp->chgBit(oldp+196,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout));
        bufp->chgBit(oldp+197,((1U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U])));
        bufp->chgBit(oldp+198,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+199,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout))));
        bufp->chgBit(oldp+200,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout));
        bufp->chgBit(oldp+201,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                      >> 1U))));
        bufp->chgBit(oldp+202,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+203,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout))));
        bufp->chgBit(oldp+204,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout));
        bufp->chgBit(oldp+205,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+206,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 1U))));
        bufp->chgBit(oldp+207,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__carry__BRA__0__KET__))));
        bufp->chgBit(oldp+208,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout));
        bufp->chgBit(oldp+209,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                      >> 2U))));
        bufp->chgBit(oldp+210,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+211,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout))));
        bufp->chgBit(oldp+212,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout));
        bufp->chgBit(oldp+213,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                      >> 3U))));
        bufp->chgBit(oldp+214,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+215,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout))));
        bufp->chgBit(oldp+216,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout));
        bufp->chgBit(oldp+217,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                      >> 4U))));
        bufp->chgBit(oldp+218,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 0x15U))));
        bufp->chgBit(oldp+219,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout))));
        bufp->chgBit(oldp+220,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout));
        bufp->chgBit(oldp+221,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                      >> 5U))));
        bufp->chgBit(oldp+222,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+223,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout))));
        bufp->chgBit(oldp+224,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout));
        bufp->chgBit(oldp+225,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                      >> 6U))));
        bufp->chgBit(oldp+226,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+227,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout))));
        bufp->chgBit(oldp+228,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout));
        bufp->chgBit(oldp+229,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                      >> 7U))));
        bufp->chgBit(oldp+230,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+231,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout))));
        bufp->chgBit(oldp+232,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout));
        bufp->chgBit(oldp+233,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                      >> 8U))));
        bufp->chgBit(oldp+234,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+235,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout))));
        bufp->chgBit(oldp+236,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout));
        bufp->chgBit(oldp+237,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                      >> 9U))));
        bufp->chgBit(oldp+238,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+239,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout))));
        bufp->chgBit(oldp+240,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout));
        bufp->chgBit(oldp+241,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+242,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+243,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout))));
        bufp->chgBit(oldp+244,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout));
        bufp->chgBit(oldp+245,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+246,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+247,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout))));
        bufp->chgBit(oldp+248,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout));
        bufp->chgBit(oldp+249,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+250,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 2U))));
        bufp->chgBit(oldp+251,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout))));
        bufp->chgBit(oldp+252,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout));
        bufp->chgBit(oldp+253,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+254,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+255,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout))));
        bufp->chgBit(oldp+256,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout));
        bufp->chgBit(oldp+257,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+258,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+259,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout))));
        bufp->chgBit(oldp+260,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout));
        bufp->chgBit(oldp+261,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                      >> 0xeU))));
        bufp->chgBit(oldp+262,((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+263,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout))));
        bufp->chgBit(oldp+264,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+265,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 3U))));
        bufp->chgBit(oldp+266,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout))));
        bufp->chgBit(oldp+267,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout));
        bufp->chgBit(oldp+268,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+269,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 4U))));
        bufp->chgBit(oldp+270,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout))));
        bufp->chgBit(oldp+271,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout));
        bufp->chgBit(oldp+272,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+273,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 5U))));
        bufp->chgBit(oldp+274,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout))));
        bufp->chgBit(oldp+275,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout));
        bufp->chgBit(oldp+276,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                      >> 0x15U))));
        bufp->chgBit(oldp+277,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 6U))));
        bufp->chgBit(oldp+278,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout))));
        bufp->chgBit(oldp+279,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout));
        bufp->chgBit(oldp+280,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+281,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 7U))));
        bufp->chgBit(oldp+282,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout))));
        bufp->chgBit(oldp+283,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout));
        bufp->chgBit(oldp+284,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+285,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 8U))));
        bufp->chgBit(oldp+286,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout))));
        bufp->chgIData(oldp+287,((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                  >> 7U)),25);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [3U])))) {
        bufp->chgBit(oldp+288,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__StallF) 
                                | (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__PCSrcE))));
        bufp->chgIData(oldp+289,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__PCSrcE)
                                   ? ((((((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                            ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout)) 
                                           << 0x1fU) 
                                          | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                              ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout)) 
                                             << 0x1eU)) 
                                         | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                              ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout)) 
                                             << 0x1dU) 
                                            | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout)) 
                                               << 0x1cU))) 
                                        | (((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                              ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout)) 
                                             << 0x1bU) 
                                            | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout)) 
                                               << 0x1aU)) 
                                           | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout)) 
                                               << 0x19U) 
                                              | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                  ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout)) 
                                                 << 0x18U)))) 
                                       | ((((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                              ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout)) 
                                             << 0x17U) 
                                            | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout)) 
                                               << 0x16U)) 
                                           | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout)) 
                                               << 0x15U) 
                                              | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                  ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout)) 
                                                 << 0x14U))) 
                                          | (((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout)) 
                                               << 0x13U) 
                                              | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                  ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout)) 
                                                 << 0x12U)) 
                                             | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                  ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout)) 
                                                 << 0x11U) 
                                                | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                    ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout)) 
                                                   << 0x10U))))) 
                                      | (((((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                              ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout)) 
                                             << 0xfU) 
                                            | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout)) 
                                               << 0xeU)) 
                                           | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout)) 
                                               << 0xdU) 
                                              | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                  ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout)) 
                                                 << 0xcU))) 
                                          | (((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout)) 
                                               << 0xbU) 
                                              | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                  ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout)) 
                                                 << 0xaU)) 
                                             | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                  ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout)) 
                                                 << 9U) 
                                                | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                    ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout)) 
                                                   << 8U)))) 
                                         | ((((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout)) 
                                               << 7U) 
                                              | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                  ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout)) 
                                                 << 6U)) 
                                             | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                  ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout)) 
                                                 << 5U) 
                                                | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                    ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout)) 
                                                   << 4U))) 
                                            | (((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                  ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout)) 
                                                 << 3U) 
                                                | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                    ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout)) 
                                                   << 2U)) 
                                               | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                    ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__carry__BRA__0__KET__)) 
                                                   << 1U) 
                                                  | (1U 
                                                     & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                                         >> 0xfU) 
                                                        ^ 
                                                        vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U])))))))
                                   : vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCPlus4F)),32);
        bufp->chgBit(oldp+290,((1U & ((((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                         >> 0x1fU) 
                                        & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a32__b)) 
                                       | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a31__cout) 
                                          & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0))) 
                                      ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+291,((1U & ((~ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                          >> 0x11U)) 
                                      & ((~ ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                              >> 0x10U) 
                                             ^ ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                                 ^ vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__SrcBE) 
                                                >> 0x1fU))) 
                                         & ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                             >> 0x1fU) 
                                            ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a32__sum)))))));
        bufp->chgBit(oldp+292,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a1__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                      ^ (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                         >> 0x10U)))));
        __Vtemp_6[0U] = (IData)((((QData)((IData)((0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U]))) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[0U]))));
        __Vtemp_6[1U] = ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__WriteDataE 
                          << 5U) | (IData)(((((QData)((IData)(
                                                              (0x1fU 
                                                               & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U]))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[0U]))) 
                                            >> 0x20U)));
        __Vtemp_6[2U] = (((IData)((((QData)((IData)(
                                                    (0xfU 
                                                     & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                                        >> 0x15U)))) 
                                    << 0x20U) | (QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALUResultE)))) 
                          << 5U) | (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__WriteDataE 
                                    >> 0x1bU));
        __Vtemp_6[3U] = (((IData)((((QData)((IData)(
                                                    (0xfU 
                                                     & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                                        >> 0x15U)))) 
                                    << 0x20U) | (QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALUResultE)))) 
                          >> 0x1bU) | ((IData)(((((QData)((IData)(
                                                                  (0xfU 
                                                                   & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                                                      >> 0x15U)))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALUResultE))) 
                                                >> 0x20U)) 
                                       << 5U));
        bufp->chgWData(oldp+293,(__Vtemp_6),105);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+297,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x01),32);
        bufp->chgIData(oldp+298,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x02),32);
        bufp->chgIData(oldp+299,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x03),32);
        bufp->chgIData(oldp+300,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x04),32);
        bufp->chgIData(oldp+301,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x05),32);
        bufp->chgIData(oldp+302,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x06),32);
        bufp->chgIData(oldp+303,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x07),32);
        bufp->chgIData(oldp+304,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x08),32);
        bufp->chgIData(oldp+305,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x09),32);
        bufp->chgIData(oldp+306,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x10),32);
        bufp->chgIData(oldp+307,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x11),32);
        bufp->chgIData(oldp+308,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x12),32);
        bufp->chgIData(oldp+309,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x13),32);
        bufp->chgIData(oldp+310,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x14),32);
        bufp->chgIData(oldp+311,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x15),32);
        bufp->chgIData(oldp+312,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x16),32);
        bufp->chgIData(oldp+313,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x17),32);
        bufp->chgIData(oldp+314,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x18),32);
        bufp->chgIData(oldp+315,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x19),32);
        bufp->chgIData(oldp+316,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x20),32);
        bufp->chgIData(oldp+317,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x21),32);
        bufp->chgIData(oldp+318,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x22),32);
        bufp->chgIData(oldp+319,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x23),32);
        bufp->chgIData(oldp+320,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x24),32);
        bufp->chgIData(oldp+321,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x25),32);
        bufp->chgIData(oldp+322,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x26),32);
        bufp->chgIData(oldp+323,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x27),32);
        bufp->chgIData(oldp+324,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x28),32);
        bufp->chgIData(oldp+325,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x29),32);
        bufp->chgIData(oldp+326,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x30),32);
        bufp->chgIData(oldp+327,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x31),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+328,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                   << 0x1bU) | (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[1U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+329,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                   << 0x1bU) | (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                                >> 5U))),32);
        bufp->chgBit(oldp+330,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                      >> 5U))));
        bufp->chgCData(oldp+331,((0x3fU & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                           >> 5U))),6);
        bufp->chgBit(oldp+332,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__PCSrcE));
        bufp->chgBit(oldp+333,((0xffffffffU == (~ vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALUResultE))));
        bufp->chgCData(oldp+334,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ForwardAE),2);
        bufp->chgCData(oldp+335,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__ForwardBE),2);
        bufp->chgBit(oldp+336,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                      >> 8U))));
        bufp->chgCData(oldp+337,((0x1fU & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[1U])),5);
        bufp->chgBit(oldp+338,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                      >> 7U))));
        bufp->chgCData(oldp+339,((0x1fU & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])),5);
        bufp->chgIData(oldp+340,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a),32);
        bufp->chgIData(oldp+341,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__SrcBE),32);
        bufp->chgIData(oldp+342,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALUResultE),32);
        bufp->chgIData(oldp+343,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__WriteDataE),32);
        bufp->chgIData(oldp+344,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[0U]),32);
        bufp->chgCData(oldp+345,((3U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                        >> 6U))),2);
        bufp->chgCData(oldp+346,((3U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                        >> 5U))),2);
        bufp->chgIData(oldp+347,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                   << 0x1bU) | (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[2U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+348,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[2U] 
                                   << 0x1bU) | (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+349,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[0U]),32);
        bufp->chgIData(oldp+350,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ResultW),32);
        bufp->chgIData(oldp+351,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b),32);
        bufp->chgIData(oldp+352,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sum),32);
        bufp->chgIData(oldp+353,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[0]),32);
        bufp->chgIData(oldp+354,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[1]),32);
        bufp->chgIData(oldp+355,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[2]),32);
        bufp->chgIData(oldp+356,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[3]),32);
        bufp->chgIData(oldp+357,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[4]),32);
        bufp->chgIData(oldp+358,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[5]),32);
        bufp->chgIData(oldp+359,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[6]),32);
        bufp->chgIData(oldp+360,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[7]),32);
        bufp->chgIData(oldp+361,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[8]),32);
        bufp->chgIData(oldp+362,((((((((0x80000000U 
                                        & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                           & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a32__b) 
                                              << 0x1fU))) 
                                       | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a31__cout) 
                                           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0)) 
                                          << 0x1fU)) 
                                      | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a31__cout) 
                                         << 0x1eU)) 
                                     | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a30__cout) 
                                         << 0x1dU) 
                                        | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a29__cout) 
                                           << 0x1cU))) 
                                    | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a28__cout) 
                                         << 0x1bU) 
                                        | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a27__cout) 
                                           << 0x1aU)) 
                                       | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a26__cout) 
                                           << 0x19U) 
                                          | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a25__cout) 
                                             << 0x18U)))) 
                                   | (((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a24__cout) 
                                         << 0x17U) 
                                        | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a23__cout) 
                                           << 0x16U)) 
                                       | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a22__cout) 
                                           << 0x15U) 
                                          | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a21__cout) 
                                             << 0x14U))) 
                                      | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a20__cout) 
                                           << 0x13U) 
                                          | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a19__cout) 
                                             << 0x12U)) 
                                         | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a18__cout) 
                                             << 0x11U) 
                                            | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a17__cout) 
                                               << 0x10U))))) 
                                  | ((((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a16__cout) 
                                         << 0xfU) | 
                                        ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a15__cout) 
                                         << 0xeU)) 
                                       | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a14__cout) 
                                           << 0xdU) 
                                          | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a13__cout) 
                                             << 0xcU))) 
                                      | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a12__cout) 
                                           << 0xbU) 
                                          | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a11__cout) 
                                             << 0xaU)) 
                                         | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a10__cout) 
                                             << 9U) 
                                            | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a9__cout) 
                                               << 8U)))) 
                                     | (((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a8__cout) 
                                           << 7U) | 
                                          ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a7__cout) 
                                           << 6U)) 
                                         | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a6__cout) 
                                             << 5U) 
                                            | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a5__cout) 
                                               << 4U))) 
                                        | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a4__cout) 
                                             << 3U) 
                                            | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a3__cout) 
                                               << 2U)) 
                                           | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a2__cout) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__carry__BRA__0__KET__))))))),32);
        bufp->chgBit(oldp+363,((1U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a)));
        bufp->chgBit(oldp+364,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a1__b));
        bufp->chgBit(oldp+365,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__carry__BRA__0__KET__));
        bufp->chgBit(oldp+366,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                      >> 9U))));
        bufp->chgBit(oldp+367,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a10__b));
        bufp->chgBit(oldp+368,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a9__cout));
        bufp->chgBit(oldp+369,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a9__cout))));
        bufp->chgBit(oldp+370,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a10__cout));
        bufp->chgBit(oldp+371,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                      >> 0xaU))));
        bufp->chgBit(oldp+372,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a11__b));
        bufp->chgBit(oldp+373,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a10__cout))));
        bufp->chgBit(oldp+374,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a11__cout));
        bufp->chgBit(oldp+375,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                      >> 0xbU))));
        bufp->chgBit(oldp+376,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a12__b));
        bufp->chgBit(oldp+377,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a11__cout))));
        bufp->chgBit(oldp+378,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a12__cout));
        bufp->chgBit(oldp+379,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                      >> 0xcU))));
        bufp->chgBit(oldp+380,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a13__b));
        bufp->chgBit(oldp+381,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a12__cout))));
        bufp->chgBit(oldp+382,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a13__cout));
        bufp->chgBit(oldp+383,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                      >> 0xdU))));
        bufp->chgBit(oldp+384,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a14__b));
        bufp->chgBit(oldp+385,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a13__cout))));
        bufp->chgBit(oldp+386,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a14__cout));
        bufp->chgBit(oldp+387,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                      >> 0xeU))));
        bufp->chgBit(oldp+388,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a15__b));
        bufp->chgBit(oldp+389,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a14__cout))));
        bufp->chgBit(oldp+390,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a15__cout));
        bufp->chgBit(oldp+391,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                      >> 0xfU))));
        bufp->chgBit(oldp+392,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a16__b));
        bufp->chgBit(oldp+393,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a15__cout))));
        bufp->chgBit(oldp+394,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a16__cout));
        bufp->chgBit(oldp+395,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                      >> 0x10U))));
        bufp->chgBit(oldp+396,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a17__b));
        bufp->chgBit(oldp+397,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a16__cout))));
        bufp->chgBit(oldp+398,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a17__cout));
        bufp->chgBit(oldp+399,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                      >> 0x11U))));
        bufp->chgBit(oldp+400,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a18__b));
        bufp->chgBit(oldp+401,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a17__cout))));
        bufp->chgBit(oldp+402,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a18__cout));
        bufp->chgBit(oldp+403,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                      >> 0x12U))));
        bufp->chgBit(oldp+404,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a19__b));
        bufp->chgBit(oldp+405,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a18__cout))));
        bufp->chgBit(oldp+406,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a19__cout));
        bufp->chgBit(oldp+407,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                      >> 1U))));
        bufp->chgBit(oldp+408,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a2__b));
        bufp->chgBit(oldp+409,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__carry__BRA__0__KET__))));
        bufp->chgBit(oldp+410,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a2__cout));
        bufp->chgBit(oldp+411,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                      >> 0x13U))));
        bufp->chgBit(oldp+412,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a20__b));
        bufp->chgBit(oldp+413,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a19__cout))));
        bufp->chgBit(oldp+414,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a20__cout));
        bufp->chgBit(oldp+415,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                      >> 0x14U))));
        bufp->chgBit(oldp+416,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a21__b));
        bufp->chgBit(oldp+417,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a20__cout))));
        bufp->chgBit(oldp+418,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a21__cout));
        bufp->chgBit(oldp+419,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                      >> 0x15U))));
        bufp->chgBit(oldp+420,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a22__b));
        bufp->chgBit(oldp+421,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a21__cout))));
        bufp->chgBit(oldp+422,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a22__cout));
        bufp->chgBit(oldp+423,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                      >> 0x16U))));
        bufp->chgBit(oldp+424,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a23__b));
        bufp->chgBit(oldp+425,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a22__cout))));
        bufp->chgBit(oldp+426,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a23__cout));
        bufp->chgBit(oldp+427,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                      >> 0x17U))));
        bufp->chgBit(oldp+428,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a24__b));
        bufp->chgBit(oldp+429,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a23__cout))));
        bufp->chgBit(oldp+430,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a24__cout));
        bufp->chgBit(oldp+431,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                      >> 0x18U))));
        bufp->chgBit(oldp+432,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a25__b));
        bufp->chgBit(oldp+433,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a24__cout))));
        bufp->chgBit(oldp+434,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a25__cout));
        bufp->chgBit(oldp+435,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                      >> 0x19U))));
        bufp->chgBit(oldp+436,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a26__b));
        bufp->chgBit(oldp+437,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a25__cout))));
        bufp->chgBit(oldp+438,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a26__cout));
        bufp->chgBit(oldp+439,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+440,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a27__b));
        bufp->chgBit(oldp+441,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a26__cout))));
        bufp->chgBit(oldp+442,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a27__cout));
        bufp->chgBit(oldp+443,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+444,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a28__b));
        bufp->chgBit(oldp+445,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a27__cout))));
        bufp->chgBit(oldp+446,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a28__cout));
        bufp->chgBit(oldp+447,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+448,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a29__b));
        bufp->chgBit(oldp+449,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a28__cout))));
        bufp->chgBit(oldp+450,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a29__cout));
        bufp->chgBit(oldp+451,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                      >> 2U))));
        bufp->chgBit(oldp+452,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a3__b));
        bufp->chgBit(oldp+453,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a2__cout))));
        bufp->chgBit(oldp+454,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a3__cout));
        bufp->chgBit(oldp+455,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+456,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a30__b));
        bufp->chgBit(oldp+457,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a29__cout))));
        bufp->chgBit(oldp+458,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a30__cout));
        bufp->chgBit(oldp+459,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+460,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a31__b));
        bufp->chgBit(oldp+461,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a30__cout))));
        bufp->chgBit(oldp+462,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a31__cout));
        bufp->chgBit(oldp+463,((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                >> 0x1fU)));
        bufp->chgBit(oldp+464,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a32__b));
        bufp->chgBit(oldp+465,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a32__sum));
        bufp->chgBit(oldp+466,((((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                  >> 0x1fU) & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a32__b)) 
                                | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a31__cout) 
                                   & (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0)))));
        bufp->chgBit(oldp+467,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                      >> 3U))));
        bufp->chgBit(oldp+468,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a4__b));
        bufp->chgBit(oldp+469,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a3__cout))));
        bufp->chgBit(oldp+470,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a4__cout));
        bufp->chgBit(oldp+471,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                      >> 4U))));
        bufp->chgBit(oldp+472,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a5__b));
        bufp->chgBit(oldp+473,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a4__cout))));
        bufp->chgBit(oldp+474,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a5__cout));
        bufp->chgBit(oldp+475,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                      >> 5U))));
        bufp->chgBit(oldp+476,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a6__b));
        bufp->chgBit(oldp+477,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a5__cout))));
        bufp->chgBit(oldp+478,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a6__cout));
        bufp->chgBit(oldp+479,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                      >> 6U))));
        bufp->chgBit(oldp+480,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a7__b));
        bufp->chgBit(oldp+481,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a6__cout))));
        bufp->chgBit(oldp+482,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a7__cout));
        bufp->chgBit(oldp+483,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                      >> 7U))));
        bufp->chgBit(oldp+484,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a8__b));
        bufp->chgBit(oldp+485,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a7__cout))));
        bufp->chgBit(oldp+486,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a8__cout));
        bufp->chgBit(oldp+487,((1U & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a 
                                      >> 8U))));
        bufp->chgBit(oldp+488,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a9__b));
        bufp->chgBit(oldp+489,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a8__cout))));
        bufp->chgIData(oldp+490,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__and1__y),32);
        bufp->chgIData(oldp+491,((~ vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__SrcBE)),32);
        bufp->chgIData(oldp+492,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                                 [0U]),32);
        bufp->chgIData(oldp+493,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                                 [1U]),32);
        bufp->chgIData(oldp+494,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__or1__y),32);
        bufp->chgIData(oldp+495,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                                 [4U]),32);
        bufp->chgIData(oldp+496,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                                 [5U]),32);
        bufp->chgIData(oldp+497,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                                 [6U]),32);
        bufp->chgIData(oldp+498,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                                 [7U]),32);
        bufp->chgWData(oldp+499,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q),105);
        bufp->chgWData(oldp+503,(vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q),104);
        bufp->chgIData(oldp+507,(((0x80U & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U])
                                   ? ((0U == (0x1fU 
                                              & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U]))
                                       ? 0U : ((IData)(1U) 
                                               << (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])))
                                   : 0U)),32);
        bufp->chgBit(oldp+508,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                 >> 7U) & ((0U != (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                              >> 1U)))));
        bufp->chgBit(oldp+509,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                 >> 7U) & ((0U != (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                              >> 2U)))));
        bufp->chgBit(oldp+510,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                 >> 7U) & ((0U != (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                              >> 3U)))));
        bufp->chgBit(oldp+511,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                 >> 7U) & ((0U != (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                              >> 4U)))));
        bufp->chgBit(oldp+512,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                 >> 7U) & ((0U != (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                              >> 5U)))));
        bufp->chgBit(oldp+513,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                 >> 7U) & ((0U != (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                              >> 6U)))));
        bufp->chgBit(oldp+514,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                 >> 7U) & ((0U != (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                              >> 7U)))));
        bufp->chgBit(oldp+515,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                 >> 7U) & ((0U != (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                              >> 8U)))));
        bufp->chgBit(oldp+516,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                 >> 7U) & ((0U != (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                              >> 9U)))));
        bufp->chgBit(oldp+517,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                 >> 7U) & ((0U != (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+518,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                 >> 7U) & ((0U != (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+519,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                 >> 7U) & ((0U != (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+520,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                 >> 7U) & ((0U != (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+521,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                 >> 7U) & ((0U != (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+522,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                 >> 7U) & ((0U != (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+523,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                 >> 7U) & ((0U != (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+524,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                 >> 7U) & ((0U != (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+525,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                 >> 7U) & ((0U != (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+526,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                 >> 7U) & ((0U != (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+527,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                 >> 7U) & ((0U != (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+528,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                 >> 7U) & ((0U != (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+529,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                 >> 7U) & ((0U != (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+530,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                 >> 7U) & ((0U != (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+531,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                 >> 7U) & ((0U != (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+532,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                 >> 7U) & ((0U != (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+533,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                 >> 7U) & ((0U != (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+534,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                 >> 7U) & ((0U != (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+535,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                 >> 7U) & ((0U != (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+536,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                 >> 7U) & ((0U != (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+537,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                 >> 7U) & ((0U != (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+538,(((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                 >> 7U) & ((0U != (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U])) 
                                              >> 0x1fU)))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgIData(oldp+539,(vlSelfRef.testbench__DOT__dut__DOT__dm__DOT__RAM
                                 [(0x3fU & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                            >> 5U))]),32);
        __Vtemp_8[0U] = (IData)((0x1fffffffffULL & 
                                 (((QData)((IData)(
                                                   vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[0U])))));
        __Vtemp_8[1U] = ((vlSelfRef.testbench__DOT__dut__DOT__dm__DOT__RAM
                          [(0x3fU & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                     >> 5U))] << 5U) 
                         | (IData)(((0x1fffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[0U])))) 
                                    >> 0x20U)));
        __Vtemp_8[2U] = (((IData)((((QData)((IData)(
                                                    (7U 
                                                     & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                                        >> 6U)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                                                  << 0x1bU) 
                                                                 | (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                                                    >> 5U)))))) 
                          << 5U) | (vlSelfRef.testbench__DOT__dut__DOT__dm__DOT__RAM
                                    [(0x3fU & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                               >> 5U))] 
                                    >> 0x1bU));
        __Vtemp_8[3U] = (((IData)((((QData)((IData)(
                                                    (7U 
                                                     & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                                        >> 6U)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                                                  << 0x1bU) 
                                                                 | (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                                                    >> 5U)))))) 
                          >> 0x1bU) | ((IData)(((((QData)((IData)(
                                                                  (7U 
                                                                   & (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                                                      >> 6U)))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                                                     << 0x1bU) 
                                                                    | (vlSelfRef.testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                                                       >> 5U))))) 
                                                >> 0x20U)) 
                                       << 5U));
        bufp->chgWData(oldp+540,(__Vtemp_8),104);
    }
    bufp->chgBit(oldp+544,(vlSelfRef.clk));
    bufp->chgBit(oldp+545,(vlSelfRef.rst));
    bufp->chgBit(oldp+546,((1U & (~ (IData)(vlSelfRef.clk)))));
}

void Vtestbench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_cleanup\n"); );
    // Init
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
