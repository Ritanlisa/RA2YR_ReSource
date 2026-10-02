// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_ptr_AlphaShapeClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    int Destroy(void *a1_1);  // 0x421800
    unsigned int GetItemIndex(int a2);  // 0x421830
    int Get(int a2, void *a2_2);  // 0x421850
    char Add(int a2, void *a2_2, void *a3_1);  // 0x421860
    char Release(int a2, unsigned int * a3);  // 0x4218A0
    void Remove(void *a1_1);  // 0x421950
    int GetSize(unsigned int * a2);  // 0x421980
    unsigned int GetCapacity(int a2);  // 0x4219C0
    char SetCapacity(int a2, unsigned int * a3);  // 0x4219E0
    int FindItemIndex(unsigned int * a2);  // 0x421A90
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);  // 0x421AC0
    unsigned int * loc_421B10(unsigned int * Block, char a2);  // 0x421B10
};
} // namespace gamemd
