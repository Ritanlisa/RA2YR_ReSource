// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_ptr_PlanningMemberClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    void* Count;  // 0x10
// --- flat members (END) ---
    DynamicVector *  Constructor_VectorClass_PlanningMemberClass___(char a2);  // 0x63ECA0
    DynamicVector *  Constructor_VectorClass_PlanningBranchClass___(char a2);  // 0x63ED40
    int Destroy(void *a1_1);  // 0x63DB60
    unsigned int  GetItemIndex(int a2);  // 0x63DB90
    int  Get(int a2, void *a1 = 0);  // 0x63DBB0
    void Destroy_0();  // 0x63DBC0
    unsigned int  GetItemIndex_0(int a2);  // 0x63DBF0
    char  Add(int a2, void *a1 = 0, void *a3 = 0);  // 0x63DD40
    char  Release(int a2, unsigned int * a3);  // 0x63DD80
    void Remove(void *a1 = 0, void *a2 = 0);  // 0x63DE30
    int  GetSize(unsigned int * a2);  // 0x63DE60
    unsigned int  GetCapacity(int a2);  // 0x63DEA0
    char  SetCapacity(int a2, unsigned int * a3);  // 0x63DF20
    int  FindItemIndex(unsigned int * a2);  // 0x63E020
    char  SetCapacity_0(int a2, unsigned int * a3);  // 0x63E230
    int  FindItemIndex_0(unsigned int * a2);  // 0x63E2E0
};
} // namespace gamemd
