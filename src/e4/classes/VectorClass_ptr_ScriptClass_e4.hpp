// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_ptr_ScriptClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    void Destroy(void *a1_1);  // 0x40E7F0
    unsigned int GetItemIndex(int a2);  // 0x40E820
    int Get(int a2, void *a2_2);  // 0x40E840
    char Add(int a2, void *a2_2, void *a3_1);  // 0x40E850
    char Release(int a2, unsigned int * a3);  // 0x40E890
    void Remove(void *a1_1);  // 0x40E940
    int GetSize(unsigned int * a2);  // 0x40E970
    unsigned int GetCapacity(int a2);  // 0x40E9B0
    char SetCapacity(int a2, unsigned int * a3);  // 0x40E9D0
    int FindItemIndex(unsigned int * a2);  // 0x40EA80
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);  // 0x40EAB0
    DynamicVector * Constructor_VectorClass_ScriptClass___(unsigned int * Block, char a2);  // 0x40EB00
};
} // namespace gamemd
