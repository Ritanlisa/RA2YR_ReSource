// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_ptr_UnitTypeClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
// --- flat members (END) ---
    int Get(int a2, void *a2_2);  // 0x4E8E90
    char  Add(int a2, void *a1 = 0, void *a3 = 0);  // 0x4EDD20
    char  Release(int a2, unsigned int * a3);  // 0x4EDD60
    void Remove(void *a1_1, void *a1 = 0);  // 0x4EDE10
    int  GetSize(unsigned int * a2);  // 0x4EDE40
    unsigned int  LoadTypeData(int a2);  // 0x4EDE80
    VectorClass_flat *  QueryInterface(char a2);  // 0x4F0890
};
} // namespace gamemd
