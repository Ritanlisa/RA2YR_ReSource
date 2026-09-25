// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct BufferIOFileClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    int FilePointer;  // 0x4
    int FileSize;  // 0x8
    void * Handle;  // 0xC
    void * FileName;  // 0x10
    void* FileTimeDateLo;  // 0x14
    unsigned int FileTimeDateHi;  // 0x16
    char FileNameAllocated;  // 0x18
    unsigned char tail_19;  // 0x19
    bool BufferDirty;  // 0x1C
    bool BufferReadPending;  // 0x1D
    bool BufferWritePending;  // 0x1E
    bool FlushOnClose;  // 0x1F
    bool CacheReadAhead;  // 0x20
    unsigned char q021;  // 0x21
    unsigned int BufferOffset;  // 0x24
    unsigned int q026;  // 0x26
    unsigned int q027;  // 0x27
    unsigned int BufferSize;  // 0x28
    unsigned int BufferPosition;  // 0x2C
    unsigned int FileBaseOffset;  // 0x30
    unsigned int BufferReadSize;  // 0x34
    unsigned int StreamSize;  // 0x38
    int BufferMaxSize;  // 0x3C
    int BufferCursor;  // 0x40
    unsigned int TotalBytesRead;  // 0x44
    unsigned int TotalBytesWritten;  // 0x48
    unsigned int q04C;  // 0x4C
    char q050;  // 0x50
    int q054;  // 0x54
    void* q058;  // 0x58
    void* q05C;  // 0x5C
    int q060;  // 0x60
    void* q064;  // 0x64
    int q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q070;  // 0x70
    unsigned char q074;  // 0x74
    unsigned char q078;  // 0x78
    char q080;  // 0x80
    int q084;  // 0x84
    void* q088;  // 0x88
    unsigned char q08C;  // 0x8C
    unsigned char q090;  // 0x90
    unsigned char q094;  // 0x94
    unsigned char q098;  // 0x98
    void* q100;  // 0x100
    int q104;  // 0x104
    unsigned char q108;  // 0x108
    unsigned char q10C;  // 0x10C
    int q114;  // 0x114
    unsigned int q118;  // 0x118
    unsigned char q11C;  // 0x11C
    unsigned char q120;  // 0x120
    unsigned char q124;  // 0x124
    char q128;  // 0x128
    unsigned char q12C;  // 0x12C
    int q130;  // 0x130
    int q134;  // 0x134
    unsigned char q138;  // 0x138
    unsigned char q140;  // 0x140
    unsigned char q144;  // 0x144
    unsigned char q148;  // 0x148
    unsigned char q14C;  // 0x14C
    int q150;  // 0x150
    unsigned char q154;  // 0x154
    unsigned char q158;  // 0x158
    unsigned char q1B4;  // 0x1B4
    unsigned char q1B8;  // 0x1B8
    unsigned char q1C0;  // 0x1C0
    unsigned char q1C4;  // 0x1C4
    int q260;  // 0x260
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
    int q304;  // 0x304
    int q308;  // 0x308
    unsigned char q30C;  // 0x30C
    void* q310;  // 0x310
    unsigned char q314;  // 0x314
    unsigned char q318;  // 0x318
    unsigned char q31C;  // 0x31C
    unsigned char q320;  // 0x320
    unsigned char q324;  // 0x324
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
    void* q598;  // 0x598
    unsigned char q59C;  // 0x59C
    unsigned char q5A0;  // 0x5A0
    int q608;  // 0x608
    unsigned char q60C;  // 0x60C
    unsigned char q610;  // 0x610
    unsigned char q618;  // 0x618
    unsigned char q61C;  // 0x61C
    unsigned char q624;  // 0x624
    unsigned char q628;  // 0x628
    int q630;  // 0x630
    unsigned char q634;  // 0x634
    unsigned char q638;  // 0x638
    unsigned int q640;  // 0x640
// --- flat members (END) ---
    int Destruct();
    void StubReturnFalse(int a1, int a2, int a3);
    static double Constructor(...);  // C2597 interim stub
};

} // namespace gamemd
