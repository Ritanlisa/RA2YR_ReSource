// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_Building {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
// --- flat members (END) ---
    char  Set(int a2, unsigned int * a3, void *a1 = 0);  // 0x4E94A0
    VectorClass_flat *  QueryInterface(char a2);  // 0x4EF580
    int  Count(int a2);  // 0x4E8340
    int  GetSize(unsigned int * a2);  // 0x4E9580
    unsigned int  GetCapacity(int a2);  // 0x4E95C0
};
} // namespace gamemd
