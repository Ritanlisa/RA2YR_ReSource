// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct GameSetup {
// --- flat members (BEGIN) ---
    AbstractClass* q000;  // 0x0
    unsigned char q004;  // 0x4
    AbstractClass * ptr_8;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char u8_15;  // 0x15
    unsigned char u8_16;  // 0x16
    unsigned char u8_17;  // 0x17
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q034;  // 0x34
    unsigned char q040;  // 0x40
    unsigned char q050;  // 0x50
    unsigned char q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q064;  // 0x64
    unsigned char q068;  // 0x68
    unsigned char q080;  // 0x80
    unsigned char q084;  // 0x84
    unsigned char q088;  // 0x88
    unsigned int u32_B0;  // 0xB0
    unsigned char q0B4;  // 0xB4
    unsigned char q0B8;  // 0xB8
    unsigned char q0E0;  // 0xE0
    unsigned char q0E4;  // 0xE4
    unsigned char q0E8;  // 0xE8
    unsigned char q0EC;  // 0xEC
    unsigned char q180;  // 0x180
    unsigned char q184;  // 0x184
    unsigned char q224;  // 0x224
    unsigned char q228;  // 0x228
    unsigned char q22C;  // 0x22C
    unsigned char q2C4;  // 0x2C4
    unsigned char q2C8;  // 0x2C8
    unsigned char q2CC;  // 0x2CC
    unsigned int q374;  // 0x374
    unsigned char q378;  // 0x378
    unsigned char q37C;  // 0x37C
    unsigned char q380;  // 0x380
    unsigned char q384;  // 0x384
    unsigned char q388;  // 0x388
    unsigned char q548;  // 0x548
    unsigned char q54C;  // 0x54C
    unsigned char q578;  // 0x578
    unsigned char q57C;  // 0x57C
    unsigned char q708;  // 0x708
    unsigned char q70C;  // 0x70C
    unsigned char q7B8;  // 0x7B8
    unsigned char q7BC;  // 0x7BC
    unsigned int q884;  // 0x884
    unsigned char q888;  // 0x888
    unsigned char q88C;  // 0x88C
    unsigned char q894;  // 0x894
    unsigned char q898;  // 0x898
    unsigned char q900;  // 0x900
    unsigned char q904;  // 0x904
    unsigned char q1094;  // 0x1094
    unsigned char q1098;  // 0x1098
    unsigned char q1400;  // 0x1400
    unsigned char q1404;  // 0x1404
    unsigned char q18E0;  // 0x18E0
    unsigned char q18E4;  // 0x18E4
    unsigned int q2180;  // 0x2180
    unsigned int FormatToString;
    unsigned int q0104;
// --- flat members (END) ---
    AbstractClass * * WriteINI(CCINIClass * aP1, unsigned char * Block);
    int LookupDialogHash();
};

} // namespace gamemd
