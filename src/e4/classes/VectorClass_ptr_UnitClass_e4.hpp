// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_UnitClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    void Destroy(void *a1 = 0);  // 0x4E88A0
    unsigned int GetItemIndex(int a2);  // 0x4E88D0
    int Get(int a2, void *a1 = 0);  // 0x4E88F0
    void Destroy_0();  // 0x4E8900
    unsigned int GetItemIndex_0(int a2);  // 0x4E8930
    char Add(int a2);  // 0x4EB980
    char Release(int a2,  unsigned int * a3);    // 0x4EB9C0
    void Remove(void *a1 = 0);  // 0x4EBA70
    int GetSize(unsigned int * a2);  // 0x4EBAA0
    unsigned int GetCapacity(int a2);  // 0x4EBAE0
    char SetCapacity(int a2,  unsigned int * a3);    // 0x4EBB00
    int FindItemIndex(unsigned int * a2);  // 0x4EBBB0
    char SetCapacity_0(int a2,  unsigned int * a3);    // 0x4EBD60
    int FindItemIndex_0(unsigned int * a2);  // 0x4EBE10
    VectorClass_flat * QueryInterface(unsigned int * Block,  char a2);    // 0x4EFF30
    DynamicVector * Constructor_VectorClass_UnitClass___(unsigned int * Block,  char a2);    // 0x4EFF80
    DynamicVector * Constructor_VectorClass_HouseClass___(unsigned int * Block,  char a2);    // 0x4F0020
};
} // namespace gamemd
