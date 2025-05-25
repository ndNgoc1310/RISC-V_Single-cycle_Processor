// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VD_stage_tb.h for the primary calling header

#include "VD_stage_tb__pch.h"
#include "VD_stage_tb__Syms.h"
#include "VD_stage_tb___024root.h"

VL_INLINE_OPT VlCoroutine VD_stage_tb___024root___eval_initial__TOP__Vtiming__0(VD_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_stage_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    VD_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__0__in_InstrF;
    __Vtask_D_stage_tb__DOT__run_test__0__in_InstrF = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__0__in_pcF;
    __Vtask_D_stage_tb__DOT__run_test__0__in_pcF = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__0__in_PCPlus4F;
    __Vtask_D_stage_tb__DOT__run_test__0__in_PCPlus4F = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__0__in_StallD;
    __Vtask_D_stage_tb__DOT__run_test__0__in_StallD = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__0__in_FlushD;
    __Vtask_D_stage_tb__DOT__run_test__0__in_FlushD = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__0__in_ZeroE;
    __Vtask_D_stage_tb__DOT__run_test__0__in_ZeroE = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__0__in_BranchE;
    __Vtask_D_stage_tb__DOT__run_test__0__in_BranchE = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__0__in_JumpE;
    __Vtask_D_stage_tb__DOT__run_test__0__in_JumpE = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__0__in_ALUResultEb0;
    __Vtask_D_stage_tb__DOT__run_test__0__in_ALUResultEb0 = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__0__in_RdW;
    __Vtask_D_stage_tb__DOT__run_test__0__in_RdW = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__0__in_RegWriteW;
    __Vtask_D_stage_tb__DOT__run_test__0__in_RegWriteW = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__0__in_ResultW;
    __Vtask_D_stage_tb__DOT__run_test__0__in_ResultW = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__0__in_i_debug_addr;
    __Vtask_D_stage_tb__DOT__run_test__0__in_i_debug_addr = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__0__in_mask_Read1D;
    __Vtask_D_stage_tb__DOT__run_test__0__in_mask_Read1D = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__0__in_mask_Read2D;
    __Vtask_D_stage_tb__DOT__run_test__0__in_mask_Read2D = 0;
    CData/*1:0*/ __Vtask_D_stage_tb__DOT__run_test__0__in_mask_ResultSrcD;
    __Vtask_D_stage_tb__DOT__run_test__0__in_mask_ResultSrcD = 0;
    CData/*3:0*/ __Vtask_D_stage_tb__DOT__run_test__0__in_mask_ALUControlD;
    __Vtask_D_stage_tb__DOT__run_test__0__in_mask_ALUControlD = 0;
    CData/*1:0*/ __Vtask_D_stage_tb__DOT__run_test__0__in_mask_ALUSrcD;
    __Vtask_D_stage_tb__DOT__run_test__0__in_mask_ALUSrcD = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__0__in_mask_Rs1D;
    __Vtask_D_stage_tb__DOT__run_test__0__in_mask_Rs1D = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__0__in_mask_Rs2D;
    __Vtask_D_stage_tb__DOT__run_test__0__in_mask_Rs2D = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__0__in_mask_RdD;
    __Vtask_D_stage_tb__DOT__run_test__0__in_mask_RdD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__0__in_mask_ImmExtD;
    __Vtask_D_stage_tb__DOT__run_test__0__in_mask_ImmExtD = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__0__in_mask_MemSrcD;
    __Vtask_D_stage_tb__DOT__run_test__0__in_mask_MemSrcD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__0__in_mask_o_debug_data;
    __Vtask_D_stage_tb__DOT__run_test__0__in_mask_o_debug_data = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__0__exp_Read1D;
    __Vtask_D_stage_tb__DOT__run_test__0__exp_Read1D = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__0__exp_Read2D;
    __Vtask_D_stage_tb__DOT__run_test__0__exp_Read2D = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__0__exp_RegWriteD;
    __Vtask_D_stage_tb__DOT__run_test__0__exp_RegWriteD = 0;
    CData/*1:0*/ __Vtask_D_stage_tb__DOT__run_test__0__exp_ResultSrcD;
    __Vtask_D_stage_tb__DOT__run_test__0__exp_ResultSrcD = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__0__exp_MemWriteD;
    __Vtask_D_stage_tb__DOT__run_test__0__exp_MemWriteD = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__0__exp_JumpD;
    __Vtask_D_stage_tb__DOT__run_test__0__exp_JumpD = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__0__exp_BranchD;
    __Vtask_D_stage_tb__DOT__run_test__0__exp_BranchD = 0;
    CData/*3:0*/ __Vtask_D_stage_tb__DOT__run_test__0__exp_ALUControlD;
    __Vtask_D_stage_tb__DOT__run_test__0__exp_ALUControlD = 0;
    CData/*1:0*/ __Vtask_D_stage_tb__DOT__run_test__0__exp_ALUSrcD;
    __Vtask_D_stage_tb__DOT__run_test__0__exp_ALUSrcD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__0__exp_pcD;
    __Vtask_D_stage_tb__DOT__run_test__0__exp_pcD = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__0__exp_Rs1D;
    __Vtask_D_stage_tb__DOT__run_test__0__exp_Rs1D = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__0__exp_Rs2D;
    __Vtask_D_stage_tb__DOT__run_test__0__exp_Rs2D = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__0__exp_RdD;
    __Vtask_D_stage_tb__DOT__run_test__0__exp_RdD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__0__exp_ImmExtD;
    __Vtask_D_stage_tb__DOT__run_test__0__exp_ImmExtD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__0__exp_PCPlus4D;
    __Vtask_D_stage_tb__DOT__run_test__0__exp_PCPlus4D = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__0__exp_Ecall;
    __Vtask_D_stage_tb__DOT__run_test__0__exp_Ecall = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__0__exp_Ebreak;
    __Vtask_D_stage_tb__DOT__run_test__0__exp_Ebreak = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__0__exp_MemSrcD;
    __Vtask_D_stage_tb__DOT__run_test__0__exp_MemSrcD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__0__exp_o_debug_data;
    __Vtask_D_stage_tb__DOT__run_test__0__exp_o_debug_data = 0;
    std::string __Vtask_D_stage_tb__DOT__run_test__0__test_name;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__1__in_InstrF;
    __Vtask_D_stage_tb__DOT__run_test__1__in_InstrF = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__1__in_pcF;
    __Vtask_D_stage_tb__DOT__run_test__1__in_pcF = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__1__in_PCPlus4F;
    __Vtask_D_stage_tb__DOT__run_test__1__in_PCPlus4F = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__1__in_StallD;
    __Vtask_D_stage_tb__DOT__run_test__1__in_StallD = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__1__in_FlushD;
    __Vtask_D_stage_tb__DOT__run_test__1__in_FlushD = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__1__in_ZeroE;
    __Vtask_D_stage_tb__DOT__run_test__1__in_ZeroE = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__1__in_BranchE;
    __Vtask_D_stage_tb__DOT__run_test__1__in_BranchE = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__1__in_JumpE;
    __Vtask_D_stage_tb__DOT__run_test__1__in_JumpE = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__1__in_ALUResultEb0;
    __Vtask_D_stage_tb__DOT__run_test__1__in_ALUResultEb0 = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__1__in_RdW;
    __Vtask_D_stage_tb__DOT__run_test__1__in_RdW = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__1__in_RegWriteW;
    __Vtask_D_stage_tb__DOT__run_test__1__in_RegWriteW = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__1__in_ResultW;
    __Vtask_D_stage_tb__DOT__run_test__1__in_ResultW = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__1__in_i_debug_addr;
    __Vtask_D_stage_tb__DOT__run_test__1__in_i_debug_addr = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__1__in_mask_Read1D;
    __Vtask_D_stage_tb__DOT__run_test__1__in_mask_Read1D = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__1__in_mask_Read2D;
    __Vtask_D_stage_tb__DOT__run_test__1__in_mask_Read2D = 0;
    CData/*1:0*/ __Vtask_D_stage_tb__DOT__run_test__1__in_mask_ResultSrcD;
    __Vtask_D_stage_tb__DOT__run_test__1__in_mask_ResultSrcD = 0;
    CData/*3:0*/ __Vtask_D_stage_tb__DOT__run_test__1__in_mask_ALUControlD;
    __Vtask_D_stage_tb__DOT__run_test__1__in_mask_ALUControlD = 0;
    CData/*1:0*/ __Vtask_D_stage_tb__DOT__run_test__1__in_mask_ALUSrcD;
    __Vtask_D_stage_tb__DOT__run_test__1__in_mask_ALUSrcD = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__1__in_mask_Rs1D;
    __Vtask_D_stage_tb__DOT__run_test__1__in_mask_Rs1D = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__1__in_mask_Rs2D;
    __Vtask_D_stage_tb__DOT__run_test__1__in_mask_Rs2D = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__1__in_mask_RdD;
    __Vtask_D_stage_tb__DOT__run_test__1__in_mask_RdD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__1__in_mask_ImmExtD;
    __Vtask_D_stage_tb__DOT__run_test__1__in_mask_ImmExtD = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__1__in_mask_MemSrcD;
    __Vtask_D_stage_tb__DOT__run_test__1__in_mask_MemSrcD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__1__in_mask_o_debug_data;
    __Vtask_D_stage_tb__DOT__run_test__1__in_mask_o_debug_data = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__1__exp_Read1D;
    __Vtask_D_stage_tb__DOT__run_test__1__exp_Read1D = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__1__exp_Read2D;
    __Vtask_D_stage_tb__DOT__run_test__1__exp_Read2D = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__1__exp_RegWriteD;
    __Vtask_D_stage_tb__DOT__run_test__1__exp_RegWriteD = 0;
    CData/*1:0*/ __Vtask_D_stage_tb__DOT__run_test__1__exp_ResultSrcD;
    __Vtask_D_stage_tb__DOT__run_test__1__exp_ResultSrcD = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__1__exp_MemWriteD;
    __Vtask_D_stage_tb__DOT__run_test__1__exp_MemWriteD = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__1__exp_JumpD;
    __Vtask_D_stage_tb__DOT__run_test__1__exp_JumpD = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__1__exp_BranchD;
    __Vtask_D_stage_tb__DOT__run_test__1__exp_BranchD = 0;
    CData/*3:0*/ __Vtask_D_stage_tb__DOT__run_test__1__exp_ALUControlD;
    __Vtask_D_stage_tb__DOT__run_test__1__exp_ALUControlD = 0;
    CData/*1:0*/ __Vtask_D_stage_tb__DOT__run_test__1__exp_ALUSrcD;
    __Vtask_D_stage_tb__DOT__run_test__1__exp_ALUSrcD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__1__exp_pcD;
    __Vtask_D_stage_tb__DOT__run_test__1__exp_pcD = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__1__exp_Rs1D;
    __Vtask_D_stage_tb__DOT__run_test__1__exp_Rs1D = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__1__exp_Rs2D;
    __Vtask_D_stage_tb__DOT__run_test__1__exp_Rs2D = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__1__exp_RdD;
    __Vtask_D_stage_tb__DOT__run_test__1__exp_RdD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__1__exp_ImmExtD;
    __Vtask_D_stage_tb__DOT__run_test__1__exp_ImmExtD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__1__exp_PCPlus4D;
    __Vtask_D_stage_tb__DOT__run_test__1__exp_PCPlus4D = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__1__exp_Ecall;
    __Vtask_D_stage_tb__DOT__run_test__1__exp_Ecall = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__1__exp_Ebreak;
    __Vtask_D_stage_tb__DOT__run_test__1__exp_Ebreak = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__1__exp_MemSrcD;
    __Vtask_D_stage_tb__DOT__run_test__1__exp_MemSrcD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__1__exp_o_debug_data;
    __Vtask_D_stage_tb__DOT__run_test__1__exp_o_debug_data = 0;
    std::string __Vtask_D_stage_tb__DOT__run_test__1__test_name;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__2__in_InstrF;
    __Vtask_D_stage_tb__DOT__run_test__2__in_InstrF = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__2__in_pcF;
    __Vtask_D_stage_tb__DOT__run_test__2__in_pcF = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__2__in_PCPlus4F;
    __Vtask_D_stage_tb__DOT__run_test__2__in_PCPlus4F = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__2__in_StallD;
    __Vtask_D_stage_tb__DOT__run_test__2__in_StallD = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__2__in_FlushD;
    __Vtask_D_stage_tb__DOT__run_test__2__in_FlushD = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__2__in_ZeroE;
    __Vtask_D_stage_tb__DOT__run_test__2__in_ZeroE = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__2__in_BranchE;
    __Vtask_D_stage_tb__DOT__run_test__2__in_BranchE = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__2__in_JumpE;
    __Vtask_D_stage_tb__DOT__run_test__2__in_JumpE = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__2__in_ALUResultEb0;
    __Vtask_D_stage_tb__DOT__run_test__2__in_ALUResultEb0 = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__2__in_RdW;
    __Vtask_D_stage_tb__DOT__run_test__2__in_RdW = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__2__in_RegWriteW;
    __Vtask_D_stage_tb__DOT__run_test__2__in_RegWriteW = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__2__in_ResultW;
    __Vtask_D_stage_tb__DOT__run_test__2__in_ResultW = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__2__in_i_debug_addr;
    __Vtask_D_stage_tb__DOT__run_test__2__in_i_debug_addr = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__2__in_mask_Read1D;
    __Vtask_D_stage_tb__DOT__run_test__2__in_mask_Read1D = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__2__in_mask_Read2D;
    __Vtask_D_stage_tb__DOT__run_test__2__in_mask_Read2D = 0;
    CData/*1:0*/ __Vtask_D_stage_tb__DOT__run_test__2__in_mask_ResultSrcD;
    __Vtask_D_stage_tb__DOT__run_test__2__in_mask_ResultSrcD = 0;
    CData/*3:0*/ __Vtask_D_stage_tb__DOT__run_test__2__in_mask_ALUControlD;
    __Vtask_D_stage_tb__DOT__run_test__2__in_mask_ALUControlD = 0;
    CData/*1:0*/ __Vtask_D_stage_tb__DOT__run_test__2__in_mask_ALUSrcD;
    __Vtask_D_stage_tb__DOT__run_test__2__in_mask_ALUSrcD = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__2__in_mask_Rs1D;
    __Vtask_D_stage_tb__DOT__run_test__2__in_mask_Rs1D = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__2__in_mask_Rs2D;
    __Vtask_D_stage_tb__DOT__run_test__2__in_mask_Rs2D = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__2__in_mask_RdD;
    __Vtask_D_stage_tb__DOT__run_test__2__in_mask_RdD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__2__in_mask_ImmExtD;
    __Vtask_D_stage_tb__DOT__run_test__2__in_mask_ImmExtD = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__2__in_mask_MemSrcD;
    __Vtask_D_stage_tb__DOT__run_test__2__in_mask_MemSrcD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__2__in_mask_o_debug_data;
    __Vtask_D_stage_tb__DOT__run_test__2__in_mask_o_debug_data = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__2__exp_Read1D;
    __Vtask_D_stage_tb__DOT__run_test__2__exp_Read1D = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__2__exp_Read2D;
    __Vtask_D_stage_tb__DOT__run_test__2__exp_Read2D = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__2__exp_RegWriteD;
    __Vtask_D_stage_tb__DOT__run_test__2__exp_RegWriteD = 0;
    CData/*1:0*/ __Vtask_D_stage_tb__DOT__run_test__2__exp_ResultSrcD;
    __Vtask_D_stage_tb__DOT__run_test__2__exp_ResultSrcD = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__2__exp_MemWriteD;
    __Vtask_D_stage_tb__DOT__run_test__2__exp_MemWriteD = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__2__exp_JumpD;
    __Vtask_D_stage_tb__DOT__run_test__2__exp_JumpD = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__2__exp_BranchD;
    __Vtask_D_stage_tb__DOT__run_test__2__exp_BranchD = 0;
    CData/*3:0*/ __Vtask_D_stage_tb__DOT__run_test__2__exp_ALUControlD;
    __Vtask_D_stage_tb__DOT__run_test__2__exp_ALUControlD = 0;
    CData/*1:0*/ __Vtask_D_stage_tb__DOT__run_test__2__exp_ALUSrcD;
    __Vtask_D_stage_tb__DOT__run_test__2__exp_ALUSrcD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__2__exp_pcD;
    __Vtask_D_stage_tb__DOT__run_test__2__exp_pcD = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__2__exp_Rs1D;
    __Vtask_D_stage_tb__DOT__run_test__2__exp_Rs1D = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__2__exp_Rs2D;
    __Vtask_D_stage_tb__DOT__run_test__2__exp_Rs2D = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__2__exp_RdD;
    __Vtask_D_stage_tb__DOT__run_test__2__exp_RdD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__2__exp_ImmExtD;
    __Vtask_D_stage_tb__DOT__run_test__2__exp_ImmExtD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__2__exp_PCPlus4D;
    __Vtask_D_stage_tb__DOT__run_test__2__exp_PCPlus4D = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__2__exp_Ecall;
    __Vtask_D_stage_tb__DOT__run_test__2__exp_Ecall = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__2__exp_Ebreak;
    __Vtask_D_stage_tb__DOT__run_test__2__exp_Ebreak = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__2__exp_MemSrcD;
    __Vtask_D_stage_tb__DOT__run_test__2__exp_MemSrcD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__2__exp_o_debug_data;
    __Vtask_D_stage_tb__DOT__run_test__2__exp_o_debug_data = 0;
    std::string __Vtask_D_stage_tb__DOT__run_test__2__test_name;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__3__in_InstrF;
    __Vtask_D_stage_tb__DOT__run_test__3__in_InstrF = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__3__in_pcF;
    __Vtask_D_stage_tb__DOT__run_test__3__in_pcF = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__3__in_PCPlus4F;
    __Vtask_D_stage_tb__DOT__run_test__3__in_PCPlus4F = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__3__in_StallD;
    __Vtask_D_stage_tb__DOT__run_test__3__in_StallD = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__3__in_FlushD;
    __Vtask_D_stage_tb__DOT__run_test__3__in_FlushD = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__3__in_ZeroE;
    __Vtask_D_stage_tb__DOT__run_test__3__in_ZeroE = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__3__in_BranchE;
    __Vtask_D_stage_tb__DOT__run_test__3__in_BranchE = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__3__in_JumpE;
    __Vtask_D_stage_tb__DOT__run_test__3__in_JumpE = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__3__in_ALUResultEb0;
    __Vtask_D_stage_tb__DOT__run_test__3__in_ALUResultEb0 = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__3__in_RdW;
    __Vtask_D_stage_tb__DOT__run_test__3__in_RdW = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__3__in_RegWriteW;
    __Vtask_D_stage_tb__DOT__run_test__3__in_RegWriteW = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__3__in_ResultW;
    __Vtask_D_stage_tb__DOT__run_test__3__in_ResultW = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__3__in_i_debug_addr;
    __Vtask_D_stage_tb__DOT__run_test__3__in_i_debug_addr = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__3__in_mask_Read1D;
    __Vtask_D_stage_tb__DOT__run_test__3__in_mask_Read1D = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__3__in_mask_Read2D;
    __Vtask_D_stage_tb__DOT__run_test__3__in_mask_Read2D = 0;
    CData/*1:0*/ __Vtask_D_stage_tb__DOT__run_test__3__in_mask_ResultSrcD;
    __Vtask_D_stage_tb__DOT__run_test__3__in_mask_ResultSrcD = 0;
    CData/*3:0*/ __Vtask_D_stage_tb__DOT__run_test__3__in_mask_ALUControlD;
    __Vtask_D_stage_tb__DOT__run_test__3__in_mask_ALUControlD = 0;
    CData/*1:0*/ __Vtask_D_stage_tb__DOT__run_test__3__in_mask_ALUSrcD;
    __Vtask_D_stage_tb__DOT__run_test__3__in_mask_ALUSrcD = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__3__in_mask_Rs1D;
    __Vtask_D_stage_tb__DOT__run_test__3__in_mask_Rs1D = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__3__in_mask_Rs2D;
    __Vtask_D_stage_tb__DOT__run_test__3__in_mask_Rs2D = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__3__in_mask_RdD;
    __Vtask_D_stage_tb__DOT__run_test__3__in_mask_RdD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__3__in_mask_ImmExtD;
    __Vtask_D_stage_tb__DOT__run_test__3__in_mask_ImmExtD = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__3__in_mask_MemSrcD;
    __Vtask_D_stage_tb__DOT__run_test__3__in_mask_MemSrcD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__3__in_mask_o_debug_data;
    __Vtask_D_stage_tb__DOT__run_test__3__in_mask_o_debug_data = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__3__exp_Read1D;
    __Vtask_D_stage_tb__DOT__run_test__3__exp_Read1D = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__3__exp_Read2D;
    __Vtask_D_stage_tb__DOT__run_test__3__exp_Read2D = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__3__exp_RegWriteD;
    __Vtask_D_stage_tb__DOT__run_test__3__exp_RegWriteD = 0;
    CData/*1:0*/ __Vtask_D_stage_tb__DOT__run_test__3__exp_ResultSrcD;
    __Vtask_D_stage_tb__DOT__run_test__3__exp_ResultSrcD = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__3__exp_MemWriteD;
    __Vtask_D_stage_tb__DOT__run_test__3__exp_MemWriteD = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__3__exp_JumpD;
    __Vtask_D_stage_tb__DOT__run_test__3__exp_JumpD = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__3__exp_BranchD;
    __Vtask_D_stage_tb__DOT__run_test__3__exp_BranchD = 0;
    CData/*3:0*/ __Vtask_D_stage_tb__DOT__run_test__3__exp_ALUControlD;
    __Vtask_D_stage_tb__DOT__run_test__3__exp_ALUControlD = 0;
    CData/*1:0*/ __Vtask_D_stage_tb__DOT__run_test__3__exp_ALUSrcD;
    __Vtask_D_stage_tb__DOT__run_test__3__exp_ALUSrcD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__3__exp_pcD;
    __Vtask_D_stage_tb__DOT__run_test__3__exp_pcD = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__3__exp_Rs1D;
    __Vtask_D_stage_tb__DOT__run_test__3__exp_Rs1D = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__3__exp_Rs2D;
    __Vtask_D_stage_tb__DOT__run_test__3__exp_Rs2D = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__3__exp_RdD;
    __Vtask_D_stage_tb__DOT__run_test__3__exp_RdD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__3__exp_ImmExtD;
    __Vtask_D_stage_tb__DOT__run_test__3__exp_ImmExtD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__3__exp_PCPlus4D;
    __Vtask_D_stage_tb__DOT__run_test__3__exp_PCPlus4D = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__3__exp_Ecall;
    __Vtask_D_stage_tb__DOT__run_test__3__exp_Ecall = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__3__exp_Ebreak;
    __Vtask_D_stage_tb__DOT__run_test__3__exp_Ebreak = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__3__exp_MemSrcD;
    __Vtask_D_stage_tb__DOT__run_test__3__exp_MemSrcD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__3__exp_o_debug_data;
    __Vtask_D_stage_tb__DOT__run_test__3__exp_o_debug_data = 0;
    std::string __Vtask_D_stage_tb__DOT__run_test__3__test_name;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__4__in_InstrF;
    __Vtask_D_stage_tb__DOT__run_test__4__in_InstrF = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__4__in_pcF;
    __Vtask_D_stage_tb__DOT__run_test__4__in_pcF = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__4__in_PCPlus4F;
    __Vtask_D_stage_tb__DOT__run_test__4__in_PCPlus4F = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__4__in_StallD;
    __Vtask_D_stage_tb__DOT__run_test__4__in_StallD = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__4__in_FlushD;
    __Vtask_D_stage_tb__DOT__run_test__4__in_FlushD = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__4__in_ZeroE;
    __Vtask_D_stage_tb__DOT__run_test__4__in_ZeroE = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__4__in_BranchE;
    __Vtask_D_stage_tb__DOT__run_test__4__in_BranchE = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__4__in_JumpE;
    __Vtask_D_stage_tb__DOT__run_test__4__in_JumpE = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__4__in_ALUResultEb0;
    __Vtask_D_stage_tb__DOT__run_test__4__in_ALUResultEb0 = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__4__in_RdW;
    __Vtask_D_stage_tb__DOT__run_test__4__in_RdW = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__4__in_RegWriteW;
    __Vtask_D_stage_tb__DOT__run_test__4__in_RegWriteW = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__4__in_ResultW;
    __Vtask_D_stage_tb__DOT__run_test__4__in_ResultW = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__4__in_i_debug_addr;
    __Vtask_D_stage_tb__DOT__run_test__4__in_i_debug_addr = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__4__in_mask_Read1D;
    __Vtask_D_stage_tb__DOT__run_test__4__in_mask_Read1D = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__4__in_mask_Read2D;
    __Vtask_D_stage_tb__DOT__run_test__4__in_mask_Read2D = 0;
    CData/*1:0*/ __Vtask_D_stage_tb__DOT__run_test__4__in_mask_ResultSrcD;
    __Vtask_D_stage_tb__DOT__run_test__4__in_mask_ResultSrcD = 0;
    CData/*3:0*/ __Vtask_D_stage_tb__DOT__run_test__4__in_mask_ALUControlD;
    __Vtask_D_stage_tb__DOT__run_test__4__in_mask_ALUControlD = 0;
    CData/*1:0*/ __Vtask_D_stage_tb__DOT__run_test__4__in_mask_ALUSrcD;
    __Vtask_D_stage_tb__DOT__run_test__4__in_mask_ALUSrcD = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__4__in_mask_Rs1D;
    __Vtask_D_stage_tb__DOT__run_test__4__in_mask_Rs1D = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__4__in_mask_Rs2D;
    __Vtask_D_stage_tb__DOT__run_test__4__in_mask_Rs2D = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__4__in_mask_RdD;
    __Vtask_D_stage_tb__DOT__run_test__4__in_mask_RdD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__4__in_mask_ImmExtD;
    __Vtask_D_stage_tb__DOT__run_test__4__in_mask_ImmExtD = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__4__in_mask_MemSrcD;
    __Vtask_D_stage_tb__DOT__run_test__4__in_mask_MemSrcD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__4__in_mask_o_debug_data;
    __Vtask_D_stage_tb__DOT__run_test__4__in_mask_o_debug_data = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__4__exp_Read1D;
    __Vtask_D_stage_tb__DOT__run_test__4__exp_Read1D = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__4__exp_Read2D;
    __Vtask_D_stage_tb__DOT__run_test__4__exp_Read2D = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__4__exp_RegWriteD;
    __Vtask_D_stage_tb__DOT__run_test__4__exp_RegWriteD = 0;
    CData/*1:0*/ __Vtask_D_stage_tb__DOT__run_test__4__exp_ResultSrcD;
    __Vtask_D_stage_tb__DOT__run_test__4__exp_ResultSrcD = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__4__exp_MemWriteD;
    __Vtask_D_stage_tb__DOT__run_test__4__exp_MemWriteD = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__4__exp_JumpD;
    __Vtask_D_stage_tb__DOT__run_test__4__exp_JumpD = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__4__exp_BranchD;
    __Vtask_D_stage_tb__DOT__run_test__4__exp_BranchD = 0;
    CData/*3:0*/ __Vtask_D_stage_tb__DOT__run_test__4__exp_ALUControlD;
    __Vtask_D_stage_tb__DOT__run_test__4__exp_ALUControlD = 0;
    CData/*1:0*/ __Vtask_D_stage_tb__DOT__run_test__4__exp_ALUSrcD;
    __Vtask_D_stage_tb__DOT__run_test__4__exp_ALUSrcD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__4__exp_pcD;
    __Vtask_D_stage_tb__DOT__run_test__4__exp_pcD = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__4__exp_Rs1D;
    __Vtask_D_stage_tb__DOT__run_test__4__exp_Rs1D = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__4__exp_Rs2D;
    __Vtask_D_stage_tb__DOT__run_test__4__exp_Rs2D = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__4__exp_RdD;
    __Vtask_D_stage_tb__DOT__run_test__4__exp_RdD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__4__exp_ImmExtD;
    __Vtask_D_stage_tb__DOT__run_test__4__exp_ImmExtD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__4__exp_PCPlus4D;
    __Vtask_D_stage_tb__DOT__run_test__4__exp_PCPlus4D = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__4__exp_Ecall;
    __Vtask_D_stage_tb__DOT__run_test__4__exp_Ecall = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__4__exp_Ebreak;
    __Vtask_D_stage_tb__DOT__run_test__4__exp_Ebreak = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__4__exp_MemSrcD;
    __Vtask_D_stage_tb__DOT__run_test__4__exp_MemSrcD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__4__exp_o_debug_data;
    __Vtask_D_stage_tb__DOT__run_test__4__exp_o_debug_data = 0;
    std::string __Vtask_D_stage_tb__DOT__run_test__4__test_name;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__5__in_InstrF;
    __Vtask_D_stage_tb__DOT__run_test__5__in_InstrF = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__5__in_pcF;
    __Vtask_D_stage_tb__DOT__run_test__5__in_pcF = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__5__in_PCPlus4F;
    __Vtask_D_stage_tb__DOT__run_test__5__in_PCPlus4F = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__5__in_StallD;
    __Vtask_D_stage_tb__DOT__run_test__5__in_StallD = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__5__in_FlushD;
    __Vtask_D_stage_tb__DOT__run_test__5__in_FlushD = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__5__in_ZeroE;
    __Vtask_D_stage_tb__DOT__run_test__5__in_ZeroE = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__5__in_BranchE;
    __Vtask_D_stage_tb__DOT__run_test__5__in_BranchE = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__5__in_JumpE;
    __Vtask_D_stage_tb__DOT__run_test__5__in_JumpE = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__5__in_ALUResultEb0;
    __Vtask_D_stage_tb__DOT__run_test__5__in_ALUResultEb0 = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__5__in_RdW;
    __Vtask_D_stage_tb__DOT__run_test__5__in_RdW = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__5__in_RegWriteW;
    __Vtask_D_stage_tb__DOT__run_test__5__in_RegWriteW = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__5__in_ResultW;
    __Vtask_D_stage_tb__DOT__run_test__5__in_ResultW = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__5__in_i_debug_addr;
    __Vtask_D_stage_tb__DOT__run_test__5__in_i_debug_addr = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__5__in_mask_Read1D;
    __Vtask_D_stage_tb__DOT__run_test__5__in_mask_Read1D = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__5__in_mask_Read2D;
    __Vtask_D_stage_tb__DOT__run_test__5__in_mask_Read2D = 0;
    CData/*1:0*/ __Vtask_D_stage_tb__DOT__run_test__5__in_mask_ResultSrcD;
    __Vtask_D_stage_tb__DOT__run_test__5__in_mask_ResultSrcD = 0;
    CData/*3:0*/ __Vtask_D_stage_tb__DOT__run_test__5__in_mask_ALUControlD;
    __Vtask_D_stage_tb__DOT__run_test__5__in_mask_ALUControlD = 0;
    CData/*1:0*/ __Vtask_D_stage_tb__DOT__run_test__5__in_mask_ALUSrcD;
    __Vtask_D_stage_tb__DOT__run_test__5__in_mask_ALUSrcD = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__5__in_mask_Rs1D;
    __Vtask_D_stage_tb__DOT__run_test__5__in_mask_Rs1D = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__5__in_mask_Rs2D;
    __Vtask_D_stage_tb__DOT__run_test__5__in_mask_Rs2D = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__5__in_mask_RdD;
    __Vtask_D_stage_tb__DOT__run_test__5__in_mask_RdD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__5__in_mask_ImmExtD;
    __Vtask_D_stage_tb__DOT__run_test__5__in_mask_ImmExtD = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__5__in_mask_MemSrcD;
    __Vtask_D_stage_tb__DOT__run_test__5__in_mask_MemSrcD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__5__in_mask_o_debug_data;
    __Vtask_D_stage_tb__DOT__run_test__5__in_mask_o_debug_data = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__5__exp_Read1D;
    __Vtask_D_stage_tb__DOT__run_test__5__exp_Read1D = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__5__exp_Read2D;
    __Vtask_D_stage_tb__DOT__run_test__5__exp_Read2D = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__5__exp_RegWriteD;
    __Vtask_D_stage_tb__DOT__run_test__5__exp_RegWriteD = 0;
    CData/*1:0*/ __Vtask_D_stage_tb__DOT__run_test__5__exp_ResultSrcD;
    __Vtask_D_stage_tb__DOT__run_test__5__exp_ResultSrcD = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__5__exp_MemWriteD;
    __Vtask_D_stage_tb__DOT__run_test__5__exp_MemWriteD = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__5__exp_JumpD;
    __Vtask_D_stage_tb__DOT__run_test__5__exp_JumpD = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__5__exp_BranchD;
    __Vtask_D_stage_tb__DOT__run_test__5__exp_BranchD = 0;
    CData/*3:0*/ __Vtask_D_stage_tb__DOT__run_test__5__exp_ALUControlD;
    __Vtask_D_stage_tb__DOT__run_test__5__exp_ALUControlD = 0;
    CData/*1:0*/ __Vtask_D_stage_tb__DOT__run_test__5__exp_ALUSrcD;
    __Vtask_D_stage_tb__DOT__run_test__5__exp_ALUSrcD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__5__exp_pcD;
    __Vtask_D_stage_tb__DOT__run_test__5__exp_pcD = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__5__exp_Rs1D;
    __Vtask_D_stage_tb__DOT__run_test__5__exp_Rs1D = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__5__exp_Rs2D;
    __Vtask_D_stage_tb__DOT__run_test__5__exp_Rs2D = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__5__exp_RdD;
    __Vtask_D_stage_tb__DOT__run_test__5__exp_RdD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__5__exp_ImmExtD;
    __Vtask_D_stage_tb__DOT__run_test__5__exp_ImmExtD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__5__exp_PCPlus4D;
    __Vtask_D_stage_tb__DOT__run_test__5__exp_PCPlus4D = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__5__exp_Ecall;
    __Vtask_D_stage_tb__DOT__run_test__5__exp_Ecall = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__5__exp_Ebreak;
    __Vtask_D_stage_tb__DOT__run_test__5__exp_Ebreak = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__5__exp_MemSrcD;
    __Vtask_D_stage_tb__DOT__run_test__5__exp_MemSrcD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__5__exp_o_debug_data;
    __Vtask_D_stage_tb__DOT__run_test__5__exp_o_debug_data = 0;
    std::string __Vtask_D_stage_tb__DOT__run_test__5__test_name;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__6__in_InstrF;
    __Vtask_D_stage_tb__DOT__run_test__6__in_InstrF = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__6__in_pcF;
    __Vtask_D_stage_tb__DOT__run_test__6__in_pcF = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__6__in_PCPlus4F;
    __Vtask_D_stage_tb__DOT__run_test__6__in_PCPlus4F = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__6__in_StallD;
    __Vtask_D_stage_tb__DOT__run_test__6__in_StallD = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__6__in_FlushD;
    __Vtask_D_stage_tb__DOT__run_test__6__in_FlushD = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__6__in_ZeroE;
    __Vtask_D_stage_tb__DOT__run_test__6__in_ZeroE = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__6__in_BranchE;
    __Vtask_D_stage_tb__DOT__run_test__6__in_BranchE = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__6__in_JumpE;
    __Vtask_D_stage_tb__DOT__run_test__6__in_JumpE = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__6__in_ALUResultEb0;
    __Vtask_D_stage_tb__DOT__run_test__6__in_ALUResultEb0 = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__6__in_RdW;
    __Vtask_D_stage_tb__DOT__run_test__6__in_RdW = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__6__in_RegWriteW;
    __Vtask_D_stage_tb__DOT__run_test__6__in_RegWriteW = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__6__in_ResultW;
    __Vtask_D_stage_tb__DOT__run_test__6__in_ResultW = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__6__in_i_debug_addr;
    __Vtask_D_stage_tb__DOT__run_test__6__in_i_debug_addr = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__6__in_mask_Read1D;
    __Vtask_D_stage_tb__DOT__run_test__6__in_mask_Read1D = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__6__in_mask_Read2D;
    __Vtask_D_stage_tb__DOT__run_test__6__in_mask_Read2D = 0;
    CData/*1:0*/ __Vtask_D_stage_tb__DOT__run_test__6__in_mask_ResultSrcD;
    __Vtask_D_stage_tb__DOT__run_test__6__in_mask_ResultSrcD = 0;
    CData/*3:0*/ __Vtask_D_stage_tb__DOT__run_test__6__in_mask_ALUControlD;
    __Vtask_D_stage_tb__DOT__run_test__6__in_mask_ALUControlD = 0;
    CData/*1:0*/ __Vtask_D_stage_tb__DOT__run_test__6__in_mask_ALUSrcD;
    __Vtask_D_stage_tb__DOT__run_test__6__in_mask_ALUSrcD = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__6__in_mask_Rs1D;
    __Vtask_D_stage_tb__DOT__run_test__6__in_mask_Rs1D = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__6__in_mask_Rs2D;
    __Vtask_D_stage_tb__DOT__run_test__6__in_mask_Rs2D = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__6__in_mask_RdD;
    __Vtask_D_stage_tb__DOT__run_test__6__in_mask_RdD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__6__in_mask_ImmExtD;
    __Vtask_D_stage_tb__DOT__run_test__6__in_mask_ImmExtD = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__6__in_mask_MemSrcD;
    __Vtask_D_stage_tb__DOT__run_test__6__in_mask_MemSrcD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__6__in_mask_o_debug_data;
    __Vtask_D_stage_tb__DOT__run_test__6__in_mask_o_debug_data = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__6__exp_Read1D;
    __Vtask_D_stage_tb__DOT__run_test__6__exp_Read1D = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__6__exp_Read2D;
    __Vtask_D_stage_tb__DOT__run_test__6__exp_Read2D = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__6__exp_RegWriteD;
    __Vtask_D_stage_tb__DOT__run_test__6__exp_RegWriteD = 0;
    CData/*1:0*/ __Vtask_D_stage_tb__DOT__run_test__6__exp_ResultSrcD;
    __Vtask_D_stage_tb__DOT__run_test__6__exp_ResultSrcD = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__6__exp_MemWriteD;
    __Vtask_D_stage_tb__DOT__run_test__6__exp_MemWriteD = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__6__exp_JumpD;
    __Vtask_D_stage_tb__DOT__run_test__6__exp_JumpD = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__6__exp_BranchD;
    __Vtask_D_stage_tb__DOT__run_test__6__exp_BranchD = 0;
    CData/*3:0*/ __Vtask_D_stage_tb__DOT__run_test__6__exp_ALUControlD;
    __Vtask_D_stage_tb__DOT__run_test__6__exp_ALUControlD = 0;
    CData/*1:0*/ __Vtask_D_stage_tb__DOT__run_test__6__exp_ALUSrcD;
    __Vtask_D_stage_tb__DOT__run_test__6__exp_ALUSrcD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__6__exp_pcD;
    __Vtask_D_stage_tb__DOT__run_test__6__exp_pcD = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__6__exp_Rs1D;
    __Vtask_D_stage_tb__DOT__run_test__6__exp_Rs1D = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__6__exp_Rs2D;
    __Vtask_D_stage_tb__DOT__run_test__6__exp_Rs2D = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__6__exp_RdD;
    __Vtask_D_stage_tb__DOT__run_test__6__exp_RdD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__6__exp_ImmExtD;
    __Vtask_D_stage_tb__DOT__run_test__6__exp_ImmExtD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__6__exp_PCPlus4D;
    __Vtask_D_stage_tb__DOT__run_test__6__exp_PCPlus4D = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__6__exp_Ecall;
    __Vtask_D_stage_tb__DOT__run_test__6__exp_Ecall = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__6__exp_Ebreak;
    __Vtask_D_stage_tb__DOT__run_test__6__exp_Ebreak = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__6__exp_MemSrcD;
    __Vtask_D_stage_tb__DOT__run_test__6__exp_MemSrcD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__6__exp_o_debug_data;
    __Vtask_D_stage_tb__DOT__run_test__6__exp_o_debug_data = 0;
    std::string __Vtask_D_stage_tb__DOT__run_test__6__test_name;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__7__in_InstrF;
    __Vtask_D_stage_tb__DOT__run_test__7__in_InstrF = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__7__in_pcF;
    __Vtask_D_stage_tb__DOT__run_test__7__in_pcF = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__7__in_PCPlus4F;
    __Vtask_D_stage_tb__DOT__run_test__7__in_PCPlus4F = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__7__in_StallD;
    __Vtask_D_stage_tb__DOT__run_test__7__in_StallD = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__7__in_FlushD;
    __Vtask_D_stage_tb__DOT__run_test__7__in_FlushD = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__7__in_ZeroE;
    __Vtask_D_stage_tb__DOT__run_test__7__in_ZeroE = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__7__in_BranchE;
    __Vtask_D_stage_tb__DOT__run_test__7__in_BranchE = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__7__in_JumpE;
    __Vtask_D_stage_tb__DOT__run_test__7__in_JumpE = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__7__in_ALUResultEb0;
    __Vtask_D_stage_tb__DOT__run_test__7__in_ALUResultEb0 = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__7__in_RdW;
    __Vtask_D_stage_tb__DOT__run_test__7__in_RdW = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__7__in_RegWriteW;
    __Vtask_D_stage_tb__DOT__run_test__7__in_RegWriteW = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__7__in_ResultW;
    __Vtask_D_stage_tb__DOT__run_test__7__in_ResultW = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__7__in_i_debug_addr;
    __Vtask_D_stage_tb__DOT__run_test__7__in_i_debug_addr = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__7__in_mask_Read1D;
    __Vtask_D_stage_tb__DOT__run_test__7__in_mask_Read1D = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__7__in_mask_Read2D;
    __Vtask_D_stage_tb__DOT__run_test__7__in_mask_Read2D = 0;
    CData/*1:0*/ __Vtask_D_stage_tb__DOT__run_test__7__in_mask_ResultSrcD;
    __Vtask_D_stage_tb__DOT__run_test__7__in_mask_ResultSrcD = 0;
    CData/*3:0*/ __Vtask_D_stage_tb__DOT__run_test__7__in_mask_ALUControlD;
    __Vtask_D_stage_tb__DOT__run_test__7__in_mask_ALUControlD = 0;
    CData/*1:0*/ __Vtask_D_stage_tb__DOT__run_test__7__in_mask_ALUSrcD;
    __Vtask_D_stage_tb__DOT__run_test__7__in_mask_ALUSrcD = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__7__in_mask_Rs1D;
    __Vtask_D_stage_tb__DOT__run_test__7__in_mask_Rs1D = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__7__in_mask_Rs2D;
    __Vtask_D_stage_tb__DOT__run_test__7__in_mask_Rs2D = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__7__in_mask_RdD;
    __Vtask_D_stage_tb__DOT__run_test__7__in_mask_RdD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__7__in_mask_ImmExtD;
    __Vtask_D_stage_tb__DOT__run_test__7__in_mask_ImmExtD = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__7__in_mask_MemSrcD;
    __Vtask_D_stage_tb__DOT__run_test__7__in_mask_MemSrcD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__7__in_mask_o_debug_data;
    __Vtask_D_stage_tb__DOT__run_test__7__in_mask_o_debug_data = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__7__exp_Read1D;
    __Vtask_D_stage_tb__DOT__run_test__7__exp_Read1D = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__7__exp_Read2D;
    __Vtask_D_stage_tb__DOT__run_test__7__exp_Read2D = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__7__exp_RegWriteD;
    __Vtask_D_stage_tb__DOT__run_test__7__exp_RegWriteD = 0;
    CData/*1:0*/ __Vtask_D_stage_tb__DOT__run_test__7__exp_ResultSrcD;
    __Vtask_D_stage_tb__DOT__run_test__7__exp_ResultSrcD = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__7__exp_MemWriteD;
    __Vtask_D_stage_tb__DOT__run_test__7__exp_MemWriteD = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__7__exp_JumpD;
    __Vtask_D_stage_tb__DOT__run_test__7__exp_JumpD = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__7__exp_BranchD;
    __Vtask_D_stage_tb__DOT__run_test__7__exp_BranchD = 0;
    CData/*3:0*/ __Vtask_D_stage_tb__DOT__run_test__7__exp_ALUControlD;
    __Vtask_D_stage_tb__DOT__run_test__7__exp_ALUControlD = 0;
    CData/*1:0*/ __Vtask_D_stage_tb__DOT__run_test__7__exp_ALUSrcD;
    __Vtask_D_stage_tb__DOT__run_test__7__exp_ALUSrcD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__7__exp_pcD;
    __Vtask_D_stage_tb__DOT__run_test__7__exp_pcD = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__7__exp_Rs1D;
    __Vtask_D_stage_tb__DOT__run_test__7__exp_Rs1D = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__7__exp_Rs2D;
    __Vtask_D_stage_tb__DOT__run_test__7__exp_Rs2D = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__7__exp_RdD;
    __Vtask_D_stage_tb__DOT__run_test__7__exp_RdD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__7__exp_ImmExtD;
    __Vtask_D_stage_tb__DOT__run_test__7__exp_ImmExtD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__7__exp_PCPlus4D;
    __Vtask_D_stage_tb__DOT__run_test__7__exp_PCPlus4D = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__7__exp_Ecall;
    __Vtask_D_stage_tb__DOT__run_test__7__exp_Ecall = 0;
    CData/*0:0*/ __Vtask_D_stage_tb__DOT__run_test__7__exp_Ebreak;
    __Vtask_D_stage_tb__DOT__run_test__7__exp_Ebreak = 0;
    CData/*4:0*/ __Vtask_D_stage_tb__DOT__run_test__7__exp_MemSrcD;
    __Vtask_D_stage_tb__DOT__run_test__7__exp_MemSrcD = 0;
    IData/*31:0*/ __Vtask_D_stage_tb__DOT__run_test__7__exp_o_debug_data;
    __Vtask_D_stage_tb__DOT__run_test__7__exp_o_debug_data = 0;
    std::string __Vtask_D_stage_tb__DOT__run_test__7__test_name;
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"wave.vcd"});
    vlSymsp->_traceDumpOpen();
    VL_WRITEF_NX("\n===== Decode Stage Tests =====\n\n----------- Reset Tests -----------\n",0);
    vlSelfRef.D_stage_tb__DOT__rst = 1U;
    vlSelfRef.D_stage_tb__DOT__InstrF = 0U;
    vlSelfRef.D_stage_tb__DOT__pcF = 0U;
    vlSelfRef.D_stage_tb__DOT__PCPlus4F = 4U;
    vlSelfRef.D_stage_tb__DOT__StallD = 0U;
    vlSelfRef.D_stage_tb__DOT__FlushD = 0U;
    vlSelfRef.D_stage_tb__DOT__ZeroE = 0U;
    vlSelfRef.D_stage_tb__DOT__BranchE = 0U;
    vlSelfRef.D_stage_tb__DOT__JumpE = 0U;
    vlSelfRef.D_stage_tb__DOT__ALUResultEb0 = 0U;
    vlSelfRef.D_stage_tb__DOT__RdW = 0U;
    vlSelfRef.D_stage_tb__DOT__RegWriteW = 0U;
    vlSelfRef.D_stage_tb__DOT__ResultW = 0U;
    vlSelfRef.D_stage_tb__DOT__mask_Read1D = 0U;
    vlSelfRef.D_stage_tb__DOT__mask_Read2D = 0U;
    vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD = 0U;
    vlSelfRef.D_stage_tb__DOT__mask_ALUControlD = 0U;
    vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD = 0U;
    vlSelfRef.D_stage_tb__DOT__mask_Rs1D = 0U;
    vlSelfRef.D_stage_tb__DOT__mask_Rs2D = 0U;
    vlSelfRef.D_stage_tb__DOT__mask_RdD = 0U;
    vlSelfRef.D_stage_tb__DOT__mask_ImmExtD = 0U;
    vlSelfRef.D_stage_tb__DOT__mask_MemSrcD = 0U;
    vlSelfRef.D_stage_tb__DOT__mask_o_debug_data = 0U;
    vlSelfRef.D_stage_tb__DOT__i_debug_addr = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../../01_bench/D_stage_tb.sv", 
                                         330);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_D_stage_tb__DOT__run_test__0__test_name = 
        std::string{"Reset state"};
    __Vtask_D_stage_tb__DOT__run_test__0__exp_o_debug_data 
        = vlSelfRef.D_stage_tb__DOT____Vxrand_h8794da3b__3;
    __Vtask_D_stage_tb__DOT__run_test__0__exp_MemSrcD 
        = vlSelfRef.D_stage_tb__DOT____Vxrand_h87975fad__0;
    __Vtask_D_stage_tb__DOT__run_test__0__exp_Ebreak = 0U;
    __Vtask_D_stage_tb__DOT__run_test__0__exp_Ecall = 0U;
    __Vtask_D_stage_tb__DOT__run_test__0__exp_PCPlus4D = 0U;
    __Vtask_D_stage_tb__DOT__run_test__0__exp_ImmExtD 
        = vlSelfRef.D_stage_tb__DOT____Vxrand_h8794da3b__2;
    __Vtask_D_stage_tb__DOT__run_test__0__exp_RdD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__0__exp_Rs2D = 0U;
    __Vtask_D_stage_tb__DOT__run_test__0__exp_Rs1D = 0U;
    __Vtask_D_stage_tb__DOT__run_test__0__exp_pcD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__0__exp_ALUSrcD 
        = vlSelfRef.D_stage_tb__DOT____Vxrand_h87970bbd__1;
    __Vtask_D_stage_tb__DOT__run_test__0__exp_ALUControlD 
        = vlSelfRef.D_stage_tb__DOT____Vxrand_h8797496c__0;
    __Vtask_D_stage_tb__DOT__run_test__0__exp_BranchD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__0__exp_JumpD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__0__exp_MemWriteD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__0__exp_ResultSrcD 
        = vlSelfRef.D_stage_tb__DOT____Vxrand_h87970bbd__0;
    __Vtask_D_stage_tb__DOT__run_test__0__exp_RegWriteD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__0__exp_Read2D 
        = vlSelfRef.D_stage_tb__DOT____Vxrand_h8794da3b__1;
    __Vtask_D_stage_tb__DOT__run_test__0__exp_Read1D 
        = vlSelfRef.D_stage_tb__DOT____Vxrand_h8794da3b__0;
    __Vtask_D_stage_tb__DOT__run_test__0__in_mask_o_debug_data 
        = vlSelfRef.D_stage_tb__DOT__mask_o_debug_data;
    __Vtask_D_stage_tb__DOT__run_test__0__in_mask_MemSrcD 
        = vlSelfRef.D_stage_tb__DOT__mask_MemSrcD;
    __Vtask_D_stage_tb__DOT__run_test__0__in_mask_ImmExtD 
        = vlSelfRef.D_stage_tb__DOT__mask_ImmExtD;
    __Vtask_D_stage_tb__DOT__run_test__0__in_mask_RdD 
        = vlSelfRef.D_stage_tb__DOT__mask_RdD;
    __Vtask_D_stage_tb__DOT__run_test__0__in_mask_Rs2D 
        = vlSelfRef.D_stage_tb__DOT__mask_Rs2D;
    __Vtask_D_stage_tb__DOT__run_test__0__in_mask_Rs1D 
        = vlSelfRef.D_stage_tb__DOT__mask_Rs1D;
    __Vtask_D_stage_tb__DOT__run_test__0__in_mask_ALUSrcD 
        = vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD;
    __Vtask_D_stage_tb__DOT__run_test__0__in_mask_ALUControlD 
        = vlSelfRef.D_stage_tb__DOT__mask_ALUControlD;
    __Vtask_D_stage_tb__DOT__run_test__0__in_mask_ResultSrcD 
        = vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD;
    __Vtask_D_stage_tb__DOT__run_test__0__in_mask_Read2D 
        = vlSelfRef.D_stage_tb__DOT__mask_Read2D;
    __Vtask_D_stage_tb__DOT__run_test__0__in_mask_Read1D 
        = vlSelfRef.D_stage_tb__DOT__mask_Read1D;
    __Vtask_D_stage_tb__DOT__run_test__0__in_i_debug_addr 
        = vlSelfRef.D_stage_tb__DOT__i_debug_addr;
    __Vtask_D_stage_tb__DOT__run_test__0__in_ResultW 
        = vlSelfRef.D_stage_tb__DOT__ResultW;
    __Vtask_D_stage_tb__DOT__run_test__0__in_RegWriteW 
        = vlSelfRef.D_stage_tb__DOT__RegWriteW;
    __Vtask_D_stage_tb__DOT__run_test__0__in_RdW = vlSelfRef.D_stage_tb__DOT__RdW;
    __Vtask_D_stage_tb__DOT__run_test__0__in_ALUResultEb0 
        = vlSelfRef.D_stage_tb__DOT__ALUResultEb0;
    __Vtask_D_stage_tb__DOT__run_test__0__in_JumpE 
        = vlSelfRef.D_stage_tb__DOT__JumpE;
    __Vtask_D_stage_tb__DOT__run_test__0__in_BranchE 
        = vlSelfRef.D_stage_tb__DOT__BranchE;
    __Vtask_D_stage_tb__DOT__run_test__0__in_ZeroE 
        = vlSelfRef.D_stage_tb__DOT__ZeroE;
    __Vtask_D_stage_tb__DOT__run_test__0__in_FlushD 
        = vlSelfRef.D_stage_tb__DOT__FlushD;
    __Vtask_D_stage_tb__DOT__run_test__0__in_StallD 
        = vlSelfRef.D_stage_tb__DOT__StallD;
    __Vtask_D_stage_tb__DOT__run_test__0__in_PCPlus4F 
        = vlSelfRef.D_stage_tb__DOT__PCPlus4F;
    __Vtask_D_stage_tb__DOT__run_test__0__in_pcF = vlSelfRef.D_stage_tb__DOT__pcF;
    __Vtask_D_stage_tb__DOT__run_test__0__in_InstrF 
        = vlSelfRef.D_stage_tb__DOT__InstrF;
    vlSelfRef.D_stage_tb__DOT__test_num = ((IData)(1U) 
                                           + vlSelfRef.D_stage_tb__DOT__test_num);
    vlSelfRef.D_stage_tb__DOT__InstrF = __Vtask_D_stage_tb__DOT__run_test__0__in_InstrF;
    vlSelfRef.D_stage_tb__DOT__pcF = __Vtask_D_stage_tb__DOT__run_test__0__in_pcF;
    vlSelfRef.D_stage_tb__DOT__PCPlus4F = __Vtask_D_stage_tb__DOT__run_test__0__in_PCPlus4F;
    vlSelfRef.D_stage_tb__DOT__StallD = __Vtask_D_stage_tb__DOT__run_test__0__in_StallD;
    vlSelfRef.D_stage_tb__DOT__FlushD = __Vtask_D_stage_tb__DOT__run_test__0__in_FlushD;
    vlSelfRef.D_stage_tb__DOT__ZeroE = __Vtask_D_stage_tb__DOT__run_test__0__in_ZeroE;
    vlSelfRef.D_stage_tb__DOT__BranchE = __Vtask_D_stage_tb__DOT__run_test__0__in_BranchE;
    vlSelfRef.D_stage_tb__DOT__JumpE = __Vtask_D_stage_tb__DOT__run_test__0__in_JumpE;
    vlSelfRef.D_stage_tb__DOT__ALUResultEb0 = __Vtask_D_stage_tb__DOT__run_test__0__in_ALUResultEb0;
    vlSelfRef.D_stage_tb__DOT__RdW = __Vtask_D_stage_tb__DOT__run_test__0__in_RdW;
    vlSelfRef.D_stage_tb__DOT__RegWriteW = __Vtask_D_stage_tb__DOT__run_test__0__in_RegWriteW;
    vlSelfRef.D_stage_tb__DOT__ResultW = __Vtask_D_stage_tb__DOT__run_test__0__in_ResultW;
    vlSelfRef.D_stage_tb__DOT__i_debug_addr = __Vtask_D_stage_tb__DOT__run_test__0__in_i_debug_addr;
    vlSelfRef.D_stage_tb__DOT__mask_Read1D = __Vtask_D_stage_tb__DOT__run_test__0__in_mask_Read1D;
    vlSelfRef.D_stage_tb__DOT__mask_Read2D = __Vtask_D_stage_tb__DOT__run_test__0__in_mask_Read2D;
    vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD = __Vtask_D_stage_tb__DOT__run_test__0__in_mask_ResultSrcD;
    vlSelfRef.D_stage_tb__DOT__mask_ALUControlD = __Vtask_D_stage_tb__DOT__run_test__0__in_mask_ALUControlD;
    vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD = __Vtask_D_stage_tb__DOT__run_test__0__in_mask_ALUSrcD;
    vlSelfRef.D_stage_tb__DOT__mask_Rs1D = __Vtask_D_stage_tb__DOT__run_test__0__in_mask_Rs1D;
    vlSelfRef.D_stage_tb__DOT__mask_Rs2D = __Vtask_D_stage_tb__DOT__run_test__0__in_mask_Rs2D;
    vlSelfRef.D_stage_tb__DOT__mask_RdD = __Vtask_D_stage_tb__DOT__run_test__0__in_mask_RdD;
    vlSelfRef.D_stage_tb__DOT__mask_ImmExtD = __Vtask_D_stage_tb__DOT__run_test__0__in_mask_ImmExtD;
    vlSelfRef.D_stage_tb__DOT__mask_MemSrcD = __Vtask_D_stage_tb__DOT__run_test__0__in_mask_MemSrcD;
    vlSelfRef.D_stage_tb__DOT__mask_o_debug_data = __Vtask_D_stage_tb__DOT__run_test__0__in_mask_o_debug_data;
    co_await vlSelfRef.__VtrigSched_h1a3cedb5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge D_stage_tb.clk)", 
                                                         "../../01_bench/D_stage_tb.sv", 
                                                         223);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/D_stage_tb.sv", 
                                         223);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((((((((((((((((((((((vlSelfRef.D_stage_tb__DOT__Read1D 
                                       & vlSelfRef.D_stage_tb__DOT__mask_Read1D) 
                                      == (__Vtask_D_stage_tb__DOT__run_test__0__exp_Read1D 
                                          & vlSelfRef.D_stage_tb__DOT__mask_Read1D)) 
                                     & ((vlSelfRef.D_stage_tb__DOT__Read2D 
                                         & vlSelfRef.D_stage_tb__DOT__mask_Read2D) 
                                        == (__Vtask_D_stage_tb__DOT__run_test__0__exp_Read2D 
                                            & vlSelfRef.D_stage_tb__DOT__mask_Read2D))) 
                                    & ((1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                              >> 0xcU)) 
                                       == (IData)(__Vtask_D_stage_tb__DOT__run_test__0__exp_RegWriteD))) 
                                   & ((((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                        >> 4U) & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD)) 
                                      == ((IData)(__Vtask_D_stage_tb__DOT__run_test__0__exp_ResultSrcD) 
                                          & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD)))) 
                                  & ((1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                            >> 6U)) 
                                     == (IData)(__Vtask_D_stage_tb__DOT__run_test__0__exp_MemWriteD))) 
                                 & ((1U & (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls)) 
                                    == (IData)(__Vtask_D_stage_tb__DOT__run_test__0__exp_JumpD))) 
                                & ((1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                          >> 3U)) == (IData)(__Vtask_D_stage_tb__DOT__run_test__0__exp_BranchD))) 
                               & (((IData)(vlSelfRef.D_stage_tb__DOT__ALUControlD) 
                                   & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUControlD)) 
                                  == ((IData)(__Vtask_D_stage_tb__DOT__run_test__0__exp_ALUControlD) 
                                      & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUControlD)))) 
                              & ((((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                   >> 7U) & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD)) 
                                 == ((IData)(__Vtask_D_stage_tb__DOT__run_test__0__exp_ALUSrcD) 
                                     & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD)))) 
                             & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[1U] 
                                == __Vtask_D_stage_tb__DOT__run_test__0__exp_pcD)) 
                            & ((((vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                  << 0x11U) | (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                               >> 0xfU)) 
                                & (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs1D)) 
                               == ((IData)(__Vtask_D_stage_tb__DOT__run_test__0__exp_Rs1D) 
                                   & (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs1D)))) 
                           & ((((vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                 << 0xcU) | (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                             >> 0x14U)) 
                               & (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs2D)) 
                              == ((IData)(__Vtask_D_stage_tb__DOT__run_test__0__exp_Rs2D) 
                                  & (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs2D)))) 
                          & ((((vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                << 0x19U) | (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                             >> 7U)) 
                              & (IData)(vlSelfRef.D_stage_tb__DOT__mask_RdD)) 
                             == ((IData)(__Vtask_D_stage_tb__DOT__run_test__0__exp_RdD) 
                                 & (IData)(vlSelfRef.D_stage_tb__DOT__mask_RdD)))) 
                         & ((vlSelfRef.D_stage_tb__DOT__ImmExtD 
                             & vlSelfRef.D_stage_tb__DOT__mask_ImmExtD) 
                            == (__Vtask_D_stage_tb__DOT__run_test__0__exp_ImmExtD 
                                & vlSelfRef.D_stage_tb__DOT__mask_ImmExtD))) 
                        & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[0U] 
                           == __Vtask_D_stage_tb__DOT__run_test__0__exp_PCPlus4D)) 
                       & ((IData)((0x73U == (0xfff0007fU 
                                             & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U]))) 
                          == (IData)(__Vtask_D_stage_tb__DOT__run_test__0__exp_Ecall))) 
                      & ((((0x4000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                            ? ((0x2000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                ? 0U : ((0x1000U & 
                                         vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                         ? 1U : 2U))
                            : ((0x2000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                ? ((0x1000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                    ? 0U : 4U) : ((0x1000U 
                                                   & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                   ? 8U
                                                   : 0x10U))) 
                          & (IData)(vlSelfRef.D_stage_tb__DOT__mask_MemSrcD)) 
                         == ((IData)(__Vtask_D_stage_tb__DOT__run_test__0__exp_MemSrcD) 
                             & (IData)(vlSelfRef.D_stage_tb__DOT__mask_MemSrcD)))) 
                     & ((vlSelfRef.D_stage_tb__DOT__o_debug_data 
                         & vlSelfRef.D_stage_tb__DOT__mask_o_debug_data) 
                        == (__Vtask_D_stage_tb__DOT__run_test__0__exp_o_debug_data 
                            & vlSelfRef.D_stage_tb__DOT__mask_o_debug_data))) 
                    & ((IData)((0x100073U == (0xfff0007fU 
                                              & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U]))) 
                       == (IData)(__Vtask_D_stage_tb__DOT__run_test__0__exp_Ebreak)))))) {
        VL_WRITEF_NX("%02d \342\234\205 %@\n    Instruction: %x\n    Register x%2#: %x\n",0,
                     32,vlSelfRef.D_stage_tb__DOT__test_num,
                     -1,&(__Vtask_D_stage_tb__DOT__run_test__0__test_name),
                     32,vlSelfRef.D_stage_tb__DOT__InstrF,
                     5,(IData)(vlSelfRef.D_stage_tb__DOT__i_debug_addr),
                     32,vlSelfRef.D_stage_tb__DOT__o_debug_data);
        vlSelfRef.D_stage_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.D_stage_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214 %@\n    Instruction: %b\n    Inputs:\n        pcF=%x PCPlus4F=%x\n        StallD=%b FlushD=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n        RdW=%2# RegWriteW=%b ResultW=%x\n    Bit Mask:\n        mask_Read1D=%b\n        mask_Read2D=%b\n        mask_ResultSrcD=%b\n        mask_ALUControlD=%b\n        mask_ALUSrcD=%b\n        mask_Rs1D=%b\n        mask_Rs2D=%b\n        mask_RdD=%b\n        mask_ImmExtD=%b\n        mask_MemSrcD=%b\n    Expected vs Actual:\n",0,
                     32,vlSelfRef.D_stage_tb__DOT__test_num,
                     -1,&(__Vtask_D_stage_tb__DOT__run_test__0__test_name),
                     32,vlSelfRef.D_stage_tb__DOT__InstrF,
                     32,vlSelfRef.D_stage_tb__DOT__pcF,
                     32,vlSelfRef.D_stage_tb__DOT__PCPlus4F,
                     1,(IData)(vlSelfRef.D_stage_tb__DOT__StallD),
                     1,vlSelfRef.D_stage_tb__DOT__FlushD,
                     1,(IData)(vlSelfRef.D_stage_tb__DOT__ZeroE),
                     1,vlSelfRef.D_stage_tb__DOT__BranchE,
                     1,(IData)(vlSelfRef.D_stage_tb__DOT__JumpE),
                     1,vlSelfRef.D_stage_tb__DOT__ALUResultEb0,
                     5,(IData)(vlSelfRef.D_stage_tb__DOT__RdW),
                     1,vlSelfRef.D_stage_tb__DOT__RegWriteW,
                     32,vlSelfRef.D_stage_tb__DOT__ResultW,
                     1,(0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_Read1D),
                     1,(0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_Read2D),
                     1,(3U == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD)),
                     1,(0xfU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUControlD)),
                     1,(3U == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD)),
                     1,(0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs1D)),
                     1,(0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs2D)),
                     1,(0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_RdD)),
                     1,(0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_ImmExtD),
                     1,(0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_MemSrcD)));
        if (VL_UNLIKELY(((0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_Read1D)))) {
            VL_WRITEF_NX("        Read1D:      %x vs %x\n",0,
                         32,__Vtask_D_stage_tb__DOT__run_test__0__exp_Read1D,
                         32,vlSelfRef.D_stage_tb__DOT__Read1D);
        }
        if (VL_UNLIKELY(((0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_Read2D)))) {
            VL_WRITEF_NX("        Read2D:      %x vs %x\n",0,
                         32,__Vtask_D_stage_tb__DOT__run_test__0__exp_Read2D,
                         32,vlSelfRef.D_stage_tb__DOT__Read2D);
        }
        VL_WRITEF_NX("        RegWriteD:   %b vs %b\n",0,
                     1,__Vtask_D_stage_tb__DOT__run_test__0__exp_RegWriteD,
                     1,(1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                              >> 0xcU)));
        if (VL_UNLIKELY(((3U == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD))))) {
            VL_WRITEF_NX("        ResultSrcD:  %b vs %b\n",0,
                         2,__Vtask_D_stage_tb__DOT__run_test__0__exp_ResultSrcD,
                         2,(3U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                  >> 4U)));
        }
        VL_WRITEF_NX("        MemWriteD:   %b vs %b\n        JumpD:       %b vs %b\n        BranchD:     %b vs %b\n",0,
                     1,__Vtask_D_stage_tb__DOT__run_test__0__exp_MemWriteD,
                     1,(1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                              >> 6U)),1,(IData)(__Vtask_D_stage_tb__DOT__run_test__0__exp_JumpD),
                     1,(1U & (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls)),
                     1,(IData)(__Vtask_D_stage_tb__DOT__run_test__0__exp_BranchD),
                     1,(1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                              >> 3U)));
        if (VL_UNLIKELY(((0xfU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUControlD))))) {
            VL_WRITEF_NX("        ALUControlD: %b vs %b\n",0,
                         4,__Vtask_D_stage_tb__DOT__run_test__0__exp_ALUControlD,
                         4,(IData)(vlSelfRef.D_stage_tb__DOT__ALUControlD));
        }
        if (VL_UNLIKELY(((3U == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD))))) {
            VL_WRITEF_NX("        ALUSrcD:     %b vs %b\n",0,
                         2,__Vtask_D_stage_tb__DOT__run_test__0__exp_ALUSrcD,
                         2,(3U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                  >> 7U)));
        }
        VL_WRITEF_NX("        pcD:         %x vs %x\n",0,
                     32,__Vtask_D_stage_tb__DOT__run_test__0__exp_pcD,
                     32,vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[1U]);
        if (VL_UNLIKELY(((0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs1D))))) {
            VL_WRITEF_NX("        Rs1D:        %2# vs %2#\n",0,
                         5,__Vtask_D_stage_tb__DOT__run_test__0__exp_Rs1D,
                         5,(0x1fU & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                     >> 0xfU)));
        }
        if (VL_UNLIKELY(((0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs2D))))) {
            VL_WRITEF_NX("        Rs2D:        %2# vs %2#\n",0,
                         5,__Vtask_D_stage_tb__DOT__run_test__0__exp_Rs2D,
                         5,(0x1fU & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                     >> 0x14U)));
        }
        if (VL_UNLIKELY(((0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_RdD))))) {
            VL_WRITEF_NX("        RdD:         %2# vs %2#\n",0,
                         5,__Vtask_D_stage_tb__DOT__run_test__0__exp_RdD,
                         5,(0x1fU & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                     >> 7U)));
        }
        if (VL_UNLIKELY(((0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_ImmExtD)))) {
            VL_WRITEF_NX("        ImmExtD:     %x vs %x\n",0,
                         32,__Vtask_D_stage_tb__DOT__run_test__0__exp_ImmExtD,
                         32,vlSelfRef.D_stage_tb__DOT__ImmExtD);
        }
        VL_WRITEF_NX("        PCPlus4D:    %x vs %x\n        Ecall:       %b vs %b\n        Ebreak:      %b vs %b\n",0,
                     32,__Vtask_D_stage_tb__DOT__run_test__0__exp_PCPlus4D,
                     32,vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[0U],
                     1,(IData)(__Vtask_D_stage_tb__DOT__run_test__0__exp_Ecall),
                     1,(IData)((0x73U == (0xfff0007fU 
                                          & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U]))),
                     1,__Vtask_D_stage_tb__DOT__run_test__0__exp_Ebreak,
                     1,(IData)((0x100073U == (0xfff0007fU 
                                              & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U]))));
        if (VL_UNLIKELY(((0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_MemSrcD))))) {
            VL_WRITEF_NX("        MemSrcD:     %b vs %b\n",0,
                         5,__Vtask_D_stage_tb__DOT__run_test__0__exp_MemSrcD,
                         5,((0x4000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                             ? ((0x2000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                 ? 0U : ((0x1000U & 
                                          vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                          ? 1U : 2U))
                             : ((0x2000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                 ? ((0x1000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                     ? 0U : 4U) : (
                                                   (0x1000U 
                                                    & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                    ? 8U
                                                    : 0x10U))));
        }
        if (VL_UNLIKELY(((0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_o_debug_data)))) {
            VL_WRITEF_NX("        Register %2#: %x vs %x\n",0,
                         5,vlSelfRef.D_stage_tb__DOT__i_debug_addr,
                         32,__Vtask_D_stage_tb__DOT__run_test__0__exp_o_debug_data,
                         32,vlSelfRef.D_stage_tb__DOT__o_debug_data);
        }
        vlSelfRef.D_stage_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.D_stage_tb__DOT__fail_count);
    }
    vlSelfRef.D_stage_tb__DOT__rst = 0U;
    VL_WRITEF_NX("\n----------- R-type Instructions -----------\n",0);
    vlSelfRef.D_stage_tb__DOT__InstrF = 0xa081b3U;
    vlSelfRef.D_stage_tb__DOT__pcF = 0U;
    vlSelfRef.D_stage_tb__DOT__PCPlus4F = 4U;
    vlSelfRef.D_stage_tb__DOT__StallD = 0U;
    vlSelfRef.D_stage_tb__DOT__FlushD = 0U;
    vlSelfRef.D_stage_tb__DOT__ZeroE = 0U;
    vlSelfRef.D_stage_tb__DOT__BranchE = 0U;
    vlSelfRef.D_stage_tb__DOT__JumpE = 0U;
    vlSelfRef.D_stage_tb__DOT__ALUResultEb0 = 0U;
    vlSelfRef.D_stage_tb__DOT__RdW = 0U;
    vlSelfRef.D_stage_tb__DOT__RegWriteW = 0U;
    vlSelfRef.D_stage_tb__DOT__ResultW = 0U;
    vlSelfRef.D_stage_tb__DOT__mask_Read1D = 0xffffffffU;
    vlSelfRef.D_stage_tb__DOT__mask_Read2D = 0xffffffffU;
    vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD = 3U;
    vlSelfRef.D_stage_tb__DOT__mask_ALUControlD = 0xfU;
    vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD = 3U;
    vlSelfRef.D_stage_tb__DOT__mask_Rs1D = 0x1fU;
    vlSelfRef.D_stage_tb__DOT__mask_Rs2D = 0x1fU;
    vlSelfRef.D_stage_tb__DOT__mask_RdD = 0U;
    vlSelfRef.D_stage_tb__DOT__mask_ImmExtD = 0U;
    vlSelfRef.D_stage_tb__DOT__mask_MemSrcD = 0U;
    vlSelfRef.D_stage_tb__DOT__mask_o_debug_data = 0U;
    vlSelfRef.D_stage_tb__DOT__i_debug_addr = 1U;
    __Vtask_D_stage_tb__DOT__run_test__1__test_name = 
        std::string{"R-type ADD"};
    __Vtask_D_stage_tb__DOT__run_test__1__exp_o_debug_data 
        = vlSelfRef.D_stage_tb__DOT____Vxrand_h8794da3b__5;
    __Vtask_D_stage_tb__DOT__run_test__1__exp_MemSrcD 
        = vlSelfRef.D_stage_tb__DOT____Vxrand_h87975fad__1;
    __Vtask_D_stage_tb__DOT__run_test__1__exp_Ebreak = 0U;
    __Vtask_D_stage_tb__DOT__run_test__1__exp_Ecall = 0U;
    __Vtask_D_stage_tb__DOT__run_test__1__exp_PCPlus4D = 4U;
    __Vtask_D_stage_tb__DOT__run_test__1__exp_ImmExtD 
        = vlSelfRef.D_stage_tb__DOT____Vxrand_h8794da3b__4;
    __Vtask_D_stage_tb__DOT__run_test__1__exp_RdD = 3U;
    __Vtask_D_stage_tb__DOT__run_test__1__exp_Rs2D = 0xaU;
    __Vtask_D_stage_tb__DOT__run_test__1__exp_Rs1D = 1U;
    __Vtask_D_stage_tb__DOT__run_test__1__exp_pcD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__1__exp_ALUSrcD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__1__exp_ALUControlD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__1__exp_BranchD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__1__exp_JumpD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__1__exp_MemWriteD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__1__exp_ResultSrcD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__1__exp_RegWriteD = 1U;
    __Vtask_D_stage_tb__DOT__run_test__1__exp_Read2D = 0U;
    __Vtask_D_stage_tb__DOT__run_test__1__exp_Read1D = 0U;
    __Vtask_D_stage_tb__DOT__run_test__1__in_mask_o_debug_data 
        = vlSelfRef.D_stage_tb__DOT__mask_o_debug_data;
    __Vtask_D_stage_tb__DOT__run_test__1__in_mask_MemSrcD 
        = vlSelfRef.D_stage_tb__DOT__mask_MemSrcD;
    __Vtask_D_stage_tb__DOT__run_test__1__in_mask_ImmExtD 
        = vlSelfRef.D_stage_tb__DOT__mask_ImmExtD;
    __Vtask_D_stage_tb__DOT__run_test__1__in_mask_RdD 
        = vlSelfRef.D_stage_tb__DOT__mask_RdD;
    __Vtask_D_stage_tb__DOT__run_test__1__in_mask_Rs2D 
        = vlSelfRef.D_stage_tb__DOT__mask_Rs2D;
    __Vtask_D_stage_tb__DOT__run_test__1__in_mask_Rs1D 
        = vlSelfRef.D_stage_tb__DOT__mask_Rs1D;
    __Vtask_D_stage_tb__DOT__run_test__1__in_mask_ALUSrcD 
        = vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD;
    __Vtask_D_stage_tb__DOT__run_test__1__in_mask_ALUControlD 
        = vlSelfRef.D_stage_tb__DOT__mask_ALUControlD;
    __Vtask_D_stage_tb__DOT__run_test__1__in_mask_ResultSrcD 
        = vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD;
    __Vtask_D_stage_tb__DOT__run_test__1__in_mask_Read2D 
        = vlSelfRef.D_stage_tb__DOT__mask_Read2D;
    __Vtask_D_stage_tb__DOT__run_test__1__in_mask_Read1D 
        = vlSelfRef.D_stage_tb__DOT__mask_Read1D;
    __Vtask_D_stage_tb__DOT__run_test__1__in_i_debug_addr 
        = vlSelfRef.D_stage_tb__DOT__i_debug_addr;
    __Vtask_D_stage_tb__DOT__run_test__1__in_ResultW 
        = vlSelfRef.D_stage_tb__DOT__ResultW;
    __Vtask_D_stage_tb__DOT__run_test__1__in_RegWriteW 
        = vlSelfRef.D_stage_tb__DOT__RegWriteW;
    __Vtask_D_stage_tb__DOT__run_test__1__in_RdW = vlSelfRef.D_stage_tb__DOT__RdW;
    __Vtask_D_stage_tb__DOT__run_test__1__in_ALUResultEb0 
        = vlSelfRef.D_stage_tb__DOT__ALUResultEb0;
    __Vtask_D_stage_tb__DOT__run_test__1__in_JumpE 
        = vlSelfRef.D_stage_tb__DOT__JumpE;
    __Vtask_D_stage_tb__DOT__run_test__1__in_BranchE 
        = vlSelfRef.D_stage_tb__DOT__BranchE;
    __Vtask_D_stage_tb__DOT__run_test__1__in_ZeroE 
        = vlSelfRef.D_stage_tb__DOT__ZeroE;
    __Vtask_D_stage_tb__DOT__run_test__1__in_FlushD 
        = vlSelfRef.D_stage_tb__DOT__FlushD;
    __Vtask_D_stage_tb__DOT__run_test__1__in_StallD 
        = vlSelfRef.D_stage_tb__DOT__StallD;
    __Vtask_D_stage_tb__DOT__run_test__1__in_PCPlus4F 
        = vlSelfRef.D_stage_tb__DOT__PCPlus4F;
    __Vtask_D_stage_tb__DOT__run_test__1__in_pcF = vlSelfRef.D_stage_tb__DOT__pcF;
    __Vtask_D_stage_tb__DOT__run_test__1__in_InstrF 
        = vlSelfRef.D_stage_tb__DOT__InstrF;
    vlSelfRef.D_stage_tb__DOT__test_num = ((IData)(1U) 
                                           + vlSelfRef.D_stage_tb__DOT__test_num);
    vlSelfRef.D_stage_tb__DOT__InstrF = __Vtask_D_stage_tb__DOT__run_test__1__in_InstrF;
    vlSelfRef.D_stage_tb__DOT__pcF = __Vtask_D_stage_tb__DOT__run_test__1__in_pcF;
    vlSelfRef.D_stage_tb__DOT__PCPlus4F = __Vtask_D_stage_tb__DOT__run_test__1__in_PCPlus4F;
    vlSelfRef.D_stage_tb__DOT__StallD = __Vtask_D_stage_tb__DOT__run_test__1__in_StallD;
    vlSelfRef.D_stage_tb__DOT__FlushD = __Vtask_D_stage_tb__DOT__run_test__1__in_FlushD;
    vlSelfRef.D_stage_tb__DOT__ZeroE = __Vtask_D_stage_tb__DOT__run_test__1__in_ZeroE;
    vlSelfRef.D_stage_tb__DOT__BranchE = __Vtask_D_stage_tb__DOT__run_test__1__in_BranchE;
    vlSelfRef.D_stage_tb__DOT__JumpE = __Vtask_D_stage_tb__DOT__run_test__1__in_JumpE;
    vlSelfRef.D_stage_tb__DOT__ALUResultEb0 = __Vtask_D_stage_tb__DOT__run_test__1__in_ALUResultEb0;
    vlSelfRef.D_stage_tb__DOT__RdW = __Vtask_D_stage_tb__DOT__run_test__1__in_RdW;
    vlSelfRef.D_stage_tb__DOT__RegWriteW = __Vtask_D_stage_tb__DOT__run_test__1__in_RegWriteW;
    vlSelfRef.D_stage_tb__DOT__ResultW = __Vtask_D_stage_tb__DOT__run_test__1__in_ResultW;
    vlSelfRef.D_stage_tb__DOT__i_debug_addr = __Vtask_D_stage_tb__DOT__run_test__1__in_i_debug_addr;
    vlSelfRef.D_stage_tb__DOT__mask_Read1D = __Vtask_D_stage_tb__DOT__run_test__1__in_mask_Read1D;
    vlSelfRef.D_stage_tb__DOT__mask_Read2D = __Vtask_D_stage_tb__DOT__run_test__1__in_mask_Read2D;
    vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD = __Vtask_D_stage_tb__DOT__run_test__1__in_mask_ResultSrcD;
    vlSelfRef.D_stage_tb__DOT__mask_ALUControlD = __Vtask_D_stage_tb__DOT__run_test__1__in_mask_ALUControlD;
    vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD = __Vtask_D_stage_tb__DOT__run_test__1__in_mask_ALUSrcD;
    vlSelfRef.D_stage_tb__DOT__mask_Rs1D = __Vtask_D_stage_tb__DOT__run_test__1__in_mask_Rs1D;
    vlSelfRef.D_stage_tb__DOT__mask_Rs2D = __Vtask_D_stage_tb__DOT__run_test__1__in_mask_Rs2D;
    vlSelfRef.D_stage_tb__DOT__mask_RdD = __Vtask_D_stage_tb__DOT__run_test__1__in_mask_RdD;
    vlSelfRef.D_stage_tb__DOT__mask_ImmExtD = __Vtask_D_stage_tb__DOT__run_test__1__in_mask_ImmExtD;
    vlSelfRef.D_stage_tb__DOT__mask_MemSrcD = __Vtask_D_stage_tb__DOT__run_test__1__in_mask_MemSrcD;
    vlSelfRef.D_stage_tb__DOT__mask_o_debug_data = __Vtask_D_stage_tb__DOT__run_test__1__in_mask_o_debug_data;
    co_await vlSelfRef.__VtrigSched_h1a3cedb5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge D_stage_tb.clk)", 
                                                         "../../01_bench/D_stage_tb.sv", 
                                                         223);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/D_stage_tb.sv", 
                                         223);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((((((((((((((((((((((vlSelfRef.D_stage_tb__DOT__Read1D 
                                       & vlSelfRef.D_stage_tb__DOT__mask_Read1D) 
                                      == (__Vtask_D_stage_tb__DOT__run_test__1__exp_Read1D 
                                          & vlSelfRef.D_stage_tb__DOT__mask_Read1D)) 
                                     & ((vlSelfRef.D_stage_tb__DOT__Read2D 
                                         & vlSelfRef.D_stage_tb__DOT__mask_Read2D) 
                                        == (__Vtask_D_stage_tb__DOT__run_test__1__exp_Read2D 
                                            & vlSelfRef.D_stage_tb__DOT__mask_Read2D))) 
                                    & ((1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                              >> 0xcU)) 
                                       == (IData)(__Vtask_D_stage_tb__DOT__run_test__1__exp_RegWriteD))) 
                                   & ((((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                        >> 4U) & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD)) 
                                      == ((IData)(__Vtask_D_stage_tb__DOT__run_test__1__exp_ResultSrcD) 
                                          & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD)))) 
                                  & ((1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                            >> 6U)) 
                                     == (IData)(__Vtask_D_stage_tb__DOT__run_test__1__exp_MemWriteD))) 
                                 & ((1U & (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls)) 
                                    == (IData)(__Vtask_D_stage_tb__DOT__run_test__1__exp_JumpD))) 
                                & ((1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                          >> 3U)) == (IData)(__Vtask_D_stage_tb__DOT__run_test__1__exp_BranchD))) 
                               & (((IData)(vlSelfRef.D_stage_tb__DOT__ALUControlD) 
                                   & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUControlD)) 
                                  == ((IData)(__Vtask_D_stage_tb__DOT__run_test__1__exp_ALUControlD) 
                                      & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUControlD)))) 
                              & ((((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                   >> 7U) & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD)) 
                                 == ((IData)(__Vtask_D_stage_tb__DOT__run_test__1__exp_ALUSrcD) 
                                     & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD)))) 
                             & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[1U] 
                                == __Vtask_D_stage_tb__DOT__run_test__1__exp_pcD)) 
                            & ((((vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                  << 0x11U) | (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                               >> 0xfU)) 
                                & (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs1D)) 
                               == ((IData)(__Vtask_D_stage_tb__DOT__run_test__1__exp_Rs1D) 
                                   & (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs1D)))) 
                           & ((((vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                 << 0xcU) | (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                             >> 0x14U)) 
                               & (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs2D)) 
                              == ((IData)(__Vtask_D_stage_tb__DOT__run_test__1__exp_Rs2D) 
                                  & (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs2D)))) 
                          & ((((vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                << 0x19U) | (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                             >> 7U)) 
                              & (IData)(vlSelfRef.D_stage_tb__DOT__mask_RdD)) 
                             == ((IData)(__Vtask_D_stage_tb__DOT__run_test__1__exp_RdD) 
                                 & (IData)(vlSelfRef.D_stage_tb__DOT__mask_RdD)))) 
                         & ((vlSelfRef.D_stage_tb__DOT__ImmExtD 
                             & vlSelfRef.D_stage_tb__DOT__mask_ImmExtD) 
                            == (__Vtask_D_stage_tb__DOT__run_test__1__exp_ImmExtD 
                                & vlSelfRef.D_stage_tb__DOT__mask_ImmExtD))) 
                        & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[0U] 
                           == __Vtask_D_stage_tb__DOT__run_test__1__exp_PCPlus4D)) 
                       & ((IData)((0x73U == (0xfff0007fU 
                                             & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U]))) 
                          == (IData)(__Vtask_D_stage_tb__DOT__run_test__1__exp_Ecall))) 
                      & ((((0x4000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                            ? ((0x2000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                ? 0U : ((0x1000U & 
                                         vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                         ? 1U : 2U))
                            : ((0x2000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                ? ((0x1000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                    ? 0U : 4U) : ((0x1000U 
                                                   & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                   ? 8U
                                                   : 0x10U))) 
                          & (IData)(vlSelfRef.D_stage_tb__DOT__mask_MemSrcD)) 
                         == ((IData)(__Vtask_D_stage_tb__DOT__run_test__1__exp_MemSrcD) 
                             & (IData)(vlSelfRef.D_stage_tb__DOT__mask_MemSrcD)))) 
                     & ((vlSelfRef.D_stage_tb__DOT__o_debug_data 
                         & vlSelfRef.D_stage_tb__DOT__mask_o_debug_data) 
                        == (__Vtask_D_stage_tb__DOT__run_test__1__exp_o_debug_data 
                            & vlSelfRef.D_stage_tb__DOT__mask_o_debug_data))) 
                    & ((IData)((0x100073U == (0xfff0007fU 
                                              & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U]))) 
                       == (IData)(__Vtask_D_stage_tb__DOT__run_test__1__exp_Ebreak)))))) {
        VL_WRITEF_NX("%02d \342\234\205 %@\n    Instruction: %x\n    Register x%2#: %x\n",0,
                     32,vlSelfRef.D_stage_tb__DOT__test_num,
                     -1,&(__Vtask_D_stage_tb__DOT__run_test__1__test_name),
                     32,vlSelfRef.D_stage_tb__DOT__InstrF,
                     5,(IData)(vlSelfRef.D_stage_tb__DOT__i_debug_addr),
                     32,vlSelfRef.D_stage_tb__DOT__o_debug_data);
        vlSelfRef.D_stage_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.D_stage_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214 %@\n    Instruction: %b\n    Inputs:\n        pcF=%x PCPlus4F=%x\n        StallD=%b FlushD=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n        RdW=%2# RegWriteW=%b ResultW=%x\n    Bit Mask:\n        mask_Read1D=%b\n        mask_Read2D=%b\n        mask_ResultSrcD=%b\n        mask_ALUControlD=%b\n        mask_ALUSrcD=%b\n        mask_Rs1D=%b\n        mask_Rs2D=%b\n        mask_RdD=%b\n        mask_ImmExtD=%b\n        mask_MemSrcD=%b\n    Expected vs Actual:\n",0,
                     32,vlSelfRef.D_stage_tb__DOT__test_num,
                     -1,&(__Vtask_D_stage_tb__DOT__run_test__1__test_name),
                     32,vlSelfRef.D_stage_tb__DOT__InstrF,
                     32,vlSelfRef.D_stage_tb__DOT__pcF,
                     32,vlSelfRef.D_stage_tb__DOT__PCPlus4F,
                     1,(IData)(vlSelfRef.D_stage_tb__DOT__StallD),
                     1,vlSelfRef.D_stage_tb__DOT__FlushD,
                     1,(IData)(vlSelfRef.D_stage_tb__DOT__ZeroE),
                     1,vlSelfRef.D_stage_tb__DOT__BranchE,
                     1,(IData)(vlSelfRef.D_stage_tb__DOT__JumpE),
                     1,vlSelfRef.D_stage_tb__DOT__ALUResultEb0,
                     5,(IData)(vlSelfRef.D_stage_tb__DOT__RdW),
                     1,vlSelfRef.D_stage_tb__DOT__RegWriteW,
                     32,vlSelfRef.D_stage_tb__DOT__ResultW,
                     1,(0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_Read1D),
                     1,(0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_Read2D),
                     1,(3U == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD)),
                     1,(0xfU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUControlD)),
                     1,(3U == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD)),
                     1,(0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs1D)),
                     1,(0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs2D)),
                     1,(0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_RdD)),
                     1,(0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_ImmExtD),
                     1,(0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_MemSrcD)));
        if (VL_UNLIKELY(((0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_Read1D)))) {
            VL_WRITEF_NX("        Read1D:      %x vs %x\n",0,
                         32,__Vtask_D_stage_tb__DOT__run_test__1__exp_Read1D,
                         32,vlSelfRef.D_stage_tb__DOT__Read1D);
        }
        if (VL_UNLIKELY(((0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_Read2D)))) {
            VL_WRITEF_NX("        Read2D:      %x vs %x\n",0,
                         32,__Vtask_D_stage_tb__DOT__run_test__1__exp_Read2D,
                         32,vlSelfRef.D_stage_tb__DOT__Read2D);
        }
        VL_WRITEF_NX("        RegWriteD:   %b vs %b\n",0,
                     1,__Vtask_D_stage_tb__DOT__run_test__1__exp_RegWriteD,
                     1,(1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                              >> 0xcU)));
        if (VL_UNLIKELY(((3U == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD))))) {
            VL_WRITEF_NX("        ResultSrcD:  %b vs %b\n",0,
                         2,__Vtask_D_stage_tb__DOT__run_test__1__exp_ResultSrcD,
                         2,(3U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                  >> 4U)));
        }
        VL_WRITEF_NX("        MemWriteD:   %b vs %b\n        JumpD:       %b vs %b\n        BranchD:     %b vs %b\n",0,
                     1,__Vtask_D_stage_tb__DOT__run_test__1__exp_MemWriteD,
                     1,(1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                              >> 6U)),1,(IData)(__Vtask_D_stage_tb__DOT__run_test__1__exp_JumpD),
                     1,(1U & (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls)),
                     1,(IData)(__Vtask_D_stage_tb__DOT__run_test__1__exp_BranchD),
                     1,(1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                              >> 3U)));
        if (VL_UNLIKELY(((0xfU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUControlD))))) {
            VL_WRITEF_NX("        ALUControlD: %b vs %b\n",0,
                         4,__Vtask_D_stage_tb__DOT__run_test__1__exp_ALUControlD,
                         4,(IData)(vlSelfRef.D_stage_tb__DOT__ALUControlD));
        }
        if (VL_UNLIKELY(((3U == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD))))) {
            VL_WRITEF_NX("        ALUSrcD:     %b vs %b\n",0,
                         2,__Vtask_D_stage_tb__DOT__run_test__1__exp_ALUSrcD,
                         2,(3U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                  >> 7U)));
        }
        VL_WRITEF_NX("        pcD:         %x vs %x\n",0,
                     32,__Vtask_D_stage_tb__DOT__run_test__1__exp_pcD,
                     32,vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[1U]);
        if (VL_UNLIKELY(((0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs1D))))) {
            VL_WRITEF_NX("        Rs1D:        %2# vs %2#\n",0,
                         5,__Vtask_D_stage_tb__DOT__run_test__1__exp_Rs1D,
                         5,(0x1fU & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                     >> 0xfU)));
        }
        if (VL_UNLIKELY(((0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs2D))))) {
            VL_WRITEF_NX("        Rs2D:        %2# vs %2#\n",0,
                         5,__Vtask_D_stage_tb__DOT__run_test__1__exp_Rs2D,
                         5,(0x1fU & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                     >> 0x14U)));
        }
        if (VL_UNLIKELY(((0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_RdD))))) {
            VL_WRITEF_NX("        RdD:         %2# vs %2#\n",0,
                         5,__Vtask_D_stage_tb__DOT__run_test__1__exp_RdD,
                         5,(0x1fU & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                     >> 7U)));
        }
        if (VL_UNLIKELY(((0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_ImmExtD)))) {
            VL_WRITEF_NX("        ImmExtD:     %x vs %x\n",0,
                         32,__Vtask_D_stage_tb__DOT__run_test__1__exp_ImmExtD,
                         32,vlSelfRef.D_stage_tb__DOT__ImmExtD);
        }
        VL_WRITEF_NX("        PCPlus4D:    %x vs %x\n        Ecall:       %b vs %b\n        Ebreak:      %b vs %b\n",0,
                     32,__Vtask_D_stage_tb__DOT__run_test__1__exp_PCPlus4D,
                     32,vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[0U],
                     1,(IData)(__Vtask_D_stage_tb__DOT__run_test__1__exp_Ecall),
                     1,(IData)((0x73U == (0xfff0007fU 
                                          & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U]))),
                     1,__Vtask_D_stage_tb__DOT__run_test__1__exp_Ebreak,
                     1,(IData)((0x100073U == (0xfff0007fU 
                                              & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U]))));
        if (VL_UNLIKELY(((0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_MemSrcD))))) {
            VL_WRITEF_NX("        MemSrcD:     %b vs %b\n",0,
                         5,__Vtask_D_stage_tb__DOT__run_test__1__exp_MemSrcD,
                         5,((0x4000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                             ? ((0x2000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                 ? 0U : ((0x1000U & 
                                          vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                          ? 1U : 2U))
                             : ((0x2000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                 ? ((0x1000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                     ? 0U : 4U) : (
                                                   (0x1000U 
                                                    & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                    ? 8U
                                                    : 0x10U))));
        }
        if (VL_UNLIKELY(((0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_o_debug_data)))) {
            VL_WRITEF_NX("        Register %2#: %x vs %x\n",0,
                         5,vlSelfRef.D_stage_tb__DOT__i_debug_addr,
                         32,__Vtask_D_stage_tb__DOT__run_test__1__exp_o_debug_data,
                         32,vlSelfRef.D_stage_tb__DOT__o_debug_data);
        }
        vlSelfRef.D_stage_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.D_stage_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n----------- I-type Instructions -----------\n",0);
    vlSelfRef.D_stage_tb__DOT__InstrF = 0x1b08213U;
    vlSelfRef.D_stage_tb__DOT__pcF = 4U;
    vlSelfRef.D_stage_tb__DOT__PCPlus4F = 8U;
    vlSelfRef.D_stage_tb__DOT__mask_Read1D = 0xffffffffU;
    vlSelfRef.D_stage_tb__DOT__mask_Read2D = 0U;
    vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD = 3U;
    vlSelfRef.D_stage_tb__DOT__mask_ALUControlD = 0xfU;
    vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD = 3U;
    vlSelfRef.D_stage_tb__DOT__mask_Rs1D = 0x1fU;
    vlSelfRef.D_stage_tb__DOT__mask_Rs2D = 0U;
    vlSelfRef.D_stage_tb__DOT__mask_RdD = 0x1fU;
    vlSelfRef.D_stage_tb__DOT__mask_ImmExtD = 0xffffffffU;
    vlSelfRef.D_stage_tb__DOT__mask_MemSrcD = 0U;
    vlSelfRef.D_stage_tb__DOT__mask_o_debug_data = 0U;
    vlSelfRef.D_stage_tb__DOT__i_debug_addr = 1U;
    __Vtask_D_stage_tb__DOT__run_test__2__test_name = 
        std::string{"I-type ADDI"};
    __Vtask_D_stage_tb__DOT__run_test__2__exp_o_debug_data 
        = vlSelfRef.D_stage_tb__DOT____Vxrand_h8794da3b__7;
    __Vtask_D_stage_tb__DOT__run_test__2__exp_MemSrcD 
        = vlSelfRef.D_stage_tb__DOT____Vxrand_h87975fad__3;
    __Vtask_D_stage_tb__DOT__run_test__2__exp_Ebreak = 0U;
    __Vtask_D_stage_tb__DOT__run_test__2__exp_Ecall = 0U;
    __Vtask_D_stage_tb__DOT__run_test__2__exp_PCPlus4D = 8U;
    __Vtask_D_stage_tb__DOT__run_test__2__exp_ImmExtD = 0x1bU;
    __Vtask_D_stage_tb__DOT__run_test__2__exp_RdD = 4U;
    __Vtask_D_stage_tb__DOT__run_test__2__exp_Rs2D 
        = vlSelfRef.D_stage_tb__DOT____Vxrand_h87975fad__2;
    __Vtask_D_stage_tb__DOT__run_test__2__exp_Rs1D = 1U;
    __Vtask_D_stage_tb__DOT__run_test__2__exp_pcD = 4U;
    __Vtask_D_stage_tb__DOT__run_test__2__exp_ALUSrcD = 1U;
    __Vtask_D_stage_tb__DOT__run_test__2__exp_ALUControlD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__2__exp_BranchD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__2__exp_JumpD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__2__exp_MemWriteD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__2__exp_ResultSrcD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__2__exp_RegWriteD = 1U;
    __Vtask_D_stage_tb__DOT__run_test__2__exp_Read2D 
        = vlSelfRef.D_stage_tb__DOT____Vxrand_h8794da3b__6;
    __Vtask_D_stage_tb__DOT__run_test__2__exp_Read1D = 0U;
    __Vtask_D_stage_tb__DOT__run_test__2__in_mask_o_debug_data 
        = vlSelfRef.D_stage_tb__DOT__mask_o_debug_data;
    __Vtask_D_stage_tb__DOT__run_test__2__in_mask_MemSrcD 
        = vlSelfRef.D_stage_tb__DOT__mask_MemSrcD;
    __Vtask_D_stage_tb__DOT__run_test__2__in_mask_ImmExtD 
        = vlSelfRef.D_stage_tb__DOT__mask_ImmExtD;
    __Vtask_D_stage_tb__DOT__run_test__2__in_mask_RdD 
        = vlSelfRef.D_stage_tb__DOT__mask_RdD;
    __Vtask_D_stage_tb__DOT__run_test__2__in_mask_Rs2D 
        = vlSelfRef.D_stage_tb__DOT__mask_Rs2D;
    __Vtask_D_stage_tb__DOT__run_test__2__in_mask_Rs1D 
        = vlSelfRef.D_stage_tb__DOT__mask_Rs1D;
    __Vtask_D_stage_tb__DOT__run_test__2__in_mask_ALUSrcD 
        = vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD;
    __Vtask_D_stage_tb__DOT__run_test__2__in_mask_ALUControlD 
        = vlSelfRef.D_stage_tb__DOT__mask_ALUControlD;
    __Vtask_D_stage_tb__DOT__run_test__2__in_mask_ResultSrcD 
        = vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD;
    __Vtask_D_stage_tb__DOT__run_test__2__in_mask_Read2D 
        = vlSelfRef.D_stage_tb__DOT__mask_Read2D;
    __Vtask_D_stage_tb__DOT__run_test__2__in_mask_Read1D 
        = vlSelfRef.D_stage_tb__DOT__mask_Read1D;
    __Vtask_D_stage_tb__DOT__run_test__2__in_i_debug_addr 
        = vlSelfRef.D_stage_tb__DOT__i_debug_addr;
    __Vtask_D_stage_tb__DOT__run_test__2__in_ResultW 
        = vlSelfRef.D_stage_tb__DOT__ResultW;
    __Vtask_D_stage_tb__DOT__run_test__2__in_RegWriteW 
        = vlSelfRef.D_stage_tb__DOT__RegWriteW;
    __Vtask_D_stage_tb__DOT__run_test__2__in_RdW = vlSelfRef.D_stage_tb__DOT__RdW;
    __Vtask_D_stage_tb__DOT__run_test__2__in_ALUResultEb0 
        = vlSelfRef.D_stage_tb__DOT__ALUResultEb0;
    __Vtask_D_stage_tb__DOT__run_test__2__in_JumpE 
        = vlSelfRef.D_stage_tb__DOT__JumpE;
    __Vtask_D_stage_tb__DOT__run_test__2__in_BranchE 
        = vlSelfRef.D_stage_tb__DOT__BranchE;
    __Vtask_D_stage_tb__DOT__run_test__2__in_ZeroE 
        = vlSelfRef.D_stage_tb__DOT__ZeroE;
    __Vtask_D_stage_tb__DOT__run_test__2__in_FlushD 
        = vlSelfRef.D_stage_tb__DOT__FlushD;
    __Vtask_D_stage_tb__DOT__run_test__2__in_StallD 
        = vlSelfRef.D_stage_tb__DOT__StallD;
    __Vtask_D_stage_tb__DOT__run_test__2__in_PCPlus4F 
        = vlSelfRef.D_stage_tb__DOT__PCPlus4F;
    __Vtask_D_stage_tb__DOT__run_test__2__in_pcF = vlSelfRef.D_stage_tb__DOT__pcF;
    __Vtask_D_stage_tb__DOT__run_test__2__in_InstrF 
        = vlSelfRef.D_stage_tb__DOT__InstrF;
    vlSelfRef.D_stage_tb__DOT__test_num = ((IData)(1U) 
                                           + vlSelfRef.D_stage_tb__DOT__test_num);
    vlSelfRef.D_stage_tb__DOT__InstrF = __Vtask_D_stage_tb__DOT__run_test__2__in_InstrF;
    vlSelfRef.D_stage_tb__DOT__pcF = __Vtask_D_stage_tb__DOT__run_test__2__in_pcF;
    vlSelfRef.D_stage_tb__DOT__PCPlus4F = __Vtask_D_stage_tb__DOT__run_test__2__in_PCPlus4F;
    vlSelfRef.D_stage_tb__DOT__StallD = __Vtask_D_stage_tb__DOT__run_test__2__in_StallD;
    vlSelfRef.D_stage_tb__DOT__FlushD = __Vtask_D_stage_tb__DOT__run_test__2__in_FlushD;
    vlSelfRef.D_stage_tb__DOT__ZeroE = __Vtask_D_stage_tb__DOT__run_test__2__in_ZeroE;
    vlSelfRef.D_stage_tb__DOT__BranchE = __Vtask_D_stage_tb__DOT__run_test__2__in_BranchE;
    vlSelfRef.D_stage_tb__DOT__JumpE = __Vtask_D_stage_tb__DOT__run_test__2__in_JumpE;
    vlSelfRef.D_stage_tb__DOT__ALUResultEb0 = __Vtask_D_stage_tb__DOT__run_test__2__in_ALUResultEb0;
    vlSelfRef.D_stage_tb__DOT__RdW = __Vtask_D_stage_tb__DOT__run_test__2__in_RdW;
    vlSelfRef.D_stage_tb__DOT__RegWriteW = __Vtask_D_stage_tb__DOT__run_test__2__in_RegWriteW;
    vlSelfRef.D_stage_tb__DOT__ResultW = __Vtask_D_stage_tb__DOT__run_test__2__in_ResultW;
    vlSelfRef.D_stage_tb__DOT__i_debug_addr = __Vtask_D_stage_tb__DOT__run_test__2__in_i_debug_addr;
    vlSelfRef.D_stage_tb__DOT__mask_Read1D = __Vtask_D_stage_tb__DOT__run_test__2__in_mask_Read1D;
    vlSelfRef.D_stage_tb__DOT__mask_Read2D = __Vtask_D_stage_tb__DOT__run_test__2__in_mask_Read2D;
    vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD = __Vtask_D_stage_tb__DOT__run_test__2__in_mask_ResultSrcD;
    vlSelfRef.D_stage_tb__DOT__mask_ALUControlD = __Vtask_D_stage_tb__DOT__run_test__2__in_mask_ALUControlD;
    vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD = __Vtask_D_stage_tb__DOT__run_test__2__in_mask_ALUSrcD;
    vlSelfRef.D_stage_tb__DOT__mask_Rs1D = __Vtask_D_stage_tb__DOT__run_test__2__in_mask_Rs1D;
    vlSelfRef.D_stage_tb__DOT__mask_Rs2D = __Vtask_D_stage_tb__DOT__run_test__2__in_mask_Rs2D;
    vlSelfRef.D_stage_tb__DOT__mask_RdD = __Vtask_D_stage_tb__DOT__run_test__2__in_mask_RdD;
    vlSelfRef.D_stage_tb__DOT__mask_ImmExtD = __Vtask_D_stage_tb__DOT__run_test__2__in_mask_ImmExtD;
    vlSelfRef.D_stage_tb__DOT__mask_MemSrcD = __Vtask_D_stage_tb__DOT__run_test__2__in_mask_MemSrcD;
    vlSelfRef.D_stage_tb__DOT__mask_o_debug_data = __Vtask_D_stage_tb__DOT__run_test__2__in_mask_o_debug_data;
    co_await vlSelfRef.__VtrigSched_h1a3cedb5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge D_stage_tb.clk)", 
                                                         "../../01_bench/D_stage_tb.sv", 
                                                         223);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/D_stage_tb.sv", 
                                         223);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((((((((((((((((((((((vlSelfRef.D_stage_tb__DOT__Read1D 
                                       & vlSelfRef.D_stage_tb__DOT__mask_Read1D) 
                                      == (__Vtask_D_stage_tb__DOT__run_test__2__exp_Read1D 
                                          & vlSelfRef.D_stage_tb__DOT__mask_Read1D)) 
                                     & ((vlSelfRef.D_stage_tb__DOT__Read2D 
                                         & vlSelfRef.D_stage_tb__DOT__mask_Read2D) 
                                        == (__Vtask_D_stage_tb__DOT__run_test__2__exp_Read2D 
                                            & vlSelfRef.D_stage_tb__DOT__mask_Read2D))) 
                                    & ((1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                              >> 0xcU)) 
                                       == (IData)(__Vtask_D_stage_tb__DOT__run_test__2__exp_RegWriteD))) 
                                   & ((((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                        >> 4U) & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD)) 
                                      == ((IData)(__Vtask_D_stage_tb__DOT__run_test__2__exp_ResultSrcD) 
                                          & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD)))) 
                                  & ((1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                            >> 6U)) 
                                     == (IData)(__Vtask_D_stage_tb__DOT__run_test__2__exp_MemWriteD))) 
                                 & ((1U & (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls)) 
                                    == (IData)(__Vtask_D_stage_tb__DOT__run_test__2__exp_JumpD))) 
                                & ((1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                          >> 3U)) == (IData)(__Vtask_D_stage_tb__DOT__run_test__2__exp_BranchD))) 
                               & (((IData)(vlSelfRef.D_stage_tb__DOT__ALUControlD) 
                                   & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUControlD)) 
                                  == ((IData)(__Vtask_D_stage_tb__DOT__run_test__2__exp_ALUControlD) 
                                      & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUControlD)))) 
                              & ((((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                   >> 7U) & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD)) 
                                 == ((IData)(__Vtask_D_stage_tb__DOT__run_test__2__exp_ALUSrcD) 
                                     & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD)))) 
                             & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[1U] 
                                == __Vtask_D_stage_tb__DOT__run_test__2__exp_pcD)) 
                            & ((((vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                  << 0x11U) | (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                               >> 0xfU)) 
                                & (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs1D)) 
                               == ((IData)(__Vtask_D_stage_tb__DOT__run_test__2__exp_Rs1D) 
                                   & (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs1D)))) 
                           & ((((vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                 << 0xcU) | (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                             >> 0x14U)) 
                               & (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs2D)) 
                              == ((IData)(__Vtask_D_stage_tb__DOT__run_test__2__exp_Rs2D) 
                                  & (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs2D)))) 
                          & ((((vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                << 0x19U) | (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                             >> 7U)) 
                              & (IData)(vlSelfRef.D_stage_tb__DOT__mask_RdD)) 
                             == ((IData)(__Vtask_D_stage_tb__DOT__run_test__2__exp_RdD) 
                                 & (IData)(vlSelfRef.D_stage_tb__DOT__mask_RdD)))) 
                         & ((vlSelfRef.D_stage_tb__DOT__ImmExtD 
                             & vlSelfRef.D_stage_tb__DOT__mask_ImmExtD) 
                            == (__Vtask_D_stage_tb__DOT__run_test__2__exp_ImmExtD 
                                & vlSelfRef.D_stage_tb__DOT__mask_ImmExtD))) 
                        & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[0U] 
                           == __Vtask_D_stage_tb__DOT__run_test__2__exp_PCPlus4D)) 
                       & ((IData)((0x73U == (0xfff0007fU 
                                             & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U]))) 
                          == (IData)(__Vtask_D_stage_tb__DOT__run_test__2__exp_Ecall))) 
                      & ((((0x4000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                            ? ((0x2000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                ? 0U : ((0x1000U & 
                                         vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                         ? 1U : 2U))
                            : ((0x2000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                ? ((0x1000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                    ? 0U : 4U) : ((0x1000U 
                                                   & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                   ? 8U
                                                   : 0x10U))) 
                          & (IData)(vlSelfRef.D_stage_tb__DOT__mask_MemSrcD)) 
                         == ((IData)(__Vtask_D_stage_tb__DOT__run_test__2__exp_MemSrcD) 
                             & (IData)(vlSelfRef.D_stage_tb__DOT__mask_MemSrcD)))) 
                     & ((vlSelfRef.D_stage_tb__DOT__o_debug_data 
                         & vlSelfRef.D_stage_tb__DOT__mask_o_debug_data) 
                        == (__Vtask_D_stage_tb__DOT__run_test__2__exp_o_debug_data 
                            & vlSelfRef.D_stage_tb__DOT__mask_o_debug_data))) 
                    & ((IData)((0x100073U == (0xfff0007fU 
                                              & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U]))) 
                       == (IData)(__Vtask_D_stage_tb__DOT__run_test__2__exp_Ebreak)))))) {
        VL_WRITEF_NX("%02d \342\234\205 %@\n    Instruction: %x\n    Register x%2#: %x\n",0,
                     32,vlSelfRef.D_stage_tb__DOT__test_num,
                     -1,&(__Vtask_D_stage_tb__DOT__run_test__2__test_name),
                     32,vlSelfRef.D_stage_tb__DOT__InstrF,
                     5,(IData)(vlSelfRef.D_stage_tb__DOT__i_debug_addr),
                     32,vlSelfRef.D_stage_tb__DOT__o_debug_data);
        vlSelfRef.D_stage_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.D_stage_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214 %@\n    Instruction: %b\n    Inputs:\n        pcF=%x PCPlus4F=%x\n        StallD=%b FlushD=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n        RdW=%2# RegWriteW=%b ResultW=%x\n    Bit Mask:\n        mask_Read1D=%b\n        mask_Read2D=%b\n        mask_ResultSrcD=%b\n        mask_ALUControlD=%b\n        mask_ALUSrcD=%b\n        mask_Rs1D=%b\n        mask_Rs2D=%b\n        mask_RdD=%b\n        mask_ImmExtD=%b\n        mask_MemSrcD=%b\n    Expected vs Actual:\n",0,
                     32,vlSelfRef.D_stage_tb__DOT__test_num,
                     -1,&(__Vtask_D_stage_tb__DOT__run_test__2__test_name),
                     32,vlSelfRef.D_stage_tb__DOT__InstrF,
                     32,vlSelfRef.D_stage_tb__DOT__pcF,
                     32,vlSelfRef.D_stage_tb__DOT__PCPlus4F,
                     1,(IData)(vlSelfRef.D_stage_tb__DOT__StallD),
                     1,vlSelfRef.D_stage_tb__DOT__FlushD,
                     1,(IData)(vlSelfRef.D_stage_tb__DOT__ZeroE),
                     1,vlSelfRef.D_stage_tb__DOT__BranchE,
                     1,(IData)(vlSelfRef.D_stage_tb__DOT__JumpE),
                     1,vlSelfRef.D_stage_tb__DOT__ALUResultEb0,
                     5,(IData)(vlSelfRef.D_stage_tb__DOT__RdW),
                     1,vlSelfRef.D_stage_tb__DOT__RegWriteW,
                     32,vlSelfRef.D_stage_tb__DOT__ResultW,
                     1,(0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_Read1D),
                     1,(0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_Read2D),
                     1,(3U == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD)),
                     1,(0xfU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUControlD)),
                     1,(3U == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD)),
                     1,(0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs1D)),
                     1,(0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs2D)),
                     1,(0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_RdD)),
                     1,(0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_ImmExtD),
                     1,(0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_MemSrcD)));
        if (VL_UNLIKELY(((0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_Read1D)))) {
            VL_WRITEF_NX("        Read1D:      %x vs %x\n",0,
                         32,__Vtask_D_stage_tb__DOT__run_test__2__exp_Read1D,
                         32,vlSelfRef.D_stage_tb__DOT__Read1D);
        }
        if (VL_UNLIKELY(((0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_Read2D)))) {
            VL_WRITEF_NX("        Read2D:      %x vs %x\n",0,
                         32,__Vtask_D_stage_tb__DOT__run_test__2__exp_Read2D,
                         32,vlSelfRef.D_stage_tb__DOT__Read2D);
        }
        VL_WRITEF_NX("        RegWriteD:   %b vs %b\n",0,
                     1,__Vtask_D_stage_tb__DOT__run_test__2__exp_RegWriteD,
                     1,(1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                              >> 0xcU)));
        if (VL_UNLIKELY(((3U == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD))))) {
            VL_WRITEF_NX("        ResultSrcD:  %b vs %b\n",0,
                         2,__Vtask_D_stage_tb__DOT__run_test__2__exp_ResultSrcD,
                         2,(3U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                  >> 4U)));
        }
        VL_WRITEF_NX("        MemWriteD:   %b vs %b\n        JumpD:       %b vs %b\n        BranchD:     %b vs %b\n",0,
                     1,__Vtask_D_stage_tb__DOT__run_test__2__exp_MemWriteD,
                     1,(1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                              >> 6U)),1,(IData)(__Vtask_D_stage_tb__DOT__run_test__2__exp_JumpD),
                     1,(1U & (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls)),
                     1,(IData)(__Vtask_D_stage_tb__DOT__run_test__2__exp_BranchD),
                     1,(1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                              >> 3U)));
        if (VL_UNLIKELY(((0xfU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUControlD))))) {
            VL_WRITEF_NX("        ALUControlD: %b vs %b\n",0,
                         4,__Vtask_D_stage_tb__DOT__run_test__2__exp_ALUControlD,
                         4,(IData)(vlSelfRef.D_stage_tb__DOT__ALUControlD));
        }
        if (VL_UNLIKELY(((3U == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD))))) {
            VL_WRITEF_NX("        ALUSrcD:     %b vs %b\n",0,
                         2,__Vtask_D_stage_tb__DOT__run_test__2__exp_ALUSrcD,
                         2,(3U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                  >> 7U)));
        }
        VL_WRITEF_NX("        pcD:         %x vs %x\n",0,
                     32,__Vtask_D_stage_tb__DOT__run_test__2__exp_pcD,
                     32,vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[1U]);
        if (VL_UNLIKELY(((0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs1D))))) {
            VL_WRITEF_NX("        Rs1D:        %2# vs %2#\n",0,
                         5,__Vtask_D_stage_tb__DOT__run_test__2__exp_Rs1D,
                         5,(0x1fU & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                     >> 0xfU)));
        }
        if (VL_UNLIKELY(((0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs2D))))) {
            VL_WRITEF_NX("        Rs2D:        %2# vs %2#\n",0,
                         5,__Vtask_D_stage_tb__DOT__run_test__2__exp_Rs2D,
                         5,(0x1fU & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                     >> 0x14U)));
        }
        if (VL_UNLIKELY(((0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_RdD))))) {
            VL_WRITEF_NX("        RdD:         %2# vs %2#\n",0,
                         5,__Vtask_D_stage_tb__DOT__run_test__2__exp_RdD,
                         5,(0x1fU & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                     >> 7U)));
        }
        if (VL_UNLIKELY(((0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_ImmExtD)))) {
            VL_WRITEF_NX("        ImmExtD:     %x vs %x\n",0,
                         32,__Vtask_D_stage_tb__DOT__run_test__2__exp_ImmExtD,
                         32,vlSelfRef.D_stage_tb__DOT__ImmExtD);
        }
        VL_WRITEF_NX("        PCPlus4D:    %x vs %x\n        Ecall:       %b vs %b\n        Ebreak:      %b vs %b\n",0,
                     32,__Vtask_D_stage_tb__DOT__run_test__2__exp_PCPlus4D,
                     32,vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[0U],
                     1,(IData)(__Vtask_D_stage_tb__DOT__run_test__2__exp_Ecall),
                     1,(IData)((0x73U == (0xfff0007fU 
                                          & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U]))),
                     1,__Vtask_D_stage_tb__DOT__run_test__2__exp_Ebreak,
                     1,(IData)((0x100073U == (0xfff0007fU 
                                              & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U]))));
        if (VL_UNLIKELY(((0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_MemSrcD))))) {
            VL_WRITEF_NX("        MemSrcD:     %b vs %b\n",0,
                         5,__Vtask_D_stage_tb__DOT__run_test__2__exp_MemSrcD,
                         5,((0x4000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                             ? ((0x2000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                 ? 0U : ((0x1000U & 
                                          vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                          ? 1U : 2U))
                             : ((0x2000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                 ? ((0x1000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                     ? 0U : 4U) : (
                                                   (0x1000U 
                                                    & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                    ? 8U
                                                    : 0x10U))));
        }
        if (VL_UNLIKELY(((0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_o_debug_data)))) {
            VL_WRITEF_NX("        Register %2#: %x vs %x\n",0,
                         5,vlSelfRef.D_stage_tb__DOT__i_debug_addr,
                         32,__Vtask_D_stage_tb__DOT__run_test__2__exp_o_debug_data,
                         32,vlSelfRef.D_stage_tb__DOT__o_debug_data);
        }
        vlSelfRef.D_stage_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.D_stage_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n----------- Load/Store Instructions -----------\n",0);
    vlSelfRef.D_stage_tb__DOT__InstrF = 0x1222083U;
    vlSelfRef.D_stage_tb__DOT__pcF = 8U;
    vlSelfRef.D_stage_tb__DOT__PCPlus4F = 0xcU;
    vlSelfRef.D_stage_tb__DOT__mask_Read1D = 0xffffffffU;
    vlSelfRef.D_stage_tb__DOT__mask_Read2D = 0U;
    vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD = 3U;
    vlSelfRef.D_stage_tb__DOT__mask_ALUControlD = 0xfU;
    vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD = 3U;
    vlSelfRef.D_stage_tb__DOT__mask_Rs1D = 0x1fU;
    vlSelfRef.D_stage_tb__DOT__mask_Rs2D = 0U;
    vlSelfRef.D_stage_tb__DOT__mask_RdD = 0x1fU;
    vlSelfRef.D_stage_tb__DOT__mask_ImmExtD = 0xffffffffU;
    vlSelfRef.D_stage_tb__DOT__mask_MemSrcD = 0x1fU;
    vlSelfRef.D_stage_tb__DOT__mask_o_debug_data = 0U;
    vlSelfRef.D_stage_tb__DOT__i_debug_addr = 1U;
    __Vtask_D_stage_tb__DOT__run_test__3__test_name = 
        std::string{"Load LW"};
    __Vtask_D_stage_tb__DOT__run_test__3__exp_o_debug_data 
        = vlSelfRef.D_stage_tb__DOT____Vxrand_h8794da3b__9;
    __Vtask_D_stage_tb__DOT__run_test__3__exp_MemSrcD = 4U;
    __Vtask_D_stage_tb__DOT__run_test__3__exp_Ebreak = 0U;
    __Vtask_D_stage_tb__DOT__run_test__3__exp_Ecall = 0U;
    __Vtask_D_stage_tb__DOT__run_test__3__exp_PCPlus4D = 0xcU;
    __Vtask_D_stage_tb__DOT__run_test__3__exp_ImmExtD = 0x12U;
    __Vtask_D_stage_tb__DOT__run_test__3__exp_RdD = 1U;
    __Vtask_D_stage_tb__DOT__run_test__3__exp_Rs2D 
        = vlSelfRef.D_stage_tb__DOT____Vxrand_h87975fad__4;
    __Vtask_D_stage_tb__DOT__run_test__3__exp_Rs1D = 4U;
    __Vtask_D_stage_tb__DOT__run_test__3__exp_pcD = 8U;
    __Vtask_D_stage_tb__DOT__run_test__3__exp_ALUSrcD = 1U;
    __Vtask_D_stage_tb__DOT__run_test__3__exp_ALUControlD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__3__exp_BranchD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__3__exp_JumpD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__3__exp_MemWriteD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__3__exp_ResultSrcD = 1U;
    __Vtask_D_stage_tb__DOT__run_test__3__exp_RegWriteD = 1U;
    __Vtask_D_stage_tb__DOT__run_test__3__exp_Read2D 
        = vlSelfRef.D_stage_tb__DOT____Vxrand_h8794da3b__8;
    __Vtask_D_stage_tb__DOT__run_test__3__exp_Read1D = 0U;
    __Vtask_D_stage_tb__DOT__run_test__3__in_mask_o_debug_data 
        = vlSelfRef.D_stage_tb__DOT__mask_o_debug_data;
    __Vtask_D_stage_tb__DOT__run_test__3__in_mask_MemSrcD 
        = vlSelfRef.D_stage_tb__DOT__mask_MemSrcD;
    __Vtask_D_stage_tb__DOT__run_test__3__in_mask_ImmExtD 
        = vlSelfRef.D_stage_tb__DOT__mask_ImmExtD;
    __Vtask_D_stage_tb__DOT__run_test__3__in_mask_RdD 
        = vlSelfRef.D_stage_tb__DOT__mask_RdD;
    __Vtask_D_stage_tb__DOT__run_test__3__in_mask_Rs2D 
        = vlSelfRef.D_stage_tb__DOT__mask_Rs2D;
    __Vtask_D_stage_tb__DOT__run_test__3__in_mask_Rs1D 
        = vlSelfRef.D_stage_tb__DOT__mask_Rs1D;
    __Vtask_D_stage_tb__DOT__run_test__3__in_mask_ALUSrcD 
        = vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD;
    __Vtask_D_stage_tb__DOT__run_test__3__in_mask_ALUControlD 
        = vlSelfRef.D_stage_tb__DOT__mask_ALUControlD;
    __Vtask_D_stage_tb__DOT__run_test__3__in_mask_ResultSrcD 
        = vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD;
    __Vtask_D_stage_tb__DOT__run_test__3__in_mask_Read2D 
        = vlSelfRef.D_stage_tb__DOT__mask_Read2D;
    __Vtask_D_stage_tb__DOT__run_test__3__in_mask_Read1D 
        = vlSelfRef.D_stage_tb__DOT__mask_Read1D;
    __Vtask_D_stage_tb__DOT__run_test__3__in_i_debug_addr 
        = vlSelfRef.D_stage_tb__DOT__i_debug_addr;
    __Vtask_D_stage_tb__DOT__run_test__3__in_ResultW 
        = vlSelfRef.D_stage_tb__DOT__ResultW;
    __Vtask_D_stage_tb__DOT__run_test__3__in_RegWriteW 
        = vlSelfRef.D_stage_tb__DOT__RegWriteW;
    __Vtask_D_stage_tb__DOT__run_test__3__in_RdW = vlSelfRef.D_stage_tb__DOT__RdW;
    __Vtask_D_stage_tb__DOT__run_test__3__in_ALUResultEb0 
        = vlSelfRef.D_stage_tb__DOT__ALUResultEb0;
    __Vtask_D_stage_tb__DOT__run_test__3__in_JumpE 
        = vlSelfRef.D_stage_tb__DOT__JumpE;
    __Vtask_D_stage_tb__DOT__run_test__3__in_BranchE 
        = vlSelfRef.D_stage_tb__DOT__BranchE;
    __Vtask_D_stage_tb__DOT__run_test__3__in_ZeroE 
        = vlSelfRef.D_stage_tb__DOT__ZeroE;
    __Vtask_D_stage_tb__DOT__run_test__3__in_FlushD 
        = vlSelfRef.D_stage_tb__DOT__FlushD;
    __Vtask_D_stage_tb__DOT__run_test__3__in_StallD 
        = vlSelfRef.D_stage_tb__DOT__StallD;
    __Vtask_D_stage_tb__DOT__run_test__3__in_PCPlus4F 
        = vlSelfRef.D_stage_tb__DOT__PCPlus4F;
    __Vtask_D_stage_tb__DOT__run_test__3__in_pcF = vlSelfRef.D_stage_tb__DOT__pcF;
    __Vtask_D_stage_tb__DOT__run_test__3__in_InstrF 
        = vlSelfRef.D_stage_tb__DOT__InstrF;
    vlSelfRef.D_stage_tb__DOT__test_num = ((IData)(1U) 
                                           + vlSelfRef.D_stage_tb__DOT__test_num);
    vlSelfRef.D_stage_tb__DOT__InstrF = __Vtask_D_stage_tb__DOT__run_test__3__in_InstrF;
    vlSelfRef.D_stage_tb__DOT__pcF = __Vtask_D_stage_tb__DOT__run_test__3__in_pcF;
    vlSelfRef.D_stage_tb__DOT__PCPlus4F = __Vtask_D_stage_tb__DOT__run_test__3__in_PCPlus4F;
    vlSelfRef.D_stage_tb__DOT__StallD = __Vtask_D_stage_tb__DOT__run_test__3__in_StallD;
    vlSelfRef.D_stage_tb__DOT__FlushD = __Vtask_D_stage_tb__DOT__run_test__3__in_FlushD;
    vlSelfRef.D_stage_tb__DOT__ZeroE = __Vtask_D_stage_tb__DOT__run_test__3__in_ZeroE;
    vlSelfRef.D_stage_tb__DOT__BranchE = __Vtask_D_stage_tb__DOT__run_test__3__in_BranchE;
    vlSelfRef.D_stage_tb__DOT__JumpE = __Vtask_D_stage_tb__DOT__run_test__3__in_JumpE;
    vlSelfRef.D_stage_tb__DOT__ALUResultEb0 = __Vtask_D_stage_tb__DOT__run_test__3__in_ALUResultEb0;
    vlSelfRef.D_stage_tb__DOT__RdW = __Vtask_D_stage_tb__DOT__run_test__3__in_RdW;
    vlSelfRef.D_stage_tb__DOT__RegWriteW = __Vtask_D_stage_tb__DOT__run_test__3__in_RegWriteW;
    vlSelfRef.D_stage_tb__DOT__ResultW = __Vtask_D_stage_tb__DOT__run_test__3__in_ResultW;
    vlSelfRef.D_stage_tb__DOT__i_debug_addr = __Vtask_D_stage_tb__DOT__run_test__3__in_i_debug_addr;
    vlSelfRef.D_stage_tb__DOT__mask_Read1D = __Vtask_D_stage_tb__DOT__run_test__3__in_mask_Read1D;
    vlSelfRef.D_stage_tb__DOT__mask_Read2D = __Vtask_D_stage_tb__DOT__run_test__3__in_mask_Read2D;
    vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD = __Vtask_D_stage_tb__DOT__run_test__3__in_mask_ResultSrcD;
    vlSelfRef.D_stage_tb__DOT__mask_ALUControlD = __Vtask_D_stage_tb__DOT__run_test__3__in_mask_ALUControlD;
    vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD = __Vtask_D_stage_tb__DOT__run_test__3__in_mask_ALUSrcD;
    vlSelfRef.D_stage_tb__DOT__mask_Rs1D = __Vtask_D_stage_tb__DOT__run_test__3__in_mask_Rs1D;
    vlSelfRef.D_stage_tb__DOT__mask_Rs2D = __Vtask_D_stage_tb__DOT__run_test__3__in_mask_Rs2D;
    vlSelfRef.D_stage_tb__DOT__mask_RdD = __Vtask_D_stage_tb__DOT__run_test__3__in_mask_RdD;
    vlSelfRef.D_stage_tb__DOT__mask_ImmExtD = __Vtask_D_stage_tb__DOT__run_test__3__in_mask_ImmExtD;
    vlSelfRef.D_stage_tb__DOT__mask_MemSrcD = __Vtask_D_stage_tb__DOT__run_test__3__in_mask_MemSrcD;
    vlSelfRef.D_stage_tb__DOT__mask_o_debug_data = __Vtask_D_stage_tb__DOT__run_test__3__in_mask_o_debug_data;
    co_await vlSelfRef.__VtrigSched_h1a3cedb5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge D_stage_tb.clk)", 
                                                         "../../01_bench/D_stage_tb.sv", 
                                                         223);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/D_stage_tb.sv", 
                                         223);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((((((((((((((((((((((vlSelfRef.D_stage_tb__DOT__Read1D 
                                       & vlSelfRef.D_stage_tb__DOT__mask_Read1D) 
                                      == (__Vtask_D_stage_tb__DOT__run_test__3__exp_Read1D 
                                          & vlSelfRef.D_stage_tb__DOT__mask_Read1D)) 
                                     & ((vlSelfRef.D_stage_tb__DOT__Read2D 
                                         & vlSelfRef.D_stage_tb__DOT__mask_Read2D) 
                                        == (__Vtask_D_stage_tb__DOT__run_test__3__exp_Read2D 
                                            & vlSelfRef.D_stage_tb__DOT__mask_Read2D))) 
                                    & ((1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                              >> 0xcU)) 
                                       == (IData)(__Vtask_D_stage_tb__DOT__run_test__3__exp_RegWriteD))) 
                                   & ((((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                        >> 4U) & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD)) 
                                      == ((IData)(__Vtask_D_stage_tb__DOT__run_test__3__exp_ResultSrcD) 
                                          & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD)))) 
                                  & ((1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                            >> 6U)) 
                                     == (IData)(__Vtask_D_stage_tb__DOT__run_test__3__exp_MemWriteD))) 
                                 & ((1U & (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls)) 
                                    == (IData)(__Vtask_D_stage_tb__DOT__run_test__3__exp_JumpD))) 
                                & ((1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                          >> 3U)) == (IData)(__Vtask_D_stage_tb__DOT__run_test__3__exp_BranchD))) 
                               & (((IData)(vlSelfRef.D_stage_tb__DOT__ALUControlD) 
                                   & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUControlD)) 
                                  == ((IData)(__Vtask_D_stage_tb__DOT__run_test__3__exp_ALUControlD) 
                                      & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUControlD)))) 
                              & ((((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                   >> 7U) & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD)) 
                                 == ((IData)(__Vtask_D_stage_tb__DOT__run_test__3__exp_ALUSrcD) 
                                     & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD)))) 
                             & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[1U] 
                                == __Vtask_D_stage_tb__DOT__run_test__3__exp_pcD)) 
                            & ((((vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                  << 0x11U) | (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                               >> 0xfU)) 
                                & (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs1D)) 
                               == ((IData)(__Vtask_D_stage_tb__DOT__run_test__3__exp_Rs1D) 
                                   & (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs1D)))) 
                           & ((((vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                 << 0xcU) | (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                             >> 0x14U)) 
                               & (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs2D)) 
                              == ((IData)(__Vtask_D_stage_tb__DOT__run_test__3__exp_Rs2D) 
                                  & (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs2D)))) 
                          & ((((vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                << 0x19U) | (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                             >> 7U)) 
                              & (IData)(vlSelfRef.D_stage_tb__DOT__mask_RdD)) 
                             == ((IData)(__Vtask_D_stage_tb__DOT__run_test__3__exp_RdD) 
                                 & (IData)(vlSelfRef.D_stage_tb__DOT__mask_RdD)))) 
                         & ((vlSelfRef.D_stage_tb__DOT__ImmExtD 
                             & vlSelfRef.D_stage_tb__DOT__mask_ImmExtD) 
                            == (__Vtask_D_stage_tb__DOT__run_test__3__exp_ImmExtD 
                                & vlSelfRef.D_stage_tb__DOT__mask_ImmExtD))) 
                        & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[0U] 
                           == __Vtask_D_stage_tb__DOT__run_test__3__exp_PCPlus4D)) 
                       & ((IData)((0x73U == (0xfff0007fU 
                                             & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U]))) 
                          == (IData)(__Vtask_D_stage_tb__DOT__run_test__3__exp_Ecall))) 
                      & ((((0x4000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                            ? ((0x2000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                ? 0U : ((0x1000U & 
                                         vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                         ? 1U : 2U))
                            : ((0x2000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                ? ((0x1000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                    ? 0U : 4U) : ((0x1000U 
                                                   & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                   ? 8U
                                                   : 0x10U))) 
                          & (IData)(vlSelfRef.D_stage_tb__DOT__mask_MemSrcD)) 
                         == ((IData)(__Vtask_D_stage_tb__DOT__run_test__3__exp_MemSrcD) 
                             & (IData)(vlSelfRef.D_stage_tb__DOT__mask_MemSrcD)))) 
                     & ((vlSelfRef.D_stage_tb__DOT__o_debug_data 
                         & vlSelfRef.D_stage_tb__DOT__mask_o_debug_data) 
                        == (__Vtask_D_stage_tb__DOT__run_test__3__exp_o_debug_data 
                            & vlSelfRef.D_stage_tb__DOT__mask_o_debug_data))) 
                    & ((IData)((0x100073U == (0xfff0007fU 
                                              & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U]))) 
                       == (IData)(__Vtask_D_stage_tb__DOT__run_test__3__exp_Ebreak)))))) {
        VL_WRITEF_NX("%02d \342\234\205 %@\n    Instruction: %x\n    Register x%2#: %x\n",0,
                     32,vlSelfRef.D_stage_tb__DOT__test_num,
                     -1,&(__Vtask_D_stage_tb__DOT__run_test__3__test_name),
                     32,vlSelfRef.D_stage_tb__DOT__InstrF,
                     5,(IData)(vlSelfRef.D_stage_tb__DOT__i_debug_addr),
                     32,vlSelfRef.D_stage_tb__DOT__o_debug_data);
        vlSelfRef.D_stage_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.D_stage_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214 %@\n    Instruction: %b\n    Inputs:\n        pcF=%x PCPlus4F=%x\n        StallD=%b FlushD=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n        RdW=%2# RegWriteW=%b ResultW=%x\n    Bit Mask:\n        mask_Read1D=%b\n        mask_Read2D=%b\n        mask_ResultSrcD=%b\n        mask_ALUControlD=%b\n        mask_ALUSrcD=%b\n        mask_Rs1D=%b\n        mask_Rs2D=%b\n        mask_RdD=%b\n        mask_ImmExtD=%b\n        mask_MemSrcD=%b\n    Expected vs Actual:\n",0,
                     32,vlSelfRef.D_stage_tb__DOT__test_num,
                     -1,&(__Vtask_D_stage_tb__DOT__run_test__3__test_name),
                     32,vlSelfRef.D_stage_tb__DOT__InstrF,
                     32,vlSelfRef.D_stage_tb__DOT__pcF,
                     32,vlSelfRef.D_stage_tb__DOT__PCPlus4F,
                     1,(IData)(vlSelfRef.D_stage_tb__DOT__StallD),
                     1,vlSelfRef.D_stage_tb__DOT__FlushD,
                     1,(IData)(vlSelfRef.D_stage_tb__DOT__ZeroE),
                     1,vlSelfRef.D_stage_tb__DOT__BranchE,
                     1,(IData)(vlSelfRef.D_stage_tb__DOT__JumpE),
                     1,vlSelfRef.D_stage_tb__DOT__ALUResultEb0,
                     5,(IData)(vlSelfRef.D_stage_tb__DOT__RdW),
                     1,vlSelfRef.D_stage_tb__DOT__RegWriteW,
                     32,vlSelfRef.D_stage_tb__DOT__ResultW,
                     1,(0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_Read1D),
                     1,(0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_Read2D),
                     1,(3U == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD)),
                     1,(0xfU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUControlD)),
                     1,(3U == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD)),
                     1,(0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs1D)),
                     1,(0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs2D)),
                     1,(0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_RdD)),
                     1,(0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_ImmExtD),
                     1,(0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_MemSrcD)));
        if (VL_UNLIKELY(((0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_Read1D)))) {
            VL_WRITEF_NX("        Read1D:      %x vs %x\n",0,
                         32,__Vtask_D_stage_tb__DOT__run_test__3__exp_Read1D,
                         32,vlSelfRef.D_stage_tb__DOT__Read1D);
        }
        if (VL_UNLIKELY(((0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_Read2D)))) {
            VL_WRITEF_NX("        Read2D:      %x vs %x\n",0,
                         32,__Vtask_D_stage_tb__DOT__run_test__3__exp_Read2D,
                         32,vlSelfRef.D_stage_tb__DOT__Read2D);
        }
        VL_WRITEF_NX("        RegWriteD:   %b vs %b\n",0,
                     1,__Vtask_D_stage_tb__DOT__run_test__3__exp_RegWriteD,
                     1,(1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                              >> 0xcU)));
        if (VL_UNLIKELY(((3U == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD))))) {
            VL_WRITEF_NX("        ResultSrcD:  %b vs %b\n",0,
                         2,__Vtask_D_stage_tb__DOT__run_test__3__exp_ResultSrcD,
                         2,(3U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                  >> 4U)));
        }
        VL_WRITEF_NX("        MemWriteD:   %b vs %b\n        JumpD:       %b vs %b\n        BranchD:     %b vs %b\n",0,
                     1,__Vtask_D_stage_tb__DOT__run_test__3__exp_MemWriteD,
                     1,(1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                              >> 6U)),1,(IData)(__Vtask_D_stage_tb__DOT__run_test__3__exp_JumpD),
                     1,(1U & (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls)),
                     1,(IData)(__Vtask_D_stage_tb__DOT__run_test__3__exp_BranchD),
                     1,(1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                              >> 3U)));
        if (VL_UNLIKELY(((0xfU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUControlD))))) {
            VL_WRITEF_NX("        ALUControlD: %b vs %b\n",0,
                         4,__Vtask_D_stage_tb__DOT__run_test__3__exp_ALUControlD,
                         4,(IData)(vlSelfRef.D_stage_tb__DOT__ALUControlD));
        }
        if (VL_UNLIKELY(((3U == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD))))) {
            VL_WRITEF_NX("        ALUSrcD:     %b vs %b\n",0,
                         2,__Vtask_D_stage_tb__DOT__run_test__3__exp_ALUSrcD,
                         2,(3U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                  >> 7U)));
        }
        VL_WRITEF_NX("        pcD:         %x vs %x\n",0,
                     32,__Vtask_D_stage_tb__DOT__run_test__3__exp_pcD,
                     32,vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[1U]);
        if (VL_UNLIKELY(((0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs1D))))) {
            VL_WRITEF_NX("        Rs1D:        %2# vs %2#\n",0,
                         5,__Vtask_D_stage_tb__DOT__run_test__3__exp_Rs1D,
                         5,(0x1fU & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                     >> 0xfU)));
        }
        if (VL_UNLIKELY(((0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs2D))))) {
            VL_WRITEF_NX("        Rs2D:        %2# vs %2#\n",0,
                         5,__Vtask_D_stage_tb__DOT__run_test__3__exp_Rs2D,
                         5,(0x1fU & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                     >> 0x14U)));
        }
        if (VL_UNLIKELY(((0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_RdD))))) {
            VL_WRITEF_NX("        RdD:         %2# vs %2#\n",0,
                         5,__Vtask_D_stage_tb__DOT__run_test__3__exp_RdD,
                         5,(0x1fU & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                     >> 7U)));
        }
        if (VL_UNLIKELY(((0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_ImmExtD)))) {
            VL_WRITEF_NX("        ImmExtD:     %x vs %x\n",0,
                         32,__Vtask_D_stage_tb__DOT__run_test__3__exp_ImmExtD,
                         32,vlSelfRef.D_stage_tb__DOT__ImmExtD);
        }
        VL_WRITEF_NX("        PCPlus4D:    %x vs %x\n        Ecall:       %b vs %b\n        Ebreak:      %b vs %b\n",0,
                     32,__Vtask_D_stage_tb__DOT__run_test__3__exp_PCPlus4D,
                     32,vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[0U],
                     1,(IData)(__Vtask_D_stage_tb__DOT__run_test__3__exp_Ecall),
                     1,(IData)((0x73U == (0xfff0007fU 
                                          & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U]))),
                     1,__Vtask_D_stage_tb__DOT__run_test__3__exp_Ebreak,
                     1,(IData)((0x100073U == (0xfff0007fU 
                                              & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U]))));
        if (VL_UNLIKELY(((0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_MemSrcD))))) {
            VL_WRITEF_NX("        MemSrcD:     %b vs %b\n",0,
                         5,__Vtask_D_stage_tb__DOT__run_test__3__exp_MemSrcD,
                         5,((0x4000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                             ? ((0x2000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                 ? 0U : ((0x1000U & 
                                          vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                          ? 1U : 2U))
                             : ((0x2000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                 ? ((0x1000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                     ? 0U : 4U) : (
                                                   (0x1000U 
                                                    & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                    ? 8U
                                                    : 0x10U))));
        }
        if (VL_UNLIKELY(((0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_o_debug_data)))) {
            VL_WRITEF_NX("        Register %2#: %x vs %x\n",0,
                         5,vlSelfRef.D_stage_tb__DOT__i_debug_addr,
                         32,__Vtask_D_stage_tb__DOT__run_test__3__exp_o_debug_data,
                         32,vlSelfRef.D_stage_tb__DOT__o_debug_data);
        }
        vlSelfRef.D_stage_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.D_stage_tb__DOT__fail_count);
    }
    vlSelfRef.D_stage_tb__DOT__InstrF = 0x3640a1a3U;
    vlSelfRef.D_stage_tb__DOT__pcF = 0xcU;
    vlSelfRef.D_stage_tb__DOT__PCPlus4F = 0x10U;
    vlSelfRef.D_stage_tb__DOT__mask_Read1D = 0U;
    vlSelfRef.D_stage_tb__DOT__mask_Read2D = 0U;
    vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD = 0U;
    vlSelfRef.D_stage_tb__DOT__mask_ALUControlD = 0xfU;
    vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD = 3U;
    vlSelfRef.D_stage_tb__DOT__mask_Rs1D = 0x1fU;
    vlSelfRef.D_stage_tb__DOT__mask_Rs2D = 0x1fU;
    vlSelfRef.D_stage_tb__DOT__mask_RdD = 0U;
    vlSelfRef.D_stage_tb__DOT__mask_ImmExtD = 0xffffffffU;
    vlSelfRef.D_stage_tb__DOT__mask_MemSrcD = 0x1fU;
    vlSelfRef.D_stage_tb__DOT__mask_o_debug_data = 0U;
    vlSelfRef.D_stage_tb__DOT__i_debug_addr = 1U;
    __Vtask_D_stage_tb__DOT__run_test__4__test_name = 
        std::string{"Store SW"};
    __Vtask_D_stage_tb__DOT__run_test__4__exp_o_debug_data 
        = vlSelfRef.D_stage_tb__DOT____Vxrand_h8794da3b__12;
    __Vtask_D_stage_tb__DOT__run_test__4__exp_MemSrcD = 4U;
    __Vtask_D_stage_tb__DOT__run_test__4__exp_Ebreak = 0U;
    __Vtask_D_stage_tb__DOT__run_test__4__exp_Ecall = 0U;
    __Vtask_D_stage_tb__DOT__run_test__4__exp_PCPlus4D = 0x10U;
    __Vtask_D_stage_tb__DOT__run_test__4__exp_ImmExtD = 0x363U;
    __Vtask_D_stage_tb__DOT__run_test__4__exp_RdD = vlSelfRef.D_stage_tb__DOT____Vxrand_h87975fad__5;
    __Vtask_D_stage_tb__DOT__run_test__4__exp_Rs2D = 4U;
    __Vtask_D_stage_tb__DOT__run_test__4__exp_Rs1D = 1U;
    __Vtask_D_stage_tb__DOT__run_test__4__exp_pcD = 0xcU;
    __Vtask_D_stage_tb__DOT__run_test__4__exp_ALUSrcD = 1U;
    __Vtask_D_stage_tb__DOT__run_test__4__exp_ALUControlD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__4__exp_BranchD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__4__exp_JumpD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__4__exp_MemWriteD = 1U;
    __Vtask_D_stage_tb__DOT__run_test__4__exp_ResultSrcD 
        = vlSelfRef.D_stage_tb__DOT____Vxrand_h87970bbd__2;
    __Vtask_D_stage_tb__DOT__run_test__4__exp_RegWriteD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__4__exp_Read2D 
        = vlSelfRef.D_stage_tb__DOT____Vxrand_h8794da3b__11;
    __Vtask_D_stage_tb__DOT__run_test__4__exp_Read1D 
        = vlSelfRef.D_stage_tb__DOT____Vxrand_h8794da3b__10;
    __Vtask_D_stage_tb__DOT__run_test__4__in_mask_o_debug_data 
        = vlSelfRef.D_stage_tb__DOT__mask_o_debug_data;
    __Vtask_D_stage_tb__DOT__run_test__4__in_mask_MemSrcD 
        = vlSelfRef.D_stage_tb__DOT__mask_MemSrcD;
    __Vtask_D_stage_tb__DOT__run_test__4__in_mask_ImmExtD 
        = vlSelfRef.D_stage_tb__DOT__mask_ImmExtD;
    __Vtask_D_stage_tb__DOT__run_test__4__in_mask_RdD 
        = vlSelfRef.D_stage_tb__DOT__mask_RdD;
    __Vtask_D_stage_tb__DOT__run_test__4__in_mask_Rs2D 
        = vlSelfRef.D_stage_tb__DOT__mask_Rs2D;
    __Vtask_D_stage_tb__DOT__run_test__4__in_mask_Rs1D 
        = vlSelfRef.D_stage_tb__DOT__mask_Rs1D;
    __Vtask_D_stage_tb__DOT__run_test__4__in_mask_ALUSrcD 
        = vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD;
    __Vtask_D_stage_tb__DOT__run_test__4__in_mask_ALUControlD 
        = vlSelfRef.D_stage_tb__DOT__mask_ALUControlD;
    __Vtask_D_stage_tb__DOT__run_test__4__in_mask_ResultSrcD 
        = vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD;
    __Vtask_D_stage_tb__DOT__run_test__4__in_mask_Read2D 
        = vlSelfRef.D_stage_tb__DOT__mask_Read2D;
    __Vtask_D_stage_tb__DOT__run_test__4__in_mask_Read1D 
        = vlSelfRef.D_stage_tb__DOT__mask_Read1D;
    __Vtask_D_stage_tb__DOT__run_test__4__in_i_debug_addr 
        = vlSelfRef.D_stage_tb__DOT__i_debug_addr;
    __Vtask_D_stage_tb__DOT__run_test__4__in_ResultW 
        = vlSelfRef.D_stage_tb__DOT__ResultW;
    __Vtask_D_stage_tb__DOT__run_test__4__in_RegWriteW 
        = vlSelfRef.D_stage_tb__DOT__RegWriteW;
    __Vtask_D_stage_tb__DOT__run_test__4__in_RdW = vlSelfRef.D_stage_tb__DOT__RdW;
    __Vtask_D_stage_tb__DOT__run_test__4__in_ALUResultEb0 
        = vlSelfRef.D_stage_tb__DOT__ALUResultEb0;
    __Vtask_D_stage_tb__DOT__run_test__4__in_JumpE 
        = vlSelfRef.D_stage_tb__DOT__JumpE;
    __Vtask_D_stage_tb__DOT__run_test__4__in_BranchE 
        = vlSelfRef.D_stage_tb__DOT__BranchE;
    __Vtask_D_stage_tb__DOT__run_test__4__in_ZeroE 
        = vlSelfRef.D_stage_tb__DOT__ZeroE;
    __Vtask_D_stage_tb__DOT__run_test__4__in_FlushD 
        = vlSelfRef.D_stage_tb__DOT__FlushD;
    __Vtask_D_stage_tb__DOT__run_test__4__in_StallD 
        = vlSelfRef.D_stage_tb__DOT__StallD;
    __Vtask_D_stage_tb__DOT__run_test__4__in_PCPlus4F 
        = vlSelfRef.D_stage_tb__DOT__PCPlus4F;
    __Vtask_D_stage_tb__DOT__run_test__4__in_pcF = vlSelfRef.D_stage_tb__DOT__pcF;
    __Vtask_D_stage_tb__DOT__run_test__4__in_InstrF 
        = vlSelfRef.D_stage_tb__DOT__InstrF;
    vlSelfRef.D_stage_tb__DOT__test_num = ((IData)(1U) 
                                           + vlSelfRef.D_stage_tb__DOT__test_num);
    vlSelfRef.D_stage_tb__DOT__InstrF = __Vtask_D_stage_tb__DOT__run_test__4__in_InstrF;
    vlSelfRef.D_stage_tb__DOT__pcF = __Vtask_D_stage_tb__DOT__run_test__4__in_pcF;
    vlSelfRef.D_stage_tb__DOT__PCPlus4F = __Vtask_D_stage_tb__DOT__run_test__4__in_PCPlus4F;
    vlSelfRef.D_stage_tb__DOT__StallD = __Vtask_D_stage_tb__DOT__run_test__4__in_StallD;
    vlSelfRef.D_stage_tb__DOT__FlushD = __Vtask_D_stage_tb__DOT__run_test__4__in_FlushD;
    vlSelfRef.D_stage_tb__DOT__ZeroE = __Vtask_D_stage_tb__DOT__run_test__4__in_ZeroE;
    vlSelfRef.D_stage_tb__DOT__BranchE = __Vtask_D_stage_tb__DOT__run_test__4__in_BranchE;
    vlSelfRef.D_stage_tb__DOT__JumpE = __Vtask_D_stage_tb__DOT__run_test__4__in_JumpE;
    vlSelfRef.D_stage_tb__DOT__ALUResultEb0 = __Vtask_D_stage_tb__DOT__run_test__4__in_ALUResultEb0;
    vlSelfRef.D_stage_tb__DOT__RdW = __Vtask_D_stage_tb__DOT__run_test__4__in_RdW;
    vlSelfRef.D_stage_tb__DOT__RegWriteW = __Vtask_D_stage_tb__DOT__run_test__4__in_RegWriteW;
    vlSelfRef.D_stage_tb__DOT__ResultW = __Vtask_D_stage_tb__DOT__run_test__4__in_ResultW;
    vlSelfRef.D_stage_tb__DOT__i_debug_addr = __Vtask_D_stage_tb__DOT__run_test__4__in_i_debug_addr;
    vlSelfRef.D_stage_tb__DOT__mask_Read1D = __Vtask_D_stage_tb__DOT__run_test__4__in_mask_Read1D;
    vlSelfRef.D_stage_tb__DOT__mask_Read2D = __Vtask_D_stage_tb__DOT__run_test__4__in_mask_Read2D;
    vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD = __Vtask_D_stage_tb__DOT__run_test__4__in_mask_ResultSrcD;
    vlSelfRef.D_stage_tb__DOT__mask_ALUControlD = __Vtask_D_stage_tb__DOT__run_test__4__in_mask_ALUControlD;
    vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD = __Vtask_D_stage_tb__DOT__run_test__4__in_mask_ALUSrcD;
    vlSelfRef.D_stage_tb__DOT__mask_Rs1D = __Vtask_D_stage_tb__DOT__run_test__4__in_mask_Rs1D;
    vlSelfRef.D_stage_tb__DOT__mask_Rs2D = __Vtask_D_stage_tb__DOT__run_test__4__in_mask_Rs2D;
    vlSelfRef.D_stage_tb__DOT__mask_RdD = __Vtask_D_stage_tb__DOT__run_test__4__in_mask_RdD;
    vlSelfRef.D_stage_tb__DOT__mask_ImmExtD = __Vtask_D_stage_tb__DOT__run_test__4__in_mask_ImmExtD;
    vlSelfRef.D_stage_tb__DOT__mask_MemSrcD = __Vtask_D_stage_tb__DOT__run_test__4__in_mask_MemSrcD;
    vlSelfRef.D_stage_tb__DOT__mask_o_debug_data = __Vtask_D_stage_tb__DOT__run_test__4__in_mask_o_debug_data;
    co_await vlSelfRef.__VtrigSched_h1a3cedb5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge D_stage_tb.clk)", 
                                                         "../../01_bench/D_stage_tb.sv", 
                                                         223);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/D_stage_tb.sv", 
                                         223);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((((((((((((((((((((((vlSelfRef.D_stage_tb__DOT__Read1D 
                                       & vlSelfRef.D_stage_tb__DOT__mask_Read1D) 
                                      == (__Vtask_D_stage_tb__DOT__run_test__4__exp_Read1D 
                                          & vlSelfRef.D_stage_tb__DOT__mask_Read1D)) 
                                     & ((vlSelfRef.D_stage_tb__DOT__Read2D 
                                         & vlSelfRef.D_stage_tb__DOT__mask_Read2D) 
                                        == (__Vtask_D_stage_tb__DOT__run_test__4__exp_Read2D 
                                            & vlSelfRef.D_stage_tb__DOT__mask_Read2D))) 
                                    & ((1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                              >> 0xcU)) 
                                       == (IData)(__Vtask_D_stage_tb__DOT__run_test__4__exp_RegWriteD))) 
                                   & ((((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                        >> 4U) & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD)) 
                                      == ((IData)(__Vtask_D_stage_tb__DOT__run_test__4__exp_ResultSrcD) 
                                          & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD)))) 
                                  & ((1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                            >> 6U)) 
                                     == (IData)(__Vtask_D_stage_tb__DOT__run_test__4__exp_MemWriteD))) 
                                 & ((1U & (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls)) 
                                    == (IData)(__Vtask_D_stage_tb__DOT__run_test__4__exp_JumpD))) 
                                & ((1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                          >> 3U)) == (IData)(__Vtask_D_stage_tb__DOT__run_test__4__exp_BranchD))) 
                               & (((IData)(vlSelfRef.D_stage_tb__DOT__ALUControlD) 
                                   & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUControlD)) 
                                  == ((IData)(__Vtask_D_stage_tb__DOT__run_test__4__exp_ALUControlD) 
                                      & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUControlD)))) 
                              & ((((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                   >> 7U) & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD)) 
                                 == ((IData)(__Vtask_D_stage_tb__DOT__run_test__4__exp_ALUSrcD) 
                                     & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD)))) 
                             & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[1U] 
                                == __Vtask_D_stage_tb__DOT__run_test__4__exp_pcD)) 
                            & ((((vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                  << 0x11U) | (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                               >> 0xfU)) 
                                & (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs1D)) 
                               == ((IData)(__Vtask_D_stage_tb__DOT__run_test__4__exp_Rs1D) 
                                   & (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs1D)))) 
                           & ((((vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                 << 0xcU) | (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                             >> 0x14U)) 
                               & (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs2D)) 
                              == ((IData)(__Vtask_D_stage_tb__DOT__run_test__4__exp_Rs2D) 
                                  & (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs2D)))) 
                          & ((((vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                << 0x19U) | (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                             >> 7U)) 
                              & (IData)(vlSelfRef.D_stage_tb__DOT__mask_RdD)) 
                             == ((IData)(__Vtask_D_stage_tb__DOT__run_test__4__exp_RdD) 
                                 & (IData)(vlSelfRef.D_stage_tb__DOT__mask_RdD)))) 
                         & ((vlSelfRef.D_stage_tb__DOT__ImmExtD 
                             & vlSelfRef.D_stage_tb__DOT__mask_ImmExtD) 
                            == (__Vtask_D_stage_tb__DOT__run_test__4__exp_ImmExtD 
                                & vlSelfRef.D_stage_tb__DOT__mask_ImmExtD))) 
                        & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[0U] 
                           == __Vtask_D_stage_tb__DOT__run_test__4__exp_PCPlus4D)) 
                       & ((IData)((0x73U == (0xfff0007fU 
                                             & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U]))) 
                          == (IData)(__Vtask_D_stage_tb__DOT__run_test__4__exp_Ecall))) 
                      & ((((0x4000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                            ? ((0x2000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                ? 0U : ((0x1000U & 
                                         vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                         ? 1U : 2U))
                            : ((0x2000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                ? ((0x1000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                    ? 0U : 4U) : ((0x1000U 
                                                   & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                   ? 8U
                                                   : 0x10U))) 
                          & (IData)(vlSelfRef.D_stage_tb__DOT__mask_MemSrcD)) 
                         == ((IData)(__Vtask_D_stage_tb__DOT__run_test__4__exp_MemSrcD) 
                             & (IData)(vlSelfRef.D_stage_tb__DOT__mask_MemSrcD)))) 
                     & ((vlSelfRef.D_stage_tb__DOT__o_debug_data 
                         & vlSelfRef.D_stage_tb__DOT__mask_o_debug_data) 
                        == (__Vtask_D_stage_tb__DOT__run_test__4__exp_o_debug_data 
                            & vlSelfRef.D_stage_tb__DOT__mask_o_debug_data))) 
                    & ((IData)((0x100073U == (0xfff0007fU 
                                              & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U]))) 
                       == (IData)(__Vtask_D_stage_tb__DOT__run_test__4__exp_Ebreak)))))) {
        VL_WRITEF_NX("%02d \342\234\205 %@\n    Instruction: %x\n    Register x%2#: %x\n",0,
                     32,vlSelfRef.D_stage_tb__DOT__test_num,
                     -1,&(__Vtask_D_stage_tb__DOT__run_test__4__test_name),
                     32,vlSelfRef.D_stage_tb__DOT__InstrF,
                     5,(IData)(vlSelfRef.D_stage_tb__DOT__i_debug_addr),
                     32,vlSelfRef.D_stage_tb__DOT__o_debug_data);
        vlSelfRef.D_stage_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.D_stage_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214 %@\n    Instruction: %b\n    Inputs:\n        pcF=%x PCPlus4F=%x\n        StallD=%b FlushD=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n        RdW=%2# RegWriteW=%b ResultW=%x\n    Bit Mask:\n        mask_Read1D=%b\n        mask_Read2D=%b\n        mask_ResultSrcD=%b\n        mask_ALUControlD=%b\n        mask_ALUSrcD=%b\n        mask_Rs1D=%b\n        mask_Rs2D=%b\n        mask_RdD=%b\n        mask_ImmExtD=%b\n        mask_MemSrcD=%b\n    Expected vs Actual:\n",0,
                     32,vlSelfRef.D_stage_tb__DOT__test_num,
                     -1,&(__Vtask_D_stage_tb__DOT__run_test__4__test_name),
                     32,vlSelfRef.D_stage_tb__DOT__InstrF,
                     32,vlSelfRef.D_stage_tb__DOT__pcF,
                     32,vlSelfRef.D_stage_tb__DOT__PCPlus4F,
                     1,(IData)(vlSelfRef.D_stage_tb__DOT__StallD),
                     1,vlSelfRef.D_stage_tb__DOT__FlushD,
                     1,(IData)(vlSelfRef.D_stage_tb__DOT__ZeroE),
                     1,vlSelfRef.D_stage_tb__DOT__BranchE,
                     1,(IData)(vlSelfRef.D_stage_tb__DOT__JumpE),
                     1,vlSelfRef.D_stage_tb__DOT__ALUResultEb0,
                     5,(IData)(vlSelfRef.D_stage_tb__DOT__RdW),
                     1,vlSelfRef.D_stage_tb__DOT__RegWriteW,
                     32,vlSelfRef.D_stage_tb__DOT__ResultW,
                     1,(0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_Read1D),
                     1,(0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_Read2D),
                     1,(3U == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD)),
                     1,(0xfU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUControlD)),
                     1,(3U == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD)),
                     1,(0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs1D)),
                     1,(0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs2D)),
                     1,(0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_RdD)),
                     1,(0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_ImmExtD),
                     1,(0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_MemSrcD)));
        if (VL_UNLIKELY(((0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_Read1D)))) {
            VL_WRITEF_NX("        Read1D:      %x vs %x\n",0,
                         32,__Vtask_D_stage_tb__DOT__run_test__4__exp_Read1D,
                         32,vlSelfRef.D_stage_tb__DOT__Read1D);
        }
        if (VL_UNLIKELY(((0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_Read2D)))) {
            VL_WRITEF_NX("        Read2D:      %x vs %x\n",0,
                         32,__Vtask_D_stage_tb__DOT__run_test__4__exp_Read2D,
                         32,vlSelfRef.D_stage_tb__DOT__Read2D);
        }
        VL_WRITEF_NX("        RegWriteD:   %b vs %b\n",0,
                     1,__Vtask_D_stage_tb__DOT__run_test__4__exp_RegWriteD,
                     1,(1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                              >> 0xcU)));
        if (VL_UNLIKELY(((3U == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD))))) {
            VL_WRITEF_NX("        ResultSrcD:  %b vs %b\n",0,
                         2,__Vtask_D_stage_tb__DOT__run_test__4__exp_ResultSrcD,
                         2,(3U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                  >> 4U)));
        }
        VL_WRITEF_NX("        MemWriteD:   %b vs %b\n        JumpD:       %b vs %b\n        BranchD:     %b vs %b\n",0,
                     1,__Vtask_D_stage_tb__DOT__run_test__4__exp_MemWriteD,
                     1,(1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                              >> 6U)),1,(IData)(__Vtask_D_stage_tb__DOT__run_test__4__exp_JumpD),
                     1,(1U & (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls)),
                     1,(IData)(__Vtask_D_stage_tb__DOT__run_test__4__exp_BranchD),
                     1,(1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                              >> 3U)));
        if (VL_UNLIKELY(((0xfU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUControlD))))) {
            VL_WRITEF_NX("        ALUControlD: %b vs %b\n",0,
                         4,__Vtask_D_stage_tb__DOT__run_test__4__exp_ALUControlD,
                         4,(IData)(vlSelfRef.D_stage_tb__DOT__ALUControlD));
        }
        if (VL_UNLIKELY(((3U == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD))))) {
            VL_WRITEF_NX("        ALUSrcD:     %b vs %b\n",0,
                         2,__Vtask_D_stage_tb__DOT__run_test__4__exp_ALUSrcD,
                         2,(3U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                  >> 7U)));
        }
        VL_WRITEF_NX("        pcD:         %x vs %x\n",0,
                     32,__Vtask_D_stage_tb__DOT__run_test__4__exp_pcD,
                     32,vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[1U]);
        if (VL_UNLIKELY(((0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs1D))))) {
            VL_WRITEF_NX("        Rs1D:        %2# vs %2#\n",0,
                         5,__Vtask_D_stage_tb__DOT__run_test__4__exp_Rs1D,
                         5,(0x1fU & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                     >> 0xfU)));
        }
        if (VL_UNLIKELY(((0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs2D))))) {
            VL_WRITEF_NX("        Rs2D:        %2# vs %2#\n",0,
                         5,__Vtask_D_stage_tb__DOT__run_test__4__exp_Rs2D,
                         5,(0x1fU & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                     >> 0x14U)));
        }
        if (VL_UNLIKELY(((0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_RdD))))) {
            VL_WRITEF_NX("        RdD:         %2# vs %2#\n",0,
                         5,__Vtask_D_stage_tb__DOT__run_test__4__exp_RdD,
                         5,(0x1fU & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                     >> 7U)));
        }
        if (VL_UNLIKELY(((0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_ImmExtD)))) {
            VL_WRITEF_NX("        ImmExtD:     %x vs %x\n",0,
                         32,__Vtask_D_stage_tb__DOT__run_test__4__exp_ImmExtD,
                         32,vlSelfRef.D_stage_tb__DOT__ImmExtD);
        }
        VL_WRITEF_NX("        PCPlus4D:    %x vs %x\n        Ecall:       %b vs %b\n        Ebreak:      %b vs %b\n",0,
                     32,__Vtask_D_stage_tb__DOT__run_test__4__exp_PCPlus4D,
                     32,vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[0U],
                     1,(IData)(__Vtask_D_stage_tb__DOT__run_test__4__exp_Ecall),
                     1,(IData)((0x73U == (0xfff0007fU 
                                          & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U]))),
                     1,__Vtask_D_stage_tb__DOT__run_test__4__exp_Ebreak,
                     1,(IData)((0x100073U == (0xfff0007fU 
                                              & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U]))));
        if (VL_UNLIKELY(((0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_MemSrcD))))) {
            VL_WRITEF_NX("        MemSrcD:     %b vs %b\n",0,
                         5,__Vtask_D_stage_tb__DOT__run_test__4__exp_MemSrcD,
                         5,((0x4000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                             ? ((0x2000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                 ? 0U : ((0x1000U & 
                                          vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                          ? 1U : 2U))
                             : ((0x2000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                 ? ((0x1000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                     ? 0U : 4U) : (
                                                   (0x1000U 
                                                    & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                    ? 8U
                                                    : 0x10U))));
        }
        if (VL_UNLIKELY(((0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_o_debug_data)))) {
            VL_WRITEF_NX("        Register %2#: %x vs %x\n",0,
                         5,vlSelfRef.D_stage_tb__DOT__i_debug_addr,
                         32,__Vtask_D_stage_tb__DOT__run_test__4__exp_o_debug_data,
                         32,vlSelfRef.D_stage_tb__DOT__o_debug_data);
        }
        vlSelfRef.D_stage_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.D_stage_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n----------- Branch Instructions -----------\n",0);
    vlSelfRef.D_stage_tb__DOT__InstrF = 0x20463U;
    vlSelfRef.D_stage_tb__DOT__pcF = 0x10U;
    vlSelfRef.D_stage_tb__DOT__PCPlus4F = 0x14U;
    vlSelfRef.D_stage_tb__DOT__mask_Read1D = 0U;
    vlSelfRef.D_stage_tb__DOT__mask_Read2D = 0U;
    vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD = 3U;
    vlSelfRef.D_stage_tb__DOT__mask_ALUControlD = 0xfU;
    vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD = 3U;
    vlSelfRef.D_stage_tb__DOT__mask_Rs1D = 0x1fU;
    vlSelfRef.D_stage_tb__DOT__mask_Rs2D = 0x1fU;
    vlSelfRef.D_stage_tb__DOT__mask_RdD = 0U;
    vlSelfRef.D_stage_tb__DOT__mask_ImmExtD = 0xffffffffU;
    vlSelfRef.D_stage_tb__DOT__mask_MemSrcD = 0U;
    vlSelfRef.D_stage_tb__DOT__mask_o_debug_data = 0U;
    vlSelfRef.D_stage_tb__DOT__i_debug_addr = 1U;
    __Vtask_D_stage_tb__DOT__run_test__5__test_name = 
        std::string{"Branch BEQ"};
    __Vtask_D_stage_tb__DOT__run_test__5__exp_o_debug_data 
        = vlSelfRef.D_stage_tb__DOT____Vxrand_h8794da3b__15;
    __Vtask_D_stage_tb__DOT__run_test__5__exp_MemSrcD 
        = vlSelfRef.D_stage_tb__DOT____Vxrand_h87975fad__7;
    __Vtask_D_stage_tb__DOT__run_test__5__exp_Ebreak = 0U;
    __Vtask_D_stage_tb__DOT__run_test__5__exp_Ecall = 0U;
    __Vtask_D_stage_tb__DOT__run_test__5__exp_PCPlus4D = 0x14U;
    __Vtask_D_stage_tb__DOT__run_test__5__exp_ImmExtD = 8U;
    __Vtask_D_stage_tb__DOT__run_test__5__exp_RdD = vlSelfRef.D_stage_tb__DOT____Vxrand_h87975fad__6;
    __Vtask_D_stage_tb__DOT__run_test__5__exp_Rs2D = 0U;
    __Vtask_D_stage_tb__DOT__run_test__5__exp_Rs1D = 4U;
    __Vtask_D_stage_tb__DOT__run_test__5__exp_pcD = 0x10U;
    __Vtask_D_stage_tb__DOT__run_test__5__exp_ALUSrcD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__5__exp_ALUControlD = 1U;
    __Vtask_D_stage_tb__DOT__run_test__5__exp_BranchD = 1U;
    __Vtask_D_stage_tb__DOT__run_test__5__exp_JumpD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__5__exp_MemWriteD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__5__exp_ResultSrcD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__5__exp_RegWriteD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__5__exp_Read2D 
        = vlSelfRef.D_stage_tb__DOT____Vxrand_h8794da3b__14;
    __Vtask_D_stage_tb__DOT__run_test__5__exp_Read1D 
        = vlSelfRef.D_stage_tb__DOT____Vxrand_h8794da3b__13;
    __Vtask_D_stage_tb__DOT__run_test__5__in_mask_o_debug_data 
        = vlSelfRef.D_stage_tb__DOT__mask_o_debug_data;
    __Vtask_D_stage_tb__DOT__run_test__5__in_mask_MemSrcD 
        = vlSelfRef.D_stage_tb__DOT__mask_MemSrcD;
    __Vtask_D_stage_tb__DOT__run_test__5__in_mask_ImmExtD 
        = vlSelfRef.D_stage_tb__DOT__mask_ImmExtD;
    __Vtask_D_stage_tb__DOT__run_test__5__in_mask_RdD 
        = vlSelfRef.D_stage_tb__DOT__mask_RdD;
    __Vtask_D_stage_tb__DOT__run_test__5__in_mask_Rs2D 
        = vlSelfRef.D_stage_tb__DOT__mask_Rs2D;
    __Vtask_D_stage_tb__DOT__run_test__5__in_mask_Rs1D 
        = vlSelfRef.D_stage_tb__DOT__mask_Rs1D;
    __Vtask_D_stage_tb__DOT__run_test__5__in_mask_ALUSrcD 
        = vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD;
    __Vtask_D_stage_tb__DOT__run_test__5__in_mask_ALUControlD 
        = vlSelfRef.D_stage_tb__DOT__mask_ALUControlD;
    __Vtask_D_stage_tb__DOT__run_test__5__in_mask_ResultSrcD 
        = vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD;
    __Vtask_D_stage_tb__DOT__run_test__5__in_mask_Read2D 
        = vlSelfRef.D_stage_tb__DOT__mask_Read2D;
    __Vtask_D_stage_tb__DOT__run_test__5__in_mask_Read1D 
        = vlSelfRef.D_stage_tb__DOT__mask_Read1D;
    __Vtask_D_stage_tb__DOT__run_test__5__in_i_debug_addr 
        = vlSelfRef.D_stage_tb__DOT__i_debug_addr;
    __Vtask_D_stage_tb__DOT__run_test__5__in_ResultW 
        = vlSelfRef.D_stage_tb__DOT__ResultW;
    __Vtask_D_stage_tb__DOT__run_test__5__in_RegWriteW 
        = vlSelfRef.D_stage_tb__DOT__RegWriteW;
    __Vtask_D_stage_tb__DOT__run_test__5__in_RdW = vlSelfRef.D_stage_tb__DOT__RdW;
    __Vtask_D_stage_tb__DOT__run_test__5__in_ALUResultEb0 
        = vlSelfRef.D_stage_tb__DOT__ALUResultEb0;
    __Vtask_D_stage_tb__DOT__run_test__5__in_JumpE 
        = vlSelfRef.D_stage_tb__DOT__JumpE;
    __Vtask_D_stage_tb__DOT__run_test__5__in_BranchE 
        = vlSelfRef.D_stage_tb__DOT__BranchE;
    __Vtask_D_stage_tb__DOT__run_test__5__in_ZeroE 
        = vlSelfRef.D_stage_tb__DOT__ZeroE;
    __Vtask_D_stage_tb__DOT__run_test__5__in_FlushD 
        = vlSelfRef.D_stage_tb__DOT__FlushD;
    __Vtask_D_stage_tb__DOT__run_test__5__in_StallD 
        = vlSelfRef.D_stage_tb__DOT__StallD;
    __Vtask_D_stage_tb__DOT__run_test__5__in_PCPlus4F 
        = vlSelfRef.D_stage_tb__DOT__PCPlus4F;
    __Vtask_D_stage_tb__DOT__run_test__5__in_pcF = vlSelfRef.D_stage_tb__DOT__pcF;
    __Vtask_D_stage_tb__DOT__run_test__5__in_InstrF 
        = vlSelfRef.D_stage_tb__DOT__InstrF;
    vlSelfRef.D_stage_tb__DOT__test_num = ((IData)(1U) 
                                           + vlSelfRef.D_stage_tb__DOT__test_num);
    vlSelfRef.D_stage_tb__DOT__InstrF = __Vtask_D_stage_tb__DOT__run_test__5__in_InstrF;
    vlSelfRef.D_stage_tb__DOT__pcF = __Vtask_D_stage_tb__DOT__run_test__5__in_pcF;
    vlSelfRef.D_stage_tb__DOT__PCPlus4F = __Vtask_D_stage_tb__DOT__run_test__5__in_PCPlus4F;
    vlSelfRef.D_stage_tb__DOT__StallD = __Vtask_D_stage_tb__DOT__run_test__5__in_StallD;
    vlSelfRef.D_stage_tb__DOT__FlushD = __Vtask_D_stage_tb__DOT__run_test__5__in_FlushD;
    vlSelfRef.D_stage_tb__DOT__ZeroE = __Vtask_D_stage_tb__DOT__run_test__5__in_ZeroE;
    vlSelfRef.D_stage_tb__DOT__BranchE = __Vtask_D_stage_tb__DOT__run_test__5__in_BranchE;
    vlSelfRef.D_stage_tb__DOT__JumpE = __Vtask_D_stage_tb__DOT__run_test__5__in_JumpE;
    vlSelfRef.D_stage_tb__DOT__ALUResultEb0 = __Vtask_D_stage_tb__DOT__run_test__5__in_ALUResultEb0;
    vlSelfRef.D_stage_tb__DOT__RdW = __Vtask_D_stage_tb__DOT__run_test__5__in_RdW;
    vlSelfRef.D_stage_tb__DOT__RegWriteW = __Vtask_D_stage_tb__DOT__run_test__5__in_RegWriteW;
    vlSelfRef.D_stage_tb__DOT__ResultW = __Vtask_D_stage_tb__DOT__run_test__5__in_ResultW;
    vlSelfRef.D_stage_tb__DOT__i_debug_addr = __Vtask_D_stage_tb__DOT__run_test__5__in_i_debug_addr;
    vlSelfRef.D_stage_tb__DOT__mask_Read1D = __Vtask_D_stage_tb__DOT__run_test__5__in_mask_Read1D;
    vlSelfRef.D_stage_tb__DOT__mask_Read2D = __Vtask_D_stage_tb__DOT__run_test__5__in_mask_Read2D;
    vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD = __Vtask_D_stage_tb__DOT__run_test__5__in_mask_ResultSrcD;
    vlSelfRef.D_stage_tb__DOT__mask_ALUControlD = __Vtask_D_stage_tb__DOT__run_test__5__in_mask_ALUControlD;
    vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD = __Vtask_D_stage_tb__DOT__run_test__5__in_mask_ALUSrcD;
    vlSelfRef.D_stage_tb__DOT__mask_Rs1D = __Vtask_D_stage_tb__DOT__run_test__5__in_mask_Rs1D;
    vlSelfRef.D_stage_tb__DOT__mask_Rs2D = __Vtask_D_stage_tb__DOT__run_test__5__in_mask_Rs2D;
    vlSelfRef.D_stage_tb__DOT__mask_RdD = __Vtask_D_stage_tb__DOT__run_test__5__in_mask_RdD;
    vlSelfRef.D_stage_tb__DOT__mask_ImmExtD = __Vtask_D_stage_tb__DOT__run_test__5__in_mask_ImmExtD;
    vlSelfRef.D_stage_tb__DOT__mask_MemSrcD = __Vtask_D_stage_tb__DOT__run_test__5__in_mask_MemSrcD;
    vlSelfRef.D_stage_tb__DOT__mask_o_debug_data = __Vtask_D_stage_tb__DOT__run_test__5__in_mask_o_debug_data;
    co_await vlSelfRef.__VtrigSched_h1a3cedb5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge D_stage_tb.clk)", 
                                                         "../../01_bench/D_stage_tb.sv", 
                                                         223);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/D_stage_tb.sv", 
                                         223);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((((((((((((((((((((((vlSelfRef.D_stage_tb__DOT__Read1D 
                                       & vlSelfRef.D_stage_tb__DOT__mask_Read1D) 
                                      == (__Vtask_D_stage_tb__DOT__run_test__5__exp_Read1D 
                                          & vlSelfRef.D_stage_tb__DOT__mask_Read1D)) 
                                     & ((vlSelfRef.D_stage_tb__DOT__Read2D 
                                         & vlSelfRef.D_stage_tb__DOT__mask_Read2D) 
                                        == (__Vtask_D_stage_tb__DOT__run_test__5__exp_Read2D 
                                            & vlSelfRef.D_stage_tb__DOT__mask_Read2D))) 
                                    & ((1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                              >> 0xcU)) 
                                       == (IData)(__Vtask_D_stage_tb__DOT__run_test__5__exp_RegWriteD))) 
                                   & ((((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                        >> 4U) & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD)) 
                                      == ((IData)(__Vtask_D_stage_tb__DOT__run_test__5__exp_ResultSrcD) 
                                          & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD)))) 
                                  & ((1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                            >> 6U)) 
                                     == (IData)(__Vtask_D_stage_tb__DOT__run_test__5__exp_MemWriteD))) 
                                 & ((1U & (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls)) 
                                    == (IData)(__Vtask_D_stage_tb__DOT__run_test__5__exp_JumpD))) 
                                & ((1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                          >> 3U)) == (IData)(__Vtask_D_stage_tb__DOT__run_test__5__exp_BranchD))) 
                               & (((IData)(vlSelfRef.D_stage_tb__DOT__ALUControlD) 
                                   & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUControlD)) 
                                  == ((IData)(__Vtask_D_stage_tb__DOT__run_test__5__exp_ALUControlD) 
                                      & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUControlD)))) 
                              & ((((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                   >> 7U) & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD)) 
                                 == ((IData)(__Vtask_D_stage_tb__DOT__run_test__5__exp_ALUSrcD) 
                                     & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD)))) 
                             & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[1U] 
                                == __Vtask_D_stage_tb__DOT__run_test__5__exp_pcD)) 
                            & ((((vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                  << 0x11U) | (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                               >> 0xfU)) 
                                & (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs1D)) 
                               == ((IData)(__Vtask_D_stage_tb__DOT__run_test__5__exp_Rs1D) 
                                   & (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs1D)))) 
                           & ((((vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                 << 0xcU) | (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                             >> 0x14U)) 
                               & (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs2D)) 
                              == ((IData)(__Vtask_D_stage_tb__DOT__run_test__5__exp_Rs2D) 
                                  & (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs2D)))) 
                          & ((((vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                << 0x19U) | (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                             >> 7U)) 
                              & (IData)(vlSelfRef.D_stage_tb__DOT__mask_RdD)) 
                             == ((IData)(__Vtask_D_stage_tb__DOT__run_test__5__exp_RdD) 
                                 & (IData)(vlSelfRef.D_stage_tb__DOT__mask_RdD)))) 
                         & ((vlSelfRef.D_stage_tb__DOT__ImmExtD 
                             & vlSelfRef.D_stage_tb__DOT__mask_ImmExtD) 
                            == (__Vtask_D_stage_tb__DOT__run_test__5__exp_ImmExtD 
                                & vlSelfRef.D_stage_tb__DOT__mask_ImmExtD))) 
                        & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[0U] 
                           == __Vtask_D_stage_tb__DOT__run_test__5__exp_PCPlus4D)) 
                       & ((IData)((0x73U == (0xfff0007fU 
                                             & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U]))) 
                          == (IData)(__Vtask_D_stage_tb__DOT__run_test__5__exp_Ecall))) 
                      & ((((0x4000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                            ? ((0x2000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                ? 0U : ((0x1000U & 
                                         vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                         ? 1U : 2U))
                            : ((0x2000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                ? ((0x1000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                    ? 0U : 4U) : ((0x1000U 
                                                   & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                   ? 8U
                                                   : 0x10U))) 
                          & (IData)(vlSelfRef.D_stage_tb__DOT__mask_MemSrcD)) 
                         == ((IData)(__Vtask_D_stage_tb__DOT__run_test__5__exp_MemSrcD) 
                             & (IData)(vlSelfRef.D_stage_tb__DOT__mask_MemSrcD)))) 
                     & ((vlSelfRef.D_stage_tb__DOT__o_debug_data 
                         & vlSelfRef.D_stage_tb__DOT__mask_o_debug_data) 
                        == (__Vtask_D_stage_tb__DOT__run_test__5__exp_o_debug_data 
                            & vlSelfRef.D_stage_tb__DOT__mask_o_debug_data))) 
                    & ((IData)((0x100073U == (0xfff0007fU 
                                              & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U]))) 
                       == (IData)(__Vtask_D_stage_tb__DOT__run_test__5__exp_Ebreak)))))) {
        VL_WRITEF_NX("%02d \342\234\205 %@\n    Instruction: %x\n    Register x%2#: %x\n",0,
                     32,vlSelfRef.D_stage_tb__DOT__test_num,
                     -1,&(__Vtask_D_stage_tb__DOT__run_test__5__test_name),
                     32,vlSelfRef.D_stage_tb__DOT__InstrF,
                     5,(IData)(vlSelfRef.D_stage_tb__DOT__i_debug_addr),
                     32,vlSelfRef.D_stage_tb__DOT__o_debug_data);
        vlSelfRef.D_stage_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.D_stage_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214 %@\n    Instruction: %b\n    Inputs:\n        pcF=%x PCPlus4F=%x\n        StallD=%b FlushD=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n        RdW=%2# RegWriteW=%b ResultW=%x\n    Bit Mask:\n        mask_Read1D=%b\n        mask_Read2D=%b\n        mask_ResultSrcD=%b\n        mask_ALUControlD=%b\n        mask_ALUSrcD=%b\n        mask_Rs1D=%b\n        mask_Rs2D=%b\n        mask_RdD=%b\n        mask_ImmExtD=%b\n        mask_MemSrcD=%b\n    Expected vs Actual:\n",0,
                     32,vlSelfRef.D_stage_tb__DOT__test_num,
                     -1,&(__Vtask_D_stage_tb__DOT__run_test__5__test_name),
                     32,vlSelfRef.D_stage_tb__DOT__InstrF,
                     32,vlSelfRef.D_stage_tb__DOT__pcF,
                     32,vlSelfRef.D_stage_tb__DOT__PCPlus4F,
                     1,(IData)(vlSelfRef.D_stage_tb__DOT__StallD),
                     1,vlSelfRef.D_stage_tb__DOT__FlushD,
                     1,(IData)(vlSelfRef.D_stage_tb__DOT__ZeroE),
                     1,vlSelfRef.D_stage_tb__DOT__BranchE,
                     1,(IData)(vlSelfRef.D_stage_tb__DOT__JumpE),
                     1,vlSelfRef.D_stage_tb__DOT__ALUResultEb0,
                     5,(IData)(vlSelfRef.D_stage_tb__DOT__RdW),
                     1,vlSelfRef.D_stage_tb__DOT__RegWriteW,
                     32,vlSelfRef.D_stage_tb__DOT__ResultW,
                     1,(0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_Read1D),
                     1,(0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_Read2D),
                     1,(3U == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD)),
                     1,(0xfU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUControlD)),
                     1,(3U == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD)),
                     1,(0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs1D)),
                     1,(0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs2D)),
                     1,(0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_RdD)),
                     1,(0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_ImmExtD),
                     1,(0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_MemSrcD)));
        if (VL_UNLIKELY(((0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_Read1D)))) {
            VL_WRITEF_NX("        Read1D:      %x vs %x\n",0,
                         32,__Vtask_D_stage_tb__DOT__run_test__5__exp_Read1D,
                         32,vlSelfRef.D_stage_tb__DOT__Read1D);
        }
        if (VL_UNLIKELY(((0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_Read2D)))) {
            VL_WRITEF_NX("        Read2D:      %x vs %x\n",0,
                         32,__Vtask_D_stage_tb__DOT__run_test__5__exp_Read2D,
                         32,vlSelfRef.D_stage_tb__DOT__Read2D);
        }
        VL_WRITEF_NX("        RegWriteD:   %b vs %b\n",0,
                     1,__Vtask_D_stage_tb__DOT__run_test__5__exp_RegWriteD,
                     1,(1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                              >> 0xcU)));
        if (VL_UNLIKELY(((3U == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD))))) {
            VL_WRITEF_NX("        ResultSrcD:  %b vs %b\n",0,
                         2,__Vtask_D_stage_tb__DOT__run_test__5__exp_ResultSrcD,
                         2,(3U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                  >> 4U)));
        }
        VL_WRITEF_NX("        MemWriteD:   %b vs %b\n        JumpD:       %b vs %b\n        BranchD:     %b vs %b\n",0,
                     1,__Vtask_D_stage_tb__DOT__run_test__5__exp_MemWriteD,
                     1,(1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                              >> 6U)),1,(IData)(__Vtask_D_stage_tb__DOT__run_test__5__exp_JumpD),
                     1,(1U & (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls)),
                     1,(IData)(__Vtask_D_stage_tb__DOT__run_test__5__exp_BranchD),
                     1,(1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                              >> 3U)));
        if (VL_UNLIKELY(((0xfU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUControlD))))) {
            VL_WRITEF_NX("        ALUControlD: %b vs %b\n",0,
                         4,__Vtask_D_stage_tb__DOT__run_test__5__exp_ALUControlD,
                         4,(IData)(vlSelfRef.D_stage_tb__DOT__ALUControlD));
        }
        if (VL_UNLIKELY(((3U == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD))))) {
            VL_WRITEF_NX("        ALUSrcD:     %b vs %b\n",0,
                         2,__Vtask_D_stage_tb__DOT__run_test__5__exp_ALUSrcD,
                         2,(3U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                  >> 7U)));
        }
        VL_WRITEF_NX("        pcD:         %x vs %x\n",0,
                     32,__Vtask_D_stage_tb__DOT__run_test__5__exp_pcD,
                     32,vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[1U]);
        if (VL_UNLIKELY(((0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs1D))))) {
            VL_WRITEF_NX("        Rs1D:        %2# vs %2#\n",0,
                         5,__Vtask_D_stage_tb__DOT__run_test__5__exp_Rs1D,
                         5,(0x1fU & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                     >> 0xfU)));
        }
        if (VL_UNLIKELY(((0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs2D))))) {
            VL_WRITEF_NX("        Rs2D:        %2# vs %2#\n",0,
                         5,__Vtask_D_stage_tb__DOT__run_test__5__exp_Rs2D,
                         5,(0x1fU & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                     >> 0x14U)));
        }
        if (VL_UNLIKELY(((0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_RdD))))) {
            VL_WRITEF_NX("        RdD:         %2# vs %2#\n",0,
                         5,__Vtask_D_stage_tb__DOT__run_test__5__exp_RdD,
                         5,(0x1fU & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                     >> 7U)));
        }
        if (VL_UNLIKELY(((0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_ImmExtD)))) {
            VL_WRITEF_NX("        ImmExtD:     %x vs %x\n",0,
                         32,__Vtask_D_stage_tb__DOT__run_test__5__exp_ImmExtD,
                         32,vlSelfRef.D_stage_tb__DOT__ImmExtD);
        }
        VL_WRITEF_NX("        PCPlus4D:    %x vs %x\n        Ecall:       %b vs %b\n        Ebreak:      %b vs %b\n",0,
                     32,__Vtask_D_stage_tb__DOT__run_test__5__exp_PCPlus4D,
                     32,vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[0U],
                     1,(IData)(__Vtask_D_stage_tb__DOT__run_test__5__exp_Ecall),
                     1,(IData)((0x73U == (0xfff0007fU 
                                          & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U]))),
                     1,__Vtask_D_stage_tb__DOT__run_test__5__exp_Ebreak,
                     1,(IData)((0x100073U == (0xfff0007fU 
                                              & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U]))));
        if (VL_UNLIKELY(((0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_MemSrcD))))) {
            VL_WRITEF_NX("        MemSrcD:     %b vs %b\n",0,
                         5,__Vtask_D_stage_tb__DOT__run_test__5__exp_MemSrcD,
                         5,((0x4000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                             ? ((0x2000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                 ? 0U : ((0x1000U & 
                                          vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                          ? 1U : 2U))
                             : ((0x2000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                 ? ((0x1000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                     ? 0U : 4U) : (
                                                   (0x1000U 
                                                    & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                    ? 8U
                                                    : 0x10U))));
        }
        if (VL_UNLIKELY(((0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_o_debug_data)))) {
            VL_WRITEF_NX("        Register %2#: %x vs %x\n",0,
                         5,vlSelfRef.D_stage_tb__DOT__i_debug_addr,
                         32,__Vtask_D_stage_tb__DOT__run_test__5__exp_o_debug_data,
                         32,vlSelfRef.D_stage_tb__DOT__o_debug_data);
        }
        vlSelfRef.D_stage_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.D_stage_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n----------- Jump Instructions -----------\n",0);
    vlSelfRef.D_stage_tb__DOT__InstrF = 0x8001efU;
    vlSelfRef.D_stage_tb__DOT__pcF = 0x14U;
    vlSelfRef.D_stage_tb__DOT__PCPlus4F = 0x18U;
    vlSelfRef.D_stage_tb__DOT__mask_Read1D = 0U;
    vlSelfRef.D_stage_tb__DOT__mask_Read2D = 0U;
    vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD = 3U;
    vlSelfRef.D_stage_tb__DOT__mask_ALUControlD = 0xfU;
    vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD = 3U;
    vlSelfRef.D_stage_tb__DOT__mask_Rs1D = 0U;
    vlSelfRef.D_stage_tb__DOT__mask_Rs2D = 0U;
    vlSelfRef.D_stage_tb__DOT__mask_RdD = 0x1fU;
    vlSelfRef.D_stage_tb__DOT__mask_ImmExtD = 0xffffffffU;
    vlSelfRef.D_stage_tb__DOT__mask_MemSrcD = 0U;
    vlSelfRef.D_stage_tb__DOT__mask_o_debug_data = 0U;
    vlSelfRef.D_stage_tb__DOT__i_debug_addr = 1U;
    __Vtask_D_stage_tb__DOT__run_test__6__test_name = 
        std::string{"Jump JAL"};
    __Vtask_D_stage_tb__DOT__run_test__6__exp_o_debug_data 
        = vlSelfRef.D_stage_tb__DOT____Vxrand_h8794da3b__18;
    __Vtask_D_stage_tb__DOT__run_test__6__exp_MemSrcD 
        = vlSelfRef.D_stage_tb__DOT____Vxrand_h87975fad__10;
    __Vtask_D_stage_tb__DOT__run_test__6__exp_Ebreak = 0U;
    __Vtask_D_stage_tb__DOT__run_test__6__exp_Ecall = 0U;
    __Vtask_D_stage_tb__DOT__run_test__6__exp_PCPlus4D = 0x18U;
    __Vtask_D_stage_tb__DOT__run_test__6__exp_ImmExtD = 8U;
    __Vtask_D_stage_tb__DOT__run_test__6__exp_RdD = 3U;
    __Vtask_D_stage_tb__DOT__run_test__6__exp_Rs2D 
        = vlSelfRef.D_stage_tb__DOT____Vxrand_h87975fad__9;
    __Vtask_D_stage_tb__DOT__run_test__6__exp_Rs1D 
        = vlSelfRef.D_stage_tb__DOT____Vxrand_h87975fad__8;
    __Vtask_D_stage_tb__DOT__run_test__6__exp_pcD = 0x14U;
    __Vtask_D_stage_tb__DOT__run_test__6__exp_ALUSrcD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__6__exp_ALUControlD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__6__exp_BranchD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__6__exp_JumpD = 1U;
    __Vtask_D_stage_tb__DOT__run_test__6__exp_MemWriteD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__6__exp_ResultSrcD = 2U;
    __Vtask_D_stage_tb__DOT__run_test__6__exp_RegWriteD = 1U;
    __Vtask_D_stage_tb__DOT__run_test__6__exp_Read2D 
        = vlSelfRef.D_stage_tb__DOT____Vxrand_h8794da3b__17;
    __Vtask_D_stage_tb__DOT__run_test__6__exp_Read1D 
        = vlSelfRef.D_stage_tb__DOT____Vxrand_h8794da3b__16;
    __Vtask_D_stage_tb__DOT__run_test__6__in_mask_o_debug_data 
        = vlSelfRef.D_stage_tb__DOT__mask_o_debug_data;
    __Vtask_D_stage_tb__DOT__run_test__6__in_mask_MemSrcD 
        = vlSelfRef.D_stage_tb__DOT__mask_MemSrcD;
    __Vtask_D_stage_tb__DOT__run_test__6__in_mask_ImmExtD 
        = vlSelfRef.D_stage_tb__DOT__mask_ImmExtD;
    __Vtask_D_stage_tb__DOT__run_test__6__in_mask_RdD 
        = vlSelfRef.D_stage_tb__DOT__mask_RdD;
    __Vtask_D_stage_tb__DOT__run_test__6__in_mask_Rs2D 
        = vlSelfRef.D_stage_tb__DOT__mask_Rs2D;
    __Vtask_D_stage_tb__DOT__run_test__6__in_mask_Rs1D 
        = vlSelfRef.D_stage_tb__DOT__mask_Rs1D;
    __Vtask_D_stage_tb__DOT__run_test__6__in_mask_ALUSrcD 
        = vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD;
    __Vtask_D_stage_tb__DOT__run_test__6__in_mask_ALUControlD 
        = vlSelfRef.D_stage_tb__DOT__mask_ALUControlD;
    __Vtask_D_stage_tb__DOT__run_test__6__in_mask_ResultSrcD 
        = vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD;
    __Vtask_D_stage_tb__DOT__run_test__6__in_mask_Read2D 
        = vlSelfRef.D_stage_tb__DOT__mask_Read2D;
    __Vtask_D_stage_tb__DOT__run_test__6__in_mask_Read1D 
        = vlSelfRef.D_stage_tb__DOT__mask_Read1D;
    __Vtask_D_stage_tb__DOT__run_test__6__in_i_debug_addr 
        = vlSelfRef.D_stage_tb__DOT__i_debug_addr;
    __Vtask_D_stage_tb__DOT__run_test__6__in_ResultW 
        = vlSelfRef.D_stage_tb__DOT__ResultW;
    __Vtask_D_stage_tb__DOT__run_test__6__in_RegWriteW 
        = vlSelfRef.D_stage_tb__DOT__RegWriteW;
    __Vtask_D_stage_tb__DOT__run_test__6__in_RdW = vlSelfRef.D_stage_tb__DOT__RdW;
    __Vtask_D_stage_tb__DOT__run_test__6__in_ALUResultEb0 
        = vlSelfRef.D_stage_tb__DOT__ALUResultEb0;
    __Vtask_D_stage_tb__DOT__run_test__6__in_JumpE 
        = vlSelfRef.D_stage_tb__DOT__JumpE;
    __Vtask_D_stage_tb__DOT__run_test__6__in_BranchE 
        = vlSelfRef.D_stage_tb__DOT__BranchE;
    __Vtask_D_stage_tb__DOT__run_test__6__in_ZeroE 
        = vlSelfRef.D_stage_tb__DOT__ZeroE;
    __Vtask_D_stage_tb__DOT__run_test__6__in_FlushD 
        = vlSelfRef.D_stage_tb__DOT__FlushD;
    __Vtask_D_stage_tb__DOT__run_test__6__in_StallD 
        = vlSelfRef.D_stage_tb__DOT__StallD;
    __Vtask_D_stage_tb__DOT__run_test__6__in_PCPlus4F 
        = vlSelfRef.D_stage_tb__DOT__PCPlus4F;
    __Vtask_D_stage_tb__DOT__run_test__6__in_pcF = vlSelfRef.D_stage_tb__DOT__pcF;
    __Vtask_D_stage_tb__DOT__run_test__6__in_InstrF 
        = vlSelfRef.D_stage_tb__DOT__InstrF;
    vlSelfRef.D_stage_tb__DOT__test_num = ((IData)(1U) 
                                           + vlSelfRef.D_stage_tb__DOT__test_num);
    vlSelfRef.D_stage_tb__DOT__InstrF = __Vtask_D_stage_tb__DOT__run_test__6__in_InstrF;
    vlSelfRef.D_stage_tb__DOT__pcF = __Vtask_D_stage_tb__DOT__run_test__6__in_pcF;
    vlSelfRef.D_stage_tb__DOT__PCPlus4F = __Vtask_D_stage_tb__DOT__run_test__6__in_PCPlus4F;
    vlSelfRef.D_stage_tb__DOT__StallD = __Vtask_D_stage_tb__DOT__run_test__6__in_StallD;
    vlSelfRef.D_stage_tb__DOT__FlushD = __Vtask_D_stage_tb__DOT__run_test__6__in_FlushD;
    vlSelfRef.D_stage_tb__DOT__ZeroE = __Vtask_D_stage_tb__DOT__run_test__6__in_ZeroE;
    vlSelfRef.D_stage_tb__DOT__BranchE = __Vtask_D_stage_tb__DOT__run_test__6__in_BranchE;
    vlSelfRef.D_stage_tb__DOT__JumpE = __Vtask_D_stage_tb__DOT__run_test__6__in_JumpE;
    vlSelfRef.D_stage_tb__DOT__ALUResultEb0 = __Vtask_D_stage_tb__DOT__run_test__6__in_ALUResultEb0;
    vlSelfRef.D_stage_tb__DOT__RdW = __Vtask_D_stage_tb__DOT__run_test__6__in_RdW;
    vlSelfRef.D_stage_tb__DOT__RegWriteW = __Vtask_D_stage_tb__DOT__run_test__6__in_RegWriteW;
    vlSelfRef.D_stage_tb__DOT__ResultW = __Vtask_D_stage_tb__DOT__run_test__6__in_ResultW;
    vlSelfRef.D_stage_tb__DOT__i_debug_addr = __Vtask_D_stage_tb__DOT__run_test__6__in_i_debug_addr;
    vlSelfRef.D_stage_tb__DOT__mask_Read1D = __Vtask_D_stage_tb__DOT__run_test__6__in_mask_Read1D;
    vlSelfRef.D_stage_tb__DOT__mask_Read2D = __Vtask_D_stage_tb__DOT__run_test__6__in_mask_Read2D;
    vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD = __Vtask_D_stage_tb__DOT__run_test__6__in_mask_ResultSrcD;
    vlSelfRef.D_stage_tb__DOT__mask_ALUControlD = __Vtask_D_stage_tb__DOT__run_test__6__in_mask_ALUControlD;
    vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD = __Vtask_D_stage_tb__DOT__run_test__6__in_mask_ALUSrcD;
    vlSelfRef.D_stage_tb__DOT__mask_Rs1D = __Vtask_D_stage_tb__DOT__run_test__6__in_mask_Rs1D;
    vlSelfRef.D_stage_tb__DOT__mask_Rs2D = __Vtask_D_stage_tb__DOT__run_test__6__in_mask_Rs2D;
    vlSelfRef.D_stage_tb__DOT__mask_RdD = __Vtask_D_stage_tb__DOT__run_test__6__in_mask_RdD;
    vlSelfRef.D_stage_tb__DOT__mask_ImmExtD = __Vtask_D_stage_tb__DOT__run_test__6__in_mask_ImmExtD;
    vlSelfRef.D_stage_tb__DOT__mask_MemSrcD = __Vtask_D_stage_tb__DOT__run_test__6__in_mask_MemSrcD;
    vlSelfRef.D_stage_tb__DOT__mask_o_debug_data = __Vtask_D_stage_tb__DOT__run_test__6__in_mask_o_debug_data;
    co_await vlSelfRef.__VtrigSched_h1a3cedb5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge D_stage_tb.clk)", 
                                                         "../../01_bench/D_stage_tb.sv", 
                                                         223);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/D_stage_tb.sv", 
                                         223);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((((((((((((((((((((((vlSelfRef.D_stage_tb__DOT__Read1D 
                                       & vlSelfRef.D_stage_tb__DOT__mask_Read1D) 
                                      == (__Vtask_D_stage_tb__DOT__run_test__6__exp_Read1D 
                                          & vlSelfRef.D_stage_tb__DOT__mask_Read1D)) 
                                     & ((vlSelfRef.D_stage_tb__DOT__Read2D 
                                         & vlSelfRef.D_stage_tb__DOT__mask_Read2D) 
                                        == (__Vtask_D_stage_tb__DOT__run_test__6__exp_Read2D 
                                            & vlSelfRef.D_stage_tb__DOT__mask_Read2D))) 
                                    & ((1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                              >> 0xcU)) 
                                       == (IData)(__Vtask_D_stage_tb__DOT__run_test__6__exp_RegWriteD))) 
                                   & ((((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                        >> 4U) & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD)) 
                                      == ((IData)(__Vtask_D_stage_tb__DOT__run_test__6__exp_ResultSrcD) 
                                          & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD)))) 
                                  & ((1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                            >> 6U)) 
                                     == (IData)(__Vtask_D_stage_tb__DOT__run_test__6__exp_MemWriteD))) 
                                 & ((1U & (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls)) 
                                    == (IData)(__Vtask_D_stage_tb__DOT__run_test__6__exp_JumpD))) 
                                & ((1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                          >> 3U)) == (IData)(__Vtask_D_stage_tb__DOT__run_test__6__exp_BranchD))) 
                               & (((IData)(vlSelfRef.D_stage_tb__DOT__ALUControlD) 
                                   & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUControlD)) 
                                  == ((IData)(__Vtask_D_stage_tb__DOT__run_test__6__exp_ALUControlD) 
                                      & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUControlD)))) 
                              & ((((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                   >> 7U) & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD)) 
                                 == ((IData)(__Vtask_D_stage_tb__DOT__run_test__6__exp_ALUSrcD) 
                                     & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD)))) 
                             & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[1U] 
                                == __Vtask_D_stage_tb__DOT__run_test__6__exp_pcD)) 
                            & ((((vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                  << 0x11U) | (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                               >> 0xfU)) 
                                & (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs1D)) 
                               == ((IData)(__Vtask_D_stage_tb__DOT__run_test__6__exp_Rs1D) 
                                   & (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs1D)))) 
                           & ((((vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                 << 0xcU) | (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                             >> 0x14U)) 
                               & (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs2D)) 
                              == ((IData)(__Vtask_D_stage_tb__DOT__run_test__6__exp_Rs2D) 
                                  & (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs2D)))) 
                          & ((((vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                << 0x19U) | (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                             >> 7U)) 
                              & (IData)(vlSelfRef.D_stage_tb__DOT__mask_RdD)) 
                             == ((IData)(__Vtask_D_stage_tb__DOT__run_test__6__exp_RdD) 
                                 & (IData)(vlSelfRef.D_stage_tb__DOT__mask_RdD)))) 
                         & ((vlSelfRef.D_stage_tb__DOT__ImmExtD 
                             & vlSelfRef.D_stage_tb__DOT__mask_ImmExtD) 
                            == (__Vtask_D_stage_tb__DOT__run_test__6__exp_ImmExtD 
                                & vlSelfRef.D_stage_tb__DOT__mask_ImmExtD))) 
                        & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[0U] 
                           == __Vtask_D_stage_tb__DOT__run_test__6__exp_PCPlus4D)) 
                       & ((IData)((0x73U == (0xfff0007fU 
                                             & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U]))) 
                          == (IData)(__Vtask_D_stage_tb__DOT__run_test__6__exp_Ecall))) 
                      & ((((0x4000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                            ? ((0x2000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                ? 0U : ((0x1000U & 
                                         vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                         ? 1U : 2U))
                            : ((0x2000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                ? ((0x1000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                    ? 0U : 4U) : ((0x1000U 
                                                   & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                   ? 8U
                                                   : 0x10U))) 
                          & (IData)(vlSelfRef.D_stage_tb__DOT__mask_MemSrcD)) 
                         == ((IData)(__Vtask_D_stage_tb__DOT__run_test__6__exp_MemSrcD) 
                             & (IData)(vlSelfRef.D_stage_tb__DOT__mask_MemSrcD)))) 
                     & ((vlSelfRef.D_stage_tb__DOT__o_debug_data 
                         & vlSelfRef.D_stage_tb__DOT__mask_o_debug_data) 
                        == (__Vtask_D_stage_tb__DOT__run_test__6__exp_o_debug_data 
                            & vlSelfRef.D_stage_tb__DOT__mask_o_debug_data))) 
                    & ((IData)((0x100073U == (0xfff0007fU 
                                              & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U]))) 
                       == (IData)(__Vtask_D_stage_tb__DOT__run_test__6__exp_Ebreak)))))) {
        VL_WRITEF_NX("%02d \342\234\205 %@\n    Instruction: %x\n    Register x%2#: %x\n",0,
                     32,vlSelfRef.D_stage_tb__DOT__test_num,
                     -1,&(__Vtask_D_stage_tb__DOT__run_test__6__test_name),
                     32,vlSelfRef.D_stage_tb__DOT__InstrF,
                     5,(IData)(vlSelfRef.D_stage_tb__DOT__i_debug_addr),
                     32,vlSelfRef.D_stage_tb__DOT__o_debug_data);
        vlSelfRef.D_stage_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.D_stage_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214 %@\n    Instruction: %b\n    Inputs:\n        pcF=%x PCPlus4F=%x\n        StallD=%b FlushD=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n        RdW=%2# RegWriteW=%b ResultW=%x\n    Bit Mask:\n        mask_Read1D=%b\n        mask_Read2D=%b\n        mask_ResultSrcD=%b\n        mask_ALUControlD=%b\n        mask_ALUSrcD=%b\n        mask_Rs1D=%b\n        mask_Rs2D=%b\n        mask_RdD=%b\n        mask_ImmExtD=%b\n        mask_MemSrcD=%b\n    Expected vs Actual:\n",0,
                     32,vlSelfRef.D_stage_tb__DOT__test_num,
                     -1,&(__Vtask_D_stage_tb__DOT__run_test__6__test_name),
                     32,vlSelfRef.D_stage_tb__DOT__InstrF,
                     32,vlSelfRef.D_stage_tb__DOT__pcF,
                     32,vlSelfRef.D_stage_tb__DOT__PCPlus4F,
                     1,(IData)(vlSelfRef.D_stage_tb__DOT__StallD),
                     1,vlSelfRef.D_stage_tb__DOT__FlushD,
                     1,(IData)(vlSelfRef.D_stage_tb__DOT__ZeroE),
                     1,vlSelfRef.D_stage_tb__DOT__BranchE,
                     1,(IData)(vlSelfRef.D_stage_tb__DOT__JumpE),
                     1,vlSelfRef.D_stage_tb__DOT__ALUResultEb0,
                     5,(IData)(vlSelfRef.D_stage_tb__DOT__RdW),
                     1,vlSelfRef.D_stage_tb__DOT__RegWriteW,
                     32,vlSelfRef.D_stage_tb__DOT__ResultW,
                     1,(0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_Read1D),
                     1,(0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_Read2D),
                     1,(3U == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD)),
                     1,(0xfU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUControlD)),
                     1,(3U == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD)),
                     1,(0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs1D)),
                     1,(0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs2D)),
                     1,(0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_RdD)),
                     1,(0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_ImmExtD),
                     1,(0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_MemSrcD)));
        if (VL_UNLIKELY(((0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_Read1D)))) {
            VL_WRITEF_NX("        Read1D:      %x vs %x\n",0,
                         32,__Vtask_D_stage_tb__DOT__run_test__6__exp_Read1D,
                         32,vlSelfRef.D_stage_tb__DOT__Read1D);
        }
        if (VL_UNLIKELY(((0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_Read2D)))) {
            VL_WRITEF_NX("        Read2D:      %x vs %x\n",0,
                         32,__Vtask_D_stage_tb__DOT__run_test__6__exp_Read2D,
                         32,vlSelfRef.D_stage_tb__DOT__Read2D);
        }
        VL_WRITEF_NX("        RegWriteD:   %b vs %b\n",0,
                     1,__Vtask_D_stage_tb__DOT__run_test__6__exp_RegWriteD,
                     1,(1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                              >> 0xcU)));
        if (VL_UNLIKELY(((3U == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD))))) {
            VL_WRITEF_NX("        ResultSrcD:  %b vs %b\n",0,
                         2,__Vtask_D_stage_tb__DOT__run_test__6__exp_ResultSrcD,
                         2,(3U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                  >> 4U)));
        }
        VL_WRITEF_NX("        MemWriteD:   %b vs %b\n        JumpD:       %b vs %b\n        BranchD:     %b vs %b\n",0,
                     1,__Vtask_D_stage_tb__DOT__run_test__6__exp_MemWriteD,
                     1,(1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                              >> 6U)),1,(IData)(__Vtask_D_stage_tb__DOT__run_test__6__exp_JumpD),
                     1,(1U & (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls)),
                     1,(IData)(__Vtask_D_stage_tb__DOT__run_test__6__exp_BranchD),
                     1,(1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                              >> 3U)));
        if (VL_UNLIKELY(((0xfU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUControlD))))) {
            VL_WRITEF_NX("        ALUControlD: %b vs %b\n",0,
                         4,__Vtask_D_stage_tb__DOT__run_test__6__exp_ALUControlD,
                         4,(IData)(vlSelfRef.D_stage_tb__DOT__ALUControlD));
        }
        if (VL_UNLIKELY(((3U == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD))))) {
            VL_WRITEF_NX("        ALUSrcD:     %b vs %b\n",0,
                         2,__Vtask_D_stage_tb__DOT__run_test__6__exp_ALUSrcD,
                         2,(3U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                  >> 7U)));
        }
        VL_WRITEF_NX("        pcD:         %x vs %x\n",0,
                     32,__Vtask_D_stage_tb__DOT__run_test__6__exp_pcD,
                     32,vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[1U]);
        if (VL_UNLIKELY(((0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs1D))))) {
            VL_WRITEF_NX("        Rs1D:        %2# vs %2#\n",0,
                         5,__Vtask_D_stage_tb__DOT__run_test__6__exp_Rs1D,
                         5,(0x1fU & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                     >> 0xfU)));
        }
        if (VL_UNLIKELY(((0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs2D))))) {
            VL_WRITEF_NX("        Rs2D:        %2# vs %2#\n",0,
                         5,__Vtask_D_stage_tb__DOT__run_test__6__exp_Rs2D,
                         5,(0x1fU & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                     >> 0x14U)));
        }
        if (VL_UNLIKELY(((0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_RdD))))) {
            VL_WRITEF_NX("        RdD:         %2# vs %2#\n",0,
                         5,__Vtask_D_stage_tb__DOT__run_test__6__exp_RdD,
                         5,(0x1fU & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                     >> 7U)));
        }
        if (VL_UNLIKELY(((0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_ImmExtD)))) {
            VL_WRITEF_NX("        ImmExtD:     %x vs %x\n",0,
                         32,__Vtask_D_stage_tb__DOT__run_test__6__exp_ImmExtD,
                         32,vlSelfRef.D_stage_tb__DOT__ImmExtD);
        }
        VL_WRITEF_NX("        PCPlus4D:    %x vs %x\n        Ecall:       %b vs %b\n        Ebreak:      %b vs %b\n",0,
                     32,__Vtask_D_stage_tb__DOT__run_test__6__exp_PCPlus4D,
                     32,vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[0U],
                     1,(IData)(__Vtask_D_stage_tb__DOT__run_test__6__exp_Ecall),
                     1,(IData)((0x73U == (0xfff0007fU 
                                          & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U]))),
                     1,__Vtask_D_stage_tb__DOT__run_test__6__exp_Ebreak,
                     1,(IData)((0x100073U == (0xfff0007fU 
                                              & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U]))));
        if (VL_UNLIKELY(((0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_MemSrcD))))) {
            VL_WRITEF_NX("        MemSrcD:     %b vs %b\n",0,
                         5,__Vtask_D_stage_tb__DOT__run_test__6__exp_MemSrcD,
                         5,((0x4000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                             ? ((0x2000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                 ? 0U : ((0x1000U & 
                                          vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                          ? 1U : 2U))
                             : ((0x2000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                 ? ((0x1000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                     ? 0U : 4U) : (
                                                   (0x1000U 
                                                    & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                    ? 8U
                                                    : 0x10U))));
        }
        if (VL_UNLIKELY(((0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_o_debug_data)))) {
            VL_WRITEF_NX("        Register %2#: %x vs %x\n",0,
                         5,vlSelfRef.D_stage_tb__DOT__i_debug_addr,
                         32,__Vtask_D_stage_tb__DOT__run_test__6__exp_o_debug_data,
                         32,vlSelfRef.D_stage_tb__DOT__o_debug_data);
        }
        vlSelfRef.D_stage_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.D_stage_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n----------- System Instructions -----------\n",0);
    vlSelfRef.D_stage_tb__DOT__InstrF = 0x73U;
    vlSelfRef.D_stage_tb__DOT__pcF = 0x1cU;
    vlSelfRef.D_stage_tb__DOT__PCPlus4F = 0x20U;
    vlSelfRef.D_stage_tb__DOT__StallD = 0U;
    vlSelfRef.D_stage_tb__DOT__FlushD = 0U;
    vlSelfRef.D_stage_tb__DOT__mask_Read1D = 0xffffffffU;
    vlSelfRef.D_stage_tb__DOT__mask_Read2D = 0xffffffffU;
    vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD = 3U;
    vlSelfRef.D_stage_tb__DOT__mask_ALUControlD = 0xfU;
    vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD = 3U;
    vlSelfRef.D_stage_tb__DOT__mask_Rs1D = 0x1fU;
    vlSelfRef.D_stage_tb__DOT__mask_Rs2D = 0x1fU;
    vlSelfRef.D_stage_tb__DOT__mask_RdD = 0x1fU;
    vlSelfRef.D_stage_tb__DOT__mask_ImmExtD = 0xffffffffU;
    vlSelfRef.D_stage_tb__DOT__mask_MemSrcD = 0U;
    vlSelfRef.D_stage_tb__DOT__mask_o_debug_data = 0U;
    vlSelfRef.D_stage_tb__DOT__i_debug_addr = 1U;
    __Vtask_D_stage_tb__DOT__run_test__7__test_name = 
        std::string{"System ECALL"};
    __Vtask_D_stage_tb__DOT__run_test__7__exp_o_debug_data 
        = vlSelfRef.D_stage_tb__DOT____Vxrand_h8794da3b__19;
    __Vtask_D_stage_tb__DOT__run_test__7__exp_MemSrcD 
        = vlSelfRef.D_stage_tb__DOT____Vxrand_h87975fad__11;
    __Vtask_D_stage_tb__DOT__run_test__7__exp_Ebreak = 0U;
    __Vtask_D_stage_tb__DOT__run_test__7__exp_Ecall = 1U;
    __Vtask_D_stage_tb__DOT__run_test__7__exp_PCPlus4D = 0x20U;
    __Vtask_D_stage_tb__DOT__run_test__7__exp_ImmExtD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__7__exp_RdD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__7__exp_Rs2D = 0U;
    __Vtask_D_stage_tb__DOT__run_test__7__exp_Rs1D = 0U;
    __Vtask_D_stage_tb__DOT__run_test__7__exp_pcD = 0x1cU;
    __Vtask_D_stage_tb__DOT__run_test__7__exp_ALUSrcD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__7__exp_ALUControlD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__7__exp_BranchD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__7__exp_JumpD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__7__exp_MemWriteD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__7__exp_ResultSrcD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__7__exp_RegWriteD = 0U;
    __Vtask_D_stage_tb__DOT__run_test__7__exp_Read2D = 0U;
    __Vtask_D_stage_tb__DOT__run_test__7__exp_Read1D = 0U;
    __Vtask_D_stage_tb__DOT__run_test__7__in_mask_o_debug_data 
        = vlSelfRef.D_stage_tb__DOT__mask_o_debug_data;
    __Vtask_D_stage_tb__DOT__run_test__7__in_mask_MemSrcD 
        = vlSelfRef.D_stage_tb__DOT__mask_MemSrcD;
    __Vtask_D_stage_tb__DOT__run_test__7__in_mask_ImmExtD 
        = vlSelfRef.D_stage_tb__DOT__mask_ImmExtD;
    __Vtask_D_stage_tb__DOT__run_test__7__in_mask_RdD 
        = vlSelfRef.D_stage_tb__DOT__mask_RdD;
    __Vtask_D_stage_tb__DOT__run_test__7__in_mask_Rs2D 
        = vlSelfRef.D_stage_tb__DOT__mask_Rs2D;
    __Vtask_D_stage_tb__DOT__run_test__7__in_mask_Rs1D 
        = vlSelfRef.D_stage_tb__DOT__mask_Rs1D;
    __Vtask_D_stage_tb__DOT__run_test__7__in_mask_ALUSrcD 
        = vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD;
    __Vtask_D_stage_tb__DOT__run_test__7__in_mask_ALUControlD 
        = vlSelfRef.D_stage_tb__DOT__mask_ALUControlD;
    __Vtask_D_stage_tb__DOT__run_test__7__in_mask_ResultSrcD 
        = vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD;
    __Vtask_D_stage_tb__DOT__run_test__7__in_mask_Read2D 
        = vlSelfRef.D_stage_tb__DOT__mask_Read2D;
    __Vtask_D_stage_tb__DOT__run_test__7__in_mask_Read1D 
        = vlSelfRef.D_stage_tb__DOT__mask_Read1D;
    __Vtask_D_stage_tb__DOT__run_test__7__in_i_debug_addr 
        = vlSelfRef.D_stage_tb__DOT__i_debug_addr;
    __Vtask_D_stage_tb__DOT__run_test__7__in_ResultW 
        = vlSelfRef.D_stage_tb__DOT__ResultW;
    __Vtask_D_stage_tb__DOT__run_test__7__in_RegWriteW 
        = vlSelfRef.D_stage_tb__DOT__RegWriteW;
    __Vtask_D_stage_tb__DOT__run_test__7__in_RdW = vlSelfRef.D_stage_tb__DOT__RdW;
    __Vtask_D_stage_tb__DOT__run_test__7__in_ALUResultEb0 
        = vlSelfRef.D_stage_tb__DOT__ALUResultEb0;
    __Vtask_D_stage_tb__DOT__run_test__7__in_JumpE 
        = vlSelfRef.D_stage_tb__DOT__JumpE;
    __Vtask_D_stage_tb__DOT__run_test__7__in_BranchE 
        = vlSelfRef.D_stage_tb__DOT__BranchE;
    __Vtask_D_stage_tb__DOT__run_test__7__in_ZeroE 
        = vlSelfRef.D_stage_tb__DOT__ZeroE;
    __Vtask_D_stage_tb__DOT__run_test__7__in_FlushD 
        = vlSelfRef.D_stage_tb__DOT__FlushD;
    __Vtask_D_stage_tb__DOT__run_test__7__in_StallD 
        = vlSelfRef.D_stage_tb__DOT__StallD;
    __Vtask_D_stage_tb__DOT__run_test__7__in_PCPlus4F 
        = vlSelfRef.D_stage_tb__DOT__PCPlus4F;
    __Vtask_D_stage_tb__DOT__run_test__7__in_pcF = vlSelfRef.D_stage_tb__DOT__pcF;
    __Vtask_D_stage_tb__DOT__run_test__7__in_InstrF 
        = vlSelfRef.D_stage_tb__DOT__InstrF;
    vlSelfRef.D_stage_tb__DOT__test_num = ((IData)(1U) 
                                           + vlSelfRef.D_stage_tb__DOT__test_num);
    vlSelfRef.D_stage_tb__DOT__InstrF = __Vtask_D_stage_tb__DOT__run_test__7__in_InstrF;
    vlSelfRef.D_stage_tb__DOT__pcF = __Vtask_D_stage_tb__DOT__run_test__7__in_pcF;
    vlSelfRef.D_stage_tb__DOT__PCPlus4F = __Vtask_D_stage_tb__DOT__run_test__7__in_PCPlus4F;
    vlSelfRef.D_stage_tb__DOT__StallD = __Vtask_D_stage_tb__DOT__run_test__7__in_StallD;
    vlSelfRef.D_stage_tb__DOT__FlushD = __Vtask_D_stage_tb__DOT__run_test__7__in_FlushD;
    vlSelfRef.D_stage_tb__DOT__ZeroE = __Vtask_D_stage_tb__DOT__run_test__7__in_ZeroE;
    vlSelfRef.D_stage_tb__DOT__BranchE = __Vtask_D_stage_tb__DOT__run_test__7__in_BranchE;
    vlSelfRef.D_stage_tb__DOT__JumpE = __Vtask_D_stage_tb__DOT__run_test__7__in_JumpE;
    vlSelfRef.D_stage_tb__DOT__ALUResultEb0 = __Vtask_D_stage_tb__DOT__run_test__7__in_ALUResultEb0;
    vlSelfRef.D_stage_tb__DOT__RdW = __Vtask_D_stage_tb__DOT__run_test__7__in_RdW;
    vlSelfRef.D_stage_tb__DOT__RegWriteW = __Vtask_D_stage_tb__DOT__run_test__7__in_RegWriteW;
    vlSelfRef.D_stage_tb__DOT__ResultW = __Vtask_D_stage_tb__DOT__run_test__7__in_ResultW;
    vlSelfRef.D_stage_tb__DOT__i_debug_addr = __Vtask_D_stage_tb__DOT__run_test__7__in_i_debug_addr;
    vlSelfRef.D_stage_tb__DOT__mask_Read1D = __Vtask_D_stage_tb__DOT__run_test__7__in_mask_Read1D;
    vlSelfRef.D_stage_tb__DOT__mask_Read2D = __Vtask_D_stage_tb__DOT__run_test__7__in_mask_Read2D;
    vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD = __Vtask_D_stage_tb__DOT__run_test__7__in_mask_ResultSrcD;
    vlSelfRef.D_stage_tb__DOT__mask_ALUControlD = __Vtask_D_stage_tb__DOT__run_test__7__in_mask_ALUControlD;
    vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD = __Vtask_D_stage_tb__DOT__run_test__7__in_mask_ALUSrcD;
    vlSelfRef.D_stage_tb__DOT__mask_Rs1D = __Vtask_D_stage_tb__DOT__run_test__7__in_mask_Rs1D;
    vlSelfRef.D_stage_tb__DOT__mask_Rs2D = __Vtask_D_stage_tb__DOT__run_test__7__in_mask_Rs2D;
    vlSelfRef.D_stage_tb__DOT__mask_RdD = __Vtask_D_stage_tb__DOT__run_test__7__in_mask_RdD;
    vlSelfRef.D_stage_tb__DOT__mask_ImmExtD = __Vtask_D_stage_tb__DOT__run_test__7__in_mask_ImmExtD;
    vlSelfRef.D_stage_tb__DOT__mask_MemSrcD = __Vtask_D_stage_tb__DOT__run_test__7__in_mask_MemSrcD;
    vlSelfRef.D_stage_tb__DOT__mask_o_debug_data = __Vtask_D_stage_tb__DOT__run_test__7__in_mask_o_debug_data;
    co_await vlSelfRef.__VtrigSched_h1a3cedb5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge D_stage_tb.clk)", 
                                                         "../../01_bench/D_stage_tb.sv", 
                                                         223);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/D_stage_tb.sv", 
                                         223);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((((((((((((((((((((((vlSelfRef.D_stage_tb__DOT__Read1D 
                                       & vlSelfRef.D_stage_tb__DOT__mask_Read1D) 
                                      == (__Vtask_D_stage_tb__DOT__run_test__7__exp_Read1D 
                                          & vlSelfRef.D_stage_tb__DOT__mask_Read1D)) 
                                     & ((vlSelfRef.D_stage_tb__DOT__Read2D 
                                         & vlSelfRef.D_stage_tb__DOT__mask_Read2D) 
                                        == (__Vtask_D_stage_tb__DOT__run_test__7__exp_Read2D 
                                            & vlSelfRef.D_stage_tb__DOT__mask_Read2D))) 
                                    & ((1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                              >> 0xcU)) 
                                       == (IData)(__Vtask_D_stage_tb__DOT__run_test__7__exp_RegWriteD))) 
                                   & ((((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                        >> 4U) & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD)) 
                                      == ((IData)(__Vtask_D_stage_tb__DOT__run_test__7__exp_ResultSrcD) 
                                          & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD)))) 
                                  & ((1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                            >> 6U)) 
                                     == (IData)(__Vtask_D_stage_tb__DOT__run_test__7__exp_MemWriteD))) 
                                 & ((1U & (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls)) 
                                    == (IData)(__Vtask_D_stage_tb__DOT__run_test__7__exp_JumpD))) 
                                & ((1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                          >> 3U)) == (IData)(__Vtask_D_stage_tb__DOT__run_test__7__exp_BranchD))) 
                               & (((IData)(vlSelfRef.D_stage_tb__DOT__ALUControlD) 
                                   & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUControlD)) 
                                  == ((IData)(__Vtask_D_stage_tb__DOT__run_test__7__exp_ALUControlD) 
                                      & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUControlD)))) 
                              & ((((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                   >> 7U) & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD)) 
                                 == ((IData)(__Vtask_D_stage_tb__DOT__run_test__7__exp_ALUSrcD) 
                                     & (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD)))) 
                             & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[1U] 
                                == __Vtask_D_stage_tb__DOT__run_test__7__exp_pcD)) 
                            & ((((vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                  << 0x11U) | (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                               >> 0xfU)) 
                                & (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs1D)) 
                               == ((IData)(__Vtask_D_stage_tb__DOT__run_test__7__exp_Rs1D) 
                                   & (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs1D)))) 
                           & ((((vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                 << 0xcU) | (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                             >> 0x14U)) 
                               & (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs2D)) 
                              == ((IData)(__Vtask_D_stage_tb__DOT__run_test__7__exp_Rs2D) 
                                  & (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs2D)))) 
                          & ((((vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                << 0x19U) | (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                             >> 7U)) 
                              & (IData)(vlSelfRef.D_stage_tb__DOT__mask_RdD)) 
                             == ((IData)(__Vtask_D_stage_tb__DOT__run_test__7__exp_RdD) 
                                 & (IData)(vlSelfRef.D_stage_tb__DOT__mask_RdD)))) 
                         & ((vlSelfRef.D_stage_tb__DOT__ImmExtD 
                             & vlSelfRef.D_stage_tb__DOT__mask_ImmExtD) 
                            == (__Vtask_D_stage_tb__DOT__run_test__7__exp_ImmExtD 
                                & vlSelfRef.D_stage_tb__DOT__mask_ImmExtD))) 
                        & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[0U] 
                           == __Vtask_D_stage_tb__DOT__run_test__7__exp_PCPlus4D)) 
                       & ((IData)((0x73U == (0xfff0007fU 
                                             & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U]))) 
                          == (IData)(__Vtask_D_stage_tb__DOT__run_test__7__exp_Ecall))) 
                      & ((((0x4000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                            ? ((0x2000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                ? 0U : ((0x1000U & 
                                         vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                         ? 1U : 2U))
                            : ((0x2000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                ? ((0x1000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                    ? 0U : 4U) : ((0x1000U 
                                                   & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                   ? 8U
                                                   : 0x10U))) 
                          & (IData)(vlSelfRef.D_stage_tb__DOT__mask_MemSrcD)) 
                         == ((IData)(__Vtask_D_stage_tb__DOT__run_test__7__exp_MemSrcD) 
                             & (IData)(vlSelfRef.D_stage_tb__DOT__mask_MemSrcD)))) 
                     & ((vlSelfRef.D_stage_tb__DOT__o_debug_data 
                         & vlSelfRef.D_stage_tb__DOT__mask_o_debug_data) 
                        == (__Vtask_D_stage_tb__DOT__run_test__7__exp_o_debug_data 
                            & vlSelfRef.D_stage_tb__DOT__mask_o_debug_data))) 
                    & ((IData)((0x100073U == (0xfff0007fU 
                                              & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U]))) 
                       == (IData)(__Vtask_D_stage_tb__DOT__run_test__7__exp_Ebreak)))))) {
        VL_WRITEF_NX("%02d \342\234\205 %@\n    Instruction: %x\n    Register x%2#: %x\n",0,
                     32,vlSelfRef.D_stage_tb__DOT__test_num,
                     -1,&(__Vtask_D_stage_tb__DOT__run_test__7__test_name),
                     32,vlSelfRef.D_stage_tb__DOT__InstrF,
                     5,(IData)(vlSelfRef.D_stage_tb__DOT__i_debug_addr),
                     32,vlSelfRef.D_stage_tb__DOT__o_debug_data);
        vlSelfRef.D_stage_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.D_stage_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214 %@\n    Instruction: %b\n    Inputs:\n        pcF=%x PCPlus4F=%x\n        StallD=%b FlushD=%b\n        ZeroE=%b BranchE=%b JumpE=%b ALUResultEb0=%b\n        RdW=%2# RegWriteW=%b ResultW=%x\n    Bit Mask:\n        mask_Read1D=%b\n        mask_Read2D=%b\n        mask_ResultSrcD=%b\n        mask_ALUControlD=%b\n        mask_ALUSrcD=%b\n        mask_Rs1D=%b\n        mask_Rs2D=%b\n        mask_RdD=%b\n        mask_ImmExtD=%b\n        mask_MemSrcD=%b\n    Expected vs Actual:\n",0,
                     32,vlSelfRef.D_stage_tb__DOT__test_num,
                     -1,&(__Vtask_D_stage_tb__DOT__run_test__7__test_name),
                     32,vlSelfRef.D_stage_tb__DOT__InstrF,
                     32,vlSelfRef.D_stage_tb__DOT__pcF,
                     32,vlSelfRef.D_stage_tb__DOT__PCPlus4F,
                     1,(IData)(vlSelfRef.D_stage_tb__DOT__StallD),
                     1,vlSelfRef.D_stage_tb__DOT__FlushD,
                     1,(IData)(vlSelfRef.D_stage_tb__DOT__ZeroE),
                     1,vlSelfRef.D_stage_tb__DOT__BranchE,
                     1,(IData)(vlSelfRef.D_stage_tb__DOT__JumpE),
                     1,vlSelfRef.D_stage_tb__DOT__ALUResultEb0,
                     5,(IData)(vlSelfRef.D_stage_tb__DOT__RdW),
                     1,vlSelfRef.D_stage_tb__DOT__RegWriteW,
                     32,vlSelfRef.D_stage_tb__DOT__ResultW,
                     1,(0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_Read1D),
                     1,(0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_Read2D),
                     1,(3U == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD)),
                     1,(0xfU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUControlD)),
                     1,(3U == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD)),
                     1,(0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs1D)),
                     1,(0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs2D)),
                     1,(0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_RdD)),
                     1,(0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_ImmExtD),
                     1,(0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_MemSrcD)));
        if (VL_UNLIKELY(((0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_Read1D)))) {
            VL_WRITEF_NX("        Read1D:      %x vs %x\n",0,
                         32,__Vtask_D_stage_tb__DOT__run_test__7__exp_Read1D,
                         32,vlSelfRef.D_stage_tb__DOT__Read1D);
        }
        if (VL_UNLIKELY(((0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_Read2D)))) {
            VL_WRITEF_NX("        Read2D:      %x vs %x\n",0,
                         32,__Vtask_D_stage_tb__DOT__run_test__7__exp_Read2D,
                         32,vlSelfRef.D_stage_tb__DOT__Read2D);
        }
        VL_WRITEF_NX("        RegWriteD:   %b vs %b\n",0,
                     1,__Vtask_D_stage_tb__DOT__run_test__7__exp_RegWriteD,
                     1,(1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                              >> 0xcU)));
        if (VL_UNLIKELY(((3U == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ResultSrcD))))) {
            VL_WRITEF_NX("        ResultSrcD:  %b vs %b\n",0,
                         2,__Vtask_D_stage_tb__DOT__run_test__7__exp_ResultSrcD,
                         2,(3U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                  >> 4U)));
        }
        VL_WRITEF_NX("        MemWriteD:   %b vs %b\n        JumpD:       %b vs %b\n        BranchD:     %b vs %b\n",0,
                     1,__Vtask_D_stage_tb__DOT__run_test__7__exp_MemWriteD,
                     1,(1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                              >> 6U)),1,(IData)(__Vtask_D_stage_tb__DOT__run_test__7__exp_JumpD),
                     1,(1U & (IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls)),
                     1,(IData)(__Vtask_D_stage_tb__DOT__run_test__7__exp_BranchD),
                     1,(1U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                              >> 3U)));
        if (VL_UNLIKELY(((0xfU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUControlD))))) {
            VL_WRITEF_NX("        ALUControlD: %b vs %b\n",0,
                         4,__Vtask_D_stage_tb__DOT__run_test__7__exp_ALUControlD,
                         4,(IData)(vlSelfRef.D_stage_tb__DOT__ALUControlD));
        }
        if (VL_UNLIKELY(((3U == (IData)(vlSelfRef.D_stage_tb__DOT__mask_ALUSrcD))))) {
            VL_WRITEF_NX("        ALUSrcD:     %b vs %b\n",0,
                         2,__Vtask_D_stage_tb__DOT__run_test__7__exp_ALUSrcD,
                         2,(3U & ((IData)(vlSelfRef.D_stage_tb__DOT__ctrl__DOT__md__DOT__controls) 
                                  >> 7U)));
        }
        VL_WRITEF_NX("        pcD:         %x vs %x\n",0,
                     32,__Vtask_D_stage_tb__DOT__run_test__7__exp_pcD,
                     32,vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[1U]);
        if (VL_UNLIKELY(((0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs1D))))) {
            VL_WRITEF_NX("        Rs1D:        %2# vs %2#\n",0,
                         5,__Vtask_D_stage_tb__DOT__run_test__7__exp_Rs1D,
                         5,(0x1fU & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                     >> 0xfU)));
        }
        if (VL_UNLIKELY(((0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_Rs2D))))) {
            VL_WRITEF_NX("        Rs2D:        %2# vs %2#\n",0,
                         5,__Vtask_D_stage_tb__DOT__run_test__7__exp_Rs2D,
                         5,(0x1fU & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                     >> 0x14U)));
        }
        if (VL_UNLIKELY(((0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_RdD))))) {
            VL_WRITEF_NX("        RdD:         %2# vs %2#\n",0,
                         5,__Vtask_D_stage_tb__DOT__run_test__7__exp_RdD,
                         5,(0x1fU & (vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U] 
                                     >> 7U)));
        }
        if (VL_UNLIKELY(((0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_ImmExtD)))) {
            VL_WRITEF_NX("        ImmExtD:     %x vs %x\n",0,
                         32,__Vtask_D_stage_tb__DOT__run_test__7__exp_ImmExtD,
                         32,vlSelfRef.D_stage_tb__DOT__ImmExtD);
        }
        VL_WRITEF_NX("        PCPlus4D:    %x vs %x\n        Ecall:       %b vs %b\n        Ebreak:      %b vs %b\n",0,
                     32,__Vtask_D_stage_tb__DOT__run_test__7__exp_PCPlus4D,
                     32,vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[0U],
                     1,(IData)(__Vtask_D_stage_tb__DOT__run_test__7__exp_Ecall),
                     1,(IData)((0x73U == (0xfff0007fU 
                                          & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U]))),
                     1,__Vtask_D_stage_tb__DOT__run_test__7__exp_Ebreak,
                     1,(IData)((0x100073U == (0xfff0007fU 
                                              & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U]))));
        if (VL_UNLIKELY(((0x1fU == (IData)(vlSelfRef.D_stage_tb__DOT__mask_MemSrcD))))) {
            VL_WRITEF_NX("        MemSrcD:     %b vs %b\n",0,
                         5,__Vtask_D_stage_tb__DOT__run_test__7__exp_MemSrcD,
                         5,((0x4000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                             ? ((0x2000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                 ? 0U : ((0x1000U & 
                                          vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                          ? 1U : 2U))
                             : ((0x2000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                 ? ((0x1000U & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                     ? 0U : 4U) : (
                                                   (0x1000U 
                                                    & vlSelfRef.D_stage_tb__DOT____Vcellout__Dreg__q[2U])
                                                    ? 8U
                                                    : 0x10U))));
        }
        if (VL_UNLIKELY(((0xffffffffU == vlSelfRef.D_stage_tb__DOT__mask_o_debug_data)))) {
            VL_WRITEF_NX("        Register %2#: %x vs %x\n",0,
                         5,vlSelfRef.D_stage_tb__DOT__i_debug_addr,
                         32,__Vtask_D_stage_tb__DOT__run_test__7__exp_o_debug_data,
                         32,vlSelfRef.D_stage_tb__DOT__o_debug_data);
        }
        vlSelfRef.D_stage_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.D_stage_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n===== Test Statistics =====\nTotal Tests:  %0d\n\342\234\205 Tests Passed: %0d\n\342\235\214 Tests Failed: %0d\n==========================\n\n",0,
                 32,vlSelfRef.D_stage_tb__DOT__test_num,
                 32,vlSelfRef.D_stage_tb__DOT__pass_count,
                 32,vlSelfRef.D_stage_tb__DOT__fail_count);
    VL_FINISH_MT("../../01_bench/D_stage_tb.sv", 641, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine VD_stage_tb___024root___eval_initial__TOP__Vtiming__1(VD_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_stage_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    VD_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        vlSelfRef.D_stage_tb__DOT__clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "../../01_bench/D_stage_tb.sv", 
                                             131);
        vlSelfRef.D_stage_tb__DOT__clk = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "../../01_bench/D_stage_tb.sv", 
                                             132);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VD_stage_tb___024root___dump_triggers__act(VD_stage_tb___024root* vlSelf);
#endif  // VL_DEBUG

void VD_stage_tb___024root___eval_triggers__act(VD_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_stage_tb___024root___eval_triggers__act\n"); );
    VD_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.D_stage_tb__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__D_stage_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.D_stage_tb__DOT__rst) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__D_stage_tb__DOT__rst__0))));
    vlSelfRef.__VactTriggered.setBit(2U, ((~ (IData)(vlSelfRef.D_stage_tb__DOT__clk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__D_stage_tb__DOT__clk__0)));
    vlSelfRef.__VactTriggered.setBit(3U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__D_stage_tb__DOT__clk__0 
        = vlSelfRef.D_stage_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__D_stage_tb__DOT__rst__0 
        = vlSelfRef.D_stage_tb__DOT__rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VD_stage_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
