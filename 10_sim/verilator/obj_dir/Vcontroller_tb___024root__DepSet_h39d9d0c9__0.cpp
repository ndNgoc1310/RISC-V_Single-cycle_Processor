// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontroller_tb.h for the primary calling header

#include "Vcontroller_tb__pch.h"
#include "Vcontroller_tb__Syms.h"
#include "Vcontroller_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vcontroller_tb___024root___eval_initial__TOP__Vtiming__0(Vcontroller_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroller_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vcontroller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__0__exp_RegWriteD;
    __Vtask_controller_tb__DOT__run_test__0__exp_RegWriteD = 0;
    CData/*2:0*/ __Vtask_controller_tb__DOT__run_test__0__exp_ImmSrcD;
    __Vtask_controller_tb__DOT__run_test__0__exp_ImmSrcD = 0;
    CData/*1:0*/ __Vtask_controller_tb__DOT__run_test__0__exp_ALUSrcD;
    __Vtask_controller_tb__DOT__run_test__0__exp_ALUSrcD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__0__exp_MemWriteD;
    __Vtask_controller_tb__DOT__run_test__0__exp_MemWriteD = 0;
    CData/*1:0*/ __Vtask_controller_tb__DOT__run_test__0__exp_ResultSrcD;
    __Vtask_controller_tb__DOT__run_test__0__exp_ResultSrcD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__0__exp_BranchD;
    __Vtask_controller_tb__DOT__run_test__0__exp_BranchD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__0__exp_JumpD;
    __Vtask_controller_tb__DOT__run_test__0__exp_JumpD = 0;
    CData/*3:0*/ __Vtask_controller_tb__DOT__run_test__0__exp_ALUControlD;
    __Vtask_controller_tb__DOT__run_test__0__exp_ALUControlD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__0__exp_PCSrcE;
    __Vtask_controller_tb__DOT__run_test__0__exp_PCSrcE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__0__exp_Ecall;
    __Vtask_controller_tb__DOT__run_test__0__exp_Ecall = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__0__exp_Ebreak;
    __Vtask_controller_tb__DOT__run_test__0__exp_Ebreak = 0;
    std::string __Vtask_controller_tb__DOT__run_test__0__test_name;
    CData/*6:0*/ __Vtask_controller_tb__DOT__run_test__1__in_op;
    __Vtask_controller_tb__DOT__run_test__1__in_op = 0;
    CData/*2:0*/ __Vtask_controller_tb__DOT__run_test__1__in_funct3;
    __Vtask_controller_tb__DOT__run_test__1__in_funct3 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__1__in_funct7b5;
    __Vtask_controller_tb__DOT__run_test__1__in_funct7b5 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__1__in_ZeroE;
    __Vtask_controller_tb__DOT__run_test__1__in_ZeroE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__1__in_BranchE;
    __Vtask_controller_tb__DOT__run_test__1__in_BranchE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__1__in_JumpE;
    __Vtask_controller_tb__DOT__run_test__1__in_JumpE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__1__in_ALUResultEb0;
    __Vtask_controller_tb__DOT__run_test__1__in_ALUResultEb0 = 0;
    SData/*11:0*/ __Vtask_controller_tb__DOT__run_test__1__in_funct12;
    __Vtask_controller_tb__DOT__run_test__1__in_funct12 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__1__exp_RegWriteD;
    __Vtask_controller_tb__DOT__run_test__1__exp_RegWriteD = 0;
    CData/*2:0*/ __Vtask_controller_tb__DOT__run_test__1__exp_ImmSrcD;
    __Vtask_controller_tb__DOT__run_test__1__exp_ImmSrcD = 0;
    CData/*1:0*/ __Vtask_controller_tb__DOT__run_test__1__exp_ALUSrcD;
    __Vtask_controller_tb__DOT__run_test__1__exp_ALUSrcD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__1__exp_MemWriteD;
    __Vtask_controller_tb__DOT__run_test__1__exp_MemWriteD = 0;
    CData/*1:0*/ __Vtask_controller_tb__DOT__run_test__1__exp_ResultSrcD;
    __Vtask_controller_tb__DOT__run_test__1__exp_ResultSrcD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__1__exp_BranchD;
    __Vtask_controller_tb__DOT__run_test__1__exp_BranchD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__1__exp_JumpD;
    __Vtask_controller_tb__DOT__run_test__1__exp_JumpD = 0;
    CData/*3:0*/ __Vtask_controller_tb__DOT__run_test__1__exp_ALUControlD;
    __Vtask_controller_tb__DOT__run_test__1__exp_ALUControlD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__1__exp_PCSrcE;
    __Vtask_controller_tb__DOT__run_test__1__exp_PCSrcE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__1__exp_Ecall;
    __Vtask_controller_tb__DOT__run_test__1__exp_Ecall = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__1__exp_Ebreak;
    __Vtask_controller_tb__DOT__run_test__1__exp_Ebreak = 0;
    std::string __Vtask_controller_tb__DOT__run_test__1__test_name;
    CData/*6:0*/ __Vtask_controller_tb__DOT__run_test__2__in_op;
    __Vtask_controller_tb__DOT__run_test__2__in_op = 0;
    CData/*2:0*/ __Vtask_controller_tb__DOT__run_test__2__in_funct3;
    __Vtask_controller_tb__DOT__run_test__2__in_funct3 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__2__in_funct7b5;
    __Vtask_controller_tb__DOT__run_test__2__in_funct7b5 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__2__in_ZeroE;
    __Vtask_controller_tb__DOT__run_test__2__in_ZeroE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__2__in_BranchE;
    __Vtask_controller_tb__DOT__run_test__2__in_BranchE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__2__in_JumpE;
    __Vtask_controller_tb__DOT__run_test__2__in_JumpE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__2__in_ALUResultEb0;
    __Vtask_controller_tb__DOT__run_test__2__in_ALUResultEb0 = 0;
    SData/*11:0*/ __Vtask_controller_tb__DOT__run_test__2__in_funct12;
    __Vtask_controller_tb__DOT__run_test__2__in_funct12 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__2__exp_RegWriteD;
    __Vtask_controller_tb__DOT__run_test__2__exp_RegWriteD = 0;
    CData/*2:0*/ __Vtask_controller_tb__DOT__run_test__2__exp_ImmSrcD;
    __Vtask_controller_tb__DOT__run_test__2__exp_ImmSrcD = 0;
    CData/*1:0*/ __Vtask_controller_tb__DOT__run_test__2__exp_ALUSrcD;
    __Vtask_controller_tb__DOT__run_test__2__exp_ALUSrcD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__2__exp_MemWriteD;
    __Vtask_controller_tb__DOT__run_test__2__exp_MemWriteD = 0;
    CData/*1:0*/ __Vtask_controller_tb__DOT__run_test__2__exp_ResultSrcD;
    __Vtask_controller_tb__DOT__run_test__2__exp_ResultSrcD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__2__exp_BranchD;
    __Vtask_controller_tb__DOT__run_test__2__exp_BranchD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__2__exp_JumpD;
    __Vtask_controller_tb__DOT__run_test__2__exp_JumpD = 0;
    CData/*3:0*/ __Vtask_controller_tb__DOT__run_test__2__exp_ALUControlD;
    __Vtask_controller_tb__DOT__run_test__2__exp_ALUControlD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__2__exp_PCSrcE;
    __Vtask_controller_tb__DOT__run_test__2__exp_PCSrcE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__2__exp_Ecall;
    __Vtask_controller_tb__DOT__run_test__2__exp_Ecall = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__2__exp_Ebreak;
    __Vtask_controller_tb__DOT__run_test__2__exp_Ebreak = 0;
    std::string __Vtask_controller_tb__DOT__run_test__2__test_name;
    CData/*6:0*/ __Vtask_controller_tb__DOT__run_test__3__in_op;
    __Vtask_controller_tb__DOT__run_test__3__in_op = 0;
    CData/*2:0*/ __Vtask_controller_tb__DOT__run_test__3__in_funct3;
    __Vtask_controller_tb__DOT__run_test__3__in_funct3 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__3__in_funct7b5;
    __Vtask_controller_tb__DOT__run_test__3__in_funct7b5 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__3__in_ZeroE;
    __Vtask_controller_tb__DOT__run_test__3__in_ZeroE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__3__in_BranchE;
    __Vtask_controller_tb__DOT__run_test__3__in_BranchE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__3__in_JumpE;
    __Vtask_controller_tb__DOT__run_test__3__in_JumpE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__3__in_ALUResultEb0;
    __Vtask_controller_tb__DOT__run_test__3__in_ALUResultEb0 = 0;
    SData/*11:0*/ __Vtask_controller_tb__DOT__run_test__3__in_funct12;
    __Vtask_controller_tb__DOT__run_test__3__in_funct12 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__3__exp_RegWriteD;
    __Vtask_controller_tb__DOT__run_test__3__exp_RegWriteD = 0;
    CData/*2:0*/ __Vtask_controller_tb__DOT__run_test__3__exp_ImmSrcD;
    __Vtask_controller_tb__DOT__run_test__3__exp_ImmSrcD = 0;
    CData/*1:0*/ __Vtask_controller_tb__DOT__run_test__3__exp_ALUSrcD;
    __Vtask_controller_tb__DOT__run_test__3__exp_ALUSrcD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__3__exp_MemWriteD;
    __Vtask_controller_tb__DOT__run_test__3__exp_MemWriteD = 0;
    CData/*1:0*/ __Vtask_controller_tb__DOT__run_test__3__exp_ResultSrcD;
    __Vtask_controller_tb__DOT__run_test__3__exp_ResultSrcD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__3__exp_BranchD;
    __Vtask_controller_tb__DOT__run_test__3__exp_BranchD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__3__exp_JumpD;
    __Vtask_controller_tb__DOT__run_test__3__exp_JumpD = 0;
    CData/*3:0*/ __Vtask_controller_tb__DOT__run_test__3__exp_ALUControlD;
    __Vtask_controller_tb__DOT__run_test__3__exp_ALUControlD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__3__exp_PCSrcE;
    __Vtask_controller_tb__DOT__run_test__3__exp_PCSrcE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__3__exp_Ecall;
    __Vtask_controller_tb__DOT__run_test__3__exp_Ecall = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__3__exp_Ebreak;
    __Vtask_controller_tb__DOT__run_test__3__exp_Ebreak = 0;
    std::string __Vtask_controller_tb__DOT__run_test__3__test_name;
    CData/*6:0*/ __Vtask_controller_tb__DOT__run_test__4__in_op;
    __Vtask_controller_tb__DOT__run_test__4__in_op = 0;
    CData/*2:0*/ __Vtask_controller_tb__DOT__run_test__4__in_funct3;
    __Vtask_controller_tb__DOT__run_test__4__in_funct3 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__4__in_funct7b5;
    __Vtask_controller_tb__DOT__run_test__4__in_funct7b5 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__4__in_ZeroE;
    __Vtask_controller_tb__DOT__run_test__4__in_ZeroE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__4__in_BranchE;
    __Vtask_controller_tb__DOT__run_test__4__in_BranchE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__4__in_JumpE;
    __Vtask_controller_tb__DOT__run_test__4__in_JumpE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__4__in_ALUResultEb0;
    __Vtask_controller_tb__DOT__run_test__4__in_ALUResultEb0 = 0;
    SData/*11:0*/ __Vtask_controller_tb__DOT__run_test__4__in_funct12;
    __Vtask_controller_tb__DOT__run_test__4__in_funct12 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__4__exp_RegWriteD;
    __Vtask_controller_tb__DOT__run_test__4__exp_RegWriteD = 0;
    CData/*2:0*/ __Vtask_controller_tb__DOT__run_test__4__exp_ImmSrcD;
    __Vtask_controller_tb__DOT__run_test__4__exp_ImmSrcD = 0;
    CData/*1:0*/ __Vtask_controller_tb__DOT__run_test__4__exp_ALUSrcD;
    __Vtask_controller_tb__DOT__run_test__4__exp_ALUSrcD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__4__exp_MemWriteD;
    __Vtask_controller_tb__DOT__run_test__4__exp_MemWriteD = 0;
    CData/*1:0*/ __Vtask_controller_tb__DOT__run_test__4__exp_ResultSrcD;
    __Vtask_controller_tb__DOT__run_test__4__exp_ResultSrcD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__4__exp_BranchD;
    __Vtask_controller_tb__DOT__run_test__4__exp_BranchD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__4__exp_JumpD;
    __Vtask_controller_tb__DOT__run_test__4__exp_JumpD = 0;
    CData/*3:0*/ __Vtask_controller_tb__DOT__run_test__4__exp_ALUControlD;
    __Vtask_controller_tb__DOT__run_test__4__exp_ALUControlD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__4__exp_PCSrcE;
    __Vtask_controller_tb__DOT__run_test__4__exp_PCSrcE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__4__exp_Ecall;
    __Vtask_controller_tb__DOT__run_test__4__exp_Ecall = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__4__exp_Ebreak;
    __Vtask_controller_tb__DOT__run_test__4__exp_Ebreak = 0;
    std::string __Vtask_controller_tb__DOT__run_test__4__test_name;
    CData/*6:0*/ __Vtask_controller_tb__DOT__run_test__5__in_op;
    __Vtask_controller_tb__DOT__run_test__5__in_op = 0;
    CData/*2:0*/ __Vtask_controller_tb__DOT__run_test__5__in_funct3;
    __Vtask_controller_tb__DOT__run_test__5__in_funct3 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__5__in_funct7b5;
    __Vtask_controller_tb__DOT__run_test__5__in_funct7b5 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__5__in_ZeroE;
    __Vtask_controller_tb__DOT__run_test__5__in_ZeroE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__5__in_BranchE;
    __Vtask_controller_tb__DOT__run_test__5__in_BranchE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__5__in_JumpE;
    __Vtask_controller_tb__DOT__run_test__5__in_JumpE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__5__in_ALUResultEb0;
    __Vtask_controller_tb__DOT__run_test__5__in_ALUResultEb0 = 0;
    SData/*11:0*/ __Vtask_controller_tb__DOT__run_test__5__in_funct12;
    __Vtask_controller_tb__DOT__run_test__5__in_funct12 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__5__exp_RegWriteD;
    __Vtask_controller_tb__DOT__run_test__5__exp_RegWriteD = 0;
    CData/*2:0*/ __Vtask_controller_tb__DOT__run_test__5__exp_ImmSrcD;
    __Vtask_controller_tb__DOT__run_test__5__exp_ImmSrcD = 0;
    CData/*1:0*/ __Vtask_controller_tb__DOT__run_test__5__exp_ALUSrcD;
    __Vtask_controller_tb__DOT__run_test__5__exp_ALUSrcD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__5__exp_MemWriteD;
    __Vtask_controller_tb__DOT__run_test__5__exp_MemWriteD = 0;
    CData/*1:0*/ __Vtask_controller_tb__DOT__run_test__5__exp_ResultSrcD;
    __Vtask_controller_tb__DOT__run_test__5__exp_ResultSrcD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__5__exp_BranchD;
    __Vtask_controller_tb__DOT__run_test__5__exp_BranchD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__5__exp_JumpD;
    __Vtask_controller_tb__DOT__run_test__5__exp_JumpD = 0;
    CData/*3:0*/ __Vtask_controller_tb__DOT__run_test__5__exp_ALUControlD;
    __Vtask_controller_tb__DOT__run_test__5__exp_ALUControlD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__5__exp_PCSrcE;
    __Vtask_controller_tb__DOT__run_test__5__exp_PCSrcE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__5__exp_Ecall;
    __Vtask_controller_tb__DOT__run_test__5__exp_Ecall = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__5__exp_Ebreak;
    __Vtask_controller_tb__DOT__run_test__5__exp_Ebreak = 0;
    std::string __Vtask_controller_tb__DOT__run_test__5__test_name;
    CData/*6:0*/ __Vtask_controller_tb__DOT__run_test__6__in_op;
    __Vtask_controller_tb__DOT__run_test__6__in_op = 0;
    CData/*2:0*/ __Vtask_controller_tb__DOT__run_test__6__in_funct3;
    __Vtask_controller_tb__DOT__run_test__6__in_funct3 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__6__in_funct7b5;
    __Vtask_controller_tb__DOT__run_test__6__in_funct7b5 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__6__in_ZeroE;
    __Vtask_controller_tb__DOT__run_test__6__in_ZeroE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__6__in_BranchE;
    __Vtask_controller_tb__DOT__run_test__6__in_BranchE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__6__in_JumpE;
    __Vtask_controller_tb__DOT__run_test__6__in_JumpE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__6__in_ALUResultEb0;
    __Vtask_controller_tb__DOT__run_test__6__in_ALUResultEb0 = 0;
    SData/*11:0*/ __Vtask_controller_tb__DOT__run_test__6__in_funct12;
    __Vtask_controller_tb__DOT__run_test__6__in_funct12 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__6__exp_RegWriteD;
    __Vtask_controller_tb__DOT__run_test__6__exp_RegWriteD = 0;
    CData/*2:0*/ __Vtask_controller_tb__DOT__run_test__6__exp_ImmSrcD;
    __Vtask_controller_tb__DOT__run_test__6__exp_ImmSrcD = 0;
    CData/*1:0*/ __Vtask_controller_tb__DOT__run_test__6__exp_ALUSrcD;
    __Vtask_controller_tb__DOT__run_test__6__exp_ALUSrcD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__6__exp_MemWriteD;
    __Vtask_controller_tb__DOT__run_test__6__exp_MemWriteD = 0;
    CData/*1:0*/ __Vtask_controller_tb__DOT__run_test__6__exp_ResultSrcD;
    __Vtask_controller_tb__DOT__run_test__6__exp_ResultSrcD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__6__exp_BranchD;
    __Vtask_controller_tb__DOT__run_test__6__exp_BranchD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__6__exp_JumpD;
    __Vtask_controller_tb__DOT__run_test__6__exp_JumpD = 0;
    CData/*3:0*/ __Vtask_controller_tb__DOT__run_test__6__exp_ALUControlD;
    __Vtask_controller_tb__DOT__run_test__6__exp_ALUControlD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__6__exp_PCSrcE;
    __Vtask_controller_tb__DOT__run_test__6__exp_PCSrcE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__6__exp_Ecall;
    __Vtask_controller_tb__DOT__run_test__6__exp_Ecall = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__6__exp_Ebreak;
    __Vtask_controller_tb__DOT__run_test__6__exp_Ebreak = 0;
    std::string __Vtask_controller_tb__DOT__run_test__6__test_name;
    CData/*6:0*/ __Vtask_controller_tb__DOT__run_test__7__in_op;
    __Vtask_controller_tb__DOT__run_test__7__in_op = 0;
    CData/*2:0*/ __Vtask_controller_tb__DOT__run_test__7__in_funct3;
    __Vtask_controller_tb__DOT__run_test__7__in_funct3 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__7__in_funct7b5;
    __Vtask_controller_tb__DOT__run_test__7__in_funct7b5 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__7__in_ZeroE;
    __Vtask_controller_tb__DOT__run_test__7__in_ZeroE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__7__in_BranchE;
    __Vtask_controller_tb__DOT__run_test__7__in_BranchE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__7__in_JumpE;
    __Vtask_controller_tb__DOT__run_test__7__in_JumpE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__7__in_ALUResultEb0;
    __Vtask_controller_tb__DOT__run_test__7__in_ALUResultEb0 = 0;
    SData/*11:0*/ __Vtask_controller_tb__DOT__run_test__7__in_funct12;
    __Vtask_controller_tb__DOT__run_test__7__in_funct12 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__7__exp_RegWriteD;
    __Vtask_controller_tb__DOT__run_test__7__exp_RegWriteD = 0;
    CData/*2:0*/ __Vtask_controller_tb__DOT__run_test__7__exp_ImmSrcD;
    __Vtask_controller_tb__DOT__run_test__7__exp_ImmSrcD = 0;
    CData/*1:0*/ __Vtask_controller_tb__DOT__run_test__7__exp_ALUSrcD;
    __Vtask_controller_tb__DOT__run_test__7__exp_ALUSrcD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__7__exp_MemWriteD;
    __Vtask_controller_tb__DOT__run_test__7__exp_MemWriteD = 0;
    CData/*1:0*/ __Vtask_controller_tb__DOT__run_test__7__exp_ResultSrcD;
    __Vtask_controller_tb__DOT__run_test__7__exp_ResultSrcD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__7__exp_BranchD;
    __Vtask_controller_tb__DOT__run_test__7__exp_BranchD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__7__exp_JumpD;
    __Vtask_controller_tb__DOT__run_test__7__exp_JumpD = 0;
    CData/*3:0*/ __Vtask_controller_tb__DOT__run_test__7__exp_ALUControlD;
    __Vtask_controller_tb__DOT__run_test__7__exp_ALUControlD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__7__exp_PCSrcE;
    __Vtask_controller_tb__DOT__run_test__7__exp_PCSrcE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__7__exp_Ecall;
    __Vtask_controller_tb__DOT__run_test__7__exp_Ecall = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__7__exp_Ebreak;
    __Vtask_controller_tb__DOT__run_test__7__exp_Ebreak = 0;
    std::string __Vtask_controller_tb__DOT__run_test__7__test_name;
    CData/*6:0*/ __Vtask_controller_tb__DOT__run_test__8__in_op;
    __Vtask_controller_tb__DOT__run_test__8__in_op = 0;
    CData/*2:0*/ __Vtask_controller_tb__DOT__run_test__8__in_funct3;
    __Vtask_controller_tb__DOT__run_test__8__in_funct3 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__8__in_funct7b5;
    __Vtask_controller_tb__DOT__run_test__8__in_funct7b5 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__8__in_ZeroE;
    __Vtask_controller_tb__DOT__run_test__8__in_ZeroE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__8__in_BranchE;
    __Vtask_controller_tb__DOT__run_test__8__in_BranchE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__8__in_JumpE;
    __Vtask_controller_tb__DOT__run_test__8__in_JumpE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__8__in_ALUResultEb0;
    __Vtask_controller_tb__DOT__run_test__8__in_ALUResultEb0 = 0;
    SData/*11:0*/ __Vtask_controller_tb__DOT__run_test__8__in_funct12;
    __Vtask_controller_tb__DOT__run_test__8__in_funct12 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__8__exp_RegWriteD;
    __Vtask_controller_tb__DOT__run_test__8__exp_RegWriteD = 0;
    CData/*2:0*/ __Vtask_controller_tb__DOT__run_test__8__exp_ImmSrcD;
    __Vtask_controller_tb__DOT__run_test__8__exp_ImmSrcD = 0;
    CData/*1:0*/ __Vtask_controller_tb__DOT__run_test__8__exp_ALUSrcD;
    __Vtask_controller_tb__DOT__run_test__8__exp_ALUSrcD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__8__exp_MemWriteD;
    __Vtask_controller_tb__DOT__run_test__8__exp_MemWriteD = 0;
    CData/*1:0*/ __Vtask_controller_tb__DOT__run_test__8__exp_ResultSrcD;
    __Vtask_controller_tb__DOT__run_test__8__exp_ResultSrcD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__8__exp_BranchD;
    __Vtask_controller_tb__DOT__run_test__8__exp_BranchD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__8__exp_JumpD;
    __Vtask_controller_tb__DOT__run_test__8__exp_JumpD = 0;
    CData/*3:0*/ __Vtask_controller_tb__DOT__run_test__8__exp_ALUControlD;
    __Vtask_controller_tb__DOT__run_test__8__exp_ALUControlD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__8__exp_PCSrcE;
    __Vtask_controller_tb__DOT__run_test__8__exp_PCSrcE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__8__exp_Ecall;
    __Vtask_controller_tb__DOT__run_test__8__exp_Ecall = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__8__exp_Ebreak;
    __Vtask_controller_tb__DOT__run_test__8__exp_Ebreak = 0;
    std::string __Vtask_controller_tb__DOT__run_test__8__test_name;
    CData/*6:0*/ __Vtask_controller_tb__DOT__run_test__9__in_op;
    __Vtask_controller_tb__DOT__run_test__9__in_op = 0;
    CData/*2:0*/ __Vtask_controller_tb__DOT__run_test__9__in_funct3;
    __Vtask_controller_tb__DOT__run_test__9__in_funct3 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__9__in_funct7b5;
    __Vtask_controller_tb__DOT__run_test__9__in_funct7b5 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__9__in_ZeroE;
    __Vtask_controller_tb__DOT__run_test__9__in_ZeroE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__9__in_BranchE;
    __Vtask_controller_tb__DOT__run_test__9__in_BranchE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__9__in_JumpE;
    __Vtask_controller_tb__DOT__run_test__9__in_JumpE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__9__in_ALUResultEb0;
    __Vtask_controller_tb__DOT__run_test__9__in_ALUResultEb0 = 0;
    SData/*11:0*/ __Vtask_controller_tb__DOT__run_test__9__in_funct12;
    __Vtask_controller_tb__DOT__run_test__9__in_funct12 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__9__exp_RegWriteD;
    __Vtask_controller_tb__DOT__run_test__9__exp_RegWriteD = 0;
    CData/*2:0*/ __Vtask_controller_tb__DOT__run_test__9__exp_ImmSrcD;
    __Vtask_controller_tb__DOT__run_test__9__exp_ImmSrcD = 0;
    CData/*1:0*/ __Vtask_controller_tb__DOT__run_test__9__exp_ALUSrcD;
    __Vtask_controller_tb__DOT__run_test__9__exp_ALUSrcD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__9__exp_MemWriteD;
    __Vtask_controller_tb__DOT__run_test__9__exp_MemWriteD = 0;
    CData/*1:0*/ __Vtask_controller_tb__DOT__run_test__9__exp_ResultSrcD;
    __Vtask_controller_tb__DOT__run_test__9__exp_ResultSrcD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__9__exp_BranchD;
    __Vtask_controller_tb__DOT__run_test__9__exp_BranchD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__9__exp_JumpD;
    __Vtask_controller_tb__DOT__run_test__9__exp_JumpD = 0;
    CData/*3:0*/ __Vtask_controller_tb__DOT__run_test__9__exp_ALUControlD;
    __Vtask_controller_tb__DOT__run_test__9__exp_ALUControlD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__9__exp_PCSrcE;
    __Vtask_controller_tb__DOT__run_test__9__exp_PCSrcE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__9__exp_Ecall;
    __Vtask_controller_tb__DOT__run_test__9__exp_Ecall = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__9__exp_Ebreak;
    __Vtask_controller_tb__DOT__run_test__9__exp_Ebreak = 0;
    std::string __Vtask_controller_tb__DOT__run_test__9__test_name;
    CData/*6:0*/ __Vtask_controller_tb__DOT__run_test__10__in_op;
    __Vtask_controller_tb__DOT__run_test__10__in_op = 0;
    CData/*2:0*/ __Vtask_controller_tb__DOT__run_test__10__in_funct3;
    __Vtask_controller_tb__DOT__run_test__10__in_funct3 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__10__in_funct7b5;
    __Vtask_controller_tb__DOT__run_test__10__in_funct7b5 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__10__in_ZeroE;
    __Vtask_controller_tb__DOT__run_test__10__in_ZeroE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__10__in_BranchE;
    __Vtask_controller_tb__DOT__run_test__10__in_BranchE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__10__in_JumpE;
    __Vtask_controller_tb__DOT__run_test__10__in_JumpE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__10__in_ALUResultEb0;
    __Vtask_controller_tb__DOT__run_test__10__in_ALUResultEb0 = 0;
    SData/*11:0*/ __Vtask_controller_tb__DOT__run_test__10__in_funct12;
    __Vtask_controller_tb__DOT__run_test__10__in_funct12 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__10__exp_RegWriteD;
    __Vtask_controller_tb__DOT__run_test__10__exp_RegWriteD = 0;
    CData/*2:0*/ __Vtask_controller_tb__DOT__run_test__10__exp_ImmSrcD;
    __Vtask_controller_tb__DOT__run_test__10__exp_ImmSrcD = 0;
    CData/*1:0*/ __Vtask_controller_tb__DOT__run_test__10__exp_ALUSrcD;
    __Vtask_controller_tb__DOT__run_test__10__exp_ALUSrcD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__10__exp_MemWriteD;
    __Vtask_controller_tb__DOT__run_test__10__exp_MemWriteD = 0;
    CData/*1:0*/ __Vtask_controller_tb__DOT__run_test__10__exp_ResultSrcD;
    __Vtask_controller_tb__DOT__run_test__10__exp_ResultSrcD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__10__exp_BranchD;
    __Vtask_controller_tb__DOT__run_test__10__exp_BranchD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__10__exp_JumpD;
    __Vtask_controller_tb__DOT__run_test__10__exp_JumpD = 0;
    CData/*3:0*/ __Vtask_controller_tb__DOT__run_test__10__exp_ALUControlD;
    __Vtask_controller_tb__DOT__run_test__10__exp_ALUControlD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__10__exp_PCSrcE;
    __Vtask_controller_tb__DOT__run_test__10__exp_PCSrcE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__10__exp_Ecall;
    __Vtask_controller_tb__DOT__run_test__10__exp_Ecall = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__10__exp_Ebreak;
    __Vtask_controller_tb__DOT__run_test__10__exp_Ebreak = 0;
    std::string __Vtask_controller_tb__DOT__run_test__10__test_name;
    CData/*6:0*/ __Vtask_controller_tb__DOT__run_test__11__in_op;
    __Vtask_controller_tb__DOT__run_test__11__in_op = 0;
    CData/*2:0*/ __Vtask_controller_tb__DOT__run_test__11__in_funct3;
    __Vtask_controller_tb__DOT__run_test__11__in_funct3 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__11__in_funct7b5;
    __Vtask_controller_tb__DOT__run_test__11__in_funct7b5 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__11__in_ZeroE;
    __Vtask_controller_tb__DOT__run_test__11__in_ZeroE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__11__in_BranchE;
    __Vtask_controller_tb__DOT__run_test__11__in_BranchE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__11__in_JumpE;
    __Vtask_controller_tb__DOT__run_test__11__in_JumpE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__11__in_ALUResultEb0;
    __Vtask_controller_tb__DOT__run_test__11__in_ALUResultEb0 = 0;
    SData/*11:0*/ __Vtask_controller_tb__DOT__run_test__11__in_funct12;
    __Vtask_controller_tb__DOT__run_test__11__in_funct12 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__11__exp_RegWriteD;
    __Vtask_controller_tb__DOT__run_test__11__exp_RegWriteD = 0;
    CData/*2:0*/ __Vtask_controller_tb__DOT__run_test__11__exp_ImmSrcD;
    __Vtask_controller_tb__DOT__run_test__11__exp_ImmSrcD = 0;
    CData/*1:0*/ __Vtask_controller_tb__DOT__run_test__11__exp_ALUSrcD;
    __Vtask_controller_tb__DOT__run_test__11__exp_ALUSrcD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__11__exp_MemWriteD;
    __Vtask_controller_tb__DOT__run_test__11__exp_MemWriteD = 0;
    CData/*1:0*/ __Vtask_controller_tb__DOT__run_test__11__exp_ResultSrcD;
    __Vtask_controller_tb__DOT__run_test__11__exp_ResultSrcD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__11__exp_BranchD;
    __Vtask_controller_tb__DOT__run_test__11__exp_BranchD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__11__exp_JumpD;
    __Vtask_controller_tb__DOT__run_test__11__exp_JumpD = 0;
    CData/*3:0*/ __Vtask_controller_tb__DOT__run_test__11__exp_ALUControlD;
    __Vtask_controller_tb__DOT__run_test__11__exp_ALUControlD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__11__exp_PCSrcE;
    __Vtask_controller_tb__DOT__run_test__11__exp_PCSrcE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__11__exp_Ecall;
    __Vtask_controller_tb__DOT__run_test__11__exp_Ecall = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__11__exp_Ebreak;
    __Vtask_controller_tb__DOT__run_test__11__exp_Ebreak = 0;
    std::string __Vtask_controller_tb__DOT__run_test__11__test_name;
    CData/*6:0*/ __Vtask_controller_tb__DOT__run_test__12__in_op;
    __Vtask_controller_tb__DOT__run_test__12__in_op = 0;
    CData/*2:0*/ __Vtask_controller_tb__DOT__run_test__12__in_funct3;
    __Vtask_controller_tb__DOT__run_test__12__in_funct3 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__12__in_funct7b5;
    __Vtask_controller_tb__DOT__run_test__12__in_funct7b5 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__12__in_ZeroE;
    __Vtask_controller_tb__DOT__run_test__12__in_ZeroE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__12__in_BranchE;
    __Vtask_controller_tb__DOT__run_test__12__in_BranchE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__12__in_JumpE;
    __Vtask_controller_tb__DOT__run_test__12__in_JumpE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__12__in_ALUResultEb0;
    __Vtask_controller_tb__DOT__run_test__12__in_ALUResultEb0 = 0;
    SData/*11:0*/ __Vtask_controller_tb__DOT__run_test__12__in_funct12;
    __Vtask_controller_tb__DOT__run_test__12__in_funct12 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__12__exp_RegWriteD;
    __Vtask_controller_tb__DOT__run_test__12__exp_RegWriteD = 0;
    CData/*2:0*/ __Vtask_controller_tb__DOT__run_test__12__exp_ImmSrcD;
    __Vtask_controller_tb__DOT__run_test__12__exp_ImmSrcD = 0;
    CData/*1:0*/ __Vtask_controller_tb__DOT__run_test__12__exp_ALUSrcD;
    __Vtask_controller_tb__DOT__run_test__12__exp_ALUSrcD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__12__exp_MemWriteD;
    __Vtask_controller_tb__DOT__run_test__12__exp_MemWriteD = 0;
    CData/*1:0*/ __Vtask_controller_tb__DOT__run_test__12__exp_ResultSrcD;
    __Vtask_controller_tb__DOT__run_test__12__exp_ResultSrcD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__12__exp_BranchD;
    __Vtask_controller_tb__DOT__run_test__12__exp_BranchD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__12__exp_JumpD;
    __Vtask_controller_tb__DOT__run_test__12__exp_JumpD = 0;
    CData/*3:0*/ __Vtask_controller_tb__DOT__run_test__12__exp_ALUControlD;
    __Vtask_controller_tb__DOT__run_test__12__exp_ALUControlD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__12__exp_PCSrcE;
    __Vtask_controller_tb__DOT__run_test__12__exp_PCSrcE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__12__exp_Ecall;
    __Vtask_controller_tb__DOT__run_test__12__exp_Ecall = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__12__exp_Ebreak;
    __Vtask_controller_tb__DOT__run_test__12__exp_Ebreak = 0;
    std::string __Vtask_controller_tb__DOT__run_test__12__test_name;
    CData/*6:0*/ __Vtask_controller_tb__DOT__run_test__13__in_op;
    __Vtask_controller_tb__DOT__run_test__13__in_op = 0;
    CData/*2:0*/ __Vtask_controller_tb__DOT__run_test__13__in_funct3;
    __Vtask_controller_tb__DOT__run_test__13__in_funct3 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__13__in_funct7b5;
    __Vtask_controller_tb__DOT__run_test__13__in_funct7b5 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__13__in_ZeroE;
    __Vtask_controller_tb__DOT__run_test__13__in_ZeroE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__13__in_BranchE;
    __Vtask_controller_tb__DOT__run_test__13__in_BranchE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__13__in_JumpE;
    __Vtask_controller_tb__DOT__run_test__13__in_JumpE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__13__in_ALUResultEb0;
    __Vtask_controller_tb__DOT__run_test__13__in_ALUResultEb0 = 0;
    SData/*11:0*/ __Vtask_controller_tb__DOT__run_test__13__in_funct12;
    __Vtask_controller_tb__DOT__run_test__13__in_funct12 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__13__exp_RegWriteD;
    __Vtask_controller_tb__DOT__run_test__13__exp_RegWriteD = 0;
    CData/*2:0*/ __Vtask_controller_tb__DOT__run_test__13__exp_ImmSrcD;
    __Vtask_controller_tb__DOT__run_test__13__exp_ImmSrcD = 0;
    CData/*1:0*/ __Vtask_controller_tb__DOT__run_test__13__exp_ALUSrcD;
    __Vtask_controller_tb__DOT__run_test__13__exp_ALUSrcD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__13__exp_MemWriteD;
    __Vtask_controller_tb__DOT__run_test__13__exp_MemWriteD = 0;
    CData/*1:0*/ __Vtask_controller_tb__DOT__run_test__13__exp_ResultSrcD;
    __Vtask_controller_tb__DOT__run_test__13__exp_ResultSrcD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__13__exp_BranchD;
    __Vtask_controller_tb__DOT__run_test__13__exp_BranchD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__13__exp_JumpD;
    __Vtask_controller_tb__DOT__run_test__13__exp_JumpD = 0;
    CData/*3:0*/ __Vtask_controller_tb__DOT__run_test__13__exp_ALUControlD;
    __Vtask_controller_tb__DOT__run_test__13__exp_ALUControlD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__13__exp_PCSrcE;
    __Vtask_controller_tb__DOT__run_test__13__exp_PCSrcE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__13__exp_Ecall;
    __Vtask_controller_tb__DOT__run_test__13__exp_Ecall = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__13__exp_Ebreak;
    __Vtask_controller_tb__DOT__run_test__13__exp_Ebreak = 0;
    std::string __Vtask_controller_tb__DOT__run_test__13__test_name;
    CData/*6:0*/ __Vtask_controller_tb__DOT__run_test__14__in_op;
    __Vtask_controller_tb__DOT__run_test__14__in_op = 0;
    CData/*2:0*/ __Vtask_controller_tb__DOT__run_test__14__in_funct3;
    __Vtask_controller_tb__DOT__run_test__14__in_funct3 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__14__in_funct7b5;
    __Vtask_controller_tb__DOT__run_test__14__in_funct7b5 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__14__in_ZeroE;
    __Vtask_controller_tb__DOT__run_test__14__in_ZeroE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__14__in_BranchE;
    __Vtask_controller_tb__DOT__run_test__14__in_BranchE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__14__in_JumpE;
    __Vtask_controller_tb__DOT__run_test__14__in_JumpE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__14__in_ALUResultEb0;
    __Vtask_controller_tb__DOT__run_test__14__in_ALUResultEb0 = 0;
    SData/*11:0*/ __Vtask_controller_tb__DOT__run_test__14__in_funct12;
    __Vtask_controller_tb__DOT__run_test__14__in_funct12 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__14__exp_RegWriteD;
    __Vtask_controller_tb__DOT__run_test__14__exp_RegWriteD = 0;
    CData/*2:0*/ __Vtask_controller_tb__DOT__run_test__14__exp_ImmSrcD;
    __Vtask_controller_tb__DOT__run_test__14__exp_ImmSrcD = 0;
    CData/*1:0*/ __Vtask_controller_tb__DOT__run_test__14__exp_ALUSrcD;
    __Vtask_controller_tb__DOT__run_test__14__exp_ALUSrcD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__14__exp_MemWriteD;
    __Vtask_controller_tb__DOT__run_test__14__exp_MemWriteD = 0;
    CData/*1:0*/ __Vtask_controller_tb__DOT__run_test__14__exp_ResultSrcD;
    __Vtask_controller_tb__DOT__run_test__14__exp_ResultSrcD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__14__exp_BranchD;
    __Vtask_controller_tb__DOT__run_test__14__exp_BranchD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__14__exp_JumpD;
    __Vtask_controller_tb__DOT__run_test__14__exp_JumpD = 0;
    CData/*3:0*/ __Vtask_controller_tb__DOT__run_test__14__exp_ALUControlD;
    __Vtask_controller_tb__DOT__run_test__14__exp_ALUControlD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__14__exp_PCSrcE;
    __Vtask_controller_tb__DOT__run_test__14__exp_PCSrcE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__14__exp_Ecall;
    __Vtask_controller_tb__DOT__run_test__14__exp_Ecall = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__14__exp_Ebreak;
    __Vtask_controller_tb__DOT__run_test__14__exp_Ebreak = 0;
    std::string __Vtask_controller_tb__DOT__run_test__14__test_name;
    CData/*6:0*/ __Vtask_controller_tb__DOT__run_test__15__in_op;
    __Vtask_controller_tb__DOT__run_test__15__in_op = 0;
    CData/*2:0*/ __Vtask_controller_tb__DOT__run_test__15__in_funct3;
    __Vtask_controller_tb__DOT__run_test__15__in_funct3 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__15__in_funct7b5;
    __Vtask_controller_tb__DOT__run_test__15__in_funct7b5 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__15__in_ZeroE;
    __Vtask_controller_tb__DOT__run_test__15__in_ZeroE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__15__in_BranchE;
    __Vtask_controller_tb__DOT__run_test__15__in_BranchE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__15__in_JumpE;
    __Vtask_controller_tb__DOT__run_test__15__in_JumpE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__15__in_ALUResultEb0;
    __Vtask_controller_tb__DOT__run_test__15__in_ALUResultEb0 = 0;
    SData/*11:0*/ __Vtask_controller_tb__DOT__run_test__15__in_funct12;
    __Vtask_controller_tb__DOT__run_test__15__in_funct12 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__15__exp_RegWriteD;
    __Vtask_controller_tb__DOT__run_test__15__exp_RegWriteD = 0;
    CData/*2:0*/ __Vtask_controller_tb__DOT__run_test__15__exp_ImmSrcD;
    __Vtask_controller_tb__DOT__run_test__15__exp_ImmSrcD = 0;
    CData/*1:0*/ __Vtask_controller_tb__DOT__run_test__15__exp_ALUSrcD;
    __Vtask_controller_tb__DOT__run_test__15__exp_ALUSrcD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__15__exp_MemWriteD;
    __Vtask_controller_tb__DOT__run_test__15__exp_MemWriteD = 0;
    CData/*1:0*/ __Vtask_controller_tb__DOT__run_test__15__exp_ResultSrcD;
    __Vtask_controller_tb__DOT__run_test__15__exp_ResultSrcD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__15__exp_BranchD;
    __Vtask_controller_tb__DOT__run_test__15__exp_BranchD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__15__exp_JumpD;
    __Vtask_controller_tb__DOT__run_test__15__exp_JumpD = 0;
    CData/*3:0*/ __Vtask_controller_tb__DOT__run_test__15__exp_ALUControlD;
    __Vtask_controller_tb__DOT__run_test__15__exp_ALUControlD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__15__exp_PCSrcE;
    __Vtask_controller_tb__DOT__run_test__15__exp_PCSrcE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__15__exp_Ecall;
    __Vtask_controller_tb__DOT__run_test__15__exp_Ecall = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__15__exp_Ebreak;
    __Vtask_controller_tb__DOT__run_test__15__exp_Ebreak = 0;
    std::string __Vtask_controller_tb__DOT__run_test__15__test_name;
    CData/*6:0*/ __Vtask_controller_tb__DOT__run_test__16__in_op;
    __Vtask_controller_tb__DOT__run_test__16__in_op = 0;
    CData/*2:0*/ __Vtask_controller_tb__DOT__run_test__16__in_funct3;
    __Vtask_controller_tb__DOT__run_test__16__in_funct3 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__16__in_funct7b5;
    __Vtask_controller_tb__DOT__run_test__16__in_funct7b5 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__16__in_ZeroE;
    __Vtask_controller_tb__DOT__run_test__16__in_ZeroE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__16__in_BranchE;
    __Vtask_controller_tb__DOT__run_test__16__in_BranchE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__16__in_JumpE;
    __Vtask_controller_tb__DOT__run_test__16__in_JumpE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__16__in_ALUResultEb0;
    __Vtask_controller_tb__DOT__run_test__16__in_ALUResultEb0 = 0;
    SData/*11:0*/ __Vtask_controller_tb__DOT__run_test__16__in_funct12;
    __Vtask_controller_tb__DOT__run_test__16__in_funct12 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__16__exp_RegWriteD;
    __Vtask_controller_tb__DOT__run_test__16__exp_RegWriteD = 0;
    CData/*2:0*/ __Vtask_controller_tb__DOT__run_test__16__exp_ImmSrcD;
    __Vtask_controller_tb__DOT__run_test__16__exp_ImmSrcD = 0;
    CData/*1:0*/ __Vtask_controller_tb__DOT__run_test__16__exp_ALUSrcD;
    __Vtask_controller_tb__DOT__run_test__16__exp_ALUSrcD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__16__exp_MemWriteD;
    __Vtask_controller_tb__DOT__run_test__16__exp_MemWriteD = 0;
    CData/*1:0*/ __Vtask_controller_tb__DOT__run_test__16__exp_ResultSrcD;
    __Vtask_controller_tb__DOT__run_test__16__exp_ResultSrcD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__16__exp_BranchD;
    __Vtask_controller_tb__DOT__run_test__16__exp_BranchD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__16__exp_JumpD;
    __Vtask_controller_tb__DOT__run_test__16__exp_JumpD = 0;
    CData/*3:0*/ __Vtask_controller_tb__DOT__run_test__16__exp_ALUControlD;
    __Vtask_controller_tb__DOT__run_test__16__exp_ALUControlD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__16__exp_PCSrcE;
    __Vtask_controller_tb__DOT__run_test__16__exp_PCSrcE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__16__exp_Ecall;
    __Vtask_controller_tb__DOT__run_test__16__exp_Ecall = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__16__exp_Ebreak;
    __Vtask_controller_tb__DOT__run_test__16__exp_Ebreak = 0;
    std::string __Vtask_controller_tb__DOT__run_test__16__test_name;
    CData/*6:0*/ __Vtask_controller_tb__DOT__run_test__17__in_op;
    __Vtask_controller_tb__DOT__run_test__17__in_op = 0;
    CData/*2:0*/ __Vtask_controller_tb__DOT__run_test__17__in_funct3;
    __Vtask_controller_tb__DOT__run_test__17__in_funct3 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__17__in_funct7b5;
    __Vtask_controller_tb__DOT__run_test__17__in_funct7b5 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__17__in_ZeroE;
    __Vtask_controller_tb__DOT__run_test__17__in_ZeroE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__17__in_BranchE;
    __Vtask_controller_tb__DOT__run_test__17__in_BranchE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__17__in_JumpE;
    __Vtask_controller_tb__DOT__run_test__17__in_JumpE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__17__in_ALUResultEb0;
    __Vtask_controller_tb__DOT__run_test__17__in_ALUResultEb0 = 0;
    SData/*11:0*/ __Vtask_controller_tb__DOT__run_test__17__in_funct12;
    __Vtask_controller_tb__DOT__run_test__17__in_funct12 = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__17__exp_RegWriteD;
    __Vtask_controller_tb__DOT__run_test__17__exp_RegWriteD = 0;
    CData/*2:0*/ __Vtask_controller_tb__DOT__run_test__17__exp_ImmSrcD;
    __Vtask_controller_tb__DOT__run_test__17__exp_ImmSrcD = 0;
    CData/*1:0*/ __Vtask_controller_tb__DOT__run_test__17__exp_ALUSrcD;
    __Vtask_controller_tb__DOT__run_test__17__exp_ALUSrcD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__17__exp_MemWriteD;
    __Vtask_controller_tb__DOT__run_test__17__exp_MemWriteD = 0;
    CData/*1:0*/ __Vtask_controller_tb__DOT__run_test__17__exp_ResultSrcD;
    __Vtask_controller_tb__DOT__run_test__17__exp_ResultSrcD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__17__exp_BranchD;
    __Vtask_controller_tb__DOT__run_test__17__exp_BranchD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__17__exp_JumpD;
    __Vtask_controller_tb__DOT__run_test__17__exp_JumpD = 0;
    CData/*3:0*/ __Vtask_controller_tb__DOT__run_test__17__exp_ALUControlD;
    __Vtask_controller_tb__DOT__run_test__17__exp_ALUControlD = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__17__exp_PCSrcE;
    __Vtask_controller_tb__DOT__run_test__17__exp_PCSrcE = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__17__exp_Ecall;
    __Vtask_controller_tb__DOT__run_test__17__exp_Ecall = 0;
    CData/*0:0*/ __Vtask_controller_tb__DOT__run_test__17__exp_Ebreak;
    __Vtask_controller_tb__DOT__run_test__17__exp_Ebreak = 0;
    std::string __Vtask_controller_tb__DOT__run_test__17__test_name;
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"wave.vcd"});
    vlSymsp->_traceDumpOpen();
    VL_WRITEF_NX("\n===== Controller Tests =====\n\n----------- R-type Instructions -----------\n",0);
    __Vtask_controller_tb__DOT__run_test__0__test_name = 
        std::string{"R-type ADD"};
    __Vtask_controller_tb__DOT__run_test__0__exp_Ebreak = 0U;
    __Vtask_controller_tb__DOT__run_test__0__exp_Ecall = 0U;
    __Vtask_controller_tb__DOT__run_test__0__exp_PCSrcE = 0U;
    __Vtask_controller_tb__DOT__run_test__0__exp_ALUControlD = 0U;
    __Vtask_controller_tb__DOT__run_test__0__exp_JumpD = 0U;
    __Vtask_controller_tb__DOT__run_test__0__exp_BranchD = 0U;
    __Vtask_controller_tb__DOT__run_test__0__exp_ResultSrcD = 0U;
    __Vtask_controller_tb__DOT__run_test__0__exp_MemWriteD = 0U;
    __Vtask_controller_tb__DOT__run_test__0__exp_ALUSrcD = 0U;
    __Vtask_controller_tb__DOT__run_test__0__exp_ImmSrcD 
        = vlSelfRef.controller_tb__DOT____Vxrand_h87975763__0;
    __Vtask_controller_tb__DOT__run_test__0__exp_RegWriteD = 1U;
    vlSelfRef.controller_tb__DOT__test_num = ((IData)(1U) 
                                              + vlSelfRef.controller_tb__DOT__test_num);
    vlSelfRef.controller_tb__DOT__op = 0x33U;
    vlSelfRef.controller_tb__DOT__funct3 = 0U;
    vlSelfRef.controller_tb__DOT__funct7b5 = 0U;
    vlSelfRef.controller_tb__DOT__ZeroE = 0U;
    vlSelfRef.controller_tb__DOT__BranchE = 0U;
    vlSelfRef.controller_tb__DOT__JumpE = 0U;
    vlSelfRef.controller_tb__DOT__ALUResultEb0 = 0U;
    vlSelfRef.controller_tb__DOT__funct12 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/controller_tb.sv", 
                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((((((((((((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                          >> 0xcU)) == (IData)(__Vtask_controller_tb__DOT__run_test__0__exp_RegWriteD)) 
                  & (((0x33U == (IData)(vlSelfRef.controller_tb__DOT__op)) 
                      | (0x73U == (IData)(vlSelfRef.controller_tb__DOT__op))) 
                     | ((7U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                               >> 9U)) == (IData)(__Vtask_controller_tb__DOT__run_test__0__exp_ImmSrcD)))) 
                 & ((3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                           >> 7U)) == (IData)(__Vtask_controller_tb__DOT__run_test__0__exp_ALUSrcD))) 
                & ((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                          >> 6U)) == (IData)(__Vtask_controller_tb__DOT__run_test__0__exp_MemWriteD))) 
               & ((3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                         >> 4U)) == (IData)(__Vtask_controller_tb__DOT__run_test__0__exp_ResultSrcD))) 
              & ((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                        >> 3U)) == (IData)(__Vtask_controller_tb__DOT__run_test__0__exp_BranchD))) 
             & ((1U & (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls)) 
                == (IData)(__Vtask_controller_tb__DOT__run_test__0__exp_JumpD))) 
            & ((IData)(vlSelfRef.controller_tb__DOT__ALUControlD) 
               == (IData)(__Vtask_controller_tb__DOT__run_test__0__exp_ALUControlD))) 
           & ((IData)(vlSelfRef.controller_tb__DOT__PCSrcE) 
              == (IData)(__Vtask_controller_tb__DOT__run_test__0__exp_PCSrcE))) 
          & ((IData)(vlSelfRef.controller_tb__DOT__Ecall) 
             == (IData)(__Vtask_controller_tb__DOT__run_test__0__exp_Ecall))) 
         & ((IData)(vlSelfRef.controller_tb__DOT__Ebreak) 
            == (IData)(__Vtask_controller_tb__DOT__run_test__0__exp_Ebreak)))) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n        op=%b funct3=%b funct7b5=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n",0,
                     32,vlSelfRef.controller_tb__DOT__test_num,
                     -1,&(__Vtask_controller_tb__DOT__run_test__0__test_name),
                     7,(IData)(vlSelfRef.controller_tb__DOT__op),
                     3,vlSelfRef.controller_tb__DOT__funct3,
                     1,(IData)(vlSelfRef.controller_tb__DOT__funct7b5),
                     1,vlSelfRef.controller_tb__DOT__ZeroE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__BranchE),
                     1,vlSelfRef.controller_tb__DOT__JumpE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0));
        vlSelfRef.controller_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.controller_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n        Inputs:\n        op=%b funct3=%b funct7b5=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n        funct12=%b\n        Expected:\n        RegWrite=%b ImmSrc=%b ALUSrc=%b MemWrite=%b ResultSrc=%b Branch=%b Jump=%b ALUControl=%b PCSrc=%b Ecall=%b Ebreak=%b\n        Actual:\n        RegWrite=%b ImmSrc=%b ALUSrc=%b MemWrite=%b ResultSrc=%b Branch=%b Jump=%b ALUControl=%b PCSrc=%b Ecall=%b Ebreak=%b\n",0,
                     32,vlSelfRef.controller_tb__DOT__test_num,
                     -1,&(__Vtask_controller_tb__DOT__run_test__0__test_name),
                     7,(IData)(vlSelfRef.controller_tb__DOT__op),
                     3,vlSelfRef.controller_tb__DOT__funct3,
                     1,(IData)(vlSelfRef.controller_tb__DOT__funct7b5),
                     1,vlSelfRef.controller_tb__DOT__ZeroE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__BranchE),
                     1,vlSelfRef.controller_tb__DOT__JumpE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0),
                     12,vlSelfRef.controller_tb__DOT__funct12,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__0__exp_RegWriteD),
                     3,__Vtask_controller_tb__DOT__run_test__0__exp_ImmSrcD,
                     2,(IData)(__Vtask_controller_tb__DOT__run_test__0__exp_ALUSrcD),
                     1,__Vtask_controller_tb__DOT__run_test__0__exp_MemWriteD,
                     2,(IData)(__Vtask_controller_tb__DOT__run_test__0__exp_ResultSrcD),
                     1,__Vtask_controller_tb__DOT__run_test__0__exp_BranchD,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__0__exp_JumpD),
                     4,__Vtask_controller_tb__DOT__run_test__0__exp_ALUControlD,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__0__exp_PCSrcE),
                     1,__Vtask_controller_tb__DOT__run_test__0__exp_Ecall,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__0__exp_Ebreak),
                     1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 0xcU)),3,(7U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                                 >> 9U)),
                     2,(3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 7U)),1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                               >> 6U)),
                     2,(3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 4U)),1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                               >> 3U)),
                     1,(1U & (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls)),
                     4,(IData)(vlSelfRef.controller_tb__DOT__ALUControlD),
                     1,vlSelfRef.controller_tb__DOT__PCSrcE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__Ecall),
                     1,vlSelfRef.controller_tb__DOT__Ebreak);
        vlSelfRef.controller_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.controller_tb__DOT__fail_count);
    }
    vlSelfRef.controller_tb__DOT__op = 0x33U;
    vlSelfRef.controller_tb__DOT__funct3 = 0U;
    vlSelfRef.controller_tb__DOT__funct7b5 = 1U;
    vlSelfRef.controller_tb__DOT__ZeroE = 0U;
    vlSelfRef.controller_tb__DOT__BranchE = 0U;
    vlSelfRef.controller_tb__DOT__JumpE = 0U;
    vlSelfRef.controller_tb__DOT__ALUResultEb0 = 0U;
    vlSelfRef.controller_tb__DOT__funct12 = 0U;
    __Vtask_controller_tb__DOT__run_test__1__test_name = 
        std::string{"R-type SUB"};
    __Vtask_controller_tb__DOT__run_test__1__exp_Ebreak = 0U;
    __Vtask_controller_tb__DOT__run_test__1__exp_Ecall = 0U;
    __Vtask_controller_tb__DOT__run_test__1__exp_PCSrcE = 0U;
    __Vtask_controller_tb__DOT__run_test__1__exp_ALUControlD = 1U;
    __Vtask_controller_tb__DOT__run_test__1__exp_JumpD = 0U;
    __Vtask_controller_tb__DOT__run_test__1__exp_BranchD = 0U;
    __Vtask_controller_tb__DOT__run_test__1__exp_ResultSrcD = 0U;
    __Vtask_controller_tb__DOT__run_test__1__exp_MemWriteD = 0U;
    __Vtask_controller_tb__DOT__run_test__1__exp_ALUSrcD = 0U;
    __Vtask_controller_tb__DOT__run_test__1__exp_ImmSrcD 
        = vlSelfRef.controller_tb__DOT____Vxrand_h87975763__1;
    __Vtask_controller_tb__DOT__run_test__1__exp_RegWriteD = 1U;
    __Vtask_controller_tb__DOT__run_test__1__in_funct12 
        = vlSelfRef.controller_tb__DOT__funct12;
    __Vtask_controller_tb__DOT__run_test__1__in_ALUResultEb0 
        = vlSelfRef.controller_tb__DOT__ALUResultEb0;
    __Vtask_controller_tb__DOT__run_test__1__in_JumpE 
        = vlSelfRef.controller_tb__DOT__JumpE;
    __Vtask_controller_tb__DOT__run_test__1__in_BranchE 
        = vlSelfRef.controller_tb__DOT__BranchE;
    __Vtask_controller_tb__DOT__run_test__1__in_ZeroE 
        = vlSelfRef.controller_tb__DOT__ZeroE;
    __Vtask_controller_tb__DOT__run_test__1__in_funct7b5 
        = vlSelfRef.controller_tb__DOT__funct7b5;
    __Vtask_controller_tb__DOT__run_test__1__in_funct3 
        = vlSelfRef.controller_tb__DOT__funct3;
    __Vtask_controller_tb__DOT__run_test__1__in_op 
        = vlSelfRef.controller_tb__DOT__op;
    vlSelfRef.controller_tb__DOT__test_num = ((IData)(1U) 
                                              + vlSelfRef.controller_tb__DOT__test_num);
    vlSelfRef.controller_tb__DOT__op = __Vtask_controller_tb__DOT__run_test__1__in_op;
    vlSelfRef.controller_tb__DOT__funct3 = __Vtask_controller_tb__DOT__run_test__1__in_funct3;
    vlSelfRef.controller_tb__DOT__funct7b5 = __Vtask_controller_tb__DOT__run_test__1__in_funct7b5;
    vlSelfRef.controller_tb__DOT__ZeroE = __Vtask_controller_tb__DOT__run_test__1__in_ZeroE;
    vlSelfRef.controller_tb__DOT__BranchE = __Vtask_controller_tb__DOT__run_test__1__in_BranchE;
    vlSelfRef.controller_tb__DOT__JumpE = __Vtask_controller_tb__DOT__run_test__1__in_JumpE;
    vlSelfRef.controller_tb__DOT__ALUResultEb0 = __Vtask_controller_tb__DOT__run_test__1__in_ALUResultEb0;
    vlSelfRef.controller_tb__DOT__funct12 = __Vtask_controller_tb__DOT__run_test__1__in_funct12;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/controller_tb.sv", 
                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((((((((((((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                          >> 0xcU)) == (IData)(__Vtask_controller_tb__DOT__run_test__1__exp_RegWriteD)) 
                  & (((0x33U == (IData)(vlSelfRef.controller_tb__DOT__op)) 
                      | (0x73U == (IData)(vlSelfRef.controller_tb__DOT__op))) 
                     | ((7U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                               >> 9U)) == (IData)(__Vtask_controller_tb__DOT__run_test__1__exp_ImmSrcD)))) 
                 & ((3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                           >> 7U)) == (IData)(__Vtask_controller_tb__DOT__run_test__1__exp_ALUSrcD))) 
                & ((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                          >> 6U)) == (IData)(__Vtask_controller_tb__DOT__run_test__1__exp_MemWriteD))) 
               & ((3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                         >> 4U)) == (IData)(__Vtask_controller_tb__DOT__run_test__1__exp_ResultSrcD))) 
              & ((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                        >> 3U)) == (IData)(__Vtask_controller_tb__DOT__run_test__1__exp_BranchD))) 
             & ((1U & (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls)) 
                == (IData)(__Vtask_controller_tb__DOT__run_test__1__exp_JumpD))) 
            & ((IData)(vlSelfRef.controller_tb__DOT__ALUControlD) 
               == (IData)(__Vtask_controller_tb__DOT__run_test__1__exp_ALUControlD))) 
           & ((IData)(vlSelfRef.controller_tb__DOT__PCSrcE) 
              == (IData)(__Vtask_controller_tb__DOT__run_test__1__exp_PCSrcE))) 
          & ((IData)(vlSelfRef.controller_tb__DOT__Ecall) 
             == (IData)(__Vtask_controller_tb__DOT__run_test__1__exp_Ecall))) 
         & ((IData)(vlSelfRef.controller_tb__DOT__Ebreak) 
            == (IData)(__Vtask_controller_tb__DOT__run_test__1__exp_Ebreak)))) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n        op=%b funct3=%b funct7b5=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n",0,
                     32,vlSelfRef.controller_tb__DOT__test_num,
                     -1,&(__Vtask_controller_tb__DOT__run_test__1__test_name),
                     7,(IData)(vlSelfRef.controller_tb__DOT__op),
                     3,vlSelfRef.controller_tb__DOT__funct3,
                     1,(IData)(vlSelfRef.controller_tb__DOT__funct7b5),
                     1,vlSelfRef.controller_tb__DOT__ZeroE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__BranchE),
                     1,vlSelfRef.controller_tb__DOT__JumpE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0));
        vlSelfRef.controller_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.controller_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n        Inputs:\n        op=%b funct3=%b funct7b5=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n        funct12=%b\n        Expected:\n        RegWrite=%b ImmSrc=%b ALUSrc=%b MemWrite=%b ResultSrc=%b Branch=%b Jump=%b ALUControl=%b PCSrc=%b Ecall=%b Ebreak=%b\n        Actual:\n        RegWrite=%b ImmSrc=%b ALUSrc=%b MemWrite=%b ResultSrc=%b Branch=%b Jump=%b ALUControl=%b PCSrc=%b Ecall=%b Ebreak=%b\n",0,
                     32,vlSelfRef.controller_tb__DOT__test_num,
                     -1,&(__Vtask_controller_tb__DOT__run_test__1__test_name),
                     7,(IData)(vlSelfRef.controller_tb__DOT__op),
                     3,vlSelfRef.controller_tb__DOT__funct3,
                     1,(IData)(vlSelfRef.controller_tb__DOT__funct7b5),
                     1,vlSelfRef.controller_tb__DOT__ZeroE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__BranchE),
                     1,vlSelfRef.controller_tb__DOT__JumpE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0),
                     12,vlSelfRef.controller_tb__DOT__funct12,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__1__exp_RegWriteD),
                     3,__Vtask_controller_tb__DOT__run_test__1__exp_ImmSrcD,
                     2,(IData)(__Vtask_controller_tb__DOT__run_test__1__exp_ALUSrcD),
                     1,__Vtask_controller_tb__DOT__run_test__1__exp_MemWriteD,
                     2,(IData)(__Vtask_controller_tb__DOT__run_test__1__exp_ResultSrcD),
                     1,__Vtask_controller_tb__DOT__run_test__1__exp_BranchD,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__1__exp_JumpD),
                     4,__Vtask_controller_tb__DOT__run_test__1__exp_ALUControlD,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__1__exp_PCSrcE),
                     1,__Vtask_controller_tb__DOT__run_test__1__exp_Ecall,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__1__exp_Ebreak),
                     1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 0xcU)),3,(7U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                                 >> 9U)),
                     2,(3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 7U)),1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                               >> 6U)),
                     2,(3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 4U)),1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                               >> 3U)),
                     1,(1U & (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls)),
                     4,(IData)(vlSelfRef.controller_tb__DOT__ALUControlD),
                     1,vlSelfRef.controller_tb__DOT__PCSrcE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__Ecall),
                     1,vlSelfRef.controller_tb__DOT__Ebreak);
        vlSelfRef.controller_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.controller_tb__DOT__fail_count);
    }
    vlSelfRef.controller_tb__DOT__op = 0x33U;
    vlSelfRef.controller_tb__DOT__funct3 = 1U;
    vlSelfRef.controller_tb__DOT__funct7b5 = 0U;
    vlSelfRef.controller_tb__DOT__ZeroE = 0U;
    vlSelfRef.controller_tb__DOT__BranchE = 0U;
    vlSelfRef.controller_tb__DOT__JumpE = 0U;
    vlSelfRef.controller_tb__DOT__ALUResultEb0 = 0U;
    vlSelfRef.controller_tb__DOT__funct12 = 0U;
    __Vtask_controller_tb__DOT__run_test__2__test_name = 
        std::string{"R-type SLL"};
    __Vtask_controller_tb__DOT__run_test__2__exp_Ebreak = 0U;
    __Vtask_controller_tb__DOT__run_test__2__exp_Ecall = 0U;
    __Vtask_controller_tb__DOT__run_test__2__exp_PCSrcE = 0U;
    __Vtask_controller_tb__DOT__run_test__2__exp_ALUControlD = 6U;
    __Vtask_controller_tb__DOT__run_test__2__exp_JumpD = 0U;
    __Vtask_controller_tb__DOT__run_test__2__exp_BranchD = 0U;
    __Vtask_controller_tb__DOT__run_test__2__exp_ResultSrcD = 0U;
    __Vtask_controller_tb__DOT__run_test__2__exp_MemWriteD = 0U;
    __Vtask_controller_tb__DOT__run_test__2__exp_ALUSrcD = 0U;
    __Vtask_controller_tb__DOT__run_test__2__exp_ImmSrcD 
        = vlSelfRef.controller_tb__DOT____Vxrand_h87975763__2;
    __Vtask_controller_tb__DOT__run_test__2__exp_RegWriteD = 1U;
    __Vtask_controller_tb__DOT__run_test__2__in_funct12 
        = vlSelfRef.controller_tb__DOT__funct12;
    __Vtask_controller_tb__DOT__run_test__2__in_ALUResultEb0 
        = vlSelfRef.controller_tb__DOT__ALUResultEb0;
    __Vtask_controller_tb__DOT__run_test__2__in_JumpE 
        = vlSelfRef.controller_tb__DOT__JumpE;
    __Vtask_controller_tb__DOT__run_test__2__in_BranchE 
        = vlSelfRef.controller_tb__DOT__BranchE;
    __Vtask_controller_tb__DOT__run_test__2__in_ZeroE 
        = vlSelfRef.controller_tb__DOT__ZeroE;
    __Vtask_controller_tb__DOT__run_test__2__in_funct7b5 
        = vlSelfRef.controller_tb__DOT__funct7b5;
    __Vtask_controller_tb__DOT__run_test__2__in_funct3 
        = vlSelfRef.controller_tb__DOT__funct3;
    __Vtask_controller_tb__DOT__run_test__2__in_op 
        = vlSelfRef.controller_tb__DOT__op;
    vlSelfRef.controller_tb__DOT__test_num = ((IData)(1U) 
                                              + vlSelfRef.controller_tb__DOT__test_num);
    vlSelfRef.controller_tb__DOT__op = __Vtask_controller_tb__DOT__run_test__2__in_op;
    vlSelfRef.controller_tb__DOT__funct3 = __Vtask_controller_tb__DOT__run_test__2__in_funct3;
    vlSelfRef.controller_tb__DOT__funct7b5 = __Vtask_controller_tb__DOT__run_test__2__in_funct7b5;
    vlSelfRef.controller_tb__DOT__ZeroE = __Vtask_controller_tb__DOT__run_test__2__in_ZeroE;
    vlSelfRef.controller_tb__DOT__BranchE = __Vtask_controller_tb__DOT__run_test__2__in_BranchE;
    vlSelfRef.controller_tb__DOT__JumpE = __Vtask_controller_tb__DOT__run_test__2__in_JumpE;
    vlSelfRef.controller_tb__DOT__ALUResultEb0 = __Vtask_controller_tb__DOT__run_test__2__in_ALUResultEb0;
    vlSelfRef.controller_tb__DOT__funct12 = __Vtask_controller_tb__DOT__run_test__2__in_funct12;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/controller_tb.sv", 
                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((((((((((((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                          >> 0xcU)) == (IData)(__Vtask_controller_tb__DOT__run_test__2__exp_RegWriteD)) 
                  & (((0x33U == (IData)(vlSelfRef.controller_tb__DOT__op)) 
                      | (0x73U == (IData)(vlSelfRef.controller_tb__DOT__op))) 
                     | ((7U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                               >> 9U)) == (IData)(__Vtask_controller_tb__DOT__run_test__2__exp_ImmSrcD)))) 
                 & ((3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                           >> 7U)) == (IData)(__Vtask_controller_tb__DOT__run_test__2__exp_ALUSrcD))) 
                & ((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                          >> 6U)) == (IData)(__Vtask_controller_tb__DOT__run_test__2__exp_MemWriteD))) 
               & ((3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                         >> 4U)) == (IData)(__Vtask_controller_tb__DOT__run_test__2__exp_ResultSrcD))) 
              & ((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                        >> 3U)) == (IData)(__Vtask_controller_tb__DOT__run_test__2__exp_BranchD))) 
             & ((1U & (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls)) 
                == (IData)(__Vtask_controller_tb__DOT__run_test__2__exp_JumpD))) 
            & ((IData)(vlSelfRef.controller_tb__DOT__ALUControlD) 
               == (IData)(__Vtask_controller_tb__DOT__run_test__2__exp_ALUControlD))) 
           & ((IData)(vlSelfRef.controller_tb__DOT__PCSrcE) 
              == (IData)(__Vtask_controller_tb__DOT__run_test__2__exp_PCSrcE))) 
          & ((IData)(vlSelfRef.controller_tb__DOT__Ecall) 
             == (IData)(__Vtask_controller_tb__DOT__run_test__2__exp_Ecall))) 
         & ((IData)(vlSelfRef.controller_tb__DOT__Ebreak) 
            == (IData)(__Vtask_controller_tb__DOT__run_test__2__exp_Ebreak)))) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n        op=%b funct3=%b funct7b5=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n",0,
                     32,vlSelfRef.controller_tb__DOT__test_num,
                     -1,&(__Vtask_controller_tb__DOT__run_test__2__test_name),
                     7,(IData)(vlSelfRef.controller_tb__DOT__op),
                     3,vlSelfRef.controller_tb__DOT__funct3,
                     1,(IData)(vlSelfRef.controller_tb__DOT__funct7b5),
                     1,vlSelfRef.controller_tb__DOT__ZeroE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__BranchE),
                     1,vlSelfRef.controller_tb__DOT__JumpE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0));
        vlSelfRef.controller_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.controller_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n        Inputs:\n        op=%b funct3=%b funct7b5=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n        funct12=%b\n        Expected:\n        RegWrite=%b ImmSrc=%b ALUSrc=%b MemWrite=%b ResultSrc=%b Branch=%b Jump=%b ALUControl=%b PCSrc=%b Ecall=%b Ebreak=%b\n        Actual:\n        RegWrite=%b ImmSrc=%b ALUSrc=%b MemWrite=%b ResultSrc=%b Branch=%b Jump=%b ALUControl=%b PCSrc=%b Ecall=%b Ebreak=%b\n",0,
                     32,vlSelfRef.controller_tb__DOT__test_num,
                     -1,&(__Vtask_controller_tb__DOT__run_test__2__test_name),
                     7,(IData)(vlSelfRef.controller_tb__DOT__op),
                     3,vlSelfRef.controller_tb__DOT__funct3,
                     1,(IData)(vlSelfRef.controller_tb__DOT__funct7b5),
                     1,vlSelfRef.controller_tb__DOT__ZeroE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__BranchE),
                     1,vlSelfRef.controller_tb__DOT__JumpE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0),
                     12,vlSelfRef.controller_tb__DOT__funct12,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__2__exp_RegWriteD),
                     3,__Vtask_controller_tb__DOT__run_test__2__exp_ImmSrcD,
                     2,(IData)(__Vtask_controller_tb__DOT__run_test__2__exp_ALUSrcD),
                     1,__Vtask_controller_tb__DOT__run_test__2__exp_MemWriteD,
                     2,(IData)(__Vtask_controller_tb__DOT__run_test__2__exp_ResultSrcD),
                     1,__Vtask_controller_tb__DOT__run_test__2__exp_BranchD,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__2__exp_JumpD),
                     4,__Vtask_controller_tb__DOT__run_test__2__exp_ALUControlD,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__2__exp_PCSrcE),
                     1,__Vtask_controller_tb__DOT__run_test__2__exp_Ecall,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__2__exp_Ebreak),
                     1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 0xcU)),3,(7U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                                 >> 9U)),
                     2,(3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 7U)),1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                               >> 6U)),
                     2,(3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 4U)),1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                               >> 3U)),
                     1,(1U & (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls)),
                     4,(IData)(vlSelfRef.controller_tb__DOT__ALUControlD),
                     1,vlSelfRef.controller_tb__DOT__PCSrcE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__Ecall),
                     1,vlSelfRef.controller_tb__DOT__Ebreak);
        vlSelfRef.controller_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.controller_tb__DOT__fail_count);
    }
    vlSelfRef.controller_tb__DOT__op = 0x33U;
    vlSelfRef.controller_tb__DOT__funct3 = 2U;
    vlSelfRef.controller_tb__DOT__funct7b5 = 0U;
    vlSelfRef.controller_tb__DOT__ZeroE = 0U;
    vlSelfRef.controller_tb__DOT__BranchE = 0U;
    vlSelfRef.controller_tb__DOT__JumpE = 0U;
    vlSelfRef.controller_tb__DOT__ALUResultEb0 = 0U;
    vlSelfRef.controller_tb__DOT__funct12 = 0U;
    __Vtask_controller_tb__DOT__run_test__3__test_name = 
        std::string{"R-type SLT"};
    __Vtask_controller_tb__DOT__run_test__3__exp_Ebreak = 0U;
    __Vtask_controller_tb__DOT__run_test__3__exp_Ecall = 0U;
    __Vtask_controller_tb__DOT__run_test__3__exp_PCSrcE = 0U;
    __Vtask_controller_tb__DOT__run_test__3__exp_ALUControlD = 5U;
    __Vtask_controller_tb__DOT__run_test__3__exp_JumpD = 0U;
    __Vtask_controller_tb__DOT__run_test__3__exp_BranchD = 0U;
    __Vtask_controller_tb__DOT__run_test__3__exp_ResultSrcD = 0U;
    __Vtask_controller_tb__DOT__run_test__3__exp_MemWriteD = 0U;
    __Vtask_controller_tb__DOT__run_test__3__exp_ALUSrcD = 0U;
    __Vtask_controller_tb__DOT__run_test__3__exp_ImmSrcD 
        = vlSelfRef.controller_tb__DOT____Vxrand_h87975763__3;
    __Vtask_controller_tb__DOT__run_test__3__exp_RegWriteD = 1U;
    __Vtask_controller_tb__DOT__run_test__3__in_funct12 
        = vlSelfRef.controller_tb__DOT__funct12;
    __Vtask_controller_tb__DOT__run_test__3__in_ALUResultEb0 
        = vlSelfRef.controller_tb__DOT__ALUResultEb0;
    __Vtask_controller_tb__DOT__run_test__3__in_JumpE 
        = vlSelfRef.controller_tb__DOT__JumpE;
    __Vtask_controller_tb__DOT__run_test__3__in_BranchE 
        = vlSelfRef.controller_tb__DOT__BranchE;
    __Vtask_controller_tb__DOT__run_test__3__in_ZeroE 
        = vlSelfRef.controller_tb__DOT__ZeroE;
    __Vtask_controller_tb__DOT__run_test__3__in_funct7b5 
        = vlSelfRef.controller_tb__DOT__funct7b5;
    __Vtask_controller_tb__DOT__run_test__3__in_funct3 
        = vlSelfRef.controller_tb__DOT__funct3;
    __Vtask_controller_tb__DOT__run_test__3__in_op 
        = vlSelfRef.controller_tb__DOT__op;
    vlSelfRef.controller_tb__DOT__test_num = ((IData)(1U) 
                                              + vlSelfRef.controller_tb__DOT__test_num);
    vlSelfRef.controller_tb__DOT__op = __Vtask_controller_tb__DOT__run_test__3__in_op;
    vlSelfRef.controller_tb__DOT__funct3 = __Vtask_controller_tb__DOT__run_test__3__in_funct3;
    vlSelfRef.controller_tb__DOT__funct7b5 = __Vtask_controller_tb__DOT__run_test__3__in_funct7b5;
    vlSelfRef.controller_tb__DOT__ZeroE = __Vtask_controller_tb__DOT__run_test__3__in_ZeroE;
    vlSelfRef.controller_tb__DOT__BranchE = __Vtask_controller_tb__DOT__run_test__3__in_BranchE;
    vlSelfRef.controller_tb__DOT__JumpE = __Vtask_controller_tb__DOT__run_test__3__in_JumpE;
    vlSelfRef.controller_tb__DOT__ALUResultEb0 = __Vtask_controller_tb__DOT__run_test__3__in_ALUResultEb0;
    vlSelfRef.controller_tb__DOT__funct12 = __Vtask_controller_tb__DOT__run_test__3__in_funct12;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/controller_tb.sv", 
                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((((((((((((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                          >> 0xcU)) == (IData)(__Vtask_controller_tb__DOT__run_test__3__exp_RegWriteD)) 
                  & (((0x33U == (IData)(vlSelfRef.controller_tb__DOT__op)) 
                      | (0x73U == (IData)(vlSelfRef.controller_tb__DOT__op))) 
                     | ((7U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                               >> 9U)) == (IData)(__Vtask_controller_tb__DOT__run_test__3__exp_ImmSrcD)))) 
                 & ((3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                           >> 7U)) == (IData)(__Vtask_controller_tb__DOT__run_test__3__exp_ALUSrcD))) 
                & ((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                          >> 6U)) == (IData)(__Vtask_controller_tb__DOT__run_test__3__exp_MemWriteD))) 
               & ((3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                         >> 4U)) == (IData)(__Vtask_controller_tb__DOT__run_test__3__exp_ResultSrcD))) 
              & ((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                        >> 3U)) == (IData)(__Vtask_controller_tb__DOT__run_test__3__exp_BranchD))) 
             & ((1U & (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls)) 
                == (IData)(__Vtask_controller_tb__DOT__run_test__3__exp_JumpD))) 
            & ((IData)(vlSelfRef.controller_tb__DOT__ALUControlD) 
               == (IData)(__Vtask_controller_tb__DOT__run_test__3__exp_ALUControlD))) 
           & ((IData)(vlSelfRef.controller_tb__DOT__PCSrcE) 
              == (IData)(__Vtask_controller_tb__DOT__run_test__3__exp_PCSrcE))) 
          & ((IData)(vlSelfRef.controller_tb__DOT__Ecall) 
             == (IData)(__Vtask_controller_tb__DOT__run_test__3__exp_Ecall))) 
         & ((IData)(vlSelfRef.controller_tb__DOT__Ebreak) 
            == (IData)(__Vtask_controller_tb__DOT__run_test__3__exp_Ebreak)))) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n        op=%b funct3=%b funct7b5=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n",0,
                     32,vlSelfRef.controller_tb__DOT__test_num,
                     -1,&(__Vtask_controller_tb__DOT__run_test__3__test_name),
                     7,(IData)(vlSelfRef.controller_tb__DOT__op),
                     3,vlSelfRef.controller_tb__DOT__funct3,
                     1,(IData)(vlSelfRef.controller_tb__DOT__funct7b5),
                     1,vlSelfRef.controller_tb__DOT__ZeroE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__BranchE),
                     1,vlSelfRef.controller_tb__DOT__JumpE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0));
        vlSelfRef.controller_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.controller_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n        Inputs:\n        op=%b funct3=%b funct7b5=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n        funct12=%b\n        Expected:\n        RegWrite=%b ImmSrc=%b ALUSrc=%b MemWrite=%b ResultSrc=%b Branch=%b Jump=%b ALUControl=%b PCSrc=%b Ecall=%b Ebreak=%b\n        Actual:\n        RegWrite=%b ImmSrc=%b ALUSrc=%b MemWrite=%b ResultSrc=%b Branch=%b Jump=%b ALUControl=%b PCSrc=%b Ecall=%b Ebreak=%b\n",0,
                     32,vlSelfRef.controller_tb__DOT__test_num,
                     -1,&(__Vtask_controller_tb__DOT__run_test__3__test_name),
                     7,(IData)(vlSelfRef.controller_tb__DOT__op),
                     3,vlSelfRef.controller_tb__DOT__funct3,
                     1,(IData)(vlSelfRef.controller_tb__DOT__funct7b5),
                     1,vlSelfRef.controller_tb__DOT__ZeroE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__BranchE),
                     1,vlSelfRef.controller_tb__DOT__JumpE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0),
                     12,vlSelfRef.controller_tb__DOT__funct12,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__3__exp_RegWriteD),
                     3,__Vtask_controller_tb__DOT__run_test__3__exp_ImmSrcD,
                     2,(IData)(__Vtask_controller_tb__DOT__run_test__3__exp_ALUSrcD),
                     1,__Vtask_controller_tb__DOT__run_test__3__exp_MemWriteD,
                     2,(IData)(__Vtask_controller_tb__DOT__run_test__3__exp_ResultSrcD),
                     1,__Vtask_controller_tb__DOT__run_test__3__exp_BranchD,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__3__exp_JumpD),
                     4,__Vtask_controller_tb__DOT__run_test__3__exp_ALUControlD,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__3__exp_PCSrcE),
                     1,__Vtask_controller_tb__DOT__run_test__3__exp_Ecall,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__3__exp_Ebreak),
                     1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 0xcU)),3,(7U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                                 >> 9U)),
                     2,(3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 7U)),1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                               >> 6U)),
                     2,(3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 4U)),1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                               >> 3U)),
                     1,(1U & (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls)),
                     4,(IData)(vlSelfRef.controller_tb__DOT__ALUControlD),
                     1,vlSelfRef.controller_tb__DOT__PCSrcE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__Ecall),
                     1,vlSelfRef.controller_tb__DOT__Ebreak);
        vlSelfRef.controller_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.controller_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n----------- I-type ALU Instructions -----------\n",0);
    vlSelfRef.controller_tb__DOT__op = 0x13U;
    vlSelfRef.controller_tb__DOT__funct3 = 0U;
    vlSelfRef.controller_tb__DOT__funct7b5 = 0U;
    vlSelfRef.controller_tb__DOT__ZeroE = 0U;
    vlSelfRef.controller_tb__DOT__BranchE = 0U;
    vlSelfRef.controller_tb__DOT__JumpE = 0U;
    vlSelfRef.controller_tb__DOT__ALUResultEb0 = 0U;
    vlSelfRef.controller_tb__DOT__funct12 = 0U;
    __Vtask_controller_tb__DOT__run_test__4__test_name = 
        std::string{"I-type ADDI"};
    __Vtask_controller_tb__DOT__run_test__4__exp_Ebreak = 0U;
    __Vtask_controller_tb__DOT__run_test__4__exp_Ecall = 0U;
    __Vtask_controller_tb__DOT__run_test__4__exp_PCSrcE = 0U;
    __Vtask_controller_tb__DOT__run_test__4__exp_ALUControlD = 0U;
    __Vtask_controller_tb__DOT__run_test__4__exp_JumpD = 0U;
    __Vtask_controller_tb__DOT__run_test__4__exp_BranchD = 0U;
    __Vtask_controller_tb__DOT__run_test__4__exp_ResultSrcD = 0U;
    __Vtask_controller_tb__DOT__run_test__4__exp_MemWriteD = 0U;
    __Vtask_controller_tb__DOT__run_test__4__exp_ALUSrcD = 1U;
    __Vtask_controller_tb__DOT__run_test__4__exp_ImmSrcD = 0U;
    __Vtask_controller_tb__DOT__run_test__4__exp_RegWriteD = 1U;
    __Vtask_controller_tb__DOT__run_test__4__in_funct12 
        = vlSelfRef.controller_tb__DOT__funct12;
    __Vtask_controller_tb__DOT__run_test__4__in_ALUResultEb0 
        = vlSelfRef.controller_tb__DOT__ALUResultEb0;
    __Vtask_controller_tb__DOT__run_test__4__in_JumpE 
        = vlSelfRef.controller_tb__DOT__JumpE;
    __Vtask_controller_tb__DOT__run_test__4__in_BranchE 
        = vlSelfRef.controller_tb__DOT__BranchE;
    __Vtask_controller_tb__DOT__run_test__4__in_ZeroE 
        = vlSelfRef.controller_tb__DOT__ZeroE;
    __Vtask_controller_tb__DOT__run_test__4__in_funct7b5 
        = vlSelfRef.controller_tb__DOT__funct7b5;
    __Vtask_controller_tb__DOT__run_test__4__in_funct3 
        = vlSelfRef.controller_tb__DOT__funct3;
    __Vtask_controller_tb__DOT__run_test__4__in_op 
        = vlSelfRef.controller_tb__DOT__op;
    vlSelfRef.controller_tb__DOT__test_num = ((IData)(1U) 
                                              + vlSelfRef.controller_tb__DOT__test_num);
    vlSelfRef.controller_tb__DOT__op = __Vtask_controller_tb__DOT__run_test__4__in_op;
    vlSelfRef.controller_tb__DOT__funct3 = __Vtask_controller_tb__DOT__run_test__4__in_funct3;
    vlSelfRef.controller_tb__DOT__funct7b5 = __Vtask_controller_tb__DOT__run_test__4__in_funct7b5;
    vlSelfRef.controller_tb__DOT__ZeroE = __Vtask_controller_tb__DOT__run_test__4__in_ZeroE;
    vlSelfRef.controller_tb__DOT__BranchE = __Vtask_controller_tb__DOT__run_test__4__in_BranchE;
    vlSelfRef.controller_tb__DOT__JumpE = __Vtask_controller_tb__DOT__run_test__4__in_JumpE;
    vlSelfRef.controller_tb__DOT__ALUResultEb0 = __Vtask_controller_tb__DOT__run_test__4__in_ALUResultEb0;
    vlSelfRef.controller_tb__DOT__funct12 = __Vtask_controller_tb__DOT__run_test__4__in_funct12;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/controller_tb.sv", 
                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((((((((((((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                          >> 0xcU)) == (IData)(__Vtask_controller_tb__DOT__run_test__4__exp_RegWriteD)) 
                  & (((0x33U == (IData)(vlSelfRef.controller_tb__DOT__op)) 
                      | (0x73U == (IData)(vlSelfRef.controller_tb__DOT__op))) 
                     | ((7U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                               >> 9U)) == (IData)(__Vtask_controller_tb__DOT__run_test__4__exp_ImmSrcD)))) 
                 & ((3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                           >> 7U)) == (IData)(__Vtask_controller_tb__DOT__run_test__4__exp_ALUSrcD))) 
                & ((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                          >> 6U)) == (IData)(__Vtask_controller_tb__DOT__run_test__4__exp_MemWriteD))) 
               & ((3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                         >> 4U)) == (IData)(__Vtask_controller_tb__DOT__run_test__4__exp_ResultSrcD))) 
              & ((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                        >> 3U)) == (IData)(__Vtask_controller_tb__DOT__run_test__4__exp_BranchD))) 
             & ((1U & (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls)) 
                == (IData)(__Vtask_controller_tb__DOT__run_test__4__exp_JumpD))) 
            & ((IData)(vlSelfRef.controller_tb__DOT__ALUControlD) 
               == (IData)(__Vtask_controller_tb__DOT__run_test__4__exp_ALUControlD))) 
           & ((IData)(vlSelfRef.controller_tb__DOT__PCSrcE) 
              == (IData)(__Vtask_controller_tb__DOT__run_test__4__exp_PCSrcE))) 
          & ((IData)(vlSelfRef.controller_tb__DOT__Ecall) 
             == (IData)(__Vtask_controller_tb__DOT__run_test__4__exp_Ecall))) 
         & ((IData)(vlSelfRef.controller_tb__DOT__Ebreak) 
            == (IData)(__Vtask_controller_tb__DOT__run_test__4__exp_Ebreak)))) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n        op=%b funct3=%b funct7b5=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n",0,
                     32,vlSelfRef.controller_tb__DOT__test_num,
                     -1,&(__Vtask_controller_tb__DOT__run_test__4__test_name),
                     7,(IData)(vlSelfRef.controller_tb__DOT__op),
                     3,vlSelfRef.controller_tb__DOT__funct3,
                     1,(IData)(vlSelfRef.controller_tb__DOT__funct7b5),
                     1,vlSelfRef.controller_tb__DOT__ZeroE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__BranchE),
                     1,vlSelfRef.controller_tb__DOT__JumpE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0));
        vlSelfRef.controller_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.controller_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n        Inputs:\n        op=%b funct3=%b funct7b5=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n        funct12=%b\n        Expected:\n        RegWrite=%b ImmSrc=%b ALUSrc=%b MemWrite=%b ResultSrc=%b Branch=%b Jump=%b ALUControl=%b PCSrc=%b Ecall=%b Ebreak=%b\n        Actual:\n        RegWrite=%b ImmSrc=%b ALUSrc=%b MemWrite=%b ResultSrc=%b Branch=%b Jump=%b ALUControl=%b PCSrc=%b Ecall=%b Ebreak=%b\n",0,
                     32,vlSelfRef.controller_tb__DOT__test_num,
                     -1,&(__Vtask_controller_tb__DOT__run_test__4__test_name),
                     7,(IData)(vlSelfRef.controller_tb__DOT__op),
                     3,vlSelfRef.controller_tb__DOT__funct3,
                     1,(IData)(vlSelfRef.controller_tb__DOT__funct7b5),
                     1,vlSelfRef.controller_tb__DOT__ZeroE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__BranchE),
                     1,vlSelfRef.controller_tb__DOT__JumpE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0),
                     12,vlSelfRef.controller_tb__DOT__funct12,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__4__exp_RegWriteD),
                     3,__Vtask_controller_tb__DOT__run_test__4__exp_ImmSrcD,
                     2,(IData)(__Vtask_controller_tb__DOT__run_test__4__exp_ALUSrcD),
                     1,__Vtask_controller_tb__DOT__run_test__4__exp_MemWriteD,
                     2,(IData)(__Vtask_controller_tb__DOT__run_test__4__exp_ResultSrcD),
                     1,__Vtask_controller_tb__DOT__run_test__4__exp_BranchD,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__4__exp_JumpD),
                     4,__Vtask_controller_tb__DOT__run_test__4__exp_ALUControlD,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__4__exp_PCSrcE),
                     1,__Vtask_controller_tb__DOT__run_test__4__exp_Ecall,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__4__exp_Ebreak),
                     1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 0xcU)),3,(7U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                                 >> 9U)),
                     2,(3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 7U)),1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                               >> 6U)),
                     2,(3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 4U)),1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                               >> 3U)),
                     1,(1U & (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls)),
                     4,(IData)(vlSelfRef.controller_tb__DOT__ALUControlD),
                     1,vlSelfRef.controller_tb__DOT__PCSrcE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__Ecall),
                     1,vlSelfRef.controller_tb__DOT__Ebreak);
        vlSelfRef.controller_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.controller_tb__DOT__fail_count);
    }
    vlSelfRef.controller_tb__DOT__op = 0x13U;
    vlSelfRef.controller_tb__DOT__funct3 = 2U;
    vlSelfRef.controller_tb__DOT__funct7b5 = 0U;
    vlSelfRef.controller_tb__DOT__ZeroE = 0U;
    vlSelfRef.controller_tb__DOT__BranchE = 0U;
    vlSelfRef.controller_tb__DOT__JumpE = 0U;
    vlSelfRef.controller_tb__DOT__ALUResultEb0 = 0U;
    vlSelfRef.controller_tb__DOT__funct12 = 0U;
    __Vtask_controller_tb__DOT__run_test__5__test_name = 
        std::string{"I-type SLTI"};
    __Vtask_controller_tb__DOT__run_test__5__exp_Ebreak = 0U;
    __Vtask_controller_tb__DOT__run_test__5__exp_Ecall = 0U;
    __Vtask_controller_tb__DOT__run_test__5__exp_PCSrcE = 0U;
    __Vtask_controller_tb__DOT__run_test__5__exp_ALUControlD = 5U;
    __Vtask_controller_tb__DOT__run_test__5__exp_JumpD = 0U;
    __Vtask_controller_tb__DOT__run_test__5__exp_BranchD = 0U;
    __Vtask_controller_tb__DOT__run_test__5__exp_ResultSrcD = 0U;
    __Vtask_controller_tb__DOT__run_test__5__exp_MemWriteD = 0U;
    __Vtask_controller_tb__DOT__run_test__5__exp_ALUSrcD = 1U;
    __Vtask_controller_tb__DOT__run_test__5__exp_ImmSrcD = 0U;
    __Vtask_controller_tb__DOT__run_test__5__exp_RegWriteD = 1U;
    __Vtask_controller_tb__DOT__run_test__5__in_funct12 
        = vlSelfRef.controller_tb__DOT__funct12;
    __Vtask_controller_tb__DOT__run_test__5__in_ALUResultEb0 
        = vlSelfRef.controller_tb__DOT__ALUResultEb0;
    __Vtask_controller_tb__DOT__run_test__5__in_JumpE 
        = vlSelfRef.controller_tb__DOT__JumpE;
    __Vtask_controller_tb__DOT__run_test__5__in_BranchE 
        = vlSelfRef.controller_tb__DOT__BranchE;
    __Vtask_controller_tb__DOT__run_test__5__in_ZeroE 
        = vlSelfRef.controller_tb__DOT__ZeroE;
    __Vtask_controller_tb__DOT__run_test__5__in_funct7b5 
        = vlSelfRef.controller_tb__DOT__funct7b5;
    __Vtask_controller_tb__DOT__run_test__5__in_funct3 
        = vlSelfRef.controller_tb__DOT__funct3;
    __Vtask_controller_tb__DOT__run_test__5__in_op 
        = vlSelfRef.controller_tb__DOT__op;
    vlSelfRef.controller_tb__DOT__test_num = ((IData)(1U) 
                                              + vlSelfRef.controller_tb__DOT__test_num);
    vlSelfRef.controller_tb__DOT__op = __Vtask_controller_tb__DOT__run_test__5__in_op;
    vlSelfRef.controller_tb__DOT__funct3 = __Vtask_controller_tb__DOT__run_test__5__in_funct3;
    vlSelfRef.controller_tb__DOT__funct7b5 = __Vtask_controller_tb__DOT__run_test__5__in_funct7b5;
    vlSelfRef.controller_tb__DOT__ZeroE = __Vtask_controller_tb__DOT__run_test__5__in_ZeroE;
    vlSelfRef.controller_tb__DOT__BranchE = __Vtask_controller_tb__DOT__run_test__5__in_BranchE;
    vlSelfRef.controller_tb__DOT__JumpE = __Vtask_controller_tb__DOT__run_test__5__in_JumpE;
    vlSelfRef.controller_tb__DOT__ALUResultEb0 = __Vtask_controller_tb__DOT__run_test__5__in_ALUResultEb0;
    vlSelfRef.controller_tb__DOT__funct12 = __Vtask_controller_tb__DOT__run_test__5__in_funct12;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/controller_tb.sv", 
                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((((((((((((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                          >> 0xcU)) == (IData)(__Vtask_controller_tb__DOT__run_test__5__exp_RegWriteD)) 
                  & (((0x33U == (IData)(vlSelfRef.controller_tb__DOT__op)) 
                      | (0x73U == (IData)(vlSelfRef.controller_tb__DOT__op))) 
                     | ((7U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                               >> 9U)) == (IData)(__Vtask_controller_tb__DOT__run_test__5__exp_ImmSrcD)))) 
                 & ((3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                           >> 7U)) == (IData)(__Vtask_controller_tb__DOT__run_test__5__exp_ALUSrcD))) 
                & ((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                          >> 6U)) == (IData)(__Vtask_controller_tb__DOT__run_test__5__exp_MemWriteD))) 
               & ((3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                         >> 4U)) == (IData)(__Vtask_controller_tb__DOT__run_test__5__exp_ResultSrcD))) 
              & ((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                        >> 3U)) == (IData)(__Vtask_controller_tb__DOT__run_test__5__exp_BranchD))) 
             & ((1U & (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls)) 
                == (IData)(__Vtask_controller_tb__DOT__run_test__5__exp_JumpD))) 
            & ((IData)(vlSelfRef.controller_tb__DOT__ALUControlD) 
               == (IData)(__Vtask_controller_tb__DOT__run_test__5__exp_ALUControlD))) 
           & ((IData)(vlSelfRef.controller_tb__DOT__PCSrcE) 
              == (IData)(__Vtask_controller_tb__DOT__run_test__5__exp_PCSrcE))) 
          & ((IData)(vlSelfRef.controller_tb__DOT__Ecall) 
             == (IData)(__Vtask_controller_tb__DOT__run_test__5__exp_Ecall))) 
         & ((IData)(vlSelfRef.controller_tb__DOT__Ebreak) 
            == (IData)(__Vtask_controller_tb__DOT__run_test__5__exp_Ebreak)))) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n        op=%b funct3=%b funct7b5=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n",0,
                     32,vlSelfRef.controller_tb__DOT__test_num,
                     -1,&(__Vtask_controller_tb__DOT__run_test__5__test_name),
                     7,(IData)(vlSelfRef.controller_tb__DOT__op),
                     3,vlSelfRef.controller_tb__DOT__funct3,
                     1,(IData)(vlSelfRef.controller_tb__DOT__funct7b5),
                     1,vlSelfRef.controller_tb__DOT__ZeroE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__BranchE),
                     1,vlSelfRef.controller_tb__DOT__JumpE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0));
        vlSelfRef.controller_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.controller_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n        Inputs:\n        op=%b funct3=%b funct7b5=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n        funct12=%b\n        Expected:\n        RegWrite=%b ImmSrc=%b ALUSrc=%b MemWrite=%b ResultSrc=%b Branch=%b Jump=%b ALUControl=%b PCSrc=%b Ecall=%b Ebreak=%b\n        Actual:\n        RegWrite=%b ImmSrc=%b ALUSrc=%b MemWrite=%b ResultSrc=%b Branch=%b Jump=%b ALUControl=%b PCSrc=%b Ecall=%b Ebreak=%b\n",0,
                     32,vlSelfRef.controller_tb__DOT__test_num,
                     -1,&(__Vtask_controller_tb__DOT__run_test__5__test_name),
                     7,(IData)(vlSelfRef.controller_tb__DOT__op),
                     3,vlSelfRef.controller_tb__DOT__funct3,
                     1,(IData)(vlSelfRef.controller_tb__DOT__funct7b5),
                     1,vlSelfRef.controller_tb__DOT__ZeroE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__BranchE),
                     1,vlSelfRef.controller_tb__DOT__JumpE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0),
                     12,vlSelfRef.controller_tb__DOT__funct12,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__5__exp_RegWriteD),
                     3,__Vtask_controller_tb__DOT__run_test__5__exp_ImmSrcD,
                     2,(IData)(__Vtask_controller_tb__DOT__run_test__5__exp_ALUSrcD),
                     1,__Vtask_controller_tb__DOT__run_test__5__exp_MemWriteD,
                     2,(IData)(__Vtask_controller_tb__DOT__run_test__5__exp_ResultSrcD),
                     1,__Vtask_controller_tb__DOT__run_test__5__exp_BranchD,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__5__exp_JumpD),
                     4,__Vtask_controller_tb__DOT__run_test__5__exp_ALUControlD,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__5__exp_PCSrcE),
                     1,__Vtask_controller_tb__DOT__run_test__5__exp_Ecall,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__5__exp_Ebreak),
                     1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 0xcU)),3,(7U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                                 >> 9U)),
                     2,(3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 7U)),1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                               >> 6U)),
                     2,(3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 4U)),1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                               >> 3U)),
                     1,(1U & (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls)),
                     4,(IData)(vlSelfRef.controller_tb__DOT__ALUControlD),
                     1,vlSelfRef.controller_tb__DOT__PCSrcE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__Ecall),
                     1,vlSelfRef.controller_tb__DOT__Ebreak);
        vlSelfRef.controller_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.controller_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n----------- Load/Store Instructions -----------\n",0);
    vlSelfRef.controller_tb__DOT__op = 3U;
    vlSelfRef.controller_tb__DOT__funct3 = 2U;
    vlSelfRef.controller_tb__DOT__funct7b5 = 0U;
    vlSelfRef.controller_tb__DOT__ZeroE = 0U;
    vlSelfRef.controller_tb__DOT__BranchE = 0U;
    vlSelfRef.controller_tb__DOT__JumpE = 0U;
    vlSelfRef.controller_tb__DOT__ALUResultEb0 = 0U;
    vlSelfRef.controller_tb__DOT__funct12 = 0U;
    __Vtask_controller_tb__DOT__run_test__6__test_name = 
        std::string{"Load LW"};
    __Vtask_controller_tb__DOT__run_test__6__exp_Ebreak = 0U;
    __Vtask_controller_tb__DOT__run_test__6__exp_Ecall = 0U;
    __Vtask_controller_tb__DOT__run_test__6__exp_PCSrcE = 0U;
    __Vtask_controller_tb__DOT__run_test__6__exp_ALUControlD = 0U;
    __Vtask_controller_tb__DOT__run_test__6__exp_JumpD = 0U;
    __Vtask_controller_tb__DOT__run_test__6__exp_BranchD = 0U;
    __Vtask_controller_tb__DOT__run_test__6__exp_ResultSrcD = 1U;
    __Vtask_controller_tb__DOT__run_test__6__exp_MemWriteD = 0U;
    __Vtask_controller_tb__DOT__run_test__6__exp_ALUSrcD = 1U;
    __Vtask_controller_tb__DOT__run_test__6__exp_ImmSrcD = 0U;
    __Vtask_controller_tb__DOT__run_test__6__exp_RegWriteD = 1U;
    __Vtask_controller_tb__DOT__run_test__6__in_funct12 
        = vlSelfRef.controller_tb__DOT__funct12;
    __Vtask_controller_tb__DOT__run_test__6__in_ALUResultEb0 
        = vlSelfRef.controller_tb__DOT__ALUResultEb0;
    __Vtask_controller_tb__DOT__run_test__6__in_JumpE 
        = vlSelfRef.controller_tb__DOT__JumpE;
    __Vtask_controller_tb__DOT__run_test__6__in_BranchE 
        = vlSelfRef.controller_tb__DOT__BranchE;
    __Vtask_controller_tb__DOT__run_test__6__in_ZeroE 
        = vlSelfRef.controller_tb__DOT__ZeroE;
    __Vtask_controller_tb__DOT__run_test__6__in_funct7b5 
        = vlSelfRef.controller_tb__DOT__funct7b5;
    __Vtask_controller_tb__DOT__run_test__6__in_funct3 
        = vlSelfRef.controller_tb__DOT__funct3;
    __Vtask_controller_tb__DOT__run_test__6__in_op 
        = vlSelfRef.controller_tb__DOT__op;
    vlSelfRef.controller_tb__DOT__test_num = ((IData)(1U) 
                                              + vlSelfRef.controller_tb__DOT__test_num);
    vlSelfRef.controller_tb__DOT__op = __Vtask_controller_tb__DOT__run_test__6__in_op;
    vlSelfRef.controller_tb__DOT__funct3 = __Vtask_controller_tb__DOT__run_test__6__in_funct3;
    vlSelfRef.controller_tb__DOT__funct7b5 = __Vtask_controller_tb__DOT__run_test__6__in_funct7b5;
    vlSelfRef.controller_tb__DOT__ZeroE = __Vtask_controller_tb__DOT__run_test__6__in_ZeroE;
    vlSelfRef.controller_tb__DOT__BranchE = __Vtask_controller_tb__DOT__run_test__6__in_BranchE;
    vlSelfRef.controller_tb__DOT__JumpE = __Vtask_controller_tb__DOT__run_test__6__in_JumpE;
    vlSelfRef.controller_tb__DOT__ALUResultEb0 = __Vtask_controller_tb__DOT__run_test__6__in_ALUResultEb0;
    vlSelfRef.controller_tb__DOT__funct12 = __Vtask_controller_tb__DOT__run_test__6__in_funct12;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/controller_tb.sv", 
                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((((((((((((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                          >> 0xcU)) == (IData)(__Vtask_controller_tb__DOT__run_test__6__exp_RegWriteD)) 
                  & (((0x33U == (IData)(vlSelfRef.controller_tb__DOT__op)) 
                      | (0x73U == (IData)(vlSelfRef.controller_tb__DOT__op))) 
                     | ((7U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                               >> 9U)) == (IData)(__Vtask_controller_tb__DOT__run_test__6__exp_ImmSrcD)))) 
                 & ((3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                           >> 7U)) == (IData)(__Vtask_controller_tb__DOT__run_test__6__exp_ALUSrcD))) 
                & ((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                          >> 6U)) == (IData)(__Vtask_controller_tb__DOT__run_test__6__exp_MemWriteD))) 
               & ((3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                         >> 4U)) == (IData)(__Vtask_controller_tb__DOT__run_test__6__exp_ResultSrcD))) 
              & ((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                        >> 3U)) == (IData)(__Vtask_controller_tb__DOT__run_test__6__exp_BranchD))) 
             & ((1U & (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls)) 
                == (IData)(__Vtask_controller_tb__DOT__run_test__6__exp_JumpD))) 
            & ((IData)(vlSelfRef.controller_tb__DOT__ALUControlD) 
               == (IData)(__Vtask_controller_tb__DOT__run_test__6__exp_ALUControlD))) 
           & ((IData)(vlSelfRef.controller_tb__DOT__PCSrcE) 
              == (IData)(__Vtask_controller_tb__DOT__run_test__6__exp_PCSrcE))) 
          & ((IData)(vlSelfRef.controller_tb__DOT__Ecall) 
             == (IData)(__Vtask_controller_tb__DOT__run_test__6__exp_Ecall))) 
         & ((IData)(vlSelfRef.controller_tb__DOT__Ebreak) 
            == (IData)(__Vtask_controller_tb__DOT__run_test__6__exp_Ebreak)))) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n        op=%b funct3=%b funct7b5=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n",0,
                     32,vlSelfRef.controller_tb__DOT__test_num,
                     -1,&(__Vtask_controller_tb__DOT__run_test__6__test_name),
                     7,(IData)(vlSelfRef.controller_tb__DOT__op),
                     3,vlSelfRef.controller_tb__DOT__funct3,
                     1,(IData)(vlSelfRef.controller_tb__DOT__funct7b5),
                     1,vlSelfRef.controller_tb__DOT__ZeroE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__BranchE),
                     1,vlSelfRef.controller_tb__DOT__JumpE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0));
        vlSelfRef.controller_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.controller_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n        Inputs:\n        op=%b funct3=%b funct7b5=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n        funct12=%b\n        Expected:\n        RegWrite=%b ImmSrc=%b ALUSrc=%b MemWrite=%b ResultSrc=%b Branch=%b Jump=%b ALUControl=%b PCSrc=%b Ecall=%b Ebreak=%b\n        Actual:\n        RegWrite=%b ImmSrc=%b ALUSrc=%b MemWrite=%b ResultSrc=%b Branch=%b Jump=%b ALUControl=%b PCSrc=%b Ecall=%b Ebreak=%b\n",0,
                     32,vlSelfRef.controller_tb__DOT__test_num,
                     -1,&(__Vtask_controller_tb__DOT__run_test__6__test_name),
                     7,(IData)(vlSelfRef.controller_tb__DOT__op),
                     3,vlSelfRef.controller_tb__DOT__funct3,
                     1,(IData)(vlSelfRef.controller_tb__DOT__funct7b5),
                     1,vlSelfRef.controller_tb__DOT__ZeroE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__BranchE),
                     1,vlSelfRef.controller_tb__DOT__JumpE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0),
                     12,vlSelfRef.controller_tb__DOT__funct12,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__6__exp_RegWriteD),
                     3,__Vtask_controller_tb__DOT__run_test__6__exp_ImmSrcD,
                     2,(IData)(__Vtask_controller_tb__DOT__run_test__6__exp_ALUSrcD),
                     1,__Vtask_controller_tb__DOT__run_test__6__exp_MemWriteD,
                     2,(IData)(__Vtask_controller_tb__DOT__run_test__6__exp_ResultSrcD),
                     1,__Vtask_controller_tb__DOT__run_test__6__exp_BranchD,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__6__exp_JumpD),
                     4,__Vtask_controller_tb__DOT__run_test__6__exp_ALUControlD,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__6__exp_PCSrcE),
                     1,__Vtask_controller_tb__DOT__run_test__6__exp_Ecall,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__6__exp_Ebreak),
                     1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 0xcU)),3,(7U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                                 >> 9U)),
                     2,(3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 7U)),1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                               >> 6U)),
                     2,(3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 4U)),1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                               >> 3U)),
                     1,(1U & (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls)),
                     4,(IData)(vlSelfRef.controller_tb__DOT__ALUControlD),
                     1,vlSelfRef.controller_tb__DOT__PCSrcE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__Ecall),
                     1,vlSelfRef.controller_tb__DOT__Ebreak);
        vlSelfRef.controller_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.controller_tb__DOT__fail_count);
    }
    vlSelfRef.controller_tb__DOT__op = 0x23U;
    vlSelfRef.controller_tb__DOT__funct3 = 2U;
    vlSelfRef.controller_tb__DOT__funct7b5 = 0U;
    vlSelfRef.controller_tb__DOT__ZeroE = 0U;
    vlSelfRef.controller_tb__DOT__BranchE = 0U;
    vlSelfRef.controller_tb__DOT__JumpE = 0U;
    vlSelfRef.controller_tb__DOT__ALUResultEb0 = 0U;
    vlSelfRef.controller_tb__DOT__funct12 = 0U;
    __Vtask_controller_tb__DOT__run_test__7__test_name = 
        std::string{"Store SW"};
    __Vtask_controller_tb__DOT__run_test__7__exp_Ebreak = 0U;
    __Vtask_controller_tb__DOT__run_test__7__exp_Ecall = 0U;
    __Vtask_controller_tb__DOT__run_test__7__exp_PCSrcE = 0U;
    __Vtask_controller_tb__DOT__run_test__7__exp_ALUControlD = 0U;
    __Vtask_controller_tb__DOT__run_test__7__exp_JumpD = 0U;
    __Vtask_controller_tb__DOT__run_test__7__exp_BranchD = 0U;
    __Vtask_controller_tb__DOT__run_test__7__exp_ResultSrcD = 0U;
    __Vtask_controller_tb__DOT__run_test__7__exp_MemWriteD = 1U;
    __Vtask_controller_tb__DOT__run_test__7__exp_ALUSrcD = 1U;
    __Vtask_controller_tb__DOT__run_test__7__exp_ImmSrcD = 1U;
    __Vtask_controller_tb__DOT__run_test__7__exp_RegWriteD = 0U;
    __Vtask_controller_tb__DOT__run_test__7__in_funct12 
        = vlSelfRef.controller_tb__DOT__funct12;
    __Vtask_controller_tb__DOT__run_test__7__in_ALUResultEb0 
        = vlSelfRef.controller_tb__DOT__ALUResultEb0;
    __Vtask_controller_tb__DOT__run_test__7__in_JumpE 
        = vlSelfRef.controller_tb__DOT__JumpE;
    __Vtask_controller_tb__DOT__run_test__7__in_BranchE 
        = vlSelfRef.controller_tb__DOT__BranchE;
    __Vtask_controller_tb__DOT__run_test__7__in_ZeroE 
        = vlSelfRef.controller_tb__DOT__ZeroE;
    __Vtask_controller_tb__DOT__run_test__7__in_funct7b5 
        = vlSelfRef.controller_tb__DOT__funct7b5;
    __Vtask_controller_tb__DOT__run_test__7__in_funct3 
        = vlSelfRef.controller_tb__DOT__funct3;
    __Vtask_controller_tb__DOT__run_test__7__in_op 
        = vlSelfRef.controller_tb__DOT__op;
    vlSelfRef.controller_tb__DOT__test_num = ((IData)(1U) 
                                              + vlSelfRef.controller_tb__DOT__test_num);
    vlSelfRef.controller_tb__DOT__op = __Vtask_controller_tb__DOT__run_test__7__in_op;
    vlSelfRef.controller_tb__DOT__funct3 = __Vtask_controller_tb__DOT__run_test__7__in_funct3;
    vlSelfRef.controller_tb__DOT__funct7b5 = __Vtask_controller_tb__DOT__run_test__7__in_funct7b5;
    vlSelfRef.controller_tb__DOT__ZeroE = __Vtask_controller_tb__DOT__run_test__7__in_ZeroE;
    vlSelfRef.controller_tb__DOT__BranchE = __Vtask_controller_tb__DOT__run_test__7__in_BranchE;
    vlSelfRef.controller_tb__DOT__JumpE = __Vtask_controller_tb__DOT__run_test__7__in_JumpE;
    vlSelfRef.controller_tb__DOT__ALUResultEb0 = __Vtask_controller_tb__DOT__run_test__7__in_ALUResultEb0;
    vlSelfRef.controller_tb__DOT__funct12 = __Vtask_controller_tb__DOT__run_test__7__in_funct12;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/controller_tb.sv", 
                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((((((((((((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                          >> 0xcU)) == (IData)(__Vtask_controller_tb__DOT__run_test__7__exp_RegWriteD)) 
                  & (((0x33U == (IData)(vlSelfRef.controller_tb__DOT__op)) 
                      | (0x73U == (IData)(vlSelfRef.controller_tb__DOT__op))) 
                     | ((7U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                               >> 9U)) == (IData)(__Vtask_controller_tb__DOT__run_test__7__exp_ImmSrcD)))) 
                 & ((3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                           >> 7U)) == (IData)(__Vtask_controller_tb__DOT__run_test__7__exp_ALUSrcD))) 
                & ((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                          >> 6U)) == (IData)(__Vtask_controller_tb__DOT__run_test__7__exp_MemWriteD))) 
               & ((3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                         >> 4U)) == (IData)(__Vtask_controller_tb__DOT__run_test__7__exp_ResultSrcD))) 
              & ((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                        >> 3U)) == (IData)(__Vtask_controller_tb__DOT__run_test__7__exp_BranchD))) 
             & ((1U & (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls)) 
                == (IData)(__Vtask_controller_tb__DOT__run_test__7__exp_JumpD))) 
            & ((IData)(vlSelfRef.controller_tb__DOT__ALUControlD) 
               == (IData)(__Vtask_controller_tb__DOT__run_test__7__exp_ALUControlD))) 
           & ((IData)(vlSelfRef.controller_tb__DOT__PCSrcE) 
              == (IData)(__Vtask_controller_tb__DOT__run_test__7__exp_PCSrcE))) 
          & ((IData)(vlSelfRef.controller_tb__DOT__Ecall) 
             == (IData)(__Vtask_controller_tb__DOT__run_test__7__exp_Ecall))) 
         & ((IData)(vlSelfRef.controller_tb__DOT__Ebreak) 
            == (IData)(__Vtask_controller_tb__DOT__run_test__7__exp_Ebreak)))) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n        op=%b funct3=%b funct7b5=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n",0,
                     32,vlSelfRef.controller_tb__DOT__test_num,
                     -1,&(__Vtask_controller_tb__DOT__run_test__7__test_name),
                     7,(IData)(vlSelfRef.controller_tb__DOT__op),
                     3,vlSelfRef.controller_tb__DOT__funct3,
                     1,(IData)(vlSelfRef.controller_tb__DOT__funct7b5),
                     1,vlSelfRef.controller_tb__DOT__ZeroE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__BranchE),
                     1,vlSelfRef.controller_tb__DOT__JumpE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0));
        vlSelfRef.controller_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.controller_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n        Inputs:\n        op=%b funct3=%b funct7b5=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n        funct12=%b\n        Expected:\n        RegWrite=%b ImmSrc=%b ALUSrc=%b MemWrite=%b ResultSrc=%b Branch=%b Jump=%b ALUControl=%b PCSrc=%b Ecall=%b Ebreak=%b\n        Actual:\n        RegWrite=%b ImmSrc=%b ALUSrc=%b MemWrite=%b ResultSrc=%b Branch=%b Jump=%b ALUControl=%b PCSrc=%b Ecall=%b Ebreak=%b\n",0,
                     32,vlSelfRef.controller_tb__DOT__test_num,
                     -1,&(__Vtask_controller_tb__DOT__run_test__7__test_name),
                     7,(IData)(vlSelfRef.controller_tb__DOT__op),
                     3,vlSelfRef.controller_tb__DOT__funct3,
                     1,(IData)(vlSelfRef.controller_tb__DOT__funct7b5),
                     1,vlSelfRef.controller_tb__DOT__ZeroE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__BranchE),
                     1,vlSelfRef.controller_tb__DOT__JumpE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0),
                     12,vlSelfRef.controller_tb__DOT__funct12,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__7__exp_RegWriteD),
                     3,__Vtask_controller_tb__DOT__run_test__7__exp_ImmSrcD,
                     2,(IData)(__Vtask_controller_tb__DOT__run_test__7__exp_ALUSrcD),
                     1,__Vtask_controller_tb__DOT__run_test__7__exp_MemWriteD,
                     2,(IData)(__Vtask_controller_tb__DOT__run_test__7__exp_ResultSrcD),
                     1,__Vtask_controller_tb__DOT__run_test__7__exp_BranchD,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__7__exp_JumpD),
                     4,__Vtask_controller_tb__DOT__run_test__7__exp_ALUControlD,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__7__exp_PCSrcE),
                     1,__Vtask_controller_tb__DOT__run_test__7__exp_Ecall,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__7__exp_Ebreak),
                     1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 0xcU)),3,(7U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                                 >> 9U)),
                     2,(3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 7U)),1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                               >> 6U)),
                     2,(3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 4U)),1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                               >> 3U)),
                     1,(1U & (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls)),
                     4,(IData)(vlSelfRef.controller_tb__DOT__ALUControlD),
                     1,vlSelfRef.controller_tb__DOT__PCSrcE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__Ecall),
                     1,vlSelfRef.controller_tb__DOT__Ebreak);
        vlSelfRef.controller_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.controller_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n----------- Branch Instructions -----------\n",0);
    vlSelfRef.controller_tb__DOT__op = 0x63U;
    vlSelfRef.controller_tb__DOT__funct3 = 0U;
    vlSelfRef.controller_tb__DOT__funct7b5 = 0U;
    vlSelfRef.controller_tb__DOT__ZeroE = 1U;
    vlSelfRef.controller_tb__DOT__BranchE = 1U;
    vlSelfRef.controller_tb__DOT__JumpE = 0U;
    vlSelfRef.controller_tb__DOT__ALUResultEb0 = 0U;
    vlSelfRef.controller_tb__DOT__funct12 = 0U;
    __Vtask_controller_tb__DOT__run_test__8__test_name = 
        std::string{"Branch BEQ Taken"};
    __Vtask_controller_tb__DOT__run_test__8__exp_Ebreak = 0U;
    __Vtask_controller_tb__DOT__run_test__8__exp_Ecall = 0U;
    __Vtask_controller_tb__DOT__run_test__8__exp_PCSrcE = 1U;
    __Vtask_controller_tb__DOT__run_test__8__exp_ALUControlD = 1U;
    __Vtask_controller_tb__DOT__run_test__8__exp_JumpD = 0U;
    __Vtask_controller_tb__DOT__run_test__8__exp_BranchD = 1U;
    __Vtask_controller_tb__DOT__run_test__8__exp_ResultSrcD = 0U;
    __Vtask_controller_tb__DOT__run_test__8__exp_MemWriteD = 0U;
    __Vtask_controller_tb__DOT__run_test__8__exp_ALUSrcD = 0U;
    __Vtask_controller_tb__DOT__run_test__8__exp_ImmSrcD = 2U;
    __Vtask_controller_tb__DOT__run_test__8__exp_RegWriteD = 0U;
    __Vtask_controller_tb__DOT__run_test__8__in_funct12 
        = vlSelfRef.controller_tb__DOT__funct12;
    __Vtask_controller_tb__DOT__run_test__8__in_ALUResultEb0 
        = vlSelfRef.controller_tb__DOT__ALUResultEb0;
    __Vtask_controller_tb__DOT__run_test__8__in_JumpE 
        = vlSelfRef.controller_tb__DOT__JumpE;
    __Vtask_controller_tb__DOT__run_test__8__in_BranchE 
        = vlSelfRef.controller_tb__DOT__BranchE;
    __Vtask_controller_tb__DOT__run_test__8__in_ZeroE 
        = vlSelfRef.controller_tb__DOT__ZeroE;
    __Vtask_controller_tb__DOT__run_test__8__in_funct7b5 
        = vlSelfRef.controller_tb__DOT__funct7b5;
    __Vtask_controller_tb__DOT__run_test__8__in_funct3 
        = vlSelfRef.controller_tb__DOT__funct3;
    __Vtask_controller_tb__DOT__run_test__8__in_op 
        = vlSelfRef.controller_tb__DOT__op;
    vlSelfRef.controller_tb__DOT__test_num = ((IData)(1U) 
                                              + vlSelfRef.controller_tb__DOT__test_num);
    vlSelfRef.controller_tb__DOT__op = __Vtask_controller_tb__DOT__run_test__8__in_op;
    vlSelfRef.controller_tb__DOT__funct3 = __Vtask_controller_tb__DOT__run_test__8__in_funct3;
    vlSelfRef.controller_tb__DOT__funct7b5 = __Vtask_controller_tb__DOT__run_test__8__in_funct7b5;
    vlSelfRef.controller_tb__DOT__ZeroE = __Vtask_controller_tb__DOT__run_test__8__in_ZeroE;
    vlSelfRef.controller_tb__DOT__BranchE = __Vtask_controller_tb__DOT__run_test__8__in_BranchE;
    vlSelfRef.controller_tb__DOT__JumpE = __Vtask_controller_tb__DOT__run_test__8__in_JumpE;
    vlSelfRef.controller_tb__DOT__ALUResultEb0 = __Vtask_controller_tb__DOT__run_test__8__in_ALUResultEb0;
    vlSelfRef.controller_tb__DOT__funct12 = __Vtask_controller_tb__DOT__run_test__8__in_funct12;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/controller_tb.sv", 
                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((((((((((((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                          >> 0xcU)) == (IData)(__Vtask_controller_tb__DOT__run_test__8__exp_RegWriteD)) 
                  & (((0x33U == (IData)(vlSelfRef.controller_tb__DOT__op)) 
                      | (0x73U == (IData)(vlSelfRef.controller_tb__DOT__op))) 
                     | ((7U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                               >> 9U)) == (IData)(__Vtask_controller_tb__DOT__run_test__8__exp_ImmSrcD)))) 
                 & ((3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                           >> 7U)) == (IData)(__Vtask_controller_tb__DOT__run_test__8__exp_ALUSrcD))) 
                & ((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                          >> 6U)) == (IData)(__Vtask_controller_tb__DOT__run_test__8__exp_MemWriteD))) 
               & ((3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                         >> 4U)) == (IData)(__Vtask_controller_tb__DOT__run_test__8__exp_ResultSrcD))) 
              & ((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                        >> 3U)) == (IData)(__Vtask_controller_tb__DOT__run_test__8__exp_BranchD))) 
             & ((1U & (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls)) 
                == (IData)(__Vtask_controller_tb__DOT__run_test__8__exp_JumpD))) 
            & ((IData)(vlSelfRef.controller_tb__DOT__ALUControlD) 
               == (IData)(__Vtask_controller_tb__DOT__run_test__8__exp_ALUControlD))) 
           & ((IData)(vlSelfRef.controller_tb__DOT__PCSrcE) 
              == (IData)(__Vtask_controller_tb__DOT__run_test__8__exp_PCSrcE))) 
          & ((IData)(vlSelfRef.controller_tb__DOT__Ecall) 
             == (IData)(__Vtask_controller_tb__DOT__run_test__8__exp_Ecall))) 
         & ((IData)(vlSelfRef.controller_tb__DOT__Ebreak) 
            == (IData)(__Vtask_controller_tb__DOT__run_test__8__exp_Ebreak)))) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n        op=%b funct3=%b funct7b5=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n",0,
                     32,vlSelfRef.controller_tb__DOT__test_num,
                     -1,&(__Vtask_controller_tb__DOT__run_test__8__test_name),
                     7,(IData)(vlSelfRef.controller_tb__DOT__op),
                     3,vlSelfRef.controller_tb__DOT__funct3,
                     1,(IData)(vlSelfRef.controller_tb__DOT__funct7b5),
                     1,vlSelfRef.controller_tb__DOT__ZeroE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__BranchE),
                     1,vlSelfRef.controller_tb__DOT__JumpE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0));
        vlSelfRef.controller_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.controller_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n        Inputs:\n        op=%b funct3=%b funct7b5=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n        funct12=%b\n        Expected:\n        RegWrite=%b ImmSrc=%b ALUSrc=%b MemWrite=%b ResultSrc=%b Branch=%b Jump=%b ALUControl=%b PCSrc=%b Ecall=%b Ebreak=%b\n        Actual:\n        RegWrite=%b ImmSrc=%b ALUSrc=%b MemWrite=%b ResultSrc=%b Branch=%b Jump=%b ALUControl=%b PCSrc=%b Ecall=%b Ebreak=%b\n",0,
                     32,vlSelfRef.controller_tb__DOT__test_num,
                     -1,&(__Vtask_controller_tb__DOT__run_test__8__test_name),
                     7,(IData)(vlSelfRef.controller_tb__DOT__op),
                     3,vlSelfRef.controller_tb__DOT__funct3,
                     1,(IData)(vlSelfRef.controller_tb__DOT__funct7b5),
                     1,vlSelfRef.controller_tb__DOT__ZeroE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__BranchE),
                     1,vlSelfRef.controller_tb__DOT__JumpE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0),
                     12,vlSelfRef.controller_tb__DOT__funct12,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__8__exp_RegWriteD),
                     3,__Vtask_controller_tb__DOT__run_test__8__exp_ImmSrcD,
                     2,(IData)(__Vtask_controller_tb__DOT__run_test__8__exp_ALUSrcD),
                     1,__Vtask_controller_tb__DOT__run_test__8__exp_MemWriteD,
                     2,(IData)(__Vtask_controller_tb__DOT__run_test__8__exp_ResultSrcD),
                     1,__Vtask_controller_tb__DOT__run_test__8__exp_BranchD,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__8__exp_JumpD),
                     4,__Vtask_controller_tb__DOT__run_test__8__exp_ALUControlD,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__8__exp_PCSrcE),
                     1,__Vtask_controller_tb__DOT__run_test__8__exp_Ecall,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__8__exp_Ebreak),
                     1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 0xcU)),3,(7U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                                 >> 9U)),
                     2,(3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 7U)),1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                               >> 6U)),
                     2,(3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 4U)),1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                               >> 3U)),
                     1,(1U & (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls)),
                     4,(IData)(vlSelfRef.controller_tb__DOT__ALUControlD),
                     1,vlSelfRef.controller_tb__DOT__PCSrcE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__Ecall),
                     1,vlSelfRef.controller_tb__DOT__Ebreak);
        vlSelfRef.controller_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.controller_tb__DOT__fail_count);
    }
    vlSelfRef.controller_tb__DOT__op = 0x63U;
    vlSelfRef.controller_tb__DOT__funct3 = 0U;
    vlSelfRef.controller_tb__DOT__funct7b5 = 0U;
    vlSelfRef.controller_tb__DOT__ZeroE = 0U;
    vlSelfRef.controller_tb__DOT__BranchE = 1U;
    vlSelfRef.controller_tb__DOT__JumpE = 0U;
    vlSelfRef.controller_tb__DOT__ALUResultEb0 = 0U;
    vlSelfRef.controller_tb__DOT__funct12 = 0U;
    __Vtask_controller_tb__DOT__run_test__9__test_name = 
        std::string{"Branch BEQ Not Taken"};
    __Vtask_controller_tb__DOT__run_test__9__exp_Ebreak = 0U;
    __Vtask_controller_tb__DOT__run_test__9__exp_Ecall = 0U;
    __Vtask_controller_tb__DOT__run_test__9__exp_PCSrcE = 0U;
    __Vtask_controller_tb__DOT__run_test__9__exp_ALUControlD = 1U;
    __Vtask_controller_tb__DOT__run_test__9__exp_JumpD = 0U;
    __Vtask_controller_tb__DOT__run_test__9__exp_BranchD = 1U;
    __Vtask_controller_tb__DOT__run_test__9__exp_ResultSrcD = 0U;
    __Vtask_controller_tb__DOT__run_test__9__exp_MemWriteD = 0U;
    __Vtask_controller_tb__DOT__run_test__9__exp_ALUSrcD = 0U;
    __Vtask_controller_tb__DOT__run_test__9__exp_ImmSrcD = 2U;
    __Vtask_controller_tb__DOT__run_test__9__exp_RegWriteD = 0U;
    __Vtask_controller_tb__DOT__run_test__9__in_funct12 
        = vlSelfRef.controller_tb__DOT__funct12;
    __Vtask_controller_tb__DOT__run_test__9__in_ALUResultEb0 
        = vlSelfRef.controller_tb__DOT__ALUResultEb0;
    __Vtask_controller_tb__DOT__run_test__9__in_JumpE 
        = vlSelfRef.controller_tb__DOT__JumpE;
    __Vtask_controller_tb__DOT__run_test__9__in_BranchE 
        = vlSelfRef.controller_tb__DOT__BranchE;
    __Vtask_controller_tb__DOT__run_test__9__in_ZeroE 
        = vlSelfRef.controller_tb__DOT__ZeroE;
    __Vtask_controller_tb__DOT__run_test__9__in_funct7b5 
        = vlSelfRef.controller_tb__DOT__funct7b5;
    __Vtask_controller_tb__DOT__run_test__9__in_funct3 
        = vlSelfRef.controller_tb__DOT__funct3;
    __Vtask_controller_tb__DOT__run_test__9__in_op 
        = vlSelfRef.controller_tb__DOT__op;
    vlSelfRef.controller_tb__DOT__test_num = ((IData)(1U) 
                                              + vlSelfRef.controller_tb__DOT__test_num);
    vlSelfRef.controller_tb__DOT__op = __Vtask_controller_tb__DOT__run_test__9__in_op;
    vlSelfRef.controller_tb__DOT__funct3 = __Vtask_controller_tb__DOT__run_test__9__in_funct3;
    vlSelfRef.controller_tb__DOT__funct7b5 = __Vtask_controller_tb__DOT__run_test__9__in_funct7b5;
    vlSelfRef.controller_tb__DOT__ZeroE = __Vtask_controller_tb__DOT__run_test__9__in_ZeroE;
    vlSelfRef.controller_tb__DOT__BranchE = __Vtask_controller_tb__DOT__run_test__9__in_BranchE;
    vlSelfRef.controller_tb__DOT__JumpE = __Vtask_controller_tb__DOT__run_test__9__in_JumpE;
    vlSelfRef.controller_tb__DOT__ALUResultEb0 = __Vtask_controller_tb__DOT__run_test__9__in_ALUResultEb0;
    vlSelfRef.controller_tb__DOT__funct12 = __Vtask_controller_tb__DOT__run_test__9__in_funct12;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/controller_tb.sv", 
                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((((((((((((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                          >> 0xcU)) == (IData)(__Vtask_controller_tb__DOT__run_test__9__exp_RegWriteD)) 
                  & (((0x33U == (IData)(vlSelfRef.controller_tb__DOT__op)) 
                      | (0x73U == (IData)(vlSelfRef.controller_tb__DOT__op))) 
                     | ((7U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                               >> 9U)) == (IData)(__Vtask_controller_tb__DOT__run_test__9__exp_ImmSrcD)))) 
                 & ((3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                           >> 7U)) == (IData)(__Vtask_controller_tb__DOT__run_test__9__exp_ALUSrcD))) 
                & ((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                          >> 6U)) == (IData)(__Vtask_controller_tb__DOT__run_test__9__exp_MemWriteD))) 
               & ((3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                         >> 4U)) == (IData)(__Vtask_controller_tb__DOT__run_test__9__exp_ResultSrcD))) 
              & ((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                        >> 3U)) == (IData)(__Vtask_controller_tb__DOT__run_test__9__exp_BranchD))) 
             & ((1U & (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls)) 
                == (IData)(__Vtask_controller_tb__DOT__run_test__9__exp_JumpD))) 
            & ((IData)(vlSelfRef.controller_tb__DOT__ALUControlD) 
               == (IData)(__Vtask_controller_tb__DOT__run_test__9__exp_ALUControlD))) 
           & ((IData)(vlSelfRef.controller_tb__DOT__PCSrcE) 
              == (IData)(__Vtask_controller_tb__DOT__run_test__9__exp_PCSrcE))) 
          & ((IData)(vlSelfRef.controller_tb__DOT__Ecall) 
             == (IData)(__Vtask_controller_tb__DOT__run_test__9__exp_Ecall))) 
         & ((IData)(vlSelfRef.controller_tb__DOT__Ebreak) 
            == (IData)(__Vtask_controller_tb__DOT__run_test__9__exp_Ebreak)))) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n        op=%b funct3=%b funct7b5=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n",0,
                     32,vlSelfRef.controller_tb__DOT__test_num,
                     -1,&(__Vtask_controller_tb__DOT__run_test__9__test_name),
                     7,(IData)(vlSelfRef.controller_tb__DOT__op),
                     3,vlSelfRef.controller_tb__DOT__funct3,
                     1,(IData)(vlSelfRef.controller_tb__DOT__funct7b5),
                     1,vlSelfRef.controller_tb__DOT__ZeroE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__BranchE),
                     1,vlSelfRef.controller_tb__DOT__JumpE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0));
        vlSelfRef.controller_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.controller_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n        Inputs:\n        op=%b funct3=%b funct7b5=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n        funct12=%b\n        Expected:\n        RegWrite=%b ImmSrc=%b ALUSrc=%b MemWrite=%b ResultSrc=%b Branch=%b Jump=%b ALUControl=%b PCSrc=%b Ecall=%b Ebreak=%b\n        Actual:\n        RegWrite=%b ImmSrc=%b ALUSrc=%b MemWrite=%b ResultSrc=%b Branch=%b Jump=%b ALUControl=%b PCSrc=%b Ecall=%b Ebreak=%b\n",0,
                     32,vlSelfRef.controller_tb__DOT__test_num,
                     -1,&(__Vtask_controller_tb__DOT__run_test__9__test_name),
                     7,(IData)(vlSelfRef.controller_tb__DOT__op),
                     3,vlSelfRef.controller_tb__DOT__funct3,
                     1,(IData)(vlSelfRef.controller_tb__DOT__funct7b5),
                     1,vlSelfRef.controller_tb__DOT__ZeroE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__BranchE),
                     1,vlSelfRef.controller_tb__DOT__JumpE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0),
                     12,vlSelfRef.controller_tb__DOT__funct12,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__9__exp_RegWriteD),
                     3,__Vtask_controller_tb__DOT__run_test__9__exp_ImmSrcD,
                     2,(IData)(__Vtask_controller_tb__DOT__run_test__9__exp_ALUSrcD),
                     1,__Vtask_controller_tb__DOT__run_test__9__exp_MemWriteD,
                     2,(IData)(__Vtask_controller_tb__DOT__run_test__9__exp_ResultSrcD),
                     1,__Vtask_controller_tb__DOT__run_test__9__exp_BranchD,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__9__exp_JumpD),
                     4,__Vtask_controller_tb__DOT__run_test__9__exp_ALUControlD,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__9__exp_PCSrcE),
                     1,__Vtask_controller_tb__DOT__run_test__9__exp_Ecall,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__9__exp_Ebreak),
                     1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 0xcU)),3,(7U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                                 >> 9U)),
                     2,(3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 7U)),1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                               >> 6U)),
                     2,(3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 4U)),1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                               >> 3U)),
                     1,(1U & (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls)),
                     4,(IData)(vlSelfRef.controller_tb__DOT__ALUControlD),
                     1,vlSelfRef.controller_tb__DOT__PCSrcE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__Ecall),
                     1,vlSelfRef.controller_tb__DOT__Ebreak);
        vlSelfRef.controller_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.controller_tb__DOT__fail_count);
    }
    vlSelfRef.controller_tb__DOT__op = 0x63U;
    vlSelfRef.controller_tb__DOT__funct3 = 4U;
    vlSelfRef.controller_tb__DOT__funct7b5 = 0U;
    vlSelfRef.controller_tb__DOT__ZeroE = 0U;
    vlSelfRef.controller_tb__DOT__BranchE = 1U;
    vlSelfRef.controller_tb__DOT__JumpE = 0U;
    vlSelfRef.controller_tb__DOT__ALUResultEb0 = 1U;
    vlSelfRef.controller_tb__DOT__funct12 = 0U;
    __Vtask_controller_tb__DOT__run_test__10__test_name = 
        std::string{"Branch BLT Taken"};
    __Vtask_controller_tb__DOT__run_test__10__exp_Ebreak = 0U;
    __Vtask_controller_tb__DOT__run_test__10__exp_Ecall = 0U;
    __Vtask_controller_tb__DOT__run_test__10__exp_PCSrcE = 1U;
    __Vtask_controller_tb__DOT__run_test__10__exp_ALUControlD = 1U;
    __Vtask_controller_tb__DOT__run_test__10__exp_JumpD = 0U;
    __Vtask_controller_tb__DOT__run_test__10__exp_BranchD = 1U;
    __Vtask_controller_tb__DOT__run_test__10__exp_ResultSrcD = 0U;
    __Vtask_controller_tb__DOT__run_test__10__exp_MemWriteD = 0U;
    __Vtask_controller_tb__DOT__run_test__10__exp_ALUSrcD = 0U;
    __Vtask_controller_tb__DOT__run_test__10__exp_ImmSrcD = 2U;
    __Vtask_controller_tb__DOT__run_test__10__exp_RegWriteD = 0U;
    __Vtask_controller_tb__DOT__run_test__10__in_funct12 
        = vlSelfRef.controller_tb__DOT__funct12;
    __Vtask_controller_tb__DOT__run_test__10__in_ALUResultEb0 
        = vlSelfRef.controller_tb__DOT__ALUResultEb0;
    __Vtask_controller_tb__DOT__run_test__10__in_JumpE 
        = vlSelfRef.controller_tb__DOT__JumpE;
    __Vtask_controller_tb__DOT__run_test__10__in_BranchE 
        = vlSelfRef.controller_tb__DOT__BranchE;
    __Vtask_controller_tb__DOT__run_test__10__in_ZeroE 
        = vlSelfRef.controller_tb__DOT__ZeroE;
    __Vtask_controller_tb__DOT__run_test__10__in_funct7b5 
        = vlSelfRef.controller_tb__DOT__funct7b5;
    __Vtask_controller_tb__DOT__run_test__10__in_funct3 
        = vlSelfRef.controller_tb__DOT__funct3;
    __Vtask_controller_tb__DOT__run_test__10__in_op 
        = vlSelfRef.controller_tb__DOT__op;
    vlSelfRef.controller_tb__DOT__test_num = ((IData)(1U) 
                                              + vlSelfRef.controller_tb__DOT__test_num);
    vlSelfRef.controller_tb__DOT__op = __Vtask_controller_tb__DOT__run_test__10__in_op;
    vlSelfRef.controller_tb__DOT__funct3 = __Vtask_controller_tb__DOT__run_test__10__in_funct3;
    vlSelfRef.controller_tb__DOT__funct7b5 = __Vtask_controller_tb__DOT__run_test__10__in_funct7b5;
    vlSelfRef.controller_tb__DOT__ZeroE = __Vtask_controller_tb__DOT__run_test__10__in_ZeroE;
    vlSelfRef.controller_tb__DOT__BranchE = __Vtask_controller_tb__DOT__run_test__10__in_BranchE;
    vlSelfRef.controller_tb__DOT__JumpE = __Vtask_controller_tb__DOT__run_test__10__in_JumpE;
    vlSelfRef.controller_tb__DOT__ALUResultEb0 = __Vtask_controller_tb__DOT__run_test__10__in_ALUResultEb0;
    vlSelfRef.controller_tb__DOT__funct12 = __Vtask_controller_tb__DOT__run_test__10__in_funct12;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/controller_tb.sv", 
                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((((((((((((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                          >> 0xcU)) == (IData)(__Vtask_controller_tb__DOT__run_test__10__exp_RegWriteD)) 
                  & (((0x33U == (IData)(vlSelfRef.controller_tb__DOT__op)) 
                      | (0x73U == (IData)(vlSelfRef.controller_tb__DOT__op))) 
                     | ((7U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                               >> 9U)) == (IData)(__Vtask_controller_tb__DOT__run_test__10__exp_ImmSrcD)))) 
                 & ((3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                           >> 7U)) == (IData)(__Vtask_controller_tb__DOT__run_test__10__exp_ALUSrcD))) 
                & ((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                          >> 6U)) == (IData)(__Vtask_controller_tb__DOT__run_test__10__exp_MemWriteD))) 
               & ((3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                         >> 4U)) == (IData)(__Vtask_controller_tb__DOT__run_test__10__exp_ResultSrcD))) 
              & ((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                        >> 3U)) == (IData)(__Vtask_controller_tb__DOT__run_test__10__exp_BranchD))) 
             & ((1U & (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls)) 
                == (IData)(__Vtask_controller_tb__DOT__run_test__10__exp_JumpD))) 
            & ((IData)(vlSelfRef.controller_tb__DOT__ALUControlD) 
               == (IData)(__Vtask_controller_tb__DOT__run_test__10__exp_ALUControlD))) 
           & ((IData)(vlSelfRef.controller_tb__DOT__PCSrcE) 
              == (IData)(__Vtask_controller_tb__DOT__run_test__10__exp_PCSrcE))) 
          & ((IData)(vlSelfRef.controller_tb__DOT__Ecall) 
             == (IData)(__Vtask_controller_tb__DOT__run_test__10__exp_Ecall))) 
         & ((IData)(vlSelfRef.controller_tb__DOT__Ebreak) 
            == (IData)(__Vtask_controller_tb__DOT__run_test__10__exp_Ebreak)))) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n        op=%b funct3=%b funct7b5=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n",0,
                     32,vlSelfRef.controller_tb__DOT__test_num,
                     -1,&(__Vtask_controller_tb__DOT__run_test__10__test_name),
                     7,(IData)(vlSelfRef.controller_tb__DOT__op),
                     3,vlSelfRef.controller_tb__DOT__funct3,
                     1,(IData)(vlSelfRef.controller_tb__DOT__funct7b5),
                     1,vlSelfRef.controller_tb__DOT__ZeroE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__BranchE),
                     1,vlSelfRef.controller_tb__DOT__JumpE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0));
        vlSelfRef.controller_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.controller_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n        Inputs:\n        op=%b funct3=%b funct7b5=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n        funct12=%b\n        Expected:\n        RegWrite=%b ImmSrc=%b ALUSrc=%b MemWrite=%b ResultSrc=%b Branch=%b Jump=%b ALUControl=%b PCSrc=%b Ecall=%b Ebreak=%b\n        Actual:\n        RegWrite=%b ImmSrc=%b ALUSrc=%b MemWrite=%b ResultSrc=%b Branch=%b Jump=%b ALUControl=%b PCSrc=%b Ecall=%b Ebreak=%b\n",0,
                     32,vlSelfRef.controller_tb__DOT__test_num,
                     -1,&(__Vtask_controller_tb__DOT__run_test__10__test_name),
                     7,(IData)(vlSelfRef.controller_tb__DOT__op),
                     3,vlSelfRef.controller_tb__DOT__funct3,
                     1,(IData)(vlSelfRef.controller_tb__DOT__funct7b5),
                     1,vlSelfRef.controller_tb__DOT__ZeroE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__BranchE),
                     1,vlSelfRef.controller_tb__DOT__JumpE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0),
                     12,vlSelfRef.controller_tb__DOT__funct12,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__10__exp_RegWriteD),
                     3,__Vtask_controller_tb__DOT__run_test__10__exp_ImmSrcD,
                     2,(IData)(__Vtask_controller_tb__DOT__run_test__10__exp_ALUSrcD),
                     1,__Vtask_controller_tb__DOT__run_test__10__exp_MemWriteD,
                     2,(IData)(__Vtask_controller_tb__DOT__run_test__10__exp_ResultSrcD),
                     1,__Vtask_controller_tb__DOT__run_test__10__exp_BranchD,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__10__exp_JumpD),
                     4,__Vtask_controller_tb__DOT__run_test__10__exp_ALUControlD,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__10__exp_PCSrcE),
                     1,__Vtask_controller_tb__DOT__run_test__10__exp_Ecall,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__10__exp_Ebreak),
                     1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 0xcU)),3,(7U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                                 >> 9U)),
                     2,(3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 7U)),1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                               >> 6U)),
                     2,(3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 4U)),1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                               >> 3U)),
                     1,(1U & (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls)),
                     4,(IData)(vlSelfRef.controller_tb__DOT__ALUControlD),
                     1,vlSelfRef.controller_tb__DOT__PCSrcE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__Ecall),
                     1,vlSelfRef.controller_tb__DOT__Ebreak);
        vlSelfRef.controller_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.controller_tb__DOT__fail_count);
    }
    vlSelfRef.controller_tb__DOT__op = 0x63U;
    vlSelfRef.controller_tb__DOT__funct3 = 4U;
    vlSelfRef.controller_tb__DOT__funct7b5 = 0U;
    vlSelfRef.controller_tb__DOT__ZeroE = 0U;
    vlSelfRef.controller_tb__DOT__BranchE = 1U;
    vlSelfRef.controller_tb__DOT__JumpE = 0U;
    vlSelfRef.controller_tb__DOT__ALUResultEb0 = 0U;
    vlSelfRef.controller_tb__DOT__funct12 = 0U;
    __Vtask_controller_tb__DOT__run_test__11__test_name = 
        std::string{"Branch BLT Not Taken"};
    __Vtask_controller_tb__DOT__run_test__11__exp_Ebreak = 0U;
    __Vtask_controller_tb__DOT__run_test__11__exp_Ecall = 0U;
    __Vtask_controller_tb__DOT__run_test__11__exp_PCSrcE = 0U;
    __Vtask_controller_tb__DOT__run_test__11__exp_ALUControlD = 1U;
    __Vtask_controller_tb__DOT__run_test__11__exp_JumpD = 0U;
    __Vtask_controller_tb__DOT__run_test__11__exp_BranchD = 1U;
    __Vtask_controller_tb__DOT__run_test__11__exp_ResultSrcD = 0U;
    __Vtask_controller_tb__DOT__run_test__11__exp_MemWriteD = 0U;
    __Vtask_controller_tb__DOT__run_test__11__exp_ALUSrcD = 0U;
    __Vtask_controller_tb__DOT__run_test__11__exp_ImmSrcD = 2U;
    __Vtask_controller_tb__DOT__run_test__11__exp_RegWriteD = 0U;
    __Vtask_controller_tb__DOT__run_test__11__in_funct12 
        = vlSelfRef.controller_tb__DOT__funct12;
    __Vtask_controller_tb__DOT__run_test__11__in_ALUResultEb0 
        = vlSelfRef.controller_tb__DOT__ALUResultEb0;
    __Vtask_controller_tb__DOT__run_test__11__in_JumpE 
        = vlSelfRef.controller_tb__DOT__JumpE;
    __Vtask_controller_tb__DOT__run_test__11__in_BranchE 
        = vlSelfRef.controller_tb__DOT__BranchE;
    __Vtask_controller_tb__DOT__run_test__11__in_ZeroE 
        = vlSelfRef.controller_tb__DOT__ZeroE;
    __Vtask_controller_tb__DOT__run_test__11__in_funct7b5 
        = vlSelfRef.controller_tb__DOT__funct7b5;
    __Vtask_controller_tb__DOT__run_test__11__in_funct3 
        = vlSelfRef.controller_tb__DOT__funct3;
    __Vtask_controller_tb__DOT__run_test__11__in_op 
        = vlSelfRef.controller_tb__DOT__op;
    vlSelfRef.controller_tb__DOT__test_num = ((IData)(1U) 
                                              + vlSelfRef.controller_tb__DOT__test_num);
    vlSelfRef.controller_tb__DOT__op = __Vtask_controller_tb__DOT__run_test__11__in_op;
    vlSelfRef.controller_tb__DOT__funct3 = __Vtask_controller_tb__DOT__run_test__11__in_funct3;
    vlSelfRef.controller_tb__DOT__funct7b5 = __Vtask_controller_tb__DOT__run_test__11__in_funct7b5;
    vlSelfRef.controller_tb__DOT__ZeroE = __Vtask_controller_tb__DOT__run_test__11__in_ZeroE;
    vlSelfRef.controller_tb__DOT__BranchE = __Vtask_controller_tb__DOT__run_test__11__in_BranchE;
    vlSelfRef.controller_tb__DOT__JumpE = __Vtask_controller_tb__DOT__run_test__11__in_JumpE;
    vlSelfRef.controller_tb__DOT__ALUResultEb0 = __Vtask_controller_tb__DOT__run_test__11__in_ALUResultEb0;
    vlSelfRef.controller_tb__DOT__funct12 = __Vtask_controller_tb__DOT__run_test__11__in_funct12;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/controller_tb.sv", 
                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((((((((((((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                          >> 0xcU)) == (IData)(__Vtask_controller_tb__DOT__run_test__11__exp_RegWriteD)) 
                  & (((0x33U == (IData)(vlSelfRef.controller_tb__DOT__op)) 
                      | (0x73U == (IData)(vlSelfRef.controller_tb__DOT__op))) 
                     | ((7U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                               >> 9U)) == (IData)(__Vtask_controller_tb__DOT__run_test__11__exp_ImmSrcD)))) 
                 & ((3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                           >> 7U)) == (IData)(__Vtask_controller_tb__DOT__run_test__11__exp_ALUSrcD))) 
                & ((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                          >> 6U)) == (IData)(__Vtask_controller_tb__DOT__run_test__11__exp_MemWriteD))) 
               & ((3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                         >> 4U)) == (IData)(__Vtask_controller_tb__DOT__run_test__11__exp_ResultSrcD))) 
              & ((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                        >> 3U)) == (IData)(__Vtask_controller_tb__DOT__run_test__11__exp_BranchD))) 
             & ((1U & (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls)) 
                == (IData)(__Vtask_controller_tb__DOT__run_test__11__exp_JumpD))) 
            & ((IData)(vlSelfRef.controller_tb__DOT__ALUControlD) 
               == (IData)(__Vtask_controller_tb__DOT__run_test__11__exp_ALUControlD))) 
           & ((IData)(vlSelfRef.controller_tb__DOT__PCSrcE) 
              == (IData)(__Vtask_controller_tb__DOT__run_test__11__exp_PCSrcE))) 
          & ((IData)(vlSelfRef.controller_tb__DOT__Ecall) 
             == (IData)(__Vtask_controller_tb__DOT__run_test__11__exp_Ecall))) 
         & ((IData)(vlSelfRef.controller_tb__DOT__Ebreak) 
            == (IData)(__Vtask_controller_tb__DOT__run_test__11__exp_Ebreak)))) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n        op=%b funct3=%b funct7b5=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n",0,
                     32,vlSelfRef.controller_tb__DOT__test_num,
                     -1,&(__Vtask_controller_tb__DOT__run_test__11__test_name),
                     7,(IData)(vlSelfRef.controller_tb__DOT__op),
                     3,vlSelfRef.controller_tb__DOT__funct3,
                     1,(IData)(vlSelfRef.controller_tb__DOT__funct7b5),
                     1,vlSelfRef.controller_tb__DOT__ZeroE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__BranchE),
                     1,vlSelfRef.controller_tb__DOT__JumpE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0));
        vlSelfRef.controller_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.controller_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n        Inputs:\n        op=%b funct3=%b funct7b5=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n        funct12=%b\n        Expected:\n        RegWrite=%b ImmSrc=%b ALUSrc=%b MemWrite=%b ResultSrc=%b Branch=%b Jump=%b ALUControl=%b PCSrc=%b Ecall=%b Ebreak=%b\n        Actual:\n        RegWrite=%b ImmSrc=%b ALUSrc=%b MemWrite=%b ResultSrc=%b Branch=%b Jump=%b ALUControl=%b PCSrc=%b Ecall=%b Ebreak=%b\n",0,
                     32,vlSelfRef.controller_tb__DOT__test_num,
                     -1,&(__Vtask_controller_tb__DOT__run_test__11__test_name),
                     7,(IData)(vlSelfRef.controller_tb__DOT__op),
                     3,vlSelfRef.controller_tb__DOT__funct3,
                     1,(IData)(vlSelfRef.controller_tb__DOT__funct7b5),
                     1,vlSelfRef.controller_tb__DOT__ZeroE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__BranchE),
                     1,vlSelfRef.controller_tb__DOT__JumpE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0),
                     12,vlSelfRef.controller_tb__DOT__funct12,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__11__exp_RegWriteD),
                     3,__Vtask_controller_tb__DOT__run_test__11__exp_ImmSrcD,
                     2,(IData)(__Vtask_controller_tb__DOT__run_test__11__exp_ALUSrcD),
                     1,__Vtask_controller_tb__DOT__run_test__11__exp_MemWriteD,
                     2,(IData)(__Vtask_controller_tb__DOT__run_test__11__exp_ResultSrcD),
                     1,__Vtask_controller_tb__DOT__run_test__11__exp_BranchD,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__11__exp_JumpD),
                     4,__Vtask_controller_tb__DOT__run_test__11__exp_ALUControlD,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__11__exp_PCSrcE),
                     1,__Vtask_controller_tb__DOT__run_test__11__exp_Ecall,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__11__exp_Ebreak),
                     1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 0xcU)),3,(7U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                                 >> 9U)),
                     2,(3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 7U)),1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                               >> 6U)),
                     2,(3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 4U)),1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                               >> 3U)),
                     1,(1U & (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls)),
                     4,(IData)(vlSelfRef.controller_tb__DOT__ALUControlD),
                     1,vlSelfRef.controller_tb__DOT__PCSrcE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__Ecall),
                     1,vlSelfRef.controller_tb__DOT__Ebreak);
        vlSelfRef.controller_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.controller_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n----------- Jump Instructions -----------\n",0);
    vlSelfRef.controller_tb__DOT__op = 0x6fU;
    vlSelfRef.controller_tb__DOT__funct3 = 0U;
    vlSelfRef.controller_tb__DOT__funct7b5 = 0U;
    vlSelfRef.controller_tb__DOT__ZeroE = 0U;
    vlSelfRef.controller_tb__DOT__BranchE = 0U;
    vlSelfRef.controller_tb__DOT__JumpE = 1U;
    vlSelfRef.controller_tb__DOT__ALUResultEb0 = 0U;
    vlSelfRef.controller_tb__DOT__funct12 = 0U;
    __Vtask_controller_tb__DOT__run_test__12__test_name = 
        std::string{"Jump JAL"};
    __Vtask_controller_tb__DOT__run_test__12__exp_Ebreak = 0U;
    __Vtask_controller_tb__DOT__run_test__12__exp_Ecall = 0U;
    __Vtask_controller_tb__DOT__run_test__12__exp_PCSrcE = 1U;
    __Vtask_controller_tb__DOT__run_test__12__exp_ALUControlD = 0U;
    __Vtask_controller_tb__DOT__run_test__12__exp_JumpD = 1U;
    __Vtask_controller_tb__DOT__run_test__12__exp_BranchD = 0U;
    __Vtask_controller_tb__DOT__run_test__12__exp_ResultSrcD = 2U;
    __Vtask_controller_tb__DOT__run_test__12__exp_MemWriteD = 0U;
    __Vtask_controller_tb__DOT__run_test__12__exp_ALUSrcD = 0U;
    __Vtask_controller_tb__DOT__run_test__12__exp_ImmSrcD = 3U;
    __Vtask_controller_tb__DOT__run_test__12__exp_RegWriteD = 1U;
    __Vtask_controller_tb__DOT__run_test__12__in_funct12 
        = vlSelfRef.controller_tb__DOT__funct12;
    __Vtask_controller_tb__DOT__run_test__12__in_ALUResultEb0 
        = vlSelfRef.controller_tb__DOT__ALUResultEb0;
    __Vtask_controller_tb__DOT__run_test__12__in_JumpE 
        = vlSelfRef.controller_tb__DOT__JumpE;
    __Vtask_controller_tb__DOT__run_test__12__in_BranchE 
        = vlSelfRef.controller_tb__DOT__BranchE;
    __Vtask_controller_tb__DOT__run_test__12__in_ZeroE 
        = vlSelfRef.controller_tb__DOT__ZeroE;
    __Vtask_controller_tb__DOT__run_test__12__in_funct7b5 
        = vlSelfRef.controller_tb__DOT__funct7b5;
    __Vtask_controller_tb__DOT__run_test__12__in_funct3 
        = vlSelfRef.controller_tb__DOT__funct3;
    __Vtask_controller_tb__DOT__run_test__12__in_op 
        = vlSelfRef.controller_tb__DOT__op;
    vlSelfRef.controller_tb__DOT__test_num = ((IData)(1U) 
                                              + vlSelfRef.controller_tb__DOT__test_num);
    vlSelfRef.controller_tb__DOT__op = __Vtask_controller_tb__DOT__run_test__12__in_op;
    vlSelfRef.controller_tb__DOT__funct3 = __Vtask_controller_tb__DOT__run_test__12__in_funct3;
    vlSelfRef.controller_tb__DOT__funct7b5 = __Vtask_controller_tb__DOT__run_test__12__in_funct7b5;
    vlSelfRef.controller_tb__DOT__ZeroE = __Vtask_controller_tb__DOT__run_test__12__in_ZeroE;
    vlSelfRef.controller_tb__DOT__BranchE = __Vtask_controller_tb__DOT__run_test__12__in_BranchE;
    vlSelfRef.controller_tb__DOT__JumpE = __Vtask_controller_tb__DOT__run_test__12__in_JumpE;
    vlSelfRef.controller_tb__DOT__ALUResultEb0 = __Vtask_controller_tb__DOT__run_test__12__in_ALUResultEb0;
    vlSelfRef.controller_tb__DOT__funct12 = __Vtask_controller_tb__DOT__run_test__12__in_funct12;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/controller_tb.sv", 
                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((((((((((((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                          >> 0xcU)) == (IData)(__Vtask_controller_tb__DOT__run_test__12__exp_RegWriteD)) 
                  & (((0x33U == (IData)(vlSelfRef.controller_tb__DOT__op)) 
                      | (0x73U == (IData)(vlSelfRef.controller_tb__DOT__op))) 
                     | ((7U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                               >> 9U)) == (IData)(__Vtask_controller_tb__DOT__run_test__12__exp_ImmSrcD)))) 
                 & ((3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                           >> 7U)) == (IData)(__Vtask_controller_tb__DOT__run_test__12__exp_ALUSrcD))) 
                & ((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                          >> 6U)) == (IData)(__Vtask_controller_tb__DOT__run_test__12__exp_MemWriteD))) 
               & ((3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                         >> 4U)) == (IData)(__Vtask_controller_tb__DOT__run_test__12__exp_ResultSrcD))) 
              & ((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                        >> 3U)) == (IData)(__Vtask_controller_tb__DOT__run_test__12__exp_BranchD))) 
             & ((1U & (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls)) 
                == (IData)(__Vtask_controller_tb__DOT__run_test__12__exp_JumpD))) 
            & ((IData)(vlSelfRef.controller_tb__DOT__ALUControlD) 
               == (IData)(__Vtask_controller_tb__DOT__run_test__12__exp_ALUControlD))) 
           & ((IData)(vlSelfRef.controller_tb__DOT__PCSrcE) 
              == (IData)(__Vtask_controller_tb__DOT__run_test__12__exp_PCSrcE))) 
          & ((IData)(vlSelfRef.controller_tb__DOT__Ecall) 
             == (IData)(__Vtask_controller_tb__DOT__run_test__12__exp_Ecall))) 
         & ((IData)(vlSelfRef.controller_tb__DOT__Ebreak) 
            == (IData)(__Vtask_controller_tb__DOT__run_test__12__exp_Ebreak)))) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n        op=%b funct3=%b funct7b5=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n",0,
                     32,vlSelfRef.controller_tb__DOT__test_num,
                     -1,&(__Vtask_controller_tb__DOT__run_test__12__test_name),
                     7,(IData)(vlSelfRef.controller_tb__DOT__op),
                     3,vlSelfRef.controller_tb__DOT__funct3,
                     1,(IData)(vlSelfRef.controller_tb__DOT__funct7b5),
                     1,vlSelfRef.controller_tb__DOT__ZeroE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__BranchE),
                     1,vlSelfRef.controller_tb__DOT__JumpE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0));
        vlSelfRef.controller_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.controller_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n        Inputs:\n        op=%b funct3=%b funct7b5=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n        funct12=%b\n        Expected:\n        RegWrite=%b ImmSrc=%b ALUSrc=%b MemWrite=%b ResultSrc=%b Branch=%b Jump=%b ALUControl=%b PCSrc=%b Ecall=%b Ebreak=%b\n        Actual:\n        RegWrite=%b ImmSrc=%b ALUSrc=%b MemWrite=%b ResultSrc=%b Branch=%b Jump=%b ALUControl=%b PCSrc=%b Ecall=%b Ebreak=%b\n",0,
                     32,vlSelfRef.controller_tb__DOT__test_num,
                     -1,&(__Vtask_controller_tb__DOT__run_test__12__test_name),
                     7,(IData)(vlSelfRef.controller_tb__DOT__op),
                     3,vlSelfRef.controller_tb__DOT__funct3,
                     1,(IData)(vlSelfRef.controller_tb__DOT__funct7b5),
                     1,vlSelfRef.controller_tb__DOT__ZeroE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__BranchE),
                     1,vlSelfRef.controller_tb__DOT__JumpE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0),
                     12,vlSelfRef.controller_tb__DOT__funct12,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__12__exp_RegWriteD),
                     3,__Vtask_controller_tb__DOT__run_test__12__exp_ImmSrcD,
                     2,(IData)(__Vtask_controller_tb__DOT__run_test__12__exp_ALUSrcD),
                     1,__Vtask_controller_tb__DOT__run_test__12__exp_MemWriteD,
                     2,(IData)(__Vtask_controller_tb__DOT__run_test__12__exp_ResultSrcD),
                     1,__Vtask_controller_tb__DOT__run_test__12__exp_BranchD,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__12__exp_JumpD),
                     4,__Vtask_controller_tb__DOT__run_test__12__exp_ALUControlD,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__12__exp_PCSrcE),
                     1,__Vtask_controller_tb__DOT__run_test__12__exp_Ecall,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__12__exp_Ebreak),
                     1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 0xcU)),3,(7U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                                 >> 9U)),
                     2,(3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 7U)),1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                               >> 6U)),
                     2,(3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 4U)),1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                               >> 3U)),
                     1,(1U & (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls)),
                     4,(IData)(vlSelfRef.controller_tb__DOT__ALUControlD),
                     1,vlSelfRef.controller_tb__DOT__PCSrcE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__Ecall),
                     1,vlSelfRef.controller_tb__DOT__Ebreak);
        vlSelfRef.controller_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.controller_tb__DOT__fail_count);
    }
    vlSelfRef.controller_tb__DOT__op = 0x67U;
    vlSelfRef.controller_tb__DOT__funct3 = 0U;
    vlSelfRef.controller_tb__DOT__funct7b5 = 0U;
    vlSelfRef.controller_tb__DOT__ZeroE = 0U;
    vlSelfRef.controller_tb__DOT__BranchE = 0U;
    vlSelfRef.controller_tb__DOT__JumpE = 1U;
    vlSelfRef.controller_tb__DOT__ALUResultEb0 = 0U;
    vlSelfRef.controller_tb__DOT__funct12 = 0U;
    __Vtask_controller_tb__DOT__run_test__13__test_name = 
        std::string{"Jump JALR"};
    __Vtask_controller_tb__DOT__run_test__13__exp_Ebreak = 0U;
    __Vtask_controller_tb__DOT__run_test__13__exp_Ecall = 0U;
    __Vtask_controller_tb__DOT__run_test__13__exp_PCSrcE = 1U;
    __Vtask_controller_tb__DOT__run_test__13__exp_ALUControlD = 0U;
    __Vtask_controller_tb__DOT__run_test__13__exp_JumpD = 1U;
    __Vtask_controller_tb__DOT__run_test__13__exp_BranchD = 0U;
    __Vtask_controller_tb__DOT__run_test__13__exp_ResultSrcD = 2U;
    __Vtask_controller_tb__DOT__run_test__13__exp_MemWriteD = 0U;
    __Vtask_controller_tb__DOT__run_test__13__exp_ALUSrcD = 1U;
    __Vtask_controller_tb__DOT__run_test__13__exp_ImmSrcD = 0U;
    __Vtask_controller_tb__DOT__run_test__13__exp_RegWriteD = 1U;
    __Vtask_controller_tb__DOT__run_test__13__in_funct12 
        = vlSelfRef.controller_tb__DOT__funct12;
    __Vtask_controller_tb__DOT__run_test__13__in_ALUResultEb0 
        = vlSelfRef.controller_tb__DOT__ALUResultEb0;
    __Vtask_controller_tb__DOT__run_test__13__in_JumpE 
        = vlSelfRef.controller_tb__DOT__JumpE;
    __Vtask_controller_tb__DOT__run_test__13__in_BranchE 
        = vlSelfRef.controller_tb__DOT__BranchE;
    __Vtask_controller_tb__DOT__run_test__13__in_ZeroE 
        = vlSelfRef.controller_tb__DOT__ZeroE;
    __Vtask_controller_tb__DOT__run_test__13__in_funct7b5 
        = vlSelfRef.controller_tb__DOT__funct7b5;
    __Vtask_controller_tb__DOT__run_test__13__in_funct3 
        = vlSelfRef.controller_tb__DOT__funct3;
    __Vtask_controller_tb__DOT__run_test__13__in_op 
        = vlSelfRef.controller_tb__DOT__op;
    vlSelfRef.controller_tb__DOT__test_num = ((IData)(1U) 
                                              + vlSelfRef.controller_tb__DOT__test_num);
    vlSelfRef.controller_tb__DOT__op = __Vtask_controller_tb__DOT__run_test__13__in_op;
    vlSelfRef.controller_tb__DOT__funct3 = __Vtask_controller_tb__DOT__run_test__13__in_funct3;
    vlSelfRef.controller_tb__DOT__funct7b5 = __Vtask_controller_tb__DOT__run_test__13__in_funct7b5;
    vlSelfRef.controller_tb__DOT__ZeroE = __Vtask_controller_tb__DOT__run_test__13__in_ZeroE;
    vlSelfRef.controller_tb__DOT__BranchE = __Vtask_controller_tb__DOT__run_test__13__in_BranchE;
    vlSelfRef.controller_tb__DOT__JumpE = __Vtask_controller_tb__DOT__run_test__13__in_JumpE;
    vlSelfRef.controller_tb__DOT__ALUResultEb0 = __Vtask_controller_tb__DOT__run_test__13__in_ALUResultEb0;
    vlSelfRef.controller_tb__DOT__funct12 = __Vtask_controller_tb__DOT__run_test__13__in_funct12;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/controller_tb.sv", 
                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((((((((((((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                          >> 0xcU)) == (IData)(__Vtask_controller_tb__DOT__run_test__13__exp_RegWriteD)) 
                  & (((0x33U == (IData)(vlSelfRef.controller_tb__DOT__op)) 
                      | (0x73U == (IData)(vlSelfRef.controller_tb__DOT__op))) 
                     | ((7U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                               >> 9U)) == (IData)(__Vtask_controller_tb__DOT__run_test__13__exp_ImmSrcD)))) 
                 & ((3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                           >> 7U)) == (IData)(__Vtask_controller_tb__DOT__run_test__13__exp_ALUSrcD))) 
                & ((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                          >> 6U)) == (IData)(__Vtask_controller_tb__DOT__run_test__13__exp_MemWriteD))) 
               & ((3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                         >> 4U)) == (IData)(__Vtask_controller_tb__DOT__run_test__13__exp_ResultSrcD))) 
              & ((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                        >> 3U)) == (IData)(__Vtask_controller_tb__DOT__run_test__13__exp_BranchD))) 
             & ((1U & (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls)) 
                == (IData)(__Vtask_controller_tb__DOT__run_test__13__exp_JumpD))) 
            & ((IData)(vlSelfRef.controller_tb__DOT__ALUControlD) 
               == (IData)(__Vtask_controller_tb__DOT__run_test__13__exp_ALUControlD))) 
           & ((IData)(vlSelfRef.controller_tb__DOT__PCSrcE) 
              == (IData)(__Vtask_controller_tb__DOT__run_test__13__exp_PCSrcE))) 
          & ((IData)(vlSelfRef.controller_tb__DOT__Ecall) 
             == (IData)(__Vtask_controller_tb__DOT__run_test__13__exp_Ecall))) 
         & ((IData)(vlSelfRef.controller_tb__DOT__Ebreak) 
            == (IData)(__Vtask_controller_tb__DOT__run_test__13__exp_Ebreak)))) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n        op=%b funct3=%b funct7b5=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n",0,
                     32,vlSelfRef.controller_tb__DOT__test_num,
                     -1,&(__Vtask_controller_tb__DOT__run_test__13__test_name),
                     7,(IData)(vlSelfRef.controller_tb__DOT__op),
                     3,vlSelfRef.controller_tb__DOT__funct3,
                     1,(IData)(vlSelfRef.controller_tb__DOT__funct7b5),
                     1,vlSelfRef.controller_tb__DOT__ZeroE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__BranchE),
                     1,vlSelfRef.controller_tb__DOT__JumpE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0));
        vlSelfRef.controller_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.controller_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n        Inputs:\n        op=%b funct3=%b funct7b5=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n        funct12=%b\n        Expected:\n        RegWrite=%b ImmSrc=%b ALUSrc=%b MemWrite=%b ResultSrc=%b Branch=%b Jump=%b ALUControl=%b PCSrc=%b Ecall=%b Ebreak=%b\n        Actual:\n        RegWrite=%b ImmSrc=%b ALUSrc=%b MemWrite=%b ResultSrc=%b Branch=%b Jump=%b ALUControl=%b PCSrc=%b Ecall=%b Ebreak=%b\n",0,
                     32,vlSelfRef.controller_tb__DOT__test_num,
                     -1,&(__Vtask_controller_tb__DOT__run_test__13__test_name),
                     7,(IData)(vlSelfRef.controller_tb__DOT__op),
                     3,vlSelfRef.controller_tb__DOT__funct3,
                     1,(IData)(vlSelfRef.controller_tb__DOT__funct7b5),
                     1,vlSelfRef.controller_tb__DOT__ZeroE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__BranchE),
                     1,vlSelfRef.controller_tb__DOT__JumpE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0),
                     12,vlSelfRef.controller_tb__DOT__funct12,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__13__exp_RegWriteD),
                     3,__Vtask_controller_tb__DOT__run_test__13__exp_ImmSrcD,
                     2,(IData)(__Vtask_controller_tb__DOT__run_test__13__exp_ALUSrcD),
                     1,__Vtask_controller_tb__DOT__run_test__13__exp_MemWriteD,
                     2,(IData)(__Vtask_controller_tb__DOT__run_test__13__exp_ResultSrcD),
                     1,__Vtask_controller_tb__DOT__run_test__13__exp_BranchD,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__13__exp_JumpD),
                     4,__Vtask_controller_tb__DOT__run_test__13__exp_ALUControlD,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__13__exp_PCSrcE),
                     1,__Vtask_controller_tb__DOT__run_test__13__exp_Ecall,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__13__exp_Ebreak),
                     1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 0xcU)),3,(7U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                                 >> 9U)),
                     2,(3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 7U)),1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                               >> 6U)),
                     2,(3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 4U)),1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                               >> 3U)),
                     1,(1U & (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls)),
                     4,(IData)(vlSelfRef.controller_tb__DOT__ALUControlD),
                     1,vlSelfRef.controller_tb__DOT__PCSrcE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__Ecall),
                     1,vlSelfRef.controller_tb__DOT__Ebreak);
        vlSelfRef.controller_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.controller_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n----------- Upper Immediate Instructions -----------\n",0);
    vlSelfRef.controller_tb__DOT__op = 0x37U;
    vlSelfRef.controller_tb__DOT__funct3 = 0U;
    vlSelfRef.controller_tb__DOT__funct7b5 = 0U;
    vlSelfRef.controller_tb__DOT__ZeroE = 0U;
    vlSelfRef.controller_tb__DOT__BranchE = 0U;
    vlSelfRef.controller_tb__DOT__JumpE = 0U;
    vlSelfRef.controller_tb__DOT__ALUResultEb0 = 0U;
    vlSelfRef.controller_tb__DOT__funct12 = 0U;
    __Vtask_controller_tb__DOT__run_test__14__test_name = 
        std::string{"Upper LUI"};
    __Vtask_controller_tb__DOT__run_test__14__exp_Ebreak = 0U;
    __Vtask_controller_tb__DOT__run_test__14__exp_Ecall = 0U;
    __Vtask_controller_tb__DOT__run_test__14__exp_PCSrcE = 0U;
    __Vtask_controller_tb__DOT__run_test__14__exp_ALUControlD = 0xbU;
    __Vtask_controller_tb__DOT__run_test__14__exp_JumpD = 0U;
    __Vtask_controller_tb__DOT__run_test__14__exp_BranchD = 0U;
    __Vtask_controller_tb__DOT__run_test__14__exp_ResultSrcD = 0U;
    __Vtask_controller_tb__DOT__run_test__14__exp_MemWriteD = 0U;
    __Vtask_controller_tb__DOT__run_test__14__exp_ALUSrcD = 1U;
    __Vtask_controller_tb__DOT__run_test__14__exp_ImmSrcD = 4U;
    __Vtask_controller_tb__DOT__run_test__14__exp_RegWriteD = 1U;
    __Vtask_controller_tb__DOT__run_test__14__in_funct12 
        = vlSelfRef.controller_tb__DOT__funct12;
    __Vtask_controller_tb__DOT__run_test__14__in_ALUResultEb0 
        = vlSelfRef.controller_tb__DOT__ALUResultEb0;
    __Vtask_controller_tb__DOT__run_test__14__in_JumpE 
        = vlSelfRef.controller_tb__DOT__JumpE;
    __Vtask_controller_tb__DOT__run_test__14__in_BranchE 
        = vlSelfRef.controller_tb__DOT__BranchE;
    __Vtask_controller_tb__DOT__run_test__14__in_ZeroE 
        = vlSelfRef.controller_tb__DOT__ZeroE;
    __Vtask_controller_tb__DOT__run_test__14__in_funct7b5 
        = vlSelfRef.controller_tb__DOT__funct7b5;
    __Vtask_controller_tb__DOT__run_test__14__in_funct3 
        = vlSelfRef.controller_tb__DOT__funct3;
    __Vtask_controller_tb__DOT__run_test__14__in_op 
        = vlSelfRef.controller_tb__DOT__op;
    vlSelfRef.controller_tb__DOT__test_num = ((IData)(1U) 
                                              + vlSelfRef.controller_tb__DOT__test_num);
    vlSelfRef.controller_tb__DOT__op = __Vtask_controller_tb__DOT__run_test__14__in_op;
    vlSelfRef.controller_tb__DOT__funct3 = __Vtask_controller_tb__DOT__run_test__14__in_funct3;
    vlSelfRef.controller_tb__DOT__funct7b5 = __Vtask_controller_tb__DOT__run_test__14__in_funct7b5;
    vlSelfRef.controller_tb__DOT__ZeroE = __Vtask_controller_tb__DOT__run_test__14__in_ZeroE;
    vlSelfRef.controller_tb__DOT__BranchE = __Vtask_controller_tb__DOT__run_test__14__in_BranchE;
    vlSelfRef.controller_tb__DOT__JumpE = __Vtask_controller_tb__DOT__run_test__14__in_JumpE;
    vlSelfRef.controller_tb__DOT__ALUResultEb0 = __Vtask_controller_tb__DOT__run_test__14__in_ALUResultEb0;
    vlSelfRef.controller_tb__DOT__funct12 = __Vtask_controller_tb__DOT__run_test__14__in_funct12;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/controller_tb.sv", 
                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((((((((((((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                          >> 0xcU)) == (IData)(__Vtask_controller_tb__DOT__run_test__14__exp_RegWriteD)) 
                  & (((0x33U == (IData)(vlSelfRef.controller_tb__DOT__op)) 
                      | (0x73U == (IData)(vlSelfRef.controller_tb__DOT__op))) 
                     | ((7U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                               >> 9U)) == (IData)(__Vtask_controller_tb__DOT__run_test__14__exp_ImmSrcD)))) 
                 & ((3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                           >> 7U)) == (IData)(__Vtask_controller_tb__DOT__run_test__14__exp_ALUSrcD))) 
                & ((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                          >> 6U)) == (IData)(__Vtask_controller_tb__DOT__run_test__14__exp_MemWriteD))) 
               & ((3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                         >> 4U)) == (IData)(__Vtask_controller_tb__DOT__run_test__14__exp_ResultSrcD))) 
              & ((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                        >> 3U)) == (IData)(__Vtask_controller_tb__DOT__run_test__14__exp_BranchD))) 
             & ((1U & (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls)) 
                == (IData)(__Vtask_controller_tb__DOT__run_test__14__exp_JumpD))) 
            & ((IData)(vlSelfRef.controller_tb__DOT__ALUControlD) 
               == (IData)(__Vtask_controller_tb__DOT__run_test__14__exp_ALUControlD))) 
           & ((IData)(vlSelfRef.controller_tb__DOT__PCSrcE) 
              == (IData)(__Vtask_controller_tb__DOT__run_test__14__exp_PCSrcE))) 
          & ((IData)(vlSelfRef.controller_tb__DOT__Ecall) 
             == (IData)(__Vtask_controller_tb__DOT__run_test__14__exp_Ecall))) 
         & ((IData)(vlSelfRef.controller_tb__DOT__Ebreak) 
            == (IData)(__Vtask_controller_tb__DOT__run_test__14__exp_Ebreak)))) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n        op=%b funct3=%b funct7b5=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n",0,
                     32,vlSelfRef.controller_tb__DOT__test_num,
                     -1,&(__Vtask_controller_tb__DOT__run_test__14__test_name),
                     7,(IData)(vlSelfRef.controller_tb__DOT__op),
                     3,vlSelfRef.controller_tb__DOT__funct3,
                     1,(IData)(vlSelfRef.controller_tb__DOT__funct7b5),
                     1,vlSelfRef.controller_tb__DOT__ZeroE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__BranchE),
                     1,vlSelfRef.controller_tb__DOT__JumpE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0));
        vlSelfRef.controller_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.controller_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n        Inputs:\n        op=%b funct3=%b funct7b5=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n        funct12=%b\n        Expected:\n        RegWrite=%b ImmSrc=%b ALUSrc=%b MemWrite=%b ResultSrc=%b Branch=%b Jump=%b ALUControl=%b PCSrc=%b Ecall=%b Ebreak=%b\n        Actual:\n        RegWrite=%b ImmSrc=%b ALUSrc=%b MemWrite=%b ResultSrc=%b Branch=%b Jump=%b ALUControl=%b PCSrc=%b Ecall=%b Ebreak=%b\n",0,
                     32,vlSelfRef.controller_tb__DOT__test_num,
                     -1,&(__Vtask_controller_tb__DOT__run_test__14__test_name),
                     7,(IData)(vlSelfRef.controller_tb__DOT__op),
                     3,vlSelfRef.controller_tb__DOT__funct3,
                     1,(IData)(vlSelfRef.controller_tb__DOT__funct7b5),
                     1,vlSelfRef.controller_tb__DOT__ZeroE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__BranchE),
                     1,vlSelfRef.controller_tb__DOT__JumpE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0),
                     12,vlSelfRef.controller_tb__DOT__funct12,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__14__exp_RegWriteD),
                     3,__Vtask_controller_tb__DOT__run_test__14__exp_ImmSrcD,
                     2,(IData)(__Vtask_controller_tb__DOT__run_test__14__exp_ALUSrcD),
                     1,__Vtask_controller_tb__DOT__run_test__14__exp_MemWriteD,
                     2,(IData)(__Vtask_controller_tb__DOT__run_test__14__exp_ResultSrcD),
                     1,__Vtask_controller_tb__DOT__run_test__14__exp_BranchD,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__14__exp_JumpD),
                     4,__Vtask_controller_tb__DOT__run_test__14__exp_ALUControlD,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__14__exp_PCSrcE),
                     1,__Vtask_controller_tb__DOT__run_test__14__exp_Ecall,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__14__exp_Ebreak),
                     1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 0xcU)),3,(7U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                                 >> 9U)),
                     2,(3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 7U)),1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                               >> 6U)),
                     2,(3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 4U)),1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                               >> 3U)),
                     1,(1U & (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls)),
                     4,(IData)(vlSelfRef.controller_tb__DOT__ALUControlD),
                     1,vlSelfRef.controller_tb__DOT__PCSrcE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__Ecall),
                     1,vlSelfRef.controller_tb__DOT__Ebreak);
        vlSelfRef.controller_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.controller_tb__DOT__fail_count);
    }
    vlSelfRef.controller_tb__DOT__op = 0x17U;
    vlSelfRef.controller_tb__DOT__funct3 = 0U;
    vlSelfRef.controller_tb__DOT__funct7b5 = 0U;
    vlSelfRef.controller_tb__DOT__ZeroE = 0U;
    vlSelfRef.controller_tb__DOT__BranchE = 0U;
    vlSelfRef.controller_tb__DOT__JumpE = 0U;
    vlSelfRef.controller_tb__DOT__ALUResultEb0 = 0U;
    vlSelfRef.controller_tb__DOT__funct12 = 0U;
    __Vtask_controller_tb__DOT__run_test__15__test_name = 
        std::string{"Upper AUIPC"};
    __Vtask_controller_tb__DOT__run_test__15__exp_Ebreak = 0U;
    __Vtask_controller_tb__DOT__run_test__15__exp_Ecall = 0U;
    __Vtask_controller_tb__DOT__run_test__15__exp_PCSrcE = 0U;
    __Vtask_controller_tb__DOT__run_test__15__exp_ALUControlD = 0xcU;
    __Vtask_controller_tb__DOT__run_test__15__exp_JumpD = 0U;
    __Vtask_controller_tb__DOT__run_test__15__exp_BranchD = 0U;
    __Vtask_controller_tb__DOT__run_test__15__exp_ResultSrcD = 0U;
    __Vtask_controller_tb__DOT__run_test__15__exp_MemWriteD = 0U;
    __Vtask_controller_tb__DOT__run_test__15__exp_ALUSrcD = 3U;
    __Vtask_controller_tb__DOT__run_test__15__exp_ImmSrcD = 4U;
    __Vtask_controller_tb__DOT__run_test__15__exp_RegWriteD = 1U;
    __Vtask_controller_tb__DOT__run_test__15__in_funct12 
        = vlSelfRef.controller_tb__DOT__funct12;
    __Vtask_controller_tb__DOT__run_test__15__in_ALUResultEb0 
        = vlSelfRef.controller_tb__DOT__ALUResultEb0;
    __Vtask_controller_tb__DOT__run_test__15__in_JumpE 
        = vlSelfRef.controller_tb__DOT__JumpE;
    __Vtask_controller_tb__DOT__run_test__15__in_BranchE 
        = vlSelfRef.controller_tb__DOT__BranchE;
    __Vtask_controller_tb__DOT__run_test__15__in_ZeroE 
        = vlSelfRef.controller_tb__DOT__ZeroE;
    __Vtask_controller_tb__DOT__run_test__15__in_funct7b5 
        = vlSelfRef.controller_tb__DOT__funct7b5;
    __Vtask_controller_tb__DOT__run_test__15__in_funct3 
        = vlSelfRef.controller_tb__DOT__funct3;
    __Vtask_controller_tb__DOT__run_test__15__in_op 
        = vlSelfRef.controller_tb__DOT__op;
    vlSelfRef.controller_tb__DOT__test_num = ((IData)(1U) 
                                              + vlSelfRef.controller_tb__DOT__test_num);
    vlSelfRef.controller_tb__DOT__op = __Vtask_controller_tb__DOT__run_test__15__in_op;
    vlSelfRef.controller_tb__DOT__funct3 = __Vtask_controller_tb__DOT__run_test__15__in_funct3;
    vlSelfRef.controller_tb__DOT__funct7b5 = __Vtask_controller_tb__DOT__run_test__15__in_funct7b5;
    vlSelfRef.controller_tb__DOT__ZeroE = __Vtask_controller_tb__DOT__run_test__15__in_ZeroE;
    vlSelfRef.controller_tb__DOT__BranchE = __Vtask_controller_tb__DOT__run_test__15__in_BranchE;
    vlSelfRef.controller_tb__DOT__JumpE = __Vtask_controller_tb__DOT__run_test__15__in_JumpE;
    vlSelfRef.controller_tb__DOT__ALUResultEb0 = __Vtask_controller_tb__DOT__run_test__15__in_ALUResultEb0;
    vlSelfRef.controller_tb__DOT__funct12 = __Vtask_controller_tb__DOT__run_test__15__in_funct12;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/controller_tb.sv", 
                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((((((((((((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                          >> 0xcU)) == (IData)(__Vtask_controller_tb__DOT__run_test__15__exp_RegWriteD)) 
                  & (((0x33U == (IData)(vlSelfRef.controller_tb__DOT__op)) 
                      | (0x73U == (IData)(vlSelfRef.controller_tb__DOT__op))) 
                     | ((7U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                               >> 9U)) == (IData)(__Vtask_controller_tb__DOT__run_test__15__exp_ImmSrcD)))) 
                 & ((3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                           >> 7U)) == (IData)(__Vtask_controller_tb__DOT__run_test__15__exp_ALUSrcD))) 
                & ((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                          >> 6U)) == (IData)(__Vtask_controller_tb__DOT__run_test__15__exp_MemWriteD))) 
               & ((3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                         >> 4U)) == (IData)(__Vtask_controller_tb__DOT__run_test__15__exp_ResultSrcD))) 
              & ((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                        >> 3U)) == (IData)(__Vtask_controller_tb__DOT__run_test__15__exp_BranchD))) 
             & ((1U & (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls)) 
                == (IData)(__Vtask_controller_tb__DOT__run_test__15__exp_JumpD))) 
            & ((IData)(vlSelfRef.controller_tb__DOT__ALUControlD) 
               == (IData)(__Vtask_controller_tb__DOT__run_test__15__exp_ALUControlD))) 
           & ((IData)(vlSelfRef.controller_tb__DOT__PCSrcE) 
              == (IData)(__Vtask_controller_tb__DOT__run_test__15__exp_PCSrcE))) 
          & ((IData)(vlSelfRef.controller_tb__DOT__Ecall) 
             == (IData)(__Vtask_controller_tb__DOT__run_test__15__exp_Ecall))) 
         & ((IData)(vlSelfRef.controller_tb__DOT__Ebreak) 
            == (IData)(__Vtask_controller_tb__DOT__run_test__15__exp_Ebreak)))) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n        op=%b funct3=%b funct7b5=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n",0,
                     32,vlSelfRef.controller_tb__DOT__test_num,
                     -1,&(__Vtask_controller_tb__DOT__run_test__15__test_name),
                     7,(IData)(vlSelfRef.controller_tb__DOT__op),
                     3,vlSelfRef.controller_tb__DOT__funct3,
                     1,(IData)(vlSelfRef.controller_tb__DOT__funct7b5),
                     1,vlSelfRef.controller_tb__DOT__ZeroE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__BranchE),
                     1,vlSelfRef.controller_tb__DOT__JumpE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0));
        vlSelfRef.controller_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.controller_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n        Inputs:\n        op=%b funct3=%b funct7b5=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n        funct12=%b\n        Expected:\n        RegWrite=%b ImmSrc=%b ALUSrc=%b MemWrite=%b ResultSrc=%b Branch=%b Jump=%b ALUControl=%b PCSrc=%b Ecall=%b Ebreak=%b\n        Actual:\n        RegWrite=%b ImmSrc=%b ALUSrc=%b MemWrite=%b ResultSrc=%b Branch=%b Jump=%b ALUControl=%b PCSrc=%b Ecall=%b Ebreak=%b\n",0,
                     32,vlSelfRef.controller_tb__DOT__test_num,
                     -1,&(__Vtask_controller_tb__DOT__run_test__15__test_name),
                     7,(IData)(vlSelfRef.controller_tb__DOT__op),
                     3,vlSelfRef.controller_tb__DOT__funct3,
                     1,(IData)(vlSelfRef.controller_tb__DOT__funct7b5),
                     1,vlSelfRef.controller_tb__DOT__ZeroE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__BranchE),
                     1,vlSelfRef.controller_tb__DOT__JumpE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0),
                     12,vlSelfRef.controller_tb__DOT__funct12,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__15__exp_RegWriteD),
                     3,__Vtask_controller_tb__DOT__run_test__15__exp_ImmSrcD,
                     2,(IData)(__Vtask_controller_tb__DOT__run_test__15__exp_ALUSrcD),
                     1,__Vtask_controller_tb__DOT__run_test__15__exp_MemWriteD,
                     2,(IData)(__Vtask_controller_tb__DOT__run_test__15__exp_ResultSrcD),
                     1,__Vtask_controller_tb__DOT__run_test__15__exp_BranchD,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__15__exp_JumpD),
                     4,__Vtask_controller_tb__DOT__run_test__15__exp_ALUControlD,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__15__exp_PCSrcE),
                     1,__Vtask_controller_tb__DOT__run_test__15__exp_Ecall,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__15__exp_Ebreak),
                     1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 0xcU)),3,(7U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                                 >> 9U)),
                     2,(3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 7U)),1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                               >> 6U)),
                     2,(3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 4U)),1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                               >> 3U)),
                     1,(1U & (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls)),
                     4,(IData)(vlSelfRef.controller_tb__DOT__ALUControlD),
                     1,vlSelfRef.controller_tb__DOT__PCSrcE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__Ecall),
                     1,vlSelfRef.controller_tb__DOT__Ebreak);
        vlSelfRef.controller_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.controller_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n----------- System Instructions -----------\n",0);
    vlSelfRef.controller_tb__DOT__op = 0x73U;
    vlSelfRef.controller_tb__DOT__funct3 = 0U;
    vlSelfRef.controller_tb__DOT__funct7b5 = 0U;
    vlSelfRef.controller_tb__DOT__ZeroE = 0U;
    vlSelfRef.controller_tb__DOT__BranchE = 0U;
    vlSelfRef.controller_tb__DOT__JumpE = 0U;
    vlSelfRef.controller_tb__DOT__ALUResultEb0 = 0U;
    vlSelfRef.controller_tb__DOT__funct12 = 0U;
    __Vtask_controller_tb__DOT__run_test__16__test_name = 
        std::string{"System ECALL"};
    __Vtask_controller_tb__DOT__run_test__16__exp_Ebreak = 0U;
    __Vtask_controller_tb__DOT__run_test__16__exp_Ecall = 1U;
    __Vtask_controller_tb__DOT__run_test__16__exp_PCSrcE = 0U;
    __Vtask_controller_tb__DOT__run_test__16__exp_ALUControlD = 0U;
    __Vtask_controller_tb__DOT__run_test__16__exp_JumpD = 0U;
    __Vtask_controller_tb__DOT__run_test__16__exp_BranchD = 0U;
    __Vtask_controller_tb__DOT__run_test__16__exp_ResultSrcD = 0U;
    __Vtask_controller_tb__DOT__run_test__16__exp_MemWriteD = 0U;
    __Vtask_controller_tb__DOT__run_test__16__exp_ALUSrcD = 0U;
    __Vtask_controller_tb__DOT__run_test__16__exp_ImmSrcD 
        = vlSelfRef.controller_tb__DOT____Vxrand_h87975763__4;
    __Vtask_controller_tb__DOT__run_test__16__exp_RegWriteD = 0U;
    __Vtask_controller_tb__DOT__run_test__16__in_funct12 
        = vlSelfRef.controller_tb__DOT__funct12;
    __Vtask_controller_tb__DOT__run_test__16__in_ALUResultEb0 
        = vlSelfRef.controller_tb__DOT__ALUResultEb0;
    __Vtask_controller_tb__DOT__run_test__16__in_JumpE 
        = vlSelfRef.controller_tb__DOT__JumpE;
    __Vtask_controller_tb__DOT__run_test__16__in_BranchE 
        = vlSelfRef.controller_tb__DOT__BranchE;
    __Vtask_controller_tb__DOT__run_test__16__in_ZeroE 
        = vlSelfRef.controller_tb__DOT__ZeroE;
    __Vtask_controller_tb__DOT__run_test__16__in_funct7b5 
        = vlSelfRef.controller_tb__DOT__funct7b5;
    __Vtask_controller_tb__DOT__run_test__16__in_funct3 
        = vlSelfRef.controller_tb__DOT__funct3;
    __Vtask_controller_tb__DOT__run_test__16__in_op 
        = vlSelfRef.controller_tb__DOT__op;
    vlSelfRef.controller_tb__DOT__test_num = ((IData)(1U) 
                                              + vlSelfRef.controller_tb__DOT__test_num);
    vlSelfRef.controller_tb__DOT__op = __Vtask_controller_tb__DOT__run_test__16__in_op;
    vlSelfRef.controller_tb__DOT__funct3 = __Vtask_controller_tb__DOT__run_test__16__in_funct3;
    vlSelfRef.controller_tb__DOT__funct7b5 = __Vtask_controller_tb__DOT__run_test__16__in_funct7b5;
    vlSelfRef.controller_tb__DOT__ZeroE = __Vtask_controller_tb__DOT__run_test__16__in_ZeroE;
    vlSelfRef.controller_tb__DOT__BranchE = __Vtask_controller_tb__DOT__run_test__16__in_BranchE;
    vlSelfRef.controller_tb__DOT__JumpE = __Vtask_controller_tb__DOT__run_test__16__in_JumpE;
    vlSelfRef.controller_tb__DOT__ALUResultEb0 = __Vtask_controller_tb__DOT__run_test__16__in_ALUResultEb0;
    vlSelfRef.controller_tb__DOT__funct12 = __Vtask_controller_tb__DOT__run_test__16__in_funct12;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/controller_tb.sv", 
                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((((((((((((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                          >> 0xcU)) == (IData)(__Vtask_controller_tb__DOT__run_test__16__exp_RegWriteD)) 
                  & (((0x33U == (IData)(vlSelfRef.controller_tb__DOT__op)) 
                      | (0x73U == (IData)(vlSelfRef.controller_tb__DOT__op))) 
                     | ((7U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                               >> 9U)) == (IData)(__Vtask_controller_tb__DOT__run_test__16__exp_ImmSrcD)))) 
                 & ((3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                           >> 7U)) == (IData)(__Vtask_controller_tb__DOT__run_test__16__exp_ALUSrcD))) 
                & ((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                          >> 6U)) == (IData)(__Vtask_controller_tb__DOT__run_test__16__exp_MemWriteD))) 
               & ((3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                         >> 4U)) == (IData)(__Vtask_controller_tb__DOT__run_test__16__exp_ResultSrcD))) 
              & ((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                        >> 3U)) == (IData)(__Vtask_controller_tb__DOT__run_test__16__exp_BranchD))) 
             & ((1U & (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls)) 
                == (IData)(__Vtask_controller_tb__DOT__run_test__16__exp_JumpD))) 
            & ((IData)(vlSelfRef.controller_tb__DOT__ALUControlD) 
               == (IData)(__Vtask_controller_tb__DOT__run_test__16__exp_ALUControlD))) 
           & ((IData)(vlSelfRef.controller_tb__DOT__PCSrcE) 
              == (IData)(__Vtask_controller_tb__DOT__run_test__16__exp_PCSrcE))) 
          & ((IData)(vlSelfRef.controller_tb__DOT__Ecall) 
             == (IData)(__Vtask_controller_tb__DOT__run_test__16__exp_Ecall))) 
         & ((IData)(vlSelfRef.controller_tb__DOT__Ebreak) 
            == (IData)(__Vtask_controller_tb__DOT__run_test__16__exp_Ebreak)))) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n        op=%b funct3=%b funct7b5=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n",0,
                     32,vlSelfRef.controller_tb__DOT__test_num,
                     -1,&(__Vtask_controller_tb__DOT__run_test__16__test_name),
                     7,(IData)(vlSelfRef.controller_tb__DOT__op),
                     3,vlSelfRef.controller_tb__DOT__funct3,
                     1,(IData)(vlSelfRef.controller_tb__DOT__funct7b5),
                     1,vlSelfRef.controller_tb__DOT__ZeroE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__BranchE),
                     1,vlSelfRef.controller_tb__DOT__JumpE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0));
        vlSelfRef.controller_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.controller_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n        Inputs:\n        op=%b funct3=%b funct7b5=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n        funct12=%b\n        Expected:\n        RegWrite=%b ImmSrc=%b ALUSrc=%b MemWrite=%b ResultSrc=%b Branch=%b Jump=%b ALUControl=%b PCSrc=%b Ecall=%b Ebreak=%b\n        Actual:\n        RegWrite=%b ImmSrc=%b ALUSrc=%b MemWrite=%b ResultSrc=%b Branch=%b Jump=%b ALUControl=%b PCSrc=%b Ecall=%b Ebreak=%b\n",0,
                     32,vlSelfRef.controller_tb__DOT__test_num,
                     -1,&(__Vtask_controller_tb__DOT__run_test__16__test_name),
                     7,(IData)(vlSelfRef.controller_tb__DOT__op),
                     3,vlSelfRef.controller_tb__DOT__funct3,
                     1,(IData)(vlSelfRef.controller_tb__DOT__funct7b5),
                     1,vlSelfRef.controller_tb__DOT__ZeroE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__BranchE),
                     1,vlSelfRef.controller_tb__DOT__JumpE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0),
                     12,vlSelfRef.controller_tb__DOT__funct12,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__16__exp_RegWriteD),
                     3,__Vtask_controller_tb__DOT__run_test__16__exp_ImmSrcD,
                     2,(IData)(__Vtask_controller_tb__DOT__run_test__16__exp_ALUSrcD),
                     1,__Vtask_controller_tb__DOT__run_test__16__exp_MemWriteD,
                     2,(IData)(__Vtask_controller_tb__DOT__run_test__16__exp_ResultSrcD),
                     1,__Vtask_controller_tb__DOT__run_test__16__exp_BranchD,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__16__exp_JumpD),
                     4,__Vtask_controller_tb__DOT__run_test__16__exp_ALUControlD,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__16__exp_PCSrcE),
                     1,__Vtask_controller_tb__DOT__run_test__16__exp_Ecall,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__16__exp_Ebreak),
                     1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 0xcU)),3,(7U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                                 >> 9U)),
                     2,(3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 7U)),1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                               >> 6U)),
                     2,(3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 4U)),1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                               >> 3U)),
                     1,(1U & (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls)),
                     4,(IData)(vlSelfRef.controller_tb__DOT__ALUControlD),
                     1,vlSelfRef.controller_tb__DOT__PCSrcE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__Ecall),
                     1,vlSelfRef.controller_tb__DOT__Ebreak);
        vlSelfRef.controller_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.controller_tb__DOT__fail_count);
    }
    vlSelfRef.controller_tb__DOT__op = 0x73U;
    vlSelfRef.controller_tb__DOT__funct3 = 0U;
    vlSelfRef.controller_tb__DOT__funct7b5 = 0U;
    vlSelfRef.controller_tb__DOT__ZeroE = 0U;
    vlSelfRef.controller_tb__DOT__BranchE = 0U;
    vlSelfRef.controller_tb__DOT__JumpE = 0U;
    vlSelfRef.controller_tb__DOT__ALUResultEb0 = 0U;
    vlSelfRef.controller_tb__DOT__funct12 = 1U;
    __Vtask_controller_tb__DOT__run_test__17__test_name = 
        std::string{"System EBREAK"};
    __Vtask_controller_tb__DOT__run_test__17__exp_Ebreak = 1U;
    __Vtask_controller_tb__DOT__run_test__17__exp_Ecall = 0U;
    __Vtask_controller_tb__DOT__run_test__17__exp_PCSrcE = 0U;
    __Vtask_controller_tb__DOT__run_test__17__exp_ALUControlD = 0U;
    __Vtask_controller_tb__DOT__run_test__17__exp_JumpD = 0U;
    __Vtask_controller_tb__DOT__run_test__17__exp_BranchD = 0U;
    __Vtask_controller_tb__DOT__run_test__17__exp_ResultSrcD = 0U;
    __Vtask_controller_tb__DOT__run_test__17__exp_MemWriteD = 0U;
    __Vtask_controller_tb__DOT__run_test__17__exp_ALUSrcD = 0U;
    __Vtask_controller_tb__DOT__run_test__17__exp_ImmSrcD 
        = vlSelfRef.controller_tb__DOT____Vxrand_h87975763__5;
    __Vtask_controller_tb__DOT__run_test__17__exp_RegWriteD = 0U;
    __Vtask_controller_tb__DOT__run_test__17__in_funct12 
        = vlSelfRef.controller_tb__DOT__funct12;
    __Vtask_controller_tb__DOT__run_test__17__in_ALUResultEb0 
        = vlSelfRef.controller_tb__DOT__ALUResultEb0;
    __Vtask_controller_tb__DOT__run_test__17__in_JumpE 
        = vlSelfRef.controller_tb__DOT__JumpE;
    __Vtask_controller_tb__DOT__run_test__17__in_BranchE 
        = vlSelfRef.controller_tb__DOT__BranchE;
    __Vtask_controller_tb__DOT__run_test__17__in_ZeroE 
        = vlSelfRef.controller_tb__DOT__ZeroE;
    __Vtask_controller_tb__DOT__run_test__17__in_funct7b5 
        = vlSelfRef.controller_tb__DOT__funct7b5;
    __Vtask_controller_tb__DOT__run_test__17__in_funct3 
        = vlSelfRef.controller_tb__DOT__funct3;
    __Vtask_controller_tb__DOT__run_test__17__in_op 
        = vlSelfRef.controller_tb__DOT__op;
    vlSelfRef.controller_tb__DOT__test_num = ((IData)(1U) 
                                              + vlSelfRef.controller_tb__DOT__test_num);
    vlSelfRef.controller_tb__DOT__op = __Vtask_controller_tb__DOT__run_test__17__in_op;
    vlSelfRef.controller_tb__DOT__funct3 = __Vtask_controller_tb__DOT__run_test__17__in_funct3;
    vlSelfRef.controller_tb__DOT__funct7b5 = __Vtask_controller_tb__DOT__run_test__17__in_funct7b5;
    vlSelfRef.controller_tb__DOT__ZeroE = __Vtask_controller_tb__DOT__run_test__17__in_ZeroE;
    vlSelfRef.controller_tb__DOT__BranchE = __Vtask_controller_tb__DOT__run_test__17__in_BranchE;
    vlSelfRef.controller_tb__DOT__JumpE = __Vtask_controller_tb__DOT__run_test__17__in_JumpE;
    vlSelfRef.controller_tb__DOT__ALUResultEb0 = __Vtask_controller_tb__DOT__run_test__17__in_ALUResultEb0;
    vlSelfRef.controller_tb__DOT__funct12 = __Vtask_controller_tb__DOT__run_test__17__in_funct12;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/controller_tb.sv", 
                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((((((((((((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                          >> 0xcU)) == (IData)(__Vtask_controller_tb__DOT__run_test__17__exp_RegWriteD)) 
                  & (((0x33U == (IData)(vlSelfRef.controller_tb__DOT__op)) 
                      | (0x73U == (IData)(vlSelfRef.controller_tb__DOT__op))) 
                     | ((7U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                               >> 9U)) == (IData)(__Vtask_controller_tb__DOT__run_test__17__exp_ImmSrcD)))) 
                 & ((3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                           >> 7U)) == (IData)(__Vtask_controller_tb__DOT__run_test__17__exp_ALUSrcD))) 
                & ((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                          >> 6U)) == (IData)(__Vtask_controller_tb__DOT__run_test__17__exp_MemWriteD))) 
               & ((3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                         >> 4U)) == (IData)(__Vtask_controller_tb__DOT__run_test__17__exp_ResultSrcD))) 
              & ((1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                        >> 3U)) == (IData)(__Vtask_controller_tb__DOT__run_test__17__exp_BranchD))) 
             & ((1U & (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls)) 
                == (IData)(__Vtask_controller_tb__DOT__run_test__17__exp_JumpD))) 
            & ((IData)(vlSelfRef.controller_tb__DOT__ALUControlD) 
               == (IData)(__Vtask_controller_tb__DOT__run_test__17__exp_ALUControlD))) 
           & ((IData)(vlSelfRef.controller_tb__DOT__PCSrcE) 
              == (IData)(__Vtask_controller_tb__DOT__run_test__17__exp_PCSrcE))) 
          & ((IData)(vlSelfRef.controller_tb__DOT__Ecall) 
             == (IData)(__Vtask_controller_tb__DOT__run_test__17__exp_Ecall))) 
         & ((IData)(vlSelfRef.controller_tb__DOT__Ebreak) 
            == (IData)(__Vtask_controller_tb__DOT__run_test__17__exp_Ebreak)))) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n        op=%b funct3=%b funct7b5=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n",0,
                     32,vlSelfRef.controller_tb__DOT__test_num,
                     -1,&(__Vtask_controller_tb__DOT__run_test__17__test_name),
                     7,(IData)(vlSelfRef.controller_tb__DOT__op),
                     3,vlSelfRef.controller_tb__DOT__funct3,
                     1,(IData)(vlSelfRef.controller_tb__DOT__funct7b5),
                     1,vlSelfRef.controller_tb__DOT__ZeroE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__BranchE),
                     1,vlSelfRef.controller_tb__DOT__JumpE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0));
        vlSelfRef.controller_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.controller_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n        Inputs:\n        op=%b funct3=%b funct7b5=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n        funct12=%b\n        Expected:\n        RegWrite=%b ImmSrc=%b ALUSrc=%b MemWrite=%b ResultSrc=%b Branch=%b Jump=%b ALUControl=%b PCSrc=%b Ecall=%b Ebreak=%b\n        Actual:\n        RegWrite=%b ImmSrc=%b ALUSrc=%b MemWrite=%b ResultSrc=%b Branch=%b Jump=%b ALUControl=%b PCSrc=%b Ecall=%b Ebreak=%b\n",0,
                     32,vlSelfRef.controller_tb__DOT__test_num,
                     -1,&(__Vtask_controller_tb__DOT__run_test__17__test_name),
                     7,(IData)(vlSelfRef.controller_tb__DOT__op),
                     3,vlSelfRef.controller_tb__DOT__funct3,
                     1,(IData)(vlSelfRef.controller_tb__DOT__funct7b5),
                     1,vlSelfRef.controller_tb__DOT__ZeroE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__BranchE),
                     1,vlSelfRef.controller_tb__DOT__JumpE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__ALUResultEb0),
                     12,vlSelfRef.controller_tb__DOT__funct12,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__17__exp_RegWriteD),
                     3,__Vtask_controller_tb__DOT__run_test__17__exp_ImmSrcD,
                     2,(IData)(__Vtask_controller_tb__DOT__run_test__17__exp_ALUSrcD),
                     1,__Vtask_controller_tb__DOT__run_test__17__exp_MemWriteD,
                     2,(IData)(__Vtask_controller_tb__DOT__run_test__17__exp_ResultSrcD),
                     1,__Vtask_controller_tb__DOT__run_test__17__exp_BranchD,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__17__exp_JumpD),
                     4,__Vtask_controller_tb__DOT__run_test__17__exp_ALUControlD,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__17__exp_PCSrcE),
                     1,__Vtask_controller_tb__DOT__run_test__17__exp_Ecall,
                     1,(IData)(__Vtask_controller_tb__DOT__run_test__17__exp_Ebreak),
                     1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 0xcU)),3,(7U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                                 >> 9U)),
                     2,(3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 7U)),1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                               >> 6U)),
                     2,(3U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                              >> 4U)),1,(1U & ((IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls) 
                                               >> 3U)),
                     1,(1U & (IData)(vlSelfRef.controller_tb__DOT__dut__DOT__md__DOT__controls)),
                     4,(IData)(vlSelfRef.controller_tb__DOT__ALUControlD),
                     1,vlSelfRef.controller_tb__DOT__PCSrcE,
                     1,(IData)(vlSelfRef.controller_tb__DOT__Ecall),
                     1,vlSelfRef.controller_tb__DOT__Ebreak);
        vlSelfRef.controller_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.controller_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n===== Test Statistics =====\nTotal Tests:  %0d\n\342\234\205 Tests Passed: %0d (%0.1f%%)\n\342\235\214 Tests Failed: %0d (%0.1f%%)\n===========================\n\n",0,
                 32,vlSelfRef.controller_tb__DOT__test_num,
                 32,vlSelfRef.controller_tb__DOT__pass_count,
                 64,((100.0 * VL_ISTOR_D_I(32, vlSelfRef.controller_tb__DOT__pass_count)) 
                     / VL_ISTOR_D_I(32, vlSelfRef.controller_tb__DOT__test_num)),
                 32,vlSelfRef.controller_tb__DOT__fail_count,
                 64,((100.0 * VL_ISTOR_D_I(32, vlSelfRef.controller_tb__DOT__fail_count)) 
                     / VL_ISTOR_D_I(32, vlSelfRef.controller_tb__DOT__test_num)));
    VL_FINISH_MT("../../01_bench/controller_tb.sv", 440, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontroller_tb___024root___dump_triggers__act(Vcontroller_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vcontroller_tb___024root___eval_triggers__act(Vcontroller_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroller_tb___024root___eval_triggers__act\n"); );
    Vcontroller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcontroller_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
