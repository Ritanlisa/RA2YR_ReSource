// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_ptr_CampaignClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    void* Count;  // 0x10
// --- flat members (END) ---
    DynamicVector *  Constructor_VectorClass_CampaignClass___(char a2);  // 0x4F0200
    int Get(void *a1_1, void *a1 = 0);  // 0x4E8A20
    void Destroy_0();  // 0x4E8A80
    unsigned int  GetItemIndex_0(int a2);  // 0x4E8AB0
    char  Add(int a2, void *a1 = 0, void *a3 = 0);  // 0x4EC300
    char  Release(int a2, unsigned int * a3);  // 0x4EC340
    void Remove(void *a1_1, void *a1 = 0);  // 0x4EC3F0
    int  GetSize(unsigned int * a2);  // 0x4EC420
    unsigned int  GetCapacity(int a2);  // 0x4EC460
    char  SetCapacity(int a2, unsigned int * a3);  // 0x4EC480
    int  FindItemIndex(unsigned int * a2);  // 0x4EC530
    char  SetCapacity_0(int a2, unsigned int * a3);  // 0x4EC6E0
    int  FindItemIndex_0(unsigned int * a2);  // 0x4EC790
    DynamicVector *  Constructor_VectorClass_SideClass___(char a2);  // 0x4F02A0
};
} // namespace gamemd
