// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct BinkMovieHandle {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    char* tempPath;  // 0x4
    DSurface* renderTarget;  // 0x8
    int width;  // 0xC
    int height;  // 0x10
    int currentFrame;  // 0x14
    int totalFrames;  // 0x18
    int throttleCounter;  // 0x1C
    bool frameDecoded;  // 0x20
    unsigned char q021;  // 0x21
    int dataSize;  // 0x24
    unsigned int surfaceFlags;  // 0x28
    bool playing;  // 0x2C
    bool memoryOwned;  // 0x2D
    unsigned char q02E;  // 0x2E
    void* memoryBuffer;  // 0x30
    int q034;  // 0x34
    unsigned char q038;  // 0x38
    int q040;  // 0x40
    char q044;  // 0x44
    void * q048;  // 0x48
    unsigned char q04C;  // 0x4C
    char q050;  // 0x50
    int q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q05C;  // 0x5C
    int q064;  // 0x64
    char q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q070;  // 0x70
    unsigned char q074;  // 0x74
    char q080;  // 0x80
    int q084;  // 0x84
    unsigned char q088;  // 0x88
    unsigned char q08C;  // 0x8C
    unsigned char q094;  // 0x94
    unsigned char q098;  // 0x98
    int q100;  // 0x100
    char q104;  // 0x104
    unsigned char q108;  // 0x108
    unsigned char q10C;  // 0x10C
    unsigned char q110;  // 0x110
    void * q114;  // 0x114
    unsigned char q118;  // 0x118
    unsigned char q11C;  // 0x11C
    unsigned char q120;  // 0x120
    unsigned char q124;  // 0x124
    char q128;  // 0x128
    unsigned char q12C;  // 0x12C
    int q130;  // 0x130
    unsigned char q134;  // 0x134
    unsigned char q13C;  // 0x13C
    unsigned char q140;  // 0x140
    unsigned char q148;  // 0x148
    unsigned char q14C;  // 0x14C
    unsigned char q154;  // 0x154
    unsigned char q158;  // 0x158
    char q260;  // 0x260
    unsigned char q264;  // 0x264
    unsigned char q268;  // 0x268
    unsigned char q26C;  // 0x26C
    unsigned char q274;  // 0x274
    unsigned char q278;  // 0x278
    unsigned char q280;  // 0x280
    unsigned char q284;  // 0x284
    unsigned char q288;  // 0x288
    unsigned char q290;  // 0x290
    unsigned int tempPath2;
// --- flat members (END) ---
    BOOL COMStub();
    BinkMovieHandle * QueryInterface(char a2);
    bool AddRef();
    int AdjustSurfaceFormat(int a2);
    int Check(int a2);
    int InitFromFile();
    int Pause(int a2, int a3);
    int Release();
    int RenderFrameClipped(int a2, int v11);
    int RenderLoop(int a2);
    int _vt03(unsigned char a2);
    unsigned int * Close();
    unsigned int * CopyFrameToSurface();
    unsigned int BlitToTarget();
};

} // namespace gamemd
