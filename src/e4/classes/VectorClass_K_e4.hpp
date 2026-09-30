// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_K {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    void Destroy(void *a1 = 0);  // 0x6BED50
    char  Release(int a2, unsigned int * a3);  // 0x6C6210
    void ddtor(void *a1 = 0);  // 0x6C62C0
    int  GetSize(unsigned int * a2);  // 0x6C62F0
    unsigned int  GetCapacity(int a2);  // 0x6C6330
    char  SetCapacity(int a2, unsigned int * a3);  // 0x6C6350
    int  FindItemIndex(unsigned int * a2);  // 0x6C6450
    VectorClass_flat *  QueryInterface(unsigned int * Block, char a2);  // 0x6C6480
    DynamicVector *  Constructor(unsigned int * Block, char a2);  // 0x6C64D0
    unsigned int  GetItemIndex(int a2);  // 0x6BED80
    int  Clear(int a2);  // 0x6BEDA0
    char  AddRef(int a2);  // 0x6C61D0
};
} // namespace gamemd
