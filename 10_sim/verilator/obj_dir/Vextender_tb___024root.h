// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vextender_tb.h for the primary calling header

#ifndef VERILATED_VEXTENDER_TB___024ROOT_H_
#define VERILATED_VEXTENDER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vextender_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vextender_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*2:0*/ extender_tb__DOT__immsrc;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*24:0*/ extender_tb__DOT__instr;
    IData/*31:0*/ extender_tb__DOT__immext;
    IData/*31:0*/ extender_tb__DOT__test_num;
    IData/*31:0*/ extender_tb__DOT__pass_count;
    IData/*31:0*/ extender_tb__DOT__fail_count;
    IData/*31:0*/ extender_tb__DOT__dut__DOT____Vxrand_h8794da3b__0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vextender_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vextender_tb___024root(Vextender_tb__Syms* symsp, const char* v__name);
    ~Vextender_tb___024root();
    VL_UNCOPYABLE(Vextender_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
