// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_ptr_MultiMission {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
// --- flat members (END) ---
    int Get(int a2, void *a2_2);  // 0x69C5F0
    char Add(int a2, void *a2_2, void *a3_1);  // 0x69CD40
    char Release(int a2, unsigned int * a3);  // 0x69CD80
    void Remove(void *a1_1);  // 0x69CE30
    int GetSize(unsigned int * a2);  // 0x69CE60
    unsigned int GetCapacity(int a2);  // 0x69CEA0
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);  // 0x69D590
};
} // namespace gamemd
