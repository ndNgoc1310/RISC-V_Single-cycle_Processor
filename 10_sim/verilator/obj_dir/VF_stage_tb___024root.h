// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VF_stage_tb.h for the primary calling header

#ifndef VERILATED_VF_STAGE_TB___024ROOT_H_
#define VERILATED_VF_STAGE_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VF_stage_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VF_stage_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ F_stage_tb__DOT__clk;
    CData/*0:0*/ F_stage_tb__DOT__rst;
    CData/*0:0*/ F_stage_tb__DOT__StallF;
    CData/*0:0*/ F_stage_tb__DOT__PCSrcE;
    CData/*0:0*/ F_stage_tb__DOT__PCplus4__DOT____Vcellout__a4__cout;
    CData/*0:0*/ F_stage_tb__DOT__PCplus4__DOT____Vcellout__a5__cout;
    CData/*0:0*/ F_stage_tb__DOT__PCplus4__DOT____Vcellout__a6__cout;
    CData/*0:0*/ F_stage_tb__DOT__PCplus4__DOT____Vcellout__a7__cout;
    CData/*0:0*/ F_stage_tb__DOT__PCplus4__DOT____Vcellout__a8__cout;
    CData/*0:0*/ F_stage_tb__DOT__PCplus4__DOT____Vcellout__a9__cout;
    CData/*0:0*/ F_stage_tb__DOT__PCplus4__DOT____Vcellout__a10__cout;
    CData/*0:0*/ F_stage_tb__DOT__PCplus4__DOT____Vcellout__a11__cout;
    CData/*0:0*/ F_stage_tb__DOT__PCplus4__DOT____Vcellout__a12__cout;
    CData/*0:0*/ F_stage_tb__DOT__PCplus4__DOT____Vcellout__a13__cout;
    CData/*0:0*/ F_stage_tb__DOT__PCplus4__DOT____Vcellout__a14__cout;
    CData/*0:0*/ F_stage_tb__DOT__PCplus4__DOT____Vcellout__a15__cout;
    CData/*0:0*/ F_stage_tb__DOT__PCplus4__DOT____Vcellout__a16__cout;
    CData/*0:0*/ F_stage_tb__DOT__PCplus4__DOT____Vcellout__a17__cout;
    CData/*0:0*/ F_stage_tb__DOT__PCplus4__DOT____Vcellout__a18__cout;
    CData/*0:0*/ F_stage_tb__DOT__PCplus4__DOT____Vcellout__a19__cout;
    CData/*0:0*/ F_stage_tb__DOT__PCplus4__DOT____Vcellout__a20__cout;
    CData/*0:0*/ F_stage_tb__DOT__PCplus4__DOT____Vcellout__a21__cout;
    CData/*0:0*/ F_stage_tb__DOT__PCplus4__DOT____Vcellout__a22__cout;
    CData/*0:0*/ F_stage_tb__DOT__PCplus4__DOT____Vcellout__a23__cout;
    CData/*0:0*/ F_stage_tb__DOT__PCplus4__DOT____Vcellout__a24__cout;
    CData/*0:0*/ F_stage_tb__DOT__PCplus4__DOT____Vcellout__a25__cout;
    CData/*0:0*/ F_stage_tb__DOT__PCplus4__DOT____Vcellout__a26__cout;
    CData/*0:0*/ F_stage_tb__DOT__PCplus4__DOT____Vcellout__a27__cout;
    CData/*0:0*/ F_stage_tb__DOT__PCplus4__DOT____Vcellout__a28__cout;
    CData/*0:0*/ F_stage_tb__DOT__PCplus4__DOT____Vcellout__a29__cout;
    CData/*0:0*/ F_stage_tb__DOT__PCplus4__DOT____Vcellout__a30__cout;
    CData/*0:0*/ F_stage_tb__DOT__PCplus4__DOT____Vcellout__a31__cout;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__F_stage_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__F_stage_tb__DOT__rst__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ F_stage_tb__DOT__PCTargetE;
    IData/*31:0*/ F_stage_tb__DOT__pcF0;
    IData/*31:0*/ F_stage_tb__DOT__pcF;
    IData/*31:0*/ F_stage_tb__DOT__PCPlus4F;
    IData/*31:0*/ F_stage_tb__DOT__test_num;
    IData/*31:0*/ F_stage_tb__DOT__pass_count;
    IData/*31:0*/ F_stage_tb__DOT__fail_count;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 64> F_stage_tb__DOT__imem__DOT__RAM;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h599addb5__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    VF_stage_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    VF_stage_tb___024root(VF_stage_tb__Syms* symsp, const char* v__name);
    ~VF_stage_tb___024root();
    VL_UNCOPYABLE(VF_stage_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
