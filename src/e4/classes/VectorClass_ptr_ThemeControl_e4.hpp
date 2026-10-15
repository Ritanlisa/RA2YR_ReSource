// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_ptr_ThemeControl {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    void* Count;  // 0x10
// --- flat members (END) ---
    int  Clear(int a2);  // 0x4E8530
    void ddtor(void *a1_1);  // 0x4EA2A0
    int  GetSize(unsigned int * a2);  // 0x4EA3C0
    unsigned int  Get(int a2, void *a1 = 0);  // 0x4EA400
    VectorClass_flat *  Add(char a2, void *a1 = 0, void *a3 = 0);  // 0x4EF940
    int Constructor_VectorClass_ThemeControl___(void *a1_1);  // 0x7212B0
    unsigned char __pad_00E;  // 0xE [X30:canon]
};
} // namespace gamemd
