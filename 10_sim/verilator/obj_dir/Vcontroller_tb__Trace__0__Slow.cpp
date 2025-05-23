// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcontroller_tb__Syms.h"


VL_ATTR_COLD void Vcontroller_tb___024root__trace_init_sub__TOP__0(Vcontroller_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroller_tb___024root__trace_init_sub__TOP__0\n"); );
    Vcontroller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("controller_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+2,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+3,0,"funct7b5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"ZeroE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"BranchE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"JumpE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"ALUResultEb0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"funct12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+17,0,"ResultSrcD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+18,0,"ALUSrcD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+19,0,"MemWriteD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"PCSrcE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"RegWriteD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"JumpD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"BranchD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"ImmSrcD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+24,0,"ALUControlD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+10,0,"Ecall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"Ebreak",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"test_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+13,0,"pass_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+14,0,"fail_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+2,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+3,0,"funct7b5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"ZeroE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"BranchE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"JumpE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"ALUResultEb0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"funct12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+17,0,"ResultSrcD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+18,0,"ALUSrcD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+19,0,"MemWriteD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"PCSrcE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"RegWriteD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"JumpD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"BranchD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"ImmSrcD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+24,0,"ALUControlD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+10,0,"Ecall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"Ebreak",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"ALUOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("ad", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+15,0,"opb5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+3,0,"funct7b5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"ALUOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+26,0,"ALUSrcDb1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"ALUControlD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+16,0,"RtypeSub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bd", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+2,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+4,0,"ZeroE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"ALUResultEb0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"PCSrcE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("md", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+20,0,"RegWriteD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"JumpD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"BranchD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"MemWriteD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"ResultSrcD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+18,0,"ALUSrcD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+23,0,"ImmSrcD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+25,0,"ALUOp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+27,0,"controls",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->popPrefix();
    tracep->pushPrefix("sd", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+8,0,"funct12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+10,0,"Ecall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"Ebreak",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcontroller_tb___024root__trace_init_top(Vcontroller_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroller_tb___024root__trace_init_top\n"); );
    Vcontroller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcontroller_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcontroller_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vcontroller_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcontroller_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcontroller_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcontroller_tb___024root__trace_register(Vcontroller_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroller_tb___024root__trace_register\n"); );
    Vcontroller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vcontroller_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vcontroller_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vcontroller_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vcontroller_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcontroller_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroller_tb___024root__trace_const_0\n"); );
    // Init
    Vcontroller_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcontroller_tb___024root*>(voidSelf);
    Vcontroller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vcontroller_tb___024root__trace_full_0_sub_0(Vcontroller_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcontroller_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroller_tb___024root__trace_full_0\n"); );
    // Init
    Vcontroller_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcontroller_tb___024root*>(voidSelf);
    Vcontroller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcontroller_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcontroller_tb___024root__trace_full_0_sub_0(Vcontroller_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroller_tb___024root__trace_full_0_sub_0\n"); );
    Vcontroller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.controller_tb__DOT__op),7);
    bufp->fullCData(oldp+2,(vlSelfRef.controller_tb__DOT__funct3),3);
    bufp->fullBit(oldp+3,(vlSelfRef.controller_tb__DOT__funct7b5));
    bufp->fullBit(oldp+4,(vlSelfRef.controller_tb__DOT__ZeroE));
    bufp->fullBit(oldp+5,(vlSelfRef.controller_tb__DOT__BranchE));
    bufp->fullBit(oldp+6,(vlSelfRef.controller_tb__DOT__JumpE));
    bufp->fullBit(oldp+7,(vlSelfRef.controller_tb__DOT__ALUResultEb0));
    bufp->fullSData(oldp+8,(vlSelfRef.controller_tb__DOT__funct12),12);
    bufp->fullBit(oldp+9,((1U & ((0x63U == (IData)(vlSelfRef.controller_tb__DOT__op))
                                  ? ((4U & (IData)(vlSelfRef.controller_tb__DOT__funct3))
                                      ? ((2U & (IData)(vlSelfRef.controller_tb__DOT__funct3))
                                          ? ((1U & (IData)(vlSelfRef.controller_tb__DOT__funct3))
                                              ? (~ (IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0))
                                              : (IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0))
                                          : ((1U & (IData)(vlSelfRef.controller_tb__DOT__funct3))
                                              ? (~ (IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0))
                                              : (IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0)))
                                      : ((1U & (~ ((IData)(vlSelfRef.controller_tb__DOT__funct3) 
                                                   >> 1U))) 
                                         && (1U & (
                                                   (1U 
                                                    & (IData)(vlSelfRef.controller_tb__DOT__funct3))
                                                    ? 
                                                   (~ (IData)(vlSelfRef.controller_tb__DOT__ZeroE))
                                                    : (IData)(vlSelfRef.controller_tb__DOT__ZeroE)))))
                                  : ((0x6fU == (IData)(vlSelfRef.controller_tb__DOT__op)) 
                                     | (0x67U == (IData)(vlSelfRef.controller_tb__DOT__op)))))));
    bufp->fullBit(oldp+10,(((0x73U == (IData)(vlSelfRef.controller_tb__DOT__op)) 
                            & (0U == (IData)(vlSelfRef.controller_tb__DOT__funct12)))));
    bufp->fullBit(oldp+11,(((0x73U == (IData)(vlSelfRef.controller_tb__DOT__op)) 
                            & (1U == (IData)(vlSelfRef.controller_tb__DOT__funct12)))));
    bufp->fullIData(oldp+12,(vlSelfRef.controller_tb__DOT__test_num),32);
    bufp->fullIData(oldp+13,(vlSelfRef.controller_tb__DOT__pass_count),32);
    bufp->fullIData(oldp+14,(vlSelfRef.controller_tb__DOT__fail_count),32);
    bufp->fullBit(oldp+15,((1U & ((IData)(vlSelfRef.controller_tb__DOT__op) 
                                  >> 5U))));
    bufp->fullBit(oldp+16,(((IData)(vlSelfRef.controller_tb__DOT__funct7b5) 
                            & ((IData)(vlSelfRef.controller_tb__DOT__op) 
                               >> 5U))));
    bufp->fullCData(oldp+17,((3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                    >> 4U))),2);
    bufp->fullCData(oldp+18,((3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                    >> 7U))),2);
    bufp->fullBit(oldp+19,((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                  >> 6U))));
    bufp->fullBit(oldp+20,((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                  >> 0xcU))));
    bufp->fullBit(oldp+21,((1U & (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls))));
    bufp->fullBit(oldp+22,((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                  >> 3U))));
    bufp->fullCData(oldp+23,((7U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                    >> 9U))),3);
    bufp->fullCData(oldp+24,(vlSelfRef.controller_tb__DOT__ALUControlD),4);
    bufp->fullCData(oldp+25,((3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                    >> 1U))),2);
    bufp->fullBit(oldp+26,((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                  >> 8U))));
    bufp->fullSData(oldp+27,(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls),13);
}
