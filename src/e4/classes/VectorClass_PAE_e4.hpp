// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_PAE {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
// --- flat members (END) ---
    int Count(int a2);  // 0x7B4310
    char Get(int a2, void *a1 = 0);  // 0x7B4320
    char Release(int a2,  unsigned int * a3);    // 0x7B4360
    void Set(void *a1 = 0, void *a2 = 0, void *a3 = 0);  // 0x7B4410
    int GetSize(unsigned int * a2);  // 0x7B4440
    unsigned int GetCapacity(int a2);  // 0x7B4480
    VectorClass_flat * QueryInterface(unsigned int * Block,  char a2);    // 0x7B4580
};
} // namespace gamemd
