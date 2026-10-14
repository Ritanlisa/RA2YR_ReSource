// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_ptr_LightSourceClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    void* Count;  // 0x10
// --- flat members (END) ---
    DynamicVector *  Constructor_VectorClass_LightSourceClass___(char a2);  // 0x5557D0
    int Get(int a2, void *a2_2);  // 0x555200
    void Destroy_0();  // 0x555260
    unsigned int  GetItemIndex_0(int a2);  // 0x555290
    char  Add(int a2, void *a1 = 0, void *a3 = 0);  // 0x5552C0
    char  Release(int a2, unsigned int * a3);  // 0x555300
    void Remove(void *a1_1, void *a1 = 0);  // 0x5553B0
    int  GetSize(unsigned int * a2);  // 0x5553E0
    unsigned int  GetCapacity(int a2);  // 0x555420
    char  SetCapacity(int a2, unsigned int * a3);  // 0x555440
    DynamicVector *  Constructor(char a2, void *a1 = 0, void *a3 = 0, void *a4 = 0);  // 0x555870
};
} // namespace gamemd
