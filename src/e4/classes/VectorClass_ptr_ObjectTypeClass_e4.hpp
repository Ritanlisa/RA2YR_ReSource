// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_ObjectTypeClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    DynamicVector *  Constructor_VectorClass_ObjectTypeClass___(unsigned int * Block, char a2);  // 0x5F9E30
    void Destroy(void *a1 = 0);  // 0x5F9B00
    unsigned int  GetItemIndex(int a2);  // 0x5F9B30
    int  Get(int a2, void *a1 = 0);  // 0x5F9B50
    char  Add(int a2, void *a1 = 0, void *a3 = 0);  // 0x5F9B80
    char  Release(int a2, unsigned int * a3);  // 0x5F9BC0
    void Remove(void *a1 = 0);  // 0x5F9C70
    int  GetSize(unsigned int * a2);  // 0x5F9CA0
    unsigned int  LoadTypeData(int a2);  // 0x5F9CE0
    char  SetCapacity(int a2, unsigned int * a3);  // 0x5F9D00
    int  FindItemIndex(unsigned int * a2);  // 0x5F9DB0
    VectorClass_flat *  QueryInterface(unsigned int * Block, char a2);  // 0x5F9DE0
};
} // namespace gamemd
