// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct MixFileClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* Previous;  // 0x4
    bool Blowfish;  // 0x8
    bool Encryption;  // 0x9
    unsigned char q00A;  // 0xA
    int CountFiles;  // 0xC
    int FileSize;  // 0x10
    unsigned char u8_11;  // 0x11
    unsigned char u8_12;  // 0x12
    int FileStartOffset;  // 0x14
    void* Headers;  // 0x18
    unsigned int q01C;  // 0x1C
    int q020;  // 0x20
    int MixFileClass_field_24;  // 0x24
    unsigned char* MemoryData;  // 0x28
    int MemoryDataSize;  // 0x2C
    unsigned char q030;  // 0x30
    int q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q03C;  // 0x3C
    void * q040;  // 0x40
    int q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q04C;  // 0x4C
    int q050;  // 0x50
    int q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q05C;  // 0x5C
    void * q064;  // 0x64
    int q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q070;  // 0x70
    unsigned char q074;  // 0x74
    unsigned char q078;  // 0x78
    int q080;  // 0x80
    int q084;  // 0x84
    unsigned char q088;  // 0x88
    unsigned char q08C;  // 0x8C
    unsigned char q094;  // 0x94
    unsigned char q098;  // 0x98
    void * q100;  // 0x100
    int q104;  // 0x104
    unsigned char q108;  // 0x108
    unsigned char q10C;  // 0x10C
    unsigned char q114;  // 0x114
    unsigned char q118;  // 0x118
    unsigned char q11C;  // 0x11C
    unsigned char q120;  // 0x120
    int q128;  // 0x128
    unsigned char q12C;  // 0x12C
    int q130;  // 0x130
    unsigned char q134;  // 0x134
    unsigned char q13C;  // 0x13C
    unsigned char q140;  // 0x140
    unsigned char q148;  // 0x148
    unsigned char q14C;  // 0x14C
    unsigned char q154;  // 0x154
    unsigned char q158;  // 0x158
    int q260;  // 0x260
// --- flat members (END) ---
    void CleanupCache();
    void DestroyCache();
    static double CacheNode_Dtor(...);  // C2597 interim stub
    static double FromFile(...);  // C2597 interim stub
    static double GetSubFile(...);  // C2597 interim stub
    static double LoadSubFile(...);  // C2597 interim stub
};

} // namespace gamemd
