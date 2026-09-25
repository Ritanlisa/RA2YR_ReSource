// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct UDPInterfaceClass_Destru {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q050;  // 0x50
    unsigned char q054;  // 0x54
    unsigned char q064;  // 0x64
    unsigned char q068;  // 0x68
    unsigned char q080;  // 0x80
    unsigned char q084;  // 0x84
    unsigned char q100;  // 0x100
    unsigned char q104;  // 0x104
    unsigned char q114;  // 0x114
    unsigned char q128;  // 0x128
    unsigned char q130;  // 0x130
    unsigned char q134;  // 0x134
    unsigned char q260;  // 0x260
    unsigned char q304;  // 0x304
    unsigned int u32_651C;  // 0x651C
    unsigned int u32_6554;  // 0x6554
// --- flat members (END) ---
    AbstractClass * * Bind(int a2);
    int COMStub();
    int COMStub_Ret2();
    int CheckStatus();
    int GetStatistics(int a2);
    int Receive();
    short ddtor(WinsockInterfaceClass * aP1, unsigned int arg4, unsigned char * a3, unsigned int a5, WinsockInterfaceClass * aP5, char a7, short a8);
    void Reset(unsigned int * a2, short a3);
};

} // namespace gamemd
