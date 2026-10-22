// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_ptr_AITriggerTypeClass {
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    char IsInitialized[1];  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char __pad_00E;  // 0xE
    char __pad_F[1];  // 0xF
    void* Count;  // 0x10
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    DynamicVector *  Constructor_VectorClass_AITriggerTypeClass___(char a2);  // 0x4EF710
    DynamicVector *  Constructor_VectorClass_TriggerClass___(char a2);  // 0x4EF9E0
    DynamicVector *  Constructor_VectorClass_TriggerTypeClass___(char a2);  // 0x4EFA80
    int Get(int a2, void *a2_2);  // 0x4E83B0
    void Destroy_0();  // 0x4E8540
    unsigned int  GetItemIndex_0(int a2);  // 0x4E8570
    void Destroy_1();  // 0x4E85A0
    unsigned int  GetItemIndex_1(int a2);  // 0x4E85D0
    char  Add(int a2, void *a1 = 0, void *a3 = 0);  // 0x4E9920
    char  Release(int a2, unsigned int * a3);  // 0x4E9960
    void Remove(void *a1_1, void *a1 = 0);  // 0x4E9A10
    int  GetSize(unsigned int * a2);  // 0x4E9A40
    unsigned int  LoadTypeData(int a2);  // 0x4E9A80
    char  SetCapacity(int a2, unsigned int * a3);  // 0x4E9AA0
    int  FindItemIndex(unsigned int * a2);  // 0x4E9B50
    char  SetCapacity_1(int a2, unsigned int * a3);  // 0x4EA5A0
    int  FindItemIndex_1(unsigned int * a2);  // 0x4EA8B0
};
} // namespace gamemd
