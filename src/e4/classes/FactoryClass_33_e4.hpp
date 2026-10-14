// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct FactoryClass_33 {
// --- flat members (BEGIN) ---
    bool IsAllocated;  // 0xD
// --- flat members (END) ---
    int  Seek(int a2);  // 0x4CA8E0
    char  AddRef(int a2);  // 0x4CA8F0
    char  Release(int a2, unsigned int * a3);  // 0x4CA930
    wchar_t * ddtor(void *a1 = 0);  // 0x4CA9E0
    int Read(unsigned int * a2, void *a2_2, void *a3 = 0);  // 0x4CAA10
    VectorClass_flat *  QueryInterface(char a2);  // 0x4CAB50
    unsigned int  Write(int a2);  // 0x4CAA50

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q004;  // X10 supply (member_lookup)
    int q008;  // X10 supply (member_lookup)
    int q00C;  // X10 supply (member_lookup)
};
} // namespace gamemd
