// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_TeamClass {
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
    void Destroy();  // 0x4E84D0
    unsigned int GetItemIndex(int a2);  // 0x4E8500
    int Get(int a2);  // 0x4E8520
    void Destroy_0();  // 0x4E8960
    unsigned int GetItemIndex_0(int a2);  // 0x4E8990
    void Destroy_1();  // 0x4E89C0
    unsigned int GetItemIndex_1(int a2);  // 0x4E89F0
    char Add(int a2);  // 0x4EA040
    char Release(int a2,  unsigned int * a3);    // 0x4EA080
    void Remove();  // 0x4EA130
    int GetSize(unsigned int * a2);  // 0x4EA160
    unsigned int GetCapacity(int a2);  // 0x4EA1A0
    char SetCapacity(int a2,  unsigned int * a3);    // 0x4EA1C0
    int FindItemIndex(unsigned int * a2);  // 0x4EA270
    char SetCapacity_0(int a2,  unsigned int * a3);    // 0x4EBFC0
    int FindItemIndex_0(unsigned int * a2);  // 0x4EC070
    char SetCapacity_1(int a2,  unsigned int * a3);    // 0x4EC220
    int FindItemIndex_1(unsigned int * a2);  // 0x4EC2D0
    VectorClass_flat * QueryInterface(unsigned int * Block,  char a2);    // 0x4EF8A0
    DynamicVector * Constructor_VectorClass_TeamClass___(unsigned int * Block,  char a2);    // 0x4EF8F0
    DynamicVector * Constructor_VectorClass_AnimClass___(unsigned int * Block,  char a2);    // 0x4F00C0
    DynamicVector * Constructor_VectorClass_FactoryClass___(unsigned int * Block,  char a2);    // 0x4F0160
};
} // namespace gamemd
