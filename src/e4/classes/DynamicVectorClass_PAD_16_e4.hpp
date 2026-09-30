// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVectorClass_PAD_16 {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    unsigned int Items;  // 0x4
    unsigned int Capacity;  // 0x8
    unsigned char IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    unsigned int __pad_0;
// --- flat members (END) ---
    int  Get(int a2);  // 0x49EA00
    char  Add(int a2);  // 0x49EB50
    char  Release(int a2, unsigned int * a3);  // 0x49EB90
    void Remove(void *a1 = 0);  // 0x49EC40
    int  GetSize(unsigned int * a2);  // 0x49EC70
    VectorClass_flat *  QueryInterface(unsigned int * Block, char a2);  // 0x49EFF0
    unsigned int  GetCapacity(int a2);  // 0x49ECB0
};
} // namespace gamemd
