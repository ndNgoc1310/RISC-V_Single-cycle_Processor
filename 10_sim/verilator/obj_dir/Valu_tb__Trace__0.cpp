// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu_tb__Syms.h"


void Valu_tb___024root__trace_chg_0_sub_0(Valu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Valu_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root__trace_chg_0\n"); );
    // Init
    Valu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_tb___024root*>(voidSelf);
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Valu_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Valu_tb___024root__trace_chg_0_sub_0(Valu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root__trace_chg_0_sub_0\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgIData(oldp+0,(vlSelfRef.alu_tb__DOT__a),32);
        bufp->chgIData(oldp+1,(vlSelfRef.alu_tb__DOT__b),32);
        bufp->chgCData(oldp+2,(vlSelfRef.alu_tb__DOT__ALUControl),4);
        bufp->chgIData(oldp+3,(vlSelfRef.alu_tb__DOT__test_num),32);
        bufp->chgIData(oldp+4,(vlSelfRef.alu_tb__DOT__pass_count),32);
        bufp->chgIData(oldp+5,(vlSelfRef.alu_tb__DOT__fail_count),32);
        bufp->chgBit(oldp+6,(vlSelfRef.alu_tb__DOT__run_test__Vstatic__expected_zero));
        bufp->chgBit(oldp+7,((1U & (IData)(vlSelfRef.alu_tb__DOT__ALUControl))));
        bufp->chgBit(oldp+8,((1U & vlSelfRef.alu_tb__DOT__a)));
        bufp->chgBit(oldp+9,((1U & (vlSelfRef.alu_tb__DOT__a 
                                    >> 9U))));
        bufp->chgBit(oldp+10,((1U & (vlSelfRef.alu_tb__DOT__a 
                                     >> 0xaU))));
        bufp->chgBit(oldp+11,((1U & (vlSelfRef.alu_tb__DOT__a 
                                     >> 0xbU))));
        bufp->chgBit(oldp+12,((1U & (vlSelfRef.alu_tb__DOT__a 
                                     >> 0xcU))));
        bufp->chgBit(oldp+13,((1U & (vlSelfRef.alu_tb__DOT__a 
                                     >> 0xdU))));
        bufp->chgBit(oldp+14,((1U & (vlSelfRef.alu_tb__DOT__a 
                                     >> 0xeU))));
        bufp->chgBit(oldp+15,((1U & (vlSelfRef.alu_tb__DOT__a 
                                     >> 0xfU))));
        bufp->chgBit(oldp+16,((1U & (vlSelfRef.alu_tb__DOT__a 
                                     >> 0x10U))));
        bufp->chgBit(oldp+17,((1U & (vlSelfRef.alu_tb__DOT__a 
                                     >> 0x11U))));
        bufp->chgBit(oldp+18,((1U & (vlSelfRef.alu_tb__DOT__a 
                                     >> 0x12U))));
        bufp->chgBit(oldp+19,((1U & (vlSelfRef.alu_tb__DOT__a 
                                     >> 1U))));
        bufp->chgBit(oldp+20,((1U & (vlSelfRef.alu_tb__DOT__a 
                                     >> 0x13U))));
        bufp->chgBit(oldp+21,((1U & (vlSelfRef.alu_tb__DOT__a 
                                     >> 0x14U))));
        bufp->chgBit(oldp+22,((1U & (vlSelfRef.alu_tb__DOT__a 
                                     >> 0x15U))));
        bufp->chgBit(oldp+23,((1U & (vlSelfRef.alu_tb__DOT__a 
                                     >> 0x16U))));
        bufp->chgBit(oldp+24,((1U & (vlSelfRef.alu_tb__DOT__a 
                                     >> 0x17U))));
        bufp->chgBit(oldp+25,((1U & (vlSelfRef.alu_tb__DOT__a 
                                     >> 0x18U))));
        bufp->chgBit(oldp+26,((1U & (vlSelfRef.alu_tb__DOT__a 
                                     >> 0x19U))));
        bufp->chgBit(oldp+27,((1U & (vlSelfRef.alu_tb__DOT__a 
                                     >> 0x1aU))));
        bufp->chgBit(oldp+28,((1U & (vlSelfRef.alu_tb__DOT__a 
                                     >> 0x1bU))));
        bufp->chgBit(oldp+29,((1U & (vlSelfRef.alu_tb__DOT__a 
                                     >> 0x1cU))));
        bufp->chgBit(oldp+30,((1U & (vlSelfRef.alu_tb__DOT__a 
                                     >> 2U))));
        bufp->chgBit(oldp+31,((1U & (vlSelfRef.alu_tb__DOT__a 
                                     >> 0x1dU))));
        bufp->chgBit(oldp+32,((1U & (vlSelfRef.alu_tb__DOT__a 
                                     >> 0x1eU))));
        bufp->chgBit(oldp+33,((vlSelfRef.alu_tb__DOT__a 
                               >> 0x1fU)));
        bufp->chgBit(oldp+34,((1U & (vlSelfRef.alu_tb__DOT__a 
                                     >> 3U))));
        bufp->chgBit(oldp+35,((1U & (vlSelfRef.alu_tb__DOT__a 
                                     >> 4U))));
        bufp->chgBit(oldp+36,((1U & (vlSelfRef.alu_tb__DOT__a 
                                     >> 5U))));
        bufp->chgBit(oldp+37,((1U & (vlSelfRef.alu_tb__DOT__a 
                                     >> 6U))));
        bufp->chgBit(oldp+38,((1U & (vlSelfRef.alu_tb__DOT__a 
                                     >> 7U))));
        bufp->chgBit(oldp+39,((1U & (vlSelfRef.alu_tb__DOT__a 
                                     >> 8U))));
        bufp->chgIData(oldp+40,((~ vlSelfRef.alu_tb__DOT__b)),32);
        bufp->chgCData(oldp+41,((0x1fU & vlSelfRef.alu_tb__DOT__b)),5);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgIData(oldp+42,(vlSelfRef.alu_tb__DOT__dut__DOT__src_b),32);
        bufp->chgIData(oldp+43,(vlSelfRef.alu_tb__DOT__dut__DOT__sum),32);
        bufp->chgIData(oldp+44,(vlSelfRef.alu_tb__DOT__result),32);
        bufp->chgBit(oldp+45,((0xffffffffU == (~ vlSelfRef.alu_tb__DOT__result))));
        bufp->chgIData(oldp+46,(vlSelfRef.alu_tb__DOT__dut__DOT__entry[0]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.alu_tb__DOT__dut__DOT__entry[1]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.alu_tb__DOT__dut__DOT__entry[2]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.alu_tb__DOT__dut__DOT__entry[3]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.alu_tb__DOT__dut__DOT__entry[4]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.alu_tb__DOT__dut__DOT__entry[5]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.alu_tb__DOT__dut__DOT__entry[6]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.alu_tb__DOT__dut__DOT__entry[7]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.alu_tb__DOT__dut__DOT__entry[8]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.alu_tb__DOT__dut__DOT__entry[9]),32);
        bufp->chgIData(oldp+56,(vlSelfRef.alu_tb__DOT__dut__DOT__entry[10]),32);
        bufp->chgIData(oldp+57,(vlSelfRef.alu_tb__DOT__dut__DOT__entry[11]),32);
        bufp->chgIData(oldp+58,(vlSelfRef.alu_tb__DOT__dut__DOT__entry[12]),32);
        bufp->chgIData(oldp+59,(vlSelfRef.alu_tb__DOT__dut__DOT__entry[13]),32);
        bufp->chgIData(oldp+60,(vlSelfRef.alu_tb__DOT__dut__DOT__entry[14]),32);
        bufp->chgIData(oldp+61,(vlSelfRef.alu_tb__DOT__dut__DOT__entry[15]),32);
        bufp->chgIData(oldp+62,((((((((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a32__cout) 
                                      << 0x1fU) | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a31__cout) 
                                                   << 0x1eU)) 
                                    | (((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a30__cout) 
                                        << 0x1dU) | 
                                       ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a29__cout) 
                                        << 0x1cU))) 
                                   | ((((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a28__cout) 
                                        << 0x1bU) | 
                                       ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a27__cout) 
                                        << 0x1aU)) 
                                      | (((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a26__cout) 
                                          << 0x19U) 
                                         | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a25__cout) 
                                            << 0x18U)))) 
                                  | (((((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a24__cout) 
                                        << 0x17U) | 
                                       ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a23__cout) 
                                        << 0x16U)) 
                                      | (((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a22__cout) 
                                          << 0x15U) 
                                         | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a21__cout) 
                                            << 0x14U))) 
                                     | ((((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a20__cout) 
                                          << 0x13U) 
                                         | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a19__cout) 
                                            << 0x12U)) 
                                        | (((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a18__cout) 
                                            << 0x11U) 
                                           | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a17__cout) 
                                              << 0x10U))))) 
                                 | ((((((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a16__cout) 
                                        << 0xfU) | 
                                       ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a15__cout) 
                                        << 0xeU)) | 
                                      (((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a14__cout) 
                                        << 0xdU) | 
                                       ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a13__cout) 
                                        << 0xcU))) 
                                     | ((((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a12__cout) 
                                          << 0xbU) 
                                         | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a11__cout) 
                                            << 0xaU)) 
                                        | (((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a10__cout) 
                                            << 9U) 
                                           | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a9__cout) 
                                              << 8U)))) 
                                    | (((((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a8__cout) 
                                          << 7U) | 
                                         ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a7__cout) 
                                          << 6U)) | 
                                        (((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a6__cout) 
                                          << 5U) | 
                                         ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a5__cout) 
                                          << 4U))) 
                                       | ((((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a4__cout) 
                                            << 3U) 
                                           | ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a3__cout) 
                                              << 2U)) 
                                          | (((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a2__cout) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__carry__BRA__0__KET__))))))),32);
        bufp->chgBit(oldp+63,((1U & vlSelfRef.alu_tb__DOT__dut__DOT__src_b)));
        bufp->chgBit(oldp+64,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__carry__BRA__0__KET__));
        bufp->chgBit(oldp+65,((1U & (vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                                     >> 9U))));
        bufp->chgBit(oldp+66,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a9__cout));
        bufp->chgBit(oldp+67,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0) 
                               ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a9__cout))));
        bufp->chgBit(oldp+68,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a10__cout));
        bufp->chgBit(oldp+69,((1U & (vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                                     >> 0xaU))));
        bufp->chgBit(oldp+70,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0) 
                               ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a10__cout))));
        bufp->chgBit(oldp+71,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a11__cout));
        bufp->chgBit(oldp+72,((1U & (vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                                     >> 0xbU))));
        bufp->chgBit(oldp+73,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0) 
                               ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a11__cout))));
        bufp->chgBit(oldp+74,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a12__cout));
        bufp->chgBit(oldp+75,((1U & (vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                                     >> 0xcU))));
        bufp->chgBit(oldp+76,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0) 
                               ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a12__cout))));
        bufp->chgBit(oldp+77,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a13__cout));
        bufp->chgBit(oldp+78,((1U & (vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                                     >> 0xdU))));
        bufp->chgBit(oldp+79,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0) 
                               ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a13__cout))));
        bufp->chgBit(oldp+80,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a14__cout));
        bufp->chgBit(oldp+81,((1U & (vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                                     >> 0xeU))));
        bufp->chgBit(oldp+82,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0) 
                               ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a14__cout))));
        bufp->chgBit(oldp+83,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a15__cout));
        bufp->chgBit(oldp+84,((1U & (vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                                     >> 0xfU))));
        bufp->chgBit(oldp+85,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0) 
                               ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a15__cout))));
        bufp->chgBit(oldp+86,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a16__cout));
        bufp->chgBit(oldp+87,((1U & (vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                                     >> 0x10U))));
        bufp->chgBit(oldp+88,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0) 
                               ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a16__cout))));
        bufp->chgBit(oldp+89,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a17__cout));
        bufp->chgBit(oldp+90,((1U & (vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                                     >> 0x11U))));
        bufp->chgBit(oldp+91,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0) 
                               ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a17__cout))));
        bufp->chgBit(oldp+92,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a18__cout));
        bufp->chgBit(oldp+93,((1U & (vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                                     >> 0x12U))));
        bufp->chgBit(oldp+94,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0) 
                               ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a18__cout))));
        bufp->chgBit(oldp+95,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a19__cout));
        bufp->chgBit(oldp+96,((1U & (vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                                     >> 1U))));
        bufp->chgBit(oldp+97,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0) 
                               ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__carry__BRA__0__KET__))));
        bufp->chgBit(oldp+98,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a2__cout));
        bufp->chgBit(oldp+99,((1U & (vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                                     >> 0x13U))));
        bufp->chgBit(oldp+100,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a19__cout))));
        bufp->chgBit(oldp+101,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a20__cout));
        bufp->chgBit(oldp+102,((1U & (vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                                      >> 0x14U))));
        bufp->chgBit(oldp+103,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a20__cout))));
        bufp->chgBit(oldp+104,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a21__cout));
        bufp->chgBit(oldp+105,((1U & (vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                                      >> 0x15U))));
        bufp->chgBit(oldp+106,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a21__cout))));
        bufp->chgBit(oldp+107,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a22__cout));
        bufp->chgBit(oldp+108,((1U & (vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                                      >> 0x16U))));
        bufp->chgBit(oldp+109,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a22__cout))));
        bufp->chgBit(oldp+110,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a23__cout));
        bufp->chgBit(oldp+111,((1U & (vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                                      >> 0x17U))));
        bufp->chgBit(oldp+112,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a23__cout))));
        bufp->chgBit(oldp+113,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a24__cout));
        bufp->chgBit(oldp+114,((1U & (vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                                      >> 0x18U))));
        bufp->chgBit(oldp+115,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a24__cout))));
        bufp->chgBit(oldp+116,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a25__cout));
        bufp->chgBit(oldp+117,((1U & (vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+118,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a25__cout))));
        bufp->chgBit(oldp+119,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a26__cout));
        bufp->chgBit(oldp+120,((1U & (vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+121,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a26__cout))));
        bufp->chgBit(oldp+122,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a27__cout));
        bufp->chgBit(oldp+123,((1U & (vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+124,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a27__cout))));
        bufp->chgBit(oldp+125,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a28__cout));
        bufp->chgBit(oldp+126,((1U & (vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+127,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a28__cout))));
        bufp->chgBit(oldp+128,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a29__cout));
        bufp->chgBit(oldp+129,((1U & (vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                                      >> 2U))));
        bufp->chgBit(oldp+130,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a2__cout))));
        bufp->chgBit(oldp+131,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a3__cout));
        bufp->chgBit(oldp+132,((1U & (vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+133,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a29__cout))));
        bufp->chgBit(oldp+134,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a30__cout));
        bufp->chgBit(oldp+135,((1U & (vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+136,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a30__cout))));
        bufp->chgBit(oldp+137,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a31__cout));
        bufp->chgBit(oldp+138,((vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                                >> 0x1fU)));
        bufp->chgBit(oldp+139,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a32__sum));
        bufp->chgBit(oldp+140,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a32__cout));
        bufp->chgBit(oldp+141,((1U & (vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                                      >> 3U))));
        bufp->chgBit(oldp+142,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a3__cout))));
        bufp->chgBit(oldp+143,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a4__cout));
        bufp->chgBit(oldp+144,((1U & (vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                                      >> 4U))));
        bufp->chgBit(oldp+145,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a4__cout))));
        bufp->chgBit(oldp+146,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a5__cout));
        bufp->chgBit(oldp+147,((1U & (vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                                      >> 5U))));
        bufp->chgBit(oldp+148,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a5__cout))));
        bufp->chgBit(oldp+149,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a6__cout));
        bufp->chgBit(oldp+150,((1U & (vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                                      >> 6U))));
        bufp->chgBit(oldp+151,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a6__cout))));
        bufp->chgBit(oldp+152,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a7__cout));
        bufp->chgBit(oldp+153,((1U & (vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                                      >> 7U))));
        bufp->chgBit(oldp+154,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a7__cout))));
        bufp->chgBit(oldp+155,(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a8__cout));
        bufp->chgBit(oldp+156,((1U & (vlSelfRef.alu_tb__DOT__dut__DOT__src_b 
                                      >> 8U))));
        bufp->chgBit(oldp+157,(((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a8__cout))));
        bufp->chgIData(oldp+158,(vlSelfRef.alu_tb__DOT__dut__DOT____Vcellout__and1__y),32);
        bufp->chgIData(oldp+159,(vlSelfRef.alu_tb__DOT__dut__DOT__entry
                                 [0U]),32);
        bufp->chgIData(oldp+160,(vlSelfRef.alu_tb__DOT__dut__DOT__entry
                                 [1U]),32);
        bufp->chgIData(oldp+161,(vlSelfRef.alu_tb__DOT__dut__DOT____Vcellout__or1__y),32);
        bufp->chgIData(oldp+162,(vlSelfRef.alu_tb__DOT__dut__DOT____Vcellout__xor1__y),32);
        bufp->chgIData(oldp+163,(vlSelfRef.alu_tb__DOT__dut__DOT__entry
                                 [5U]),32);
        bufp->chgIData(oldp+164,(vlSelfRef.alu_tb__DOT__dut__DOT__sll1__DOT__shift5),32);
        bufp->chgIData(oldp+165,(vlSelfRef.alu_tb__DOT__dut__DOT__srl1__DOT__shift5),32);
        bufp->chgIData(oldp+166,(vlSelfRef.alu_tb__DOT__dut__DOT__sra1__DOT__shift5),32);
        bufp->chgIData(oldp+167,(vlSelfRef.alu_tb__DOT__dut__DOT__entry
                                 [9U]),32);
        bufp->chgIData(oldp+168,(vlSelfRef.alu_tb__DOT__dut__DOT__entry
                                 [0xaU]),32);
        bufp->chgIData(oldp+169,(vlSelfRef.alu_tb__DOT__dut__DOT__entry
                                 [0xbU]),32);
        bufp->chgIData(oldp+170,(vlSelfRef.alu_tb__DOT__dut__DOT__entry
                                 [0xcU]),32);
        bufp->chgIData(oldp+171,(vlSelfRef.alu_tb__DOT__dut__DOT__entry
                                 [0xdU]),32);
        bufp->chgIData(oldp+172,(vlSelfRef.alu_tb__DOT__dut__DOT__entry
                                 [0xeU]),32);
        bufp->chgIData(oldp+173,(vlSelfRef.alu_tb__DOT__dut__DOT__entry
                                 [0xfU]),32);
        bufp->chgIData(oldp+174,(vlSelfRef.alu_tb__DOT__dut__DOT__sll1__DOT__shift1),32);
        bufp->chgIData(oldp+175,(vlSelfRef.alu_tb__DOT__dut__DOT__sll1__DOT__shift2),32);
        bufp->chgIData(oldp+176,(vlSelfRef.alu_tb__DOT__dut__DOT__sll1__DOT__shift3),32);
        bufp->chgIData(oldp+177,(vlSelfRef.alu_tb__DOT__dut__DOT__sll1__DOT__shift4),32);
        bufp->chgIData(oldp+178,(vlSelfRef.alu_tb__DOT__dut__DOT__sra1__DOT__shift1),32);
        bufp->chgIData(oldp+179,(vlSelfRef.alu_tb__DOT__dut__DOT__sra1__DOT__shift2),32);
        bufp->chgIData(oldp+180,(vlSelfRef.alu_tb__DOT__dut__DOT__sra1__DOT__shift3),32);
        bufp->chgIData(oldp+181,(vlSelfRef.alu_tb__DOT__dut__DOT__sra1__DOT__shift4),32);
        bufp->chgIData(oldp+182,(vlSelfRef.alu_tb__DOT__dut__DOT__srl1__DOT__shift1),32);
        bufp->chgIData(oldp+183,(vlSelfRef.alu_tb__DOT__dut__DOT__srl1__DOT__shift2),32);
        bufp->chgIData(oldp+184,(vlSelfRef.alu_tb__DOT__dut__DOT__srl1__DOT__shift3),32);
        bufp->chgIData(oldp+185,(vlSelfRef.alu_tb__DOT__dut__DOT__srl1__DOT__shift4),32);
    }
    bufp->chgBit(oldp+186,((1U & ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a32__cout) 
                                  ^ (IData)(vlSelfRef.alu_tb__DOT__ALUControl)))));
    bufp->chgBit(oldp+187,((1U & ((~ ((IData)(vlSelfRef.alu_tb__DOT__ALUControl) 
                                      >> 1U)) & ((~ 
                                                  ((IData)(vlSelfRef.alu_tb__DOT__ALUControl) 
                                                   ^ 
                                                   ((vlSelfRef.alu_tb__DOT__a 
                                                     ^ vlSelfRef.alu_tb__DOT__b) 
                                                    >> 0x1fU))) 
                                                 & ((vlSelfRef.alu_tb__DOT__a 
                                                     >> 0x1fU) 
                                                    ^ (IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a32__sum)))))));
    bufp->chgBit(oldp+188,((1U & ((IData)(vlSelfRef.alu_tb__DOT__dut__DOT__add1__DOT__a1__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                  ^ (IData)(vlSelfRef.alu_tb__DOT__ALUControl)))));
}

void Valu_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root__trace_cleanup\n"); );
    // Init
    Valu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_tb___024root*>(voidSelf);
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
