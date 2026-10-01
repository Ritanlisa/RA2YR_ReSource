// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_SpotLightClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    DynamicVector *  Constructor_VectorClass_SpotLightClass___(unsigned int * Block, char a2);  // 0x6002D0
    unsigned int  GetItemIndex(int a2);  // 0x5FFFF0
    int  Get(int a2, void *a1 = 0);  // 0x600010
    char  Add(int a2, void *a1 = 0, void *a3 = 0);  // 0x600020
    char  Release(int a2, unsigned int * a3);  // 0x600060
    void Remove(void *a1 = 0);  // 0x600110
    int  GetSize(unsigned int * a2);  // 0x600140
    unsigned int  GetCapacity(int a2);  // 0x600180
    char  SetCapacity(int a2, unsigned int * a3);  // 0x6001A0
    int  FindItemIndex(unsigned int * a2);  // 0x600250
    VectorClass_flat *  QueryInterface(unsigned int * Block, char a2);  // 0x600280
};
} // namespace gamemd
