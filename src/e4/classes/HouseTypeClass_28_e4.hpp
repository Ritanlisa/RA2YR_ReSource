// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TypeList_flat;  // fix_fwd_type_supply
struct HouseTypeClass_28 {
// --- flat members (BEGIN) ---
    bool IsAllocated;  // 0xD
    bool IsInitialized;  // 0x12
// --- flat members (END) ---
    wchar_t * ddtor(void *a1 = 0);  // 0x512990
    int  Seek(int a2, void *a2_2 = 0, void *a3_1 = 0);  // 0x5129E0
    TypeList_flat *  QueryInterface(char a2);  // 0x512A90
    char  AddRef(int a2);  // 0x5133E0
    char  Release(int a2, unsigned int * a3);  // 0x513610
    int Read(unsigned int * a2, void *a2_2, void *a3 = 0);  // 0x513710
    unsigned int  Write(int a2);  // 0x5129C0

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q00C;  // X10 supply (member_lookup)
    int q010;  // X10 supply (member_lookup)
    unsigned int u32_4;  // X10 supply (member_lookup)
    unsigned int u32_8;  // X10 supply (member_lookup)
};
} // namespace gamemd
