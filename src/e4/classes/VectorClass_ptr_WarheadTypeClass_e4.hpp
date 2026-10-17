// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_ptr_WarheadTypeClass {
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
    DynamicVector *  Constructor_VectorClass_WarheadTypeClass___(char a2);  // 0x40F8F0
    int Destroy(void *a1_1);  // 0x40F5E0
    unsigned int  GetItemIndex(int a2);  // 0x40F610
    int Get(int a2, void *a2_2);  // 0x40F630
    char  Add(int a2, void *a1 = 0, void *a3 = 0);  // 0x40F640
    char  Release(int a2, unsigned int * a3);  // 0x40F680
    void Remove(void *a1_1, void *a1 = 0);  // 0x40F730
    int  GetSize(unsigned int * a2);  // 0x40F760
    unsigned int  LoadTypeData(int a2);  // 0x40F7A0
    char  SetCapacity(int a2, unsigned int * a3);  // 0x40F7C0
    int  FindItemIndex(unsigned int * a2);  // 0x40F870
    VectorClass_flat *  QueryInterface(char a2);  // 0x40F8A0
};
} // namespace gamemd
