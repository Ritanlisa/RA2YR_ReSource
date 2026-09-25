// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Territory_WorldDominationTour_8 {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned int q004;  // 0x4
    unsigned int q008;  // 0x8
    unsigned int q00C;  // 0xC
    int Ticks;  // 0x10
    unsigned char q014;  // 0x14
    unsigned int u32_18;  // 0x18
    unsigned int q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned int q024;  // 0x24
    unsigned int q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    int q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned int q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q04C;  // 0x4C
    unsigned char q050;  // 0x50
    unsigned int q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q05C;  // 0x5C
    unsigned int q064;  // 0x64
    unsigned char q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q074;  // 0x74
    unsigned char q078;  // 0x78
    unsigned char q080;  // 0x80
    unsigned int q084;  // 0x84
    unsigned char q088;  // 0x88
    unsigned char q08C;  // 0x8C
    unsigned char q094;  // 0x94
    unsigned char q098;  // 0x98
    unsigned int q100;  // 0x100
    unsigned int q0088;
// --- flat members (END) ---
    char AddRef(char a2);  // 0x7718A0
    signed int Release();  // 0x771900
    void ddtor();  // 0x771950
    char Read(int a2,  int a3);    // 0x771970
    void Write(int a2,  int a3);    // 0x771980
    void Close(int a2);  // 0x7719D0
    unsigned int * QueryInterface(char a2);  // 0x771A30
    unsigned int * Seek(unsigned int * a1);  // 0x771990
    BOOL Open();  // 0x7719C0
};
} // namespace gamemd
