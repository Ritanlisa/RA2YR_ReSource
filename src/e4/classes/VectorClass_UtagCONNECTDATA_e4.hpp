// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_UtagCONNECTDATA {
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
    DynamicVector * Constructor_VectorClass_tagCONNECTDATA_(unsigned int * Block,  char a2);    // 0x4A0E10
    void Destroy();  // 0x4A0EB0
    unsigned int GetItemIndex(int a2);  // 0x4A0EE0
    unsigned int * Clear(unsigned int * a2,  int a3);    // 0x4A0F00
    char AddRef(int a2);  // 0x4A0F80
    char Release(int a2,  unsigned int * a3);    // 0x4A0FE0
    int GetSize(unsigned int * a2);  // 0x4A10D0
    unsigned int GetCapacity(int a2);  // 0x4A1120
    char SetCapacity(int a2,  unsigned int * a3);    // 0x4A1140
    int FindItemIndex(unsigned int * a2);  // 0x4A1200
    VectorClass_flat * QueryInterface(unsigned int * Block,  char a2);    // 0x4A14A0
};
} // namespace gamemd
