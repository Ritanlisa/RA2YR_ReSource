// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TypeList_flat;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct HouseTypeClass_36 {
// --- flat members (BEGIN) ---
    bool IsAllocated;  // 0xD
    bool IsInitialized;  // 0x12
// --- flat members (END) ---
    wchar_t * ddtor(void *a1_1);  // 0x512900
    int  Seek(int a2);  // 0x512950
    TypeList_flat *  QueryInterface(char a2);  // 0x512A40
    VectorClass_flat *  Constructor(char a2, void *a1 = 0, void *a3 = 0, void *a4 = 0);  // 0x512B80
    char  AddRef(int a2);  // 0x513010
    char  Release(int a2, unsigned int * a3);  // 0x513240
    int  Read(unsigned int * a2, void *a1 = 0, void *a3 = 0);  // 0x513340
    char  SetCapacity(int a2, unsigned int * a3);  // 0x513420
    int  IndexOf(unsigned int * a2);  // 0x513500
    unsigned int  Write(int a2);  // 0x512930
    unsigned int  PointerToIndex(int a2);  // 0x513540

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q00C;  // X10 supply (member_lookup)
    int q010;  // X10 supply (member_lookup)
    unsigned int u32_4;  // X10 supply (member_lookup)
    unsigned int u32_8;  // X10 supply (member_lookup)
};
} // namespace gamemd
