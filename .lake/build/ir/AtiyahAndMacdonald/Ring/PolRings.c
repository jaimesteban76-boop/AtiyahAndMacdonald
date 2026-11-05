// Lean compiler output
// Module: AtiyahAndMacdonald.Ring.PolRings
// Imports: public import Init public meta import Init public import AtiyahAndMacdonald.Ring.Base public import AtiyahAndMacdonald.Ring.Ring_Hom public import AtiyahAndMacdonald.Nat.Nat_Stuff
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
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lp_AtiyahAndMacdonald_npow___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_add__poly___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_add__poly___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_add__poly(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_sum__range___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_sum__range___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_sum__range(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_sum__range___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_zero__poly___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_zero__poly___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_zero__poly___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_zero__poly(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_one__poly___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_one__poly___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_one__poly___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_one__poly(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_neg__poly___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_neg__poly___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_neg__poly(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_mul__poly___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_mul__poly___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_mul__poly___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_mul__poly___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_mul__poly(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_polynomial__is__ring___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_polynomial__is__ring(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_eval___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_eval___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_eval(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_instCoeFunPolynomialForall___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_instCoeFunPolynomialForall___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_instCoeFunPolynomialForall(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_eval__hom___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_eval__hom___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_eval__hom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_eval__hom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_add__poly___redArg___lam__0(lean_object* v_coeff_1_, lean_object* v_coeff_2_, lean_object* v_toAdd_3_, lean_object* v_n_4_){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; 
lean_inc(v_n_4_);
v___x_5_ = lean_apply_1(v_coeff_1_, v_n_4_);
v___x_6_ = lean_apply_1(v_coeff_2_, v_n_4_);
v___x_7_ = lean_apply_2(v_toAdd_3_, v___x_5_, v___x_6_);
return v___x_7_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_add__poly___redArg(lean_object* v_inst_8_, lean_object* v_f_9_, lean_object* v_g_10_){
_start:
{
lean_object* v_toAdd_11_; lean_object* v_coeff_12_; lean_object* v_bound_13_; lean_object* v_coeff_14_; lean_object* v_bound_15_; lean_object* v___x_17_; uint8_t v_isShared_18_; uint8_t v_isSharedCheck_27_; 
v_toAdd_11_ = lean_ctor_get(v_inst_8_, 0);
lean_inc(v_toAdd_11_);
lean_dec_ref(v_inst_8_);
v_coeff_12_ = lean_ctor_get(v_f_9_, 0);
lean_inc(v_coeff_12_);
v_bound_13_ = lean_ctor_get(v_f_9_, 1);
lean_inc(v_bound_13_);
lean_dec_ref(v_f_9_);
v_coeff_14_ = lean_ctor_get(v_g_10_, 0);
v_bound_15_ = lean_ctor_get(v_g_10_, 1);
v_isSharedCheck_27_ = !lean_is_exclusive(v_g_10_);
if (v_isSharedCheck_27_ == 0)
{
v___x_17_ = v_g_10_;
v_isShared_18_ = v_isSharedCheck_27_;
goto v_resetjp_16_;
}
else
{
lean_inc(v_bound_15_);
lean_inc(v_coeff_14_);
lean_dec(v_g_10_);
v___x_17_ = lean_box(0);
v_isShared_18_ = v_isSharedCheck_27_;
goto v_resetjp_16_;
}
v_resetjp_16_:
{
lean_object* v___f_19_; uint8_t v___x_20_; 
v___f_19_ = lean_alloc_closure((void*)(lp_AtiyahAndMacdonald_add__poly___redArg___lam__0), 4, 3);
lean_closure_set(v___f_19_, 0, v_coeff_12_);
lean_closure_set(v___f_19_, 1, v_coeff_14_);
lean_closure_set(v___f_19_, 2, v_toAdd_11_);
v___x_20_ = lean_nat_dec_le(v_bound_13_, v_bound_15_);
if (v___x_20_ == 0)
{
lean_object* v___x_22_; 
lean_dec(v_bound_15_);
if (v_isShared_18_ == 0)
{
lean_ctor_set(v___x_17_, 1, v_bound_13_);
lean_ctor_set(v___x_17_, 0, v___f_19_);
v___x_22_ = v___x_17_;
goto v_reusejp_21_;
}
else
{
lean_object* v_reuseFailAlloc_23_; 
v_reuseFailAlloc_23_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_23_, 0, v___f_19_);
lean_ctor_set(v_reuseFailAlloc_23_, 1, v_bound_13_);
v___x_22_ = v_reuseFailAlloc_23_;
goto v_reusejp_21_;
}
v_reusejp_21_:
{
return v___x_22_;
}
}
else
{
lean_object* v___x_25_; 
lean_dec(v_bound_13_);
if (v_isShared_18_ == 0)
{
lean_ctor_set(v___x_17_, 0, v___f_19_);
v___x_25_ = v___x_17_;
goto v_reusejp_24_;
}
else
{
lean_object* v_reuseFailAlloc_26_; 
v_reuseFailAlloc_26_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_26_, 0, v___f_19_);
lean_ctor_set(v_reuseFailAlloc_26_, 1, v_bound_15_);
v___x_25_ = v_reuseFailAlloc_26_;
goto v_reusejp_24_;
}
v_reusejp_24_:
{
return v___x_25_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_add__poly(lean_object* v_R_28_, lean_object* v_inst_29_, lean_object* v_f_30_, lean_object* v_g_31_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = lp_AtiyahAndMacdonald_add__poly___redArg(v_inst_29_, v_f_30_, v_g_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_sum__range___redArg(lean_object* v_inst_33_, lean_object* v_f_34_, lean_object* v_x_35_){
_start:
{
lean_object* v_toAdd_36_; lean_object* v_toZero_37_; lean_object* v_zero_38_; uint8_t v_isZero_39_; 
v_toAdd_36_ = lean_ctor_get(v_inst_33_, 0);
lean_inc(v_toAdd_36_);
v_toZero_37_ = lean_ctor_get(v_inst_33_, 2);
v_zero_38_ = lean_unsigned_to_nat(0u);
v_isZero_39_ = lean_nat_dec_eq(v_x_35_, v_zero_38_);
if (v_isZero_39_ == 1)
{
lean_inc(v_toZero_37_);
lean_dec(v_toAdd_36_);
lean_dec(v_f_34_);
lean_dec_ref(v_inst_33_);
return v_toZero_37_;
}
else
{
lean_object* v_one_40_; lean_object* v_n_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v_one_40_ = lean_unsigned_to_nat(1u);
v_n_41_ = lean_nat_sub(v_x_35_, v_one_40_);
lean_inc(v_f_34_);
lean_inc(v_n_41_);
v___x_42_ = lean_apply_1(v_f_34_, v_n_41_);
v___x_43_ = lp_AtiyahAndMacdonald_sum__range___redArg(v_inst_33_, v_f_34_, v_n_41_);
lean_dec(v_n_41_);
v___x_44_ = lean_apply_2(v_toAdd_36_, v___x_42_, v___x_43_);
return v___x_44_;
}
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_sum__range___redArg___boxed(lean_object* v_inst_45_, lean_object* v_f_46_, lean_object* v_x_47_){
_start:
{
lean_object* v_res_48_; 
v_res_48_ = lp_AtiyahAndMacdonald_sum__range___redArg(v_inst_45_, v_f_46_, v_x_47_);
lean_dec(v_x_47_);
return v_res_48_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_sum__range(lean_object* v_R_49_, lean_object* v_inst_50_, lean_object* v_f_51_, lean_object* v_x_52_){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = lp_AtiyahAndMacdonald_sum__range___redArg(v_inst_50_, v_f_51_, v_x_52_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_sum__range___boxed(lean_object* v_R_54_, lean_object* v_inst_55_, lean_object* v_f_56_, lean_object* v_x_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = lp_AtiyahAndMacdonald_sum__range(v_R_54_, v_inst_55_, v_f_56_, v_x_57_);
lean_dec(v_x_57_);
return v_res_58_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_zero__poly___redArg___lam__0(lean_object* v_toZero_59_, lean_object* v_x_60_){
_start:
{
lean_inc(v_toZero_59_);
return v_toZero_59_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_zero__poly___redArg___lam__0___boxed(lean_object* v_toZero_61_, lean_object* v_x_62_){
_start:
{
lean_object* v_res_63_; 
v_res_63_ = lp_AtiyahAndMacdonald_zero__poly___redArg___lam__0(v_toZero_61_, v_x_62_);
lean_dec(v_x_62_);
lean_dec(v_toZero_61_);
return v_res_63_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_zero__poly___redArg(lean_object* v_inst_64_){
_start:
{
lean_object* v_toZero_65_; lean_object* v___f_66_; lean_object* v___x_67_; lean_object* v___x_68_; 
v_toZero_65_ = lean_ctor_get(v_inst_64_, 2);
lean_inc(v_toZero_65_);
lean_dec_ref(v_inst_64_);
v___f_66_ = lean_alloc_closure((void*)(lp_AtiyahAndMacdonald_zero__poly___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_66_, 0, v_toZero_65_);
v___x_67_ = lean_unsigned_to_nat(0u);
v___x_68_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_68_, 0, v___f_66_);
lean_ctor_set(v___x_68_, 1, v___x_67_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_zero__poly(lean_object* v_R_69_, lean_object* v_inst_70_){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = lp_AtiyahAndMacdonald_zero__poly___redArg(v_inst_70_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_one__poly___redArg___lam__0(lean_object* v_toOne_72_, lean_object* v_toZero_73_, lean_object* v_n_74_){
_start:
{
lean_object* v_zero_75_; uint8_t v_isZero_76_; 
v_zero_75_ = lean_unsigned_to_nat(0u);
v_isZero_76_ = lean_nat_dec_eq(v_n_74_, v_zero_75_);
if (v_isZero_76_ == 1)
{
lean_inc(v_toOne_72_);
return v_toOne_72_;
}
else
{
lean_inc(v_toZero_73_);
return v_toZero_73_;
}
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_one__poly___redArg___lam__0___boxed(lean_object* v_toOne_77_, lean_object* v_toZero_78_, lean_object* v_n_79_){
_start:
{
lean_object* v_res_80_; 
v_res_80_ = lp_AtiyahAndMacdonald_one__poly___redArg___lam__0(v_toOne_77_, v_toZero_78_, v_n_79_);
lean_dec(v_n_79_);
lean_dec(v_toZero_78_);
lean_dec(v_toOne_77_);
return v_res_80_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_one__poly___redArg(lean_object* v_inst_81_){
_start:
{
lean_object* v_toZero_82_; lean_object* v_toOne_83_; lean_object* v___f_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v_toZero_82_ = lean_ctor_get(v_inst_81_, 2);
lean_inc(v_toZero_82_);
v_toOne_83_ = lean_ctor_get(v_inst_81_, 3);
lean_inc(v_toOne_83_);
lean_dec_ref(v_inst_81_);
v___f_84_ = lean_alloc_closure((void*)(lp_AtiyahAndMacdonald_one__poly___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_84_, 0, v_toOne_83_);
lean_closure_set(v___f_84_, 1, v_toZero_82_);
v___x_85_ = lean_unsigned_to_nat(0u);
v___x_86_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_86_, 0, v___f_84_);
lean_ctor_set(v___x_86_, 1, v___x_85_);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_one__poly(lean_object* v_R_87_, lean_object* v_inst_88_){
_start:
{
lean_object* v___x_89_; 
v___x_89_ = lp_AtiyahAndMacdonald_one__poly___redArg(v_inst_88_);
return v___x_89_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_neg__poly___redArg___lam__0(lean_object* v_coeff_90_, lean_object* v_toNeg_91_, lean_object* v_n_92_){
_start:
{
lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_93_ = lean_apply_1(v_coeff_90_, v_n_92_);
v___x_94_ = lean_apply_1(v_toNeg_91_, v___x_93_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_neg__poly___redArg(lean_object* v_inst_95_, lean_object* v_f_96_){
_start:
{
lean_object* v_toNeg_97_; lean_object* v_coeff_98_; lean_object* v_bound_99_; lean_object* v___x_101_; uint8_t v_isShared_102_; uint8_t v_isSharedCheck_107_; 
v_toNeg_97_ = lean_ctor_get(v_inst_95_, 4);
lean_inc(v_toNeg_97_);
lean_dec_ref(v_inst_95_);
v_coeff_98_ = lean_ctor_get(v_f_96_, 0);
v_bound_99_ = lean_ctor_get(v_f_96_, 1);
v_isSharedCheck_107_ = !lean_is_exclusive(v_f_96_);
if (v_isSharedCheck_107_ == 0)
{
v___x_101_ = v_f_96_;
v_isShared_102_ = v_isSharedCheck_107_;
goto v_resetjp_100_;
}
else
{
lean_inc(v_bound_99_);
lean_inc(v_coeff_98_);
lean_dec(v_f_96_);
v___x_101_ = lean_box(0);
v_isShared_102_ = v_isSharedCheck_107_;
goto v_resetjp_100_;
}
v_resetjp_100_:
{
lean_object* v___f_103_; lean_object* v___x_105_; 
v___f_103_ = lean_alloc_closure((void*)(lp_AtiyahAndMacdonald_neg__poly___redArg___lam__0), 3, 2);
lean_closure_set(v___f_103_, 0, v_coeff_98_);
lean_closure_set(v___f_103_, 1, v_toNeg_97_);
if (v_isShared_102_ == 0)
{
lean_ctor_set(v___x_101_, 0, v___f_103_);
v___x_105_ = v___x_101_;
goto v_reusejp_104_;
}
else
{
lean_object* v_reuseFailAlloc_106_; 
v_reuseFailAlloc_106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_106_, 0, v___f_103_);
lean_ctor_set(v_reuseFailAlloc_106_, 1, v_bound_99_);
v___x_105_ = v_reuseFailAlloc_106_;
goto v_reusejp_104_;
}
v_reusejp_104_:
{
return v___x_105_;
}
}
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_neg__poly(lean_object* v_R_108_, lean_object* v_inst_109_, lean_object* v_f_110_){
_start:
{
lean_object* v___x_111_; 
v___x_111_ = lp_AtiyahAndMacdonald_neg__poly___redArg(v_inst_109_, v_f_110_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_mul__poly___redArg___lam__0(lean_object* v_coeff_112_, lean_object* v_n_113_, lean_object* v_coeff_114_, lean_object* v_toMul_115_, lean_object* v_i_116_){
_start:
{
lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; 
lean_inc(v_i_116_);
v___x_117_ = lean_apply_1(v_coeff_112_, v_i_116_);
v___x_118_ = lean_nat_sub(v_n_113_, v_i_116_);
lean_dec(v_i_116_);
v___x_119_ = lean_apply_1(v_coeff_114_, v___x_118_);
v___x_120_ = lean_apply_2(v_toMul_115_, v___x_117_, v___x_119_);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_mul__poly___redArg___lam__0___boxed(lean_object* v_coeff_121_, lean_object* v_n_122_, lean_object* v_coeff_123_, lean_object* v_toMul_124_, lean_object* v_i_125_){
_start:
{
lean_object* v_res_126_; 
v_res_126_ = lp_AtiyahAndMacdonald_mul__poly___redArg___lam__0(v_coeff_121_, v_n_122_, v_coeff_123_, v_toMul_124_, v_i_125_);
lean_dec(v_n_122_);
return v_res_126_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_mul__poly___redArg___lam__1(lean_object* v_coeff_127_, lean_object* v_coeff_128_, lean_object* v_toMul_129_, lean_object* v_inst_130_, lean_object* v_n_131_){
_start:
{
lean_object* v___f_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; 
lean_inc(v_n_131_);
v___f_132_ = lean_alloc_closure((void*)(lp_AtiyahAndMacdonald_mul__poly___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_132_, 0, v_coeff_127_);
lean_closure_set(v___f_132_, 1, v_n_131_);
lean_closure_set(v___f_132_, 2, v_coeff_128_);
lean_closure_set(v___f_132_, 3, v_toMul_129_);
v___x_133_ = lean_unsigned_to_nat(1u);
v___x_134_ = lean_nat_add(v_n_131_, v___x_133_);
lean_dec(v_n_131_);
v___x_135_ = lp_AtiyahAndMacdonald_sum__range___redArg(v_inst_130_, v___f_132_, v___x_134_);
lean_dec(v___x_134_);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_mul__poly___redArg(lean_object* v_inst_136_, lean_object* v_f_137_, lean_object* v_g_138_){
_start:
{
lean_object* v_toMul_139_; lean_object* v_coeff_140_; lean_object* v_bound_141_; lean_object* v_coeff_142_; lean_object* v_bound_143_; lean_object* v___x_145_; uint8_t v_isShared_146_; uint8_t v_isSharedCheck_152_; 
v_toMul_139_ = lean_ctor_get(v_inst_136_, 1);
lean_inc(v_toMul_139_);
v_coeff_140_ = lean_ctor_get(v_f_137_, 0);
lean_inc(v_coeff_140_);
v_bound_141_ = lean_ctor_get(v_f_137_, 1);
lean_inc(v_bound_141_);
lean_dec_ref(v_f_137_);
v_coeff_142_ = lean_ctor_get(v_g_138_, 0);
v_bound_143_ = lean_ctor_get(v_g_138_, 1);
v_isSharedCheck_152_ = !lean_is_exclusive(v_g_138_);
if (v_isSharedCheck_152_ == 0)
{
v___x_145_ = v_g_138_;
v_isShared_146_ = v_isSharedCheck_152_;
goto v_resetjp_144_;
}
else
{
lean_inc(v_bound_143_);
lean_inc(v_coeff_142_);
lean_dec(v_g_138_);
v___x_145_ = lean_box(0);
v_isShared_146_ = v_isSharedCheck_152_;
goto v_resetjp_144_;
}
v_resetjp_144_:
{
lean_object* v___f_147_; lean_object* v___x_148_; lean_object* v___x_150_; 
v___f_147_ = lean_alloc_closure((void*)(lp_AtiyahAndMacdonald_mul__poly___redArg___lam__1), 5, 4);
lean_closure_set(v___f_147_, 0, v_coeff_140_);
lean_closure_set(v___f_147_, 1, v_coeff_142_);
lean_closure_set(v___f_147_, 2, v_toMul_139_);
lean_closure_set(v___f_147_, 3, v_inst_136_);
v___x_148_ = lean_nat_add(v_bound_141_, v_bound_143_);
lean_dec(v_bound_143_);
lean_dec(v_bound_141_);
if (v_isShared_146_ == 0)
{
lean_ctor_set(v___x_145_, 1, v___x_148_);
lean_ctor_set(v___x_145_, 0, v___f_147_);
v___x_150_ = v___x_145_;
goto v_reusejp_149_;
}
else
{
lean_object* v_reuseFailAlloc_151_; 
v_reuseFailAlloc_151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_151_, 0, v___f_147_);
lean_ctor_set(v_reuseFailAlloc_151_, 1, v___x_148_);
v___x_150_ = v_reuseFailAlloc_151_;
goto v_reusejp_149_;
}
v_reusejp_149_:
{
return v___x_150_;
}
}
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_mul__poly(lean_object* v_R_153_, lean_object* v_inst_154_, lean_object* v_f_155_, lean_object* v_g_156_){
_start:
{
lean_object* v___x_157_; 
v___x_157_ = lp_AtiyahAndMacdonald_mul__poly___redArg(v_inst_154_, v_f_155_, v_g_156_);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_polynomial__is__ring___redArg(lean_object* v_inst_158_){
_start:
{
lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
lean_inc_ref_n(v_inst_158_, 4);
v___x_159_ = lean_alloc_closure((void*)(lp_AtiyahAndMacdonald_add__poly), 4, 2);
lean_closure_set(v___x_159_, 0, lean_box(0));
lean_closure_set(v___x_159_, 1, v_inst_158_);
v___x_160_ = lean_alloc_closure((void*)(lp_AtiyahAndMacdonald_mul__poly), 4, 2);
lean_closure_set(v___x_160_, 0, lean_box(0));
lean_closure_set(v___x_160_, 1, v_inst_158_);
v___x_161_ = lp_AtiyahAndMacdonald_zero__poly___redArg(v_inst_158_);
v___x_162_ = lp_AtiyahAndMacdonald_one__poly___redArg(v_inst_158_);
v___x_163_ = lean_alloc_closure((void*)(lp_AtiyahAndMacdonald_neg__poly), 3, 2);
lean_closure_set(v___x_163_, 0, lean_box(0));
lean_closure_set(v___x_163_, 1, v_inst_158_);
v___x_164_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_164_, 0, v___x_159_);
lean_ctor_set(v___x_164_, 1, v___x_160_);
lean_ctor_set(v___x_164_, 2, v___x_161_);
lean_ctor_set(v___x_164_, 3, v___x_162_);
lean_ctor_set(v___x_164_, 4, v___x_163_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_polynomial__is__ring(lean_object* v_R_165_, lean_object* v_inst_166_){
_start:
{
lean_object* v___x_167_; 
v___x_167_ = lp_AtiyahAndMacdonald_polynomial__is__ring___redArg(v_inst_166_);
return v___x_167_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_eval___redArg___lam__0(lean_object* v_coeff_168_, lean_object* v_inst_169_, lean_object* v_x_170_, lean_object* v_toMul_171_, lean_object* v_i_172_){
_start:
{
lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; 
lean_inc(v_i_172_);
v___x_173_ = lean_apply_1(v_coeff_168_, v_i_172_);
v___x_174_ = lp_AtiyahAndMacdonald_npow___redArg(v_inst_169_, v_x_170_, v_i_172_);
lean_dec(v_i_172_);
v___x_175_ = lean_apply_2(v_toMul_171_, v___x_173_, v___x_174_);
return v___x_175_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_eval___redArg(lean_object* v_inst_176_, lean_object* v_f_177_, lean_object* v_x_178_){
_start:
{
lean_object* v_toMul_179_; lean_object* v_coeff_180_; lean_object* v_bound_181_; lean_object* v___f_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; 
v_toMul_179_ = lean_ctor_get(v_inst_176_, 1);
v_coeff_180_ = lean_ctor_get(v_f_177_, 0);
lean_inc(v_coeff_180_);
v_bound_181_ = lean_ctor_get(v_f_177_, 1);
lean_inc(v_bound_181_);
lean_dec_ref(v_f_177_);
lean_inc(v_toMul_179_);
lean_inc_ref(v_inst_176_);
v___f_182_ = lean_alloc_closure((void*)(lp_AtiyahAndMacdonald_eval___redArg___lam__0), 5, 4);
lean_closure_set(v___f_182_, 0, v_coeff_180_);
lean_closure_set(v___f_182_, 1, v_inst_176_);
lean_closure_set(v___f_182_, 2, v_x_178_);
lean_closure_set(v___f_182_, 3, v_toMul_179_);
v___x_183_ = lean_unsigned_to_nat(1u);
v___x_184_ = lean_nat_add(v_bound_181_, v___x_183_);
lean_dec(v_bound_181_);
v___x_185_ = lp_AtiyahAndMacdonald_sum__range___redArg(v_inst_176_, v___f_182_, v___x_184_);
lean_dec(v___x_184_);
return v___x_185_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_eval(lean_object* v_R_186_, lean_object* v_inst_187_, lean_object* v_f_188_, lean_object* v_x_189_){
_start:
{
lean_object* v___x_190_; 
v___x_190_ = lp_AtiyahAndMacdonald_eval___redArg(v_inst_187_, v_f_188_, v_x_189_);
return v___x_190_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_instCoeFunPolynomialForall___redArg___lam__0(lean_object* v_inst_191_, lean_object* v_f_192_, lean_object* v_x_193_){
_start:
{
lean_object* v___x_194_; 
v___x_194_ = lp_AtiyahAndMacdonald_eval___redArg(v_inst_191_, v_f_192_, v_x_193_);
return v___x_194_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_instCoeFunPolynomialForall___redArg(lean_object* v_inst_195_){
_start:
{
lean_object* v___f_196_; 
v___f_196_ = lean_alloc_closure((void*)(lp_AtiyahAndMacdonald_instCoeFunPolynomialForall___redArg___lam__0), 3, 1);
lean_closure_set(v___f_196_, 0, v_inst_195_);
return v___f_196_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_instCoeFunPolynomialForall(lean_object* v_R_197_, lean_object* v_inst_198_){
_start:
{
lean_object* v___f_199_; 
v___f_199_ = lean_alloc_closure((void*)(lp_AtiyahAndMacdonald_instCoeFunPolynomialForall___redArg___lam__0), 3, 1);
lean_closure_set(v___f_199_, 0, v_inst_198_);
return v___f_199_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_eval__hom___redArg___lam__0(lean_object* v_coeff_200_, lean_object* v_f_201_, lean_object* v_inst_202_, lean_object* v_x_203_, lean_object* v_toMul_204_, lean_object* v_i_205_){
_start:
{
lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; 
lean_inc(v_i_205_);
v___x_206_ = lean_apply_1(v_coeff_200_, v_i_205_);
v___x_207_ = lean_apply_1(v_f_201_, v___x_206_);
v___x_208_ = lp_AtiyahAndMacdonald_npow___redArg(v_inst_202_, v_x_203_, v_i_205_);
lean_dec(v_i_205_);
v___x_209_ = lean_apply_2(v_toMul_204_, v___x_207_, v___x_208_);
return v___x_209_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_eval__hom___redArg(lean_object* v_inst_210_, lean_object* v_f_211_, lean_object* v_p_212_, lean_object* v_x_213_){
_start:
{
lean_object* v_toMul_214_; lean_object* v_coeff_215_; lean_object* v_bound_216_; lean_object* v___f_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; 
v_toMul_214_ = lean_ctor_get(v_inst_210_, 1);
v_coeff_215_ = lean_ctor_get(v_p_212_, 0);
lean_inc(v_coeff_215_);
v_bound_216_ = lean_ctor_get(v_p_212_, 1);
lean_inc(v_bound_216_);
lean_dec_ref(v_p_212_);
lean_inc(v_toMul_214_);
lean_inc_ref(v_inst_210_);
v___f_217_ = lean_alloc_closure((void*)(lp_AtiyahAndMacdonald_eval__hom___redArg___lam__0), 6, 5);
lean_closure_set(v___f_217_, 0, v_coeff_215_);
lean_closure_set(v___f_217_, 1, v_f_211_);
lean_closure_set(v___f_217_, 2, v_inst_210_);
lean_closure_set(v___f_217_, 3, v_x_213_);
lean_closure_set(v___f_217_, 4, v_toMul_214_);
v___x_218_ = lean_unsigned_to_nat(1u);
v___x_219_ = lean_nat_add(v_bound_216_, v___x_218_);
lean_dec(v_bound_216_);
v___x_220_ = lp_AtiyahAndMacdonald_sum__range___redArg(v_inst_210_, v___f_217_, v___x_219_);
lean_dec(v___x_219_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_eval__hom(lean_object* v_A_221_, lean_object* v_B_222_, lean_object* v_inst_223_, lean_object* v_inst_224_, lean_object* v_f_225_, lean_object* v_p_226_, lean_object* v_x_227_){
_start:
{
lean_object* v___x_228_; 
v___x_228_ = lp_AtiyahAndMacdonald_eval__hom___redArg(v_inst_224_, v_f_225_, v_p_226_, v_x_227_);
return v___x_228_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_eval__hom___boxed(lean_object* v_A_229_, lean_object* v_B_230_, lean_object* v_inst_231_, lean_object* v_inst_232_, lean_object* v_f_233_, lean_object* v_p_234_, lean_object* v_x_235_){
_start:
{
lean_object* v_res_236_; 
v_res_236_ = lp_AtiyahAndMacdonald_eval__hom(v_A_229_, v_B_230_, v_inst_231_, v_inst_232_, v_f_233_, v_p_234_, v_x_235_);
lean_dec_ref(v_inst_231_);
return v_res_236_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_AtiyahAndMacdonald_AtiyahAndMacdonald_Ring_Base(uint8_t builtin);
lean_object* initialize_AtiyahAndMacdonald_AtiyahAndMacdonald_Ring_Ring__Hom(uint8_t builtin);
lean_object* initialize_AtiyahAndMacdonald_AtiyahAndMacdonald_Nat_Nat__Stuff(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_AtiyahAndMacdonald_AtiyahAndMacdonald_Ring_PolRings(uint8_t builtin) {
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
res = initialize_AtiyahAndMacdonald_AtiyahAndMacdonald_Ring_Base(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_AtiyahAndMacdonald_AtiyahAndMacdonald_Ring_Ring__Hom(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_AtiyahAndMacdonald_AtiyahAndMacdonald_Nat_Nat__Stuff(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
