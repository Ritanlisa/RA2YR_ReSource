// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_ptr_SubTitle {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    void* Count;  // 0x10
// --- flat members (END) ---
    int Get(int a2, void *a2_2);  // 0x6CA7C0
    char  Constructor_VectorClass_SubTitle___(int a2);  // 0x6CA820
    char  Release(int a2, unsigned int * a3);  // 0x6CAA10
    void Remove(void *a1_1, void *a1 = 0);  // 0x6CAAC0
    int  GetSize(unsigned int * a2);  // 0x6CAAF0
    unsigned int  GetCapacity(int a2);  // 0x6CAB30
    VectorClass_flat *  QueryInterface(char a2);  // 0x6CAB50
};
} // namespace gamemd
