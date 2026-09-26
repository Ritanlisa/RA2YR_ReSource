// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ComPtr {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q04C;  // 0x4C
    unsigned char q050;  // 0x50
    unsigned char q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q05C;  // 0x5C
    unsigned char q064;  // 0x64
    unsigned char q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q074;  // 0x74
    unsigned char q078;  // 0x78
    unsigned char q080;  // 0x80
    unsigned char q084;  // 0x84
    unsigned char q088;  // 0x88
    unsigned char q08C;  // 0x8C
    unsigned char q094;  // 0x94
    unsigned char q098;  // 0x98
    unsigned char q100;  // 0x100
    unsigned char q104;  // 0x104
    unsigned char q108;  // 0x108
    unsigned char q110;  // 0x110
    unsigned char q114;  // 0x114
    unsigned char q11C;  // 0x11C
    unsigned char q120;  // 0x120
    unsigned char q128;  // 0x128
    unsigned char q12C;  // 0x12C
    unsigned char q130;  // 0x130
    unsigned int Release;
    unsigned int ReleaseSimple;
// --- flat members (END) ---
    int DestroyWrapper(int aP0, ObjectClass * aP1);
    static double Constructor(...);  // C2597 interim stub
    static double Dtor(...);  // C2597 interim stub
    static double Release_Alt(...);  // C2597 interim stub
    static double Set(...);  // C2597 interim stub
    return Release(v15);  // def-aligned
    LABEL_6: ReleaseSimple(p_ppstgOpen);  // def-aligned
};

} // namespace gamemd
