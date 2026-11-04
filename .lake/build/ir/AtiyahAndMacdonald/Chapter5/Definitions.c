// Lean compiler output
// Module: AtiyahAndMacdonald.Chapter5.Definitions
// Imports: public import Init public meta import Init public import AtiyahAndMacdonald.Ring.PolRings public import AtiyahAndMacdonald.Module.Base public import AtiyahAndMacdonald.Ring.Ring_Hom
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* lp_AtiyahAndMacdonald_npow___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lp_AtiyahAndMacdonald_sum__range___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_eval__subring___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_eval__subring___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_eval__subring(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_eval__subring___redArg___lam__0(lean_object* v_coeff_1_, lean_object* v_inst_2_, lean_object* v_x_3_, lean_object* v_toMul_4_, lean_object* v_i_5_){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; 
lean_inc(v_i_5_);
v___x_6_ = lean_apply_1(v_coeff_1_, v_i_5_);
v___x_7_ = lp_AtiyahAndMacdonald_npow___redArg(v_inst_2_, v_x_3_, v_i_5_);
lean_dec(v_i_5_);
v___x_8_ = lean_apply_2(v_toMul_4_, v___x_6_, v___x_7_);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_eval__subring___redArg(lean_object* v_inst_9_, lean_object* v_f_10_, lean_object* v_x_11_){
_start:
{
lean_object* v_toMul_12_; lean_object* v_coeff_13_; lean_object* v_bound_14_; lean_object* v___f_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
v_toMul_12_ = lean_ctor_get(v_inst_9_, 1);
v_coeff_13_ = lean_ctor_get(v_f_10_, 0);
lean_inc(v_coeff_13_);
v_bound_14_ = lean_ctor_get(v_f_10_, 1);
lean_inc(v_bound_14_);
lean_dec_ref(v_f_10_);
lean_inc(v_toMul_12_);
lean_inc_ref(v_inst_9_);
v___f_15_ = lean_alloc_closure((void*)(lp_AtiyahAndMacdonald_eval__subring___redArg___lam__0), 5, 4);
lean_closure_set(v___f_15_, 0, v_coeff_13_);
lean_closure_set(v___f_15_, 1, v_inst_9_);
lean_closure_set(v___f_15_, 2, v_x_11_);
lean_closure_set(v___f_15_, 3, v_toMul_12_);
v___x_16_ = lean_unsigned_to_nat(1u);
v___x_17_ = lean_nat_add(v_bound_14_, v___x_16_);
lean_dec(v_bound_14_);
v___x_18_ = lp_AtiyahAndMacdonald_sum__range___redArg(v_inst_9_, v___f_15_, v___x_17_);
lean_dec(v___x_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_eval__subring(lean_object* v_B_19_, lean_object* v_inst_20_, lean_object* v_A_21_, lean_object* v_f_22_, lean_object* v_x_23_){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = lp_AtiyahAndMacdonald_eval__subring___redArg(v_inst_20_, v_f_22_, v_x_23_);
return v___x_24_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_AtiyahAndMacdonald_AtiyahAndMacdonald_Ring_PolRings(uint8_t builtin);
lean_object* initialize_AtiyahAndMacdonald_AtiyahAndMacdonald_Module_Base(uint8_t builtin);
lean_object* initialize_AtiyahAndMacdonald_AtiyahAndMacdonald_Ring_Ring__Hom(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_AtiyahAndMacdonald_AtiyahAndMacdonald_Chapter5_Definitions(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
lean_initialize();
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_AtiyahAndMacdonald_AtiyahAndMacdonald_Ring_PolRings(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_AtiyahAndMacdonald_AtiyahAndMacdonald_Module_Base(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_AtiyahAndMacdonald_AtiyahAndMacdonald_Ring_Ring__Hom(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
