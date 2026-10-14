// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_cptr_MultiMission {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    void* Count;  // 0x10
// --- flat members (END) ---
    int j_vt09(unsigned char * a1, signed int a3, int a4, int a5, int a6, int a7);  // 0x5EF190
    unsigned int *  j_vt00(char a2);  // 0x5EF290
    int Capacity(int a2);  // 0x5EEBB0
    char  SetAt(int a2, unsigned int * a3);  // 0x5EEC50
    VectorClass_flat * GetAt(unsigned int * Block, char a2);  // 0x5EED90

    unsigned int u32_4C;  // X10 supply (member_lookup)
};
} // namespace gamemd
