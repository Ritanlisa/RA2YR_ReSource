// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_ptr_FoggedObjectClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    DynamicVector * Constructor_VectorClass_FoggedObjectClass___(unsigned int * Block, char a2);  // 0x45AB00
    void Destroy(void *a1_1);  // 0x45A070
    unsigned int GetItemIndex(int a2);  // 0x45A0A0
    int Get(int a2, void *a2_2);  // 0x45A0C0
    char Add(int a2, void *a2_2, void *a3_1);  // 0x45A640
    char SetCapacity(int a2, unsigned int * a3);  // 0x45A680
    int FindItemIndex(unsigned int * a2);  // 0x45A730
    char Release(int a2, unsigned int * a3);  // 0x45AB50
    void Remove(void *a1_1);  // 0x45AC00
    int GetSize(unsigned int * a2);  // 0x45AC30
    unsigned int GetCapacity(int a2);  // 0x45AC70
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);  // 0x45AC90
};
} // namespace gamemd
