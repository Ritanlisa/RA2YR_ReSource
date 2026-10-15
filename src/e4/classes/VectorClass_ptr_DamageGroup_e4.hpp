// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_ptr_DamageGroup {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    void* Count;  // 0x10
// --- flat members (END) ---
    int Destroy(void *a1_1);  // 0x48AD10
    unsigned int  GetItemIndex(int a2);  // 0x48AD40
    int  Clear(int a2);  // 0x48AD60
    char  AddRef(int a2);  // 0x48AD70
    char  Remove(int a2, unsigned int * a3);  // 0x48ADB0
    wchar_t * ddtor(void *a1_1);  // 0x48AE60
    int  GetSize(unsigned int * a2);  // 0x48AE90
    unsigned int  Get(int a2, void *a1 = 0);  // 0x48AED0
    char  SetCapacity(int a2, unsigned int * a3);  // 0x48AEF0
    int  FindItemIndex(unsigned int * a2);  // 0x48AFA0
    VectorClass_flat *  Add(char a2, void *a1 = 0, void *a3 = 0);  // 0x48AFD0
    DynamicVector *  Constructor_VectorClass_DamageGroup___(char a2);  // 0x48B020
    unsigned char __pad_00E;  // 0xE [X30:canon]
};
} // namespace gamemd
