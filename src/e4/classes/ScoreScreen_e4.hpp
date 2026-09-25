// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ScoreScreen {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    bool q00B;  // 0xB
    unsigned char q00C;  // 0xC
    unsigned int q00D;  // 0xD
    bool q00E;  // 0xE
    bool q00F;  // 0xF
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
    unsigned char q04C;  // 0x4C
    unsigned char q050;  // 0x50
    unsigned char q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q05C;  // 0x5C
    unsigned char q064;  // 0x64
    unsigned char q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q074;  // 0x74
    unsigned char q078;  // 0x78
    unsigned char q080;  // 0x80
    unsigned char q084;  // 0x84
    unsigned char q088;  // 0x88
    unsigned char q08C;  // 0x8C
    void* q0BC;  // 0xBC
    unsigned char q0C0;  // 0xC0
    unsigned char q100;  // 0x100
    unsigned char q104;  // 0x104
    unsigned char q128;  // 0x128
    unsigned char q130;  // 0x130
    unsigned int u32_178;  // 0x178
    unsigned int u32_17C;  // 0x17C
    unsigned int u32_180;  // 0x180
    unsigned int u32_184;  // 0x184
    void* q188;  // 0x188
    unsigned int u32_250;  // 0x250
    unsigned int q380;  // 0x380
    unsigned int q384;  // 0x384
    unsigned int q388;  // 0x388
    unsigned int u32_3AC;  // 0x3AC
    unsigned int u32_3B0;  // 0x3B0
    unsigned int u32_3B4;  // 0x3B4
    unsigned char u8_3B8;  // 0x3B8
    unsigned int u32_3BC;  // 0x3BC
    unsigned int u32_3C4;  // 0x3C4
    unsigned int u32_3C8;  // 0x3C8
    unsigned char u8_3CD;  // 0x3CD
    unsigned int u32_3D0;  // 0x3D0
    unsigned int u32_3D4;  // 0x3D4
    void* q614;  // 0x614
    unsigned char q618;  // 0x618
    void* q61C;  // 0x61C
    unsigned char q620;  // 0x620
    unsigned int q900;  // 0x900
    unsigned int q904;  // 0x904
    void* q914;  // 0x914
    unsigned int q940;  // 0x940
    unsigned int q944;  // 0x944
    unsigned int q948;  // 0x948
    unsigned int q964;  // 0x964
    unsigned int q968;  // 0x968
    unsigned int q980;  // 0x980
    unsigned int u32_F00;  // 0xF00
    unsigned char q1560;  // 0x1560
    void* q1564;  // 0x1564
    unsigned char q1568;  // 0x1568
    unsigned int q2198;  // 0x2198
    unsigned int q2304;  // 0x2304
    unsigned int q2308;  // 0x2308
    unsigned int q2368;  // 0x2368
    unsigned int q2390;  // 0x2390
    unsigned int q2404;  // 0x2404
    unsigned int q2408;  // 0x2408
    unsigned int q3840;  // 0x3840
    unsigned int q5158;  // 0x5158
    Game* q5434;  // 0x5434
    unsigned char q5438;  // 0x5438
    unsigned char q5480;  // 0x5480
    unsigned char q5484;  // 0x5484
    unsigned char q637C;  // 0x637C
    unsigned char q6380;  // 0x6380
    unsigned int LoadAudio;
    unsigned int u32_1784;
// --- flat members (END) ---
    unsigned int * Constructor(ScoreAnimClass * aP1, int a3, int a4);
    unsigned int * LoadCountryFlags(int a2);
    unsigned int * LoadScoreFont(ScoreFontClass * aP1);
    void RemoveItem(int a2, int a3, ObjectClass * aP3, char a5, int a6);
    static double DrawSHPBackground(...);  // C2597 interim stub
};

} // namespace gamemd
