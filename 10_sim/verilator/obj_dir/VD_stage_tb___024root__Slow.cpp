// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VD_stage_tb.h for the primary calling header

#include "VD_stage_tb__pch.h"
#include "VD_stage_tb__Syms.h"
#include "VD_stage_tb___024root.h"

void VD_stage_tb___024root___ctor_var_reset(VD_stage_tb___024root* vlSelf);

VD_stage_tb___024root::VD_stage_tb___024root(VD_stage_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VD_stage_tb___024root___ctor_var_reset(this);
}

void VD_stage_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VD_stage_tb___024root::~VD_stage_tb___024root() {
}
