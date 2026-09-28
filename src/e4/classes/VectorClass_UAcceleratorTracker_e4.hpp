// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_UAcceleratorTracker {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
// --- flat members (END) ---
    unsigned int * Clear(unsigned int * a2,  int a3);    // 0x5D5130
    char AddRef(int a2);  // 0x5D53B0
    char Release(int a2,  unsigned int * a3);    // 0x5D5410
    void ddtor();  // 0x5D5500
    int GetSize(unsigned int * a2);  // 0x5D5530
    unsigned int GetCapacity(int a2);  // 0x5D5580
    VectorClass_flat * QueryInterface(unsigned int * Block,  char a2);    // 0x5D5780
};
} // namespace gamemd
