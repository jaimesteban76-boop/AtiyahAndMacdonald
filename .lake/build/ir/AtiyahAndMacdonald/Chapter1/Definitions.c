// Lean compiler output
// Module: AtiyahAndMacdonald.Chapter1.Definitions
// Imports: public import Init public meta import Init public import AtiyahAndMacdonald.Base public import AtiyahAndMacdonald.Base_Quotient
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
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_phi__prod___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_phi__prod___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_phi__prod(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_phi__prod___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_phi__prod___redArg(lean_object* v_x_1_){
_start:
{
lean_inc(v_x_1_);
return v_x_1_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_phi__prod___redArg___boxed(lean_object* v_x_2_){
_start:
{
lean_object* v_res_3_; 
v_res_3_ = lp_AtiyahAndMacdonald_phi__prod___redArg(v_x_2_);
lean_dec(v_x_2_);
return v_res_3_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_phi__prod(lean_object* v_R_4_, lean_object* v_inst_5_, lean_object* v_P_6_, lean_object* v_n_7_, lean_object* v_hP_8_, lean_object* v_x_9_, lean_object* v_i_10_, lean_object* v_hi_11_){
_start:
{
lean_inc(v_x_9_);
return v_x_9_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_phi__prod___boxed(lean_object* v_R_12_, lean_object* v_inst_13_, lean_object* v_P_14_, lean_object* v_n_15_, lean_object* v_hP_16_, lean_object* v_x_17_, lean_object* v_i_18_, lean_object* v_hi_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = lp_AtiyahAndMacdonald_phi__prod(v_R_12_, v_inst_13_, v_P_14_, v_n_15_, v_hP_16_, v_x_17_, v_i_18_, v_hi_19_);
lean_dec(v_i_18_);
lean_dec(v_x_17_);
lean_dec(v_n_15_);
lean_dec_ref(v_inst_13_);
return v_res_20_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_AtiyahAndMacdonald_AtiyahAndMacdonald_Base(uint8_t builtin);
lean_object* initialize_AtiyahAndMacdonald_AtiyahAndMacdonald_Base__Quotient(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_AtiyahAndMacdonald_AtiyahAndMacdonald_Chapter1_Definitions(uint8_t builtin) {
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
res = initialize_AtiyahAndMacdonald_AtiyahAndMacdonald_Base(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_AtiyahAndMacdonald_AtiyahAndMacdonald_Base__Quotient(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
