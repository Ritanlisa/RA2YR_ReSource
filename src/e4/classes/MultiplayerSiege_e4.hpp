// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct MultiplayerSiege {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    char MultiplayerSiege_field_04[4];  // 0x4
    char MultiplayerSiege_field_08[4];  // 0x8
    char MultiplayerSiege_field_0C[4];  // 0xC
    char MultiplayerSiege_field_10[4];  // 0x10
    unsigned char q014;  // 0x14
    char q018[4];  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    char q024[4];  // 0x24
    unsigned char q028;  // 0x28
    ObjectClass* q02C;  // 0x2C
    ObjectClass* q030;  // 0x30
    unsigned char q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q03C;  // 0x3C
    void* q03F;  // 0x3F
    unsigned char q040;  // 0x40
    unsigned char q043;  // 0x43
    ObjectClass* q044;  // 0x44
    ObjectClass* q048;  // 0x48
    unsigned char q04C;  // 0x4C
    unsigned char q050;  // 0x50
    char q054[4];  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q060;  // 0x60
    unsigned char q064;  // 0x64
    ObjectClass* q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q073;  // 0x73
    unsigned char q080;  // 0x80
    unsigned char q084;  // 0x84
    unsigned char q090;  // 0x90
    unsigned char q094;  // 0x94
    unsigned char q0A8;  // 0xA8
    unsigned char q0AC;  // 0xAC
    unsigned char q0B0;  // 0xB0
    unsigned char q100;  // 0x100
    ObjectClass* q104;  // 0x104
    unsigned char q108;  // 0x108
    ObjectClass* q114;  // 0x114
    unsigned char q118;  // 0x118
    unsigned char q11C;  // 0x11C
    unsigned char q130;  // 0x130
    unsigned char q134;  // 0x134
    unsigned char q138;  // 0x138
    unsigned char q144;  // 0x144
    unsigned char q148;  // 0x148
    unsigned char q150;  // 0x150
    unsigned char q154;  // 0x154
    unsigned char q168;  // 0x168
    unsigned char q248;  // 0x248
    unsigned char q24C;  // 0x24C
    unsigned char q250;  // 0x250
    unsigned char q584;  // 0x584
    unsigned int q04C6;
// --- flat members (END) ---
    AbstractClass * * ProcessTurn(char a2);
    MultiplayerSiege * QueryInterface(char a2);
    char CheckStatus(int a1);
    char GetResult(unsigned int * ppv, int a2);
    char StubReturnFalse();
    int Read();
    int Write(void ** a1);
};

} // namespace gamemd
