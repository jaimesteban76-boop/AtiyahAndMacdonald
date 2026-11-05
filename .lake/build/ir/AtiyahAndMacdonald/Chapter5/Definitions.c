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
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_eval__hom___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_eval__hom___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_eval__hom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_eval__hom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_eval__hom___redArg___lam__0(lean_object* v_coeff_1_, lean_object* v_f_2_, lean_object* v_inst_3_, lean_object* v_x_4_, lean_object* v_toMul_5_, lean_object* v_i_6_){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; 
lean_inc(v_i_6_);
v___x_7_ = lean_apply_1(v_coeff_1_, v_i_6_);
v___x_8_ = lean_apply_1(v_f_2_, v___x_7_);
v___x_9_ = lp_AtiyahAndMacdonald_npow___redArg(v_inst_3_, v_x_4_, v_i_6_);
lean_dec(v_i_6_);
v___x_10_ = lean_apply_2(v_toMul_5_, v___x_8_, v___x_9_);
return v___x_10_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_eval__hom___redArg(lean_object* v_inst_11_, lean_object* v_f_12_, lean_object* v_p_13_, lean_object* v_x_14_){
_start:
{
lean_object* v_toMul_15_; lean_object* v_coeff_16_; lean_object* v_bound_17_; lean_object* v___f_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; 
v_toMul_15_ = lean_ctor_get(v_inst_11_, 1);
v_coeff_16_ = lean_ctor_get(v_p_13_, 0);
lean_inc(v_coeff_16_);
v_bound_17_ = lean_ctor_get(v_p_13_, 1);
lean_inc(v_bound_17_);
lean_dec_ref(v_p_13_);
lean_inc(v_toMul_15_);
lean_inc_ref(v_inst_11_);
v___f_18_ = lean_alloc_closure((void*)(lp_AtiyahAndMacdonald_eval__hom___redArg___lam__0), 6, 5);
lean_closure_set(v___f_18_, 0, v_coeff_16_);
lean_closure_set(v___f_18_, 1, v_f_12_);
lean_closure_set(v___f_18_, 2, v_inst_11_);
lean_closure_set(v___f_18_, 3, v_x_14_);
lean_closure_set(v___f_18_, 4, v_toMul_15_);
v___x_19_ = lean_unsigned_to_nat(1u);
v___x_20_ = lean_nat_add(v_bound_17_, v___x_19_);
lean_dec(v_bound_17_);
v___x_21_ = lp_AtiyahAndMacdonald_sum__range___redArg(v_inst_11_, v___f_18_, v___x_20_);
lean_dec(v___x_20_);
return v___x_21_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_eval__hom(lean_object* v_A_22_, lean_object* v_B_23_, lean_object* v_inst_24_, lean_object* v_inst_25_, lean_object* v_f_26_, lean_object* v_p_27_, lean_object* v_x_28_){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = lp_AtiyahAndMacdonald_eval__hom___redArg(v_inst_25_, v_f_26_, v_p_27_, v_x_28_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_eval__hom___boxed(lean_object* v_A_30_, lean_object* v_B_31_, lean_object* v_inst_32_, lean_object* v_inst_33_, lean_object* v_f_34_, lean_object* v_p_35_, lean_object* v_x_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = lp_AtiyahAndMacdonald_eval__hom(v_A_30_, v_B_31_, v_inst_32_, v_inst_33_, v_f_34_, v_p_35_, v_x_36_);
lean_dec_ref(v_inst_32_);
return v_res_37_;
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
