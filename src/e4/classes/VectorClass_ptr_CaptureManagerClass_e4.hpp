// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_CaptureManagerClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
    DynamicVector * Constructor_VectorClass_CaptureManagerClass___(unsigned int * Block, char a2);  // 0x4730F0
    void Destroy(void *a1_1);  // 0x472AE0
    unsigned int GetItemIndex(int a2);  // 0x472B10
    int Get(int a2, void *a2_2);  // 0x472B30
    char Add(int a2, void *a2_2, void *a3_1);  // 0x472DA0
    char Release(int a2, unsigned int * a3);  // 0x472DE0
    void Remove(void *a1_1);  // 0x472E90
    int GetSize(unsigned int * a2);  // 0x472EC0
    unsigned int GetCapacity(int a2);  // 0x472F00
    char SetCapacity(int a2, unsigned int * a3);  // 0x472F20
    int FindItemIndex(unsigned int * a2);  // 0x472FD0
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);  // 0x4730A0
};
} // namespace gamemd
