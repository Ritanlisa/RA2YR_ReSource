// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct Map_WorldDominationTour_43 {
// --- flat members (BEGIN) ---
    bool IsAllocated;  // 0xD
// --- flat members (END) ---
    AbstractClass * *  Release(int a2, char * a3);  // 0x76A3F0
    char  AddRef(int a2);  // 0x76A390
    wchar_t * ddtor(void *a1_1);  // 0x76A4F0
    VectorClass_flat *  QueryInterface(char a2);  // 0x76A770
    unsigned int *  Seek(unsigned int * a2, int a3);  // 0x769D30
    int  Read(unsigned int * a2, void *a1 = 0, void *a3 = 0);  // 0x76A520
    unsigned int  Write(int a2);  // 0x76A570

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q004;  // X10 supply (member_lookup)
    int q008;  // X10 supply (member_lookup)
    int q00C;  // X10 supply (member_lookup)
};
} // namespace gamemd
