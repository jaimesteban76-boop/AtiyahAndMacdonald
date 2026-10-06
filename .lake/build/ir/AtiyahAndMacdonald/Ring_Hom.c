// Lean compiler output
// Module: AtiyahAndMacdonald.Ring_Hom
// Imports: public import Init public meta import Init public import AtiyahAndMacdonald.Base
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
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_instCoeFunRingHomForall___redArg___lam__0(lean_object*, lean_object*);
static const lean_closure_object lp_AtiyahAndMacdonald_instCoeFunRingHomForall___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_AtiyahAndMacdonald_instCoeFunRingHomForall___redArg___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_AtiyahAndMacdonald_instCoeFunRingHomForall___redArg___closed__0 = (const lean_object*)&lp_AtiyahAndMacdonald_instCoeFunRingHomForall___redArg___closed__0_value;
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_instCoeFunRingHomForall___redArg();
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_instCoeFunRingHomForall___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_instCoeFunRingHomForall(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_instCoeFunRingHomForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_instCoeFunRingHomForall___redArg___lam__0(lean_object* v_f_1_, lean_object* v___y_2_){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_apply_1(v_f_1_, v___y_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_instCoeFunRingHomForall___redArg(){
_start:
{
lean_object* v___f_6_; 
v___f_6_ = ((lean_object*)(lp_AtiyahAndMacdonald_instCoeFunRingHomForall___redArg___closed__0));
return v___f_6_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_instCoeFunRingHomForall___redArg___boxed(lean_object* v___dummy_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = lp_AtiyahAndMacdonald_instCoeFunRingHomForall___redArg();
return v_res_8_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_instCoeFunRingHomForall(lean_object* v_A_9_, lean_object* v_B_10_, lean_object* v_inst_11_, lean_object* v_inst_12_){
_start:
{
lean_object* v___f_13_; 
v___f_13_ = ((lean_object*)(lp_AtiyahAndMacdonald_instCoeFunRingHomForall___redArg___closed__0));
return v___f_13_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_instCoeFunRingHomForall___boxed(lean_object* v_A_14_, lean_object* v_B_15_, lean_object* v_inst_16_, lean_object* v_inst_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = lp_AtiyahAndMacdonald_instCoeFunRingHomForall(v_A_14_, v_B_15_, v_inst_16_, v_inst_17_);
lean_dec_ref(v_inst_17_);
lean_dec_ref(v_inst_16_);
return v_res_18_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_AtiyahAndMacdonald_AtiyahAndMacdonald_Base(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_AtiyahAndMacdonald_AtiyahAndMacdonald_Ring__Hom(uint8_t builtin) {
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
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
