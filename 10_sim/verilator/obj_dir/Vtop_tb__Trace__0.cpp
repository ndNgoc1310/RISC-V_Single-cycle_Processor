// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_tb__Syms.h"


void Vtop_tb___024root__trace_chg_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_chg_0\n"); );
    // Init
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop_tb___024root__trace_chg_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+0,(((0x73U == (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op)) 
                              & (0U == (vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM
                                        [(0xffU & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                                   >> 2U))] 
                                        >> 0x14U)))));
        bufp->chgBit(oldp+1,(((0x73U == (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op)) 
                              & (1U == (vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM
                                        [(0xffU & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                                   >> 2U))] 
                                        >> 0x14U)))));
        bufp->chgIData(oldp+2,(vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM
                               [(0xffU & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                          >> 2U))]),32);
        bufp->chgSData(oldp+3,((vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM
                                [(0xffU & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                           >> 2U))] 
                                >> 0x14U)),12);
        bufp->chgBit(oldp+4,((1U & (vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM
                                    [(0xffU & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                               >> 2U))] 
                                    >> 5U))));
        bufp->chgBit(oldp+5,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__funct7b5) 
                              & (vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM
                                 [(0xffU & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                            >> 2U))] 
                                 >> 5U))));
        bufp->chgCData(oldp+6,((0x1fU & (vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM
                                         [(0xffU & 
                                           (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                            >> 2U))] 
                                         >> 0xfU))),5);
        bufp->chgCData(oldp+7,((0x1fU & (vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM
                                         [(0xffU & 
                                           (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                            >> 2U))] 
                                         >> 0x14U))),5);
        bufp->chgCData(oldp+8,((0x1fU & (vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM
                                         [(0xffU & 
                                           (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                            >> 2U))] 
                                         >> 7U))),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+9,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[0]),32);
        bufp->chgIData(oldp+10,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[1]),32);
        bufp->chgIData(oldp+11,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[2]),32);
        bufp->chgIData(oldp+12,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[3]),32);
        bufp->chgIData(oldp+13,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[4]),32);
        bufp->chgIData(oldp+14,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[5]),32);
        bufp->chgIData(oldp+15,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[6]),32);
        bufp->chgIData(oldp+16,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[7]),32);
        bufp->chgIData(oldp+17,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[8]),32);
        bufp->chgIData(oldp+18,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[9]),32);
        bufp->chgIData(oldp+19,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[10]),32);
        bufp->chgIData(oldp+20,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[11]),32);
        bufp->chgIData(oldp+21,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[12]),32);
        bufp->chgIData(oldp+22,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[13]),32);
        bufp->chgIData(oldp+23,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[14]),32);
        bufp->chgIData(oldp+24,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[15]),32);
        bufp->chgIData(oldp+25,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[16]),32);
        bufp->chgIData(oldp+26,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[17]),32);
        bufp->chgIData(oldp+27,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[18]),32);
        bufp->chgIData(oldp+28,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[19]),32);
        bufp->chgIData(oldp+29,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[20]),32);
        bufp->chgIData(oldp+30,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[21]),32);
        bufp->chgIData(oldp+31,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[22]),32);
        bufp->chgIData(oldp+32,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[23]),32);
        bufp->chgIData(oldp+33,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[24]),32);
        bufp->chgIData(oldp+34,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[25]),32);
        bufp->chgIData(oldp+35,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[26]),32);
        bufp->chgIData(oldp+36,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[27]),32);
        bufp->chgIData(oldp+37,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[28]),32);
        bufp->chgIData(oldp+38,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[29]),32);
        bufp->chgIData(oldp+39,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[30]),32);
        bufp->chgIData(oldp+40,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+41,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1),32);
        bufp->chgIData(oldp+42,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd2),32);
        bufp->chgBit(oldp+43,((1U & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1)));
        bufp->chgBit(oldp+44,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                     >> 9U))));
        bufp->chgBit(oldp+45,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                     >> 0xaU))));
        bufp->chgBit(oldp+46,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                     >> 0xbU))));
        bufp->chgBit(oldp+47,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                     >> 0xcU))));
        bufp->chgBit(oldp+48,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                     >> 0xdU))));
        bufp->chgBit(oldp+49,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                     >> 0xeU))));
        bufp->chgBit(oldp+50,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                     >> 0xfU))));
        bufp->chgBit(oldp+51,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                     >> 0x10U))));
        bufp->chgBit(oldp+52,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                     >> 0x11U))));
        bufp->chgBit(oldp+53,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                     >> 0x12U))));
        bufp->chgBit(oldp+54,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                     >> 1U))));
        bufp->chgBit(oldp+55,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                     >> 0x13U))));
        bufp->chgBit(oldp+56,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                     >> 0x14U))));
        bufp->chgBit(oldp+57,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                     >> 0x15U))));
        bufp->chgBit(oldp+58,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                     >> 0x16U))));
        bufp->chgBit(oldp+59,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                     >> 0x17U))));
        bufp->chgBit(oldp+60,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                     >> 0x18U))));
        bufp->chgBit(oldp+61,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                     >> 0x19U))));
        bufp->chgBit(oldp+62,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                     >> 0x1aU))));
        bufp->chgBit(oldp+63,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                     >> 0x1bU))));
        bufp->chgBit(oldp+64,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                     >> 0x1cU))));
        bufp->chgBit(oldp+65,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                     >> 2U))));
        bufp->chgBit(oldp+66,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                     >> 0x1dU))));
        bufp->chgBit(oldp+67,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                     >> 0x1eU))));
        bufp->chgBit(oldp+68,((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                               >> 0x1fU)));
        bufp->chgBit(oldp+69,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                     >> 3U))));
        bufp->chgBit(oldp+70,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                     >> 4U))));
        bufp->chgBit(oldp+71,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                     >> 5U))));
        bufp->chgBit(oldp+72,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                     >> 6U))));
        bufp->chgBit(oldp+73,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                     >> 7U))));
        bufp->chgBit(oldp+74,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                     >> 8U))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+75,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc),32);
        bufp->chgBit(oldp+76,((1U & ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                     >> 7U))));
        bufp->chgBit(oldp+77,((1U & ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                     >> 0xcU))));
        bufp->chgBit(oldp+78,((1U & ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                     >> 8U))));
        bufp->chgCData(oldp+79,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUControl),4);
        bufp->chgCData(oldp+80,((3U & ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                       >> 5U))),2);
        bufp->chgCData(oldp+81,((7U & ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                       >> 9U))),3);
        bufp->chgCData(oldp+82,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__LSType),5);
        bufp->chgCData(oldp+83,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op),7);
        bufp->chgCData(oldp+84,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__funct3),3);
        bufp->chgBit(oldp+85,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__funct7b5));
        bufp->chgBit(oldp+86,((1U & ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                     >> 4U))));
        bufp->chgBit(oldp+87,((1U & ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                     >> 1U))));
        bufp->chgBit(oldp+88,((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))));
        bufp->chgCData(oldp+89,((3U & ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                       >> 2U))),2);
        bufp->chgSData(oldp+90,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls),13);
        bufp->chgIData(oldp+91,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCPlus4),32);
        bufp->chgIData(oldp+92,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt),32);
        bufp->chgIData(oldp+93,(((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                   ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout)) 
                                  << 0x1fU) | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                 ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout)) 
                                                << 0x1eU) 
                                               | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                    ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout)) 
                                                   << 0x1dU) 
                                                  | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                       ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout)) 
                                                      << 0x1cU) 
                                                     | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                          ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout)) 
                                                         << 0x1bU) 
                                                        | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout)) 
                                                            << 0x1aU) 
                                                           | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout)) 
                                                               << 0x19U) 
                                                              | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                   ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout)) 
                                                                  << 0x18U) 
                                                                 | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                      ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout)) 
                                                                     << 0x17U) 
                                                                    | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                         ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout)) 
                                                                        << 0x16U) 
                                                                       | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                            ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout)) 
                                                                           << 0x15U) 
                                                                          | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                               ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout)) 
                                                                              << 0x14U) 
                                                                             | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout)) 
                                                                                << 0x13U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout)) 
                                                                                << 0x12U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout)) 
                                                                                << 0x11U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout)) 
                                                                                << 0x10U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout)) 
                                                                                << 0xfU) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout)) 
                                                                                << 0xeU) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout)) 
                                                                                << 0xdU) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout)) 
                                                                                << 0xcU) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout)) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout)) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout)) 
                                                                                << 9U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout)) 
                                                                                << 8U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout)) 
                                                                                << 7U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout)) 
                                                                                << 6U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout)) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout)) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout)) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout)) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a1__cout)) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                                                                ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt)))))))))))))))))))))))))))))))))),32);
        bufp->chgBit(oldp+94,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout) 
                               & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                  >> 0x1fU))));
        bufp->chgBit(oldp+95,((1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                       & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                                      >> 0x1fU) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout) 
                                                   & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0))))));
        bufp->chgBit(oldp+96,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__isAddSub));
        bufp->chgBit(oldp+97,((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUControl))));
        bufp->chgIData(oldp+98,(((0x80000000U & (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout) 
                                                  << 0x1fU) 
                                                 & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc)) 
                                 | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout) 
                                     << 0x1eU) | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a30__cout) 
                                                   << 0x1dU) 
                                                  | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a29__cout) 
                                                      << 0x1cU) 
                                                     | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a28__cout) 
                                                         << 0x1bU) 
                                                        | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a27__cout) 
                                                            << 0x1aU) 
                                                           | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a26__cout) 
                                                               << 0x19U) 
                                                              | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a25__cout) 
                                                                  << 0x18U) 
                                                                 | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a24__cout) 
                                                                     << 0x17U) 
                                                                    | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a23__cout) 
                                                                        << 0x16U) 
                                                                       | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a22__cout) 
                                                                           << 0x15U) 
                                                                          | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a21__cout) 
                                                                              << 0x14U) 
                                                                             | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a20__cout) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a19__cout) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a18__cout) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a17__cout) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a16__cout) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a15__cout) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a14__cout) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a13__cout) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a12__cout) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a11__cout) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a10__cout) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a9__cout) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a8__cout) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a7__cout) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a6__cout) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a5__cout) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a4__cout) 
                                                                                << 3U) 
                                                                                | (4U 
                                                                                & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc))))))))))))))))))))))))))))))),32);
        bufp->chgBit(oldp+99,((1U & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc)));
        bufp->chgBit(oldp+100,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                      >> 9U))));
        bufp->chgBit(oldp+101,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a9__cout));
        bufp->chgBit(oldp+102,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                       >> 9U) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a9__cout)))));
        bufp->chgBit(oldp+103,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a10__cout));
        bufp->chgBit(oldp+104,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                      >> 0xaU))));
        bufp->chgBit(oldp+105,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                       >> 0xaU) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a10__cout)))));
        bufp->chgBit(oldp+106,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a11__cout));
        bufp->chgBit(oldp+107,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                      >> 0xbU))));
        bufp->chgBit(oldp+108,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                       >> 0xbU) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a11__cout)))));
        bufp->chgBit(oldp+109,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a12__cout));
        bufp->chgBit(oldp+110,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                      >> 0xcU))));
        bufp->chgBit(oldp+111,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                       >> 0xcU) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a12__cout)))));
        bufp->chgBit(oldp+112,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a13__cout));
        bufp->chgBit(oldp+113,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                      >> 0xdU))));
        bufp->chgBit(oldp+114,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                       >> 0xdU) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a13__cout)))));
        bufp->chgBit(oldp+115,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a14__cout));
        bufp->chgBit(oldp+116,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                      >> 0xeU))));
        bufp->chgBit(oldp+117,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                       >> 0xeU) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a14__cout)))));
        bufp->chgBit(oldp+118,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a15__cout));
        bufp->chgBit(oldp+119,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                      >> 0xfU))));
        bufp->chgBit(oldp+120,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                       >> 0xfU) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a15__cout)))));
        bufp->chgBit(oldp+121,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a16__cout));
        bufp->chgBit(oldp+122,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                      >> 0x10U))));
        bufp->chgBit(oldp+123,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                       >> 0x10U) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a16__cout)))));
        bufp->chgBit(oldp+124,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a17__cout));
        bufp->chgBit(oldp+125,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                      >> 0x11U))));
        bufp->chgBit(oldp+126,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                       >> 0x11U) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a17__cout)))));
        bufp->chgBit(oldp+127,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a18__cout));
        bufp->chgBit(oldp+128,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                      >> 0x12U))));
        bufp->chgBit(oldp+129,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                       >> 0x12U) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a18__cout)))));
        bufp->chgBit(oldp+130,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a19__cout));
        bufp->chgBit(oldp+131,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                      >> 1U))));
        bufp->chgBit(oldp+132,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                      >> 0x13U))));
        bufp->chgBit(oldp+133,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                       >> 0x13U) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a19__cout)))));
        bufp->chgBit(oldp+134,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a20__cout));
        bufp->chgBit(oldp+135,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                      >> 0x14U))));
        bufp->chgBit(oldp+136,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                       >> 0x14U) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a20__cout)))));
        bufp->chgBit(oldp+137,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a21__cout));
        bufp->chgBit(oldp+138,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                      >> 0x15U))));
        bufp->chgBit(oldp+139,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                       >> 0x15U) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a21__cout)))));
        bufp->chgBit(oldp+140,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a22__cout));
        bufp->chgBit(oldp+141,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                      >> 0x16U))));
        bufp->chgBit(oldp+142,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                       >> 0x16U) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a22__cout)))));
        bufp->chgBit(oldp+143,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a23__cout));
        bufp->chgBit(oldp+144,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                      >> 0x17U))));
        bufp->chgBit(oldp+145,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                       >> 0x17U) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a23__cout)))));
        bufp->chgBit(oldp+146,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a24__cout));
        bufp->chgBit(oldp+147,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                      >> 0x18U))));
        bufp->chgBit(oldp+148,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                       >> 0x18U) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a24__cout)))));
        bufp->chgBit(oldp+149,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a25__cout));
        bufp->chgBit(oldp+150,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                      >> 0x19U))));
        bufp->chgBit(oldp+151,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                       >> 0x19U) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a25__cout)))));
        bufp->chgBit(oldp+152,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a26__cout));
        bufp->chgBit(oldp+153,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+154,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                       >> 0x1aU) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a26__cout)))));
        bufp->chgBit(oldp+155,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a27__cout));
        bufp->chgBit(oldp+156,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+157,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                       >> 0x1bU) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a27__cout)))));
        bufp->chgBit(oldp+158,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a28__cout));
        bufp->chgBit(oldp+159,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+160,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                       >> 0x1cU) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a28__cout)))));
        bufp->chgBit(oldp+161,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a29__cout));
        bufp->chgBit(oldp+162,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                      >> 2U))));
        bufp->chgBit(oldp+163,((1U & (~ (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                         >> 2U)))));
        bufp->chgBit(oldp+164,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+165,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                       >> 0x1dU) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a29__cout)))));
        bufp->chgBit(oldp+166,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a30__cout));
        bufp->chgBit(oldp+167,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+168,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                       >> 0x1eU) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a30__cout)))));
        bufp->chgBit(oldp+169,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout));
        bufp->chgBit(oldp+170,((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                >> 0x1fU)));
        bufp->chgBit(oldp+171,(((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                 >> 0x1fU) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout))));
        bufp->chgBit(oldp+172,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                      >> 3U))));
        bufp->chgBit(oldp+173,((1U & VL_REDXOR_4((0xcU 
                                                  & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc)))));
        bufp->chgBit(oldp+174,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a4__cout));
        bufp->chgBit(oldp+175,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                      >> 4U))));
        bufp->chgBit(oldp+176,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                       >> 4U) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a4__cout)))));
        bufp->chgBit(oldp+177,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a5__cout));
        bufp->chgBit(oldp+178,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                      >> 5U))));
        bufp->chgBit(oldp+179,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                       >> 5U) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a5__cout)))));
        bufp->chgBit(oldp+180,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a6__cout));
        bufp->chgBit(oldp+181,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                      >> 6U))));
        bufp->chgBit(oldp+182,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                       >> 6U) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a6__cout)))));
        bufp->chgBit(oldp+183,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a7__cout));
        bufp->chgBit(oldp+184,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                      >> 7U))));
        bufp->chgBit(oldp+185,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                       >> 7U) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a7__cout)))));
        bufp->chgBit(oldp+186,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a8__cout));
        bufp->chgBit(oldp+187,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                      >> 8U))));
        bufp->chgBit(oldp+188,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                       >> 8U) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a8__cout)))));
        bufp->chgIData(oldp+189,(((0x80000000U & ((0x80000000U 
                                                   & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                                      & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt)) 
                                                  | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout) 
                                                      & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0)) 
                                                     << 0x1fU))) 
                                  | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout) 
                                      << 0x1eU) | (
                                                   ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout) 
                                                    << 0x1dU) 
                                                   | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout) 
                                                       << 0x1cU) 
                                                      | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout) 
                                                          << 0x1bU) 
                                                         | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout) 
                                                             << 0x1aU) 
                                                            | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout) 
                                                                << 0x19U) 
                                                               | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout) 
                                                                   << 0x18U) 
                                                                  | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout) 
                                                                      << 0x17U) 
                                                                     | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout) 
                                                                         << 0x16U) 
                                                                        | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout) 
                                                                            << 0x15U) 
                                                                           | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout) 
                                                                               << 0x14U) 
                                                                              | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a1__cout))))))))))))))))))))))))))))))))),32);
        bufp->chgBit(oldp+190,((1U & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt)));
        bufp->chgBit(oldp+191,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                      ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt))));
        bufp->chgBit(oldp+192,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a1__cout));
        bufp->chgBit(oldp+193,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                      >> 9U))));
        bufp->chgBit(oldp+194,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout));
        bufp->chgBit(oldp+195,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout))));
        bufp->chgBit(oldp+196,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout));
        bufp->chgBit(oldp+197,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                      >> 0xaU))));
        bufp->chgBit(oldp+198,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout))));
        bufp->chgBit(oldp+199,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout));
        bufp->chgBit(oldp+200,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                      >> 0xbU))));
        bufp->chgBit(oldp+201,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout))));
        bufp->chgBit(oldp+202,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout));
        bufp->chgBit(oldp+203,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                      >> 0xcU))));
        bufp->chgBit(oldp+204,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout))));
        bufp->chgBit(oldp+205,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout));
        bufp->chgBit(oldp+206,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                      >> 0xdU))));
        bufp->chgBit(oldp+207,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout))));
        bufp->chgBit(oldp+208,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout));
        bufp->chgBit(oldp+209,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                      >> 0xeU))));
        bufp->chgBit(oldp+210,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout))));
        bufp->chgBit(oldp+211,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout));
        bufp->chgBit(oldp+212,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                      >> 0xfU))));
        bufp->chgBit(oldp+213,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout))));
        bufp->chgBit(oldp+214,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout));
        bufp->chgBit(oldp+215,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                      >> 0x10U))));
        bufp->chgBit(oldp+216,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout))));
        bufp->chgBit(oldp+217,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout));
        bufp->chgBit(oldp+218,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                      >> 0x11U))));
        bufp->chgBit(oldp+219,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout))));
        bufp->chgBit(oldp+220,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout));
        bufp->chgBit(oldp+221,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                      >> 0x12U))));
        bufp->chgBit(oldp+222,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout))));
        bufp->chgBit(oldp+223,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout));
        bufp->chgBit(oldp+224,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                      >> 1U))));
        bufp->chgBit(oldp+225,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a1__cout))));
        bufp->chgBit(oldp+226,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout));
        bufp->chgBit(oldp+227,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                      >> 0x13U))));
        bufp->chgBit(oldp+228,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout))));
        bufp->chgBit(oldp+229,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout));
        bufp->chgBit(oldp+230,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                      >> 0x14U))));
        bufp->chgBit(oldp+231,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout))));
        bufp->chgBit(oldp+232,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout));
        bufp->chgBit(oldp+233,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                      >> 0x15U))));
        bufp->chgBit(oldp+234,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout))));
        bufp->chgBit(oldp+235,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout));
        bufp->chgBit(oldp+236,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                      >> 0x16U))));
        bufp->chgBit(oldp+237,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout))));
        bufp->chgBit(oldp+238,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout));
        bufp->chgBit(oldp+239,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                      >> 0x17U))));
        bufp->chgBit(oldp+240,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout))));
        bufp->chgBit(oldp+241,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout));
        bufp->chgBit(oldp+242,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                      >> 0x18U))));
        bufp->chgBit(oldp+243,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout))));
        bufp->chgBit(oldp+244,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout));
        bufp->chgBit(oldp+245,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                      >> 0x19U))));
        bufp->chgBit(oldp+246,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout))));
        bufp->chgBit(oldp+247,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout));
        bufp->chgBit(oldp+248,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+249,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout))));
        bufp->chgBit(oldp+250,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout));
        bufp->chgBit(oldp+251,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+252,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout))));
        bufp->chgBit(oldp+253,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout));
        bufp->chgBit(oldp+254,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+255,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout))));
        bufp->chgBit(oldp+256,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout));
        bufp->chgBit(oldp+257,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                      >> 2U))));
        bufp->chgBit(oldp+258,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout))));
        bufp->chgBit(oldp+259,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout));
        bufp->chgBit(oldp+260,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+261,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout))));
        bufp->chgBit(oldp+262,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout));
        bufp->chgBit(oldp+263,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+264,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout))));
        bufp->chgBit(oldp+265,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout));
        bufp->chgBit(oldp+266,((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                >> 0x1fU)));
        bufp->chgBit(oldp+267,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout))));
        bufp->chgBit(oldp+268,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                      >> 3U))));
        bufp->chgBit(oldp+269,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout))));
        bufp->chgBit(oldp+270,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout));
        bufp->chgBit(oldp+271,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                      >> 4U))));
        bufp->chgBit(oldp+272,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout))));
        bufp->chgBit(oldp+273,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout));
        bufp->chgBit(oldp+274,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                      >> 5U))));
        bufp->chgBit(oldp+275,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout))));
        bufp->chgBit(oldp+276,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout));
        bufp->chgBit(oldp+277,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                      >> 6U))));
        bufp->chgBit(oldp+278,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout))));
        bufp->chgBit(oldp+279,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout));
        bufp->chgBit(oldp+280,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                      >> 7U))));
        bufp->chgBit(oldp+281,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout))));
        bufp->chgBit(oldp+282,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout));
        bufp->chgBit(oldp+283,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                      >> 8U))));
        bufp->chgBit(oldp+284,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout))));
        bufp->chgIData(oldp+285,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellinp__ext__instr),25);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgIData(oldp+286,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUResult),32);
        bufp->chgBit(oldp+287,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__bru__DOT__cond));
        bufp->chgBit(oldp+288,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__bru__DOT__Carry));
        bufp->chgBit(oldp+289,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__Neg));
        bufp->chgBit(oldp+290,((0xffffffffU == (~ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUResult))));
        bufp->chgIData(oldp+291,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__SrcB),32);
        bufp->chgIData(oldp+292,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b),32);
        bufp->chgIData(oldp+293,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sum),32);
        bufp->chgIData(oldp+294,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[0]),32);
        bufp->chgIData(oldp+295,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[1]),32);
        bufp->chgIData(oldp+296,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[2]),32);
        bufp->chgIData(oldp+297,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[3]),32);
        bufp->chgIData(oldp+298,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[4]),32);
        bufp->chgIData(oldp+299,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[5]),32);
        bufp->chgIData(oldp+300,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[6]),32);
        bufp->chgIData(oldp+301,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[7]),32);
        bufp->chgIData(oldp+302,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[8]),32);
        bufp->chgIData(oldp+303,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[9]),32);
        bufp->chgIData(oldp+304,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[10]),32);
        bufp->chgIData(oldp+305,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[11]),32);
        bufp->chgIData(oldp+306,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[12]),32);
        bufp->chgIData(oldp+307,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[13]),32);
        bufp->chgIData(oldp+308,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[14]),32);
        bufp->chgIData(oldp+309,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[15]),32);
        bufp->chgIData(oldp+310,((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a32__cout) 
                                   << 0x1fU) | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a31__cout) 
                                                 << 0x1eU) 
                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a30__cout) 
                                                    << 0x1dU) 
                                                   | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a29__cout) 
                                                       << 0x1cU) 
                                                      | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a28__cout) 
                                                          << 0x1bU) 
                                                         | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a27__cout) 
                                                             << 0x1aU) 
                                                            | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a26__cout) 
                                                                << 0x19U) 
                                                               | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a25__cout) 
                                                                   << 0x18U) 
                                                                  | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a24__cout) 
                                                                      << 0x17U) 
                                                                     | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a23__cout) 
                                                                         << 0x16U) 
                                                                        | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a22__cout) 
                                                                            << 0x15U) 
                                                                           | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a21__cout) 
                                                                               << 0x14U) 
                                                                              | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a20__cout) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a19__cout) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a18__cout) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a17__cout) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a16__cout) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a15__cout) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a14__cout) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a13__cout) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a12__cout) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a11__cout) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a10__cout) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a9__cout) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a8__cout) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a7__cout) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a6__cout) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a5__cout) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a4__cout) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a3__cout) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a2__cout) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a1__cout))))))))))))))))))))))))))))))))),32);
        bufp->chgBit(oldp+311,((1U & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b)));
        bufp->chgBit(oldp+312,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a1__cout));
        bufp->chgBit(oldp+313,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 9U))));
        bufp->chgBit(oldp+314,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a9__cout));
        bufp->chgBit(oldp+315,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a9__cout))));
        bufp->chgBit(oldp+316,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a10__cout));
        bufp->chgBit(oldp+317,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 0xaU))));
        bufp->chgBit(oldp+318,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a10__cout))));
        bufp->chgBit(oldp+319,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a11__cout));
        bufp->chgBit(oldp+320,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 0xbU))));
        bufp->chgBit(oldp+321,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a11__cout))));
        bufp->chgBit(oldp+322,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a12__cout));
        bufp->chgBit(oldp+323,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 0xcU))));
        bufp->chgBit(oldp+324,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a12__cout))));
        bufp->chgBit(oldp+325,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a13__cout));
        bufp->chgBit(oldp+326,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 0xdU))));
        bufp->chgBit(oldp+327,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a13__cout))));
        bufp->chgBit(oldp+328,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a14__cout));
        bufp->chgBit(oldp+329,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 0xeU))));
        bufp->chgBit(oldp+330,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a14__cout))));
        bufp->chgBit(oldp+331,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a15__cout));
        bufp->chgBit(oldp+332,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 0xfU))));
        bufp->chgBit(oldp+333,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a15__cout))));
        bufp->chgBit(oldp+334,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a16__cout));
        bufp->chgBit(oldp+335,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 0x10U))));
        bufp->chgBit(oldp+336,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a16__cout))));
        bufp->chgBit(oldp+337,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a17__cout));
        bufp->chgBit(oldp+338,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 0x11U))));
        bufp->chgBit(oldp+339,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a17__cout))));
        bufp->chgBit(oldp+340,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a18__cout));
        bufp->chgBit(oldp+341,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 0x12U))));
        bufp->chgBit(oldp+342,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a18__cout))));
        bufp->chgBit(oldp+343,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a19__cout));
        bufp->chgBit(oldp+344,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 1U))));
        bufp->chgBit(oldp+345,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a1__cout))));
        bufp->chgBit(oldp+346,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a2__cout));
        bufp->chgBit(oldp+347,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 0x13U))));
        bufp->chgBit(oldp+348,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a19__cout))));
        bufp->chgBit(oldp+349,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a20__cout));
        bufp->chgBit(oldp+350,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 0x14U))));
        bufp->chgBit(oldp+351,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a20__cout))));
        bufp->chgBit(oldp+352,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a21__cout));
        bufp->chgBit(oldp+353,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 0x15U))));
        bufp->chgBit(oldp+354,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a21__cout))));
        bufp->chgBit(oldp+355,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a22__cout));
        bufp->chgBit(oldp+356,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 0x16U))));
        bufp->chgBit(oldp+357,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a22__cout))));
        bufp->chgBit(oldp+358,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a23__cout));
        bufp->chgBit(oldp+359,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 0x17U))));
        bufp->chgBit(oldp+360,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a23__cout))));
        bufp->chgBit(oldp+361,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a24__cout));
        bufp->chgBit(oldp+362,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 0x18U))));
        bufp->chgBit(oldp+363,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a24__cout))));
        bufp->chgBit(oldp+364,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a25__cout));
        bufp->chgBit(oldp+365,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+366,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a25__cout))));
        bufp->chgBit(oldp+367,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a26__cout));
        bufp->chgBit(oldp+368,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+369,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a26__cout))));
        bufp->chgBit(oldp+370,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a27__cout));
        bufp->chgBit(oldp+371,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+372,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a27__cout))));
        bufp->chgBit(oldp+373,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a28__cout));
        bufp->chgBit(oldp+374,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+375,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a28__cout))));
        bufp->chgBit(oldp+376,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a29__cout));
        bufp->chgBit(oldp+377,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 2U))));
        bufp->chgBit(oldp+378,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a2__cout))));
        bufp->chgBit(oldp+379,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a3__cout));
        bufp->chgBit(oldp+380,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+381,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a29__cout))));
        bufp->chgBit(oldp+382,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a30__cout));
        bufp->chgBit(oldp+383,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+384,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a30__cout))));
        bufp->chgBit(oldp+385,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a31__cout));
        bufp->chgBit(oldp+386,((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                >> 0x1fU)));
        bufp->chgBit(oldp+387,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a32__cout));
        bufp->chgBit(oldp+388,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 3U))));
        bufp->chgBit(oldp+389,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a3__cout))));
        bufp->chgBit(oldp+390,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a4__cout));
        bufp->chgBit(oldp+391,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 4U))));
        bufp->chgBit(oldp+392,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a4__cout))));
        bufp->chgBit(oldp+393,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a5__cout));
        bufp->chgBit(oldp+394,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 5U))));
        bufp->chgBit(oldp+395,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a5__cout))));
        bufp->chgBit(oldp+396,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a6__cout));
        bufp->chgBit(oldp+397,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 6U))));
        bufp->chgBit(oldp+398,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a6__cout))));
        bufp->chgBit(oldp+399,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a7__cout));
        bufp->chgBit(oldp+400,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 7U))));
        bufp->chgBit(oldp+401,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a7__cout))));
        bufp->chgBit(oldp+402,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a8__cout));
        bufp->chgBit(oldp+403,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 8U))));
        bufp->chgBit(oldp+404,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a8__cout))));
        bufp->chgIData(oldp+405,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__and1__y),32);
        bufp->chgIData(oldp+406,((~ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__SrcB)),32);
        bufp->chgIData(oldp+407,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                                 [0U]),32);
        bufp->chgIData(oldp+408,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                                 [1U]),32);
        bufp->chgIData(oldp+409,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__or1__y),32);
        bufp->chgIData(oldp+410,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__xor1__y),32);
        bufp->chgIData(oldp+411,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                                 [5U]),32);
        bufp->chgIData(oldp+412,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift5),32);
        bufp->chgIData(oldp+413,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift5),32);
        bufp->chgIData(oldp+414,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift5),32);
        bufp->chgIData(oldp+415,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                                 [9U]),32);
        bufp->chgIData(oldp+416,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                                 [0xaU]),32);
        bufp->chgIData(oldp+417,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                                 [0xbU]),32);
        bufp->chgIData(oldp+418,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                                 [0xcU]),32);
        bufp->chgIData(oldp+419,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                                 [0xdU]),32);
        bufp->chgIData(oldp+420,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                                 [0xeU]),32);
        bufp->chgIData(oldp+421,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                                 [0xfU]),32);
        bufp->chgCData(oldp+422,((0x1fU & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__SrcB)),5);
        bufp->chgIData(oldp+423,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift1),32);
        bufp->chgIData(oldp+424,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift2),32);
        bufp->chgIData(oldp+425,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift3),32);
        bufp->chgIData(oldp+426,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift4),32);
        bufp->chgIData(oldp+427,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift1),32);
        bufp->chgIData(oldp+428,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift2),32);
        bufp->chgIData(oldp+429,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift3),32);
        bufp->chgIData(oldp+430,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift4),32);
        bufp->chgIData(oldp+431,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift1),32);
        bufp->chgIData(oldp+432,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift2),32);
        bufp->chgIData(oldp+433,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift3),32);
        bufp->chgIData(oldp+434,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift4),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgIData(oldp+435,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__WriteData),32);
        bufp->chgIData(oldp+436,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ReadData),32);
        bufp->chgIData(oldp+437,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ReadData_result),32);
    }
    bufp->chgBit(oldp+438,(vlSelf->top_tb__DOT__clk));
    bufp->chgBit(oldp+439,(vlSelf->top_tb__DOT__rst));
    bufp->chgIData(oldp+440,(vlSelf->top_tb__DOT__cycle_count),32);
    bufp->chgIData(oldp+441,(vlSelf->top_tb__DOT__dut__DOT__dm__DOT__RAM
                             [(0x3fU & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUResult 
                                        >> 2U))]),32);
    bufp->chgCData(oldp+442,(((2U & ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                     << 1U)) | (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCmux__DOT____VdfgRegularize_hae03c8cc_0_0))),2);
    bufp->chgCData(oldp+443,(((((~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUControl) 
                                    ^ ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                        ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__SrcB) 
                                       >> 0x1fU))) 
                                << 3U) & (((8U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                                  >> 0x1cU)) 
                                           ^ ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__Neg) 
                                              << 3U)) 
                                          & ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__isAddSub) 
                                             << 3U))) 
                              | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__bru__DOT__Carry) 
                                  << 2U) | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__Neg) 
                                             << 1U) 
                                            | (0xffffffffU 
                                               == (~ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUResult)))))),4);
    bufp->chgBit(oldp+444,(((~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUControl) 
                                ^ ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                    ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__SrcB) 
                                   >> 0x1fU))) & ((
                                                   (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                                    >> 0x1fU) 
                                                   ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__Neg)) 
                                                  & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__isAddSub)))));
    bufp->chgIData(oldp+445,(((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                               ? ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCmux__DOT____VdfgRegularize_hae03c8cc_0_0)
                                   ? 0U : vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUResult)
                               : ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCmux__DOT____VdfgRegularize_hae03c8cc_0_0)
                                   ? ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                        ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout)) 
                                       << 0x1fU) | 
                                      ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                         ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout)) 
                                        << 0x1eU) | 
                                       ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                          ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout)) 
                                         << 0x1dU) 
                                        | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout)) 
                                            << 0x1cU) 
                                           | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout)) 
                                               << 0x1bU) 
                                              | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                   ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout)) 
                                                  << 0x1aU) 
                                                 | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                      ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout)) 
                                                     << 0x19U) 
                                                    | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                         ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout)) 
                                                        << 0x18U) 
                                                       | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                            ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout)) 
                                                           << 0x17U) 
                                                          | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                               ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout)) 
                                                              << 0x16U) 
                                                             | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                  ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout)) 
                                                                 << 0x15U) 
                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                     ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout)) 
                                                                    << 0x14U) 
                                                                   | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                        ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout)) 
                                                                       << 0x13U) 
                                                                      | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                           ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout)) 
                                                                          << 0x12U) 
                                                                         | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                              ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout)) 
                                                                             << 0x11U) 
                                                                            | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout)) 
                                                                                << 0x10U) 
                                                                               | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout)) 
                                                                                << 0xfU) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout)) 
                                                                                << 0xeU) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout)) 
                                                                                << 0xdU) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout)) 
                                                                                << 0xcU) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout)) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout)) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout)) 
                                                                                << 9U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout)) 
                                                                                << 8U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout)) 
                                                                                << 7U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout)) 
                                                                                << 6U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout)) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout)) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout)) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout)) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a1__cout)) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                                                                ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt)))))))))))))))))))))))))))))))))
                                   : vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCPlus4))),32);
    bufp->chgIData(oldp+446,(((0x40U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                               ? ((0x20U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                                   ? 0U : vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCPlus4)
                               : ((0x20U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                                   ? vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ReadData_result
                                   : vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUResult))),32);
    bufp->chgBit(oldp+447,((1U & ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a32__cout) 
                                  ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUControl)))));
    bufp->chgBit(oldp+448,((1U & ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a1__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                  ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUControl)))));
}

void Vtop_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_cleanup\n"); );
    // Init
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
