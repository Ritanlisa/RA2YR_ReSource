// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Rect {
// --- flat members (BEGIN) ---
    char X[4];  // 0x0
    char Y[4];  // 0x4
    char Width[4];  // 0x8
    char Height[4];  // 0xC
    unsigned char q010;  // 0x10
    void* q014;  // 0x14
    void* q018;  // 0x18
    void* q01C;  // 0x1C
    void* q020;  // 0x20
    void* q024;  // 0x24
    void* q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q034;  // 0x34
    unsigned char q038;  // 0x38
    void* q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q04C;  // 0x4C
    void* q050;  // 0x50
    void* q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q05C;  // 0x5C
    void* q064;  // 0x64
    unsigned char q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q074;  // 0x74
    unsigned char q078;  // 0x78
    void* q080;  // 0x80
    unsigned int SetRedraw;
// --- flat members (END) ---
    AbstractClass * Construct(void* aP1, AbstractClass * aP2, AbstractClass * aP3);
    BOOL Inflate(LPRECT lprc, int dx, int dy);
    void* Set(void* aP1, void* aP2, void* aP3, void* aP4);
    int Union(void* aP0, const RECT * lprcSrc1, const RECT * lprcSrc2);
    return SetRedraw(result->PlayerIndex, 1);  // def-aligned
};

} // namespace gamemd
