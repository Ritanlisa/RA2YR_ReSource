// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Camera {
// --- flat members (BEGIN) ---
    char m_Position[12];  // 0x0
    char m_Target[12];  // 0xC
    char m_Zoom[4];  // 0x18
    float m_Tilt;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned int q024;  // 0x24
    float q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q034;  // 0x34
    float q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q04C;  // 0x4C
    unsigned char q050;  // 0x50
    unsigned int q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q05C;  // 0x5C
    float q064;  // 0x64
    unsigned char q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q074;  // 0x74
    unsigned char q078;  // 0x78
    unsigned char q080;  // 0x80
    char q084[4];  // 0x84
    unsigned char q088;  // 0x88
    unsigned char q08C;  // 0x8C
    unsigned char q094;  // 0x94
    unsigned char q098;  // 0x98
    float q100;  // 0x100
// --- flat members (END) ---
    long long UpdateTilt();
    void StubReturn();
    void StubReturnFalse();
    void StubReturnVoid();
};

} // namespace gamemd
