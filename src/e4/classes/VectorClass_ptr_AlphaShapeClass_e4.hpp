// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_AlphaShapeClass {
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
    void Destroy();  // 0x421800
    unsigned int GetItemIndex(int a2);  // 0x421830
    int Get(int a2);  // 0x421850
    char Add(int a2);  // 0x421860
    char Release(int a2,  unsigned int * a3);    // 0x4218A0
    void Remove();  // 0x421950
    int GetSize(unsigned int * a2);  // 0x421980
    unsigned int GetCapacity(int a2);  // 0x4219C0
    char SetCapacity(int a2,  unsigned int * a3);    // 0x4219E0
    int FindItemIndex(unsigned int * a2);  // 0x421A90
    VectorClass_flat * QueryInterface(unsigned int * Block,  char a2);    // 0x421AC0
    unsigned int * loc_421B10(unsigned int * Block,  char a2);    // 0x421B10
};
} // namespace gamemd
