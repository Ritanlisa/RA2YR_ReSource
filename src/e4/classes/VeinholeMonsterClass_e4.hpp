// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct VeinholeMonsterClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    unsigned char q010;  // 0x10
    unsigned int q011;  // 0x11
    bool IsAllocated;  // 0x13
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned int q01A;  // 0x1A
    unsigned char q01C;  // 0x1C
    bool q01D;  // 0x1D
    unsigned int q01E;  // 0x1E
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned int q027;  // 0x27
    unsigned char q028;  // 0x28
    unsigned int u32_2A;  // 0x2A
    bool q02B;  // 0x2B
// --- flat members (END) ---
    VeinholeMonsterClass * SpreadTiberium(char a2);
    int CheckStatus();
    int StubReturn264();
    int StubReturn63();
    int Update(TechnoTypeClass * aP0, int * a1, int aP2, void *a2 = 0);
    int ddtor(int a1, unsigned int * a2);
};

} // namespace gamemd
