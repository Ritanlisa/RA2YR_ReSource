// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_ptr_BuildingTypeClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
// --- flat members (END) ---
    char Release(int a2, unsigned int * a3);  // 0x4ED8A0
    int SaveToINI(int a2);  // 0x4E8DD0
    char Add(int a2, void *a2_2, void *a3_1);  // 0x4ED860
    int  Remove(unsigned int * a2);  // 0x4ED980
    unsigned int Remove(int a2);  // 0x4ED9C0
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);  // 0x4F0750
};
} // namespace gamemd
