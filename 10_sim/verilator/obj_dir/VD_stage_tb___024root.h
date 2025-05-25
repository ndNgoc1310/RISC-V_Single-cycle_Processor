// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VD_stage_tb.h for the primary calling header

#ifndef VERILATED_VD_STAGE_TB___024ROOT_H_
#define VERILATED_VD_STAGE_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VD_stage_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VD_stage_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ D_stage_tb__DOT__clk;
        CData/*0:0*/ D_stage_tb__DOT__rst;
        CData/*4:0*/ D_stage_tb__DOT____Vxrand_h87975fad__11;
        CData/*4:0*/ D_stage_tb__DOT____Vxrand_h87975fad__10;
        CData/*4:0*/ D_stage_tb__DOT____Vxrand_h87975fad__9;
        CData/*4:0*/ D_stage_tb__DOT____Vxrand_h87975fad__8;
        CData/*4:0*/ D_stage_tb__DOT____Vxrand_h87975fad__7;
        CData/*4:0*/ D_stage_tb__DOT____Vxrand_h87975fad__6;
        CData/*4:0*/ D_stage_tb__DOT____Vxrand_h87975fad__5;
        CData/*1:0*/ D_stage_tb__DOT____Vxrand_h87970bbd__2;
        CData/*4:0*/ D_stage_tb__DOT____Vxrand_h87975fad__4;
        CData/*4:0*/ D_stage_tb__DOT____Vxrand_h87975fad__3;
        CData/*4:0*/ D_stage_tb__DOT____Vxrand_h87975fad__2;
        CData/*4:0*/ D_stage_tb__DOT____Vxrand_h87975fad__1;
        CData/*4:0*/ D_stage_tb__DOT____Vxrand_h87975fad__0;
        CData/*1:0*/ D_stage_tb__DOT____Vxrand_h87970bbd__1;
        CData/*3:0*/ D_stage_tb__DOT____Vxrand_h8797496c__0;
        CData/*1:0*/ D_stage_tb__DOT____Vxrand_h87970bbd__0;
        CData/*4:0*/ D_stage_tb__DOT__i_debug_addr;
        CData/*0:0*/ D_stage_tb__DOT__StallD;
        CData/*0:0*/ D_stage_tb__DOT__FlushD;
        CData/*0:0*/ D_stage_tb__DOT__ZeroE;
        CData/*0:0*/ D_stage_tb__DOT__BranchE;
        CData/*0:0*/ D_stage_tb__DOT__JumpE;
        CData/*0:0*/ D_stage_tb__DOT__ALUResultEb0;
        CData/*0:0*/ D_stage_tb__DOT__RegWriteW;
        CData/*4:0*/ D_stage_tb__DOT__RdW;
        CData/*1:0*/ D_stage_tb__DOT__mask_ResultSrcD;
        CData/*3:0*/ D_stage_tb__DOT__mask_ALUControlD;
        CData/*1:0*/ D_stage_tb__DOT__mask_ALUSrcD;
        CData/*4:0*/ D_stage_tb__DOT__mask_Rs1D;
        CData/*4:0*/ D_stage_tb__DOT__mask_Rs2D;
        CData/*4:0*/ D_stage_tb__DOT__mask_RdD;
        CData/*4:0*/ D_stage_tb__DOT__mask_MemSrcD;
        CData/*6:0*/ D_stage_tb__DOT__opD;
        CData/*2:0*/ D_stage_tb__DOT__funct3D;
        CData/*0:0*/ D_stage_tb__DOT__funct7Db5;
        CData/*0:0*/ D_stage_tb__DOT__PCSrcE;
        CData/*3:0*/ D_stage_tb__DOT__ALUControlD;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__D_stage_tb__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__D_stage_tb__DOT__rst__0;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ D_stage_tb__DOT__funct12D;
        SData/*12:0*/ D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h8791d6b3__0;
        SData/*12:0*/ D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h87936ccd__0;
        SData/*12:0*/ D_stage_tb__DOT__ctrl__DOT__md__DOT____Vxrand_h878f4dba__0;
        SData/*12:0*/ D_stage_tb__DOT__ctrl__DOT__md__DOT__controls;
        IData/*31:0*/ D_stage_tb__DOT____Vxrand_h8794da3b__19;
        IData/*31:0*/ D_stage_tb__DOT____Vxrand_h8794da3b__18;
        IData/*31:0*/ D_stage_tb__DOT____Vxrand_h8794da3b__17;
        IData/*31:0*/ D_stage_tb__DOT____Vxrand_h8794da3b__16;
        IData/*31:0*/ D_stage_tb__DOT____Vxrand_h8794da3b__15;
        IData/*31:0*/ D_stage_tb__DOT____Vxrand_h8794da3b__14;
        IData/*31:0*/ D_stage_tb__DOT____Vxrand_h8794da3b__13;
        IData/*31:0*/ D_stage_tb__DOT____Vxrand_h8794da3b__12;
        IData/*31:0*/ D_stage_tb__DOT____Vxrand_h8794da3b__11;
        IData/*31:0*/ D_stage_tb__DOT____Vxrand_h8794da3b__10;
        IData/*31:0*/ D_stage_tb__DOT____Vxrand_h8794da3b__9;
        IData/*31:0*/ D_stage_tb__DOT____Vxrand_h8794da3b__8;
        IData/*31:0*/ D_stage_tb__DOT____Vxrand_h8794da3b__7;
        IData/*31:0*/ D_stage_tb__DOT____Vxrand_h8794da3b__6;
        IData/*31:0*/ D_stage_tb__DOT____Vxrand_h8794da3b__5;
        IData/*31:0*/ D_stage_tb__DOT____Vxrand_h8794da3b__4;
    };
    struct {
        IData/*31:0*/ D_stage_tb__DOT____Vxrand_h8794da3b__3;
        IData/*31:0*/ D_stage_tb__DOT____Vxrand_h8794da3b__2;
        IData/*31:0*/ D_stage_tb__DOT____Vxrand_h8794da3b__1;
        IData/*31:0*/ D_stage_tb__DOT____Vxrand_h8794da3b__0;
        IData/*31:0*/ D_stage_tb__DOT__o_debug_data;
        IData/*31:0*/ D_stage_tb__DOT__mask_o_debug_data;
        IData/*31:0*/ D_stage_tb__DOT__InstrF;
        IData/*31:0*/ D_stage_tb__DOT__pcF;
        IData/*31:0*/ D_stage_tb__DOT__PCPlus4F;
        IData/*31:0*/ D_stage_tb__DOT__ResultW;
        IData/*31:0*/ D_stage_tb__DOT__mask_Read1D;
        IData/*31:0*/ D_stage_tb__DOT__mask_Read2D;
        IData/*31:0*/ D_stage_tb__DOT__mask_ImmExtD;
        IData/*31:0*/ D_stage_tb__DOT__Read1D;
        IData/*31:0*/ D_stage_tb__DOT__Read2D;
        IData/*31:0*/ D_stage_tb__DOT__ImmExtD;
        VlWide<3>/*95:0*/ D_stage_tb__DOT____Vcellout__Dreg__q;
        IData/*31:0*/ D_stage_tb__DOT__test_num;
        IData/*31:0*/ D_stage_tb__DOT__pass_count;
        IData/*31:0*/ D_stage_tb__DOT__fail_count;
        IData/*31:0*/ D_stage_tb__DOT__rf__DOT__x01;
        IData/*31:0*/ D_stage_tb__DOT__rf__DOT__x02;
        IData/*31:0*/ D_stage_tb__DOT__rf__DOT__x03;
        IData/*31:0*/ D_stage_tb__DOT__rf__DOT__x04;
        IData/*31:0*/ D_stage_tb__DOT__rf__DOT__x05;
        IData/*31:0*/ D_stage_tb__DOT__rf__DOT__x06;
        IData/*31:0*/ D_stage_tb__DOT__rf__DOT__x07;
        IData/*31:0*/ D_stage_tb__DOT__rf__DOT__x08;
        IData/*31:0*/ D_stage_tb__DOT__rf__DOT__x09;
        IData/*31:0*/ D_stage_tb__DOT__rf__DOT__x10;
        IData/*31:0*/ D_stage_tb__DOT__rf__DOT__x11;
        IData/*31:0*/ D_stage_tb__DOT__rf__DOT__x12;
        IData/*31:0*/ D_stage_tb__DOT__rf__DOT__x13;
        IData/*31:0*/ D_stage_tb__DOT__rf__DOT__x14;
        IData/*31:0*/ D_stage_tb__DOT__rf__DOT__x15;
        IData/*31:0*/ D_stage_tb__DOT__rf__DOT__x16;
        IData/*31:0*/ D_stage_tb__DOT__rf__DOT__x17;
        IData/*31:0*/ D_stage_tb__DOT__rf__DOT__x18;
        IData/*31:0*/ D_stage_tb__DOT__rf__DOT__x19;
        IData/*31:0*/ D_stage_tb__DOT__rf__DOT__x20;
        IData/*31:0*/ D_stage_tb__DOT__rf__DOT__x21;
        IData/*31:0*/ D_stage_tb__DOT__rf__DOT__x22;
        IData/*31:0*/ D_stage_tb__DOT__rf__DOT__x23;
        IData/*31:0*/ D_stage_tb__DOT__rf__DOT__x24;
        IData/*31:0*/ D_stage_tb__DOT__rf__DOT__x25;
        IData/*31:0*/ D_stage_tb__DOT__rf__DOT__x26;
        IData/*31:0*/ D_stage_tb__DOT__rf__DOT__x27;
        IData/*31:0*/ D_stage_tb__DOT__rf__DOT__x28;
        IData/*31:0*/ D_stage_tb__DOT__rf__DOT__x29;
        IData/*31:0*/ D_stage_tb__DOT__rf__DOT__x30;
        IData/*31:0*/ D_stage_tb__DOT__rf__DOT__x31;
        IData/*31:0*/ D_stage_tb__DOT__ext__DOT____Vxrand_h8794da3b__0;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h1a3cedb5__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    VD_stage_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    VD_stage_tb___024root(VD_stage_tb__Syms* symsp, const char* v__name);
    ~VD_stage_tb___024root();
    VL_UNCOPYABLE(VD_stage_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
