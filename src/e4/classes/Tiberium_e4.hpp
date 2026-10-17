// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct Tiberium {
    char __pad_0[2];  // 0x0
    char field_2[4];  // 0x2
    char __pad_6[50];  // 0x6
    void* q038;  // 0x38
    char __pad_3C[15];  // 0x3C
    char field_4B[4];  // 0x4B
    char __pad_4F[229];  // 0x4F
    void* q134;  // 0x134
    char __pad_138[464];  // 0x138
    void* q308;  // 0x308
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int ProcessGrowth(int a2, MapResourceClass * aP2, char _140);  // 0x59D510
    VectorClass_flat * * CalculateSpread(MouseClass * aP1, MapResourceClass * aP2, short * a3, int a5, MouseClass * aP5, MapResourceClass * aP6, double * a7);  // 0x59E740
};
} // namespace gamemd
