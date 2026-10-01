// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct RadBeam {
// --- flat members (BEGIN) ---
    unsigned int pad_0;  // 0x0
    unsigned char q004;  // 0x4
    unsigned int u32_8;  // 0x8
    bool q00A;  // 0xA
    int memberAtOffset12;  // 0xC
    bool q00D;  // 0xD
    bool q00E;  // 0xE
    unsigned int uniqueId;  // 0x10
    unsigned int abstractFlags;  // 0x14
    unsigned int pad_16;  // 0x16
    unsigned int nextArrayIndex;  // 0x18
    unsigned int referenceCount;  // 0x1C
    bool q01F;  // 0x1F
    unsigned int NeedsSaveOrLink;  // 0x20
    unsigned char u8_21;  // 0x21
    unsigned char u8_22;  // 0x22
    unsigned int pad_35;  // 0x23
    double range;  // 0x24
    unsigned int q028;  // 0x28
    unsigned char data;  // 0x2C
    unsigned int memberAtOffset48;  // 0x30
    unsigned int color;  // 0x32
    unsigned char q034;  // 0x34
    unsigned int memberAtOffset36;  // 0x36
    int memberAtOffset60;  // 0x3C
    int memberAtOffset64;  // 0x40
    int memberAtOffset68;  // 0x44
    unsigned int pad_72;  // 0x48
    unsigned int u32_4C;  // 0x4C
    unsigned int q050;  // 0x50
    int memberAtOffset84;  // 0x54
    unsigned char memberAtOffset88;  // 0x58
    unsigned int pad_89;  // 0x59
    int q060;  // 0x60
    int q064;  // 0x64
    int q068;  // 0x68
    unsigned int u32_7C;  // 0x7C
    unsigned int q080;  // 0x80
    int q084;  // 0x84
    unsigned char q088;  // 0x88
    unsigned int color2;  // 0xC0
    unsigned char u8_C1;  // 0xC1
    unsigned char u8_C2;  // 0xC2
    unsigned int pad_195;  // 0xC3
    unsigned int AbstractClass;
// --- flat members (END) ---
    unsigned int * InitState(int aP1);
    void * Create();
};

} // namespace gamemd
