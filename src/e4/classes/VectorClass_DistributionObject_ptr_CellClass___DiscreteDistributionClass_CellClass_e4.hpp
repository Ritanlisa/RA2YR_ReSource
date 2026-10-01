// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    char  Release(int a2, int * a3);  // 0x4E0840
    char  SetCapacity(int a2, int * a3);  // 0x4E0B10
    char  AddRef(int a2);  // 0x4E07E0
    int  FindItemIndex(unsigned int * a2);  // 0x4E0CA0
    VectorClass_flat *  QueryInterface(unsigned int * Block, char a2);  // 0x4E0D80
    DynamicVector *  Constructor(unsigned int * Block, char a2, void *a1 = 0);  // 0x4E0E20
    unsigned int *  Clear(unsigned int * a2, int a3);  // 0x4E0250
    unsigned int  GetCapacity(int a2);  // 0x4E09E0
    void Destroy(void *a1 = 0);  // 0x4E0AB0
    unsigned int  GetItemIndex(int a2);  // 0x4E0AF0
    void ddtor(void *a1 = 0);  // 0x4E0950
};
} // namespace gamemd
