// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_PBG {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
// --- flat members (END) ---
    int  Count(int a2);  // 0x558230
    char  Get(int a2, void *a1 = 0);  // 0x558240
    char  Release(int a2, unsigned int * a3);  // 0x558280
    void Set(void *a1_1, void *a2_1, void *a3_1);  // 0x558330
    int  GetSize(unsigned int * a2);  // 0x558360
    unsigned int  GetCapacity(int a2);  // 0x5583A0
    VectorClass_flat *  QueryInterface(char a2);  // 0x5584A0
    unsigned char __pad_00E;  // 0xE [X30:canon]
};
} // namespace gamemd
