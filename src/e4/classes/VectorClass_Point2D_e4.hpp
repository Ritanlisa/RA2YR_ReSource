// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_Point2D {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
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
    unsigned int * Count(unsigned int * a2, int a3);  // 0x5D05F0
    char Get(int a2);  // 0x5D07F0
    char Release(int a2, unsigned int * a3);  // 0x5D0850
    void Set();  // 0x5D0920
    int GetSize(unsigned int * a2);  // 0x5D0950
    unsigned int GetCapacity(int a2);  // 0x5D09A0
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);  // 0x5D16C0
    void Destroy();  // 0x5D2780
    unsigned int GetItemIndex(int a2);  // 0x5D27B0
    char SetCapacity(int a2, unsigned int * a3);  // 0x5D2BC0
    int FindItemIndex(unsigned int * a2);  // 0x5D2C70
    DynamicVector * Constructor_VectorClass_MSSfx___(unsigned int * Block, char a2);  // 0x5D2D90
};
} // namespace gamemd
