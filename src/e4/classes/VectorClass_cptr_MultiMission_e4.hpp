// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_cptr_MultiMission {
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    char __pad_8[4];  // 0x8
    char IsInitialized[1];  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char __pad_00E;  // 0xE
    char __pad_F[1];  // 0xF
    void* Count;  // 0x10
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int j_vt09(unsigned char * a1, signed int a3, int a4, int a5, int a6, int a7);  // 0x5EF190
    unsigned int *  j_vt00(char a2);  // 0x5EF290
    int Capacity(int a2);  // 0x5EEBB0
    char  SetAt(int a2, unsigned int * a3);  // 0x5EEC50
    VectorClass_flat * GetAt(unsigned int * Block, char a2);  // 0x5EED90
};
} // namespace gamemd
