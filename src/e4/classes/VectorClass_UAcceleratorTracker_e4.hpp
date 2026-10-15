// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_UAcceleratorTracker {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
// --- flat members (END) ---
    unsigned int *  Clear(unsigned int * a2, int a3);  // 0x5D5130
    char  AddRef(int a2);  // 0x5D53B0
    char  Release(int a2, unsigned int * a3);  // 0x5D5410
    wchar_t * ddtor(void *a1_1);  // 0x5D5500
    int  GetSize(unsigned int * a2);  // 0x5D5530
    unsigned int  GetCapacity(int a2);  // 0x5D5580
    VectorClass_flat *  QueryInterface(char a2);  // 0x5D5780
    unsigned char __pad_00E;  // 0xE [X30:canon]
};
} // namespace gamemd
