// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_ThemeControl {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    int Clear(int a2);  // 0x4E8530
    char AddRef(int a2);  // 0x4EA2A0
    char Remove(int a2,  unsigned int * a3);    // 0x4EA2E0
    void ddtor();  // 0x4EA390
    int GetSize(unsigned int * a2);  // 0x4EA3C0
    unsigned int Get(int a2);  // 0x4EA400
    VectorClass_flat * Add(unsigned int * Block,  char a2);    // 0x4EF940
    void Destroy();  // 0x7212B0
    unsigned int GetItemIndex(int a2);  // 0x7212E0
    char SetCapacity(int a2,  unsigned int * a3);    // 0x721300
    int FindItemIndex(unsigned int * a2);  // 0x7213B0
    DynamicVector * Constructor_VectorClass_ThemeControl___(unsigned int * Block,  char a2);    // 0x7213E0
};
} // namespace gamemd
