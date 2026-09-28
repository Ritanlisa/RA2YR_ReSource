// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_ParticleSystemTypeClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
// --- flat members (END) ---
    int Get(int a2);  // 0x4E9130
    char Add(int a2);  // 0x4EEDC0
    char Release(int a2,  unsigned int * a3);    // 0x4EEE00
    void Remove();  // 0x4EEEB0
    int GetSize(unsigned int * a2);  // 0x4EEEE0
    unsigned int LoadTypeData(int a2);  // 0x4EEF20
    VectorClass_flat * QueryInterface(unsigned int * Block,  char a2);    // 0x4F0CF0
};
} // namespace gamemd
