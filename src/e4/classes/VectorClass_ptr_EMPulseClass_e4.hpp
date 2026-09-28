// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_EMPulseClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    void Destroy();  // 0x4C5B60
    unsigned int GetItemIndex(int a2);  // 0x4C5B90
    int Get(int a2);  // 0x4C5BB0
    char Add(int a2);  // 0x4C5BC0
    char Release(int a2,  unsigned int * a3);    // 0x4C5C00
    void Remove();  // 0x4C5CB0
    int GetSize(unsigned int * a2);  // 0x4C5CE0
    unsigned int GetCapacity(int a2);  // 0x4C5D20
    char SetCapacity(int a2,  unsigned int * a3);    // 0x4C5D40
    int FindItemIndex(unsigned int * a2);  // 0x4C5DF0
    VectorClass_flat * QueryInterface(unsigned int * Block,  char a2);    // 0x4C5E20
    DynamicVector * Constructor_VectorClass_EMPulseClass___(unsigned int * Block,  char a2);    // 0x4C5E70
};
} // namespace gamemd
