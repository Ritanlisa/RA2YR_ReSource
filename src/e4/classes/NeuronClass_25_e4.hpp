// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct NeuronClass_25 {
// --- flat members (BEGIN) ---
    bool IsAllocated;  // 0xD
// --- flat members (END) ---
    int  Update(int a2, void *a1 = 0, void *a3 = 0, void *a4 = 0);  // 0x43AB20
    char  AddRef(int a2);  // 0x43AB30
    char  Release(int a2, unsigned int * a3);  // 0x43AB70
    int ddtor(void *a1 = 0);  // 0x43AC20
    int  Activate(unsigned int * a2);  // 0x43AC50
    VectorClass_flat *  QueryInterface(char a2);  // 0x43ACB0
    unsigned int  Fire(int a2);  // 0x43AC90
    unsigned char *m_1;  // 0x1 (offset-truth)
    unsigned int m_8;  // 0x8 (offset-truth)
    unsigned int m_C;  // 0xC (offset-truth)
    static double __pad_0(...);  // plateau: C2039/C3861 stub
    static double q004(...);  // plateau: C2039/C3861 stub
    static double q008(...);  // plateau: C2039/C3861 stub
    static double q00C(...);  // plateau: C2039/C3861 stub
};
} // namespace gamemd
