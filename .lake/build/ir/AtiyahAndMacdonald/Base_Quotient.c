// Lean compiler output
// Module: AtiyahAndMacdonald.Base_Quotient
// Imports: public import Init public meta import Init public import AtiyahAndMacdonald.Base public import AtiyahAndMacdonald.Ring_Hom
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
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_ideal__setoid___redArg();
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_ideal__setoid___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_ideal__setoid(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_ideal__setoid___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_quotient__add___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_quotient__add(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_quotient__mul___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_quotient__mul(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_instCommutativeRingQuotientRing___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_instCommutativeRingQuotientRing___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_instCommutativeRingQuotientRing(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_quotient__pi__hom___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_quotient__pi__hom___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object lp_AtiyahAndMacdonald_quotient__pi__hom___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_AtiyahAndMacdonald_quotient__pi__hom___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_AtiyahAndMacdonald_quotient__pi__hom___redArg___closed__0 = (const lean_object*)&lp_AtiyahAndMacdonald_quotient__pi__hom___redArg___closed__0_value;
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_quotient__pi__hom___redArg();
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_quotient__pi__hom___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_quotient__pi__hom(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_quotient__pi__hom___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_phi___redArg();
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_phi___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_phi(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_phi___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_ideal__setoid___redArg(){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_box(0);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_ideal__setoid___redArg___boxed(lean_object* v___dummy_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = lp_AtiyahAndMacdonald_ideal__setoid___redArg();
return v_res_4_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_ideal__setoid(lean_object* v_R_5_, lean_object* v_inst_6_, lean_object* v_I_7_, lean_object* v_hI_8_){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = lean_box(0);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_ideal__setoid___boxed(lean_object* v_R_10_, lean_object* v_inst_11_, lean_object* v_I_12_, lean_object* v_hI_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = lp_AtiyahAndMacdonald_ideal__setoid(v_R_10_, v_inst_11_, v_I_12_, v_hI_13_);
lean_dec_ref(v_inst_11_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_quotient__add___redArg(lean_object* v_inst_15_, lean_object* v_a_16_, lean_object* v_b_17_){
_start:
{
lean_object* v_toAdd_18_; lean_object* v___x_19_; 
v_toAdd_18_ = lean_ctor_get(v_inst_15_, 0);
lean_inc(v_toAdd_18_);
lean_dec_ref(v_inst_15_);
v___x_19_ = lean_apply_2(v_toAdd_18_, v_a_16_, v_b_17_);
return v___x_19_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_quotient__add(lean_object* v_R_20_, lean_object* v_inst_21_, lean_object* v_I_22_, lean_object* v_hI_23_, lean_object* v_a_24_, lean_object* v_b_25_){
_start:
{
lean_object* v___x_26_; 
v___x_26_ = lp_AtiyahAndMacdonald_quotient__add___redArg(v_inst_21_, v_a_24_, v_b_25_);
return v___x_26_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_quotient__mul___redArg(lean_object* v_inst_27_, lean_object* v_a_28_, lean_object* v_b_29_){
_start:
{
lean_object* v_toMul_30_; lean_object* v___x_31_; 
v_toMul_30_ = lean_ctor_get(v_inst_27_, 1);
lean_inc(v_toMul_30_);
lean_dec_ref(v_inst_27_);
v___x_31_ = lean_apply_2(v_toMul_30_, v_a_28_, v_b_29_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_quotient__mul(lean_object* v_R_32_, lean_object* v_inst_33_, lean_object* v_I_34_, lean_object* v_hI_35_, lean_object* v_a_36_, lean_object* v_b_37_){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = lp_AtiyahAndMacdonald_quotient__mul___redArg(v_inst_33_, v_a_36_, v_b_37_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_instCommutativeRingQuotientRing___redArg___lam__0(lean_object* v_toNeg_39_, lean_object* v_a_40_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = lean_apply_1(v_toNeg_39_, v_a_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_instCommutativeRingQuotientRing___redArg(lean_object* v_inst_42_){
_start:
{
lean_object* v_toZero_43_; lean_object* v_toOne_44_; lean_object* v_toNeg_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___f_48_; lean_object* v___x_49_; 
v_toZero_43_ = lean_ctor_get(v_inst_42_, 2);
lean_inc(v_toZero_43_);
v_toOne_44_ = lean_ctor_get(v_inst_42_, 3);
lean_inc(v_toOne_44_);
v_toNeg_45_ = lean_ctor_get(v_inst_42_, 4);
lean_inc(v_toNeg_45_);
lean_inc_ref(v_inst_42_);
v___x_46_ = lean_alloc_closure((void*)(lp_AtiyahAndMacdonald_quotient__add), 6, 4);
lean_closure_set(v___x_46_, 0, lean_box(0));
lean_closure_set(v___x_46_, 1, v_inst_42_);
lean_closure_set(v___x_46_, 2, lean_box(0));
lean_closure_set(v___x_46_, 3, lean_box(0));
v___x_47_ = lean_alloc_closure((void*)(lp_AtiyahAndMacdonald_quotient__mul), 6, 4);
lean_closure_set(v___x_47_, 0, lean_box(0));
lean_closure_set(v___x_47_, 1, v_inst_42_);
lean_closure_set(v___x_47_, 2, lean_box(0));
lean_closure_set(v___x_47_, 3, lean_box(0));
v___f_48_ = lean_alloc_closure((void*)(lp_AtiyahAndMacdonald_instCommutativeRingQuotientRing___redArg___lam__0), 2, 1);
lean_closure_set(v___f_48_, 0, v_toNeg_45_);
v___x_49_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_49_, 0, v___x_46_);
lean_ctor_set(v___x_49_, 1, v___x_47_);
lean_ctor_set(v___x_49_, 2, v_toZero_43_);
lean_ctor_set(v___x_49_, 3, v_toOne_44_);
lean_ctor_set(v___x_49_, 4, v___f_48_);
return v___x_49_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_instCommutativeRingQuotientRing(lean_object* v_R_50_, lean_object* v_inst_51_, lean_object* v_I_52_, lean_object* v_hI_53_){
_start:
{
lean_object* v___x_54_; 
v___x_54_ = lp_AtiyahAndMacdonald_instCommutativeRingQuotientRing___redArg(v_inst_51_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_quotient__pi__hom___redArg___lam__0(lean_object* v_x_55_){
_start:
{
lean_inc(v_x_55_);
return v_x_55_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_quotient__pi__hom___redArg___lam__0___boxed(lean_object* v_x_56_){
_start:
{
lean_object* v_res_57_; 
v_res_57_ = lp_AtiyahAndMacdonald_quotient__pi__hom___redArg___lam__0(v_x_56_);
lean_dec(v_x_56_);
return v_res_57_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_quotient__pi__hom___redArg(){
_start:
{
lean_object* v___f_60_; 
v___f_60_ = ((lean_object*)(lp_AtiyahAndMacdonald_quotient__pi__hom___redArg___closed__0));
return v___f_60_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_quotient__pi__hom___redArg___boxed(lean_object* v___dummy_61_){
_start:
{
lean_object* v_res_62_; 
v_res_62_ = lp_AtiyahAndMacdonald_quotient__pi__hom___redArg();
return v_res_62_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_quotient__pi__hom(lean_object* v_R_63_, lean_object* v_inst_64_, lean_object* v_I_65_, lean_object* v_hI_66_){
_start:
{
lean_object* v___f_67_; 
v___f_67_ = ((lean_object*)(lp_AtiyahAndMacdonald_quotient__pi__hom___redArg___closed__0));
return v___f_67_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_quotient__pi__hom___boxed(lean_object* v_R_68_, lean_object* v_inst_69_, lean_object* v_I_70_, lean_object* v_hI_71_){
_start:
{
lean_object* v_res_72_; 
v_res_72_ = lp_AtiyahAndMacdonald_quotient__pi__hom(v_R_68_, v_inst_69_, v_I_70_, v_hI_71_);
lean_dec_ref(v_inst_69_);
return v_res_72_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_phi___redArg(){
_start:
{
lean_object* v___x_74_; 
v___x_74_ = lean_box(0);
return v___x_74_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_phi___redArg___boxed(lean_object* v___dummy_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = lp_AtiyahAndMacdonald_phi___redArg();
return v_res_76_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_phi(lean_object* v_R_77_, lean_object* v_inst_78_, lean_object* v_I_79_, lean_object* v_hI_80_, lean_object* v_J_81_){
_start:
{
lean_object* v___x_82_; 
v___x_82_ = lean_box(0);
return v___x_82_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_phi___boxed(lean_object* v_R_83_, lean_object* v_inst_84_, lean_object* v_I_85_, lean_object* v_hI_86_, lean_object* v_J_87_){
_start:
{
lean_object* v_res_88_; 
v_res_88_ = lp_AtiyahAndMacdonald_phi(v_R_83_, v_inst_84_, v_I_85_, v_hI_86_, v_J_87_);
lean_dec_ref(v_inst_84_);
return v_res_88_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_AtiyahAndMacdonald_AtiyahAndMacdonald_Base(uint8_t builtin);
lean_object* initialize_AtiyahAndMacdonald_AtiyahAndMacdonald_Ring__Hom(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_AtiyahAndMacdonald_AtiyahAndMacdonald_Base__Quotient(uint8_t builtin) {
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
res = initialize_AtiyahAndMacdonald_AtiyahAndMacdonald_Ring__Hom(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
