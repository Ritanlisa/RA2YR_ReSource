// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
    unsigned char q014;  // 0x14
    unsigned int q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned int q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned int q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q03C;  // 0x3C
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q050;  // 0x50
    unsigned int q054;  // 0x54
// --- flat members (END) ---
    VectorClass_flat * QueryInterface(char a2);  // 0x54A7B0
    DynamicVector * Constructor(char a2);  // 0x54A800
    void Destroy();  // 0x54A1F0
    unsigned int GetItemIndex(int a2);  // 0x54A220
    int Get(int a2);  // 0x54A240
    char Add(int a2);  // 0x54A4B0
    char Release(int a2,  unsigned int * a3);    // 0x54A4F0
    void Remove();  // 0x54A5A0
    int GetSize(unsigned int * a2);  // 0x54A5D0
    unsigned int LoadTypeData(int a2);  // 0x54A610
    char SetCapacity(int a2,  unsigned int * a3);    // 0x54A630
    int FindItemIndex(unsigned int * a2);  // 0x54A6E0
};
} // namespace gamemd
