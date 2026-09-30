// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_OverlayTypeClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
// --- flat members (END) ---
    int  Get(int a2);  // 0x4E8CB0
    char  Add(int a2);  // 0x4ED140
    char  Release(int a2, unsigned int * a3);  // 0x4ED180
    void Remove(void *a1 = 0);  // 0x4ED230
    int  GetSize(unsigned int * a2);  // 0x4ED260
    unsigned int  LoadTypeData(int a2);  // 0x4ED2A0
    VectorClass_flat *  QueryInterface(unsigned int * Block, char a2);  // 0x4F0570
};
} // namespace gamemd
