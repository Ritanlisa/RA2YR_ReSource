// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_UScoutStruct___33 {
// --- flat members (BEGIN) ---
    AbstractClass * ptr_4;  // 0x4
    AbstractClass * ptr_8;  // 0x8
    unsigned char u8_C;  // 0xC
    unsigned char u8_D;  // 0xD
    AbstractClass * ptr_10;  // 0x10
    unsigned char q018;  // 0x18
    unsigned char q024;  // 0x24
    AbstractClass * q034;  // 0x34
    unsigned char q054;  // 0x54
    unsigned char q084;  // 0x84
    AbstractClass * q130;  // 0x130
    AbstractClass * q304;  // 0x304
// --- flat members (END) ---
    void ddtor(void *a1 = 0);  // 0x50E4A0
    unsigned int  GetCapacity(int a2);  // 0x50E4D0
    int  GetSize(unsigned int * a2);  // 0x50EB40
    DynamicVector *  QueryInterface(unsigned int * Block, char a2);  // 0x510040
};
} // namespace gamemd
