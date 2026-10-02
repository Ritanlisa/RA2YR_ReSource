// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_ptr_EgoClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    int Destroy(void *a1_1);  // 0x4C49A0
    unsigned int GetItemIndex(int a2);  // 0x4C49D0
    int Get(int a2, void *a2_2);  // 0x4C49F0
    char Add(int a2, void *a2_2, void *a3_1);  // 0x4C4A00
    char Release(int a2, unsigned int * a3);  // 0x4C4A40
    void Remove(void *a1_1);  // 0x4C4AF0
    int GetSize(unsigned int * a2);  // 0x4C4B20
    unsigned int GetCapacity(int a2);  // 0x4C4B60
    char SetCapacity(int a2, unsigned int * a3);  // 0x4C4B80
    int FindItemIndex(unsigned int * a2);  // 0x4C4C30
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);  // 0x4C4C60
    DynamicVector * Constructor_VectorClass_EgoClass___(unsigned int * Block, char a2);  // 0x4C4CB0
};
} // namespace gamemd
