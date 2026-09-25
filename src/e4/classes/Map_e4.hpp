// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Map {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    int Width;  // 0x4
    int Height;  // 0x8
    char* Name;  // 0xC
    char* Description;  // 0x10
    unsigned int* CellData;  // 0x14
    int MaxPlayers;  // 0x18
    bool AllowNaval;  // 0x1C
    int refcount;  // 0x20
    int q024;  // 0x24
    bool q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    char* q034;  // 0x34
    unsigned char q038;  // 0x38
    bool q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q04C;  // 0x4C
    int q050;  // 0x50
    int q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q05C;  // 0x5C
    bool q064;  // 0x64
    unsigned char q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q074;  // 0x74
    unsigned char q078;  // 0x78
    int q080;  // 0x80
    int q084;  // 0x84
    unsigned char q088;  // 0x88
    unsigned char q08C;  // 0x8C
    unsigned char q094;  // 0x94
    unsigned char q098;  // 0x98
    bool q100;  // 0x100
    unsigned char q104;  // 0x104
    unsigned char q108;  // 0x108
    unsigned char q110;  // 0x110
    unsigned char q114;  // 0x114
    unsigned char q11C;  // 0x11C
    unsigned char q120;  // 0x120
    int q128;  // 0x128
    unsigned char q12C;  // 0x12C
    char* q130;  // 0x130
// --- flat members (END) ---
    unsigned int IsCellFlag(int a1);
};

} // namespace gamemd
