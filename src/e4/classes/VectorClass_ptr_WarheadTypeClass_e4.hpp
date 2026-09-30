// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_WarheadTypeClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    DynamicVector *  Constructor_VectorClass_WarheadTypeClass___(unsigned int * Block, char a2);  // 0x40F8F0
    void Destroy(void *a1 = 0);  // 0x40F5E0
    unsigned int  GetItemIndex(int a2);  // 0x40F610
    int  Get(int a2);  // 0x40F630
    char  Add(int a2);  // 0x40F640
    char  Release(int a2, unsigned int * a3);  // 0x40F680
    void Remove(void *a1 = 0);  // 0x40F730
    int  GetSize(unsigned int * a2);  // 0x40F760
    unsigned int  LoadTypeData(int a2);  // 0x40F7A0
    char  SetCapacity(int a2, unsigned int * a3);  // 0x40F7C0
    int  FindItemIndex(unsigned int * a2);  // 0x40F870
    VectorClass_flat *  QueryInterface(unsigned int * Block, char a2);  // 0x40F8A0
};
} // namespace gamemd
