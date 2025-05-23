// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VF_stage_tb.h for the primary calling header

#include "VF_stage_tb__pch.h"
#include "VF_stage_tb__Syms.h"
#include "VF_stage_tb___024root.h"

void VF_stage_tb___024root___ctor_var_reset(VF_stage_tb___024root* vlSelf);

VF_stage_tb___024root::VF_stage_tb___024root(VF_stage_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VF_stage_tb___024root___ctor_var_reset(this);
}

void VF_stage_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VF_stage_tb___024root::~VF_stage_tb___024root() {
}
