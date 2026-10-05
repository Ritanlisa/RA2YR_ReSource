// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct RadBeam {
// --- flat members (BEGIN) ---
    unsigned int pad_0;  // 0x0
    unsigned char q004;  // 0x4
    unsigned int u32_8;  // 0x8
    bool q00D;  // 0xD
    unsigned int uniqueId;  // 0x10
    unsigned int abstractFlags;  // 0x14
    unsigned int nextArrayIndex;  // 0x18
    unsigned int referenceCount;  // 0x1C
    unsigned int NeedsSaveOrLink;  // 0x20
    double range;  // 0x24
    unsigned int q028;  // 0x28
    unsigned char data;  // 0x2C
    unsigned int color;  // 0x32
    unsigned char q034;  // 0x34
    unsigned int u32_4C;  // 0x4C
    unsigned int q050;  // 0x50
    int q060;  // 0x60
    int q064;  // 0x64
    int q068;  // 0x68
    unsigned int u32_7C;  // 0x7C
    unsigned int q080;  // 0x80
    unsigned int AbstractClass;
// --- flat members (END) ---
    unsigned int * InitState(int aP1);
    void * Create();
};

} // namespace gamemd
