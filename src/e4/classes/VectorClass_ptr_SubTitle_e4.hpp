// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_SubTitle {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    void Destroy();  // 0x6CA7C0
    unsigned int GetItemIndex(int a2);  // 0x6CA7F0
    int Get(int a2);  // 0x6CA810
    char Add(int a2);  // 0x6CA820
    char SetCapacity(int a2,  unsigned int * a3);    // 0x6CA860
    int FindItemIndex(unsigned int * a2);  // 0x6CA910
    DynamicVector * Constructor_VectorClass_SubTitle___(unsigned int * Block,  char a2);    // 0x6CA9C0
    char Release(int a2,  unsigned int * a3);    // 0x6CAA10
    void Remove();  // 0x6CAAC0
    int GetSize(unsigned int * a2);  // 0x6CAAF0
    unsigned int GetCapacity(int a2);  // 0x6CAB30
    VectorClass_flat * QueryInterface(unsigned int * Block,  char a2);    // 0x6CAB50
};
} // namespace gamemd
