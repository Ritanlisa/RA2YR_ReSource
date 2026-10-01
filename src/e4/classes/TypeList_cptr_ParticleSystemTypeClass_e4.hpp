// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TypeList_flat;  // fix_fwd_type_supply
struct TypeList_cptr_ParticleSystemTypeClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    unsigned int Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
    unsigned int *m_1;
    unsigned int m_10;
    unsigned int m_8;
    unsigned int m_C;
// --- flat members (END) ---
    void GetClassIdentifier();  // 0x459F90
    unsigned int LoadTypeData(int a2);  // 0x459FC0
    char Add(int a2, unsigned int * a3, void *a3_2);  // 0x45A300
    int Remove(unsigned int * a2);  // 0x45A3B0
    TypeList_flat * QueryInterface(unsigned int * Block, char a2);  // 0x717B70
};
} // namespace gamemd
