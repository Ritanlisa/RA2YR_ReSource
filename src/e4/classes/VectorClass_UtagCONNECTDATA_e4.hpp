// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_UtagCONNECTDATA {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    void* Count;  // 0x10
// --- flat members (END) ---
    DynamicVector *  Constructor_VectorClass_tagCONNECTDATA_(char a2);  // 0x4A0E10
    int Destroy(void *a1_1);  // 0x4A0EB0
    unsigned int  GetItemIndex(int a2);  // 0x4A0EE0
    unsigned int *  Clear(unsigned int * a2, int a3);  // 0x4A0F00
    char  AddRef(int a2);  // 0x4A0F80
    char  Release(int a2, unsigned int * a3);  // 0x4A0FE0
    int  GetSize(unsigned int * a2);  // 0x4A10D0
    unsigned int  GetCapacity(int a2);  // 0x4A1120
    char  SetCapacity(int a2, unsigned int * a3);  // 0x4A1140
    int  FindItemIndex(unsigned int * a2);  // 0x4A1200
    VectorClass_flat *  QueryInterface(char a2);  // 0x4A14A0
};
} // namespace gamemd
