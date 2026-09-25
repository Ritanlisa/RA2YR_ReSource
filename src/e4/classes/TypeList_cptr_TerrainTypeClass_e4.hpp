// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TypeList_cptr_TerrainTypeClass {
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
    void GetClassIdentifier();  // 0x67A930
    unsigned int GetIndex(int a2);  // 0x67A960
    int SaveToINI(int a2);  // 0x67A980
    TypeList_flat * Add(char a2);  // 0x67AA30
    char AddRef(int a2);  // 0x67B1F0
    char SetCapacity(int a2,  unsigned int * a3);    // 0x67B230
    void TryFreeAndClear();  // 0x67B2E0
    int IndexOf(unsigned int * a2);  // 0x67B310
    unsigned int PointerToIndex(int a2);  // 0x67B350
    char Remove(int a2,  unsigned int * a3);    // 0x67B3D0
    int GetSize(unsigned int * a2);  // 0x67B4D0
    VectorClass_flat * Constructor(char a2);  // 0x67C150
};
} // namespace gamemd
