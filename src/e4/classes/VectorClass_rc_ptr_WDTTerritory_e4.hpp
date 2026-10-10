// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_rc_ptr_WDTTerritory {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
// --- flat members (END) ---
    int  Release(int a2, unsigned int * a3);  // 0x76B8C0
    unsigned int *  loc_76B6C0(int a2, int a3);  // 0x76B6C0
    unsigned int *  Clear(unsigned int * a2, int a3);  // 0x76B760
    char  AddRef(int a2);  // 0x76B870
    int ddtor(void *a1_1);  // 0x76B9E0
    int  GetSize(int a2);  // 0x76BA10
    unsigned int  GetCapacity(int a2);  // 0x76BA50
    VectorClass_flat *  QueryInterface(char a2);  // 0x76BBC0
};
} // namespace gamemd
