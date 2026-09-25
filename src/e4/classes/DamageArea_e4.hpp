// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct DamageArea {
// --- flat members (BEGIN) ---
    char DamageArea_field_00[4];  // 0x0
    void* q004;  // 0x4
    void* q008;  // 0x8
    unsigned int u32_C;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned int u32_14;  // 0x14
    unsigned int q018;  // 0x18
    unsigned int u32_1C;  // 0x1C
    unsigned int u32_20;  // 0x20
    unsigned int u32_24;  // 0x24
    unsigned int q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned int q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q03C;  // 0x3C
    unsigned int q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned int u32_4C;  // 0x4C
    unsigned char q04F;  // 0x4F
    unsigned char q050;  // 0x50
    unsigned char u8_51;  // 0x51
    unsigned int q054;  // 0x54
    unsigned int u32_58;  // 0x58
    unsigned char u8_5C;  // 0x5C
    unsigned int q064;  // 0x64
    unsigned char q068;  // 0x68
    void* q06C;  // 0x6C
    unsigned char q070;  // 0x70
    unsigned int q084;  // 0x84
    unsigned int q088;  // 0x88
    void* q0F4;  // 0xF4
    unsigned char q0F8;  // 0xF8
    void* q0FC;  // 0xFC
    void* q100;  // 0x100
    unsigned char q104;  // 0x104
    void* q108;  // 0x108
    unsigned char q10C;  // 0x10C
    unsigned char q110;  // 0x110
    unsigned char q114;  // 0x114
    unsigned int q118;  // 0x118
    unsigned char q11C;  // 0x11C
    void* q244;  // 0x244
    unsigned char q248;  // 0x248
    unsigned char q24C;  // 0x24C
    unsigned char q250;  // 0x250
    unsigned char q254;  // 0x254
    unsigned char q260;  // 0x260
    void* q264;  // 0x264
    unsigned char q268;  // 0x268
    unsigned char q26C;  // 0x26C
    unsigned char q274;  // 0x274
    unsigned char q278;  // 0x278
    unsigned int q280;  // 0x280
    unsigned char q284;  // 0x284
    void* q2F8;  // 0x2F8
    unsigned char q2FC;  // 0x2FC
    unsigned int q310;  // 0x310
    void* q520;  // 0x520
    unsigned char q524;  // 0x524
    void* q580;  // 0x580
    unsigned char q584;  // 0x584
    unsigned char q588;  // 0x588
    void* q594;  // 0x594
    void* q598;  // 0x598
    void* q5A4;  // 0x5A4
    unsigned char q5A8;  // 0x5A8
    unsigned char q608;  // 0x608
    unsigned char q628;  // 0x628
    unsigned int q640;  // 0x640
    void* q760;  // 0x760
    unsigned char q764;  // 0x764
    unsigned int q784;  // 0x784
    void* qFA8;  // 0xFA8
    unsigned char qFAC;  // 0xFAC
    unsigned char qFB0;  // 0xFB0
    unsigned char qFB4;  // 0xFB4
    unsigned char qFB8;  // 0xFB8
    unsigned char q1030;  // 0x1030
    unsigned char q1034;  // 0x1034
    void* q1408;  // 0x1408
    unsigned char q140C;  // 0x140C
    unsigned char q1410;  // 0x1410
    unsigned char q141C;  // 0x141C
    unsigned char q1420;  // 0x1420
    void* q1428;  // 0x1428
    unsigned char q142C;  // 0x142C
    unsigned char q1430;  // 0x1430
    void* q1444;  // 0x1444
    unsigned char q1448;  // 0x1448
    unsigned char q144C;  // 0x144C
    unsigned char q1538;  // 0x1538
    unsigned char q153C;  // 0x153C
    unsigned char q1544;  // 0x1544
    unsigned char q1548;  // 0x1548
    void* q1888;  // 0x1888
    unsigned char q188C;  // 0x188C
    unsigned char q1E48;  // 0x1E48
    unsigned char q1E4C;  // 0x1E4C
    unsigned char q1E50;  // 0x1E50
    unsigned char q1E54;  // 0x1E54
    void* q4008;  // 0x4008
    unsigned char q400C;  // 0x400C
    unsigned char q4010;  // 0x4010
    unsigned char q4014;  // 0x4014
    unsigned char q4378;  // 0x4378
    unsigned char q437C;  // 0x437C
    unsigned char q4380;  // 0x4380
    unsigned char q5014;  // 0x5014
    unsigned char q5018;  // 0x5018
    void* q5188;  // 0x5188
    unsigned char q518C;  // 0x518C
    unsigned char q5190;  // 0x5190
    unsigned char q5194;  // 0x5194
    void* q6280;  // 0x6280
    unsigned char q6284;  // 0x6284
    unsigned char q6288;  // 0x6288
    unsigned char q6290;  // 0x6290
    unsigned char q6294;  // 0x6294
    unsigned char q64B4;  // 0x64B4
    unsigned char q64B8;  // 0x64B8
    unsigned int q00C;
    unsigned int u32_38;
    unsigned char u8_18;
    unsigned int u32_1C2;
    unsigned int u32_42;
    unsigned int u32_44;
    unsigned long long u64_48;
// --- flat members (END) ---
    int ApplyScatter();
    int CheckOccupancyEligibility();
    unsigned int * CalcScatterOffset(unsigned int * v11, short * a3);
};

} // namespace gamemd
