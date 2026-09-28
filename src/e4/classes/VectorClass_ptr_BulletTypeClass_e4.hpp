// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_BulletTypeClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
// --- flat members (END) ---
    int Get(int a2);  // 0x4E8FB0
    char Add(int a2);  // 0x4EE440
    char Release(int a2,  unsigned int * a3);    // 0x4EE480
    void Remove();  // 0x4EE530
    int GetSize(unsigned int * a2);  // 0x4EE560
    unsigned int LoadTypeData(int a2);  // 0x4EE5A0
    VectorClass_flat * QueryInterface(unsigned int * Block,  char a2);    // 0x4F0A70
};
} // namespace gamemd
