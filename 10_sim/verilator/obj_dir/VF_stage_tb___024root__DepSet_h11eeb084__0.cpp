// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VF_stage_tb.h for the primary calling header

#include "VF_stage_tb__pch.h"
#include "VF_stage_tb__Syms.h"
#include "VF_stage_tb___024root.h"

VL_INLINE_OPT VlCoroutine VF_stage_tb___024root___eval_initial__TOP__Vtiming__0(VF_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF_stage_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    VF_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__0__exp_pcF0;
    __Vtask_F_stage_tb__DOT__run_test__0__exp_pcF0 = 0;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__0__exp_pcF;
    __Vtask_F_stage_tb__DOT__run_test__0__exp_pcF = 0;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__0__exp_InstrF;
    __Vtask_F_stage_tb__DOT__run_test__0__exp_InstrF = 0;
    std::string __Vtask_F_stage_tb__DOT__run_test__0__test_name;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__1__exp_pcF0;
    __Vtask_F_stage_tb__DOT__run_test__1__exp_pcF0 = 0;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__1__exp_pcF;
    __Vtask_F_stage_tb__DOT__run_test__1__exp_pcF = 0;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__1__exp_InstrF;
    __Vtask_F_stage_tb__DOT__run_test__1__exp_InstrF = 0;
    std::string __Vtask_F_stage_tb__DOT__run_test__1__test_name;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__2__exp_pcF0;
    __Vtask_F_stage_tb__DOT__run_test__2__exp_pcF0 = 0;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__2__exp_pcF;
    __Vtask_F_stage_tb__DOT__run_test__2__exp_pcF = 0;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__2__exp_InstrF;
    __Vtask_F_stage_tb__DOT__run_test__2__exp_InstrF = 0;
    std::string __Vtask_F_stage_tb__DOT__run_test__2__test_name;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__3__exp_pcF0;
    __Vtask_F_stage_tb__DOT__run_test__3__exp_pcF0 = 0;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__3__exp_pcF;
    __Vtask_F_stage_tb__DOT__run_test__3__exp_pcF = 0;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__3__exp_InstrF;
    __Vtask_F_stage_tb__DOT__run_test__3__exp_InstrF = 0;
    std::string __Vtask_F_stage_tb__DOT__run_test__3__test_name;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__4__exp_pcF0;
    __Vtask_F_stage_tb__DOT__run_test__4__exp_pcF0 = 0;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__4__exp_pcF;
    __Vtask_F_stage_tb__DOT__run_test__4__exp_pcF = 0;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__4__exp_InstrF;
    __Vtask_F_stage_tb__DOT__run_test__4__exp_InstrF = 0;
    std::string __Vtask_F_stage_tb__DOT__run_test__4__test_name;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__5__exp_pcF0;
    __Vtask_F_stage_tb__DOT__run_test__5__exp_pcF0 = 0;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__5__exp_pcF;
    __Vtask_F_stage_tb__DOT__run_test__5__exp_pcF = 0;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__5__exp_InstrF;
    __Vtask_F_stage_tb__DOT__run_test__5__exp_InstrF = 0;
    std::string __Vtask_F_stage_tb__DOT__run_test__5__test_name;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__6__exp_pcF0;
    __Vtask_F_stage_tb__DOT__run_test__6__exp_pcF0 = 0;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__6__exp_pcF;
    __Vtask_F_stage_tb__DOT__run_test__6__exp_pcF = 0;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__6__exp_InstrF;
    __Vtask_F_stage_tb__DOT__run_test__6__exp_InstrF = 0;
    std::string __Vtask_F_stage_tb__DOT__run_test__6__test_name;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__7__exp_pcF0;
    __Vtask_F_stage_tb__DOT__run_test__7__exp_pcF0 = 0;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__7__exp_pcF;
    __Vtask_F_stage_tb__DOT__run_test__7__exp_pcF = 0;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__7__exp_InstrF;
    __Vtask_F_stage_tb__DOT__run_test__7__exp_InstrF = 0;
    std::string __Vtask_F_stage_tb__DOT__run_test__7__test_name;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__8__exp_pcF0;
    __Vtask_F_stage_tb__DOT__run_test__8__exp_pcF0 = 0;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__8__exp_pcF;
    __Vtask_F_stage_tb__DOT__run_test__8__exp_pcF = 0;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__8__exp_InstrF;
    __Vtask_F_stage_tb__DOT__run_test__8__exp_InstrF = 0;
    std::string __Vtask_F_stage_tb__DOT__run_test__8__test_name;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__9__exp_pcF0;
    __Vtask_F_stage_tb__DOT__run_test__9__exp_pcF0 = 0;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__9__exp_pcF;
    __Vtask_F_stage_tb__DOT__run_test__9__exp_pcF = 0;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__9__exp_InstrF;
    __Vtask_F_stage_tb__DOT__run_test__9__exp_InstrF = 0;
    std::string __Vtask_F_stage_tb__DOT__run_test__9__test_name;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__10__exp_pcF0;
    __Vtask_F_stage_tb__DOT__run_test__10__exp_pcF0 = 0;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__10__exp_pcF;
    __Vtask_F_stage_tb__DOT__run_test__10__exp_pcF = 0;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__10__exp_InstrF;
    __Vtask_F_stage_tb__DOT__run_test__10__exp_InstrF = 0;
    std::string __Vtask_F_stage_tb__DOT__run_test__10__test_name;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__11__exp_pcF0;
    __Vtask_F_stage_tb__DOT__run_test__11__exp_pcF0 = 0;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__11__exp_pcF;
    __Vtask_F_stage_tb__DOT__run_test__11__exp_pcF = 0;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__11__exp_InstrF;
    __Vtask_F_stage_tb__DOT__run_test__11__exp_InstrF = 0;
    std::string __Vtask_F_stage_tb__DOT__run_test__11__test_name;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__12__exp_pcF0;
    __Vtask_F_stage_tb__DOT__run_test__12__exp_pcF0 = 0;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__12__exp_pcF;
    __Vtask_F_stage_tb__DOT__run_test__12__exp_pcF = 0;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__12__exp_InstrF;
    __Vtask_F_stage_tb__DOT__run_test__12__exp_InstrF = 0;
    std::string __Vtask_F_stage_tb__DOT__run_test__12__test_name;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__13__exp_pcF0;
    __Vtask_F_stage_tb__DOT__run_test__13__exp_pcF0 = 0;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__13__exp_pcF;
    __Vtask_F_stage_tb__DOT__run_test__13__exp_pcF = 0;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__13__exp_InstrF;
    __Vtask_F_stage_tb__DOT__run_test__13__exp_InstrF = 0;
    std::string __Vtask_F_stage_tb__DOT__run_test__13__test_name;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__14__exp_pcF0;
    __Vtask_F_stage_tb__DOT__run_test__14__exp_pcF0 = 0;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__14__exp_pcF;
    __Vtask_F_stage_tb__DOT__run_test__14__exp_pcF = 0;
    IData/*31:0*/ __Vtask_F_stage_tb__DOT__run_test__14__exp_InstrF;
    __Vtask_F_stage_tb__DOT__run_test__14__exp_InstrF = 0;
    std::string __Vtask_F_stage_tb__DOT__run_test__14__test_name;
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"wave.vcd"});
    vlSymsp->_traceDumpOpen();
    VL_WRITEF_NX("\n===== Fetch Stage Tests =====\n\n----------- Reset Tests -----------\n",0);
    vlSelfRef.F_stage_tb__DOT__rst = 1U;
    vlSelfRef.F_stage_tb__DOT__StallF = 0U;
    vlSelfRef.F_stage_tb__DOT__PCSrcE = 0U;
    vlSelfRef.F_stage_tb__DOT__PCTargetE = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../../01_bench/F_stage_tb.sv", 
                                         190);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_F_stage_tb__DOT__run_test__0__test_name = 
        std::string{"Initial reset"};
    __Vtask_F_stage_tb__DOT__run_test__0__exp_InstrF = 0x500113U;
    __Vtask_F_stage_tb__DOT__run_test__0__exp_pcF = 0U;
    __Vtask_F_stage_tb__DOT__run_test__0__exp_pcF0 = 4U;
    vlSelfRef.F_stage_tb__DOT__test_num = ((IData)(1U) 
                                           + vlSelfRef.F_stage_tb__DOT__test_num);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/F_stage_tb.sv", 
                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((((vlSelfRef.F_stage_tb__DOT__pcF0 == __Vtask_F_stage_tb__DOT__run_test__0__exp_pcF0) 
          & (vlSelfRef.F_stage_tb__DOT__pcF == __Vtask_F_stage_tb__DOT__run_test__0__exp_pcF)) 
         & (vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
            [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                       >> 2U))] == __Vtask_F_stage_tb__DOT__run_test__0__exp_InstrF))) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n        pcF0=%x pcF=%x InstrF=%x\n",0,
                     32,vlSelfRef.F_stage_tb__DOT__test_num,
                     -1,&(__Vtask_F_stage_tb__DOT__run_test__0__test_name),
                     32,vlSelfRef.F_stage_tb__DOT__pcF0,
                     32,vlSelfRef.F_stage_tb__DOT__pcF,
                     32,vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
                     [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                                >> 2U))]);
        vlSelfRef.F_stage_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.F_stage_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n        Expected: pcF0=%x pcF=%x InstrF=%x\n        Actual:   pcF0=%x pcF=%x InstrF=%x\n",0,
                     32,vlSelfRef.F_stage_tb__DOT__test_num,
                     -1,&(__Vtask_F_stage_tb__DOT__run_test__0__test_name),
                     32,__Vtask_F_stage_tb__DOT__run_test__0__exp_pcF0,
                     32,__Vtask_F_stage_tb__DOT__run_test__0__exp_pcF,
                     32,__Vtask_F_stage_tb__DOT__run_test__0__exp_InstrF,
                     32,vlSelfRef.F_stage_tb__DOT__pcF0,
                     32,vlSelfRef.F_stage_tb__DOT__pcF,
                     32,vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
                     [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                                >> 2U))]);
        vlSelfRef.F_stage_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.F_stage_tb__DOT__fail_count);
    }
    vlSelfRef.F_stage_tb__DOT__rst = 1U;
    vlSelfRef.F_stage_tb__DOT__StallF = 0U;
    vlSelfRef.F_stage_tb__DOT__PCSrcE = 1U;
    vlSelfRef.F_stage_tb__DOT__PCTargetE = 0x20U;
    co_await vlSelfRef.__VtrigSched_h599addb5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge F_stage_tb.clk)", 
                                                         "../../01_bench/F_stage_tb.sv", 
                                                         195);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_F_stage_tb__DOT__run_test__1__test_name = 
        std::string{"Reset overrides branch"};
    __Vtask_F_stage_tb__DOT__run_test__1__exp_InstrF = 0x500113U;
    __Vtask_F_stage_tb__DOT__run_test__1__exp_pcF = 0U;
    __Vtask_F_stage_tb__DOT__run_test__1__exp_pcF0 = 0x20U;
    vlSelfRef.F_stage_tb__DOT__test_num = ((IData)(1U) 
                                           + vlSelfRef.F_stage_tb__DOT__test_num);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/F_stage_tb.sv", 
                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((((vlSelfRef.F_stage_tb__DOT__pcF0 == __Vtask_F_stage_tb__DOT__run_test__1__exp_pcF0) 
          & (vlSelfRef.F_stage_tb__DOT__pcF == __Vtask_F_stage_tb__DOT__run_test__1__exp_pcF)) 
         & (vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
            [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                       >> 2U))] == __Vtask_F_stage_tb__DOT__run_test__1__exp_InstrF))) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n        pcF0=%x pcF=%x InstrF=%x\n",0,
                     32,vlSelfRef.F_stage_tb__DOT__test_num,
                     -1,&(__Vtask_F_stage_tb__DOT__run_test__1__test_name),
                     32,vlSelfRef.F_stage_tb__DOT__pcF0,
                     32,vlSelfRef.F_stage_tb__DOT__pcF,
                     32,vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
                     [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                                >> 2U))]);
        vlSelfRef.F_stage_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.F_stage_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n        Expected: pcF0=%x pcF=%x InstrF=%x\n        Actual:   pcF0=%x pcF=%x InstrF=%x\n",0,
                     32,vlSelfRef.F_stage_tb__DOT__test_num,
                     -1,&(__Vtask_F_stage_tb__DOT__run_test__1__test_name),
                     32,__Vtask_F_stage_tb__DOT__run_test__1__exp_pcF0,
                     32,__Vtask_F_stage_tb__DOT__run_test__1__exp_pcF,
                     32,__Vtask_F_stage_tb__DOT__run_test__1__exp_InstrF,
                     32,vlSelfRef.F_stage_tb__DOT__pcF0,
                     32,vlSelfRef.F_stage_tb__DOT__pcF,
                     32,vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
                     [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                                >> 2U))]);
        vlSelfRef.F_stage_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.F_stage_tb__DOT__fail_count);
    }
    vlSelfRef.F_stage_tb__DOT__rst = 1U;
    vlSelfRef.F_stage_tb__DOT__StallF = 1U;
    vlSelfRef.F_stage_tb__DOT__PCSrcE = 0U;
    vlSelfRef.F_stage_tb__DOT__PCTargetE = 0U;
    co_await vlSelfRef.__VtrigSched_h599addb5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge F_stage_tb.clk)", 
                                                         "../../01_bench/F_stage_tb.sv", 
                                                         200);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_F_stage_tb__DOT__run_test__2__test_name = 
        std::string{"Reset overrides stall"};
    __Vtask_F_stage_tb__DOT__run_test__2__exp_InstrF = 0x500113U;
    __Vtask_F_stage_tb__DOT__run_test__2__exp_pcF = 0U;
    __Vtask_F_stage_tb__DOT__run_test__2__exp_pcF0 = 4U;
    vlSelfRef.F_stage_tb__DOT__test_num = ((IData)(1U) 
                                           + vlSelfRef.F_stage_tb__DOT__test_num);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/F_stage_tb.sv", 
                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((((vlSelfRef.F_stage_tb__DOT__pcF0 == __Vtask_F_stage_tb__DOT__run_test__2__exp_pcF0) 
          & (vlSelfRef.F_stage_tb__DOT__pcF == __Vtask_F_stage_tb__DOT__run_test__2__exp_pcF)) 
         & (vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
            [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                       >> 2U))] == __Vtask_F_stage_tb__DOT__run_test__2__exp_InstrF))) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n        pcF0=%x pcF=%x InstrF=%x\n",0,
                     32,vlSelfRef.F_stage_tb__DOT__test_num,
                     -1,&(__Vtask_F_stage_tb__DOT__run_test__2__test_name),
                     32,vlSelfRef.F_stage_tb__DOT__pcF0,
                     32,vlSelfRef.F_stage_tb__DOT__pcF,
                     32,vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
                     [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                                >> 2U))]);
        vlSelfRef.F_stage_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.F_stage_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n        Expected: pcF0=%x pcF=%x InstrF=%x\n        Actual:   pcF0=%x pcF=%x InstrF=%x\n",0,
                     32,vlSelfRef.F_stage_tb__DOT__test_num,
                     -1,&(__Vtask_F_stage_tb__DOT__run_test__2__test_name),
                     32,__Vtask_F_stage_tb__DOT__run_test__2__exp_pcF0,
                     32,__Vtask_F_stage_tb__DOT__run_test__2__exp_pcF,
                     32,__Vtask_F_stage_tb__DOT__run_test__2__exp_InstrF,
                     32,vlSelfRef.F_stage_tb__DOT__pcF0,
                     32,vlSelfRef.F_stage_tb__DOT__pcF,
                     32,vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
                     [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                                >> 2U))]);
        vlSelfRef.F_stage_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.F_stage_tb__DOT__fail_count);
    }
    vlSelfRef.F_stage_tb__DOT__rst = 0U;
    VL_WRITEF_NX("\n----------- Sequential Fetch Tests -----------\n",0);
    vlSelfRef.F_stage_tb__DOT__rst = 0U;
    vlSelfRef.F_stage_tb__DOT__StallF = 0U;
    vlSelfRef.F_stage_tb__DOT__PCSrcE = 0U;
    vlSelfRef.F_stage_tb__DOT__PCTargetE = 0U;
    co_await vlSelfRef.__VtrigSched_h599addb5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge F_stage_tb.clk)", 
                                                         "../../01_bench/F_stage_tb.sv", 
                                                         209);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_F_stage_tb__DOT__run_test__3__test_name = 
        std::string{"Basic sequential"};
    __Vtask_F_stage_tb__DOT__run_test__3__exp_InstrF 
        = vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
        [(0x3fU & (((IData)(4U) + vlSelfRef.F_stage_tb__DOT__pcF) 
                   >> 2U))];
    __Vtask_F_stage_tb__DOT__run_test__3__exp_pcF = 
        ((IData)(4U) + vlSelfRef.F_stage_tb__DOT__pcF);
    __Vtask_F_stage_tb__DOT__run_test__3__exp_pcF0 
        = ((IData)(8U) + vlSelfRef.F_stage_tb__DOT__pcF);
    vlSelfRef.F_stage_tb__DOT__test_num = ((IData)(1U) 
                                           + vlSelfRef.F_stage_tb__DOT__test_num);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/F_stage_tb.sv", 
                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((((vlSelfRef.F_stage_tb__DOT__pcF0 == __Vtask_F_stage_tb__DOT__run_test__3__exp_pcF0) 
          & (vlSelfRef.F_stage_tb__DOT__pcF == __Vtask_F_stage_tb__DOT__run_test__3__exp_pcF)) 
         & (vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
            [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                       >> 2U))] == __Vtask_F_stage_tb__DOT__run_test__3__exp_InstrF))) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n        pcF0=%x pcF=%x InstrF=%x\n",0,
                     32,vlSelfRef.F_stage_tb__DOT__test_num,
                     -1,&(__Vtask_F_stage_tb__DOT__run_test__3__test_name),
                     32,vlSelfRef.F_stage_tb__DOT__pcF0,
                     32,vlSelfRef.F_stage_tb__DOT__pcF,
                     32,vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
                     [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                                >> 2U))]);
        vlSelfRef.F_stage_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.F_stage_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n        Expected: pcF0=%x pcF=%x InstrF=%x\n        Actual:   pcF0=%x pcF=%x InstrF=%x\n",0,
                     32,vlSelfRef.F_stage_tb__DOT__test_num,
                     -1,&(__Vtask_F_stage_tb__DOT__run_test__3__test_name),
                     32,__Vtask_F_stage_tb__DOT__run_test__3__exp_pcF0,
                     32,__Vtask_F_stage_tb__DOT__run_test__3__exp_pcF,
                     32,__Vtask_F_stage_tb__DOT__run_test__3__exp_InstrF,
                     32,vlSelfRef.F_stage_tb__DOT__pcF0,
                     32,vlSelfRef.F_stage_tb__DOT__pcF,
                     32,vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
                     [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                                >> 2U))]);
        vlSelfRef.F_stage_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.F_stage_tb__DOT__fail_count);
    }
    co_await vlSelfRef.__VtrigSched_h599addb5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge F_stage_tb.clk)", 
                                                         "../../01_bench/F_stage_tb.sv", 
                                                         209);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_F_stage_tb__DOT__run_test__3__test_name = 
        std::string{"Basic sequential"};
    __Vtask_F_stage_tb__DOT__run_test__3__exp_InstrF 
        = vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
        [(0x3fU & (((IData)(4U) + vlSelfRef.F_stage_tb__DOT__pcF) 
                   >> 2U))];
    __Vtask_F_stage_tb__DOT__run_test__3__exp_pcF = 
        ((IData)(4U) + vlSelfRef.F_stage_tb__DOT__pcF);
    __Vtask_F_stage_tb__DOT__run_test__3__exp_pcF0 
        = ((IData)(8U) + vlSelfRef.F_stage_tb__DOT__pcF);
    vlSelfRef.F_stage_tb__DOT__test_num = ((IData)(1U) 
                                           + vlSelfRef.F_stage_tb__DOT__test_num);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/F_stage_tb.sv", 
                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((((vlSelfRef.F_stage_tb__DOT__pcF0 == __Vtask_F_stage_tb__DOT__run_test__3__exp_pcF0) 
          & (vlSelfRef.F_stage_tb__DOT__pcF == __Vtask_F_stage_tb__DOT__run_test__3__exp_pcF)) 
         & (vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
            [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                       >> 2U))] == __Vtask_F_stage_tb__DOT__run_test__3__exp_InstrF))) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n        pcF0=%x pcF=%x InstrF=%x\n",0,
                     32,vlSelfRef.F_stage_tb__DOT__test_num,
                     -1,&(__Vtask_F_stage_tb__DOT__run_test__3__test_name),
                     32,vlSelfRef.F_stage_tb__DOT__pcF0,
                     32,vlSelfRef.F_stage_tb__DOT__pcF,
                     32,vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
                     [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                                >> 2U))]);
        vlSelfRef.F_stage_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.F_stage_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n        Expected: pcF0=%x pcF=%x InstrF=%x\n        Actual:   pcF0=%x pcF=%x InstrF=%x\n",0,
                     32,vlSelfRef.F_stage_tb__DOT__test_num,
                     -1,&(__Vtask_F_stage_tb__DOT__run_test__3__test_name),
                     32,__Vtask_F_stage_tb__DOT__run_test__3__exp_pcF0,
                     32,__Vtask_F_stage_tb__DOT__run_test__3__exp_pcF,
                     32,__Vtask_F_stage_tb__DOT__run_test__3__exp_InstrF,
                     32,vlSelfRef.F_stage_tb__DOT__pcF0,
                     32,vlSelfRef.F_stage_tb__DOT__pcF,
                     32,vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
                     [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                                >> 2U))]);
        vlSelfRef.F_stage_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.F_stage_tb__DOT__fail_count);
    }
    co_await vlSelfRef.__VtrigSched_h599addb5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge F_stage_tb.clk)", 
                                                         "../../01_bench/F_stage_tb.sv", 
                                                         209);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_F_stage_tb__DOT__run_test__3__test_name = 
        std::string{"Basic sequential"};
    __Vtask_F_stage_tb__DOT__run_test__3__exp_InstrF 
        = vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
        [(0x3fU & (((IData)(4U) + vlSelfRef.F_stage_tb__DOT__pcF) 
                   >> 2U))];
    __Vtask_F_stage_tb__DOT__run_test__3__exp_pcF = 
        ((IData)(4U) + vlSelfRef.F_stage_tb__DOT__pcF);
    __Vtask_F_stage_tb__DOT__run_test__3__exp_pcF0 
        = ((IData)(8U) + vlSelfRef.F_stage_tb__DOT__pcF);
    vlSelfRef.F_stage_tb__DOT__test_num = ((IData)(1U) 
                                           + vlSelfRef.F_stage_tb__DOT__test_num);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/F_stage_tb.sv", 
                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((((vlSelfRef.F_stage_tb__DOT__pcF0 == __Vtask_F_stage_tb__DOT__run_test__3__exp_pcF0) 
          & (vlSelfRef.F_stage_tb__DOT__pcF == __Vtask_F_stage_tb__DOT__run_test__3__exp_pcF)) 
         & (vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
            [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                       >> 2U))] == __Vtask_F_stage_tb__DOT__run_test__3__exp_InstrF))) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n        pcF0=%x pcF=%x InstrF=%x\n",0,
                     32,vlSelfRef.F_stage_tb__DOT__test_num,
                     -1,&(__Vtask_F_stage_tb__DOT__run_test__3__test_name),
                     32,vlSelfRef.F_stage_tb__DOT__pcF0,
                     32,vlSelfRef.F_stage_tb__DOT__pcF,
                     32,vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
                     [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                                >> 2U))]);
        vlSelfRef.F_stage_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.F_stage_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n        Expected: pcF0=%x pcF=%x InstrF=%x\n        Actual:   pcF0=%x pcF=%x InstrF=%x\n",0,
                     32,vlSelfRef.F_stage_tb__DOT__test_num,
                     -1,&(__Vtask_F_stage_tb__DOT__run_test__3__test_name),
                     32,__Vtask_F_stage_tb__DOT__run_test__3__exp_pcF0,
                     32,__Vtask_F_stage_tb__DOT__run_test__3__exp_pcF,
                     32,__Vtask_F_stage_tb__DOT__run_test__3__exp_InstrF,
                     32,vlSelfRef.F_stage_tb__DOT__pcF0,
                     32,vlSelfRef.F_stage_tb__DOT__pcF,
                     32,vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
                     [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                                >> 2U))]);
        vlSelfRef.F_stage_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.F_stage_tb__DOT__fail_count);
    }
    co_await vlSelfRef.__VtrigSched_h599addb5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge F_stage_tb.clk)", 
                                                         "../../01_bench/F_stage_tb.sv", 
                                                         209);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_F_stage_tb__DOT__run_test__3__test_name = 
        std::string{"Basic sequential"};
    __Vtask_F_stage_tb__DOT__run_test__3__exp_InstrF 
        = vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
        [(0x3fU & (((IData)(4U) + vlSelfRef.F_stage_tb__DOT__pcF) 
                   >> 2U))];
    __Vtask_F_stage_tb__DOT__run_test__3__exp_pcF = 
        ((IData)(4U) + vlSelfRef.F_stage_tb__DOT__pcF);
    __Vtask_F_stage_tb__DOT__run_test__3__exp_pcF0 
        = ((IData)(8U) + vlSelfRef.F_stage_tb__DOT__pcF);
    vlSelfRef.F_stage_tb__DOT__test_num = ((IData)(1U) 
                                           + vlSelfRef.F_stage_tb__DOT__test_num);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/F_stage_tb.sv", 
                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((((vlSelfRef.F_stage_tb__DOT__pcF0 == __Vtask_F_stage_tb__DOT__run_test__3__exp_pcF0) 
          & (vlSelfRef.F_stage_tb__DOT__pcF == __Vtask_F_stage_tb__DOT__run_test__3__exp_pcF)) 
         & (vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
            [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                       >> 2U))] == __Vtask_F_stage_tb__DOT__run_test__3__exp_InstrF))) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n        pcF0=%x pcF=%x InstrF=%x\n",0,
                     32,vlSelfRef.F_stage_tb__DOT__test_num,
                     -1,&(__Vtask_F_stage_tb__DOT__run_test__3__test_name),
                     32,vlSelfRef.F_stage_tb__DOT__pcF0,
                     32,vlSelfRef.F_stage_tb__DOT__pcF,
                     32,vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
                     [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                                >> 2U))]);
        vlSelfRef.F_stage_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.F_stage_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n        Expected: pcF0=%x pcF=%x InstrF=%x\n        Actual:   pcF0=%x pcF=%x InstrF=%x\n",0,
                     32,vlSelfRef.F_stage_tb__DOT__test_num,
                     -1,&(__Vtask_F_stage_tb__DOT__run_test__3__test_name),
                     32,__Vtask_F_stage_tb__DOT__run_test__3__exp_pcF0,
                     32,__Vtask_F_stage_tb__DOT__run_test__3__exp_pcF,
                     32,__Vtask_F_stage_tb__DOT__run_test__3__exp_InstrF,
                     32,vlSelfRef.F_stage_tb__DOT__pcF0,
                     32,vlSelfRef.F_stage_tb__DOT__pcF,
                     32,vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
                     [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                                >> 2U))]);
        vlSelfRef.F_stage_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.F_stage_tb__DOT__fail_count);
    }
    vlSelfRef.F_stage_tb__DOT__PCSrcE = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/F_stage_tb.sv", 
                                         214);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.F_stage_tb__DOT__PCSrcE = 0U;
    co_await vlSelfRef.__VtrigSched_h599addb5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge F_stage_tb.clk)", 
                                                         "../../01_bench/F_stage_tb.sv", 
                                                         215);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_F_stage_tb__DOT__run_test__4__test_name = 
        std::string{"Sequential after branch cancel"};
    __Vtask_F_stage_tb__DOT__run_test__4__exp_InstrF 
        = vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
        [(0x3fU & (((IData)(4U) + vlSelfRef.F_stage_tb__DOT__pcF) 
                   >> 2U))];
    __Vtask_F_stage_tb__DOT__run_test__4__exp_pcF = 
        ((IData)(4U) + vlSelfRef.F_stage_tb__DOT__pcF);
    __Vtask_F_stage_tb__DOT__run_test__4__exp_pcF0 
        = ((IData)(8U) + vlSelfRef.F_stage_tb__DOT__pcF);
    vlSelfRef.F_stage_tb__DOT__test_num = ((IData)(1U) 
                                           + vlSelfRef.F_stage_tb__DOT__test_num);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/F_stage_tb.sv", 
                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((((vlSelfRef.F_stage_tb__DOT__pcF0 == __Vtask_F_stage_tb__DOT__run_test__4__exp_pcF0) 
          & (vlSelfRef.F_stage_tb__DOT__pcF == __Vtask_F_stage_tb__DOT__run_test__4__exp_pcF)) 
         & (vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
            [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                       >> 2U))] == __Vtask_F_stage_tb__DOT__run_test__4__exp_InstrF))) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n        pcF0=%x pcF=%x InstrF=%x\n",0,
                     32,vlSelfRef.F_stage_tb__DOT__test_num,
                     -1,&(__Vtask_F_stage_tb__DOT__run_test__4__test_name),
                     32,vlSelfRef.F_stage_tb__DOT__pcF0,
                     32,vlSelfRef.F_stage_tb__DOT__pcF,
                     32,vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
                     [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                                >> 2U))]);
        vlSelfRef.F_stage_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.F_stage_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n        Expected: pcF0=%x pcF=%x InstrF=%x\n        Actual:   pcF0=%x pcF=%x InstrF=%x\n",0,
                     32,vlSelfRef.F_stage_tb__DOT__test_num,
                     -1,&(__Vtask_F_stage_tb__DOT__run_test__4__test_name),
                     32,__Vtask_F_stage_tb__DOT__run_test__4__exp_pcF0,
                     32,__Vtask_F_stage_tb__DOT__run_test__4__exp_pcF,
                     32,__Vtask_F_stage_tb__DOT__run_test__4__exp_InstrF,
                     32,vlSelfRef.F_stage_tb__DOT__pcF0,
                     32,vlSelfRef.F_stage_tb__DOT__pcF,
                     32,vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
                     [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                                >> 2U))]);
        vlSelfRef.F_stage_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.F_stage_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n----------- Stall Tests -----------\n",0);
    vlSelfRef.F_stage_tb__DOT__rst = 0U;
    vlSelfRef.F_stage_tb__DOT__StallF = 1U;
    vlSelfRef.F_stage_tb__DOT__PCSrcE = 0U;
    vlSelfRef.F_stage_tb__DOT__PCTargetE = 0U;
    co_await vlSelfRef.__VtrigSched_h599addb5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge F_stage_tb.clk)", 
                                                         "../../01_bench/F_stage_tb.sv", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_F_stage_tb__DOT__run_test__5__test_name = 
        std::string{"Single cycle stall"};
    __Vtask_F_stage_tb__DOT__run_test__5__exp_InstrF 
        = vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
        [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF >> 2U))];
    __Vtask_F_stage_tb__DOT__run_test__5__exp_pcF = vlSelfRef.F_stage_tb__DOT__pcF;
    __Vtask_F_stage_tb__DOT__run_test__5__exp_pcF0 
        = ((IData)(4U) + vlSelfRef.F_stage_tb__DOT__pcF);
    vlSelfRef.F_stage_tb__DOT__test_num = ((IData)(1U) 
                                           + vlSelfRef.F_stage_tb__DOT__test_num);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/F_stage_tb.sv", 
                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((((vlSelfRef.F_stage_tb__DOT__pcF0 == __Vtask_F_stage_tb__DOT__run_test__5__exp_pcF0) 
          & (vlSelfRef.F_stage_tb__DOT__pcF == __Vtask_F_stage_tb__DOT__run_test__5__exp_pcF)) 
         & (vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
            [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                       >> 2U))] == __Vtask_F_stage_tb__DOT__run_test__5__exp_InstrF))) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n        pcF0=%x pcF=%x InstrF=%x\n",0,
                     32,vlSelfRef.F_stage_tb__DOT__test_num,
                     -1,&(__Vtask_F_stage_tb__DOT__run_test__5__test_name),
                     32,vlSelfRef.F_stage_tb__DOT__pcF0,
                     32,vlSelfRef.F_stage_tb__DOT__pcF,
                     32,vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
                     [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                                >> 2U))]);
        vlSelfRef.F_stage_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.F_stage_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n        Expected: pcF0=%x pcF=%x InstrF=%x\n        Actual:   pcF0=%x pcF=%x InstrF=%x\n",0,
                     32,vlSelfRef.F_stage_tb__DOT__test_num,
                     -1,&(__Vtask_F_stage_tb__DOT__run_test__5__test_name),
                     32,__Vtask_F_stage_tb__DOT__run_test__5__exp_pcF0,
                     32,__Vtask_F_stage_tb__DOT__run_test__5__exp_pcF,
                     32,__Vtask_F_stage_tb__DOT__run_test__5__exp_InstrF,
                     32,vlSelfRef.F_stage_tb__DOT__pcF0,
                     32,vlSelfRef.F_stage_tb__DOT__pcF,
                     32,vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
                     [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                                >> 2U))]);
        vlSelfRef.F_stage_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.F_stage_tb__DOT__fail_count);
    }
    co_await vlSelfRef.__VtrigSched_h599addb5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge F_stage_tb.clk)", 
                                                         "../../01_bench/F_stage_tb.sv", 
                                                         227);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_F_stage_tb__DOT__run_test__6__test_name = 
        std::string{"Multi-cycle stall"};
    __Vtask_F_stage_tb__DOT__run_test__6__exp_InstrF 
        = vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
        [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF >> 2U))];
    __Vtask_F_stage_tb__DOT__run_test__6__exp_pcF = vlSelfRef.F_stage_tb__DOT__pcF;
    __Vtask_F_stage_tb__DOT__run_test__6__exp_pcF0 
        = ((IData)(4U) + vlSelfRef.F_stage_tb__DOT__pcF);
    vlSelfRef.F_stage_tb__DOT__test_num = ((IData)(1U) 
                                           + vlSelfRef.F_stage_tb__DOT__test_num);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/F_stage_tb.sv", 
                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((((vlSelfRef.F_stage_tb__DOT__pcF0 == __Vtask_F_stage_tb__DOT__run_test__6__exp_pcF0) 
          & (vlSelfRef.F_stage_tb__DOT__pcF == __Vtask_F_stage_tb__DOT__run_test__6__exp_pcF)) 
         & (vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
            [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                       >> 2U))] == __Vtask_F_stage_tb__DOT__run_test__6__exp_InstrF))) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n        pcF0=%x pcF=%x InstrF=%x\n",0,
                     32,vlSelfRef.F_stage_tb__DOT__test_num,
                     -1,&(__Vtask_F_stage_tb__DOT__run_test__6__test_name),
                     32,vlSelfRef.F_stage_tb__DOT__pcF0,
                     32,vlSelfRef.F_stage_tb__DOT__pcF,
                     32,vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
                     [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                                >> 2U))]);
        vlSelfRef.F_stage_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.F_stage_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n        Expected: pcF0=%x pcF=%x InstrF=%x\n        Actual:   pcF0=%x pcF=%x InstrF=%x\n",0,
                     32,vlSelfRef.F_stage_tb__DOT__test_num,
                     -1,&(__Vtask_F_stage_tb__DOT__run_test__6__test_name),
                     32,__Vtask_F_stage_tb__DOT__run_test__6__exp_pcF0,
                     32,__Vtask_F_stage_tb__DOT__run_test__6__exp_pcF,
                     32,__Vtask_F_stage_tb__DOT__run_test__6__exp_InstrF,
                     32,vlSelfRef.F_stage_tb__DOT__pcF0,
                     32,vlSelfRef.F_stage_tb__DOT__pcF,
                     32,vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
                     [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                                >> 2U))]);
        vlSelfRef.F_stage_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.F_stage_tb__DOT__fail_count);
    }
    co_await vlSelfRef.__VtrigSched_h599addb5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge F_stage_tb.clk)", 
                                                         "../../01_bench/F_stage_tb.sv", 
                                                         227);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_F_stage_tb__DOT__run_test__6__test_name = 
        std::string{"Multi-cycle stall"};
    __Vtask_F_stage_tb__DOT__run_test__6__exp_InstrF 
        = vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
        [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF >> 2U))];
    __Vtask_F_stage_tb__DOT__run_test__6__exp_pcF = vlSelfRef.F_stage_tb__DOT__pcF;
    __Vtask_F_stage_tb__DOT__run_test__6__exp_pcF0 
        = ((IData)(4U) + vlSelfRef.F_stage_tb__DOT__pcF);
    vlSelfRef.F_stage_tb__DOT__test_num = ((IData)(1U) 
                                           + vlSelfRef.F_stage_tb__DOT__test_num);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/F_stage_tb.sv", 
                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((((vlSelfRef.F_stage_tb__DOT__pcF0 == __Vtask_F_stage_tb__DOT__run_test__6__exp_pcF0) 
          & (vlSelfRef.F_stage_tb__DOT__pcF == __Vtask_F_stage_tb__DOT__run_test__6__exp_pcF)) 
         & (vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
            [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                       >> 2U))] == __Vtask_F_stage_tb__DOT__run_test__6__exp_InstrF))) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n        pcF0=%x pcF=%x InstrF=%x\n",0,
                     32,vlSelfRef.F_stage_tb__DOT__test_num,
                     -1,&(__Vtask_F_stage_tb__DOT__run_test__6__test_name),
                     32,vlSelfRef.F_stage_tb__DOT__pcF0,
                     32,vlSelfRef.F_stage_tb__DOT__pcF,
                     32,vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
                     [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                                >> 2U))]);
        vlSelfRef.F_stage_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.F_stage_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n        Expected: pcF0=%x pcF=%x InstrF=%x\n        Actual:   pcF0=%x pcF=%x InstrF=%x\n",0,
                     32,vlSelfRef.F_stage_tb__DOT__test_num,
                     -1,&(__Vtask_F_stage_tb__DOT__run_test__6__test_name),
                     32,__Vtask_F_stage_tb__DOT__run_test__6__exp_pcF0,
                     32,__Vtask_F_stage_tb__DOT__run_test__6__exp_pcF,
                     32,__Vtask_F_stage_tb__DOT__run_test__6__exp_InstrF,
                     32,vlSelfRef.F_stage_tb__DOT__pcF0,
                     32,vlSelfRef.F_stage_tb__DOT__pcF,
                     32,vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
                     [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                                >> 2U))]);
        vlSelfRef.F_stage_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.F_stage_tb__DOT__fail_count);
    }
    co_await vlSelfRef.__VtrigSched_h599addb5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge F_stage_tb.clk)", 
                                                         "../../01_bench/F_stage_tb.sv", 
                                                         227);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_F_stage_tb__DOT__run_test__6__test_name = 
        std::string{"Multi-cycle stall"};
    __Vtask_F_stage_tb__DOT__run_test__6__exp_InstrF 
        = vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
        [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF >> 2U))];
    __Vtask_F_stage_tb__DOT__run_test__6__exp_pcF = vlSelfRef.F_stage_tb__DOT__pcF;
    __Vtask_F_stage_tb__DOT__run_test__6__exp_pcF0 
        = ((IData)(4U) + vlSelfRef.F_stage_tb__DOT__pcF);
    vlSelfRef.F_stage_tb__DOT__test_num = ((IData)(1U) 
                                           + vlSelfRef.F_stage_tb__DOT__test_num);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/F_stage_tb.sv", 
                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((((vlSelfRef.F_stage_tb__DOT__pcF0 == __Vtask_F_stage_tb__DOT__run_test__6__exp_pcF0) 
          & (vlSelfRef.F_stage_tb__DOT__pcF == __Vtask_F_stage_tb__DOT__run_test__6__exp_pcF)) 
         & (vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
            [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                       >> 2U))] == __Vtask_F_stage_tb__DOT__run_test__6__exp_InstrF))) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n        pcF0=%x pcF=%x InstrF=%x\n",0,
                     32,vlSelfRef.F_stage_tb__DOT__test_num,
                     -1,&(__Vtask_F_stage_tb__DOT__run_test__6__test_name),
                     32,vlSelfRef.F_stage_tb__DOT__pcF0,
                     32,vlSelfRef.F_stage_tb__DOT__pcF,
                     32,vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
                     [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                                >> 2U))]);
        vlSelfRef.F_stage_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.F_stage_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n        Expected: pcF0=%x pcF=%x InstrF=%x\n        Actual:   pcF0=%x pcF=%x InstrF=%x\n",0,
                     32,vlSelfRef.F_stage_tb__DOT__test_num,
                     -1,&(__Vtask_F_stage_tb__DOT__run_test__6__test_name),
                     32,__Vtask_F_stage_tb__DOT__run_test__6__exp_pcF0,
                     32,__Vtask_F_stage_tb__DOT__run_test__6__exp_pcF,
                     32,__Vtask_F_stage_tb__DOT__run_test__6__exp_InstrF,
                     32,vlSelfRef.F_stage_tb__DOT__pcF0,
                     32,vlSelfRef.F_stage_tb__DOT__pcF,
                     32,vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
                     [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                                >> 2U))]);
        vlSelfRef.F_stage_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.F_stage_tb__DOT__fail_count);
    }
    vlSelfRef.F_stage_tb__DOT__PCSrcE = 1U;
    vlSelfRef.F_stage_tb__DOT__PCTargetE = 0x20U;
    co_await vlSelfRef.__VtrigSched_h599addb5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge F_stage_tb.clk)", 
                                                         "../../01_bench/F_stage_tb.sv", 
                                                         233);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_F_stage_tb__DOT__run_test__7__test_name = 
        std::string{"Stall ignores branch"};
    __Vtask_F_stage_tb__DOT__run_test__7__exp_InstrF 
        = vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
        [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF >> 2U))];
    __Vtask_F_stage_tb__DOT__run_test__7__exp_pcF = vlSelfRef.F_stage_tb__DOT__pcF;
    __Vtask_F_stage_tb__DOT__run_test__7__exp_pcF0 = 0x20U;
    vlSelfRef.F_stage_tb__DOT__test_num = ((IData)(1U) 
                                           + vlSelfRef.F_stage_tb__DOT__test_num);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/F_stage_tb.sv", 
                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((((vlSelfRef.F_stage_tb__DOT__pcF0 == __Vtask_F_stage_tb__DOT__run_test__7__exp_pcF0) 
          & (vlSelfRef.F_stage_tb__DOT__pcF == __Vtask_F_stage_tb__DOT__run_test__7__exp_pcF)) 
         & (vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
            [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                       >> 2U))] == __Vtask_F_stage_tb__DOT__run_test__7__exp_InstrF))) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n        pcF0=%x pcF=%x InstrF=%x\n",0,
                     32,vlSelfRef.F_stage_tb__DOT__test_num,
                     -1,&(__Vtask_F_stage_tb__DOT__run_test__7__test_name),
                     32,vlSelfRef.F_stage_tb__DOT__pcF0,
                     32,vlSelfRef.F_stage_tb__DOT__pcF,
                     32,vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
                     [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                                >> 2U))]);
        vlSelfRef.F_stage_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.F_stage_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n        Expected: pcF0=%x pcF=%x InstrF=%x\n        Actual:   pcF0=%x pcF=%x InstrF=%x\n",0,
                     32,vlSelfRef.F_stage_tb__DOT__test_num,
                     -1,&(__Vtask_F_stage_tb__DOT__run_test__7__test_name),
                     32,__Vtask_F_stage_tb__DOT__run_test__7__exp_pcF0,
                     32,__Vtask_F_stage_tb__DOT__run_test__7__exp_pcF,
                     32,__Vtask_F_stage_tb__DOT__run_test__7__exp_InstrF,
                     32,vlSelfRef.F_stage_tb__DOT__pcF0,
                     32,vlSelfRef.F_stage_tb__DOT__pcF,
                     32,vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
                     [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                                >> 2U))]);
        vlSelfRef.F_stage_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.F_stage_tb__DOT__fail_count);
    }
    vlSelfRef.F_stage_tb__DOT__StallF = 0U;
    co_await vlSelfRef.__VtrigSched_h599addb5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge F_stage_tb.clk)", 
                                                         "../../01_bench/F_stage_tb.sv", 
                                                         238);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_F_stage_tb__DOT__run_test__8__test_name = 
        std::string{"Stall release"};
    __Vtask_F_stage_tb__DOT__run_test__8__exp_InstrF 
        = vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
        [8U];
    __Vtask_F_stage_tb__DOT__run_test__8__exp_pcF = 0x20U;
    __Vtask_F_stage_tb__DOT__run_test__8__exp_pcF0 = 0x20U;
    vlSelfRef.F_stage_tb__DOT__test_num = ((IData)(1U) 
                                           + vlSelfRef.F_stage_tb__DOT__test_num);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/F_stage_tb.sv", 
                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((((vlSelfRef.F_stage_tb__DOT__pcF0 == __Vtask_F_stage_tb__DOT__run_test__8__exp_pcF0) 
          & (vlSelfRef.F_stage_tb__DOT__pcF == __Vtask_F_stage_tb__DOT__run_test__8__exp_pcF)) 
         & (vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
            [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                       >> 2U))] == __Vtask_F_stage_tb__DOT__run_test__8__exp_InstrF))) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n        pcF0=%x pcF=%x InstrF=%x\n",0,
                     32,vlSelfRef.F_stage_tb__DOT__test_num,
                     -1,&(__Vtask_F_stage_tb__DOT__run_test__8__test_name),
                     32,vlSelfRef.F_stage_tb__DOT__pcF0,
                     32,vlSelfRef.F_stage_tb__DOT__pcF,
                     32,vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
                     [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                                >> 2U))]);
        vlSelfRef.F_stage_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.F_stage_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n        Expected: pcF0=%x pcF=%x InstrF=%x\n        Actual:   pcF0=%x pcF=%x InstrF=%x\n",0,
                     32,vlSelfRef.F_stage_tb__DOT__test_num,
                     -1,&(__Vtask_F_stage_tb__DOT__run_test__8__test_name),
                     32,__Vtask_F_stage_tb__DOT__run_test__8__exp_pcF0,
                     32,__Vtask_F_stage_tb__DOT__run_test__8__exp_pcF,
                     32,__Vtask_F_stage_tb__DOT__run_test__8__exp_InstrF,
                     32,vlSelfRef.F_stage_tb__DOT__pcF0,
                     32,vlSelfRef.F_stage_tb__DOT__pcF,
                     32,vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
                     [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                                >> 2U))]);
        vlSelfRef.F_stage_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.F_stage_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n----------- Branch/Jump Tests -----------\n",0);
    vlSelfRef.F_stage_tb__DOT__rst = 0U;
    vlSelfRef.F_stage_tb__DOT__StallF = 0U;
    vlSelfRef.F_stage_tb__DOT__PCSrcE = 1U;
    vlSelfRef.F_stage_tb__DOT__PCTargetE = 8U;
    co_await vlSelfRef.__VtrigSched_h599addb5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge F_stage_tb.clk)", 
                                                         "../../01_bench/F_stage_tb.sv", 
                                                         245);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_F_stage_tb__DOT__run_test__9__test_name = 
        std::string{"Basic branch"};
    __Vtask_F_stage_tb__DOT__run_test__9__exp_InstrF 
        = vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
        [2U];
    __Vtask_F_stage_tb__DOT__run_test__9__exp_pcF = 8U;
    __Vtask_F_stage_tb__DOT__run_test__9__exp_pcF0 = 8U;
    vlSelfRef.F_stage_tb__DOT__test_num = ((IData)(1U) 
                                           + vlSelfRef.F_stage_tb__DOT__test_num);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/F_stage_tb.sv", 
                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((((vlSelfRef.F_stage_tb__DOT__pcF0 == __Vtask_F_stage_tb__DOT__run_test__9__exp_pcF0) 
          & (vlSelfRef.F_stage_tb__DOT__pcF == __Vtask_F_stage_tb__DOT__run_test__9__exp_pcF)) 
         & (vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
            [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                       >> 2U))] == __Vtask_F_stage_tb__DOT__run_test__9__exp_InstrF))) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n        pcF0=%x pcF=%x InstrF=%x\n",0,
                     32,vlSelfRef.F_stage_tb__DOT__test_num,
                     -1,&(__Vtask_F_stage_tb__DOT__run_test__9__test_name),
                     32,vlSelfRef.F_stage_tb__DOT__pcF0,
                     32,vlSelfRef.F_stage_tb__DOT__pcF,
                     32,vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
                     [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                                >> 2U))]);
        vlSelfRef.F_stage_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.F_stage_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n        Expected: pcF0=%x pcF=%x InstrF=%x\n        Actual:   pcF0=%x pcF=%x InstrF=%x\n",0,
                     32,vlSelfRef.F_stage_tb__DOT__test_num,
                     -1,&(__Vtask_F_stage_tb__DOT__run_test__9__test_name),
                     32,__Vtask_F_stage_tb__DOT__run_test__9__exp_pcF0,
                     32,__Vtask_F_stage_tb__DOT__run_test__9__exp_pcF,
                     32,__Vtask_F_stage_tb__DOT__run_test__9__exp_InstrF,
                     32,vlSelfRef.F_stage_tb__DOT__pcF0,
                     32,vlSelfRef.F_stage_tb__DOT__pcF,
                     32,vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
                     [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                                >> 2U))]);
        vlSelfRef.F_stage_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.F_stage_tb__DOT__fail_count);
    }
    vlSelfRef.F_stage_tb__DOT__PCTargetE = 0x10U;
    co_await vlSelfRef.__VtrigSched_h599addb5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge F_stage_tb.clk)", 
                                                         "../../01_bench/F_stage_tb.sv", 
                                                         250);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_F_stage_tb__DOT__run_test__10__test_name = 
        std::string{"Back-to-back branch"};
    __Vtask_F_stage_tb__DOT__run_test__10__exp_InstrF 
        = vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
        [4U];
    __Vtask_F_stage_tb__DOT__run_test__10__exp_pcF = 0x10U;
    __Vtask_F_stage_tb__DOT__run_test__10__exp_pcF0 = 0x10U;
    vlSelfRef.F_stage_tb__DOT__test_num = ((IData)(1U) 
                                           + vlSelfRef.F_stage_tb__DOT__test_num);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/F_stage_tb.sv", 
                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((((vlSelfRef.F_stage_tb__DOT__pcF0 == __Vtask_F_stage_tb__DOT__run_test__10__exp_pcF0) 
          & (vlSelfRef.F_stage_tb__DOT__pcF == __Vtask_F_stage_tb__DOT__run_test__10__exp_pcF)) 
         & (vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
            [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                       >> 2U))] == __Vtask_F_stage_tb__DOT__run_test__10__exp_InstrF))) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n        pcF0=%x pcF=%x InstrF=%x\n",0,
                     32,vlSelfRef.F_stage_tb__DOT__test_num,
                     -1,&(__Vtask_F_stage_tb__DOT__run_test__10__test_name),
                     32,vlSelfRef.F_stage_tb__DOT__pcF0,
                     32,vlSelfRef.F_stage_tb__DOT__pcF,
                     32,vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
                     [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                                >> 2U))]);
        vlSelfRef.F_stage_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.F_stage_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n        Expected: pcF0=%x pcF=%x InstrF=%x\n        Actual:   pcF0=%x pcF=%x InstrF=%x\n",0,
                     32,vlSelfRef.F_stage_tb__DOT__test_num,
                     -1,&(__Vtask_F_stage_tb__DOT__run_test__10__test_name),
                     32,__Vtask_F_stage_tb__DOT__run_test__10__exp_pcF0,
                     32,__Vtask_F_stage_tb__DOT__run_test__10__exp_pcF,
                     32,__Vtask_F_stage_tb__DOT__run_test__10__exp_InstrF,
                     32,vlSelfRef.F_stage_tb__DOT__pcF0,
                     32,vlSelfRef.F_stage_tb__DOT__pcF,
                     32,vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
                     [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                                >> 2U))]);
        vlSelfRef.F_stage_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.F_stage_tb__DOT__fail_count);
    }
    vlSelfRef.F_stage_tb__DOT__PCTargetE = vlSelfRef.F_stage_tb__DOT__pcF;
    co_await vlSelfRef.__VtrigSched_h599addb5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge F_stage_tb.clk)", 
                                                         "../../01_bench/F_stage_tb.sv", 
                                                         255);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_F_stage_tb__DOT__run_test__11__test_name = 
        std::string{"Branch to current PC"};
    __Vtask_F_stage_tb__DOT__run_test__11__exp_InstrF 
        = vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
        [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF >> 2U))];
    __Vtask_F_stage_tb__DOT__run_test__11__exp_pcF 
        = vlSelfRef.F_stage_tb__DOT__pcF;
    __Vtask_F_stage_tb__DOT__run_test__11__exp_pcF0 
        = vlSelfRef.F_stage_tb__DOT__pcF;
    vlSelfRef.F_stage_tb__DOT__test_num = ((IData)(1U) 
                                           + vlSelfRef.F_stage_tb__DOT__test_num);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/F_stage_tb.sv", 
                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((((vlSelfRef.F_stage_tb__DOT__pcF0 == __Vtask_F_stage_tb__DOT__run_test__11__exp_pcF0) 
          & (vlSelfRef.F_stage_tb__DOT__pcF == __Vtask_F_stage_tb__DOT__run_test__11__exp_pcF)) 
         & (vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
            [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                       >> 2U))] == __Vtask_F_stage_tb__DOT__run_test__11__exp_InstrF))) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n        pcF0=%x pcF=%x InstrF=%x\n",0,
                     32,vlSelfRef.F_stage_tb__DOT__test_num,
                     -1,&(__Vtask_F_stage_tb__DOT__run_test__11__test_name),
                     32,vlSelfRef.F_stage_tb__DOT__pcF0,
                     32,vlSelfRef.F_stage_tb__DOT__pcF,
                     32,vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
                     [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                                >> 2U))]);
        vlSelfRef.F_stage_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.F_stage_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n        Expected: pcF0=%x pcF=%x InstrF=%x\n        Actual:   pcF0=%x pcF=%x InstrF=%x\n",0,
                     32,vlSelfRef.F_stage_tb__DOT__test_num,
                     -1,&(__Vtask_F_stage_tb__DOT__run_test__11__test_name),
                     32,__Vtask_F_stage_tb__DOT__run_test__11__exp_pcF0,
                     32,__Vtask_F_stage_tb__DOT__run_test__11__exp_pcF,
                     32,__Vtask_F_stage_tb__DOT__run_test__11__exp_InstrF,
                     32,vlSelfRef.F_stage_tb__DOT__pcF0,
                     32,vlSelfRef.F_stage_tb__DOT__pcF,
                     32,vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
                     [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                                >> 2U))]);
        vlSelfRef.F_stage_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.F_stage_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n----------- Edge Cases -----------\n",0);
    vlSelfRef.F_stage_tb__DOT__rst = 0U;
    vlSelfRef.F_stage_tb__DOT__StallF = 0U;
    vlSelfRef.F_stage_tb__DOT__PCSrcE = 1U;
    vlSelfRef.F_stage_tb__DOT__PCTargetE = 0xfffffffcU;
    co_await vlSelfRef.__VtrigSched_h599addb5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge F_stage_tb.clk)", 
                                                         "../../01_bench/F_stage_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_F_stage_tb__DOT__run_test__12__test_name = 
        std::string{"Maximum PC"};
    __Vtask_F_stage_tb__DOT__run_test__12__exp_InstrF 
        = vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
        [0x3fU];
    __Vtask_F_stage_tb__DOT__run_test__12__exp_pcF = 0xfffffffcU;
    __Vtask_F_stage_tb__DOT__run_test__12__exp_pcF0 = 0xfffffffcU;
    vlSelfRef.F_stage_tb__DOT__test_num = ((IData)(1U) 
                                           + vlSelfRef.F_stage_tb__DOT__test_num);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/F_stage_tb.sv", 
                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((((vlSelfRef.F_stage_tb__DOT__pcF0 == __Vtask_F_stage_tb__DOT__run_test__12__exp_pcF0) 
          & (vlSelfRef.F_stage_tb__DOT__pcF == __Vtask_F_stage_tb__DOT__run_test__12__exp_pcF)) 
         & (vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
            [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                       >> 2U))] == __Vtask_F_stage_tb__DOT__run_test__12__exp_InstrF))) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n        pcF0=%x pcF=%x InstrF=%x\n",0,
                     32,vlSelfRef.F_stage_tb__DOT__test_num,
                     -1,&(__Vtask_F_stage_tb__DOT__run_test__12__test_name),
                     32,vlSelfRef.F_stage_tb__DOT__pcF0,
                     32,vlSelfRef.F_stage_tb__DOT__pcF,
                     32,vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
                     [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                                >> 2U))]);
        vlSelfRef.F_stage_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.F_stage_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n        Expected: pcF0=%x pcF=%x InstrF=%x\n        Actual:   pcF0=%x pcF=%x InstrF=%x\n",0,
                     32,vlSelfRef.F_stage_tb__DOT__test_num,
                     -1,&(__Vtask_F_stage_tb__DOT__run_test__12__test_name),
                     32,__Vtask_F_stage_tb__DOT__run_test__12__exp_pcF0,
                     32,__Vtask_F_stage_tb__DOT__run_test__12__exp_pcF,
                     32,__Vtask_F_stage_tb__DOT__run_test__12__exp_InstrF,
                     32,vlSelfRef.F_stage_tb__DOT__pcF0,
                     32,vlSelfRef.F_stage_tb__DOT__pcF,
                     32,vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
                     [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                                >> 2U))]);
        vlSelfRef.F_stage_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.F_stage_tb__DOT__fail_count);
    }
    vlSelfRef.F_stage_tb__DOT__rst = 0U;
    vlSelfRef.F_stage_tb__DOT__StallF = 0U;
    vlSelfRef.F_stage_tb__DOT__PCSrcE = 0U;
    co_await vlSelfRef.__VtrigSched_h599addb5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge F_stage_tb.clk)", 
                                                         "../../01_bench/F_stage_tb.sv", 
                                                         267);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_F_stage_tb__DOT__run_test__13__test_name = 
        std::string{"PC wrap-around"};
    __Vtask_F_stage_tb__DOT__run_test__13__exp_InstrF 
        = vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
        [0U];
    __Vtask_F_stage_tb__DOT__run_test__13__exp_pcF = 0U;
    __Vtask_F_stage_tb__DOT__run_test__13__exp_pcF0 = 4U;
    vlSelfRef.F_stage_tb__DOT__test_num = ((IData)(1U) 
                                           + vlSelfRef.F_stage_tb__DOT__test_num);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/F_stage_tb.sv", 
                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((((vlSelfRef.F_stage_tb__DOT__pcF0 == __Vtask_F_stage_tb__DOT__run_test__13__exp_pcF0) 
          & (vlSelfRef.F_stage_tb__DOT__pcF == __Vtask_F_stage_tb__DOT__run_test__13__exp_pcF)) 
         & (vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
            [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                       >> 2U))] == __Vtask_F_stage_tb__DOT__run_test__13__exp_InstrF))) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n        pcF0=%x pcF=%x InstrF=%x\n",0,
                     32,vlSelfRef.F_stage_tb__DOT__test_num,
                     -1,&(__Vtask_F_stage_tb__DOT__run_test__13__test_name),
                     32,vlSelfRef.F_stage_tb__DOT__pcF0,
                     32,vlSelfRef.F_stage_tb__DOT__pcF,
                     32,vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
                     [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                                >> 2U))]);
        vlSelfRef.F_stage_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.F_stage_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n        Expected: pcF0=%x pcF=%x InstrF=%x\n        Actual:   pcF0=%x pcF=%x InstrF=%x\n",0,
                     32,vlSelfRef.F_stage_tb__DOT__test_num,
                     -1,&(__Vtask_F_stage_tb__DOT__run_test__13__test_name),
                     32,__Vtask_F_stage_tb__DOT__run_test__13__exp_pcF0,
                     32,__Vtask_F_stage_tb__DOT__run_test__13__exp_pcF,
                     32,__Vtask_F_stage_tb__DOT__run_test__13__exp_InstrF,
                     32,vlSelfRef.F_stage_tb__DOT__pcF0,
                     32,vlSelfRef.F_stage_tb__DOT__pcF,
                     32,vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
                     [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                                >> 2U))]);
        vlSelfRef.F_stage_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.F_stage_tb__DOT__fail_count);
    }
    vlSelfRef.F_stage_tb__DOT__rst = 0U;
    vlSelfRef.F_stage_tb__DOT__StallF = 0U;
    vlSelfRef.F_stage_tb__DOT__PCSrcE = 1U;
    vlSelfRef.F_stage_tb__DOT__PCTargetE = 0x20U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/F_stage_tb.sv", 
                                         272);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.F_stage_tb__DOT__PCSrcE = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/F_stage_tb.sv", 
                                         273);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.F_stage_tb__DOT__StallF = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/F_stage_tb.sv", 
                                         274);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.F_stage_tb__DOT__rst = 1U;
    co_await vlSelfRef.__VtrigSched_h599addb5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge F_stage_tb.clk)", 
                                                         "../../01_bench/F_stage_tb.sv", 
                                                         276);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_F_stage_tb__DOT__run_test__14__test_name = 
        std::string{"Multiple control changes"};
    __Vtask_F_stage_tb__DOT__run_test__14__exp_InstrF = 0x500113U;
    __Vtask_F_stage_tb__DOT__run_test__14__exp_pcF = 0U;
    __Vtask_F_stage_tb__DOT__run_test__14__exp_pcF0 = 4U;
    vlSelfRef.F_stage_tb__DOT__test_num = ((IData)(1U) 
                                           + vlSelfRef.F_stage_tb__DOT__test_num);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/F_stage_tb.sv", 
                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((((vlSelfRef.F_stage_tb__DOT__pcF0 == __Vtask_F_stage_tb__DOT__run_test__14__exp_pcF0) 
          & (vlSelfRef.F_stage_tb__DOT__pcF == __Vtask_F_stage_tb__DOT__run_test__14__exp_pcF)) 
         & (vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
            [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                       >> 2U))] == __Vtask_F_stage_tb__DOT__run_test__14__exp_InstrF))) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n        pcF0=%x pcF=%x InstrF=%x\n",0,
                     32,vlSelfRef.F_stage_tb__DOT__test_num,
                     -1,&(__Vtask_F_stage_tb__DOT__run_test__14__test_name),
                     32,vlSelfRef.F_stage_tb__DOT__pcF0,
                     32,vlSelfRef.F_stage_tb__DOT__pcF,
                     32,vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
                     [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                                >> 2U))]);
        vlSelfRef.F_stage_tb__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.F_stage_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n        Expected: pcF0=%x pcF=%x InstrF=%x\n        Actual:   pcF0=%x pcF=%x InstrF=%x\n",0,
                     32,vlSelfRef.F_stage_tb__DOT__test_num,
                     -1,&(__Vtask_F_stage_tb__DOT__run_test__14__test_name),
                     32,__Vtask_F_stage_tb__DOT__run_test__14__exp_pcF0,
                     32,__Vtask_F_stage_tb__DOT__run_test__14__exp_pcF,
                     32,__Vtask_F_stage_tb__DOT__run_test__14__exp_InstrF,
                     32,vlSelfRef.F_stage_tb__DOT__pcF0,
                     32,vlSelfRef.F_stage_tb__DOT__pcF,
                     32,vlSelfRef.F_stage_tb__DOT__imem__DOT__RAM
                     [(0x3fU & (vlSelfRef.F_stage_tb__DOT__pcF 
                                >> 2U))]);
        vlSelfRef.F_stage_tb__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.F_stage_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n===== Test Statistics =====\nTotal Tests:  %0d\n\342\234\205 Tests Passed: %0d (%0.1f%%)\n\342\235\214 Tests Failed: %0d (%0.1f%%)\n===========================\n\n",0,
                 32,vlSelfRef.F_stage_tb__DOT__test_num,
                 32,vlSelfRef.F_stage_tb__DOT__pass_count,
                 64,((100.0 * VL_ISTOR_D_I(32, vlSelfRef.F_stage_tb__DOT__pass_count)) 
                     / VL_ISTOR_D_I(32, vlSelfRef.F_stage_tb__DOT__test_num)),
                 32,vlSelfRef.F_stage_tb__DOT__fail_count,
                 64,((100.0 * VL_ISTOR_D_I(32, vlSelfRef.F_stage_tb__DOT__fail_count)) 
                     / VL_ISTOR_D_I(32, vlSelfRef.F_stage_tb__DOT__test_num)));
    VL_FINISH_MT("../../01_bench/F_stage_tb.sv", 286, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine VF_stage_tb___024root___eval_initial__TOP__Vtiming__1(VF_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF_stage_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    VF_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        vlSelfRef.F_stage_tb__DOT__clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "../../01_bench/F_stage_tb.sv", 
                                             16);
        vlSelfRef.F_stage_tb__DOT__clk = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "../../01_bench/F_stage_tb.sv", 
                                             17);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VF_stage_tb___024root___dump_triggers__act(VF_stage_tb___024root* vlSelf);
#endif  // VL_DEBUG

void VF_stage_tb___024root___eval_triggers__act(VF_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF_stage_tb___024root___eval_triggers__act\n"); );
    VF_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.F_stage_tb__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__F_stage_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.F_stage_tb__DOT__rst) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__F_stage_tb__DOT__rst__0))));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__F_stage_tb__DOT__clk__0 
        = vlSelfRef.F_stage_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__F_stage_tb__DOT__rst__0 
        = vlSelfRef.F_stage_tb__DOT__rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VF_stage_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
