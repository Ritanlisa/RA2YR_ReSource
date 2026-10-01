// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ushort {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    void Destroy(void *a1 = 0);  // 0x42D5A0
    unsigned int  GetItemIndex(int a2);  // 0x42D5D0
    short  Clear(int a2);  // 0x42D5F0
    char  AddRef(int a2);  // 0x42D8B0
    char  Remove(int a2, unsigned short * a3);  // 0x42D8F0
    void ddtor(void *a1 = 0);  // 0x42D9A0
    int  GetSize(unsigned short * a2);  // 0x42D9D0
    unsigned int  Get(int a2, void *a1 = 0);  // 0x42DA10
    char  SetCapacity(int a2, unsigned short * a3);  // 0x42DA30
    int  FindItemIndex(unsigned short * a2);  // 0x42DAE0
    VectorClass_ushort *  Add(unsigned int * Block, char a2, void *a1 = 0);  // 0x42DBB0
    DynamicVector *  Constructor(unsigned int * Block, char a2, void *a1 = 0);  // 0x42DC00
};
} // namespace gamemd
