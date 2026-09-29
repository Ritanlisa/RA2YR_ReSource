// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_VocClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    void Destroy(void *a1 = 0);  // 0x7518D0
    unsigned int GetItemIndex(int a2);  // 0x751900
    int Get(int a2, void *a1 = 0);  // 0x751920
    char Add(int a2);  // 0x751930
    char Release(int a2,  unsigned int * a3);    // 0x751970
    void Remove(void *a1 = 0);  // 0x751A20
    int GetSize(unsigned int * a2);  // 0x751A50
    unsigned int GetCapacity(int a2);  // 0x751A90
    char SetCapacity(int a2,  unsigned int * a3);    // 0x751AB0
    int FindItemIndex(unsigned int * a2);  // 0x751B60
    VectorClass_flat * QueryInterface(unsigned int * Block,  char a2);    // 0x751B90
    DynamicVector * Constructor_VectorClass_VocClass___(unsigned int * Block,  char a2);    // 0x751BE0
};
} // namespace gamemd
