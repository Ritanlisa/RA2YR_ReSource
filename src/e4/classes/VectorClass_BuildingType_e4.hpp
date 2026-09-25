// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_BuildingType {
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
    void Destroy();  // 0x50E6A0
    TypeList_flat * Constructor(unsigned int * Block, char a2);  // 0x50E7E0
    char Set(int a2, unsigned int * a3);  // 0x50E950
    char SetCapacity(int a2, unsigned int * a3);  // 0x50F780
    char SetCapacity_0(int a2, unsigned int * a3);  // 0x50F8C0
    int FindItemIndex_0(unsigned int * a2);  // 0x50F970
    VectorClass_flat * Get(unsigned int * Block, char a2);  // 0x50FFF0
    VectorClass_flat * Constructor_0(unsigned int * Block, char a2);  // 0x510310
    int Count(int a2);  // 0x50E4F0
    unsigned int GetItemIndex(int a2);  // 0x50E6D0
    int GetElement(int a2);  // 0x50E6F0
    char AddRef(int a2);  // 0x50E910
    int GetSize(unsigned int * a2);  // 0x50EA30
    unsigned int GetCapacity(int a2);  // 0x50EA70
    char CompareVectors(int a2);  // 0x50F740
    int FindItemIndex(unsigned int * a2);  // 0x50F860
    unsigned int GetItemIndex_0(int a2);  // 0x50F8A0
};
} // namespace gamemd
