// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_ptr_RadSiteClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    void Destroy(void *a1_1);  // 0x65BEF0
    unsigned int GetItemIndex(int a2);  // 0x65BF20
    int Get(int a2, void *a2_2);  // 0x65BF40
    char Add(int a2, void *a2_2, void *a3_1);  // 0x65BF50
    char Release(int a2, unsigned int * a3);  // 0x65BF90
    void Remove(void *a1_1);  // 0x65C040
    int GetSize(unsigned int * a2);  // 0x65C070
    unsigned int GetCapacity(int a2);  // 0x65C0B0
    char SetCapacity(int a2, unsigned int * a3);  // 0x65C0D0
    int FindItemIndex(unsigned int * a2);  // 0x65C180
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);  // 0x65C1B0
    DynamicVector * Constructor_VectorClass_RadSiteClass___(unsigned int * Block, char a2);  // 0x65C200
};
} // namespace gamemd
