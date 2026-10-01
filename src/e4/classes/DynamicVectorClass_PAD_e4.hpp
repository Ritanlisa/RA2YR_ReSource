// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVectorClass_PAD {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
    unsigned int *__pad_0;
// --- flat members (END) ---
    void ddtor(void *a1 = 0);  // 0x49E950
    int  Clear(int a2);  // 0x49E9A0
    void Clear_49E9B0();  // 0x49E9B0
    char  AddRef(int a2);  // 0x49EA30
    char  Remove(int a2, unsigned int * a3);  // 0x49EA70
    int  GetSize(unsigned int * a2);  // 0x49EB20
    char  SetCapacity(int a2, unsigned int * a3);  // 0x49ED30
    int  FindItemIndex(unsigned int * a2);  // 0x49EDE0
    DynamicVector *  Add(unsigned int * Block, char a2, void *a1 = 0);  // 0x49EE10
    DynamicVector *  Destructor(unsigned int * Block, char a2);  // 0x49F040
    unsigned int  Get(int a2, void *a1 = 0);  // 0x49E980
    unsigned int  GetCount(int a2);  // 0x49E9E0
};
} // namespace gamemd
