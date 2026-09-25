// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_TEventClass {
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
    void Destroy();  // 0x71FBA0
    unsigned int GetItemIndex(int a2);  // 0x71FBD0
    int Get(int a2);  // 0x71FBF0
    char Add(int a2);  // 0x71FC00
    char Release(int a2, unsigned int * a3);  // 0x71FC40
    void Remove();  // 0x71FCF0
    int GetSize(unsigned int * a2);  // 0x71FD20
    unsigned int GetCapacity(int a2);  // 0x71FD60
    char SetCapacity(int a2, unsigned int * a3);  // 0x71FD80
    int FindItemIndex(unsigned int * a2);  // 0x71FE30
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);  // 0x71FE60
    DynamicVector * Constructor_VectorClass_TEventClass___(unsigned int * Block, char a2);  // 0x71FEB0
};
} // namespace gamemd
