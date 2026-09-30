// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_CrossDissolveEffect {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
// --- flat members (END) ---
    int  GetItem(int a2);  // 0x4B9C30
    int  Clear(int a2);  // 0x4B9C90
    char  FindItemIndex(int a2);  // 0x4B9CA0
    char  SetCapacity(int a2, unsigned int * a3);  // 0x4B9CE0
    void Destroy(void *a1 = 0);  // 0x4B9D90
    int  FindItemIndex_0(unsigned int * a2);  // 0x4B9DC0
    unsigned int  GetItemIndex(int a2);  // 0x4B9E00
    char  AddRef(int a2);  // 0x4B9F00
    char  Remove(int a2, unsigned int * a3);  // 0x4B9F40
    void ddtor(void *a1 = 0);  // 0x4B9FF0
    int  GetSize(unsigned int * a2);  // 0x4BA020
    unsigned int  Get(int a2);  // 0x4BA060
    unsigned int *  loc_4BA1B0(unsigned int * Block, char a2);  // 0x4BA1B0
    VectorClass_flat *  Add(unsigned int * Block, char a2);  // 0x4BA250
};
} // namespace gamemd
