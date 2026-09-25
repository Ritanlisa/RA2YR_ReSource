// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Matrix3x4 {
// --- flat members (BEGIN) ---
    float m_Data;  // 0x0
    void* q004;  // 0x4
    void* q008;  // 0x8
    void* q00C;  // 0xC
    void* q010;  // 0x10
    unsigned int q014;  // 0x14
    void* q018;  // 0x18
    void* q01C;  // 0x1C
    void* q020;  // 0x20
    void* q024;  // 0x24
    void* q028;  // 0x28
    void* q02C;  // 0x2C
    unsigned char q030;  // 0x30
    void* q034;  // 0x34
    unsigned char q038;  // 0x38
    void* q040;  // 0x40
    void* q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q04C;  // 0x4C
    void* q050;  // 0x50
    void* q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q05C;  // 0x5C
    void* q064;  // 0x64
    void* q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q070;  // 0x70
    unsigned char q074;  // 0x74
    unsigned char q078;  // 0x78
    void* q080;  // 0x80
    void* q084;  // 0x84
    unsigned char q088;  // 0x88
    unsigned char q08C;  // 0x8C
    unsigned char q094;  // 0x94
    unsigned char q098;  // 0x98
    void* q100;  // 0x100
    void* q104;  // 0x104
    unsigned char q108;  // 0x108
    unsigned char q10C;  // 0x10C
    unsigned char q114;  // 0x114
    unsigned char q118;  // 0x118
    void* q128;  // 0x128
    unsigned char q12C;  // 0x12C
    void* q130;  // 0x130
    unsigned char q134;  // 0x134
    unsigned char q148;  // 0x148
    unsigned char q14C;  // 0x14C
    void* q260;  // 0x260
    unsigned char q264;  // 0x264
    unsigned char q268;  // 0x268
    unsigned int u32_DE4;  // 0xDE4
    unsigned char qDE8;  // 0xDE8
    unsigned char qDEC;  // 0xDEC
    unsigned char qEB0;  // 0xEB0
    unsigned char qEB4;  // 0xEB4
    unsigned char q3560;  // 0x3560
    unsigned char q3564;  // 0x3564
    unsigned char q3598;  // 0x3598
    unsigned char q359C;  // 0x359C
    unsigned char q3760;  // 0x3760
    unsigned char q3764;  // 0x3764
    unsigned char q5E10;  // 0x5E10
    unsigned char q5E14;  // 0x5E14
    unsigned int q0040;
    unsigned int q0041;
// --- flat members (END) ---
    int Identity();
    unsigned int * TransformCell(AbstractClass * aP1, AbstractClass * aP2);
    void Translate(ParticleSystemClass * aP1);
};

} // namespace gamemd
