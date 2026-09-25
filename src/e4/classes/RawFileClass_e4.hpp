// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct RawFileClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    int FilePointer;  // 0x4
    int FileSize;  // 0x8
    void* Handle;  // 0xC
    unsigned int FileName;  // 0x10
    unsigned int FileTimeDateLo;  // 0x14
    char FileTimeDateHi[2];  // 0x16
    bool FileNameAllocated;  // 0x18
    unsigned char tail_19;  // 0x19
    unsigned int q01C;  // 0x1C
    unsigned int q01E;  // 0x1E
    unsigned int q020;  // 0x20
    char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned int q030;  // 0x30
    unsigned int q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned int q048;  // 0x48
    unsigned int q050;  // 0x50
    unsigned char q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned int q060;  // 0x60
    unsigned char q064;  // 0x64
    void* q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q070;  // 0x70
    unsigned char q074;  // 0x74
    unsigned char q078;  // 0x78
    unsigned int q080;  // 0x80
    unsigned char q084;  // 0x84
    unsigned char q088;  // 0x88
    unsigned char q08C;  // 0x8C
    unsigned char q094;  // 0x94
    unsigned char q098;  // 0x98
    unsigned char q100;  // 0x100
    void* q104;  // 0x104
    unsigned char q108;  // 0x108
    unsigned char q10C;  // 0x10C
    unsigned char q114;  // 0x114
    unsigned int q118;  // 0x118
    unsigned char q11C;  // 0x11C
    unsigned char q120;  // 0x120
    unsigned char q124;  // 0x124
    unsigned char q12C;  // 0x12C
    unsigned char q130;  // 0x130
    unsigned char q134;  // 0x134
    unsigned char q138;  // 0x138
    unsigned char q148;  // 0x148
    unsigned char q14C;  // 0x14C
    unsigned int q150;  // 0x150
    unsigned char q154;  // 0x154
    unsigned char q158;  // 0x158
    unsigned char q1B4;  // 0x1B4
    unsigned char q1B8;  // 0x1B8
    unsigned char q1C0;  // 0x1C0
    unsigned char q1C4;  // 0x1C4
    void* q260;  // 0x260
    unsigned char q264;  // 0x264
    unsigned char q268;  // 0x268
    unsigned char q26C;  // 0x26C
    unsigned char q270;  // 0x270
    unsigned char q274;  // 0x274
    unsigned char q278;  // 0x278
    unsigned int q280;  // 0x280
    unsigned char q284;  // 0x284
    unsigned char q288;  // 0x288
    unsigned char q290;  // 0x290
    unsigned char q294;  // 0x294
    unsigned char q300;  // 0x300
    unsigned char q304;  // 0x304
    unsigned char q310;  // 0x310
    unsigned char q314;  // 0x314
    unsigned char q31C;  // 0x31C
    unsigned char q320;  // 0x320
    unsigned char q328;  // 0x328
    unsigned char q32C;  // 0x32C
    unsigned char q330;  // 0x330
    unsigned char q334;  // 0x334
    unsigned char q340;  // 0x340
    unsigned char q344;  // 0x344
    unsigned char q394;  // 0x394
    unsigned char q398;  // 0x398
    unsigned char q4D8;  // 0x4D8
    unsigned char q4DC;  // 0x4DC
    unsigned char q598;  // 0x598
    unsigned char q59C;  // 0x59C
    unsigned char q5A0;  // 0x5A0
    void* q608;  // 0x608
    unsigned char q60C;  // 0x60C
    unsigned char q610;  // 0x610
    unsigned char q618;  // 0x618
    unsigned char q61C;  // 0x61C
    unsigned char q624;  // 0x624
    unsigned char q628;  // 0x628
    unsigned char q634;  // 0x634
    unsigned char q638;  // 0x638
    unsigned int q640;  // 0x640
    unsigned int StubReturnFalse;
    unsigned int Write;
// --- flat members (END) ---
    int Close(int a2, int a3);
    void Dtor();
    static double Construct(...);  // C2597 interim stub
};

} // namespace gamemd
