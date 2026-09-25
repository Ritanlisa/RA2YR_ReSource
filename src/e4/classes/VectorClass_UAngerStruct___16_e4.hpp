// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_UAngerStruct___16 {
// --- flat members (BEGIN) ---
    AbstractClass * ptr_4;  // 0x4
    unsigned int u32_C;  // 0xC
    unsigned char u8_D;  // 0xD
    unsigned char q018;  // 0x18
    unsigned char q024;  // 0x24
    unsigned char q054;  // 0x54
    unsigned char q084;  // 0x84
// --- flat members (END) ---
    int Clear(int a2);  // 0x50E550
    char AddRef(int a2);  // 0x50EC20
    char Release(int a2, unsigned int * a3);  // 0x50EC60
    void ddtor();  // 0x50ED10
    int GetSize(unsigned int * a2);  // 0x50ED40
    unsigned int GetCapacity(int a2);  // 0x50ED80
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);  // 0x510090
};
} // namespace gamemd
