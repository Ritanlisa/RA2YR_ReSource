// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_ptr_ScriptTypeClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    void* Count;  // 0x10
// --- flat members (END) ---
    DynamicVector *  Constructor_VectorClass_ScriptTypeClass___(char a2);  // 0x4F0520
    DynamicVector *  Constructor_VectorClass_OverlayTypeClass___(char a2);  // 0x4F05C0
    int Get(int a2, void *a2_2);  // 0x4E8C00
    void Destroy_0();  // 0x4E8C60
    unsigned int  GetItemIndex_0(int a2);  // 0x4E8C90
    char  Add(int a2, void *a1 = 0, void *a3 = 0);  // 0x4ECEE0
    char  Release(int a2, unsigned int * a3);  // 0x4ECF20
    void Remove(void *a1_1, void *a1 = 0);  // 0x4ECFD0
    int  GetSize(unsigned int * a2);  // 0x4ED000
    unsigned int  LoadTypeData(int a2);  // 0x4ED040
    char  SetCapacity(int a2, unsigned int * a3);  // 0x4ED060
    int  FindItemIndex(unsigned int * a2);  // 0x4ED110
    char  SetCapacity_0(int a2, unsigned int * a3);  // 0x4ED2C0
    int  FindItemIndex_0(unsigned int * a2);  // 0x4ED370
    unsigned char __pad_00E;  // 0xE [X30:canon]
};
} // namespace gamemd
