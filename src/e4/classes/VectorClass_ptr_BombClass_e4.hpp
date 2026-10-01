// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_BombClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
// --- flat members (END) ---
    int  Get(int a2, void *a1 = 0);  // 0x40B690
    char  Add(int a2, void *a1 = 0, void *a3 = 0);  // 0x40B700
    void Remove(void *a1 = 0);  // 0x40B7F0
    int  GetSize(unsigned int * a2);  // 0x40B820
    unsigned int  GetCapacity(int a2);  // 0x40B860
    VectorClass_flat *  QueryInterface(unsigned int * Block, char a2);  // 0x40BBC0
};
} // namespace gamemd
