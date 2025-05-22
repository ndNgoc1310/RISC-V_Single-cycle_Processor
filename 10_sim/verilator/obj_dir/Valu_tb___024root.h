// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Valu_tb.h for the primary calling header

#ifndef VERILATED_VALU_TB___024ROOT_H_
#define VERILATED_VALU_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Valu_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Valu_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*2:0*/ alu_tb__DOT__ALUControl;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT__carry__BRA__0__KET__;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a1__b;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a2__cout;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a2__b;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a3__cout;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a3__b;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a4__cout;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a4__b;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a5__cout;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a5__b;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a6__cout;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a6__b;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a7__cout;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a7__b;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a8__cout;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a8__b;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a9__cout;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a9__b;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a10__cout;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a10__b;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a11__cout;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a11__b;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a12__cout;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a12__b;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a13__cout;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a13__b;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a14__cout;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a14__b;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a15__cout;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a15__b;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a16__cout;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a16__b;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a17__cout;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a17__b;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a18__cout;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a18__b;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a19__cout;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a19__b;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a20__cout;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a20__b;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a21__cout;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a21__b;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a22__cout;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a22__b;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a23__cout;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a23__b;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a24__cout;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a24__b;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a25__cout;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a25__b;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a26__cout;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a26__b;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a27__cout;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a27__b;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a28__cout;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a28__b;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a29__cout;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a29__b;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a30__cout;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a30__b;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a31__cout;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a31__b;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellinp__a32__b;
    };
    struct {
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT____Vcellout__a32__sum;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT__a1__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ alu_tb__DOT__dut__DOT__add1__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ alu_tb__DOT__a;
        IData/*31:0*/ alu_tb__DOT__b;
        IData/*31:0*/ alu_tb__DOT__rslt;
        IData/*31:0*/ alu_tb__DOT__test_count;
        IData/*31:0*/ alu_tb__DOT__error_count;
        IData/*31:0*/ alu_tb__DOT__dut__DOT__src_b;
        IData/*31:0*/ alu_tb__DOT__dut__DOT__sum;
        IData/*31:0*/ alu_tb__DOT__dut__DOT____Vcellout__and1__y;
        IData/*31:0*/ alu_tb__DOT__dut__DOT____Vcellout__or1__y;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 9> alu_tb__DOT__dut__DOT__entry;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Valu_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Valu_tb___024root(Valu_tb__Syms* symsp, const char* v__name);
    ~Valu_tb___024root();
    VL_UNCOPYABLE(Valu_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
