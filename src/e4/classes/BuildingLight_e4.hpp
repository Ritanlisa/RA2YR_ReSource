// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Coord;  // fix_fwd_type_supply
struct BuildingLight {
    char __pad_0[12];  // 0x0
    unsigned int u32_C;  // 0xC
    unsigned int u32_10;  // 0x10
    void* q014;  // 0x14
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    Coord * * CalculateShading(__m64 a2);
    int CalcIntensity(double a1);
    Coord * * CalculateShading(__m64, void * a1, void * a2);
};
} // namespace gamemd
