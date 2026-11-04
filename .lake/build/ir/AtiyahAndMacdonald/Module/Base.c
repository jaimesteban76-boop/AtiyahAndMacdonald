// Lean compiler output
// Module: AtiyahAndMacdonald.Module.Base
// Imports: public import Init public meta import Init public import AtiyahAndMacdonald.Ring.Base
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
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
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
static const lean_string_object lp_AtiyahAndMacdonald_term___u2022____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 9, .m_data = "term_•__1"};
static const lean_object* lp_AtiyahAndMacdonald_term___u2022____1___closed__0 = (const lean_object*)&lp_AtiyahAndMacdonald_term___u2022____1___closed__0_value;
static const lean_ctor_object lp_AtiyahAndMacdonald_term___u2022____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_AtiyahAndMacdonald_term___u2022____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(16, 95, 166, 254, 166, 248, 158, 178)}};
static const lean_object* lp_AtiyahAndMacdonald_term___u2022____1___closed__1 = (const lean_object*)&lp_AtiyahAndMacdonald_term___u2022____1___closed__1_value;
static const lean_string_object lp_AtiyahAndMacdonald_term___u2022____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* lp_AtiyahAndMacdonald_term___u2022____1___closed__2 = (const lean_object*)&lp_AtiyahAndMacdonald_term___u2022____1___closed__2_value;
static const lean_ctor_object lp_AtiyahAndMacdonald_term___u2022____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_AtiyahAndMacdonald_term___u2022____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* lp_AtiyahAndMacdonald_term___u2022____1___closed__3 = (const lean_object*)&lp_AtiyahAndMacdonald_term___u2022____1___closed__3_value;
static const lean_string_object lp_AtiyahAndMacdonald_term___u2022____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 3, .m_data = " • "};
static const lean_object* lp_AtiyahAndMacdonald_term___u2022____1___closed__4 = (const lean_object*)&lp_AtiyahAndMacdonald_term___u2022____1___closed__4_value;
static const lean_ctor_object lp_AtiyahAndMacdonald_term___u2022____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_AtiyahAndMacdonald_term___u2022____1___closed__4_value)}};
static const lean_object* lp_AtiyahAndMacdonald_term___u2022____1___closed__5 = (const lean_object*)&lp_AtiyahAndMacdonald_term___u2022____1___closed__5_value;
static const lean_string_object lp_AtiyahAndMacdonald_term___u2022____1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* lp_AtiyahAndMacdonald_term___u2022____1___closed__6 = (const lean_object*)&lp_AtiyahAndMacdonald_term___u2022____1___closed__6_value;
static const lean_ctor_object lp_AtiyahAndMacdonald_term___u2022____1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_AtiyahAndMacdonald_term___u2022____1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* lp_AtiyahAndMacdonald_term___u2022____1___closed__7 = (const lean_object*)&lp_AtiyahAndMacdonald_term___u2022____1___closed__7_value;
static const lean_ctor_object lp_AtiyahAndMacdonald_term___u2022____1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&lp_AtiyahAndMacdonald_term___u2022____1___closed__7_value),((lean_object*)(((size_t)(73) << 1) | 1))}};
static const lean_object* lp_AtiyahAndMacdonald_term___u2022____1___closed__8 = (const lean_object*)&lp_AtiyahAndMacdonald_term___u2022____1___closed__8_value;
static const lean_ctor_object lp_AtiyahAndMacdonald_term___u2022____1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_AtiyahAndMacdonald_term___u2022____1___closed__3_value),((lean_object*)&lp_AtiyahAndMacdonald_term___u2022____1___closed__5_value),((lean_object*)&lp_AtiyahAndMacdonald_term___u2022____1___closed__8_value)}};
static const lean_object* lp_AtiyahAndMacdonald_term___u2022____1___closed__9 = (const lean_object*)&lp_AtiyahAndMacdonald_term___u2022____1___closed__9_value;
static const lean_ctor_object lp_AtiyahAndMacdonald_term___u2022____1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&lp_AtiyahAndMacdonald_term___u2022____1___closed__1_value),((lean_object*)(((size_t)(73) << 1) | 1)),((lean_object*)(((size_t)(74) << 1) | 1)),((lean_object*)&lp_AtiyahAndMacdonald_term___u2022____1___closed__9_value)}};
static const lean_object* lp_AtiyahAndMacdonald_term___u2022____1___closed__10 = (const lean_object*)&lp_AtiyahAndMacdonald_term___u2022____1___closed__10_value;
LEAN_EXPORT const lean_object* lp_AtiyahAndMacdonald_term___u2022____1 = (const lean_object*)&lp_AtiyahAndMacdonald_term___u2022____1___closed__10_value;
static const lean_string_object lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__0 = (const lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__0_value;
static const lean_string_object lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__1 = (const lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__1_value;
static const lean_string_object lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__2 = (const lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__2_value;
static const lean_string_object lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__3 = (const lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__3_value;
static const lean_ctor_object lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__4_value_aux_0),((lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__4_value_aux_1),((lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__4_value_aux_2),((lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__4 = (const lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__4_value;
static const lean_string_object lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "zMul.zmul"};
static const lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__5 = (const lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__5_value;
static lean_once_cell_t lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__6;
static const lean_string_object lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "zMul"};
static const lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__7 = (const lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__7_value;
static const lean_string_object lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "zmul"};
static const lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__8 = (const lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__8_value;
static const lean_ctor_object lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(60, 137, 209, 21, 21, 213, 15, 27)}};
static const lean_ctor_object lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__9_value_aux_0),((lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(123, 53, 138, 104, 186, 147, 75, 139)}};
static const lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__9 = (const lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__9_value;
static const lean_ctor_object lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__10 = (const lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__10_value;
static const lean_ctor_object lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__11 = (const lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__11_value;
static const lean_string_object lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__12 = (const lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__12_value;
static const lean_ctor_object lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__13 = (const lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__13_value;
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______unexpand__zMul__zmul__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______unexpand__zMul__zmul__1___closed__0 = (const lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______unexpand__zMul__zmul__1___closed__0_value;
static const lean_ctor_object lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______unexpand__zMul__zmul__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______unexpand__zMul__zmul__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______unexpand__zMul__zmul__1___closed__1 = (const lean_object*)&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______unexpand__zMul__zmul__1___closed__1_value;
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______unexpand__zMul__zmul__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______unexpand__zMul__zmul__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_self__zMul___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_self__zMul___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_self__zMul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_self__Module___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_self__Module(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_arbitrary__direct__sum__zero___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_arbitrary__direct__sum__zero___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_arbitrary__direct__sum__zero(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_arbitrary__direct__sum__zero___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_arbitrary__direct__sum__add___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_arbitrary__direct__sum__add___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_arbitrary__direct__sum__add(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_arbitrary__direct__sum__add___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_arbitrary__direct__sum__zmul___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_arbitrary__direct__sum__zmul___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_arbitrary__direct__sum__zmul(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_arbitrary__direct__sum__zmul___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_arbitrary__direct__sum__module___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_arbitrary__direct__sum__module(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_arbitrary__direct__sum__module___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_subring__zMul___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_subring__zMul(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_subring__Module___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_subring__Module(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_submodule__zero___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_submodule__zero___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_submodule__zero(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_submodule__zero___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_submodule__add___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_submodule__add___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_submodule__add(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_submodule__add___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_submodule__zMul___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_submodule__zMul___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_submodule__zMul(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_submodule__zMul___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_submodule__is__module___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_submodule__is__module(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_submodule__is__module___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__6(void){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_36_ = ((lean_object*)(lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__5));
v___x_37_ = l_String_toRawSubstring_x27(v___x_36_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1(lean_object* v_x_52_, lean_object* v_a_53_, lean_object* v_a_54_){
_start:
{
lean_object* v___x_55_; uint8_t v___x_56_; 
v___x_55_ = ((lean_object*)(lp_AtiyahAndMacdonald_term___u2022____1___closed__1));
lean_inc(v_x_52_);
v___x_56_ = l_Lean_Syntax_isOfKind(v_x_52_, v___x_55_);
if (v___x_56_ == 0)
{
lean_object* v___x_57_; lean_object* v___x_58_; 
lean_dec(v_x_52_);
v___x_57_ = lean_box(1);
v___x_58_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_58_, 0, v___x_57_);
lean_ctor_set(v___x_58_, 1, v_a_54_);
return v___x_58_;
}
else
{
lean_object* v_quotContext_59_; lean_object* v_currMacroScope_60_; lean_object* v_ref_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; uint8_t v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; 
v_quotContext_59_ = lean_ctor_get(v_a_53_, 1);
v_currMacroScope_60_ = lean_ctor_get(v_a_53_, 2);
v_ref_61_ = lean_ctor_get(v_a_53_, 5);
v___x_62_ = lean_unsigned_to_nat(0u);
v___x_63_ = l_Lean_Syntax_getArg(v_x_52_, v___x_62_);
v___x_64_ = lean_unsigned_to_nat(2u);
v___x_65_ = l_Lean_Syntax_getArg(v_x_52_, v___x_64_);
lean_dec(v_x_52_);
v___x_66_ = 0;
v___x_67_ = l_Lean_SourceInfo_fromRef(v_ref_61_, v___x_66_);
v___x_68_ = ((lean_object*)(lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__4));
v___x_69_ = lean_obj_once(&lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__6, &lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__6_once, _init_lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__6);
v___x_70_ = ((lean_object*)(lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__9));
lean_inc(v_currMacroScope_60_);
lean_inc(v_quotContext_59_);
v___x_71_ = l_Lean_addMacroScope(v_quotContext_59_, v___x_70_, v_currMacroScope_60_);
v___x_72_ = ((lean_object*)(lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__11));
lean_inc_n(v___x_67_, 2);
v___x_73_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_73_, 0, v___x_67_);
lean_ctor_set(v___x_73_, 1, v___x_69_);
lean_ctor_set(v___x_73_, 2, v___x_71_);
lean_ctor_set(v___x_73_, 3, v___x_72_);
v___x_74_ = ((lean_object*)(lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__13));
v___x_75_ = l_Lean_Syntax_node2(v___x_67_, v___x_74_, v___x_63_, v___x_65_);
v___x_76_ = l_Lean_Syntax_node2(v___x_67_, v___x_68_, v___x_73_, v___x_75_);
v___x_77_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_77_, 0, v___x_76_);
lean_ctor_set(v___x_77_, 1, v_a_54_);
return v___x_77_;
}
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___boxed(lean_object* v_x_78_, lean_object* v_a_79_, lean_object* v_a_80_){
_start:
{
lean_object* v_res_81_; 
v_res_81_ = lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1(v_x_78_, v_a_79_, v_a_80_);
lean_dec_ref(v_a_79_);
return v_res_81_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______unexpand__zMul__zmul__1(lean_object* v_x_85_, lean_object* v_a_86_, lean_object* v_a_87_){
_start:
{
lean_object* v___x_88_; uint8_t v___x_89_; 
v___x_88_ = ((lean_object*)(lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______macroRules__term___u2022____1__1___closed__4));
lean_inc(v_x_85_);
v___x_89_ = l_Lean_Syntax_isOfKind(v_x_85_, v___x_88_);
if (v___x_89_ == 0)
{
lean_object* v___x_90_; lean_object* v___x_91_; 
lean_dec(v_x_85_);
v___x_90_ = lean_box(0);
v___x_91_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_91_, 0, v___x_90_);
lean_ctor_set(v___x_91_, 1, v_a_87_);
return v___x_91_;
}
else
{
lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; uint8_t v___x_95_; 
v___x_92_ = lean_unsigned_to_nat(0u);
v___x_93_ = l_Lean_Syntax_getArg(v_x_85_, v___x_92_);
v___x_94_ = ((lean_object*)(lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______unexpand__zMul__zmul__1___closed__1));
lean_inc(v___x_93_);
v___x_95_ = l_Lean_Syntax_isOfKind(v___x_93_, v___x_94_);
if (v___x_95_ == 0)
{
lean_object* v___x_96_; lean_object* v___x_97_; 
lean_dec(v___x_93_);
lean_dec(v_x_85_);
v___x_96_ = lean_box(0);
v___x_97_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_97_, 0, v___x_96_);
lean_ctor_set(v___x_97_, 1, v_a_87_);
return v___x_97_;
}
else
{
lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; uint8_t v___x_101_; 
v___x_98_ = lean_unsigned_to_nat(1u);
v___x_99_ = l_Lean_Syntax_getArg(v_x_85_, v___x_98_);
lean_dec(v_x_85_);
v___x_100_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_99_);
v___x_101_ = l_Lean_Syntax_matchesNull(v___x_99_, v___x_100_);
if (v___x_101_ == 0)
{
lean_object* v___x_102_; lean_object* v___x_103_; 
lean_dec(v___x_99_);
lean_dec(v___x_93_);
v___x_102_ = lean_box(0);
v___x_103_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_103_, 0, v___x_102_);
lean_ctor_set(v___x_103_, 1, v_a_87_);
return v___x_103_;
}
else
{
lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v_ref_106_; uint8_t v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_104_ = l_Lean_Syntax_getArg(v___x_99_, v___x_92_);
v___x_105_ = l_Lean_Syntax_getArg(v___x_99_, v___x_98_);
lean_dec(v___x_99_);
v_ref_106_ = l_Lean_replaceRef(v___x_93_, v_a_86_);
lean_dec(v___x_93_);
v___x_107_ = 0;
v___x_108_ = l_Lean_SourceInfo_fromRef(v_ref_106_, v___x_107_);
lean_dec(v_ref_106_);
v___x_109_ = ((lean_object*)(lp_AtiyahAndMacdonald_term___u2022____1___closed__1));
v___x_110_ = ((lean_object*)(lp_AtiyahAndMacdonald_term___u2022____1___closed__4));
lean_inc(v___x_108_);
v___x_111_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_111_, 0, v___x_108_);
lean_ctor_set(v___x_111_, 1, v___x_110_);
v___x_112_ = l_Lean_Syntax_node3(v___x_108_, v___x_109_, v___x_104_, v___x_111_, v___x_105_);
v___x_113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_113_, 0, v___x_112_);
lean_ctor_set(v___x_113_, 1, v_a_87_);
return v___x_113_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______unexpand__zMul__zmul__1___boxed(lean_object* v_x_114_, lean_object* v_a_115_, lean_object* v_a_116_){
_start:
{
lean_object* v_res_117_; 
v_res_117_ = lp_AtiyahAndMacdonald___aux__AtiyahAndMacdonald__Module__Base______unexpand__zMul__zmul__1(v_x_114_, v_a_115_, v_a_116_);
lean_dec(v_a_115_);
return v_res_117_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_self__zMul___redArg___lam__0(lean_object* v_toMul_118_, lean_object* v_a_119_, lean_object* v_b_120_){
_start:
{
lean_object* v___x_121_; 
v___x_121_ = lean_apply_2(v_toMul_118_, v_a_119_, v_b_120_);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_self__zMul___redArg(lean_object* v_inst_122_){
_start:
{
lean_object* v_toMul_123_; lean_object* v___f_124_; 
v_toMul_123_ = lean_ctor_get(v_inst_122_, 1);
lean_inc(v_toMul_123_);
lean_dec_ref(v_inst_122_);
v___f_124_ = lean_alloc_closure((void*)(lp_AtiyahAndMacdonald_self__zMul___redArg___lam__0), 3, 1);
lean_closure_set(v___f_124_, 0, v_toMul_123_);
return v___f_124_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_self__zMul(lean_object* v_A_125_, lean_object* v_inst_126_){
_start:
{
lean_object* v___x_127_; 
v___x_127_ = lp_AtiyahAndMacdonald_self__zMul___redArg(v_inst_126_);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_self__Module___redArg(lean_object* v_inst_128_){
_start:
{
lean_object* v_toAdd_129_; lean_object* v_toZero_130_; lean_object* v___x_131_; lean_object* v___x_132_; 
v_toAdd_129_ = lean_ctor_get(v_inst_128_, 0);
lean_inc(v_toAdd_129_);
v_toZero_130_ = lean_ctor_get(v_inst_128_, 2);
lean_inc(v_toZero_130_);
v___x_131_ = lp_AtiyahAndMacdonald_self__zMul___redArg(v_inst_128_);
v___x_132_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_132_, 0, v_toAdd_129_);
lean_ctor_set(v___x_132_, 1, v_toZero_130_);
lean_ctor_set(v___x_132_, 2, v___x_131_);
return v___x_132_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_self__Module(lean_object* v_A_133_, lean_object* v_inst_134_){
_start:
{
lean_object* v___x_135_; 
v___x_135_ = lp_AtiyahAndMacdonald_self__Module___redArg(v_inst_134_);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_arbitrary__direct__sum__zero___redArg___lam__0(lean_object* v_inst_136_, lean_object* v_x_137_){
_start:
{
lean_object* v___x_138_; lean_object* v_toZero_139_; 
v___x_138_ = lean_apply_1(v_inst_136_, v_x_137_);
v_toZero_139_ = lean_ctor_get(v___x_138_, 1);
lean_inc(v_toZero_139_);
lean_dec_ref(v___x_138_);
return v_toZero_139_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_arbitrary__direct__sum__zero___redArg(lean_object* v_inst_140_){
_start:
{
lean_object* v___f_141_; 
v___f_141_ = lean_alloc_closure((void*)(lp_AtiyahAndMacdonald_arbitrary__direct__sum__zero___redArg___lam__0), 2, 1);
lean_closure_set(v___f_141_, 0, v_inst_140_);
return v___f_141_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_arbitrary__direct__sum__zero(lean_object* v_A_142_, lean_object* v_inst_143_, lean_object* v_I_144_, lean_object* v_M_145_, lean_object* v_inst_146_){
_start:
{
lean_object* v___f_147_; 
v___f_147_ = lean_alloc_closure((void*)(lp_AtiyahAndMacdonald_arbitrary__direct__sum__zero___redArg___lam__0), 2, 1);
lean_closure_set(v___f_147_, 0, v_inst_146_);
return v___f_147_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_arbitrary__direct__sum__zero___boxed(lean_object* v_A_148_, lean_object* v_inst_149_, lean_object* v_I_150_, lean_object* v_M_151_, lean_object* v_inst_152_){
_start:
{
lean_object* v_res_153_; 
v_res_153_ = lp_AtiyahAndMacdonald_arbitrary__direct__sum__zero(v_A_148_, v_inst_149_, v_I_150_, v_M_151_, v_inst_152_);
lean_dec_ref(v_inst_149_);
return v_res_153_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_arbitrary__direct__sum__add___redArg___lam__0(lean_object* v_inst_154_, lean_object* v_f_155_, lean_object* v_g_156_, lean_object* v___y_157_){
_start:
{
lean_object* v___x_158_; lean_object* v_toAdd_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
lean_inc_n(v___y_157_, 2);
v___x_158_ = lean_apply_1(v_inst_154_, v___y_157_);
v_toAdd_159_ = lean_ctor_get(v___x_158_, 0);
lean_inc(v_toAdd_159_);
lean_dec_ref(v___x_158_);
v___x_160_ = lean_apply_1(v_f_155_, v___y_157_);
v___x_161_ = lean_apply_1(v_g_156_, v___y_157_);
v___x_162_ = lean_apply_2(v_toAdd_159_, v___x_160_, v___x_161_);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_arbitrary__direct__sum__add___redArg(lean_object* v_inst_163_){
_start:
{
lean_object* v___f_164_; 
v___f_164_ = lean_alloc_closure((void*)(lp_AtiyahAndMacdonald_arbitrary__direct__sum__add___redArg___lam__0), 4, 1);
lean_closure_set(v___f_164_, 0, v_inst_163_);
return v___f_164_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_arbitrary__direct__sum__add(lean_object* v_A_165_, lean_object* v_inst_166_, lean_object* v_I_167_, lean_object* v_M_168_, lean_object* v_inst_169_){
_start:
{
lean_object* v___f_170_; 
v___f_170_ = lean_alloc_closure((void*)(lp_AtiyahAndMacdonald_arbitrary__direct__sum__add___redArg___lam__0), 4, 1);
lean_closure_set(v___f_170_, 0, v_inst_169_);
return v___f_170_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_arbitrary__direct__sum__add___boxed(lean_object* v_A_171_, lean_object* v_inst_172_, lean_object* v_I_173_, lean_object* v_M_174_, lean_object* v_inst_175_){
_start:
{
lean_object* v_res_176_; 
v_res_176_ = lp_AtiyahAndMacdonald_arbitrary__direct__sum__add(v_A_171_, v_inst_172_, v_I_173_, v_M_174_, v_inst_175_);
lean_dec_ref(v_inst_172_);
return v_res_176_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_arbitrary__direct__sum__zmul___redArg___lam__0(lean_object* v_inst_177_, lean_object* v_a_178_, lean_object* v_f_179_, lean_object* v___y_180_){
_start:
{
lean_object* v___x_181_; lean_object* v_tozMul_182_; lean_object* v___x_183_; lean_object* v___x_184_; 
lean_inc(v___y_180_);
v___x_181_ = lean_apply_1(v_inst_177_, v___y_180_);
v_tozMul_182_ = lean_ctor_get(v___x_181_, 2);
lean_inc(v_tozMul_182_);
lean_dec_ref(v___x_181_);
v___x_183_ = lean_apply_1(v_f_179_, v___y_180_);
v___x_184_ = lean_apply_2(v_tozMul_182_, v_a_178_, v___x_183_);
return v___x_184_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_arbitrary__direct__sum__zmul___redArg(lean_object* v_inst_185_){
_start:
{
lean_object* v___f_186_; 
v___f_186_ = lean_alloc_closure((void*)(lp_AtiyahAndMacdonald_arbitrary__direct__sum__zmul___redArg___lam__0), 4, 1);
lean_closure_set(v___f_186_, 0, v_inst_185_);
return v___f_186_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_arbitrary__direct__sum__zmul(lean_object* v_A_187_, lean_object* v_inst_188_, lean_object* v_I_189_, lean_object* v_M_190_, lean_object* v_inst_191_){
_start:
{
lean_object* v___f_192_; 
v___f_192_ = lean_alloc_closure((void*)(lp_AtiyahAndMacdonald_arbitrary__direct__sum__zmul___redArg___lam__0), 4, 1);
lean_closure_set(v___f_192_, 0, v_inst_191_);
return v___f_192_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_arbitrary__direct__sum__zmul___boxed(lean_object* v_A_193_, lean_object* v_inst_194_, lean_object* v_I_195_, lean_object* v_M_196_, lean_object* v_inst_197_){
_start:
{
lean_object* v_res_198_; 
v_res_198_ = lp_AtiyahAndMacdonald_arbitrary__direct__sum__zmul(v_A_193_, v_inst_194_, v_I_195_, v_M_196_, v_inst_197_);
lean_dec_ref(v_inst_194_);
return v_res_198_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_arbitrary__direct__sum__module___redArg(lean_object* v_inst_199_){
_start:
{
lean_object* v___f_200_; lean_object* v___f_201_; lean_object* v___f_202_; lean_object* v___x_203_; 
lean_inc_ref_n(v_inst_199_, 2);
v___f_200_ = lean_alloc_closure((void*)(lp_AtiyahAndMacdonald_arbitrary__direct__sum__add___redArg___lam__0), 4, 1);
lean_closure_set(v___f_200_, 0, v_inst_199_);
v___f_201_ = lean_alloc_closure((void*)(lp_AtiyahAndMacdonald_arbitrary__direct__sum__zero___redArg___lam__0), 2, 1);
lean_closure_set(v___f_201_, 0, v_inst_199_);
v___f_202_ = lean_alloc_closure((void*)(lp_AtiyahAndMacdonald_arbitrary__direct__sum__zmul___redArg___lam__0), 4, 1);
lean_closure_set(v___f_202_, 0, v_inst_199_);
v___x_203_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_203_, 0, v___f_200_);
lean_ctor_set(v___x_203_, 1, v___f_201_);
lean_ctor_set(v___x_203_, 2, v___f_202_);
return v___x_203_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_arbitrary__direct__sum__module(lean_object* v_A_204_, lean_object* v_inst_205_, lean_object* v_I_206_, lean_object* v_M_207_, lean_object* v_inst_208_){
_start:
{
lean_object* v___x_209_; 
v___x_209_ = lp_AtiyahAndMacdonald_arbitrary__direct__sum__module___redArg(v_inst_208_);
return v___x_209_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_arbitrary__direct__sum__module___boxed(lean_object* v_A_210_, lean_object* v_inst_211_, lean_object* v_I_212_, lean_object* v_M_213_, lean_object* v_inst_214_){
_start:
{
lean_object* v_res_215_; 
v_res_215_ = lp_AtiyahAndMacdonald_arbitrary__direct__sum__module(v_A_210_, v_inst_211_, v_I_212_, v_M_213_, v_inst_214_);
lean_dec_ref(v_inst_211_);
return v_res_215_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_subring__zMul___redArg(lean_object* v_inst_216_){
_start:
{
lean_object* v_toMul_217_; lean_object* v___f_218_; 
v_toMul_217_ = lean_ctor_get(v_inst_216_, 1);
lean_inc(v_toMul_217_);
lean_dec_ref(v_inst_216_);
v___f_218_ = lean_alloc_closure((void*)(lp_AtiyahAndMacdonald_self__zMul___redArg___lam__0), 3, 1);
lean_closure_set(v___f_218_, 0, v_toMul_217_);
return v___f_218_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_subring__zMul(lean_object* v_B_219_, lean_object* v_inst_220_, lean_object* v_A_221_){
_start:
{
lean_object* v___x_222_; 
v___x_222_ = lp_AtiyahAndMacdonald_subring__zMul___redArg(v_inst_220_);
return v___x_222_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_subring__Module___redArg(lean_object* v_inst_223_){
_start:
{
lean_object* v___x_224_; lean_object* v_toAdd_225_; lean_object* v_toZero_226_; lean_object* v___x_228_; uint8_t v_isShared_229_; uint8_t v_isSharedCheck_234_; 
lean_inc_ref(v_inst_223_);
v___x_224_ = lp_AtiyahAndMacdonald_self__Module___redArg(v_inst_223_);
v_toAdd_225_ = lean_ctor_get(v___x_224_, 0);
v_toZero_226_ = lean_ctor_get(v___x_224_, 1);
v_isSharedCheck_234_ = !lean_is_exclusive(v___x_224_);
if (v_isSharedCheck_234_ == 0)
{
lean_object* v_unused_235_; 
v_unused_235_ = lean_ctor_get(v___x_224_, 2);
lean_dec(v_unused_235_);
v___x_228_ = v___x_224_;
v_isShared_229_ = v_isSharedCheck_234_;
goto v_resetjp_227_;
}
else
{
lean_inc(v_toZero_226_);
lean_inc(v_toAdd_225_);
lean_dec(v___x_224_);
v___x_228_ = lean_box(0);
v_isShared_229_ = v_isSharedCheck_234_;
goto v_resetjp_227_;
}
v_resetjp_227_:
{
lean_object* v___x_230_; lean_object* v___x_232_; 
v___x_230_ = lp_AtiyahAndMacdonald_subring__zMul___redArg(v_inst_223_);
if (v_isShared_229_ == 0)
{
lean_ctor_set(v___x_228_, 2, v___x_230_);
v___x_232_ = v___x_228_;
goto v_reusejp_231_;
}
else
{
lean_object* v_reuseFailAlloc_233_; 
v_reuseFailAlloc_233_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_233_, 0, v_toAdd_225_);
lean_ctor_set(v_reuseFailAlloc_233_, 1, v_toZero_226_);
lean_ctor_set(v_reuseFailAlloc_233_, 2, v___x_230_);
v___x_232_ = v_reuseFailAlloc_233_;
goto v_reusejp_231_;
}
v_reusejp_231_:
{
return v___x_232_;
}
}
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_subring__Module(lean_object* v_B_236_, lean_object* v_inst_237_, lean_object* v_A_238_){
_start:
{
lean_object* v___x_239_; 
v___x_239_ = lp_AtiyahAndMacdonald_subring__Module___redArg(v_inst_237_);
return v___x_239_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_submodule__zero___redArg(lean_object* v_inst_240_){
_start:
{
lean_inc(v_inst_240_);
return v_inst_240_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_submodule__zero___redArg___boxed(lean_object* v_inst_241_){
_start:
{
lean_object* v_res_242_; 
v_res_242_ = lp_AtiyahAndMacdonald_submodule__zero___redArg(v_inst_241_);
lean_dec(v_inst_241_);
return v_res_242_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_submodule__zero(lean_object* v_M_243_, lean_object* v_inst_244_, lean_object* v_inst_245_, lean_object* v_N_246_, lean_object* v_hN_247_){
_start:
{
lean_inc(v_inst_244_);
return v_inst_244_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_submodule__zero___boxed(lean_object* v_M_248_, lean_object* v_inst_249_, lean_object* v_inst_250_, lean_object* v_N_251_, lean_object* v_hN_252_){
_start:
{
lean_object* v_res_253_; 
v_res_253_ = lp_AtiyahAndMacdonald_submodule__zero(v_M_248_, v_inst_249_, v_inst_250_, v_N_251_, v_hN_252_);
lean_dec(v_inst_250_);
lean_dec(v_inst_249_);
return v_res_253_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_submodule__add___redArg___lam__0(lean_object* v_inst_254_, lean_object* v_x_255_, lean_object* v_y_256_){
_start:
{
lean_object* v___x_257_; 
v___x_257_ = lean_apply_2(v_inst_254_, v_x_255_, v_y_256_);
return v___x_257_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_submodule__add___redArg(lean_object* v_inst_258_){
_start:
{
lean_object* v___f_259_; 
v___f_259_ = lean_alloc_closure((void*)(lp_AtiyahAndMacdonald_submodule__add___redArg___lam__0), 3, 1);
lean_closure_set(v___f_259_, 0, v_inst_258_);
return v___f_259_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_submodule__add(lean_object* v_M_260_, lean_object* v_inst_261_, lean_object* v_inst_262_, lean_object* v_N_263_, lean_object* v_hN_264_){
_start:
{
lean_object* v___f_265_; 
v___f_265_ = lean_alloc_closure((void*)(lp_AtiyahAndMacdonald_submodule__add___redArg___lam__0), 3, 1);
lean_closure_set(v___f_265_, 0, v_inst_262_);
return v___f_265_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_submodule__add___boxed(lean_object* v_M_266_, lean_object* v_inst_267_, lean_object* v_inst_268_, lean_object* v_N_269_, lean_object* v_hN_270_){
_start:
{
lean_object* v_res_271_; 
v_res_271_ = lp_AtiyahAndMacdonald_submodule__add(v_M_266_, v_inst_267_, v_inst_268_, v_N_269_, v_hN_270_);
lean_dec(v_inst_267_);
return v_res_271_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_submodule__zMul___redArg___lam__0(lean_object* v_tozMul_272_, lean_object* v_a_273_, lean_object* v_x_274_){
_start:
{
lean_object* v___x_275_; 
v___x_275_ = lean_apply_2(v_tozMul_272_, v_a_273_, v_x_274_);
return v___x_275_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_submodule__zMul___redArg(lean_object* v_inst_276_){
_start:
{
lean_object* v_tozMul_277_; lean_object* v___f_278_; 
v_tozMul_277_ = lean_ctor_get(v_inst_276_, 2);
lean_inc(v_tozMul_277_);
lean_dec_ref(v_inst_276_);
v___f_278_ = lean_alloc_closure((void*)(lp_AtiyahAndMacdonald_submodule__zMul___redArg___lam__0), 3, 1);
lean_closure_set(v___f_278_, 0, v_tozMul_277_);
return v___f_278_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_submodule__zMul(lean_object* v_A_279_, lean_object* v_inst_280_, lean_object* v_M_281_, lean_object* v_inst_282_, lean_object* v_N_283_, lean_object* v_hN_284_){
_start:
{
lean_object* v___x_285_; 
v___x_285_ = lp_AtiyahAndMacdonald_submodule__zMul___redArg(v_inst_282_);
return v___x_285_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_submodule__zMul___boxed(lean_object* v_A_286_, lean_object* v_inst_287_, lean_object* v_M_288_, lean_object* v_inst_289_, lean_object* v_N_290_, lean_object* v_hN_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = lp_AtiyahAndMacdonald_submodule__zMul(v_A_286_, v_inst_287_, v_M_288_, v_inst_289_, v_N_290_, v_hN_291_);
lean_dec_ref(v_inst_287_);
return v_res_292_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_submodule__is__module___redArg(lean_object* v_inst_293_){
_start:
{
lean_object* v_toAdd_294_; lean_object* v_toZero_295_; lean_object* v___f_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v_toAdd_294_ = lean_ctor_get(v_inst_293_, 0);
v_toZero_295_ = lean_ctor_get(v_inst_293_, 1);
lean_inc(v_toZero_295_);
lean_inc(v_toAdd_294_);
v___f_296_ = lean_alloc_closure((void*)(lp_AtiyahAndMacdonald_submodule__add___redArg___lam__0), 3, 1);
lean_closure_set(v___f_296_, 0, v_toAdd_294_);
v___x_297_ = lp_AtiyahAndMacdonald_submodule__zMul___redArg(v_inst_293_);
v___x_298_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_298_, 0, v___f_296_);
lean_ctor_set(v___x_298_, 1, v_toZero_295_);
lean_ctor_set(v___x_298_, 2, v___x_297_);
return v___x_298_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_submodule__is__module(lean_object* v_A_299_, lean_object* v_inst_300_, lean_object* v_M_301_, lean_object* v_inst_302_, lean_object* v_N_303_, lean_object* v_hN_304_){
_start:
{
lean_object* v___x_305_; 
v___x_305_ = lp_AtiyahAndMacdonald_submodule__is__module___redArg(v_inst_302_);
return v___x_305_;
}
}
LEAN_EXPORT lean_object* lp_AtiyahAndMacdonald_submodule__is__module___boxed(lean_object* v_A_306_, lean_object* v_inst_307_, lean_object* v_M_308_, lean_object* v_inst_309_, lean_object* v_N_310_, lean_object* v_hN_311_){
_start:
{
lean_object* v_res_312_; 
v_res_312_ = lp_AtiyahAndMacdonald_submodule__is__module(v_A_306_, v_inst_307_, v_M_308_, v_inst_309_, v_N_310_, v_hN_311_);
lean_dec_ref(v_inst_307_);
return v_res_312_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_AtiyahAndMacdonald_AtiyahAndMacdonald_Ring_Base(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_AtiyahAndMacdonald_AtiyahAndMacdonald_Module_Base(uint8_t builtin) {
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
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
