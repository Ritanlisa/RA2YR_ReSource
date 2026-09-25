// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct IPXManagerClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    bool Initialized;  // 0x4
    bool Active;  // 0x5
    unsigned short tail_6;  // 0x6
    void* q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q00D;  // 0xD
    void* q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    void* q020;  // 0x20
    unsigned int q023;  // 0x23
    unsigned char q024;  // 0x24
    unsigned char q027;  // 0x27
    void* q028;  // 0x28
    unsigned char q02C;  // 0x2C
    void* q030;  // 0x30
    unsigned char q034;  // 0x34
    void* q038;  // 0x38
    unsigned char q03C;  // 0x3C
    void* q040;  // 0x40
    void* q044;  // 0x44
    void* q048;  // 0x48
    void* q04C;  // 0x4C
    void* q050;  // 0x50
    int curConnIndex;  // 0x54
    AbstractClass* q058;  // 0x58
    WinModemClass* q05C;  // 0x5C
    WinModemClass* q060;  // 0x60
    void* q064;  // 0x64
    void* q068;  // 0x68
    void* q06C;  // 0x6C
    DynamicVector* q06F;  // 0x6F
    unsigned char q073;  // 0x73
    void* q080;  // 0x80
    int q084;  // 0x84
    AbstractClass* q088;  // 0x88
    AbstractClass* q0A4;  // 0xA4
    AbstractClass* q0A8;  // 0xA8
    unsigned char q0AC;  // 0xAC
    unsigned char q0B0;  // 0xB0
    unsigned char q0B4;  // 0xB4
    unsigned char q0B8;  // 0xB8
    void* q100;  // 0x100
    void* q104;  // 0x104
    void* q108;  // 0x108
    unsigned char q10C;  // 0x10C
    unsigned char q110;  // 0x110
    void* q114;  // 0x114
    void* q118;  // 0x118
    unsigned char q11C;  // 0x11C
    void* q128;  // 0x128
    unsigned char q12C;  // 0x12C
    unsigned char q130;  // 0x130
    void* q134;  // 0x134
    unsigned char q138;  // 0x138
    WinModemClass* q150;  // 0x150
    unsigned char q154;  // 0x154
    unsigned char q158;  // 0x158
    unsigned char q15C;  // 0x15C
    AbstractClass* q164;  // 0x164
    AbstractClass* q168;  // 0x168
    unsigned char q16C;  // 0x16C
    unsigned char q170;  // 0x170
    unsigned char q174;  // 0x174
    void* q260;  // 0x260
    void* q264;  // 0x264
    unsigned char q268;  // 0x268
    unsigned char q26C;  // 0x26C
    void* q280;  // 0x280
    unsigned char q284;  // 0x284
    unsigned char q2A8;  // 0x2A8
    unsigned char q2AC;  // 0x2AC
    unsigned char q2B0;  // 0x2B0
    AbstractClass* q310;  // 0x310
    unsigned char q314;  // 0x314
    unsigned char q318;  // 0x318
    unsigned char q330;  // 0x330
    unsigned char q334;  // 0x334
    unsigned char q340;  // 0x340
    unsigned char q344;  // 0x344
    unsigned char q348;  // 0x348
    unsigned char q350;  // 0x350
    unsigned char q354;  // 0x354
    AbstractClass* q360;  // 0x360
    unsigned char q364;  // 0x364
    unsigned char q368;  // 0x368
    unsigned char q370;  // 0x370
    unsigned char q374;  // 0x374
    unsigned char q3C4;  // 0x3C4
    unsigned char q3C8;  // 0x3C8
    unsigned char q454;  // 0x454
    unsigned char q458;  // 0x458
    unsigned char q4E4;  // 0x4E4
    unsigned char q4E8;  // 0x4E8
    void* q598;  // 0x598
    unsigned char q59C;  // 0x59C
    unsigned char q5A0;  // 0x5A0
    void* q608;  // 0x608
    unsigned char q60C;  // 0x60C
    unsigned char q610;  // 0x610
    unsigned char q680;  // 0x680
    unsigned char q684;  // 0x684
    unsigned char q824;  // 0x824
    unsigned char q828;  // 0x828
    unsigned char q848;  // 0x848
    unsigned char q84C;  // 0x84C
    AbstractClass* q854;  // 0x854
    unsigned char q858;  // 0x858
    unsigned char q85C;  // 0x85C
    AbstractClass* q864;  // 0x864
    unsigned int Initialized7;
    unsigned int Initialized8;
    unsigned int Initialized9;
    unsigned int processPacket;
    unsigned int q0080;
// --- flat members (END) ---
    IPXManagerClass * QueryInterface(char a2);
    int ddtor(int a2, int a3, unsigned int * v10);
    int receivePacket(int a2);
    int send(int a2);
    int sendPacket(int a2, int a3, int a4);
    void StubReturnFalse(int a1, int a2);
};

} // namespace gamemd
