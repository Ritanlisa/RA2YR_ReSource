// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
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
    unsigned int __pad_10;
    unsigned int field_C;
// --- flat members (END) ---
    char CalculateShading();  // 0x5FF850
    double CalcIntensity(double a1);  // 0x4CAD80
};
} // namespace gamemd
