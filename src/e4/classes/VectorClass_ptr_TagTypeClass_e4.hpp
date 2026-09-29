// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_TagTypeClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    void Destroy(void *a1 = 0);  // 0x6E64E0
    unsigned int GetItemIndex(int a2);  // 0x6E6510
    int Get(int a2, void *a1 = 0);  // 0x6E6530
    char Add(int a2);  // 0x6E6540
    char Release(int a2,  unsigned int * a3);    // 0x6E6580
    void Remove(void *a1 = 0);  // 0x6E6630
    int GetSize(unsigned int * a2);  // 0x6E6660
    unsigned int LoadTypeData(int a2);  // 0x6E66A0
    char SetCapacity(int a2,  unsigned int * a3);    // 0x6E66C0
    int FindItemIndex(unsigned int * a2);  // 0x6E6770
    VectorClass_flat * QueryInterface(unsigned int * Block,  char a2);    // 0x6E67A0
    DynamicVector * Constructor_VectorClass_TagTypeClass___(unsigned int * Block,  char a2);    // 0x6E67F0
};
} // namespace gamemd
