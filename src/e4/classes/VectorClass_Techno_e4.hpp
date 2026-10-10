// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_Techno {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
// --- flat members (END) ---
    wchar_t * ddtor(void *a1_1);  // 0x40BA50
    int  GetSize(unsigned int * a2);  // 0x40BA80
    unsigned int  GetCapacity(int a2);  // 0x40BAC0
};
} // namespace gamemd
