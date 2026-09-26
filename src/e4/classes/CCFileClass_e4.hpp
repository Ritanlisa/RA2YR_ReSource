// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct CCFileClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* FilePointer;  // 0x4
    int FileSize;  // 0x8
    void * Handle;  // 0xC
    unsigned int q010;  // 0x10
    unsigned int FileTimeDateLo;  // 0x14
    unsigned int FileTimeDateHi;  // 0x16
    char FileNameAllocated;  // 0x18
    unsigned char tail_19;  // 0x19
    char BufferDirty;  // 0x1C
    char BufferReadPending;  // 0x1D
    char BufferWritePending;  // 0x1E
    char FlushOnClose;  // 0x1F
    char CacheReadAhead;  // 0x20
    int BufferOffset;  // 0x24
    unsigned int q026;  // 0x26
    unsigned int q027;  // 0x27
    int BufferSize;  // 0x28
    int BufferPosition;  // 0x2C
    int FileBaseOffset;  // 0x30
    int BufferReadSize;  // 0x34
    int StreamSize;  // 0x38
    int BufferMaxSize;  // 0x3C
    int BufferCursor;  // 0x40
    int TotalBytesRead;  // 0x44
    int TotalBytesWritten;  // 0x48
    unsigned int FileID;  // 0x4C
    unsigned int MixFileIndex;  // 0x50
    int q054;  // 0x54
    void* q058;  // 0x58
    unsigned int q05C;  // 0x5C
    int q060;  // 0x60
    int q064;  // 0x64
    int q068;  // 0x68
    unsigned int q06C;  // 0x6C
    unsigned int q070;  // 0x70
    unsigned int q074;  // 0x74
    unsigned int q078;  // 0x78
    unsigned int q07C;  // 0x7C
    int q080;  // 0x80
    int q084;  // 0x84
    void* q088;  // 0x88
    unsigned char q08C;  // 0x8C
    unsigned char q090;  // 0x90
    unsigned char q094;  // 0x94
    unsigned char q098;  // 0x98
    int q100;  // 0x100
    int q104;  // 0x104
    unsigned int q108;  // 0x108
    unsigned char q10C;  // 0x10C
    unsigned char q110;  // 0x110
    int q114;  // 0x114
    int q118;  // 0x118
    unsigned char q11C;  // 0x11C
    unsigned int q120;  // 0x120
    unsigned int q124;  // 0x124
    int q128;  // 0x128
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
    unsigned int q264;  // 0x264
    unsigned char q268;  // 0x268
    unsigned char q26C;  // 0x26C
    unsigned char q270;  // 0x270
    unsigned int q274;  // 0x274
    unsigned int q278;  // 0x278
    unsigned char q27C;  // 0x27C
    int q280;  // 0x280
    unsigned char q284;  // 0x284
    unsigned int q288;  // 0x288
    unsigned char q28C;  // 0x28C
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
    int q598;  // 0x598
    unsigned char q59C;  // 0x59C
    unsigned char q5A0;  // 0x5A0
    int q608;  // 0x608
    unsigned char q60C;  // 0x60C
    unsigned char q610;  // 0x610
    unsigned char q618;  // 0x618
    unsigned char q61C;  // 0x61C
    unsigned char q620;  // 0x620
    unsigned char q624;  // 0x624
    unsigned int q628;  // 0x628
    unsigned char q62C;  // 0x62C
    int q630;  // 0x630
    unsigned char q634;  // 0x634
    unsigned char q638;  // 0x638
    int q640;  // 0x640
    unsigned char q644;  // 0x644
    unsigned int q648;  // 0x648
    unsigned char q64C;  // 0x64C
    unsigned char q650;  // 0x650
    unsigned int q658;  // 0x658
    unsigned char q65C;  // 0x65C
    unsigned char q660;  // 0x660
    unsigned char q6CC;  // 0x6CC
    unsigned char q6D0;  // 0x6D0
    unsigned char q768;  // 0x768
    unsigned char q76C;  // 0x76C
    unsigned int Destru_vt06;
    unsigned int Destru_vt16;
    unsigned int FileName;
    unsigned int FileName1;
    unsigned int FileName4;
    unsigned int FileSize0;
    unsigned int FileSize2;
    unsigned int FileSize5;
    unsigned int FileSize6;
    unsigned int GetMember06;
    unsigned int Handle6;
    unsigned int Handle7;
    unsigned int Handle8;
    unsigned int Load_1;
    unsigned int Reset_8;
    unsigned int Construct;
// --- flat members (END) ---
    AudioController * * Close();
    int Destruct();
    int GetFileSize();
    void ProcessStream(unsigned int a1);
    static double Construct3(...);  // C2597 interim stub
    bool Open(int mode);  // open file with mode
    static double Read(...);  // C2597 interim stub
    static double ReadEntireFile(...);  // C2597 interim stub
    static double Reset(...);  // C2597 interim stub
    static double GetSize(...);  // C2597 interim stub
    void Construct2(void* filename);  // init file object with name
    LABEL_27: Construct(v22, aRulesmdIni);  // def-aligned
};

} // namespace gamemd
