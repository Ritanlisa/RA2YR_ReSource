// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct NeuronClass_25 {
    unsigned int __pad_0;  // 0x0
    int q004;  // 0x4
    unsigned int m_8;  // 0x8
    unsigned int m_C;  // 0xC
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int Update(int a2, void *a2_2, void *a3_1, void *a4_1);  // 0x43AB20
    char  AddRef(int a2);  // 0x43AB30
    char  Release(int a2, unsigned int * a3);  // 0x43AB70
    int ddtor(void *a1 = 0);  // 0x43AC20
    int  Activate(unsigned int * a2);  // 0x43AC50
    VectorClass_flat *  QueryInterface(char a2);  // 0x43ACB0
    unsigned int  Fire(int a2);  // 0x43AC90
};
} // namespace gamemd
