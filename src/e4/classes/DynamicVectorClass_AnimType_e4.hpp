// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVectorClass_AnimType {
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    int Capacity;  // 0x8
    char IsInitialized[1];  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned short __pad_00E;  // 0xE
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    AbstractClass * *  Release(int a2, unsigned int * a3);  // 0x525110
    VectorClass_flat *  Add(char a2, void *a1 = 0, void *a3 = 0);  // 0x525010
    int  GetSize(unsigned int * a2);  // 0x5251F0
    unsigned int Remove(int a2, void *a2_1 = 0);  // 0x525230
};
} // namespace gamemd
