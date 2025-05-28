// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<5>/*159:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<7>/*223:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<5>/*159:0*/ __Vtemp_14;
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[0]),32);
        bufp->chgIData(oldp+1,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[1]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[2]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[3]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[4]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[5]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[6]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[7]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[8]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[9]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[10]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[11]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[12]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[13]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[14]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[15]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[16]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[17]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[18]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[19]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[20]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[21]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[22]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[23]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[24]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[25]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[26]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[27]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[28]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[29]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[30]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[31]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+32,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                                     >> 0xdU))));
        bufp->chgCData(oldp+33,((0x1fU & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U])),5);
        bufp->chgBit(oldp+34,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[4U] 
                                     >> 7U))));
        bufp->chgCData(oldp+35,((0x1fU & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[2U])),5);
        bufp->chgIData(oldp+36,(((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                                  << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                               >> 5U))),32);
        bufp->chgBit(oldp+37,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                                     >> 0xaU))));
        bufp->chgIData(oldp+38,(vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[1U]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[0U]),32);
        bufp->chgCData(oldp+40,((3U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                                       >> 0xbU))),2);
        bufp->chgCData(oldp+41,((0x1fU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                                          >> 5U))),5);
        bufp->chgIData(oldp+42,(((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                  << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                               >> 5U))),32);
        bufp->chgCData(oldp+43,((3U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[4U] 
                                       >> 5U))),2);
        bufp->chgIData(oldp+44,(((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[4U] 
                                  << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                               >> 5U))),32);
        bufp->chgIData(oldp+45,(((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                  << 0x1bU) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[2U] 
                                               >> 5U))),32);
        bufp->chgIData(oldp+46,(vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[1U]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q[0U]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ResultW),32);
        bufp->chgWData(oldp+49,(vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q),142);
        bufp->chgWData(oldp+54,(vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q),136);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        __Vtemp_5[0U] = vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[0U];
        __Vtemp_5[1U] = vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[1U];
        __Vtemp_5[2U] = (((IData)((((QData)((IData)(
                                                    ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                                                      << 0x1bU) 
                                                     | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                                        >> 5U)))) 
                                    << 0x20U) | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel)))) 
                          << 5U) | (0x1fU & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[2U]));
        __Vtemp_5[3U] = (((IData)((((QData)((IData)(
                                                    ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                                                      << 0x1bU) 
                                                     | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                                        >> 5U)))) 
                                    << 0x20U) | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel)))) 
                          >> 0x1bU) | ((IData)(((((QData)((IData)(
                                                                  ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                                                                    << 0x1bU) 
                                                                   | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                                                      >> 5U)))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel))) 
                                                >> 0x20U)) 
                                       << 5U));
        __Vtemp_5[4U] = ((0xe0U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                                   >> 6U)) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                                                                           << 0x1bU) 
                                                                          | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                                                             >> 5U)))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel))) 
                                                       >> 0x20U)) 
                                              >> 0x1bU));
        bufp->chgWData(oldp+59,(__Vtemp_5),136);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        __Vtemp_7[2U] = (((IData)((((QData)((IData)(
                                                    (((0x100U 
                                                       & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                          << 1U)) 
                                                      | ((0xc0U 
                                                          & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                             << 6U)) 
                                                         | (0x20U 
                                                            & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                               << 1U)))) 
                                                     | (((IData)(vlSelfRef.top__DOT__proc__DOT__ALUControlD) 
                                                         << 1U) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                              >> 8U)))))) 
                                    << 0x28U) | (((QData)((IData)(
                                                                  (7U 
                                                                   & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                                      >> 0xcU)))) 
                                                  << 0x25U) 
                                                 | (((QData)((IData)(vlSelfRef.top__DOT__proc__DOT__LSTypeD)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__rd1)))))) 
                          << 0xfU) | ((IData)(((((QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__rd2)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[1U]))) 
                                               >> 0x20U)) 
                                      >> 0x11U));
        __Vtemp_7[3U] = (((IData)((((QData)((IData)(
                                                    (((0x100U 
                                                       & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                          << 1U)) 
                                                      | ((0xc0U 
                                                          & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                             << 6U)) 
                                                         | (0x20U 
                                                            & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                               << 1U)))) 
                                                     | (((IData)(vlSelfRef.top__DOT__proc__DOT__ALUControlD) 
                                                         << 1U) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                              >> 8U)))))) 
                                    << 0x28U) | (((QData)((IData)(
                                                                  (7U 
                                                                   & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                                      >> 0xcU)))) 
                                                  << 0x25U) 
                                                 | (((QData)((IData)(vlSelfRef.top__DOT__proc__DOT__LSTypeD)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__rd1)))))) 
                          >> 0x11U) | ((IData)(((((QData)((IData)(
                                                                  (((0x100U 
                                                                     & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                                        << 1U)) 
                                                                    | ((0xc0U 
                                                                        & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                                           << 6U)) 
                                                                       | (0x20U 
                                                                          & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                                             << 1U)))) 
                                                                   | (((IData)(vlSelfRef.top__DOT__proc__DOT__ALUControlD) 
                                                                       << 1U) 
                                                                      | (1U 
                                                                         & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                                                            >> 8U)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (7U 
                                                                      & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                                         >> 0xcU)))) 
                                                     << 0x25U) 
                                                    | (((QData)((IData)(vlSelfRef.top__DOT__proc__DOT__LSTypeD)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__rd1))))) 
                                                >> 0x20U)) 
                                       << 0xfU));
        __Vtemp_10[0U] = vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[0U];
        __Vtemp_10[1U] = vlSelfRef.top__DOT__proc__DOT__dp__DOT__ImmExtD;
        __Vtemp_10[2U] = (((IData)((((QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__rd2)) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[1U])))) 
                           << 0xfU) | ((0x7c00U & (
                                                   vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                   >> 5U)) 
                                       | ((0x3e0U & 
                                           (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                            >> 0xfU)) 
                                          | (0x1fU 
                                             & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                >> 7U)))));
        __Vtemp_10[3U] = (((IData)((((QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__rd2)) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[1U])))) 
                           >> 0x11U) | ((IData)(((((QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__rd2)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[1U]))) 
                                                 >> 0x20U)) 
                                        << 0xfU));
        __Vtemp_10[4U] = __Vtemp_7[2U];
        __Vtemp_10[5U] = __Vtemp_7[3U];
        __Vtemp_10[6U] = ((4U & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                 >> 0xaU)) | (3U & 
                                              ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                               >> 5U)));
        bufp->chgWData(oldp+64,(__Vtemp_10),195);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+71,((1U & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                     >> 0xcU))));
        bufp->chgBit(oldp+72,((1U & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                     >> 7U))));
        bufp->chgBit(oldp+73,((1U & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                     >> 1U))));
        bufp->chgBit(oldp+74,((1U & (IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))));
        bufp->chgBit(oldp+75,((1U & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                     >> 4U))));
        bufp->chgBit(oldp+76,((1U & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                     >> 8U))));
        bufp->chgCData(oldp+77,(vlSelfRef.top__DOT__proc__DOT__ALUControlD),4);
        bufp->chgCData(oldp+78,((3U & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                       >> 5U))),2);
        bufp->chgCData(oldp+79,((7U & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                       >> 9U))),3);
        bufp->chgCData(oldp+80,(vlSelfRef.top__DOT__proc__DOT__LSTypeD),5);
        bufp->chgCData(oldp+81,((0x7fU & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])),7);
        bufp->chgCData(oldp+82,((7U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+83,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                     >> 0x1eU))));
        bufp->chgSData(oldp+84,((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                 >> 0x14U)),12);
        bufp->chgBit(oldp+85,((1U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[6U])));
        bufp->chgCData(oldp+86,(vlSelfRef.top__DOT__proc__DOT__PCSrcE),2);
        bufp->chgBit(oldp+87,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                     >> 0x1eU))));
        bufp->chgBit(oldp+88,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                     >> 0x1dU))));
        bufp->chgBit(oldp+89,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                     >> 0x1cU))));
        bufp->chgCData(oldp+90,((((((~ ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                         >> 0x18U) 
                                        ^ ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                            ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcBE) 
                                           >> 0x1fU))) 
                                    << 3U) & (((8U 
                                                & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                                   >> 0x1cU)) 
                                               ^ ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__Neg) 
                                                  << 3U)) 
                                              & ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__isAddSub) 
                                                 << 3U))) 
                                  | ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__bru__DOT__Carry) 
                                     << 2U)) | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__Neg) 
                                                 << 1U) 
                                                | (0xffffffffU 
                                                   == 
                                                   (~ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALUResultE))))),4);
        bufp->chgCData(oldp+91,((7U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                       >> 0x14U))),3);
        bufp->chgBit(oldp+92,(vlSelfRef.top__DOT__proc__DOT__StallF));
        bufp->chgBit(oldp+93,((0U != (IData)(vlSelfRef.top__DOT__proc__DOT__PCSrcE))));
        bufp->chgCData(oldp+94,((0x1fU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+95,((0x1fU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                          >> 0x14U))),5);
        bufp->chgBit(oldp+96,(((IData)(vlSelfRef.top__DOT__proc__DOT__StallF) 
                               | (0U != (IData)(vlSelfRef.top__DOT__proc__DOT__PCSrcE)))));
        bufp->chgCData(oldp+97,(vlSelfRef.top__DOT__proc__DOT__ForwardAE),2);
        bufp->chgCData(oldp+98,(vlSelfRef.top__DOT__proc__DOT__ForwardBE),2);
        bufp->chgCData(oldp+99,((0x1fU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                          >> 0xaU))),5);
        bufp->chgCData(oldp+100,((0x1fU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                           >> 5U))),5);
        bufp->chgCData(oldp+101,((0x1fU & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U])),5);
        bufp->chgIData(oldp+102,(vlSelfRef.top__DOT__im__DOT__IMEM
                                 [(0xffU & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                            >> 2U))]),32);
        bufp->chgIData(oldp+103,(vlSelfRef.top__DOT__proc__DOT__pcF),32);
        bufp->chgIData(oldp+104,(vlSelfRef.top__DOT__proc__DOT__ReadDataM),32);
        bufp->chgIData(oldp+105,(vlSelfRef.top__DOT__proc__DOT__WriteDataM),32);
        bufp->chgCData(oldp+106,((3U & ((IData)(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                        >> 2U))),2);
        bufp->chgBit(oldp+107,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                      >> 5U))));
        bufp->chgBit(oldp+108,((IData)((0x40000020U 
                                        == (0x40000020U 
                                            & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U])))));
        bufp->chgBit(oldp+109,(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__bru__DOT__cond));
        bufp->chgBit(oldp+110,(((~ ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                     >> 0x18U) ^ ((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                                   ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcBE) 
                                                  >> 0x1fU))) 
                                & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                     >> 0x1fU) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__Neg)) 
                                   & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__isAddSub)))));
        bufp->chgBit(oldp+111,(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__bru__DOT__Carry));
        bufp->chgBit(oldp+112,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__Neg));
        bufp->chgBit(oldp+113,((0xffffffffU == (~ vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALUResultE))));
        bufp->chgSData(oldp+114,(vlSelfRef.top__DOT__proc__DOT__ctrl__DOT__md__DOT__controls),13);
        bufp->chgIData(oldp+115,(((0x20000000U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U])
                                   ? ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCmux__DOT____VdfgRegularize_hae03c8cc_0_0)
                                       ? 0U : vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALUResultE)
                                   : ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCmux__DOT____VdfgRegularize_hae03c8cc_0_0)
                                       ? vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCTargetE
                                       : vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCPlus4F))),32);
        bufp->chgIData(oldp+116,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCPlus4F),32);
        bufp->chgIData(oldp+117,(vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U]),32);
        bufp->chgIData(oldp+118,(vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[1U]),32);
        bufp->chgIData(oldp+119,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ImmExtD),32);
        bufp->chgIData(oldp+120,(vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[0U]),32);
        bufp->chgCData(oldp+121,((0x1fU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                           >> 7U))),5);
        bufp->chgIData(oldp+122,(((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                   << 0x11U) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[4U] 
                                                >> 0xfU))),32);
        bufp->chgIData(oldp+123,(((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[4U] 
                                   << 0x11U) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                                >> 0xfU))),32);
        bufp->chgIData(oldp+124,(((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                   << 0x11U) | (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                                >> 0xfU))),32);
        bufp->chgIData(oldp+125,(vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U]),32);
        bufp->chgIData(oldp+126,(vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[0U]),32);
        bufp->chgIData(oldp+127,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCTargetE),32);
        bufp->chgIData(oldp+128,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE),32);
        bufp->chgIData(oldp+129,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcBE),32);
        bufp->chgIData(oldp+130,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALUResultE),32);
        bufp->chgIData(oldp+131,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__WriteDataE),32);
        bufp->chgBit(oldp+132,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[6U] 
                                      >> 2U))));
        bufp->chgBit(oldp+133,((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+134,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                      >> 0x17U))));
        bufp->chgCData(oldp+135,((3U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[6U])),2);
        bufp->chgCData(oldp+136,((0xfU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+137,((0x1fU & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                           >> 0xfU))),5);
        bufp->chgIData(oldp+138,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ReadDataM_sel),32);
        bufp->chgBit(oldp+139,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout) 
                                & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                   >> 0x1fU))));
        bufp->chgBit(oldp+140,((1U & (((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                        >> 0xeU) & 
                                       (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                        >> 0x1fU)) 
                                      | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout) 
                                         & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0))))));
        bufp->chgBit(oldp+141,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__isAddSub));
        bufp->chgIData(oldp+142,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b),32);
        bufp->chgIData(oldp+143,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sum),32);
        bufp->chgBit(oldp+144,((1U & ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a32__cout) 
                                      ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                         >> 0x18U)))));
        bufp->chgIData(oldp+145,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[0]),32);
        bufp->chgIData(oldp+146,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[1]),32);
        bufp->chgIData(oldp+147,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[2]),32);
        bufp->chgIData(oldp+148,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[3]),32);
        bufp->chgIData(oldp+149,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[4]),32);
        bufp->chgIData(oldp+150,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[5]),32);
        bufp->chgIData(oldp+151,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[6]),32);
        bufp->chgIData(oldp+152,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[7]),32);
        bufp->chgIData(oldp+153,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[8]),32);
        bufp->chgIData(oldp+154,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[9]),32);
        bufp->chgIData(oldp+155,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[10]),32);
        bufp->chgIData(oldp+156,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[11]),32);
        bufp->chgIData(oldp+157,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[12]),32);
        bufp->chgIData(oldp+158,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[13]),32);
        bufp->chgIData(oldp+159,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[14]),32);
        bufp->chgIData(oldp+160,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[15]),32);
        bufp->chgBit(oldp+161,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                      >> 0x18U))));
        bufp->chgIData(oldp+162,((((((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a32__cout) 
                                       << 0x1fU) | 
                                      ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a31__cout) 
                                       << 0x1eU)) | 
                                     (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a30__cout) 
                                       << 0x1dU) | 
                                      ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a29__cout) 
                                       << 0x1cU))) 
                                    | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a28__cout) 
                                         << 0x1bU) 
                                        | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a27__cout) 
                                           << 0x1aU)) 
                                       | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a26__cout) 
                                           << 0x19U) 
                                          | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a25__cout) 
                                             << 0x18U)))) 
                                   | (((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a24__cout) 
                                         << 0x17U) 
                                        | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a23__cout) 
                                           << 0x16U)) 
                                       | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a22__cout) 
                                           << 0x15U) 
                                          | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a21__cout) 
                                             << 0x14U))) 
                                      | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a20__cout) 
                                           << 0x13U) 
                                          | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a19__cout) 
                                             << 0x12U)) 
                                         | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a18__cout) 
                                             << 0x11U) 
                                            | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a17__cout) 
                                               << 0x10U))))) 
                                  | ((((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a16__cout) 
                                         << 0xfU) | 
                                        ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a15__cout) 
                                         << 0xeU)) 
                                       | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a14__cout) 
                                           << 0xdU) 
                                          | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a13__cout) 
                                             << 0xcU))) 
                                      | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a12__cout) 
                                           << 0xbU) 
                                          | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a11__cout) 
                                             << 0xaU)) 
                                         | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a10__cout) 
                                             << 9U) 
                                            | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a9__cout) 
                                               << 8U)))) 
                                     | (((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a8__cout) 
                                           << 7U) | 
                                          ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a7__cout) 
                                           << 6U)) 
                                         | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a6__cout) 
                                             << 5U) 
                                            | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a5__cout) 
                                               << 4U))) 
                                        | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a4__cout) 
                                             << 3U) 
                                            | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a3__cout) 
                                               << 2U)) 
                                           | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a2__cout) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__carry__BRA__0__KET__))))))),32);
        bufp->chgBit(oldp+163,((1U & vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE)));
        bufp->chgBit(oldp+164,((1U & vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b)));
        bufp->chgBit(oldp+165,((1U & ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a1__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                      ^ (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+166,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__carry__BRA__0__KET__));
        bufp->chgBit(oldp+167,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                      >> 9U))));
        bufp->chgBit(oldp+168,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 9U))));
        bufp->chgBit(oldp+169,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a9__cout));
        bufp->chgBit(oldp+170,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a9__cout))));
        bufp->chgBit(oldp+171,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a10__cout));
        bufp->chgBit(oldp+172,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                      >> 0xaU))));
        bufp->chgBit(oldp+173,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 0xaU))));
        bufp->chgBit(oldp+174,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a10__cout))));
        bufp->chgBit(oldp+175,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a11__cout));
        bufp->chgBit(oldp+176,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                      >> 0xbU))));
        bufp->chgBit(oldp+177,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 0xbU))));
        bufp->chgBit(oldp+178,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a11__cout))));
        bufp->chgBit(oldp+179,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a12__cout));
        bufp->chgBit(oldp+180,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                      >> 0xcU))));
        bufp->chgBit(oldp+181,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 0xcU))));
        bufp->chgBit(oldp+182,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a12__cout))));
        bufp->chgBit(oldp+183,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a13__cout));
        bufp->chgBit(oldp+184,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                      >> 0xdU))));
        bufp->chgBit(oldp+185,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 0xdU))));
        bufp->chgBit(oldp+186,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a13__cout))));
        bufp->chgBit(oldp+187,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a14__cout));
        bufp->chgBit(oldp+188,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                      >> 0xeU))));
        bufp->chgBit(oldp+189,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 0xeU))));
        bufp->chgBit(oldp+190,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a14__cout))));
        bufp->chgBit(oldp+191,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a15__cout));
        bufp->chgBit(oldp+192,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                      >> 0xfU))));
        bufp->chgBit(oldp+193,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 0xfU))));
        bufp->chgBit(oldp+194,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a15__cout))));
        bufp->chgBit(oldp+195,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a16__cout));
        bufp->chgBit(oldp+196,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                      >> 0x10U))));
        bufp->chgBit(oldp+197,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 0x10U))));
        bufp->chgBit(oldp+198,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a16__cout))));
        bufp->chgBit(oldp+199,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a17__cout));
        bufp->chgBit(oldp+200,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                      >> 0x11U))));
        bufp->chgBit(oldp+201,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 0x11U))));
        bufp->chgBit(oldp+202,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a17__cout))));
        bufp->chgBit(oldp+203,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a18__cout));
        bufp->chgBit(oldp+204,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                      >> 0x12U))));
        bufp->chgBit(oldp+205,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 0x12U))));
        bufp->chgBit(oldp+206,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a18__cout))));
        bufp->chgBit(oldp+207,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a19__cout));
        bufp->chgBit(oldp+208,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                      >> 1U))));
        bufp->chgBit(oldp+209,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 1U))));
        bufp->chgBit(oldp+210,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__carry__BRA__0__KET__))));
        bufp->chgBit(oldp+211,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a2__cout));
        bufp->chgBit(oldp+212,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                      >> 0x13U))));
        bufp->chgBit(oldp+213,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 0x13U))));
        bufp->chgBit(oldp+214,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a19__cout))));
        bufp->chgBit(oldp+215,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a20__cout));
        bufp->chgBit(oldp+216,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                      >> 0x14U))));
        bufp->chgBit(oldp+217,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 0x14U))));
        bufp->chgBit(oldp+218,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a20__cout))));
        bufp->chgBit(oldp+219,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a21__cout));
        bufp->chgBit(oldp+220,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                      >> 0x15U))));
        bufp->chgBit(oldp+221,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 0x15U))));
        bufp->chgBit(oldp+222,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a21__cout))));
        bufp->chgBit(oldp+223,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a22__cout));
        bufp->chgBit(oldp+224,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                      >> 0x16U))));
        bufp->chgBit(oldp+225,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 0x16U))));
        bufp->chgBit(oldp+226,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a22__cout))));
        bufp->chgBit(oldp+227,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a23__cout));
        bufp->chgBit(oldp+228,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                      >> 0x17U))));
        bufp->chgBit(oldp+229,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 0x17U))));
        bufp->chgBit(oldp+230,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a23__cout))));
        bufp->chgBit(oldp+231,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a24__cout));
        bufp->chgBit(oldp+232,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                      >> 0x18U))));
        bufp->chgBit(oldp+233,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 0x18U))));
        bufp->chgBit(oldp+234,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a24__cout))));
        bufp->chgBit(oldp+235,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a25__cout));
        bufp->chgBit(oldp+236,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                      >> 0x19U))));
        bufp->chgBit(oldp+237,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+238,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a25__cout))));
        bufp->chgBit(oldp+239,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a26__cout));
        bufp->chgBit(oldp+240,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+241,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+242,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a26__cout))));
        bufp->chgBit(oldp+243,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a27__cout));
        bufp->chgBit(oldp+244,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+245,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+246,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a27__cout))));
        bufp->chgBit(oldp+247,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a28__cout));
        bufp->chgBit(oldp+248,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+249,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+250,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a28__cout))));
        bufp->chgBit(oldp+251,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a29__cout));
        bufp->chgBit(oldp+252,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                      >> 2U))));
        bufp->chgBit(oldp+253,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 2U))));
        bufp->chgBit(oldp+254,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a2__cout))));
        bufp->chgBit(oldp+255,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a3__cout));
        bufp->chgBit(oldp+256,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+257,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+258,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a29__cout))));
        bufp->chgBit(oldp+259,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a30__cout));
        bufp->chgBit(oldp+260,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+261,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+262,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a30__cout))));
        bufp->chgBit(oldp+263,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a31__cout));
        bufp->chgBit(oldp+264,((vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                >> 0x1fU)));
        bufp->chgBit(oldp+265,((vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                >> 0x1fU)));
        bufp->chgBit(oldp+266,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a32__cout));
        bufp->chgBit(oldp+267,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                      >> 3U))));
        bufp->chgBit(oldp+268,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 3U))));
        bufp->chgBit(oldp+269,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a3__cout))));
        bufp->chgBit(oldp+270,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a4__cout));
        bufp->chgBit(oldp+271,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                      >> 4U))));
        bufp->chgBit(oldp+272,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 4U))));
        bufp->chgBit(oldp+273,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a4__cout))));
        bufp->chgBit(oldp+274,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a5__cout));
        bufp->chgBit(oldp+275,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                      >> 5U))));
        bufp->chgBit(oldp+276,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 5U))));
        bufp->chgBit(oldp+277,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a5__cout))));
        bufp->chgBit(oldp+278,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a6__cout));
        bufp->chgBit(oldp+279,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                      >> 6U))));
        bufp->chgBit(oldp+280,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 6U))));
        bufp->chgBit(oldp+281,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a6__cout))));
        bufp->chgBit(oldp+282,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a7__cout));
        bufp->chgBit(oldp+283,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                      >> 7U))));
        bufp->chgBit(oldp+284,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 7U))));
        bufp->chgBit(oldp+285,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a7__cout))));
        bufp->chgBit(oldp+286,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a8__cout));
        bufp->chgBit(oldp+287,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcAE 
                                      >> 8U))));
        bufp->chgBit(oldp+288,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                      >> 8U))));
        bufp->chgBit(oldp+289,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a8__cout))));
        bufp->chgIData(oldp+290,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__and1__y),32);
        bufp->chgIData(oldp+291,((~ vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcBE)),32);
        bufp->chgIData(oldp+292,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                                 [0U]),32);
        bufp->chgIData(oldp+293,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                                 [1U]),32);
        bufp->chgIData(oldp+294,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__or1__y),32);
        bufp->chgIData(oldp+295,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__xor1__y),32);
        bufp->chgIData(oldp+296,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                                 [5U]),32);
        bufp->chgIData(oldp+297,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift5),32);
        bufp->chgIData(oldp+298,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift5),32);
        bufp->chgIData(oldp+299,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift5),32);
        bufp->chgIData(oldp+300,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                                 [9U]),32);
        bufp->chgIData(oldp+301,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                                 [0xaU]),32);
        bufp->chgIData(oldp+302,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                                 [0xbU]),32);
        bufp->chgIData(oldp+303,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                                 [0xcU]),32);
        bufp->chgIData(oldp+304,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                                 [0xdU]),32);
        bufp->chgIData(oldp+305,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                                 [0xeU]),32);
        bufp->chgIData(oldp+306,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                                 [0xfU]),32);
        bufp->chgCData(oldp+307,((0x1fU & vlSelfRef.top__DOT__proc__DOT__dp__DOT__SrcBE)),5);
        bufp->chgIData(oldp+308,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift1),32);
        bufp->chgIData(oldp+309,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift2),32);
        bufp->chgIData(oldp+310,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift3),32);
        bufp->chgIData(oldp+311,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift4),32);
        bufp->chgIData(oldp+312,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift1),32);
        bufp->chgIData(oldp+313,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift2),32);
        bufp->chgIData(oldp+314,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift3),32);
        bufp->chgIData(oldp+315,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift4),32);
        bufp->chgIData(oldp+316,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift1),32);
        bufp->chgIData(oldp+317,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift2),32);
        bufp->chgIData(oldp+318,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift3),32);
        bufp->chgIData(oldp+319,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift4),32);
        bufp->chgBit(oldp+320,((1U & (~ (IData)(vlSelfRef.top__DOT__proc__DOT__StallF)))));
        __Vtemp_11[0U] = vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCPlus4F;
        __Vtemp_11[1U] = (IData)((((QData)((IData)(
                                                   vlSelfRef.top__DOT__im__DOT__IMEM
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                                       >> 2U))])) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__pcF))));
        __Vtemp_11[2U] = (IData)(((((QData)((IData)(
                                                    vlSelfRef.top__DOT__im__DOT__IMEM
                                                    [
                                                    (0xffU 
                                                     & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                                        >> 2U))])) 
                                    << 0x20U) | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__pcF))) 
                                  >> 0x20U));
        bufp->chgWData(oldp+321,(__Vtemp_11),96);
        bufp->chgWData(oldp+324,(vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q),96);
        bufp->chgWData(oldp+327,(vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q),195);
        __Vtemp_14[0U] = (IData)((((QData)((IData)(
                                                   vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[0U])) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCTargetE))));
        __Vtemp_14[1U] = (IData)(((((QData)((IData)(
                                                    vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[0U])) 
                                    << 0x20U) | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCTargetE))) 
                                  >> 0x20U));
        __Vtemp_14[2U] = (((IData)((((QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALUResultE)) 
                                     << 0x20U) | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__WriteDataE)))) 
                           << 5U) | (0x1fU & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U]));
        __Vtemp_14[3U] = (((IData)((((QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALUResultE)) 
                                     << 0x20U) | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__WriteDataE)))) 
                           >> 0x1bU) | ((IData)(((((QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALUResultE)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__WriteDataE))) 
                                                 >> 0x20U)) 
                                        << 5U));
        __Vtemp_14[4U] = ((0xffffffe0U & ((0x3c00U 
                                           & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[6U] 
                                               << 0xbU) 
                                              | (0x400U 
                                                 & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                                    >> 0x15U)))) 
                                          | (0x3e0U 
                                             & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                                >> 0xaU)))) 
                          | ((IData)(((((QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__ALUResultE)) 
                                        << 0x20U) | (QData)((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__WriteDataE))) 
                                      >> 0x20U)) >> 0x1bU));
        bufp->chgWData(oldp+334,(__Vtemp_14),142);
        bufp->chgIData(oldp+339,(((((((0x80000000U 
                                       & (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout) 
                                           << 0x1fU) 
                                          & vlSelfRef.top__DOT__proc__DOT__pcF)) 
                                      | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout) 
                                         << 0x1eU)) 
                                     | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a30__cout) 
                                         << 0x1dU) 
                                        | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a29__cout) 
                                           << 0x1cU))) 
                                    | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a28__cout) 
                                         << 0x1bU) 
                                        | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a27__cout) 
                                           << 0x1aU)) 
                                       | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a26__cout) 
                                           << 0x19U) 
                                          | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a25__cout) 
                                             << 0x18U)))) 
                                   | (((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a24__cout) 
                                         << 0x17U) 
                                        | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a23__cout) 
                                           << 0x16U)) 
                                       | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a22__cout) 
                                           << 0x15U) 
                                          | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a21__cout) 
                                             << 0x14U))) 
                                      | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a20__cout) 
                                           << 0x13U) 
                                          | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a19__cout) 
                                             << 0x12U)) 
                                         | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a18__cout) 
                                             << 0x11U) 
                                            | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a17__cout) 
                                               << 0x10U))))) 
                                  | ((((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a16__cout) 
                                         << 0xfU) | 
                                        ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a15__cout) 
                                         << 0xeU)) 
                                       | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a14__cout) 
                                           << 0xdU) 
                                          | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a13__cout) 
                                             << 0xcU))) 
                                      | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a12__cout) 
                                           << 0xbU) 
                                          | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a11__cout) 
                                             << 0xaU)) 
                                         | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a10__cout) 
                                             << 9U) 
                                            | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a9__cout) 
                                               << 8U)))) 
                                     | (((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a8__cout) 
                                           << 7U) | 
                                          ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a7__cout) 
                                           << 6U)) 
                                         | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a6__cout) 
                                             << 5U) 
                                            | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a5__cout) 
                                               << 4U))) 
                                        | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a4__cout) 
                                            << 3U) 
                                           | (4U & vlSelfRef.top__DOT__proc__DOT__pcF)))))),32);
        bufp->chgBit(oldp+340,((1U & vlSelfRef.top__DOT__proc__DOT__pcF)));
        bufp->chgBit(oldp+341,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                      >> 9U))));
        bufp->chgBit(oldp+342,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a9__cout));
        bufp->chgBit(oldp+343,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                       >> 9U) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a9__cout)))));
        bufp->chgBit(oldp+344,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a10__cout));
        bufp->chgBit(oldp+345,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                      >> 0xaU))));
        bufp->chgBit(oldp+346,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                       >> 0xaU) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a10__cout)))));
        bufp->chgBit(oldp+347,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a11__cout));
        bufp->chgBit(oldp+348,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                      >> 0xbU))));
        bufp->chgBit(oldp+349,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                       >> 0xbU) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a11__cout)))));
        bufp->chgBit(oldp+350,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a12__cout));
        bufp->chgBit(oldp+351,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                      >> 0xcU))));
        bufp->chgBit(oldp+352,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                       >> 0xcU) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a12__cout)))));
        bufp->chgBit(oldp+353,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a13__cout));
        bufp->chgBit(oldp+354,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                      >> 0xdU))));
        bufp->chgBit(oldp+355,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                       >> 0xdU) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a13__cout)))));
        bufp->chgBit(oldp+356,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a14__cout));
        bufp->chgBit(oldp+357,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                      >> 0xeU))));
        bufp->chgBit(oldp+358,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                       >> 0xeU) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a14__cout)))));
        bufp->chgBit(oldp+359,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a15__cout));
        bufp->chgBit(oldp+360,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                      >> 0xfU))));
        bufp->chgBit(oldp+361,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                       >> 0xfU) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a15__cout)))));
        bufp->chgBit(oldp+362,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a16__cout));
        bufp->chgBit(oldp+363,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                      >> 0x10U))));
        bufp->chgBit(oldp+364,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                       >> 0x10U) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a16__cout)))));
        bufp->chgBit(oldp+365,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a17__cout));
        bufp->chgBit(oldp+366,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                      >> 0x11U))));
        bufp->chgBit(oldp+367,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                       >> 0x11U) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a17__cout)))));
        bufp->chgBit(oldp+368,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a18__cout));
        bufp->chgBit(oldp+369,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                      >> 0x12U))));
        bufp->chgBit(oldp+370,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                       >> 0x12U) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a18__cout)))));
        bufp->chgBit(oldp+371,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a19__cout));
        bufp->chgBit(oldp+372,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                      >> 1U))));
        bufp->chgBit(oldp+373,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                      >> 0x13U))));
        bufp->chgBit(oldp+374,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                       >> 0x13U) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a19__cout)))));
        bufp->chgBit(oldp+375,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a20__cout));
        bufp->chgBit(oldp+376,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                      >> 0x14U))));
        bufp->chgBit(oldp+377,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                       >> 0x14U) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a20__cout)))));
        bufp->chgBit(oldp+378,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a21__cout));
        bufp->chgBit(oldp+379,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                      >> 0x15U))));
        bufp->chgBit(oldp+380,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                       >> 0x15U) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a21__cout)))));
        bufp->chgBit(oldp+381,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a22__cout));
        bufp->chgBit(oldp+382,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                      >> 0x16U))));
        bufp->chgBit(oldp+383,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                       >> 0x16U) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a22__cout)))));
        bufp->chgBit(oldp+384,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a23__cout));
        bufp->chgBit(oldp+385,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                      >> 0x17U))));
        bufp->chgBit(oldp+386,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                       >> 0x17U) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a23__cout)))));
        bufp->chgBit(oldp+387,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a24__cout));
        bufp->chgBit(oldp+388,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                      >> 0x18U))));
        bufp->chgBit(oldp+389,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                       >> 0x18U) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a24__cout)))));
        bufp->chgBit(oldp+390,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a25__cout));
        bufp->chgBit(oldp+391,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                      >> 0x19U))));
        bufp->chgBit(oldp+392,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                       >> 0x19U) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a25__cout)))));
        bufp->chgBit(oldp+393,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a26__cout));
        bufp->chgBit(oldp+394,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+395,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                       >> 0x1aU) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a26__cout)))));
        bufp->chgBit(oldp+396,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a27__cout));
        bufp->chgBit(oldp+397,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+398,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                       >> 0x1bU) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a27__cout)))));
        bufp->chgBit(oldp+399,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a28__cout));
        bufp->chgBit(oldp+400,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+401,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                       >> 0x1cU) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a28__cout)))));
        bufp->chgBit(oldp+402,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a29__cout));
        bufp->chgBit(oldp+403,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                      >> 2U))));
        bufp->chgBit(oldp+404,((1U & (~ (vlSelfRef.top__DOT__proc__DOT__pcF 
                                         >> 2U)))));
        bufp->chgBit(oldp+405,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+406,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                       >> 0x1dU) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a29__cout)))));
        bufp->chgBit(oldp+407,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a30__cout));
        bufp->chgBit(oldp+408,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+409,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                       >> 0x1eU) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a30__cout)))));
        bufp->chgBit(oldp+410,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout));
        bufp->chgBit(oldp+411,((vlSelfRef.top__DOT__proc__DOT__pcF 
                                >> 0x1fU)));
        bufp->chgBit(oldp+412,(((vlSelfRef.top__DOT__proc__DOT__pcF 
                                 >> 0x1fU) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout))));
        bufp->chgBit(oldp+413,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                      >> 3U))));
        bufp->chgBit(oldp+414,((1U & VL_REDXOR_4((0xcU 
                                                  & vlSelfRef.top__DOT__proc__DOT__pcF)))));
        bufp->chgBit(oldp+415,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a4__cout));
        bufp->chgBit(oldp+416,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                      >> 4U))));
        bufp->chgBit(oldp+417,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                       >> 4U) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a4__cout)))));
        bufp->chgBit(oldp+418,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a5__cout));
        bufp->chgBit(oldp+419,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                      >> 5U))));
        bufp->chgBit(oldp+420,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                       >> 5U) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a5__cout)))));
        bufp->chgBit(oldp+421,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a6__cout));
        bufp->chgBit(oldp+422,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                      >> 6U))));
        bufp->chgBit(oldp+423,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                       >> 6U) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a6__cout)))));
        bufp->chgBit(oldp+424,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a7__cout));
        bufp->chgBit(oldp+425,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                      >> 7U))));
        bufp->chgBit(oldp+426,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                       >> 7U) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a7__cout)))));
        bufp->chgBit(oldp+427,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a8__cout));
        bufp->chgBit(oldp+428,((1U & (vlSelfRef.top__DOT__proc__DOT__pcF 
                                      >> 8U))));
        bufp->chgBit(oldp+429,((1U & ((vlSelfRef.top__DOT__proc__DOT__pcF 
                                       >> 8U) ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a8__cout)))));
        bufp->chgIData(oldp+430,(((((((0x80000000U 
                                       & ((0x80000000U 
                                           & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                               << 0x11U) 
                                              & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U])) 
                                          | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout) 
                                              & (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0)) 
                                             << 0x1fU))) 
                                      | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout) 
                                         << 0x1eU)) 
                                     | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout) 
                                         << 0x1dU) 
                                        | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout) 
                                           << 0x1cU))) 
                                    | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout) 
                                         << 0x1bU) 
                                        | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout) 
                                           << 0x1aU)) 
                                       | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout) 
                                           << 0x19U) 
                                          | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout) 
                                             << 0x18U)))) 
                                   | (((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout) 
                                         << 0x17U) 
                                        | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout) 
                                           << 0x16U)) 
                                       | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout) 
                                           << 0x15U) 
                                          | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout) 
                                             << 0x14U))) 
                                      | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout) 
                                           << 0x13U) 
                                          | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout) 
                                             << 0x12U)) 
                                         | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout) 
                                             << 0x11U) 
                                            | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout) 
                                               << 0x10U))))) 
                                  | ((((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout) 
                                         << 0xfU) | 
                                        ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout) 
                                         << 0xeU)) 
                                       | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout) 
                                           << 0xdU) 
                                          | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout) 
                                             << 0xcU))) 
                                      | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout) 
                                           << 0xbU) 
                                          | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout) 
                                             << 0xaU)) 
                                         | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout) 
                                             << 9U) 
                                            | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout) 
                                               << 8U)))) 
                                     | (((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout) 
                                           << 7U) | 
                                          ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout) 
                                           << 6U)) 
                                         | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout) 
                                             << 5U) 
                                            | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout) 
                                               << 4U))) 
                                        | ((((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout) 
                                             << 3U) 
                                            | ((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout) 
                                               << 2U)) 
                                           | (((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__carry__BRA__0__KET__))))))),32);
        bufp->chgBit(oldp+431,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+432,((1U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U])));
        bufp->chgBit(oldp+433,((1U & ((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                       >> 0xfU) ^ vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U]))));
        bufp->chgBit(oldp+434,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__carry__BRA__0__KET__));
        bufp->chgBit(oldp+435,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+436,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 9U))));
        bufp->chgBit(oldp+437,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout));
        bufp->chgBit(oldp+438,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout))));
        bufp->chgBit(oldp+439,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout));
        bufp->chgBit(oldp+440,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+441,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+442,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout))));
        bufp->chgBit(oldp+443,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout));
        bufp->chgBit(oldp+444,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+445,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+446,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout))));
        bufp->chgBit(oldp+447,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout));
        bufp->chgBit(oldp+448,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+449,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+450,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout))));
        bufp->chgBit(oldp+451,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout));
        bufp->chgBit(oldp+452,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+453,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+454,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout))));
        bufp->chgBit(oldp+455,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout));
        bufp->chgBit(oldp+456,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+457,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 0xeU))));
        bufp->chgBit(oldp+458,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout))));
        bufp->chgBit(oldp+459,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout));
        bufp->chgBit(oldp+460,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+461,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+462,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout))));
        bufp->chgBit(oldp+463,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout));
        bufp->chgBit(oldp+464,((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+465,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+466,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout))));
        bufp->chgBit(oldp+467,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout));
        bufp->chgBit(oldp+468,((1U & vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U])));
        bufp->chgBit(oldp+469,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+470,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout))));
        bufp->chgBit(oldp+471,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout));
        bufp->chgBit(oldp+472,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                      >> 1U))));
        bufp->chgBit(oldp+473,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+474,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout))));
        bufp->chgBit(oldp+475,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout));
        bufp->chgBit(oldp+476,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+477,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 1U))));
        bufp->chgBit(oldp+478,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__carry__BRA__0__KET__))));
        bufp->chgBit(oldp+479,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout));
        bufp->chgBit(oldp+480,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                      >> 2U))));
        bufp->chgBit(oldp+481,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+482,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout))));
        bufp->chgBit(oldp+483,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout));
        bufp->chgBit(oldp+484,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                      >> 3U))));
        bufp->chgBit(oldp+485,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+486,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout))));
        bufp->chgBit(oldp+487,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout));
        bufp->chgBit(oldp+488,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                      >> 4U))));
        bufp->chgBit(oldp+489,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 0x15U))));
        bufp->chgBit(oldp+490,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout))));
        bufp->chgBit(oldp+491,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout));
        bufp->chgBit(oldp+492,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                      >> 5U))));
        bufp->chgBit(oldp+493,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+494,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout))));
        bufp->chgBit(oldp+495,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout));
        bufp->chgBit(oldp+496,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                      >> 6U))));
        bufp->chgBit(oldp+497,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+498,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout))));
        bufp->chgBit(oldp+499,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout));
        bufp->chgBit(oldp+500,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                      >> 7U))));
        bufp->chgBit(oldp+501,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+502,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout))));
        bufp->chgBit(oldp+503,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout));
        bufp->chgBit(oldp+504,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                      >> 8U))));
        bufp->chgBit(oldp+505,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+506,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout))));
        bufp->chgBit(oldp+507,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout));
        bufp->chgBit(oldp+508,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                      >> 9U))));
        bufp->chgBit(oldp+509,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+510,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout))));
        bufp->chgBit(oldp+511,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout));
        bufp->chgBit(oldp+512,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+513,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+514,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout))));
        bufp->chgBit(oldp+515,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout));
        bufp->chgBit(oldp+516,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+517,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+518,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout))));
        bufp->chgBit(oldp+519,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout));
        bufp->chgBit(oldp+520,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+521,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 2U))));
        bufp->chgBit(oldp+522,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout))));
        bufp->chgBit(oldp+523,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout));
        bufp->chgBit(oldp+524,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+525,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+526,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout))));
        bufp->chgBit(oldp+527,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout));
        bufp->chgBit(oldp+528,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+529,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+530,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout))));
        bufp->chgBit(oldp+531,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout));
        bufp->chgBit(oldp+532,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                      >> 0xeU))));
        bufp->chgBit(oldp+533,((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+534,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout))));
        bufp->chgBit(oldp+535,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+536,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 3U))));
        bufp->chgBit(oldp+537,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout))));
        bufp->chgBit(oldp+538,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout));
        bufp->chgBit(oldp+539,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+540,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 4U))));
        bufp->chgBit(oldp+541,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout))));
        bufp->chgBit(oldp+542,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout));
        bufp->chgBit(oldp+543,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+544,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 5U))));
        bufp->chgBit(oldp+545,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout))));
        bufp->chgBit(oldp+546,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout));
        bufp->chgBit(oldp+547,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                      >> 0x15U))));
        bufp->chgBit(oldp+548,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 6U))));
        bufp->chgBit(oldp+549,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout))));
        bufp->chgBit(oldp+550,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout));
        bufp->chgBit(oldp+551,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+552,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 7U))));
        bufp->chgBit(oldp+553,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout))));
        bufp->chgBit(oldp+554,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout));
        bufp->chgBit(oldp+555,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+556,((1U & (vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                      >> 8U))));
        bufp->chgBit(oldp+557,(((IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelfRef.top__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout))));
        bufp->chgIData(oldp+558,((vlSelfRef.top__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                  >> 7U)),25);
    }
    bufp->chgBit(oldp+559,(vlSelfRef.clk));
    bufp->chgBit(oldp+560,(vlSelfRef.rst));
    bufp->chgBit(oldp+561,(vlSelfRef.Ecall));
    bufp->chgBit(oldp+562,(vlSelfRef.Ebreak));
    bufp->chgIData(oldp+563,(vlSelfRef.top_pcF),32);
    bufp->chgIData(oldp+564,(vlSelfRef.top_InstrF),32);
    bufp->chgIData(oldp+565,(vlSelfRef.top_ReadDataM),32);
    bufp->chgIData(oldp+566,(vlSelfRef.top_WriteDataM),32);
    bufp->chgIData(oldp+567,(vlSelfRef.top_ALUResultM),32);
    bufp->chgBit(oldp+568,(vlSelfRef.top_MemWriteM));
    bufp->chgIData(oldp+569,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__rd1),32);
    bufp->chgIData(oldp+570,(vlSelfRef.top__DOT__proc__DOT__dp__DOT__rf__DOT__rd2),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
