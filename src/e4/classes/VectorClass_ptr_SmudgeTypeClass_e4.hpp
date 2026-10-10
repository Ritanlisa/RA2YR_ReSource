// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_ptr_SmudgeTypeClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    void* Count;  // 0x10
// --- flat members (END) ---
    DynamicVector *  Constructor_VectorClass_SmudgeTypeClass___(char a2);  // 0x4F0660
    DynamicVector *  Constructor_VectorClass_TerrainTypeClass___(char a2);  // 0x4F0700
    DynamicVector *  Constructor_VectorClass_BuildingTypeClass___(char a2);  // 0x4F07A0
    int Get(void *a1_1, void *a1 = 0);  // 0x4E8CC0
    void Destroy_0();  // 0x4E8D20
    unsigned int  GetItemIndex_0(int a2);  // 0x4E8D50
    void Destroy_1();  // 0x4E8D80
    unsigned int  GetItemIndex_1(int a2);  // 0x4E8DB0
    char  Add(int a2, void *a1 = 0, void *a3 = 0);  // 0x4ED3A0
    char  Release(int a2, unsigned int * a3);  // 0x4ED3E0
    void Remove(void *a1_1, void *a1 = 0);  // 0x4ED490
    int  GetSize(unsigned int * a2);  // 0x4ED4C0
    unsigned int  LoadTypeData(int a2);  // 0x4ED500
    char  SetCapacity(int a2, unsigned int * a3);  // 0x4ED520
    int  FindItemIndex(unsigned int * a2);  // 0x4ED5D0
    char  SetCapacity_0(int a2, unsigned int * a3);  // 0x4ED780
    int  FindItemIndex_0(unsigned int * a2);  // 0x4ED830
    char  SetCapacity_1(int a2, unsigned int * a3);  // 0x4ED9E0
    int  FindItemIndex_1(unsigned int * a2);  // 0x4EDA90
};
} // namespace gamemd
