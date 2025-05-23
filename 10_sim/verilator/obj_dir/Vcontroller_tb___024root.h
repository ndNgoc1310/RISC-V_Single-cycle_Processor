// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcontroller_tb.h for the primary calling header

#ifndef VERILATED_VCONTROLLER_TB___024ROOT_H_
#define VERILATED_VCONTROLLER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcontroller_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcontroller_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*2:0*/ controller_tb__DOT____Vxrand_h87975763__5;
    CData/*2:0*/ controller_tb__DOT____Vxrand_h87975763__4;
    CData/*2:0*/ controller_tb__DOT____Vxrand_h87975763__3;
    CData/*2:0*/ controller_tb__DOT____Vxrand_h87975763__2;
    CData/*2:0*/ controller_tb__DOT____Vxrand_h87975763__1;
    CData/*2:0*/ controller_tb__DOT____Vxrand_h87975763__0;
    CData/*6:0*/ controller_tb__DOT__op;
    CData/*2:0*/ controller_tb__DOT__funct3;
    CData/*0:0*/ controller_tb__DOT__funct7b5;
    CData/*0:0*/ controller_tb__DOT__ZeroE;
    CData/*0:0*/ controller_tb__DOT__BranchE;
    CData/*0:0*/ controller_tb__DOT__JumpE;
    CData/*0:0*/ controller_tb__DOT__ALUResultEb0;
    CData/*0:0*/ controller_tb__DOT__PCSrcE;
    CData/*3:0*/ controller_tb__DOT__ALUControlD;
    CData/*0:0*/ controller_tb__DOT__Ecall;
    CData/*0:0*/ controller_tb__DOT__Ebreak;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    SData/*11:0*/ controller_tb__DOT__funct12;
    SData/*12:0*/ controller_tb__DOT__dut__DOT__md__DOT____Vxrand_h878dd58b__0;
    SData/*12:0*/ controller_tb__DOT__dut__DOT__md__DOT____Vxrand_h87936ccd__0;
    SData/*12:0*/ controller_tb__DOT__dut__DOT__md__DOT____Vxrand_h878f4dba__0;
    SData/*12:0*/ controller_tb__DOT__dut__DOT__md__DOT__controls;
    IData/*31:0*/ controller_tb__DOT__test_num;
    IData/*31:0*/ controller_tb__DOT__pass_count;
    IData/*31:0*/ controller_tb__DOT__fail_count;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcontroller_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcontroller_tb___024root(Vcontroller_tb__Syms* symsp, const char* v__name);
    ~Vcontroller_tb___024root();
    VL_UNCOPYABLE(Vcontroller_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
