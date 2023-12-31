// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhmmm.h for the primary calling header

#include "verilated.h"

#include "Vhmmm__Syms.h"
#include "Vhmmm___024root.h"

VL_ATTR_COLD void Vhmmm___024root___eval_static(Vhmmm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhmmm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhmmm___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vhmmm___024root___eval_initial__TOP(Vhmmm___024root* vlSelf);

VL_ATTR_COLD void Vhmmm___024root___eval_initial(Vhmmm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhmmm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhmmm___024root___eval_initial\n"); );
    // Body
    Vhmmm___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void Vhmmm___024root___eval_initial__TOP(Vhmmm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhmmm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhmmm___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e747874U;
    __Vtemp_1[1U] = 0x6772616dU;
    __Vtemp_1[2U] = 0x70726fU;
    VL_READMEM_N(false, 16, 256, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelf->hmmm__DOT__datapath__DOT__mem__DOT__RAM)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vhmmm___024root___eval_final(Vhmmm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhmmm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhmmm___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vhmmm___024root___eval_triggers__stl(Vhmmm___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vhmmm___024root___dump_triggers__stl(Vhmmm___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vhmmm___024root___eval_stl(Vhmmm___024root* vlSelf);

VL_ATTR_COLD void Vhmmm___024root___eval_settle(Vhmmm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhmmm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhmmm___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vhmmm___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vhmmm___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("hmmm.sv", 44, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vhmmm___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhmmm___024root___dump_triggers__stl(Vhmmm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhmmm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhmmm___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vhmmm___024root___stl_sequent__TOP__0(Vhmmm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhmmm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhmmm___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->hmmm__DOT__instruction = vlSelf->hmmm__DOT__datapath__DOT__mem__DOT__RAM
        [(0xffU & ((IData)(vlSelf->hmmm__DOT__datapath__DOT__pc) 
                   >> 1U))];
    vlSelf->hmmm__DOT__datapath__DOT__imm_ext = ((0x80U 
                                                  & (IData)(vlSelf->hmmm__DOT__instruction))
                                                  ? 
                                                 (0xff00U 
                                                  | (0xffU 
                                                     & (IData)(vlSelf->hmmm__DOT__instruction)))
                                                  : 
                                                 (0xffU 
                                                  & (IData)(vlSelf->hmmm__DOT__instruction)));
    vlSelf->hmmm__DOT__datapath__DOT__rf_read_data_y 
        = ((0U == (0xfU & ((IData)(vlSelf->hmmm__DOT__instruction) 
                           >> 4U))) ? 0U : vlSelf->hmmm__DOT__datapath__DOT__rf__DOT__registers
           [(0xfU & ((IData)(vlSelf->hmmm__DOT__instruction) 
                     >> 4U))]);
    vlSelf->__VdfgTmp_h1fe3baef__0 = vlSelf->hmmm__DOT__datapath__DOT__rf__DOT__registers
        [(0xfU & ((IData)(vlSelf->hmmm__DOT__instruction) 
                  >> 8U))];
    if ((0x8000U & (IData)(vlSelf->hmmm__DOT__instruction))) {
        vlSelf->hmmm__DOT__instruction_type = ((0x4000U 
                                                & (IData)(vlSelf->hmmm__DOT__instruction))
                                                ? (
                                                   (0x2000U 
                                                    & (IData)(vlSelf->hmmm__DOT__instruction))
                                                    ? 
                                                   ((0x1000U 
                                                     & (IData)(vlSelf->hmmm__DOT__instruction))
                                                     ? 0x18U
                                                     : 0x17U)
                                                    : 
                                                   ((0x1000U 
                                                     & (IData)(vlSelf->hmmm__DOT__instruction))
                                                     ? 0x16U
                                                     : 0x15U))
                                                : (
                                                   (0x2000U 
                                                    & (IData)(vlSelf->hmmm__DOT__instruction))
                                                    ? 
                                                   ((0x1000U 
                                                     & (IData)(vlSelf->hmmm__DOT__instruction))
                                                     ? 
                                                    ((0x800U 
                                                      & (IData)(vlSelf->hmmm__DOT__instruction))
                                                      ? 0x19U
                                                      : 
                                                     ((0x400U 
                                                       & (IData)(vlSelf->hmmm__DOT__instruction))
                                                       ? 0x19U
                                                       : 
                                                      ((0x200U 
                                                        & (IData)(vlSelf->hmmm__DOT__instruction))
                                                        ? 0x19U
                                                        : 
                                                       ((0x100U 
                                                         & (IData)(vlSelf->hmmm__DOT__instruction))
                                                         ? 0x19U
                                                         : 0x14U))))
                                                     : 0x12U)
                                                    : 
                                                   ((0x1000U 
                                                     & (IData)(vlSelf->hmmm__DOT__instruction))
                                                     ? 0x11U
                                                     : 0x10U)));
    } else if ((0x4000U & (IData)(vlSelf->hmmm__DOT__instruction))) {
        if ((0x2000U & (IData)(vlSelf->hmmm__DOT__instruction))) {
            vlSelf->hmmm__DOT__instruction_type = (
                                                   (0x1000U 
                                                    & (IData)(vlSelf->hmmm__DOT__instruction))
                                                    ? 0xeU
                                                    : 0xcU);
        } else if ((0x1000U & (IData)(vlSelf->hmmm__DOT__instruction))) {
            vlSelf->hmmm__DOT__instruction_type = 0xbU;
        } else if (VL_UNLIKELY((8U & (IData)(vlSelf->hmmm__DOT__instruction)))) {
            VL_WRITEF("unknown instruction, defaulting to NOP\n");
            vlSelf->hmmm__DOT__instruction_type = 1U;
        } else if (VL_UNLIKELY((4U & (IData)(vlSelf->hmmm__DOT__instruction)))) {
            VL_WRITEF("unknown instruction, defaulting to NOP\n");
            vlSelf->hmmm__DOT__instruction_type = 1U;
        } else {
            vlSelf->hmmm__DOT__instruction_type = (
                                                   (2U 
                                                    & (IData)(vlSelf->hmmm__DOT__instruction))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->hmmm__DOT__instruction))
                                                     ? 8U
                                                     : 7U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->hmmm__DOT__instruction))
                                                     ? 6U
                                                     : 5U));
        }
    } else if ((0x2000U & (IData)(vlSelf->hmmm__DOT__instruction))) {
        vlSelf->hmmm__DOT__instruction_type = ((0x1000U 
                                                & (IData)(vlSelf->hmmm__DOT__instruction))
                                                ? 0xaU
                                                : 9U);
    } else if ((0x1000U & (IData)(vlSelf->hmmm__DOT__instruction))) {
        vlSelf->hmmm__DOT__instruction_type = 4U;
    } else if ((0x800U & (IData)(vlSelf->hmmm__DOT__instruction))) {
        if (VL_UNLIKELY((0x80U & (IData)(vlSelf->hmmm__DOT__instruction)))) {
            VL_WRITEF("unknown instruction, defaulting to NOP\n");
            vlSelf->hmmm__DOT__instruction_type = 1U;
        } else if (VL_UNLIKELY((0x40U & (IData)(vlSelf->hmmm__DOT__instruction)))) {
            VL_WRITEF("unknown instruction, defaulting to NOP\n");
            vlSelf->hmmm__DOT__instruction_type = 1U;
        } else if (VL_UNLIKELY((0x20U & (IData)(vlSelf->hmmm__DOT__instruction)))) {
            VL_WRITEF("unknown instruction, defaulting to NOP\n");
            vlSelf->hmmm__DOT__instruction_type = 1U;
        } else if (VL_UNLIKELY((0x10U & (IData)(vlSelf->hmmm__DOT__instruction)))) {
            VL_WRITEF("unknown instruction, defaulting to NOP\n");
            vlSelf->hmmm__DOT__instruction_type = 1U;
        } else if (VL_UNLIKELY((8U & (IData)(vlSelf->hmmm__DOT__instruction)))) {
            VL_WRITEF("unknown instruction, defaulting to NOP\n");
            vlSelf->hmmm__DOT__instruction_type = 1U;
        } else if (VL_UNLIKELY((4U & (IData)(vlSelf->hmmm__DOT__instruction)))) {
            VL_WRITEF("unknown instruction, defaulting to NOP\n");
            vlSelf->hmmm__DOT__instruction_type = 1U;
        } else if ((2U & (IData)(vlSelf->hmmm__DOT__instruction))) {
            vlSelf->hmmm__DOT__instruction_type = (
                                                   (1U 
                                                    & (IData)(vlSelf->hmmm__DOT__instruction))
                                                    ? 0x13U
                                                    : 3U);
        } else if (VL_LIKELY((1U & (IData)(vlSelf->hmmm__DOT__instruction)))) {
            vlSelf->hmmm__DOT__instruction_type = 2U;
        } else {
            VL_WRITEF("unknown instruction, defaulting to NOP\n");
            vlSelf->hmmm__DOT__instruction_type = 1U;
        }
    } else if ((0x400U & (IData)(vlSelf->hmmm__DOT__instruction))) {
        if (VL_UNLIKELY((0x80U & (IData)(vlSelf->hmmm__DOT__instruction)))) {
            VL_WRITEF("unknown instruction, defaulting to NOP\n");
            vlSelf->hmmm__DOT__instruction_type = 1U;
        } else if (VL_UNLIKELY((0x40U & (IData)(vlSelf->hmmm__DOT__instruction)))) {
            VL_WRITEF("unknown instruction, defaulting to NOP\n");
            vlSelf->hmmm__DOT__instruction_type = 1U;
        } else if (VL_UNLIKELY((0x20U & (IData)(vlSelf->hmmm__DOT__instruction)))) {
            VL_WRITEF("unknown instruction, defaulting to NOP\n");
            vlSelf->hmmm__DOT__instruction_type = 1U;
        } else if (VL_UNLIKELY((0x10U & (IData)(vlSelf->hmmm__DOT__instruction)))) {
            VL_WRITEF("unknown instruction, defaulting to NOP\n");
            vlSelf->hmmm__DOT__instruction_type = 1U;
        } else if (VL_UNLIKELY((8U & (IData)(vlSelf->hmmm__DOT__instruction)))) {
            VL_WRITEF("unknown instruction, defaulting to NOP\n");
            vlSelf->hmmm__DOT__instruction_type = 1U;
        } else if (VL_UNLIKELY((4U & (IData)(vlSelf->hmmm__DOT__instruction)))) {
            VL_WRITEF("unknown instruction, defaulting to NOP\n");
            vlSelf->hmmm__DOT__instruction_type = 1U;
        } else if ((2U & (IData)(vlSelf->hmmm__DOT__instruction))) {
            vlSelf->hmmm__DOT__instruction_type = (
                                                   (1U 
                                                    & (IData)(vlSelf->hmmm__DOT__instruction))
                                                    ? 0x13U
                                                    : 3U);
        } else if (VL_LIKELY((1U & (IData)(vlSelf->hmmm__DOT__instruction)))) {
            vlSelf->hmmm__DOT__instruction_type = 2U;
        } else {
            VL_WRITEF("unknown instruction, defaulting to NOP\n");
            vlSelf->hmmm__DOT__instruction_type = 1U;
        }
    } else if ((0x200U & (IData)(vlSelf->hmmm__DOT__instruction))) {
        if (VL_UNLIKELY((0x80U & (IData)(vlSelf->hmmm__DOT__instruction)))) {
            VL_WRITEF("unknown instruction, defaulting to NOP\n");
            vlSelf->hmmm__DOT__instruction_type = 1U;
        } else if (VL_UNLIKELY((0x40U & (IData)(vlSelf->hmmm__DOT__instruction)))) {
            VL_WRITEF("unknown instruction, defaulting to NOP\n");
            vlSelf->hmmm__DOT__instruction_type = 1U;
        } else if (VL_UNLIKELY((0x20U & (IData)(vlSelf->hmmm__DOT__instruction)))) {
            VL_WRITEF("unknown instruction, defaulting to NOP\n");
            vlSelf->hmmm__DOT__instruction_type = 1U;
        } else if (VL_UNLIKELY((0x10U & (IData)(vlSelf->hmmm__DOT__instruction)))) {
            VL_WRITEF("unknown instruction, defaulting to NOP\n");
            vlSelf->hmmm__DOT__instruction_type = 1U;
        } else if (VL_UNLIKELY((8U & (IData)(vlSelf->hmmm__DOT__instruction)))) {
            VL_WRITEF("unknown instruction, defaulting to NOP\n");
            vlSelf->hmmm__DOT__instruction_type = 1U;
        } else if (VL_UNLIKELY((4U & (IData)(vlSelf->hmmm__DOT__instruction)))) {
            VL_WRITEF("unknown instruction, defaulting to NOP\n");
            vlSelf->hmmm__DOT__instruction_type = 1U;
        } else if ((2U & (IData)(vlSelf->hmmm__DOT__instruction))) {
            vlSelf->hmmm__DOT__instruction_type = (
                                                   (1U 
                                                    & (IData)(vlSelf->hmmm__DOT__instruction))
                                                    ? 0x13U
                                                    : 3U);
        } else if (VL_LIKELY((1U & (IData)(vlSelf->hmmm__DOT__instruction)))) {
            vlSelf->hmmm__DOT__instruction_type = 2U;
        } else {
            VL_WRITEF("unknown instruction, defaulting to NOP\n");
            vlSelf->hmmm__DOT__instruction_type = 1U;
        }
    } else if ((0x100U & (IData)(vlSelf->hmmm__DOT__instruction))) {
        if (VL_UNLIKELY((0x80U & (IData)(vlSelf->hmmm__DOT__instruction)))) {
            VL_WRITEF("unknown instruction, defaulting to NOP\n");
            vlSelf->hmmm__DOT__instruction_type = 1U;
        } else if (VL_UNLIKELY((0x40U & (IData)(vlSelf->hmmm__DOT__instruction)))) {
            VL_WRITEF("unknown instruction, defaulting to NOP\n");
            vlSelf->hmmm__DOT__instruction_type = 1U;
        } else if (VL_UNLIKELY((0x20U & (IData)(vlSelf->hmmm__DOT__instruction)))) {
            VL_WRITEF("unknown instruction, defaulting to NOP\n");
            vlSelf->hmmm__DOT__instruction_type = 1U;
        } else if (VL_UNLIKELY((0x10U & (IData)(vlSelf->hmmm__DOT__instruction)))) {
            VL_WRITEF("unknown instruction, defaulting to NOP\n");
            vlSelf->hmmm__DOT__instruction_type = 1U;
        } else if (VL_UNLIKELY((8U & (IData)(vlSelf->hmmm__DOT__instruction)))) {
            VL_WRITEF("unknown instruction, defaulting to NOP\n");
            vlSelf->hmmm__DOT__instruction_type = 1U;
        } else if (VL_UNLIKELY((4U & (IData)(vlSelf->hmmm__DOT__instruction)))) {
            VL_WRITEF("unknown instruction, defaulting to NOP\n");
            vlSelf->hmmm__DOT__instruction_type = 1U;
        } else if ((2U & (IData)(vlSelf->hmmm__DOT__instruction))) {
            vlSelf->hmmm__DOT__instruction_type = (
                                                   (1U 
                                                    & (IData)(vlSelf->hmmm__DOT__instruction))
                                                    ? 0x13U
                                                    : 3U);
        } else if (VL_LIKELY((1U & (IData)(vlSelf->hmmm__DOT__instruction)))) {
            vlSelf->hmmm__DOT__instruction_type = 2U;
        } else {
            VL_WRITEF("unknown instruction, defaulting to NOP\n");
            vlSelf->hmmm__DOT__instruction_type = 1U;
        }
    } else if (VL_UNLIKELY((0x80U & (IData)(vlSelf->hmmm__DOT__instruction)))) {
        VL_WRITEF("unknown instruction, defaulting to NOP\n");
        vlSelf->hmmm__DOT__instruction_type = 1U;
    } else if (VL_UNLIKELY((0x40U & (IData)(vlSelf->hmmm__DOT__instruction)))) {
        VL_WRITEF("unknown instruction, defaulting to NOP\n");
        vlSelf->hmmm__DOT__instruction_type = 1U;
    } else if (VL_UNLIKELY((0x20U & (IData)(vlSelf->hmmm__DOT__instruction)))) {
        VL_WRITEF("unknown instruction, defaulting to NOP\n");
        vlSelf->hmmm__DOT__instruction_type = 1U;
    } else if (VL_UNLIKELY((0x10U & (IData)(vlSelf->hmmm__DOT__instruction)))) {
        VL_WRITEF("unknown instruction, defaulting to NOP\n");
        vlSelf->hmmm__DOT__instruction_type = 1U;
    } else if (VL_UNLIKELY((8U & (IData)(vlSelf->hmmm__DOT__instruction)))) {
        VL_WRITEF("unknown instruction, defaulting to NOP\n");
        vlSelf->hmmm__DOT__instruction_type = 1U;
    } else if (VL_UNLIKELY((4U & (IData)(vlSelf->hmmm__DOT__instruction)))) {
        VL_WRITEF("unknown instruction, defaulting to NOP\n");
        vlSelf->hmmm__DOT__instruction_type = 1U;
    } else {
        vlSelf->hmmm__DOT__instruction_type = ((2U 
                                                & (IData)(vlSelf->hmmm__DOT__instruction))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->hmmm__DOT__instruction))
                                                    ? 0x13U
                                                    : 3U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->hmmm__DOT__instruction))
                                                    ? 2U
                                                    : 0U));
    }
    vlSelf->hmmm__DOT__datapath__DOT__sign = ((0U != 
                                               (0xfU 
                                                & ((IData)(vlSelf->hmmm__DOT__instruction) 
                                                   >> 8U))) 
                                              & ((IData)(vlSelf->__VdfgTmp_h1fe3baef__0) 
                                                 >> 0xfU));
    vlSelf->hmmm__DOT__datapath__DOT__rf_read_data_x 
        = ((0U == (0xfU & ((IData)(vlSelf->hmmm__DOT__instruction) 
                           >> 8U))) ? 0U : (IData)(vlSelf->__VdfgTmp_h1fe3baef__0));
    vlSelf->hmmm__DOT__mem_adr_src = 0U;
    vlSelf->hmmm__DOT__mem_data_src = 0U;
    vlSelf->hmmm__DOT__mem_write = 0U;
    vlSelf->hmmm__DOT__pc_src = 0U;
    vlSelf->hmmm__DOT__rf_src_x = 0U;
    vlSelf->hmmm__DOT__rf_write_en_x = 0U;
    vlSelf->hmmm__DOT__alu_op = 0U;
    vlSelf->hmmm__DOT__alu_src_a = 0U;
    vlSelf->hmmm__DOT__alu_src_b = 0U;
    VL_WRITEF("\n\n");
    if (((((((((5U == vlSelf->hmmm__DOT__instruction_type) 
               | (2U == vlSelf->hmmm__DOT__instruction_type)) 
              | (3U == vlSelf->hmmm__DOT__instruction_type)) 
             | (4U == vlSelf->hmmm__DOT__instruction_type)) 
            | (9U == vlSelf->hmmm__DOT__instruction_type)) 
           | (0x14U == vlSelf->hmmm__DOT__instruction_type)) 
          | (0x13U == vlSelf->hmmm__DOT__instruction_type)) 
         | (0x15U == vlSelf->hmmm__DOT__instruction_type))) {
        if (VL_UNLIKELY((5U == vlSelf->hmmm__DOT__instruction_type))) {
            VL_WRITEF("LOADR\n");
            vlSelf->hmmm__DOT__mem_adr_src = 1U;
            vlSelf->hmmm__DOT__rf_src_x = 1U;
            vlSelf->hmmm__DOT__rf_write_en_x = 1U;
        } else if (VL_UNLIKELY((2U == vlSelf->hmmm__DOT__instruction_type))) {
            VL_WRITEF("READ\nWARNING: READ unimplemented.\n");
        } else if (VL_UNLIKELY((3U == vlSelf->hmmm__DOT__instruction_type))) {
            VL_WRITEF("WRITE\n");
        } else if (VL_UNLIKELY((4U == vlSelf->hmmm__DOT__instruction_type))) {
            VL_WRITEF("SETN\n");
            vlSelf->hmmm__DOT__rf_src_x = 0U;
            vlSelf->hmmm__DOT__rf_write_en_x = 1U;
        } else if (VL_UNLIKELY((9U == vlSelf->hmmm__DOT__instruction_type))) {
            VL_WRITEF("LOADN\n");
            vlSelf->hmmm__DOT__mem_adr_src = 0U;
            vlSelf->hmmm__DOT__rf_src_x = 1U;
            vlSelf->hmmm__DOT__rf_write_en_x = 1U;
        } else if (VL_UNLIKELY((0x14U == vlSelf->hmmm__DOT__instruction_type))) {
            VL_WRITEF("JUMPN\n");
            vlSelf->hmmm__DOT__pc_src = 2U;
        } else if ((0x13U == vlSelf->hmmm__DOT__instruction_type)) {
            VL_WRITEF("JUMPR\n");
            vlSelf->hmmm__DOT__pc_src = 3U;
        } else {
            VL_WRITEF("JEQZN\n");
            vlSelf->hmmm__DOT__pc_src = 2U;
        }
    } else if (((((((((0x16U == vlSelf->hmmm__DOT__instruction_type) 
                      | (0x17U == vlSelf->hmmm__DOT__instruction_type)) 
                     | (0x18U == vlSelf->hmmm__DOT__instruction_type)) 
                    | (0x19U == vlSelf->hmmm__DOT__instruction_type)) 
                   | (0xaU == vlSelf->hmmm__DOT__instruction_type)) 
                  | (6U == vlSelf->hmmm__DOT__instruction_type)) 
                 | (7U == vlSelf->hmmm__DOT__instruction_type)) 
                | (8U == vlSelf->hmmm__DOT__instruction_type))) {
        if (VL_UNLIKELY((0x16U == vlSelf->hmmm__DOT__instruction_type))) {
            VL_WRITEF("JNEZN\n");
            vlSelf->hmmm__DOT__pc_src = 2U;
        } else if (VL_UNLIKELY((0x17U == vlSelf->hmmm__DOT__instruction_type))) {
            VL_WRITEF("JGTZN\n");
            vlSelf->hmmm__DOT__pc_src = 2U;
        } else if (VL_UNLIKELY((0x18U == vlSelf->hmmm__DOT__instruction_type))) {
            VL_WRITEF("JLTZN\n");
            vlSelf->hmmm__DOT__pc_src = 2U;
        } else if (VL_UNLIKELY((0x19U == vlSelf->hmmm__DOT__instruction_type))) {
            VL_WRITEF("CALLN\n");
            vlSelf->hmmm__DOT__pc_src = 2U;
            vlSelf->hmmm__DOT__rf_src_x = 2U;
            vlSelf->hmmm__DOT__rf_write_en_x = 1U;
        } else if (VL_UNLIKELY((0xaU == vlSelf->hmmm__DOT__instruction_type))) {
            VL_WRITEF("STOREN\n");
            vlSelf->hmmm__DOT__mem_adr_src = 0U;
            vlSelf->hmmm__DOT__mem_data_src = 1U;
            vlSelf->hmmm__DOT__mem_write = 1U;
        } else if (VL_UNLIKELY((6U == vlSelf->hmmm__DOT__instruction_type))) {
            VL_WRITEF("STORER\n");
            vlSelf->hmmm__DOT__mem_data_src = 1U;
            vlSelf->hmmm__DOT__mem_adr_src = 1U;
            vlSelf->hmmm__DOT__mem_write = 1U;
        } else if ((7U == vlSelf->hmmm__DOT__instruction_type)) {
            VL_WRITEF("POPR\n");
            vlSelf->hmmm__DOT__alu_src_a = 0U;
            vlSelf->hmmm__DOT__alu_src_b = 3U;
            vlSelf->hmmm__DOT__alu_op = 1U;
            vlSelf->hmmm__DOT__rf_write_en_y = 1U;
            vlSelf->hmmm__DOT__mem_adr_src = 2U;
            vlSelf->hmmm__DOT__rf_src_x = 1U;
            vlSelf->hmmm__DOT__rf_write_en_x = 1U;
        } else {
            VL_WRITEF("PUSHR\n");
            vlSelf->hmmm__DOT__mem_data_src = 1U;
            vlSelf->hmmm__DOT__mem_adr_src = 1U;
            vlSelf->hmmm__DOT__mem_write = 1U;
            vlSelf->hmmm__DOT__alu_src_a = 0U;
            vlSelf->hmmm__DOT__alu_src_b = 3U;
            vlSelf->hmmm__DOT__alu_op = 0U;
            vlSelf->hmmm__DOT__rf_write_en_y = 1U;
        }
    } else if ((((0xcU == vlSelf->hmmm__DOT__instruction_type) 
                 | (0xdU == vlSelf->hmmm__DOT__instruction_type)) 
                | (1U == vlSelf->hmmm__DOT__instruction_type))) {
        if (VL_UNLIKELY((0xcU == vlSelf->hmmm__DOT__instruction_type))) {
            VL_WRITEF("ADD\n");
        } else if (VL_UNLIKELY((0xdU == vlSelf->hmmm__DOT__instruction_type))) {
            VL_WRITEF("COPY\n");
        } else if (VL_UNLIKELY((1U == vlSelf->hmmm__DOT__instruction_type))) {
            VL_WRITEF("NOP\n");
        }
        vlSelf->hmmm__DOT__alu_src_a = 0U;
        vlSelf->hmmm__DOT__alu_src_b = 0U;
        vlSelf->hmmm__DOT__alu_op = 0U;
        vlSelf->hmmm__DOT__rf_src_x = 3U;
        vlSelf->hmmm__DOT__rf_write_en_x = 1U;
    } else if (VL_UNLIKELY((0xbU == vlSelf->hmmm__DOT__instruction_type))) {
        VL_WRITEF("ADDN\n");
        vlSelf->hmmm__DOT__alu_src_a = 1U;
        vlSelf->hmmm__DOT__alu_src_b = 1U;
        vlSelf->hmmm__DOT__alu_op = 0U;
        vlSelf->hmmm__DOT__rf_src_x = 3U;
        vlSelf->hmmm__DOT__rf_write_en_x = 1U;
    } else if (((0xeU == vlSelf->hmmm__DOT__instruction_type) 
                | (0xfU == vlSelf->hmmm__DOT__instruction_type))) {
        if (VL_UNLIKELY((0xeU == vlSelf->hmmm__DOT__instruction_type))) {
            VL_WRITEF("SUB\n");
        } else if (VL_UNLIKELY((0xfU == vlSelf->hmmm__DOT__instruction_type))) {
            VL_WRITEF("NEG\n");
        }
        vlSelf->hmmm__DOT__alu_src_a = 0U;
        vlSelf->hmmm__DOT__alu_src_b = 0U;
        vlSelf->hmmm__DOT__alu_op = 1U;
        vlSelf->hmmm__DOT__rf_src_x = 3U;
        vlSelf->hmmm__DOT__rf_write_en_x = 1U;
    } else if (VL_UNLIKELY((0x10U == vlSelf->hmmm__DOT__instruction_type))) {
        VL_WRITEF("MUL\n");
        vlSelf->hmmm__DOT__alu_src_a = 0U;
        vlSelf->hmmm__DOT__alu_src_b = 0U;
        vlSelf->hmmm__DOT__alu_op = 2U;
        vlSelf->hmmm__DOT__rf_src_x = 3U;
        vlSelf->hmmm__DOT__rf_write_en_x = 1U;
    } else if (VL_UNLIKELY((0x11U == vlSelf->hmmm__DOT__instruction_type))) {
        VL_WRITEF("DIV\n");
        vlSelf->hmmm__DOT__alu_src_a = 0U;
        vlSelf->hmmm__DOT__alu_src_b = 0U;
        vlSelf->hmmm__DOT__alu_op = 3U;
        vlSelf->hmmm__DOT__rf_src_x = 3U;
        vlSelf->hmmm__DOT__rf_write_en_x = 1U;
    } else if (VL_UNLIKELY((0x12U == vlSelf->hmmm__DOT__instruction_type))) {
        VL_WRITEF("MOD\n");
        vlSelf->hmmm__DOT__alu_src_a = 0U;
        vlSelf->hmmm__DOT__alu_src_b = 0U;
        vlSelf->hmmm__DOT__alu_op = 4U;
        vlSelf->hmmm__DOT__rf_src_x = 3U;
        vlSelf->hmmm__DOT__rf_write_en_x = 1U;
    }
    vlSelf->hmmm__DOT__datapath__DOT__pc_next = ((IData)(vlSelf->reset)
                                                  ? 0U
                                                  : 
                                                 (0xffU 
                                                  & ((((IData)(vlSelf->hmmm__DOT__pc_src) 
                                                       >> 1U) 
                                                      & ((0x15U 
                                                          == vlSelf->hmmm__DOT__instruction_type)
                                                          ? 
                                                         (0U 
                                                          == (IData)(vlSelf->hmmm__DOT__datapath__DOT__rf_read_data_x))
                                                          : 
                                                         ((0x16U 
                                                           == vlSelf->hmmm__DOT__instruction_type)
                                                           ? 
                                                          (0U 
                                                           != (IData)(vlSelf->hmmm__DOT__datapath__DOT__rf_read_data_x))
                                                           : 
                                                          ((0x17U 
                                                            == vlSelf->hmmm__DOT__instruction_type)
                                                            ? 
                                                           ((~ (IData)(vlSelf->hmmm__DOT__datapath__DOT__sign)) 
                                                            & (0U 
                                                               != (IData)(vlSelf->hmmm__DOT__datapath__DOT__rf_read_data_x)))
                                                            : 
                                                           ((0x18U 
                                                             != vlSelf->hmmm__DOT__instruction_type) 
                                                            | (IData)(vlSelf->hmmm__DOT__datapath__DOT__sign))))))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->hmmm__DOT__pc_src))
                                                       ? 
                                                      ((0U 
                                                        == 
                                                        (0xfU 
                                                         & ((IData)(vlSelf->hmmm__DOT__instruction) 
                                                            >> 8U)))
                                                        ? 0U
                                                        : (IData)(vlSelf->__VdfgTmp_h1fe3baef__0))
                                                       : 
                                                      ((IData)(vlSelf->hmmm__DOT__instruction) 
                                                       << 1U))
                                                      : 
                                                     ((IData)(2U) 
                                                      + (IData)(vlSelf->hmmm__DOT__datapath__DOT__pc)))));
    vlSelf->hmmm__DOT__datapath__DOT__alu_input_a = 
        ((IData)(vlSelf->hmmm__DOT__alu_src_a) ? (IData)(vlSelf->hmmm__DOT__datapath__DOT__rf_read_data_x)
          : (IData)(vlSelf->hmmm__DOT__datapath__DOT__rf_read_data_y));
    vlSelf->hmmm__DOT__datapath__DOT__alu_input_b = 
        ((2U & (IData)(vlSelf->hmmm__DOT__alu_src_b))
          ? ((1U & (IData)(vlSelf->hmmm__DOT__alu_src_b))
              ? 1U : 0U) : ((1U & (IData)(vlSelf->hmmm__DOT__alu_src_b))
                             ? (IData)(vlSelf->hmmm__DOT__datapath__DOT__imm_ext)
                             : ((0U == (0xfU & (IData)(vlSelf->hmmm__DOT__instruction)))
                                 ? 0U : vlSelf->hmmm__DOT__datapath__DOT__rf__DOT__registers
                                [(0xfU & (IData)(vlSelf->hmmm__DOT__instruction))])));
    if ((0U == vlSelf->hmmm__DOT__alu_op)) {
        vlSelf->hmmm__DOT__datapath__DOT__alu_result 
            = (0xffffU & ((IData)(vlSelf->hmmm__DOT__datapath__DOT__alu_input_a) 
                          + (IData)(vlSelf->hmmm__DOT__datapath__DOT__alu_input_b)));
    } else if ((1U == vlSelf->hmmm__DOT__alu_op)) {
        vlSelf->hmmm__DOT__datapath__DOT__alu_result 
            = (0xffffU & ((IData)(vlSelf->hmmm__DOT__datapath__DOT__alu_input_a) 
                          - (IData)(vlSelf->hmmm__DOT__datapath__DOT__alu_input_b)));
    } else if ((2U == vlSelf->hmmm__DOT__alu_op)) {
        vlSelf->hmmm__DOT__datapath__DOT__alu_result 
            = (0xffffU & ((IData)(vlSelf->hmmm__DOT__datapath__DOT__alu_input_a) 
                          * (IData)(vlSelf->hmmm__DOT__datapath__DOT__alu_input_b)));
    } else if ((3U == vlSelf->hmmm__DOT__alu_op)) {
        vlSelf->hmmm__DOT__datapath__DOT__alu_result 
            = (0xffffU & VL_DIV_III(16, (IData)(vlSelf->hmmm__DOT__datapath__DOT__alu_input_a), (IData)(vlSelf->hmmm__DOT__datapath__DOT__alu_input_b)));
    } else if ((4U == vlSelf->hmmm__DOT__alu_op)) {
        vlSelf->hmmm__DOT__datapath__DOT__alu_result 
            = (0xffffU & VL_MODDIV_III(16, (IData)(vlSelf->hmmm__DOT__datapath__DOT__alu_input_a), (IData)(vlSelf->hmmm__DOT__datapath__DOT__alu_input_b)));
    }
    if ((0U == (IData)(vlSelf->hmmm__DOT__mem_adr_src))) {
        vlSelf->hmmm__DOT__datapath__DOT__mem_data_address 
            = (0xffU & (IData)(vlSelf->hmmm__DOT__instruction));
    } else if ((1U == (IData)(vlSelf->hmmm__DOT__mem_adr_src))) {
        vlSelf->hmmm__DOT__datapath__DOT__mem_data_address 
            = (0xffU & (IData)(vlSelf->hmmm__DOT__datapath__DOT__rf_read_data_y));
    } else if ((2U == (IData)(vlSelf->hmmm__DOT__mem_adr_src))) {
        vlSelf->hmmm__DOT__datapath__DOT__mem_data_address 
            = (0xffU & (IData)(vlSelf->hmmm__DOT__datapath__DOT__alu_result));
    }
}

VL_ATTR_COLD void Vhmmm___024root___eval_stl(Vhmmm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhmmm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhmmm___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vhmmm___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhmmm___024root___dump_triggers__ico(Vhmmm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhmmm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhmmm___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhmmm___024root___dump_triggers__act(Vhmmm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhmmm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhmmm___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhmmm___024root___dump_triggers__nba(Vhmmm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhmmm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhmmm___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vhmmm___024root___ctor_var_reset(Vhmmm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhmmm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhmmm___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->hmmm__DOT__instruction = VL_RAND_RESET_I(16);
    vlSelf->hmmm__DOT__rf_src_x = VL_RAND_RESET_I(2);
    vlSelf->hmmm__DOT__pc_src = VL_RAND_RESET_I(2);
    vlSelf->hmmm__DOT__mem_adr_src = VL_RAND_RESET_I(2);
    vlSelf->hmmm__DOT__alu_src_b = VL_RAND_RESET_I(2);
    vlSelf->hmmm__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->hmmm__DOT__rf_write_en_x = VL_RAND_RESET_I(1);
    vlSelf->hmmm__DOT__rf_write_en_y = VL_RAND_RESET_I(1);
    vlSelf->hmmm__DOT__mem_data_src = VL_RAND_RESET_I(1);
    vlSelf->hmmm__DOT__alu_src_a = VL_RAND_RESET_I(1);
    vlSelf->hmmm__DOT__alu_op = 0;
    vlSelf->hmmm__DOT__instruction_type = 0;
    vlSelf->hmmm__DOT__datapath__DOT__pc = VL_RAND_RESET_I(8);
    vlSelf->hmmm__DOT__datapath__DOT__pc_next = VL_RAND_RESET_I(8);
    vlSelf->hmmm__DOT__datapath__DOT__mem_data_address = VL_RAND_RESET_I(8);
    vlSelf->hmmm__DOT__datapath__DOT__result = VL_RAND_RESET_I(16);
    vlSelf->hmmm__DOT__datapath__DOT__alu_result = VL_RAND_RESET_I(16);
    vlSelf->hmmm__DOT__datapath__DOT__alu_input_a = VL_RAND_RESET_I(16);
    vlSelf->hmmm__DOT__datapath__DOT__alu_input_b = VL_RAND_RESET_I(16);
    vlSelf->hmmm__DOT__datapath__DOT__rf_read_data_x = VL_RAND_RESET_I(16);
    vlSelf->hmmm__DOT__datapath__DOT__rf_read_data_y = VL_RAND_RESET_I(16);
    vlSelf->hmmm__DOT__datapath__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->hmmm__DOT__datapath__DOT__imm_ext = VL_RAND_RESET_I(16);
    vlSelf->hmmm__DOT__datapath__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->hmmm__DOT__datapath__DOT__unnamedblk2__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->hmmm__DOT__datapath__DOT__mem__DOT__RAM[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->hmmm__DOT__datapath__DOT__rf__DOT__registers[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->__VdfgTmp_h1fe3baef__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
