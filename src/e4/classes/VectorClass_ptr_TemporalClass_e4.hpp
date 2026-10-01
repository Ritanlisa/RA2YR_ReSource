// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_TemporalClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
    DynamicVector * Constructor_VectorClass_TemporalClass___(unsigned int * Block, char a2);  // 0x71B550
    void Destroy(void *a1_1);  // 0x71B240
    unsigned int GetItemIndex(int a2);  // 0x71B270
    int Get(int a2, void *a2_2);  // 0x71B290
    char Add(int a2, void *a2_2, void *a3_1);  // 0x71B2A0
    char Release(int a2, unsigned int * a3);  // 0x71B2E0
    void Remove(void *a1_1);  // 0x71B390
    int GetSize(unsigned int * a2);  // 0x71B3C0
    unsigned int GetCapacity(int a2);  // 0x71B400
    char SetCapacity(int a2, unsigned int * a3);  // 0x71B420
    int FindItemIndex(unsigned int * a2);  // 0x71B4D0
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);  // 0x71B500
};
} // namespace gamemd
