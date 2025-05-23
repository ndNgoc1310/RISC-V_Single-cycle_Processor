// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vextender_tb.h for the primary calling header

#include "Vextender_tb__pch.h"
#include "Vextender_tb__Syms.h"
#include "Vextender_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vextender_tb___024root___eval_initial__TOP__Vtiming__0(Vextender_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextender_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vextender_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_extender_tb__DOT__run_test__0__exp_immext;
    __Vtask_extender_tb__DOT__run_test__0__exp_immext = 0;
    std::string __Vtask_extender_tb__DOT__run_test__0__test_name;
    IData/*24:0*/ __Vtask_extender_tb__DOT__run_test__1__in_instr;
    __Vtask_extender_tb__DOT__run_test__1__in_instr = 0;
    CData/*2:0*/ __Vtask_extender_tb__DOT__run_test__1__in_immsrc;
    __Vtask_extender_tb__DOT__run_test__1__in_immsrc = 0;
    IData/*31:0*/ __Vtask_extender_tb__DOT__run_test__1__exp_immext;
    __Vtask_extender_tb__DOT__run_test__1__exp_immext = 0;
    std::string __Vtask_extender_tb__DOT__run_test__1__test_name;
    IData/*24:0*/ __Vtask_extender_tb__DOT__run_test__2__in_instr;
    __Vtask_extender_tb__DOT__run_test__2__in_instr = 0;
    CData/*2:0*/ __Vtask_extender_tb__DOT__run_test__2__in_immsrc;
    __Vtask_extender_tb__DOT__run_test__2__in_immsrc = 0;
    IData/*31:0*/ __Vtask_extender_tb__DOT__run_test__2__exp_immext;
    __Vtask_extender_tb__DOT__run_test__2__exp_immext = 0;
    std::string __Vtask_extender_tb__DOT__run_test__2__test_name;
    IData/*24:0*/ __Vtask_extender_tb__DOT__run_test__3__in_instr;
    __Vtask_extender_tb__DOT__run_test__3__in_instr = 0;
    CData/*2:0*/ __Vtask_extender_tb__DOT__run_test__3__in_immsrc;
    __Vtask_extender_tb__DOT__run_test__3__in_immsrc = 0;
    IData/*31:0*/ __Vtask_extender_tb__DOT__run_test__3__exp_immext;
    __Vtask_extender_tb__DOT__run_test__3__exp_immext = 0;
    std::string __Vtask_extender_tb__DOT__run_test__3__test_name;
    IData/*24:0*/ __Vtask_extender_tb__DOT__run_test__4__in_instr;
    __Vtask_extender_tb__DOT__run_test__4__in_instr = 0;
    CData/*2:0*/ __Vtask_extender_tb__DOT__run_test__4__in_immsrc;
    __Vtask_extender_tb__DOT__run_test__4__in_immsrc = 0;
    IData/*31:0*/ __Vtask_extender_tb__DOT__run_test__4__exp_immext;
    __Vtask_extender_tb__DOT__run_test__4__exp_immext = 0;
    std::string __Vtask_extender_tb__DOT__run_test__4__test_name;
    IData/*24:0*/ __Vtask_extender_tb__DOT__run_test__5__in_instr;
    __Vtask_extender_tb__DOT__run_test__5__in_instr = 0;
    CData/*2:0*/ __Vtask_extender_tb__DOT__run_test__5__in_immsrc;
    __Vtask_extender_tb__DOT__run_test__5__in_immsrc = 0;
    IData/*31:0*/ __Vtask_extender_tb__DOT__run_test__5__exp_immext;
    __Vtask_extender_tb__DOT__run_test__5__exp_immext = 0;
    std::string __Vtask_extender_tb__DOT__run_test__5__test_name;
    IData/*24:0*/ __Vtask_extender_tb__DOT__run_test__6__in_instr;
    __Vtask_extender_tb__DOT__run_test__6__in_instr = 0;
    CData/*2:0*/ __Vtask_extender_tb__DOT__run_test__6__in_immsrc;
    __Vtask_extender_tb__DOT__run_test__6__in_immsrc = 0;
    IData/*31:0*/ __Vtask_extender_tb__DOT__run_test__6__exp_immext;
    __Vtask_extender_tb__DOT__run_test__6__exp_immext = 0;
    std::string __Vtask_extender_tb__DOT__run_test__6__test_name;
    IData/*24:0*/ __Vtask_extender_tb__DOT__run_test__7__in_instr;
    __Vtask_extender_tb__DOT__run_test__7__in_instr = 0;
    CData/*2:0*/ __Vtask_extender_tb__DOT__run_test__7__in_immsrc;
    __Vtask_extender_tb__DOT__run_test__7__in_immsrc = 0;
    IData/*31:0*/ __Vtask_extender_tb__DOT__run_test__7__exp_immext;
    __Vtask_extender_tb__DOT__run_test__7__exp_immext = 0;
    std::string __Vtask_extender_tb__DOT__run_test__7__test_name;
    IData/*24:0*/ __Vtask_extender_tb__DOT__run_test__8__in_instr;
    __Vtask_extender_tb__DOT__run_test__8__in_instr = 0;
    CData/*2:0*/ __Vtask_extender_tb__DOT__run_test__8__in_immsrc;
    __Vtask_extender_tb__DOT__run_test__8__in_immsrc = 0;
    IData/*31:0*/ __Vtask_extender_tb__DOT__run_test__8__exp_immext;
    __Vtask_extender_tb__DOT__run_test__8__exp_immext = 0;
    std::string __Vtask_extender_tb__DOT__run_test__8__test_name;
    IData/*24:0*/ __Vtask_extender_tb__DOT__run_test__9__in_instr;
    __Vtask_extender_tb__DOT__run_test__9__in_instr = 0;
    CData/*2:0*/ __Vtask_extender_tb__DOT__run_test__9__in_immsrc;
    __Vtask_extender_tb__DOT__run_test__9__in_immsrc = 0;
    IData/*31:0*/ __Vtask_extender_tb__DOT__run_test__9__exp_immext;
    __Vtask_extender_tb__DOT__run_test__9__exp_immext = 0;
    std::string __Vtask_extender_tb__DOT__run_test__9__test_name;
    IData/*24:0*/ __Vtask_extender_tb__DOT__run_test__10__in_instr;
    __Vtask_extender_tb__DOT__run_test__10__in_instr = 0;
    CData/*2:0*/ __Vtask_extender_tb__DOT__run_test__10__in_immsrc;
    __Vtask_extender_tb__DOT__run_test__10__in_immsrc = 0;
    IData/*31:0*/ __Vtask_extender_tb__DOT__run_test__10__exp_immext;
    __Vtask_extender_tb__DOT__run_test__10__exp_immext = 0;
    std::string __Vtask_extender_tb__DOT__run_test__10__test_name;
    IData/*24:0*/ __Vtask_extender_tb__DOT__run_test__11__in_instr;
    __Vtask_extender_tb__DOT__run_test__11__in_instr = 0;
    CData/*2:0*/ __Vtask_extender_tb__DOT__run_test__11__in_immsrc;
    __Vtask_extender_tb__DOT__run_test__11__in_immsrc = 0;
    IData/*31:0*/ __Vtask_extender_tb__DOT__run_test__11__exp_immext;
    __Vtask_extender_tb__DOT__run_test__11__exp_immext = 0;
    std::string __Vtask_extender_tb__DOT__run_test__11__test_name;
    IData/*24:0*/ __Vtask_extender_tb__DOT__run_test__12__in_instr;
    __Vtask_extender_tb__DOT__run_test__12__in_instr = 0;
    CData/*2:0*/ __Vtask_extender_tb__DOT__run_test__12__in_immsrc;
    __Vtask_extender_tb__DOT__run_test__12__in_immsrc = 0;
    IData/*31:0*/ __Vtask_extender_tb__DOT__run_test__12__exp_immext;
    __Vtask_extender_tb__DOT__run_test__12__exp_immext = 0;
    std::string __Vtask_extender_tb__DOT__run_test__12__test_name;
    IData/*24:0*/ __Vtask_extender_tb__DOT__run_test__13__in_instr;
    __Vtask_extender_tb__DOT__run_test__13__in_instr = 0;
    CData/*2:0*/ __Vtask_extender_tb__DOT__run_test__13__in_immsrc;
    __Vtask_extender_tb__DOT__run_test__13__in_immsrc = 0;
    IData/*31:0*/ __Vtask_extender_tb__DOT__run_test__13__exp_immext;
    __Vtask_extender_tb__DOT__run_test__13__exp_immext = 0;
    std::string __Vtask_extender_tb__DOT__run_test__13__test_name;
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"wave.vcd"});
    vlSymsp->_traceDumpOpen();
    VL_WRITEF_NX("\n===== Immediate Extender Tests =====\n\n----------- I-type Tests -----------\n",0);
    __Vtask_extender_tb__DOT__run_test__0__test_name = 
        std::string{"I-type positive small"};
    __Vtask_extender_tb__DOT__run_test__0__exp_immext = 4U;
    vlSelfRef.extender_tb__DOT__test_num = ((IData)(1U) 
                                            + vlSelfRef.extender_tb__DOT__test_num);
    vlSelfRef.extender_tb__DOT__instr = 0x8000U;
    vlSelfRef.extender_tb__DOT__immsrc = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/extender_tb.sv", 
                                         34);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.extender_tb__DOT__immext == __Vtask_extender_tb__DOT__run_test__0__exp_immext)) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n",0,
                     32,vlSelfRef.extender_tb__DOT__test_num,
                     -1,&(__Vtask_extender_tb__DOT__run_test__0__test_name));
        if ((4U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else {
                VL_WRITEF_NX("        instr={imm[31:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr={imm[20|10:1|11|19:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            } else {
                VL_WRITEF_NX("        instr={imm[12|10:5]}_{rs2}_{rs1}_{f3}_{imm[4:1|11]} = %b_%b_%b_%b_%b\n",0,
                             7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0x12U)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0xdU)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 8U)),3,
                             (7U & (vlSelfRef.extender_tb__DOT__instr 
                                    >> 5U)),5,(0x1fU 
                                               & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            VL_WRITEF_NX("        instr={imm[11:5]}_{rs2}_{rs1}_{f3}_{imm[4:0]} = %b_%b_%b_%b_%b\n",0,
                         7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 0x12U)),5,(0x1fU 
                                                   & (vlSelfRef.extender_tb__DOT__instr 
                                                      >> 0xdU)),
                         5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 8U)),3,(7U 
                                                & (vlSelfRef.extender_tb__DOT__instr 
                                                   >> 5U)),
                         5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
        } else {
            VL_WRITEF_NX("        instr={imm[11:0]}_{other bits} = %b_%b\n",0,
                         12,(0xfffU & (vlSelfRef.extender_tb__DOT__instr 
                                       >> 0xdU)),13,
                         (0x1fffU & vlSelfRef.extender_tb__DOT__instr));
        }
        VL_WRITEF_NX("        immsrc=%b\n        immext=%b\n",0,
                     3,vlSelfRef.extender_tb__DOT__immsrc,
                     32,vlSelfRef.extender_tb__DOT__immext);
        vlSelfRef.extender_tb__DOT__pass_count = ((IData)(1U) 
                                                  + vlSelfRef.extender_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n",0,
                     32,vlSelfRef.extender_tb__DOT__test_num,
                     -1,&(__Vtask_extender_tb__DOT__run_test__0__test_name));
        if ((4U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else {
                VL_WRITEF_NX("        instr={imm[31:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr={imm[20|10:1|11|19:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            } else {
                VL_WRITEF_NX("        instr={imm[12|10:5]}_{rs2}_{rs1}_{f3}_{imm[4:1|11]} = %b_%b_%b_%b_%b\n",0,
                             7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0x12U)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0xdU)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 8U)),3,
                             (7U & (vlSelfRef.extender_tb__DOT__instr 
                                    >> 5U)),5,(0x1fU 
                                               & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            VL_WRITEF_NX("        instr={imm[11:5]}_{rs2}_{rs1}_{f3}_{imm[4:0]} = %b_%b_%b_%b_%b\n",0,
                         7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 0x12U)),5,(0x1fU 
                                                   & (vlSelfRef.extender_tb__DOT__instr 
                                                      >> 0xdU)),
                         5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 8U)),3,(7U 
                                                & (vlSelfRef.extender_tb__DOT__instr 
                                                   >> 5U)),
                         5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
        } else {
            VL_WRITEF_NX("        instr={imm[11:0]}_{other bits} = %b_%b\n",0,
                         12,(0xfffU & (vlSelfRef.extender_tb__DOT__instr 
                                       >> 0xdU)),13,
                         (0x1fffU & vlSelfRef.extender_tb__DOT__instr));
        }
        VL_WRITEF_NX("        Expected: immext=%b\n        Actual:   immext=%b\n        immsrc=%b\n",0,
                     32,__Vtask_extender_tb__DOT__run_test__0__exp_immext,
                     32,vlSelfRef.extender_tb__DOT__immext,
                     3,(IData)(vlSelfRef.extender_tb__DOT__immsrc));
        vlSelfRef.extender_tb__DOT__fail_count = ((IData)(1U) 
                                                  + vlSelfRef.extender_tb__DOT__fail_count);
    }
    vlSelfRef.extender_tb__DOT__instr = 0x1ff8000U;
    vlSelfRef.extender_tb__DOT__immsrc = 0U;
    __Vtask_extender_tb__DOT__run_test__1__test_name = 
        std::string{"I-type negative small"};
    __Vtask_extender_tb__DOT__run_test__1__exp_immext = 0xfffffffcU;
    __Vtask_extender_tb__DOT__run_test__1__in_immsrc 
        = vlSelfRef.extender_tb__DOT__immsrc;
    __Vtask_extender_tb__DOT__run_test__1__in_instr 
        = vlSelfRef.extender_tb__DOT__instr;
    vlSelfRef.extender_tb__DOT__test_num = ((IData)(1U) 
                                            + vlSelfRef.extender_tb__DOT__test_num);
    vlSelfRef.extender_tb__DOT__instr = __Vtask_extender_tb__DOT__run_test__1__in_instr;
    vlSelfRef.extender_tb__DOT__immsrc = __Vtask_extender_tb__DOT__run_test__1__in_immsrc;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/extender_tb.sv", 
                                         34);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.extender_tb__DOT__immext == __Vtask_extender_tb__DOT__run_test__1__exp_immext)) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n",0,
                     32,vlSelfRef.extender_tb__DOT__test_num,
                     -1,&(__Vtask_extender_tb__DOT__run_test__1__test_name));
        if ((4U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else {
                VL_WRITEF_NX("        instr={imm[31:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr={imm[20|10:1|11|19:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            } else {
                VL_WRITEF_NX("        instr={imm[12|10:5]}_{rs2}_{rs1}_{f3}_{imm[4:1|11]} = %b_%b_%b_%b_%b\n",0,
                             7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0x12U)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0xdU)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 8U)),3,
                             (7U & (vlSelfRef.extender_tb__DOT__instr 
                                    >> 5U)),5,(0x1fU 
                                               & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            VL_WRITEF_NX("        instr={imm[11:5]}_{rs2}_{rs1}_{f3}_{imm[4:0]} = %b_%b_%b_%b_%b\n",0,
                         7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 0x12U)),5,(0x1fU 
                                                   & (vlSelfRef.extender_tb__DOT__instr 
                                                      >> 0xdU)),
                         5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 8U)),3,(7U 
                                                & (vlSelfRef.extender_tb__DOT__instr 
                                                   >> 5U)),
                         5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
        } else {
            VL_WRITEF_NX("        instr={imm[11:0]}_{other bits} = %b_%b\n",0,
                         12,(0xfffU & (vlSelfRef.extender_tb__DOT__instr 
                                       >> 0xdU)),13,
                         (0x1fffU & vlSelfRef.extender_tb__DOT__instr));
        }
        VL_WRITEF_NX("        immsrc=%b\n        immext=%b\n",0,
                     3,vlSelfRef.extender_tb__DOT__immsrc,
                     32,vlSelfRef.extender_tb__DOT__immext);
        vlSelfRef.extender_tb__DOT__pass_count = ((IData)(1U) 
                                                  + vlSelfRef.extender_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n",0,
                     32,vlSelfRef.extender_tb__DOT__test_num,
                     -1,&(__Vtask_extender_tb__DOT__run_test__1__test_name));
        if ((4U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else {
                VL_WRITEF_NX("        instr={imm[31:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr={imm[20|10:1|11|19:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            } else {
                VL_WRITEF_NX("        instr={imm[12|10:5]}_{rs2}_{rs1}_{f3}_{imm[4:1|11]} = %b_%b_%b_%b_%b\n",0,
                             7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0x12U)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0xdU)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 8U)),3,
                             (7U & (vlSelfRef.extender_tb__DOT__instr 
                                    >> 5U)),5,(0x1fU 
                                               & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            VL_WRITEF_NX("        instr={imm[11:5]}_{rs2}_{rs1}_{f3}_{imm[4:0]} = %b_%b_%b_%b_%b\n",0,
                         7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 0x12U)),5,(0x1fU 
                                                   & (vlSelfRef.extender_tb__DOT__instr 
                                                      >> 0xdU)),
                         5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 8U)),3,(7U 
                                                & (vlSelfRef.extender_tb__DOT__instr 
                                                   >> 5U)),
                         5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
        } else {
            VL_WRITEF_NX("        instr={imm[11:0]}_{other bits} = %b_%b\n",0,
                         12,(0xfffU & (vlSelfRef.extender_tb__DOT__instr 
                                       >> 0xdU)),13,
                         (0x1fffU & vlSelfRef.extender_tb__DOT__instr));
        }
        VL_WRITEF_NX("        Expected: immext=%b\n        Actual:   immext=%b\n        immsrc=%b\n",0,
                     32,__Vtask_extender_tb__DOT__run_test__1__exp_immext,
                     32,vlSelfRef.extender_tb__DOT__immext,
                     3,(IData)(vlSelfRef.extender_tb__DOT__immsrc));
        vlSelfRef.extender_tb__DOT__fail_count = ((IData)(1U) 
                                                  + vlSelfRef.extender_tb__DOT__fail_count);
    }
    vlSelfRef.extender_tb__DOT__instr = 0xffe000U;
    vlSelfRef.extender_tb__DOT__immsrc = 0U;
    __Vtask_extender_tb__DOT__run_test__2__test_name = 
        std::string{"I-type max positive"};
    __Vtask_extender_tb__DOT__run_test__2__exp_immext = 0x7ffU;
    __Vtask_extender_tb__DOT__run_test__2__in_immsrc 
        = vlSelfRef.extender_tb__DOT__immsrc;
    __Vtask_extender_tb__DOT__run_test__2__in_instr 
        = vlSelfRef.extender_tb__DOT__instr;
    vlSelfRef.extender_tb__DOT__test_num = ((IData)(1U) 
                                            + vlSelfRef.extender_tb__DOT__test_num);
    vlSelfRef.extender_tb__DOT__instr = __Vtask_extender_tb__DOT__run_test__2__in_instr;
    vlSelfRef.extender_tb__DOT__immsrc = __Vtask_extender_tb__DOT__run_test__2__in_immsrc;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/extender_tb.sv", 
                                         34);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.extender_tb__DOT__immext == __Vtask_extender_tb__DOT__run_test__2__exp_immext)) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n",0,
                     32,vlSelfRef.extender_tb__DOT__test_num,
                     -1,&(__Vtask_extender_tb__DOT__run_test__2__test_name));
        if ((4U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else {
                VL_WRITEF_NX("        instr={imm[31:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr={imm[20|10:1|11|19:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            } else {
                VL_WRITEF_NX("        instr={imm[12|10:5]}_{rs2}_{rs1}_{f3}_{imm[4:1|11]} = %b_%b_%b_%b_%b\n",0,
                             7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0x12U)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0xdU)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 8U)),3,
                             (7U & (vlSelfRef.extender_tb__DOT__instr 
                                    >> 5U)),5,(0x1fU 
                                               & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            VL_WRITEF_NX("        instr={imm[11:5]}_{rs2}_{rs1}_{f3}_{imm[4:0]} = %b_%b_%b_%b_%b\n",0,
                         7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 0x12U)),5,(0x1fU 
                                                   & (vlSelfRef.extender_tb__DOT__instr 
                                                      >> 0xdU)),
                         5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 8U)),3,(7U 
                                                & (vlSelfRef.extender_tb__DOT__instr 
                                                   >> 5U)),
                         5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
        } else {
            VL_WRITEF_NX("        instr={imm[11:0]}_{other bits} = %b_%b\n",0,
                         12,(0xfffU & (vlSelfRef.extender_tb__DOT__instr 
                                       >> 0xdU)),13,
                         (0x1fffU & vlSelfRef.extender_tb__DOT__instr));
        }
        VL_WRITEF_NX("        immsrc=%b\n        immext=%b\n",0,
                     3,vlSelfRef.extender_tb__DOT__immsrc,
                     32,vlSelfRef.extender_tb__DOT__immext);
        vlSelfRef.extender_tb__DOT__pass_count = ((IData)(1U) 
                                                  + vlSelfRef.extender_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n",0,
                     32,vlSelfRef.extender_tb__DOT__test_num,
                     -1,&(__Vtask_extender_tb__DOT__run_test__2__test_name));
        if ((4U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else {
                VL_WRITEF_NX("        instr={imm[31:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr={imm[20|10:1|11|19:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            } else {
                VL_WRITEF_NX("        instr={imm[12|10:5]}_{rs2}_{rs1}_{f3}_{imm[4:1|11]} = %b_%b_%b_%b_%b\n",0,
                             7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0x12U)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0xdU)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 8U)),3,
                             (7U & (vlSelfRef.extender_tb__DOT__instr 
                                    >> 5U)),5,(0x1fU 
                                               & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            VL_WRITEF_NX("        instr={imm[11:5]}_{rs2}_{rs1}_{f3}_{imm[4:0]} = %b_%b_%b_%b_%b\n",0,
                         7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 0x12U)),5,(0x1fU 
                                                   & (vlSelfRef.extender_tb__DOT__instr 
                                                      >> 0xdU)),
                         5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 8U)),3,(7U 
                                                & (vlSelfRef.extender_tb__DOT__instr 
                                                   >> 5U)),
                         5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
        } else {
            VL_WRITEF_NX("        instr={imm[11:0]}_{other bits} = %b_%b\n",0,
                         12,(0xfffU & (vlSelfRef.extender_tb__DOT__instr 
                                       >> 0xdU)),13,
                         (0x1fffU & vlSelfRef.extender_tb__DOT__instr));
        }
        VL_WRITEF_NX("        Expected: immext=%b\n        Actual:   immext=%b\n        immsrc=%b\n",0,
                     32,__Vtask_extender_tb__DOT__run_test__2__exp_immext,
                     32,vlSelfRef.extender_tb__DOT__immext,
                     3,(IData)(vlSelfRef.extender_tb__DOT__immsrc));
        vlSelfRef.extender_tb__DOT__fail_count = ((IData)(1U) 
                                                  + vlSelfRef.extender_tb__DOT__fail_count);
    }
    vlSelfRef.extender_tb__DOT__instr = 0x1000000U;
    vlSelfRef.extender_tb__DOT__immsrc = 0U;
    __Vtask_extender_tb__DOT__run_test__3__test_name = 
        std::string{"I-type max negative"};
    __Vtask_extender_tb__DOT__run_test__3__exp_immext = 0xfffff800U;
    __Vtask_extender_tb__DOT__run_test__3__in_immsrc 
        = vlSelfRef.extender_tb__DOT__immsrc;
    __Vtask_extender_tb__DOT__run_test__3__in_instr 
        = vlSelfRef.extender_tb__DOT__instr;
    vlSelfRef.extender_tb__DOT__test_num = ((IData)(1U) 
                                            + vlSelfRef.extender_tb__DOT__test_num);
    vlSelfRef.extender_tb__DOT__instr = __Vtask_extender_tb__DOT__run_test__3__in_instr;
    vlSelfRef.extender_tb__DOT__immsrc = __Vtask_extender_tb__DOT__run_test__3__in_immsrc;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/extender_tb.sv", 
                                         34);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.extender_tb__DOT__immext == __Vtask_extender_tb__DOT__run_test__3__exp_immext)) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n",0,
                     32,vlSelfRef.extender_tb__DOT__test_num,
                     -1,&(__Vtask_extender_tb__DOT__run_test__3__test_name));
        if ((4U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else {
                VL_WRITEF_NX("        instr={imm[31:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr={imm[20|10:1|11|19:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            } else {
                VL_WRITEF_NX("        instr={imm[12|10:5]}_{rs2}_{rs1}_{f3}_{imm[4:1|11]} = %b_%b_%b_%b_%b\n",0,
                             7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0x12U)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0xdU)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 8U)),3,
                             (7U & (vlSelfRef.extender_tb__DOT__instr 
                                    >> 5U)),5,(0x1fU 
                                               & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            VL_WRITEF_NX("        instr={imm[11:5]}_{rs2}_{rs1}_{f3}_{imm[4:0]} = %b_%b_%b_%b_%b\n",0,
                         7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 0x12U)),5,(0x1fU 
                                                   & (vlSelfRef.extender_tb__DOT__instr 
                                                      >> 0xdU)),
                         5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 8U)),3,(7U 
                                                & (vlSelfRef.extender_tb__DOT__instr 
                                                   >> 5U)),
                         5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
        } else {
            VL_WRITEF_NX("        instr={imm[11:0]}_{other bits} = %b_%b\n",0,
                         12,(0xfffU & (vlSelfRef.extender_tb__DOT__instr 
                                       >> 0xdU)),13,
                         (0x1fffU & vlSelfRef.extender_tb__DOT__instr));
        }
        VL_WRITEF_NX("        immsrc=%b\n        immext=%b\n",0,
                     3,vlSelfRef.extender_tb__DOT__immsrc,
                     32,vlSelfRef.extender_tb__DOT__immext);
        vlSelfRef.extender_tb__DOT__pass_count = ((IData)(1U) 
                                                  + vlSelfRef.extender_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n",0,
                     32,vlSelfRef.extender_tb__DOT__test_num,
                     -1,&(__Vtask_extender_tb__DOT__run_test__3__test_name));
        if ((4U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else {
                VL_WRITEF_NX("        instr={imm[31:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr={imm[20|10:1|11|19:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            } else {
                VL_WRITEF_NX("        instr={imm[12|10:5]}_{rs2}_{rs1}_{f3}_{imm[4:1|11]} = %b_%b_%b_%b_%b\n",0,
                             7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0x12U)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0xdU)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 8U)),3,
                             (7U & (vlSelfRef.extender_tb__DOT__instr 
                                    >> 5U)),5,(0x1fU 
                                               & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            VL_WRITEF_NX("        instr={imm[11:5]}_{rs2}_{rs1}_{f3}_{imm[4:0]} = %b_%b_%b_%b_%b\n",0,
                         7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 0x12U)),5,(0x1fU 
                                                   & (vlSelfRef.extender_tb__DOT__instr 
                                                      >> 0xdU)),
                         5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 8U)),3,(7U 
                                                & (vlSelfRef.extender_tb__DOT__instr 
                                                   >> 5U)),
                         5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
        } else {
            VL_WRITEF_NX("        instr={imm[11:0]}_{other bits} = %b_%b\n",0,
                         12,(0xfffU & (vlSelfRef.extender_tb__DOT__instr 
                                       >> 0xdU)),13,
                         (0x1fffU & vlSelfRef.extender_tb__DOT__instr));
        }
        VL_WRITEF_NX("        Expected: immext=%b\n        Actual:   immext=%b\n        immsrc=%b\n",0,
                     32,__Vtask_extender_tb__DOT__run_test__3__exp_immext,
                     32,vlSelfRef.extender_tb__DOT__immext,
                     3,(IData)(vlSelfRef.extender_tb__DOT__immsrc));
        vlSelfRef.extender_tb__DOT__fail_count = ((IData)(1U) 
                                                  + vlSelfRef.extender_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n----------- S-type Tests -----------\n",0);
    vlSelfRef.extender_tb__DOT__instr = 4U;
    vlSelfRef.extender_tb__DOT__immsrc = 1U;
    __Vtask_extender_tb__DOT__run_test__4__test_name = 
        std::string{"S-type positive small"};
    __Vtask_extender_tb__DOT__run_test__4__exp_immext = 4U;
    __Vtask_extender_tb__DOT__run_test__4__in_immsrc 
        = vlSelfRef.extender_tb__DOT__immsrc;
    __Vtask_extender_tb__DOT__run_test__4__in_instr 
        = vlSelfRef.extender_tb__DOT__instr;
    vlSelfRef.extender_tb__DOT__test_num = ((IData)(1U) 
                                            + vlSelfRef.extender_tb__DOT__test_num);
    vlSelfRef.extender_tb__DOT__instr = __Vtask_extender_tb__DOT__run_test__4__in_instr;
    vlSelfRef.extender_tb__DOT__immsrc = __Vtask_extender_tb__DOT__run_test__4__in_immsrc;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/extender_tb.sv", 
                                         34);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.extender_tb__DOT__immext == __Vtask_extender_tb__DOT__run_test__4__exp_immext)) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n",0,
                     32,vlSelfRef.extender_tb__DOT__test_num,
                     -1,&(__Vtask_extender_tb__DOT__run_test__4__test_name));
        if ((4U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else {
                VL_WRITEF_NX("        instr={imm[31:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr={imm[20|10:1|11|19:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            } else {
                VL_WRITEF_NX("        instr={imm[12|10:5]}_{rs2}_{rs1}_{f3}_{imm[4:1|11]} = %b_%b_%b_%b_%b\n",0,
                             7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0x12U)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0xdU)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 8U)),3,
                             (7U & (vlSelfRef.extender_tb__DOT__instr 
                                    >> 5U)),5,(0x1fU 
                                               & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            VL_WRITEF_NX("        instr={imm[11:5]}_{rs2}_{rs1}_{f3}_{imm[4:0]} = %b_%b_%b_%b_%b\n",0,
                         7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 0x12U)),5,(0x1fU 
                                                   & (vlSelfRef.extender_tb__DOT__instr 
                                                      >> 0xdU)),
                         5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 8U)),3,(7U 
                                                & (vlSelfRef.extender_tb__DOT__instr 
                                                   >> 5U)),
                         5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
        } else {
            VL_WRITEF_NX("        instr={imm[11:0]}_{other bits} = %b_%b\n",0,
                         12,(0xfffU & (vlSelfRef.extender_tb__DOT__instr 
                                       >> 0xdU)),13,
                         (0x1fffU & vlSelfRef.extender_tb__DOT__instr));
        }
        VL_WRITEF_NX("        immsrc=%b\n        immext=%b\n",0,
                     3,vlSelfRef.extender_tb__DOT__immsrc,
                     32,vlSelfRef.extender_tb__DOT__immext);
        vlSelfRef.extender_tb__DOT__pass_count = ((IData)(1U) 
                                                  + vlSelfRef.extender_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n",0,
                     32,vlSelfRef.extender_tb__DOT__test_num,
                     -1,&(__Vtask_extender_tb__DOT__run_test__4__test_name));
        if ((4U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else {
                VL_WRITEF_NX("        instr={imm[31:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr={imm[20|10:1|11|19:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            } else {
                VL_WRITEF_NX("        instr={imm[12|10:5]}_{rs2}_{rs1}_{f3}_{imm[4:1|11]} = %b_%b_%b_%b_%b\n",0,
                             7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0x12U)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0xdU)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 8U)),3,
                             (7U & (vlSelfRef.extender_tb__DOT__instr 
                                    >> 5U)),5,(0x1fU 
                                               & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            VL_WRITEF_NX("        instr={imm[11:5]}_{rs2}_{rs1}_{f3}_{imm[4:0]} = %b_%b_%b_%b_%b\n",0,
                         7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 0x12U)),5,(0x1fU 
                                                   & (vlSelfRef.extender_tb__DOT__instr 
                                                      >> 0xdU)),
                         5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 8U)),3,(7U 
                                                & (vlSelfRef.extender_tb__DOT__instr 
                                                   >> 5U)),
                         5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
        } else {
            VL_WRITEF_NX("        instr={imm[11:0]}_{other bits} = %b_%b\n",0,
                         12,(0xfffU & (vlSelfRef.extender_tb__DOT__instr 
                                       >> 0xdU)),13,
                         (0x1fffU & vlSelfRef.extender_tb__DOT__instr));
        }
        VL_WRITEF_NX("        Expected: immext=%b\n        Actual:   immext=%b\n        immsrc=%b\n",0,
                     32,__Vtask_extender_tb__DOT__run_test__4__exp_immext,
                     32,vlSelfRef.extender_tb__DOT__immext,
                     3,(IData)(vlSelfRef.extender_tb__DOT__immsrc));
        vlSelfRef.extender_tb__DOT__fail_count = ((IData)(1U) 
                                                  + vlSelfRef.extender_tb__DOT__fail_count);
    }
    vlSelfRef.extender_tb__DOT__instr = 0x1fc0004U;
    vlSelfRef.extender_tb__DOT__immsrc = 1U;
    __Vtask_extender_tb__DOT__run_test__5__test_name = 
        std::string{"S-type negative small"};
    __Vtask_extender_tb__DOT__run_test__5__exp_immext = 0xfffffffcU;
    __Vtask_extender_tb__DOT__run_test__5__in_immsrc 
        = vlSelfRef.extender_tb__DOT__immsrc;
    __Vtask_extender_tb__DOT__run_test__5__in_instr 
        = vlSelfRef.extender_tb__DOT__instr;
    vlSelfRef.extender_tb__DOT__test_num = ((IData)(1U) 
                                            + vlSelfRef.extender_tb__DOT__test_num);
    vlSelfRef.extender_tb__DOT__instr = __Vtask_extender_tb__DOT__run_test__5__in_instr;
    vlSelfRef.extender_tb__DOT__immsrc = __Vtask_extender_tb__DOT__run_test__5__in_immsrc;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/extender_tb.sv", 
                                         34);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.extender_tb__DOT__immext == __Vtask_extender_tb__DOT__run_test__5__exp_immext)) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n",0,
                     32,vlSelfRef.extender_tb__DOT__test_num,
                     -1,&(__Vtask_extender_tb__DOT__run_test__5__test_name));
        if ((4U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else {
                VL_WRITEF_NX("        instr={imm[31:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr={imm[20|10:1|11|19:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            } else {
                VL_WRITEF_NX("        instr={imm[12|10:5]}_{rs2}_{rs1}_{f3}_{imm[4:1|11]} = %b_%b_%b_%b_%b\n",0,
                             7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0x12U)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0xdU)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 8U)),3,
                             (7U & (vlSelfRef.extender_tb__DOT__instr 
                                    >> 5U)),5,(0x1fU 
                                               & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            VL_WRITEF_NX("        instr={imm[11:5]}_{rs2}_{rs1}_{f3}_{imm[4:0]} = %b_%b_%b_%b_%b\n",0,
                         7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 0x12U)),5,(0x1fU 
                                                   & (vlSelfRef.extender_tb__DOT__instr 
                                                      >> 0xdU)),
                         5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 8U)),3,(7U 
                                                & (vlSelfRef.extender_tb__DOT__instr 
                                                   >> 5U)),
                         5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
        } else {
            VL_WRITEF_NX("        instr={imm[11:0]}_{other bits} = %b_%b\n",0,
                         12,(0xfffU & (vlSelfRef.extender_tb__DOT__instr 
                                       >> 0xdU)),13,
                         (0x1fffU & vlSelfRef.extender_tb__DOT__instr));
        }
        VL_WRITEF_NX("        immsrc=%b\n        immext=%b\n",0,
                     3,vlSelfRef.extender_tb__DOT__immsrc,
                     32,vlSelfRef.extender_tb__DOT__immext);
        vlSelfRef.extender_tb__DOT__pass_count = ((IData)(1U) 
                                                  + vlSelfRef.extender_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n",0,
                     32,vlSelfRef.extender_tb__DOT__test_num,
                     -1,&(__Vtask_extender_tb__DOT__run_test__5__test_name));
        if ((4U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else {
                VL_WRITEF_NX("        instr={imm[31:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr={imm[20|10:1|11|19:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            } else {
                VL_WRITEF_NX("        instr={imm[12|10:5]}_{rs2}_{rs1}_{f3}_{imm[4:1|11]} = %b_%b_%b_%b_%b\n",0,
                             7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0x12U)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0xdU)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 8U)),3,
                             (7U & (vlSelfRef.extender_tb__DOT__instr 
                                    >> 5U)),5,(0x1fU 
                                               & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            VL_WRITEF_NX("        instr={imm[11:5]}_{rs2}_{rs1}_{f3}_{imm[4:0]} = %b_%b_%b_%b_%b\n",0,
                         7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 0x12U)),5,(0x1fU 
                                                   & (vlSelfRef.extender_tb__DOT__instr 
                                                      >> 0xdU)),
                         5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 8U)),3,(7U 
                                                & (vlSelfRef.extender_tb__DOT__instr 
                                                   >> 5U)),
                         5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
        } else {
            VL_WRITEF_NX("        instr={imm[11:0]}_{other bits} = %b_%b\n",0,
                         12,(0xfffU & (vlSelfRef.extender_tb__DOT__instr 
                                       >> 0xdU)),13,
                         (0x1fffU & vlSelfRef.extender_tb__DOT__instr));
        }
        VL_WRITEF_NX("        Expected: immext=%b\n        Actual:   immext=%b\n        immsrc=%b\n",0,
                     32,__Vtask_extender_tb__DOT__run_test__5__exp_immext,
                     32,vlSelfRef.extender_tb__DOT__immext,
                     3,(IData)(vlSelfRef.extender_tb__DOT__immsrc));
        vlSelfRef.extender_tb__DOT__fail_count = ((IData)(1U) 
                                                  + vlSelfRef.extender_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n----------- B-type Tests -----------\n",0);
    vlSelfRef.extender_tb__DOT__instr = 4U;
    vlSelfRef.extender_tb__DOT__immsrc = 2U;
    __Vtask_extender_tb__DOT__run_test__6__test_name = 
        std::string{"B-type positive small"};
    __Vtask_extender_tb__DOT__run_test__6__exp_immext = 4U;
    __Vtask_extender_tb__DOT__run_test__6__in_immsrc 
        = vlSelfRef.extender_tb__DOT__immsrc;
    __Vtask_extender_tb__DOT__run_test__6__in_instr 
        = vlSelfRef.extender_tb__DOT__instr;
    vlSelfRef.extender_tb__DOT__test_num = ((IData)(1U) 
                                            + vlSelfRef.extender_tb__DOT__test_num);
    vlSelfRef.extender_tb__DOT__instr = __Vtask_extender_tb__DOT__run_test__6__in_instr;
    vlSelfRef.extender_tb__DOT__immsrc = __Vtask_extender_tb__DOT__run_test__6__in_immsrc;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/extender_tb.sv", 
                                         34);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.extender_tb__DOT__immext == __Vtask_extender_tb__DOT__run_test__6__exp_immext)) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n",0,
                     32,vlSelfRef.extender_tb__DOT__test_num,
                     -1,&(__Vtask_extender_tb__DOT__run_test__6__test_name));
        if ((4U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else {
                VL_WRITEF_NX("        instr={imm[31:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr={imm[20|10:1|11|19:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            } else {
                VL_WRITEF_NX("        instr={imm[12|10:5]}_{rs2}_{rs1}_{f3}_{imm[4:1|11]} = %b_%b_%b_%b_%b\n",0,
                             7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0x12U)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0xdU)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 8U)),3,
                             (7U & (vlSelfRef.extender_tb__DOT__instr 
                                    >> 5U)),5,(0x1fU 
                                               & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            VL_WRITEF_NX("        instr={imm[11:5]}_{rs2}_{rs1}_{f3}_{imm[4:0]} = %b_%b_%b_%b_%b\n",0,
                         7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 0x12U)),5,(0x1fU 
                                                   & (vlSelfRef.extender_tb__DOT__instr 
                                                      >> 0xdU)),
                         5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 8U)),3,(7U 
                                                & (vlSelfRef.extender_tb__DOT__instr 
                                                   >> 5U)),
                         5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
        } else {
            VL_WRITEF_NX("        instr={imm[11:0]}_{other bits} = %b_%b\n",0,
                         12,(0xfffU & (vlSelfRef.extender_tb__DOT__instr 
                                       >> 0xdU)),13,
                         (0x1fffU & vlSelfRef.extender_tb__DOT__instr));
        }
        VL_WRITEF_NX("        immsrc=%b\n        immext=%b\n",0,
                     3,vlSelfRef.extender_tb__DOT__immsrc,
                     32,vlSelfRef.extender_tb__DOT__immext);
        vlSelfRef.extender_tb__DOT__pass_count = ((IData)(1U) 
                                                  + vlSelfRef.extender_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n",0,
                     32,vlSelfRef.extender_tb__DOT__test_num,
                     -1,&(__Vtask_extender_tb__DOT__run_test__6__test_name));
        if ((4U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else {
                VL_WRITEF_NX("        instr={imm[31:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr={imm[20|10:1|11|19:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            } else {
                VL_WRITEF_NX("        instr={imm[12|10:5]}_{rs2}_{rs1}_{f3}_{imm[4:1|11]} = %b_%b_%b_%b_%b\n",0,
                             7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0x12U)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0xdU)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 8U)),3,
                             (7U & (vlSelfRef.extender_tb__DOT__instr 
                                    >> 5U)),5,(0x1fU 
                                               & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            VL_WRITEF_NX("        instr={imm[11:5]}_{rs2}_{rs1}_{f3}_{imm[4:0]} = %b_%b_%b_%b_%b\n",0,
                         7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 0x12U)),5,(0x1fU 
                                                   & (vlSelfRef.extender_tb__DOT__instr 
                                                      >> 0xdU)),
                         5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 8U)),3,(7U 
                                                & (vlSelfRef.extender_tb__DOT__instr 
                                                   >> 5U)),
                         5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
        } else {
            VL_WRITEF_NX("        instr={imm[11:0]}_{other bits} = %b_%b\n",0,
                         12,(0xfffU & (vlSelfRef.extender_tb__DOT__instr 
                                       >> 0xdU)),13,
                         (0x1fffU & vlSelfRef.extender_tb__DOT__instr));
        }
        VL_WRITEF_NX("        Expected: immext=%b\n        Actual:   immext=%b\n        immsrc=%b\n",0,
                     32,__Vtask_extender_tb__DOT__run_test__6__exp_immext,
                     32,vlSelfRef.extender_tb__DOT__immext,
                     3,(IData)(vlSelfRef.extender_tb__DOT__immsrc));
        vlSelfRef.extender_tb__DOT__fail_count = ((IData)(1U) 
                                                  + vlSelfRef.extender_tb__DOT__fail_count);
    }
    vlSelfRef.extender_tb__DOT__instr = 0x1fc0004U;
    vlSelfRef.extender_tb__DOT__immsrc = 2U;
    __Vtask_extender_tb__DOT__run_test__7__test_name = 
        std::string{"B-type negative small"};
    __Vtask_extender_tb__DOT__run_test__7__exp_immext = 0xfffffffcU;
    __Vtask_extender_tb__DOT__run_test__7__in_immsrc 
        = vlSelfRef.extender_tb__DOT__immsrc;
    __Vtask_extender_tb__DOT__run_test__7__in_instr 
        = vlSelfRef.extender_tb__DOT__instr;
    vlSelfRef.extender_tb__DOT__test_num = ((IData)(1U) 
                                            + vlSelfRef.extender_tb__DOT__test_num);
    vlSelfRef.extender_tb__DOT__instr = __Vtask_extender_tb__DOT__run_test__7__in_instr;
    vlSelfRef.extender_tb__DOT__immsrc = __Vtask_extender_tb__DOT__run_test__7__in_immsrc;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/extender_tb.sv", 
                                         34);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.extender_tb__DOT__immext == __Vtask_extender_tb__DOT__run_test__7__exp_immext)) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n",0,
                     32,vlSelfRef.extender_tb__DOT__test_num,
                     -1,&(__Vtask_extender_tb__DOT__run_test__7__test_name));
        if ((4U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else {
                VL_WRITEF_NX("        instr={imm[31:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr={imm[20|10:1|11|19:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            } else {
                VL_WRITEF_NX("        instr={imm[12|10:5]}_{rs2}_{rs1}_{f3}_{imm[4:1|11]} = %b_%b_%b_%b_%b\n",0,
                             7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0x12U)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0xdU)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 8U)),3,
                             (7U & (vlSelfRef.extender_tb__DOT__instr 
                                    >> 5U)),5,(0x1fU 
                                               & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            VL_WRITEF_NX("        instr={imm[11:5]}_{rs2}_{rs1}_{f3}_{imm[4:0]} = %b_%b_%b_%b_%b\n",0,
                         7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 0x12U)),5,(0x1fU 
                                                   & (vlSelfRef.extender_tb__DOT__instr 
                                                      >> 0xdU)),
                         5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 8U)),3,(7U 
                                                & (vlSelfRef.extender_tb__DOT__instr 
                                                   >> 5U)),
                         5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
        } else {
            VL_WRITEF_NX("        instr={imm[11:0]}_{other bits} = %b_%b\n",0,
                         12,(0xfffU & (vlSelfRef.extender_tb__DOT__instr 
                                       >> 0xdU)),13,
                         (0x1fffU & vlSelfRef.extender_tb__DOT__instr));
        }
        VL_WRITEF_NX("        immsrc=%b\n        immext=%b\n",0,
                     3,vlSelfRef.extender_tb__DOT__immsrc,
                     32,vlSelfRef.extender_tb__DOT__immext);
        vlSelfRef.extender_tb__DOT__pass_count = ((IData)(1U) 
                                                  + vlSelfRef.extender_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n",0,
                     32,vlSelfRef.extender_tb__DOT__test_num,
                     -1,&(__Vtask_extender_tb__DOT__run_test__7__test_name));
        if ((4U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else {
                VL_WRITEF_NX("        instr={imm[31:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr={imm[20|10:1|11|19:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            } else {
                VL_WRITEF_NX("        instr={imm[12|10:5]}_{rs2}_{rs1}_{f3}_{imm[4:1|11]} = %b_%b_%b_%b_%b\n",0,
                             7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0x12U)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0xdU)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 8U)),3,
                             (7U & (vlSelfRef.extender_tb__DOT__instr 
                                    >> 5U)),5,(0x1fU 
                                               & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            VL_WRITEF_NX("        instr={imm[11:5]}_{rs2}_{rs1}_{f3}_{imm[4:0]} = %b_%b_%b_%b_%b\n",0,
                         7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 0x12U)),5,(0x1fU 
                                                   & (vlSelfRef.extender_tb__DOT__instr 
                                                      >> 0xdU)),
                         5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 8U)),3,(7U 
                                                & (vlSelfRef.extender_tb__DOT__instr 
                                                   >> 5U)),
                         5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
        } else {
            VL_WRITEF_NX("        instr={imm[11:0]}_{other bits} = %b_%b\n",0,
                         12,(0xfffU & (vlSelfRef.extender_tb__DOT__instr 
                                       >> 0xdU)),13,
                         (0x1fffU & vlSelfRef.extender_tb__DOT__instr));
        }
        VL_WRITEF_NX("        Expected: immext=%b\n        Actual:   immext=%b\n        immsrc=%b\n",0,
                     32,__Vtask_extender_tb__DOT__run_test__7__exp_immext,
                     32,vlSelfRef.extender_tb__DOT__immext,
                     3,(IData)(vlSelfRef.extender_tb__DOT__immsrc));
        vlSelfRef.extender_tb__DOT__fail_count = ((IData)(1U) 
                                                  + vlSelfRef.extender_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n----------- J-type Tests -----------\n",0);
    vlSelfRef.extender_tb__DOT__instr = 0x100U;
    vlSelfRef.extender_tb__DOT__immsrc = 3U;
    __Vtask_extender_tb__DOT__run_test__8__test_name = 
        std::string{"J-type positive small"};
    __Vtask_extender_tb__DOT__run_test__8__exp_immext = 8U;
    __Vtask_extender_tb__DOT__run_test__8__in_immsrc 
        = vlSelfRef.extender_tb__DOT__immsrc;
    __Vtask_extender_tb__DOT__run_test__8__in_instr 
        = vlSelfRef.extender_tb__DOT__instr;
    vlSelfRef.extender_tb__DOT__test_num = ((IData)(1U) 
                                            + vlSelfRef.extender_tb__DOT__test_num);
    vlSelfRef.extender_tb__DOT__instr = __Vtask_extender_tb__DOT__run_test__8__in_instr;
    vlSelfRef.extender_tb__DOT__immsrc = __Vtask_extender_tb__DOT__run_test__8__in_immsrc;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/extender_tb.sv", 
                                         34);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.extender_tb__DOT__immext == __Vtask_extender_tb__DOT__run_test__8__exp_immext)) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n",0,
                     32,vlSelfRef.extender_tb__DOT__test_num,
                     -1,&(__Vtask_extender_tb__DOT__run_test__8__test_name));
        if ((4U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else {
                VL_WRITEF_NX("        instr={imm[31:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr={imm[20|10:1|11|19:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            } else {
                VL_WRITEF_NX("        instr={imm[12|10:5]}_{rs2}_{rs1}_{f3}_{imm[4:1|11]} = %b_%b_%b_%b_%b\n",0,
                             7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0x12U)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0xdU)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 8U)),3,
                             (7U & (vlSelfRef.extender_tb__DOT__instr 
                                    >> 5U)),5,(0x1fU 
                                               & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            VL_WRITEF_NX("        instr={imm[11:5]}_{rs2}_{rs1}_{f3}_{imm[4:0]} = %b_%b_%b_%b_%b\n",0,
                         7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 0x12U)),5,(0x1fU 
                                                   & (vlSelfRef.extender_tb__DOT__instr 
                                                      >> 0xdU)),
                         5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 8U)),3,(7U 
                                                & (vlSelfRef.extender_tb__DOT__instr 
                                                   >> 5U)),
                         5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
        } else {
            VL_WRITEF_NX("        instr={imm[11:0]}_{other bits} = %b_%b\n",0,
                         12,(0xfffU & (vlSelfRef.extender_tb__DOT__instr 
                                       >> 0xdU)),13,
                         (0x1fffU & vlSelfRef.extender_tb__DOT__instr));
        }
        VL_WRITEF_NX("        immsrc=%b\n        immext=%b\n",0,
                     3,vlSelfRef.extender_tb__DOT__immsrc,
                     32,vlSelfRef.extender_tb__DOT__immext);
        vlSelfRef.extender_tb__DOT__pass_count = ((IData)(1U) 
                                                  + vlSelfRef.extender_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n",0,
                     32,vlSelfRef.extender_tb__DOT__test_num,
                     -1,&(__Vtask_extender_tb__DOT__run_test__8__test_name));
        if ((4U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else {
                VL_WRITEF_NX("        instr={imm[31:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr={imm[20|10:1|11|19:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            } else {
                VL_WRITEF_NX("        instr={imm[12|10:5]}_{rs2}_{rs1}_{f3}_{imm[4:1|11]} = %b_%b_%b_%b_%b\n",0,
                             7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0x12U)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0xdU)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 8U)),3,
                             (7U & (vlSelfRef.extender_tb__DOT__instr 
                                    >> 5U)),5,(0x1fU 
                                               & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            VL_WRITEF_NX("        instr={imm[11:5]}_{rs2}_{rs1}_{f3}_{imm[4:0]} = %b_%b_%b_%b_%b\n",0,
                         7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 0x12U)),5,(0x1fU 
                                                   & (vlSelfRef.extender_tb__DOT__instr 
                                                      >> 0xdU)),
                         5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 8U)),3,(7U 
                                                & (vlSelfRef.extender_tb__DOT__instr 
                                                   >> 5U)),
                         5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
        } else {
            VL_WRITEF_NX("        instr={imm[11:0]}_{other bits} = %b_%b\n",0,
                         12,(0xfffU & (vlSelfRef.extender_tb__DOT__instr 
                                       >> 0xdU)),13,
                         (0x1fffU & vlSelfRef.extender_tb__DOT__instr));
        }
        VL_WRITEF_NX("        Expected: immext=%b\n        Actual:   immext=%b\n        immsrc=%b\n",0,
                     32,__Vtask_extender_tb__DOT__run_test__8__exp_immext,
                     32,vlSelfRef.extender_tb__DOT__immext,
                     3,(IData)(vlSelfRef.extender_tb__DOT__immsrc));
        vlSelfRef.extender_tb__DOT__fail_count = ((IData)(1U) 
                                                  + vlSelfRef.extender_tb__DOT__fail_count);
    }
    vlSelfRef.extender_tb__DOT__instr = 0x1000100U;
    vlSelfRef.extender_tb__DOT__immsrc = 3U;
    __Vtask_extender_tb__DOT__run_test__9__test_name = 
        std::string{"J-type negative small"};
    __Vtask_extender_tb__DOT__run_test__9__exp_immext = 0xfffffff8U;
    __Vtask_extender_tb__DOT__run_test__9__in_immsrc 
        = vlSelfRef.extender_tb__DOT__immsrc;
    __Vtask_extender_tb__DOT__run_test__9__in_instr 
        = vlSelfRef.extender_tb__DOT__instr;
    vlSelfRef.extender_tb__DOT__test_num = ((IData)(1U) 
                                            + vlSelfRef.extender_tb__DOT__test_num);
    vlSelfRef.extender_tb__DOT__instr = __Vtask_extender_tb__DOT__run_test__9__in_instr;
    vlSelfRef.extender_tb__DOT__immsrc = __Vtask_extender_tb__DOT__run_test__9__in_immsrc;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/extender_tb.sv", 
                                         34);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.extender_tb__DOT__immext == __Vtask_extender_tb__DOT__run_test__9__exp_immext)) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n",0,
                     32,vlSelfRef.extender_tb__DOT__test_num,
                     -1,&(__Vtask_extender_tb__DOT__run_test__9__test_name));
        if ((4U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else {
                VL_WRITEF_NX("        instr={imm[31:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr={imm[20|10:1|11|19:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            } else {
                VL_WRITEF_NX("        instr={imm[12|10:5]}_{rs2}_{rs1}_{f3}_{imm[4:1|11]} = %b_%b_%b_%b_%b\n",0,
                             7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0x12U)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0xdU)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 8U)),3,
                             (7U & (vlSelfRef.extender_tb__DOT__instr 
                                    >> 5U)),5,(0x1fU 
                                               & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            VL_WRITEF_NX("        instr={imm[11:5]}_{rs2}_{rs1}_{f3}_{imm[4:0]} = %b_%b_%b_%b_%b\n",0,
                         7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 0x12U)),5,(0x1fU 
                                                   & (vlSelfRef.extender_tb__DOT__instr 
                                                      >> 0xdU)),
                         5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 8U)),3,(7U 
                                                & (vlSelfRef.extender_tb__DOT__instr 
                                                   >> 5U)),
                         5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
        } else {
            VL_WRITEF_NX("        instr={imm[11:0]}_{other bits} = %b_%b\n",0,
                         12,(0xfffU & (vlSelfRef.extender_tb__DOT__instr 
                                       >> 0xdU)),13,
                         (0x1fffU & vlSelfRef.extender_tb__DOT__instr));
        }
        VL_WRITEF_NX("        immsrc=%b\n        immext=%b\n",0,
                     3,vlSelfRef.extender_tb__DOT__immsrc,
                     32,vlSelfRef.extender_tb__DOT__immext);
        vlSelfRef.extender_tb__DOT__pass_count = ((IData)(1U) 
                                                  + vlSelfRef.extender_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n",0,
                     32,vlSelfRef.extender_tb__DOT__test_num,
                     -1,&(__Vtask_extender_tb__DOT__run_test__9__test_name));
        if ((4U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else {
                VL_WRITEF_NX("        instr={imm[31:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr={imm[20|10:1|11|19:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            } else {
                VL_WRITEF_NX("        instr={imm[12|10:5]}_{rs2}_{rs1}_{f3}_{imm[4:1|11]} = %b_%b_%b_%b_%b\n",0,
                             7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0x12U)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0xdU)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 8U)),3,
                             (7U & (vlSelfRef.extender_tb__DOT__instr 
                                    >> 5U)),5,(0x1fU 
                                               & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            VL_WRITEF_NX("        instr={imm[11:5]}_{rs2}_{rs1}_{f3}_{imm[4:0]} = %b_%b_%b_%b_%b\n",0,
                         7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 0x12U)),5,(0x1fU 
                                                   & (vlSelfRef.extender_tb__DOT__instr 
                                                      >> 0xdU)),
                         5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 8U)),3,(7U 
                                                & (vlSelfRef.extender_tb__DOT__instr 
                                                   >> 5U)),
                         5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
        } else {
            VL_WRITEF_NX("        instr={imm[11:0]}_{other bits} = %b_%b\n",0,
                         12,(0xfffU & (vlSelfRef.extender_tb__DOT__instr 
                                       >> 0xdU)),13,
                         (0x1fffU & vlSelfRef.extender_tb__DOT__instr));
        }
        VL_WRITEF_NX("        Expected: immext=%b\n        Actual:   immext=%b\n        immsrc=%b\n",0,
                     32,__Vtask_extender_tb__DOT__run_test__9__exp_immext,
                     32,vlSelfRef.extender_tb__DOT__immext,
                     3,(IData)(vlSelfRef.extender_tb__DOT__immsrc));
        vlSelfRef.extender_tb__DOT__fail_count = ((IData)(1U) 
                                                  + vlSelfRef.extender_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n----------- U-type Tests -----------\n",0);
    vlSelfRef.extender_tb__DOT__instr = 0x2000U;
    vlSelfRef.extender_tb__DOT__immsrc = 4U;
    __Vtask_extender_tb__DOT__run_test__10__test_name = 
        std::string{"U-type small positive"};
    __Vtask_extender_tb__DOT__run_test__10__exp_immext = 0x1000U;
    __Vtask_extender_tb__DOT__run_test__10__in_immsrc 
        = vlSelfRef.extender_tb__DOT__immsrc;
    __Vtask_extender_tb__DOT__run_test__10__in_instr 
        = vlSelfRef.extender_tb__DOT__instr;
    vlSelfRef.extender_tb__DOT__test_num = ((IData)(1U) 
                                            + vlSelfRef.extender_tb__DOT__test_num);
    vlSelfRef.extender_tb__DOT__instr = __Vtask_extender_tb__DOT__run_test__10__in_instr;
    vlSelfRef.extender_tb__DOT__immsrc = __Vtask_extender_tb__DOT__run_test__10__in_immsrc;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/extender_tb.sv", 
                                         34);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.extender_tb__DOT__immext == __Vtask_extender_tb__DOT__run_test__10__exp_immext)) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n",0,
                     32,vlSelfRef.extender_tb__DOT__test_num,
                     -1,&(__Vtask_extender_tb__DOT__run_test__10__test_name));
        if ((4U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else {
                VL_WRITEF_NX("        instr={imm[31:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr={imm[20|10:1|11|19:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            } else {
                VL_WRITEF_NX("        instr={imm[12|10:5]}_{rs2}_{rs1}_{f3}_{imm[4:1|11]} = %b_%b_%b_%b_%b\n",0,
                             7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0x12U)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0xdU)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 8U)),3,
                             (7U & (vlSelfRef.extender_tb__DOT__instr 
                                    >> 5U)),5,(0x1fU 
                                               & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            VL_WRITEF_NX("        instr={imm[11:5]}_{rs2}_{rs1}_{f3}_{imm[4:0]} = %b_%b_%b_%b_%b\n",0,
                         7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 0x12U)),5,(0x1fU 
                                                   & (vlSelfRef.extender_tb__DOT__instr 
                                                      >> 0xdU)),
                         5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 8U)),3,(7U 
                                                & (vlSelfRef.extender_tb__DOT__instr 
                                                   >> 5U)),
                         5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
        } else {
            VL_WRITEF_NX("        instr={imm[11:0]}_{other bits} = %b_%b\n",0,
                         12,(0xfffU & (vlSelfRef.extender_tb__DOT__instr 
                                       >> 0xdU)),13,
                         (0x1fffU & vlSelfRef.extender_tb__DOT__instr));
        }
        VL_WRITEF_NX("        immsrc=%b\n        immext=%b\n",0,
                     3,vlSelfRef.extender_tb__DOT__immsrc,
                     32,vlSelfRef.extender_tb__DOT__immext);
        vlSelfRef.extender_tb__DOT__pass_count = ((IData)(1U) 
                                                  + vlSelfRef.extender_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n",0,
                     32,vlSelfRef.extender_tb__DOT__test_num,
                     -1,&(__Vtask_extender_tb__DOT__run_test__10__test_name));
        if ((4U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else {
                VL_WRITEF_NX("        instr={imm[31:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr={imm[20|10:1|11|19:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            } else {
                VL_WRITEF_NX("        instr={imm[12|10:5]}_{rs2}_{rs1}_{f3}_{imm[4:1|11]} = %b_%b_%b_%b_%b\n",0,
                             7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0x12U)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0xdU)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 8U)),3,
                             (7U & (vlSelfRef.extender_tb__DOT__instr 
                                    >> 5U)),5,(0x1fU 
                                               & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            VL_WRITEF_NX("        instr={imm[11:5]}_{rs2}_{rs1}_{f3}_{imm[4:0]} = %b_%b_%b_%b_%b\n",0,
                         7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 0x12U)),5,(0x1fU 
                                                   & (vlSelfRef.extender_tb__DOT__instr 
                                                      >> 0xdU)),
                         5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 8U)),3,(7U 
                                                & (vlSelfRef.extender_tb__DOT__instr 
                                                   >> 5U)),
                         5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
        } else {
            VL_WRITEF_NX("        instr={imm[11:0]}_{other bits} = %b_%b\n",0,
                         12,(0xfffU & (vlSelfRef.extender_tb__DOT__instr 
                                       >> 0xdU)),13,
                         (0x1fffU & vlSelfRef.extender_tb__DOT__instr));
        }
        VL_WRITEF_NX("        Expected: immext=%b\n        Actual:   immext=%b\n        immsrc=%b\n",0,
                     32,__Vtask_extender_tb__DOT__run_test__10__exp_immext,
                     32,vlSelfRef.extender_tb__DOT__immext,
                     3,(IData)(vlSelfRef.extender_tb__DOT__immsrc));
        vlSelfRef.extender_tb__DOT__fail_count = ((IData)(1U) 
                                                  + vlSelfRef.extender_tb__DOT__fail_count);
    }
    vlSelfRef.extender_tb__DOT__instr = 0x1ffff00U;
    vlSelfRef.extender_tb__DOT__immsrc = 4U;
    __Vtask_extender_tb__DOT__run_test__11__test_name = 
        std::string{"U-type maximum"};
    __Vtask_extender_tb__DOT__run_test__11__exp_immext = 0xfffff000U;
    __Vtask_extender_tb__DOT__run_test__11__in_immsrc 
        = vlSelfRef.extender_tb__DOT__immsrc;
    __Vtask_extender_tb__DOT__run_test__11__in_instr 
        = vlSelfRef.extender_tb__DOT__instr;
    vlSelfRef.extender_tb__DOT__test_num = ((IData)(1U) 
                                            + vlSelfRef.extender_tb__DOT__test_num);
    vlSelfRef.extender_tb__DOT__instr = __Vtask_extender_tb__DOT__run_test__11__in_instr;
    vlSelfRef.extender_tb__DOT__immsrc = __Vtask_extender_tb__DOT__run_test__11__in_immsrc;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/extender_tb.sv", 
                                         34);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.extender_tb__DOT__immext == __Vtask_extender_tb__DOT__run_test__11__exp_immext)) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n",0,
                     32,vlSelfRef.extender_tb__DOT__test_num,
                     -1,&(__Vtask_extender_tb__DOT__run_test__11__test_name));
        if ((4U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else {
                VL_WRITEF_NX("        instr={imm[31:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr={imm[20|10:1|11|19:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            } else {
                VL_WRITEF_NX("        instr={imm[12|10:5]}_{rs2}_{rs1}_{f3}_{imm[4:1|11]} = %b_%b_%b_%b_%b\n",0,
                             7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0x12U)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0xdU)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 8U)),3,
                             (7U & (vlSelfRef.extender_tb__DOT__instr 
                                    >> 5U)),5,(0x1fU 
                                               & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            VL_WRITEF_NX("        instr={imm[11:5]}_{rs2}_{rs1}_{f3}_{imm[4:0]} = %b_%b_%b_%b_%b\n",0,
                         7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 0x12U)),5,(0x1fU 
                                                   & (vlSelfRef.extender_tb__DOT__instr 
                                                      >> 0xdU)),
                         5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 8U)),3,(7U 
                                                & (vlSelfRef.extender_tb__DOT__instr 
                                                   >> 5U)),
                         5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
        } else {
            VL_WRITEF_NX("        instr={imm[11:0]}_{other bits} = %b_%b\n",0,
                         12,(0xfffU & (vlSelfRef.extender_tb__DOT__instr 
                                       >> 0xdU)),13,
                         (0x1fffU & vlSelfRef.extender_tb__DOT__instr));
        }
        VL_WRITEF_NX("        immsrc=%b\n        immext=%b\n",0,
                     3,vlSelfRef.extender_tb__DOT__immsrc,
                     32,vlSelfRef.extender_tb__DOT__immext);
        vlSelfRef.extender_tb__DOT__pass_count = ((IData)(1U) 
                                                  + vlSelfRef.extender_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n",0,
                     32,vlSelfRef.extender_tb__DOT__test_num,
                     -1,&(__Vtask_extender_tb__DOT__run_test__11__test_name));
        if ((4U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else {
                VL_WRITEF_NX("        instr={imm[31:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr={imm[20|10:1|11|19:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            } else {
                VL_WRITEF_NX("        instr={imm[12|10:5]}_{rs2}_{rs1}_{f3}_{imm[4:1|11]} = %b_%b_%b_%b_%b\n",0,
                             7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0x12U)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0xdU)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 8U)),3,
                             (7U & (vlSelfRef.extender_tb__DOT__instr 
                                    >> 5U)),5,(0x1fU 
                                               & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            VL_WRITEF_NX("        instr={imm[11:5]}_{rs2}_{rs1}_{f3}_{imm[4:0]} = %b_%b_%b_%b_%b\n",0,
                         7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 0x12U)),5,(0x1fU 
                                                   & (vlSelfRef.extender_tb__DOT__instr 
                                                      >> 0xdU)),
                         5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 8U)),3,(7U 
                                                & (vlSelfRef.extender_tb__DOT__instr 
                                                   >> 5U)),
                         5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
        } else {
            VL_WRITEF_NX("        instr={imm[11:0]}_{other bits} = %b_%b\n",0,
                         12,(0xfffU & (vlSelfRef.extender_tb__DOT__instr 
                                       >> 0xdU)),13,
                         (0x1fffU & vlSelfRef.extender_tb__DOT__instr));
        }
        VL_WRITEF_NX("        Expected: immext=%b\n        Actual:   immext=%b\n        immsrc=%b\n",0,
                     32,__Vtask_extender_tb__DOT__run_test__11__exp_immext,
                     32,vlSelfRef.extender_tb__DOT__immext,
                     3,(IData)(vlSelfRef.extender_tb__DOT__immsrc));
        vlSelfRef.extender_tb__DOT__fail_count = ((IData)(1U) 
                                                  + vlSelfRef.extender_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n----------- Edge Cases -----------\n",0);
    vlSelfRef.extender_tb__DOT__instr = 0U;
    vlSelfRef.extender_tb__DOT__immsrc = 7U;
    __Vtask_extender_tb__DOT__run_test__12__test_name = 
        std::string{"Invalid immsrc"};
    __Vtask_extender_tb__DOT__run_test__12__exp_immext 
        = vlSelfRef.extender_tb__DOT____Vxrand_h8794da3b__0;
    __Vtask_extender_tb__DOT__run_test__12__in_immsrc 
        = vlSelfRef.extender_tb__DOT__immsrc;
    __Vtask_extender_tb__DOT__run_test__12__in_instr 
        = vlSelfRef.extender_tb__DOT__instr;
    vlSelfRef.extender_tb__DOT__test_num = ((IData)(1U) 
                                            + vlSelfRef.extender_tb__DOT__test_num);
    vlSelfRef.extender_tb__DOT__instr = __Vtask_extender_tb__DOT__run_test__12__in_instr;
    vlSelfRef.extender_tb__DOT__immsrc = __Vtask_extender_tb__DOT__run_test__12__in_immsrc;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/extender_tb.sv", 
                                         34);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.extender_tb__DOT__immext == __Vtask_extender_tb__DOT__run_test__12__exp_immext)) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n",0,
                     32,vlSelfRef.extender_tb__DOT__test_num,
                     -1,&(__Vtask_extender_tb__DOT__run_test__12__test_name));
        if ((4U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else {
                VL_WRITEF_NX("        instr={imm[31:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr={imm[20|10:1|11|19:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            } else {
                VL_WRITEF_NX("        instr={imm[12|10:5]}_{rs2}_{rs1}_{f3}_{imm[4:1|11]} = %b_%b_%b_%b_%b\n",0,
                             7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0x12U)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0xdU)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 8U)),3,
                             (7U & (vlSelfRef.extender_tb__DOT__instr 
                                    >> 5U)),5,(0x1fU 
                                               & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            VL_WRITEF_NX("        instr={imm[11:5]}_{rs2}_{rs1}_{f3}_{imm[4:0]} = %b_%b_%b_%b_%b\n",0,
                         7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 0x12U)),5,(0x1fU 
                                                   & (vlSelfRef.extender_tb__DOT__instr 
                                                      >> 0xdU)),
                         5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 8U)),3,(7U 
                                                & (vlSelfRef.extender_tb__DOT__instr 
                                                   >> 5U)),
                         5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
        } else {
            VL_WRITEF_NX("        instr={imm[11:0]}_{other bits} = %b_%b\n",0,
                         12,(0xfffU & (vlSelfRef.extender_tb__DOT__instr 
                                       >> 0xdU)),13,
                         (0x1fffU & vlSelfRef.extender_tb__DOT__instr));
        }
        VL_WRITEF_NX("        immsrc=%b\n        immext=%b\n",0,
                     3,vlSelfRef.extender_tb__DOT__immsrc,
                     32,vlSelfRef.extender_tb__DOT__immext);
        vlSelfRef.extender_tb__DOT__pass_count = ((IData)(1U) 
                                                  + vlSelfRef.extender_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n",0,
                     32,vlSelfRef.extender_tb__DOT__test_num,
                     -1,&(__Vtask_extender_tb__DOT__run_test__12__test_name));
        if ((4U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else {
                VL_WRITEF_NX("        instr={imm[31:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr={imm[20|10:1|11|19:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            } else {
                VL_WRITEF_NX("        instr={imm[12|10:5]}_{rs2}_{rs1}_{f3}_{imm[4:1|11]} = %b_%b_%b_%b_%b\n",0,
                             7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0x12U)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0xdU)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 8U)),3,
                             (7U & (vlSelfRef.extender_tb__DOT__instr 
                                    >> 5U)),5,(0x1fU 
                                               & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            VL_WRITEF_NX("        instr={imm[11:5]}_{rs2}_{rs1}_{f3}_{imm[4:0]} = %b_%b_%b_%b_%b\n",0,
                         7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 0x12U)),5,(0x1fU 
                                                   & (vlSelfRef.extender_tb__DOT__instr 
                                                      >> 0xdU)),
                         5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 8U)),3,(7U 
                                                & (vlSelfRef.extender_tb__DOT__instr 
                                                   >> 5U)),
                         5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
        } else {
            VL_WRITEF_NX("        instr={imm[11:0]}_{other bits} = %b_%b\n",0,
                         12,(0xfffU & (vlSelfRef.extender_tb__DOT__instr 
                                       >> 0xdU)),13,
                         (0x1fffU & vlSelfRef.extender_tb__DOT__instr));
        }
        VL_WRITEF_NX("        Expected: immext=%b\n        Actual:   immext=%b\n        immsrc=%b\n",0,
                     32,__Vtask_extender_tb__DOT__run_test__12__exp_immext,
                     32,vlSelfRef.extender_tb__DOT__immext,
                     3,(IData)(vlSelfRef.extender_tb__DOT__immsrc));
        vlSelfRef.extender_tb__DOT__fail_count = ((IData)(1U) 
                                                  + vlSelfRef.extender_tb__DOT__fail_count);
    }
    vlSelfRef.extender_tb__DOT__instr = 0xfff000U;
    vlSelfRef.extender_tb__DOT__immsrc = 0U;
    __Vtask_extender_tb__DOT__run_test__13__test_name = 
        std::string{"All ones valid format"};
    __Vtask_extender_tb__DOT__run_test__13__exp_immext = 0xffffffffU;
    __Vtask_extender_tb__DOT__run_test__13__in_immsrc 
        = vlSelfRef.extender_tb__DOT__immsrc;
    __Vtask_extender_tb__DOT__run_test__13__in_instr 
        = vlSelfRef.extender_tb__DOT__instr;
    vlSelfRef.extender_tb__DOT__test_num = ((IData)(1U) 
                                            + vlSelfRef.extender_tb__DOT__test_num);
    vlSelfRef.extender_tb__DOT__instr = __Vtask_extender_tb__DOT__run_test__13__in_instr;
    vlSelfRef.extender_tb__DOT__immsrc = __Vtask_extender_tb__DOT__run_test__13__in_immsrc;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../../01_bench/extender_tb.sv", 
                                         34);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.extender_tb__DOT__immext == __Vtask_extender_tb__DOT__run_test__13__exp_immext)) {
        VL_WRITEF_NX("%02d \342\234\205PASSED %@\n",0,
                     32,vlSelfRef.extender_tb__DOT__test_num,
                     -1,&(__Vtask_extender_tb__DOT__run_test__13__test_name));
        if ((4U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else {
                VL_WRITEF_NX("        instr={imm[31:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr={imm[20|10:1|11|19:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            } else {
                VL_WRITEF_NX("        instr={imm[12|10:5]}_{rs2}_{rs1}_{f3}_{imm[4:1|11]} = %b_%b_%b_%b_%b\n",0,
                             7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0x12U)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0xdU)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 8U)),3,
                             (7U & (vlSelfRef.extender_tb__DOT__instr 
                                    >> 5U)),5,(0x1fU 
                                               & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            VL_WRITEF_NX("        instr={imm[11:5]}_{rs2}_{rs1}_{f3}_{imm[4:0]} = %b_%b_%b_%b_%b\n",0,
                         7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 0x12U)),5,(0x1fU 
                                                   & (vlSelfRef.extender_tb__DOT__instr 
                                                      >> 0xdU)),
                         5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 8U)),3,(7U 
                                                & (vlSelfRef.extender_tb__DOT__instr 
                                                   >> 5U)),
                         5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
        } else {
            VL_WRITEF_NX("        instr={imm[11:0]}_{other bits} = %b_%b\n",0,
                         12,(0xfffU & (vlSelfRef.extender_tb__DOT__instr 
                                       >> 0xdU)),13,
                         (0x1fffU & vlSelfRef.extender_tb__DOT__instr));
        }
        VL_WRITEF_NX("        immsrc=%b\n        immext=%b\n",0,
                     3,vlSelfRef.extender_tb__DOT__immsrc,
                     32,vlSelfRef.extender_tb__DOT__immext);
        vlSelfRef.extender_tb__DOT__pass_count = ((IData)(1U) 
                                                  + vlSelfRef.extender_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("%02d \342\235\214FAILED %@\n",0,
                     32,vlSelfRef.extender_tb__DOT__test_num,
                     -1,&(__Vtask_extender_tb__DOT__run_test__13__test_name));
        if ((4U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr=%b (invalid format)\n",0,
                             25,vlSelfRef.extender_tb__DOT__instr);
            } else {
                VL_WRITEF_NX("        instr={imm[31:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((2U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
                VL_WRITEF_NX("        instr={imm[20|10:1|11|19:12]}_{rd} = %b_%b\n",0,
                             20,(0xfffffU & (vlSelfRef.extender_tb__DOT__instr 
                                             >> 5U)),
                             5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
            } else {
                VL_WRITEF_NX("        instr={imm[12|10:5]}_{rs2}_{rs1}_{f3}_{imm[4:1|11]} = %b_%b_%b_%b_%b\n",0,
                             7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0x12U)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 0xdU)),
                             5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                         >> 8U)),3,
                             (7U & (vlSelfRef.extender_tb__DOT__instr 
                                    >> 5U)),5,(0x1fU 
                                               & vlSelfRef.extender_tb__DOT__instr));
            }
        } else if ((1U & (IData)(vlSelfRef.extender_tb__DOT__immsrc))) {
            VL_WRITEF_NX("        instr={imm[11:5]}_{rs2}_{rs1}_{f3}_{imm[4:0]} = %b_%b_%b_%b_%b\n",0,
                         7,(0x7fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 0x12U)),5,(0x1fU 
                                                   & (vlSelfRef.extender_tb__DOT__instr 
                                                      >> 0xdU)),
                         5,(0x1fU & (vlSelfRef.extender_tb__DOT__instr 
                                     >> 8U)),3,(7U 
                                                & (vlSelfRef.extender_tb__DOT__instr 
                                                   >> 5U)),
                         5,(0x1fU & vlSelfRef.extender_tb__DOT__instr));
        } else {
            VL_WRITEF_NX("        instr={imm[11:0]}_{other bits} = %b_%b\n",0,
                         12,(0xfffU & (vlSelfRef.extender_tb__DOT__instr 
                                       >> 0xdU)),13,
                         (0x1fffU & vlSelfRef.extender_tb__DOT__instr));
        }
        VL_WRITEF_NX("        Expected: immext=%b\n        Actual:   immext=%b\n        immsrc=%b\n",0,
                     32,__Vtask_extender_tb__DOT__run_test__13__exp_immext,
                     32,vlSelfRef.extender_tb__DOT__immext,
                     3,(IData)(vlSelfRef.extender_tb__DOT__immsrc));
        vlSelfRef.extender_tb__DOT__fail_count = ((IData)(1U) 
                                                  + vlSelfRef.extender_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n===== Test Statistics =====\nTotal Tests:  %0d\n\342\234\205 Tests Passed: %0d (%0.1f%%)\n\342\235\214 Tests Failed: %0d (%0.1f%%)\n===========================\n\n",0,
                 32,vlSelfRef.extender_tb__DOT__test_num,
                 32,vlSelfRef.extender_tb__DOT__pass_count,
                 64,((100.0 * VL_ISTOR_D_I(32, vlSelfRef.extender_tb__DOT__pass_count)) 
                     / VL_ISTOR_D_I(32, vlSelfRef.extender_tb__DOT__test_num)),
                 32,vlSelfRef.extender_tb__DOT__fail_count,
                 64,((100.0 * VL_ISTOR_D_I(32, vlSelfRef.extender_tb__DOT__fail_count)) 
                     / VL_ISTOR_D_I(32, vlSelfRef.extender_tb__DOT__test_num)));
    VL_FINISH_MT("../../01_bench/extender_tb.sv", 178, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vextender_tb___024root___dump_triggers__act(Vextender_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vextender_tb___024root___eval_triggers__act(Vextender_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextender_tb___024root___eval_triggers__act\n"); );
    Vextender_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vextender_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
