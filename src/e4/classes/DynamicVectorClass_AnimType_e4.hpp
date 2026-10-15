// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVectorClass_AnimType {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
// --- flat members (END) ---
    AbstractClass * *  Release(int a2, unsigned int * a3);  // 0x525110
    VectorClass_flat *  Add(char a2, void *a1 = 0, void *a3 = 0);  // 0x525010
    int  GetSize(unsigned int * a2);  // 0x5251F0
    unsigned int Remove(int a2, void *a2_1 = 0);  // 0x525230
    unsigned char *m_1;  // 0x1 (offset-truth)
    unsigned int m_8;  // 0x8 (offset-truth)
    unsigned int m_C;  // 0xC (offset-truth)
unsigned int q000;  // 0x0 [X35-L7 kind=unsigned int]
    unsigned char __pad_00E;  // 0xE [X30:canon]
};
} // namespace gamemd
