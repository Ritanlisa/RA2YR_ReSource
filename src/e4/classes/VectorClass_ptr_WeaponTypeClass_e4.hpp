// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_ptr_WeaponTypeClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    void* Count;  // 0x10
// --- flat members (END) ---
    DynamicVector *  Constructor_VectorClass_WeaponTypeClass___(char a2);  // 0x40FEC0
    int Destroy(void *a1_1);  // 0x40FBB0
    unsigned int  GetItemIndex(int a2);  // 0x40FBE0
    int Get(int a2, void *a2_2);  // 0x40FC00
    char  Add(int a2, void *a1 = 0, void *a3 = 0);  // 0x40FC10
    char  Release(int a2, unsigned int * a3);  // 0x40FC50
    void Remove(void *a1_1, void *a1 = 0);  // 0x40FD00
    int  GetSize(unsigned int * a2);  // 0x40FD30
    unsigned int  LoadTypeData(int a2);  // 0x40FD70
    char  SetCapacity(int a2, unsigned int * a3);  // 0x40FD90
    int  FindItemIndex(unsigned int * a2);  // 0x40FE40
    VectorClass_flat *  QueryInterface(char a2);  // 0x40FE70
    unsigned char __pad_00E;  // 0xE [X30:canon]
};
} // namespace gamemd
