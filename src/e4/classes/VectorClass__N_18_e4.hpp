// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass__N_18 {
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
    DynamicVector * Constructor(unsigned int * Block,  char a2, void *a3 = 0, void *a4 = 0, void *a5 = 0);    // 0x50E8C0
    char Remove(int a2,  int * a3);    // 0x50FC60
    char SetCapacity(int a2,  int * a3);    // 0x50FE20
    int FindItemIndex(unsigned int * a2);  // 0x50FFB0
    VectorClass_flat * Add(unsigned int * Block,  char a2);    // 0x510400
    DynamicVector * Constructor_0(unsigned int * Block,  char a2, void *a1 = 0);    // 0x5104A0
    void Destroy(void *a1 = 0);  // 0x50E760
    unsigned int GetItemIndex(int a2);  // 0x50E7A0
    unsigned int * Clear(unsigned int * a2,  int a3);    // 0x50E7C0
    char AddRef(int a2);  // 0x50FC00
    void ddtor(void *a1 = 0);  // 0x50FD70
    int GetSize(unsigned int * a2);  // 0x50FDB0
    unsigned int Get(int a2, void *a1 = 0);  // 0x50FE00
};
} // namespace gamemd
