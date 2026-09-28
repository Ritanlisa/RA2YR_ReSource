// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_VoxelAnimClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    DynamicVector * Constructor_VectorClass_VoxelAnimClass___(char a2);  // 0x40F1D0
    void Destroy();  // 0x40EEC0
    unsigned int GetItemIndex(int a2);  // 0x40EEF0
    int Get(int a2);  // 0x40EF10
    char Add(int a2);  // 0x40EF20
    char Release(int a2,  unsigned int * a3);    // 0x40EF60
    void Remove();  // 0x40F010
    int GetSize(unsigned int * a2);  // 0x40F040
    unsigned int GetCapacity(int a2);  // 0x40F080
    char SetCapacity(int a2,  unsigned int * a3);    // 0x40F0A0
    int FindItemIndex(unsigned int * a2);  // 0x40F150
    VectorClass_flat * QueryInterface(unsigned int * Block,  char a2);    // 0x40F180
};
} // namespace gamemd
