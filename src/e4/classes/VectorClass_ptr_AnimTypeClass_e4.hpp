// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_AnimTypeClass {
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
    DynamicVector * Constructor_VectorClass_AnimTypeClass___(char a2);  // 0x4F0980
    DynamicVector * Constructor_VectorClass_InfantryTypeClass___(char a2);  // 0x4F0A20
    DynamicVector * Constructor_VectorClass_BulletTypeClass___(char a2);  // 0x4F0AC0
    void Destroy();  // 0x4E8EA0
    unsigned int GetItemIndex(int a2);  // 0x4E8ED0
    int Get(int a2);  // 0x4E8EF0
    void Destroy_0();  // 0x4E8F00
    unsigned int GetItemIndex_0(int a2);  // 0x4E8F30
    void Destroy_1();  // 0x4E8F60
    unsigned int GetItemIndex_1(int a2);  // 0x4E8F90
    char Add(int a2);  // 0x4EDF80
    char Release(int a2,  unsigned int * a3);    // 0x4EDFC0
    void Remove();  // 0x4EE070
    int GetSize(unsigned int * a2);  // 0x4EE0A0
    unsigned int LoadTypeData(int a2);  // 0x4EE0E0
    char SetCapacity(int a2,  unsigned int * a3);    // 0x4EE100
    int FindItemIndex(unsigned int * a2);  // 0x4EE1B0
    char SetCapacity_0(int a2,  unsigned int * a3);    // 0x4EE360
    int FindItemIndex_0(unsigned int * a2);  // 0x4EE410
    char SetCapacity_1(int a2,  unsigned int * a3);    // 0x4EE5C0
    int FindItemIndex_1(unsigned int * a2);  // 0x4EE670
    VectorClass_flat * QueryInterface(unsigned int * Block,  char a2);    // 0x4F0930
};
} // namespace gamemd
