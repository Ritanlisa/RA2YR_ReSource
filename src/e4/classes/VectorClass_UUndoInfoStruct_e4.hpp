// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_UUndoInfoStruct {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    char Release(int a2,  unsigned int * a3);    // 0x6B44A0
    char SetCapacity(int a2,  unsigned int * a3);    // 0x6B4650
    void Destroy();  // 0x6B43B0
    unsigned int GetItemIndex(int a2);  // 0x6B43E0
    unsigned int * Clear(unsigned int * a2,  int a3);    // 0x6B4410
    char AddRef(int a2);  // 0x6B4440
    void ddtor();  // 0x6B45A0
    int GetSize(unsigned int * a2);  // 0x6B45D0
    unsigned int GetCapacity(int a2);  // 0x6B4620
    int FindItemIndex(unsigned int * a2);  // 0x6B4760
    VectorClass_flat * QueryInterface(unsigned int * Block,  char a2);    // 0x6B47A0
    DynamicVector * Constructor_VectorClass_UndoInfoStruct_(unsigned int * Block,  char a2);    // 0x6B47F0
};
} // namespace gamemd
