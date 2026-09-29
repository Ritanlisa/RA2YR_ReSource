// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_UAngerStruct {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    void Destroy(void *a1 = 0);  // 0x50E500
    unsigned int GetItemIndex(int a2);  // 0x50E530
    void Destroy_0();  // 0x50E560
    unsigned int GetItemIndex_0(int a2);  // 0x50E590
    unsigned int * Clear(unsigned int * a2,  int a3);    // 0x50E5B0
    char SetCapacity(int a2,  unsigned int * a3);    // 0x50EDA0
    int FindItemIndex(unsigned int * a2);  // 0x50EE50
    char AddRef(int a2);  // 0x50EE80
    char Release(int a2,  unsigned int * a3);    // 0x50EEE0
    void ddtor(void *a1 = 0);  // 0x50EFD0
    int GetSize(unsigned int * a2);  // 0x50F000
    unsigned int GetCapacity(int a2);  // 0x50F050
    char SetCapacity_0(int a2,  unsigned int * a3);    // 0x50F070
    int FindItemIndex_0(unsigned int * a2);  // 0x50F170
    DynamicVector * Constructor(unsigned int * Block,  char a2, void *a3 = 0, void *a4 = 0, void *a5 = 0);    // 0x5100E0
    VectorClass_flat * QueryInterface(unsigned int * Block,  char a2);    // 0x510130
    DynamicVector * Constructor_VectorClass_AngerStruct_(unsigned int * Block,  char a2);    // 0x510180
};
} // namespace gamemd
