// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VD_stage_tb__Syms.h"


void VD_stage_tb___024root__trace_chg_0_sub_0(VD_stage_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VD_stage_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_stage_tb___024root__trace_chg_0\n"); );
    // Init
    VD_stage_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VD_stage_tb___024root*>(voidSelf);
    VD_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VD_stage_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VD_stage_tb___024root__trace_chg_0_sub_0(VD_stage_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_stage_tb___024root__trace_chg_0_sub_0\n"); );
    VD_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgCData(oldp+0,(vlSelfRef.D_stage_tb__DOT__i_debug_addr),5);
        bufp->chgIData(oldp+1,(vlSelfRef.D_stage_tb__DOT__mask_o_debug_data),32);
        bufp->chgBit(oldp+2,(vlSelfRef.D_stage_tb__DOT__rst));
        bufp->chgIData(oldp+3,(vlSelfRef.D_stage_tb__DOT__InstrF),32);
        bufp->chgIData(oldp+4,(vlSelfRef.D_stage_tb__DOT__pcF),32);
        bufp->chgIData(oldp+5,(vlSelfRef.D_stage_tb__DOT__PCPlus4F),32);
        bufp->chgBit(oldp+6,(vlSelfRef.D_stage_tb__DOT__StallD));
        bufp->chgBit(oldp+7,(vlSelfRef.D_stage_tb__DOT__FlushD));
        bufp->chgBit(oldp+8,(vlSelfRef.D_stage_tb__DOT__ZeroE));
        bufp->chgBit(oldp+9,(vlSelfRef.D_stage_tb__DOT__BranchE));
        bufp->chgBit(oldp+10,(vlSelfRef.D_stage_tb__DOT__JumpE));
        bufp->chgBit(oldp+11,(vlSelfRef.D_stage_tb__DOT__ALUResultEb0));
        bufp->chgBit(oldp+12,(vlSelfRef.D_stage_tb__DOT__RegWriteW));
        bufp->chgCData(oldp+13,(vlSelfRef.D_stage_tb__DOT__RdW),5);
        bufp->chgIData(oldp+14,(vlSelfRef.D_stage_tb__DOT__ResultW),32);
        bufp->chgIData(oldp+15,(vlSelfRef.D_stage_tb__DOT__mask_Read1D),32);
        bufp->chgIData(oldp+16,(vlSelfRef.D_stage_tb__DOT__mask_Read2D),32);
        bufp->chgCData(oldp+17,(vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD),2);
        bufp->chgCData(oldp+18,(vlSelfRef.D_stage_tb__DOT__mask_ALUControlD),4);
        bufp->chgCData(oldp+19,(vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD),2);
        bufp->chgCData(oldp+20,(vlSelfRef.D_stage_tb__DOT__mask_Rs1D),5);
        bufp->chgCData(oldp+21,(vlSelfRef.D_stage_tb__DOT__mask_Rs2D),5);
        bufp->chgCData(oldp+22,(vlSelfRef.D_stage_tb__DOT__mask_RdD),5);
        bufp->chgIData(oldp+23,(vlSelfRef.D_stage_tb__DOT__mask_ImmExtD),32);
        bufp->chgCData(oldp+24,(vlSelfRef.D_stage_tb__DOT__mask_MemSrcD),5);
        bufp->chgIData(oldp+25,(vlSelfRef.D_stage_tb__DOT__test_num),32);
        bufp->chgIData(oldp+26,(vlSelfRef.D_stage_tb__DOT__pass_count),32);
        bufp->chgIData(oldp+27,(vlSelfRef.D_stage_tb__DOT__fail_count),32);
        bufp->chgBit(oldp+28,((1U & (~ (IData)(vlSelfRef.D_stage_tb__DOT__StallD)))));
        __Vtemp_1[0U] = vlSelfRef.D_stage_tb__DOT__PCPlus4F;
        __Vtemp_1[1U] = (IData)((((QData)((IData)(vlSelfRef.D_stage_tb__DOT__InstrF)) 
                                  << 0x20U) | (QData)((IData)(vlSelfRef.D_stage_tb__DOT__pcF))));
        __Vtemp_1[2U] = (IData)(((((QData)((IData)(vlSelfRef.D_stage_tb__DOT__InstrF)) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.D_stage_tb__DOT__pcF))) 
                                 >> 0x20U));
        bufp->chgWData(oldp+29,(__Vtemp_1),96);
        bufp->chgIData(oldp+32,(((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW)
                                  ? ((0U == (IData)(vlSelfRef.D_stage_tb__DOT__RdW))
                                      ? 0U : ((IData)(1U) 
                                              << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)))
                                  : 0U)),32);
        bufp->chgBit(oldp+33,(((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
                               & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                  & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                     >> 1U)))));
        bufp->chgBit(oldp+34,(((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
                               & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                  & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                     >> 2U)))));
        bufp->chgBit(oldp+35,(((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
                               & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                  & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                     >> 3U)))));
        bufp->chgBit(oldp+36,(((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
                               & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                  & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                     >> 4U)))));
        bufp->chgBit(oldp+37,(((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
                               & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                  & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                     >> 5U)))));
        bufp->chgBit(oldp+38,(((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
                               & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                  & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                     >> 6U)))));
        bufp->chgBit(oldp+39,(((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
                               & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                  & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                     >> 7U)))));
        bufp->chgBit(oldp+40,(((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
                               & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                  & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                     >> 8U)))));
        bufp->chgBit(oldp+41,(((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
                               & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                  & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                     >> 9U)))));
        bufp->chgBit(oldp+42,(((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
                               & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                  & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                     >> 0xaU)))));
        bufp->chgBit(oldp+43,(((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
                               & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                  & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                     >> 0xbU)))));
        bufp->chgBit(oldp+44,(((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
                               & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                  & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                     >> 0xcU)))));
        bufp->chgBit(oldp+45,(((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
                               & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                  & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                     >> 0xdU)))));
        bufp->chgBit(oldp+46,(((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
                               & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                  & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                     >> 0xeU)))));
        bufp->chgBit(oldp+47,(((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
                               & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                  & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                     >> 0xfU)))));
        bufp->chgBit(oldp+48,(((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
                               & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                  & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                     >> 0x10U)))));
        bufp->chgBit(oldp+49,(((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
                               & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                  & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                     >> 0x11U)))));
        bufp->chgBit(oldp+50,(((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
                               & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                  & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                     >> 0x12U)))));
        bufp->chgBit(oldp+51,(((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
                               & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                  & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                     >> 0x13U)))));
        bufp->chgBit(oldp+52,(((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
                               & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                  & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                     >> 0x14U)))));
        bufp->chgBit(oldp+53,(((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
                               & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                  & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                     >> 0x15U)))));
        bufp->chgBit(oldp+54,(((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
                               & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                  & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                     >> 0x16U)))));
        bufp->chgBit(oldp+55,(((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
                               & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                  & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                     >> 0x17U)))));
        bufp->chgBit(oldp+56,(((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
                               & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                  & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                     >> 0x18U)))));
        bufp->chgBit(oldp+57,(((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
                               & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                  & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                     >> 0x19U)))));
        bufp->chgBit(oldp+58,(((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
                               & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                  & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                     >> 0x1aU)))));
        bufp->chgBit(oldp+59,(((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
                               & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                  & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                     >> 0x1bU)))));
        bufp->chgBit(oldp+60,(((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
                               & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                  & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                     >> 0x1cU)))));
        bufp->chgBit(oldp+61,(((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
                               & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                  & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                     >> 0x1dU)))));
        bufp->chgBit(oldp+62,(((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
                               & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                  & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                     >> 0x1eU)))));
        bufp->chgBit(oldp+63,(((IData)(vlSelfRef.D_stage_tb__DOT__RegWriteW) 
                               & ((0U != (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                  & (((IData)(1U) << (IData)(vlSelfRef.D_stage_tb__DOT__RdW)) 
                                     >> 0x1fU)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+64,(vlSelfRef.D_stage_tb__DOT__Read1D),32);
        bufp->chgIData(oldp+65,(vlSelfRef.D_stage_tb__DOT__Read2D),32);
        bufp->chgIData(oldp+66,(vlSelfRef.D_stage_tb__DOT__rf__DOT__x01),32);
        bufp->chgIData(oldp+67,(vlSelfRef.D_stage_tb__DOT__rf__DOT__x02),32);
        bufp->chgIData(oldp+68,(vlSelfRef.D_stage_tb__DOT__rf__DOT__x03),32);
        bufp->chgIData(oldp+69,(vlSelfRef.D_stage_tb__DOT__rf__DOT__x04),32);
        bufp->chgIData(oldp+70,(vlSelfRef.D_stage_tb__DOT__rf__DOT__x05),32);
        bufp->chgIData(oldp+71,(vlSelfRef.D_stage_tb__DOT__rf__DOT__x06),32);
        bufp->chgIData(oldp+72,(vlSelfRef.D_stage_tb__DOT__rf__DOT__x07),32);
        bufp->chgIData(oldp+73,(vlSelfRef.D_stage_tb__DOT__rf__DOT__x08),32);
        bufp->chgIData(oldp+74,(vlSelfRef.D_stage_tb__DOT__rf__DOT__x09),32);
        bufp->chgIData(oldp+75,(vlSelfRef.D_stage_tb__DOT__rf__DOT__x10),32);
        bufp->chgIData(oldp+76,(vlSelfRef.D_stage_tb__DOT__rf__DOT__x11),32);
        bufp->chgIData(oldp+77,(vlSelfRef.D_stage_tb__DOT__rf__DOT__x12),32);
        bufp->chgIData(oldp+78,(vlSelfRef.D_stage_tb__DOT__rf__DOT__x13),32);
        bufp->chgIData(oldp+79,(vlSelfRef.D_stage_tb__DOT__rf__DOT__x14),32);
        bufp->chgIData(oldp+80,(vlSelfRef.D_stage_tb__DOT__rf__DOT__x15),32);
        bufp->chgIData(oldp+81,(vlSelfRef.D_stage_tb__DOT__rf__DOT__x16),32);
        bufp->chgIData(oldp+82,(vlSelfRef.D_stage_tb__DOT__rf__DOT__x17),32);
        bufp->chgIData(oldp+83,(vlSelfRef.D_stage_tb__DOT__rf__DOT__x18),32);
        bufp->chgIData(oldp+84,(vlSelfRef.D_stage_tb__DOT__rf__DOT__x19),32);
        bufp->chgIData(oldp+85,(vlSelfRef.D_stage_tb__DOT__rf__DOT__x20),32);
        bufp->chgIData(oldp+86,(vlSelfRef.D_stage_tb__DOT__rf__DOT__x21),32);
        bufp->chgIData(oldp+87,(vlSelfRef.D_stage_tb__DOT__rf__DOT__x22),32);
        bufp->chgIData(oldp+88,(vlSelfRef.D_stage_tb__DOT__rf__DOT__x23),32);
        bufp->chgIData(oldp+89,(vlSelfRef.D_stage_tb__DOT__rf__DOT__x24),32);
        bufp->chgIData(oldp+90,(vlSelfRef.D_stage_tb__DOT__rf__DOT__x25),32);
        bufp->chgIData(oldp+91,(vlSelfRef.D_stage_tb__DOT__rf__DOT__x26),32);
        bufp->chgIData(oldp+92,(vlSelfRef.D_stage_tb__DOT__rf__DOT__x27),32);
        bufp->chgIData(oldp+93,(vlSelfRef.D_stage_tb__DOT__rf__DOT__x28),32);
        bufp->chgIData(oldp+94,(vlSelfRef.D_stage_tb__DOT__rf__DOT__x29),32);
        bufp->chgIData(oldp+95,(vlSelfRef.D_stage_tb__DOT__rf__DOT__x30),32);
        bufp->chgIData(oldp+96,(vlSelfRef.D_stage_tb__DOT__rf__DOT__x31),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+97,(vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U]),32);
        bufp->chgCData(oldp+98,((7U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                       >> 9U))),3);
        bufp->chgCData(oldp+99,(((0x4000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                  ? ((0x2000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                      ? 0U : ((0x1000U 
                                               & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                               ? 1U
                                               : 2U))
                                  : ((0x2000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                      ? ((0x1000U & 
                                          vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                          ? 0U : 4U)
                                      : ((0x1000U & 
                                          vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                          ? 8U : 0x10U)))),5);
        bufp->chgBit(oldp+100,((1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                      >> 0xcU))));
        bufp->chgCData(oldp+101,((3U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                        >> 4U))),2);
        bufp->chgBit(oldp+102,((1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                      >> 6U))));
        bufp->chgBit(oldp+103,((1U & (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls))));
        bufp->chgBit(oldp+104,((1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                      >> 3U))));
        bufp->chgCData(oldp+105,(vlSelfRef.D_stage_tb__DOT__ALUControlD),4);
        bufp->chgCData(oldp+106,((3U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                        >> 7U))),2);
        bufp->chgIData(oldp+107,(vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[1U]),32);
        bufp->chgIData(oldp+108,(vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[0U]),32);
        bufp->chgCData(oldp+109,((0x1fU & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+110,((0x1fU & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+111,((0x1fU & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                           >> 7U))),5);
        bufp->chgIData(oldp+112,(vlSelfRef.D_stage_tb__DOT__ImmExtD),32);
        bufp->chgBit(oldp+113,((IData)((0x73U == (0xfff0007fU 
                                                  & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])))));
        bufp->chgBit(oldp+114,((IData)((0x100073U == 
                                        (0xfff0007fU 
                                         & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])))));
        bufp->chgWData(oldp+115,(vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q),96);
        bufp->chgCData(oldp+118,((0x7fU & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])),7);
        bufp->chgCData(oldp+119,((7U & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                        >> 0xcU))),3);
        bufp->chgBit(oldp+120,((1U & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                      >> 0x1eU))));
        bufp->chgSData(oldp+121,((vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                  >> 0x14U)),12);
        bufp->chgCData(oldp+122,((3U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                        >> 1U))),2);
        bufp->chgBit(oldp+123,((1U & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                      >> 5U))));
        bufp->chgBit(oldp+124,((1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                      >> 8U))));
        bufp->chgBit(oldp+125,((IData)((0x40000020U 
                                        == (0x40000020U 
                                            & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])))));
        bufp->chgSData(oldp+126,(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls),13);
        bufp->chgIData(oldp+127,((vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                  >> 7U)),25);
    }
    bufp->chgIData(oldp+128,(vlSelfRef.D_stage_tb__DOT__o_debug_data),32);
    bufp->chgBit(oldp+129,(vlSelfRef.D_stage_tb__DOT__clk));
    bufp->chgBit(oldp+130,(vlSelfRef.D_stage_tb__DOT__PCSrcE));
    bufp->chgBit(oldp+131,((1U & (~ (IData)(vlSelfRef.D_stage_tb__DOT__clk)))));
}

void VD_stage_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_stage_tb___024root__trace_cleanup\n"); );
    // Init
    VD_stage_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VD_stage_tb___024root*>(voidSelf);
    VD_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
