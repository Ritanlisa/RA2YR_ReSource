// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);  // 0x54A7B0
    DynamicVector * Constructor(unsigned int * Block, char a2, void *a3_1);  // 0x54A800
    int Get(void *a1_1);  // 0x54A1F0
    unsigned int Get(int a2);  // 0x54A220
    int Get(int a2, void *a2_2);  // 0x54A240
    char LoadTypeData(int a2, void *a2_2, void *a3_1);  // 0x54A4B0
    char Release(int a2, unsigned int * a3);  // 0x54A4F0
    void LoadTypeData(void *a1_1);  // 0x54A5A0
    int GetSize(unsigned int * a2);  // 0x54A5D0
    unsigned int LoadTypeData(int a2);  // 0x54A610
    char SetCapacity(int a2, unsigned int * a3);  // 0x54A630
    int FindItemIndex(unsigned int * a2);  // 0x54A6E0
};
} // namespace gamemd
