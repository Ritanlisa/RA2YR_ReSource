// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_ptr_MapRegionClass {
    unsigned int ptr_0;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    char IsInitialized[1];  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char __pad_00E;  // 0xE
    char __pad_F[1];  // 0xF
    void* Count;  // 0x10
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int Destroy(void *a1_1);  // 0x5AC3A0
    unsigned int  GetItemIndex(int a2);  // 0x5AC3D0
    int Get(int a2, void *a2_2);  // 0x5AC3F0
    char  Add(int a2, void *a1 = 0, void *a3 = 0);  // 0x5AC6A0
    char  Release(int a2, unsigned int * a3);  // 0x5AC6E0
    void Remove(void *a1 = 0, void *a2 = 0);  // 0x5AC790
    int  GetSize(unsigned int * a2);  // 0x5AC7C0
    unsigned int  GetCapacity(int a2);  // 0x5AC800
    char  SetCapacity(int a2, unsigned int * a3);  // 0x5AC820
    int  FindItemIndex(unsigned int * a2);  // 0x5AC8D0
    VectorClass_flat *  loc_5AD3E0(char a2);  // 0x5AD390
};
} // namespace gamemd
