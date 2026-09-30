// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TypeList_Infantry {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
    unsigned int __pad_0;
// --- flat members (END) ---
    void ddtor();  // 0x5128A0
    unsigned int  GetIndex(int a2);  // 0x5128D0
    int  Clear(int a2);  // 0x5128F0
    TypeList_flat *  Add(unsigned int * Block, char a2);  // 0x5129F0
    char  AddRef(int a2);  // 0x512C40
    DynamicVector *  Constructor(unsigned int * Block, char a2);  // 0x512E20
    char  Remove(int a2, unsigned int * a3);  // 0x512E70
    int  GetSize(unsigned int * a2);  // 0x512F70
    DynamicVector *  Constructor_0(unsigned int * Block, char a2);  // 0x5131F0
    DynamicVector *  Constructor_1(unsigned int * Block, char a2);  // 0x5135C0
};
} // namespace gamemd
