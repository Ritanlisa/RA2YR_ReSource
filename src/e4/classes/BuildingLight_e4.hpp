// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Coord;  // fix_fwd_type_supply
struct BuildingLight {
// --- flat members (BEGIN) ---
    unsigned int u32_C;  // 0xC
    unsigned int u32_10;  // 0x10
    void* q014;  // 0x14
    unsigned int q018;  // 0x18
    void* q020;  // 0x20
    unsigned int q024;  // 0x24
    unsigned int q034;  // 0x34
    void* q050;  // 0x50
    unsigned int q054;  // 0x54
    void* q080;  // 0x80
    unsigned int q084;  // 0x84
    void* q128;  // 0x128
    unsigned int q130;  // 0x130
    unsigned int q304;  // 0x304
    void* q1634;  // 0x1634
    void* q5684;  // 0x5684
    void* q22148;  // 0x22148
    void* q1283474;  // 0x1283474
    void* q19412084;  // 0x19412084
// --- flat members (END) ---
    Coord * * CalculateShading(__m64);
    int CalcIntensity(double a1);  // G57w10-S raw 0x004CAD80 (was C2597 interim stub)
    Coord * * CalculateShading(__m64, void * a1, void * a2);
};
} // namespace gamemd
