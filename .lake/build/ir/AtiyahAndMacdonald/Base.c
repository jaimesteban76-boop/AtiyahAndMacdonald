// Lean compiler output
// Module: AtiyahAndMacdonald.Base
// Imports: public import Init public meta import Init public import Mathlib.Data.Set.Basic
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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_nsmul___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_nsmul___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_nsmul(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_nsmul___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "term_**_"};
static const lean_object* lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__0 = (const lean_object*)&lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__0_value;
static const lean_ctor_object lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(72, 239, 19, 174, 140, 158, 28, 84)}};
static const lean_object* lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__1 = (const lean_object*)&lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__1_value;
static const lean_string_object lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__2 = (const lean_object*)&lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__2_value;
static const lean_ctor_object lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__3 = (const lean_object*)&lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__3_value;
static const lean_string_object lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " ** "};
static const lean_object* lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__4 = (const lean_object*)&lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__4_value;
static const lean_ctor_object lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__4_value)}};
static const lean_object* lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__5 = (const lean_object*)&lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__5_value;
static const lean_string_object lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__6 = (const lean_object*)&lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__6_value;
static const lean_ctor_object lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__6_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__7 = (const lean_object*)&lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__7_value;
static const lean_ctor_object lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__7_value),((lean_object*)(((size_t)(71) << 1) | 1))}};
static const lean_object* lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__8 = (const lean_object*)&lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__8_value;
static const lean_ctor_object lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__3_value),((lean_object*)&lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__5_value),((lean_object*)&lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__8_value)}};
static const lean_object* lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__9 = (const lean_object*)&lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__9_value;
static const lean_ctor_object lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__1_value),((lean_object*)(((size_t)(70) << 1) | 1)),((lean_object*)(((size_t)(71) << 1) | 1)),((lean_object*)&lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__9_value)}};
static const lean_object* lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__10 = (const lean_object*)&lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__10_value;
LEAN_EXPORT const lean_object* lp_AtiyahAndMacdonald_term___x2a_x2a__ = (const lean_object*)&lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__10_value;
static const lean_string_object lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__0 = (const lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__0_value;
static const lean_string_object lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__1 = (const lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__1_value;
static const lean_string_object lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__2 = (const lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__2_value;
static const lean_string_object lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__3 = (const lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__3_value;
static const lean_ctor_object lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__4_value_aux_0),((lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__4_value_aux_1),((lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__4_value_aux_2),((lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__4 = (const lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__4_value;
static const lean_string_object lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "nsmul"};
static const lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__5 = (const lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__5_value;
static lean_once_cell_t lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__6;
static const lean_ctor_object lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(72, 131, 139, 198, 141, 35, 144, 249)}};
static const lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__7 = (const lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__7_value;
static const lean_ctor_object lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__8 = (const lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__8_value;
static const lean_ctor_object lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__7_value)}};
static const lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__9 = (const lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__9_value;
static const lean_ctor_object lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__10 = (const lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__10_value;
static const lean_ctor_object lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__8_value),((lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__10_value)}};
static const lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__11 = (const lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__11_value;
static const lean_string_object lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__12 = (const lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__12_value;
static const lean_ctor_object lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__13 = (const lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__13_value;
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______unexpand__nsmul__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______unexpand__nsmul__1___closed__0 = (const lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______unexpand__nsmul__1___closed__0_value;
static const lean_ctor_object lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______unexpand__nsmul__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______unexpand__nsmul__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______unexpand__nsmul__1___closed__1 = (const lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______unexpand__nsmul__1___closed__1_value;
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______unexpand__nsmul__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______unexpand__nsmul__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_npow___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_npow___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_npow(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_npow___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_instHPowNat__atiyahAndMacdonald___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_instHPowNat__atiyahAndMacdonald(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_ideal__setoid___redArg();
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_ideal__setoid___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_ideal__setoid(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_ideal__setoid___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_nsmul___redArg(lean_object* v_inst_1_, lean_object* v_x_2_, lean_object* v_x_3_){
_start:
{
lean_object* v_toAdd_4_; lean_object* v_toZero_5_; lean_object* v_zero_6_; uint8_t v_isZero_7_; 
v_toAdd_4_ = lean_ctor_get(v_inst_1_, 0);
lean_inc(v_toAdd_4_);
v_toZero_5_ = lean_ctor_get(v_inst_1_, 2);
v_zero_6_ = lean_unsigned_to_nat(0u);
v_isZero_7_ = lean_nat_dec_eq(v_x_2_, v_zero_6_);
if (v_isZero_7_ == 1)
{
lean_inc(v_toZero_5_);
lean_dec(v_toAdd_4_);
lean_dec(v_x_3_);
lean_dec_ref(v_inst_1_);
return v_toZero_5_;
}
else
{
lean_object* v_one_8_; lean_object* v_n_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v_one_8_ = lean_unsigned_to_nat(1u);
v_n_9_ = lean_nat_sub(v_x_2_, v_one_8_);
lean_inc(v_x_3_);
v___x_10_ = lp_AtiyahAndMacdonald_nsmul___redArg(v_inst_1_, v_n_9_, v_x_3_);
lean_dec(v_n_9_);
v___x_11_ = lean_apply_2(v_toAdd_4_, v_x_3_, v___x_10_);
return v___x_11_;
}
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_nsmul___redArg___boxed(lean_object* v_inst_12_, lean_object* v_x_13_, lean_object* v_x_14_){
_start:
{
lean_object* v_res_15_; 
v_res_15_ = lp_AtiyahAndMacdonald_nsmul___redArg(v_inst_12_, v_x_13_, v_x_14_);
lean_dec(v_x_13_);
return v_res_15_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_nsmul(lean_object* v_R_16_, lean_object* v_inst_17_, lean_object* v_x_18_, lean_object* v_x_19_){
_start:
{
lean_object* v___x_20_; 
v___x_20_ = lp_AtiyahAndMacdonald_nsmul___redArg(v_inst_17_, v_x_18_, v_x_19_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_nsmul___boxed(lean_object* v_R_21_, lean_object* v_inst_22_, lean_object* v_x_23_, lean_object* v_x_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = lp_AtiyahAndMacdonald_nsmul(v_R_21_, v_inst_22_, v_x_23_, v_x_24_);
lean_dec(v_x_23_);
return v_res_25_;
}
}
static lean_object* _init_lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__6(void){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_61_ = ((lean_object*)(lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__5));
v___x_62_ = l_String_toRawSubstring_x27(v___x_61_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1(lean_object* v_x_79_, lean_object* v_a_80_, lean_object* v_a_81_){
_start:
{
lean_object* v___x_82_; uint8_t v___x_83_; 
v___x_82_ = ((lean_object*)(lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__1));
lean_inc(v_x_79_);
v___x_83_ = l_Lean_Syntax_isOfKind(v_x_79_, v___x_82_);
if (v___x_83_ == 0)
{
lean_object* v___x_84_; lean_object* v___x_85_; 
lean_dec(v_x_79_);
v___x_84_ = lean_box(1);
v___x_85_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_85_, 0, v___x_84_);
lean_ctor_set(v___x_85_, 1, v_a_81_);
return v___x_85_;
}
else
{
lean_object* v_quotContext_86_; lean_object* v_currMacroScope_87_; lean_object* v_ref_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; uint8_t v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; 
v_quotContext_86_ = lean_ctor_get(v_a_80_, 1);
v_currMacroScope_87_ = lean_ctor_get(v_a_80_, 2);
v_ref_88_ = lean_ctor_get(v_a_80_, 5);
v___x_89_ = lean_unsigned_to_nat(0u);
v___x_90_ = l_Lean_Syntax_getArg(v_x_79_, v___x_89_);
v___x_91_ = lean_unsigned_to_nat(2u);
v___x_92_ = l_Lean_Syntax_getArg(v_x_79_, v___x_91_);
lean_dec(v_x_79_);
v___x_93_ = 0;
v___x_94_ = l_Lean_SourceInfo_fromRef(v_ref_88_, v___x_93_);
v___x_95_ = ((lean_object*)(lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__4));
v___x_96_ = lean_obj_once(&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__6, &lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__6_once, _init_lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__6);
v___x_97_ = ((lean_object*)(lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__7));
lean_inc(v_currMacroScope_87_);
lean_inc(v_quotContext_86_);
v___x_98_ = l_Lean_addMacroScope(v_quotContext_86_, v___x_97_, v_currMacroScope_87_);
v___x_99_ = ((lean_object*)(lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__11));
lean_inc_n(v___x_94_, 2);
v___x_100_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_100_, 0, v___x_94_);
lean_ctor_set(v___x_100_, 1, v___x_96_);
lean_ctor_set(v___x_100_, 2, v___x_98_);
lean_ctor_set(v___x_100_, 3, v___x_99_);
v___x_101_ = ((lean_object*)(lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__13));
v___x_102_ = l_Lean_Syntax_node2(v___x_94_, v___x_101_, v___x_90_, v___x_92_);
v___x_103_ = l_Lean_Syntax_node2(v___x_94_, v___x_95_, v___x_100_, v___x_102_);
v___x_104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_104_, 0, v___x_103_);
lean_ctor_set(v___x_104_, 1, v_a_81_);
return v___x_104_;
}
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___boxed(lean_object* v_x_105_, lean_object* v_a_106_, lean_object* v_a_107_){
_start:
{
lean_object* v_res_108_; 
v_res_108_ = lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1(v_x_105_, v_a_106_, v_a_107_);
lean_dec_ref(v_a_106_);
return v_res_108_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______unexpand__nsmul__1(lean_object* v_x_112_, lean_object* v_a_113_, lean_object* v_a_114_){
_start:
{
lean_object* v___x_115_; uint8_t v___x_116_; 
v___x_115_ = ((lean_object*)(lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______macroRules__term___x2a_x2a____1___closed__4));
lean_inc(v_x_112_);
v___x_116_ = l_Lean_Syntax_isOfKind(v_x_112_, v___x_115_);
if (v___x_116_ == 0)
{
lean_object* v___x_117_; lean_object* v___x_118_; 
lean_dec(v_x_112_);
v___x_117_ = lean_box(0);
v___x_118_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_118_, 0, v___x_117_);
lean_ctor_set(v___x_118_, 1, v_a_114_);
return v___x_118_;
}
else
{
lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; uint8_t v___x_122_; 
v___x_119_ = lean_unsigned_to_nat(0u);
v___x_120_ = l_Lean_Syntax_getArg(v_x_112_, v___x_119_);
v___x_121_ = ((lean_object*)(lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______unexpand__nsmul__1___closed__1));
lean_inc(v___x_120_);
v___x_122_ = l_Lean_Syntax_isOfKind(v___x_120_, v___x_121_);
if (v___x_122_ == 0)
{
lean_object* v___x_123_; lean_object* v___x_124_; 
lean_dec(v___x_120_);
lean_dec(v_x_112_);
v___x_123_ = lean_box(0);
v___x_124_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_124_, 0, v___x_123_);
lean_ctor_set(v___x_124_, 1, v_a_114_);
return v___x_124_;
}
else
{
lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; uint8_t v___x_128_; 
v___x_125_ = lean_unsigned_to_nat(1u);
v___x_126_ = l_Lean_Syntax_getArg(v_x_112_, v___x_125_);
lean_dec(v_x_112_);
v___x_127_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_126_);
v___x_128_ = l_Lean_Syntax_matchesNull(v___x_126_, v___x_127_);
if (v___x_128_ == 0)
{
lean_object* v___x_129_; lean_object* v___x_130_; 
lean_dec(v___x_126_);
lean_dec(v___x_120_);
v___x_129_ = lean_box(0);
v___x_130_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_130_, 0, v___x_129_);
lean_ctor_set(v___x_130_, 1, v_a_114_);
return v___x_130_;
}
else
{
lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v_ref_133_; uint8_t v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; 
v___x_131_ = l_Lean_Syntax_getArg(v___x_126_, v___x_119_);
v___x_132_ = l_Lean_Syntax_getArg(v___x_126_, v___x_125_);
lean_dec(v___x_126_);
v_ref_133_ = l_Lean_replaceRef(v___x_120_, v_a_113_);
lean_dec(v___x_120_);
v___x_134_ = 0;
v___x_135_ = l_Lean_SourceInfo_fromRef(v_ref_133_, v___x_134_);
lean_dec(v_ref_133_);
v___x_136_ = ((lean_object*)(lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__1));
v___x_137_ = ((lean_object*)(lp_AtiyahAndMacdonald_term___x2a_x2a___00__closed__4));
lean_inc(v___x_135_);
v___x_138_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_138_, 0, v___x_135_);
lean_ctor_set(v___x_138_, 1, v___x_137_);
v___x_139_ = l_Lean_Syntax_node3(v___x_135_, v___x_136_, v___x_131_, v___x_138_, v___x_132_);
v___x_140_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_140_, 0, v___x_139_);
lean_ctor_set(v___x_140_, 1, v_a_114_);
return v___x_140_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______unexpand__nsmul__1___boxed(lean_object* v_x_141_, lean_object* v_a_142_, lean_object* v_a_143_){
_start:
{
lean_object* v_res_144_; 
v_res_144_ = lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Base______unexpand__nsmul__1(v_x_141_, v_a_142_, v_a_143_);
lean_dec(v_a_142_);
return v_res_144_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_npow___redArg(lean_object* v_inst_145_, lean_object* v_x_146_, lean_object* v_x_147_){
_start:
{
lean_object* v_toMul_148_; lean_object* v_toOne_149_; lean_object* v_zero_150_; uint8_t v_isZero_151_; 
v_toMul_148_ = lean_ctor_get(v_inst_145_, 1);
lean_inc(v_toMul_148_);
v_toOne_149_ = lean_ctor_get(v_inst_145_, 3);
v_zero_150_ = lean_unsigned_to_nat(0u);
v_isZero_151_ = lean_nat_dec_eq(v_x_147_, v_zero_150_);
if (v_isZero_151_ == 1)
{
lean_inc(v_toOne_149_);
lean_dec(v_toMul_148_);
lean_dec(v_x_146_);
lean_dec_ref(v_inst_145_);
return v_toOne_149_;
}
else
{
lean_object* v_one_152_; lean_object* v_n_153_; lean_object* v___x_154_; lean_object* v___x_155_; 
v_one_152_ = lean_unsigned_to_nat(1u);
v_n_153_ = lean_nat_sub(v_x_147_, v_one_152_);
lean_inc(v_x_146_);
v___x_154_ = lp_AtiyahAndMacdonald_npow___redArg(v_inst_145_, v_x_146_, v_n_153_);
lean_dec(v_n_153_);
v___x_155_ = lean_apply_2(v_toMul_148_, v_x_146_, v___x_154_);
return v___x_155_;
}
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_npow___redArg___boxed(lean_object* v_inst_156_, lean_object* v_x_157_, lean_object* v_x_158_){
_start:
{
lean_object* v_res_159_; 
v_res_159_ = lp_AtiyahAndMacdonald_npow___redArg(v_inst_156_, v_x_157_, v_x_158_);
lean_dec(v_x_158_);
return v_res_159_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_npow(lean_object* v_R_160_, lean_object* v_inst_161_, lean_object* v_x_162_, lean_object* v_x_163_){
_start:
{
lean_object* v___x_164_; 
v___x_164_ = lp_AtiyahAndMacdonald_npow___redArg(v_inst_161_, v_x_162_, v_x_163_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_npow___boxed(lean_object* v_R_165_, lean_object* v_inst_166_, lean_object* v_x_167_, lean_object* v_x_168_){
_start:
{
lean_object* v_res_169_; 
v_res_169_ = lp_AtiyahAndMacdonald_npow(v_R_165_, v_inst_166_, v_x_167_, v_x_168_);
lean_dec(v_x_168_);
return v_res_169_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_instHPowNat__atiyahAndMacdonald___redArg(lean_object* v_inst_170_){
_start:
{
lean_object* v___x_171_; 
v___x_171_ = lean_alloc_closure((void*)(lp_AtiyahAndMacdonald_npow___boxed), 4, 2);
lean_closure_set(v___x_171_, 0, lean_box(0));
lean_closure_set(v___x_171_, 1, v_inst_170_);
return v___x_171_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_instHPowNat__atiyahAndMacdonald(lean_object* v_R_172_, lean_object* v_inst_173_){
_start:
{
lean_object* v___x_174_; 
v___x_174_ = lean_alloc_closure((void*)(lp_AtiyahAndMacdonald_npow___boxed), 4, 2);
lean_closure_set(v___x_174_, 0, lean_box(0));
lean_closure_set(v___x_174_, 1, v_inst_173_);
return v___x_174_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_ideal__setoid___redArg(){
_start:
{
lean_object* v___x_176_; 
v___x_176_ = lean_box(0);
return v___x_176_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_ideal__setoid___redArg___boxed(lean_object* v___dummy_177_){
_start:
{
lean_object* v_res_178_; 
v_res_178_ = lp_AtiyahAndMacdonald_ideal__setoid___redArg();
return v_res_178_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_ideal__setoid(lean_object* v_R_179_, lean_object* v_inst_180_, lean_object* v_I_181_, lean_object* v_hI_182_){
_start:
{
lean_object* v___x_183_; 
v___x_183_ = lean_box(0);
return v___x_183_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_ideal__setoid___boxed(lean_object* v_R_184_, lean_object* v_inst_185_, lean_object* v_I_186_, lean_object* v_hI_187_){
_start:
{
lean_object* v_res_188_; 
v_res_188_ = lp_AtiyahAndMacdonald_ideal__setoid(v_R_184_, v_inst_185_, v_I_186_, v_hI_187_);
lean_dec_ref(v_inst_185_);
return v_res_188_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Data_Set_Basic(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_AtiyahAndMacdonald_AtiyahAndMacdonald_Base(uint8_t builtin) {
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
res = initialize_mathlib_Mathlib_Data_Set_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
