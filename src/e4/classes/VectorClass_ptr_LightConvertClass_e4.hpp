// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_LightConvertClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    DynamicVector * Constructor_VectorClass_LightConvertClass___(char a2);  // 0x40C540
    void Destroy(void *a1 = 0);  // 0x40C230
    int Get(int a2, void *a1 = 0);  // 0x40C280
    char Add(int a2);  // 0x40C290
    char Release(int a2,  unsigned int * a3);    // 0x40C2D0
    void Remove(void *a1 = 0);  // 0x40C380
    int GetSize(unsigned int * a2);  // 0x40C3B0
    unsigned int GetCapacity(int a2);  // 0x40C3F0
    int FindItemIndex(unsigned int * a2);  // 0x40C4C0
    VectorClass_flat * QueryInterface(unsigned int * Block,  char a2);    // 0x40C4F0
};
} // namespace gamemd
