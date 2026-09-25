// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Count {
// --- flat members (BEGIN) ---
    char m_RefCount[4];  // 0x0
    void* q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned int q01C;  // 0x1C
    unsigned char q020;  // 0x20
    void* q028;  // 0x28
    void* q038;  // 0x38
    unsigned char q03C;  // 0x3C
    void* q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned char q050;  // 0x50
    unsigned char q054;  // 0x54
    void* q064;  // 0x64
    unsigned char q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q070;  // 0x70
    unsigned char q074;  // 0x74
    unsigned char q078;  // 0x78
    unsigned char q080;  // 0x80
    unsigned char q084;  // 0x84
    unsigned char q098;  // 0x98
    unsigned char q09C;  // 0x9C
    unsigned char q104;  // 0x104
    unsigned char q108;  // 0x108
    unsigned char q110;  // 0x110
    unsigned char q114;  // 0x114
    unsigned char q128;  // 0x128
    unsigned char q12C;  // 0x12C
    void* q134;  // 0x134
    unsigned int q0044;
// --- flat members (END) ---
    AbstractClass * * DecrementRefCountsAudio();
    _DWORD* ddtor();
    int Get();
    int GetCountQueue();
    int SetupAllCountriesLobby();
    unsigned int * Release();
};

} // namespace gamemd
