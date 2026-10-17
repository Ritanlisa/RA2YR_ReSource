// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct BuildingClass;  // fix_fwd_type_supply
struct VectorClass_ReestablishPtr {
#pragma pack(push, 1)  // X60: binary-packed layout
    char __pad_0[1];  // 0x0
    unsigned int * m_1;  // 0x1
    char __pad_5[3];  // 0x5
    BuildingClass * ptr_8;  // 0x8
    int m_C;  // 0xC
    unsigned int tail_10;  // 0x10
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    unsigned int * Construct(BuildingClass * aP1, BuildingClass * aP2, void *a3_1, void *a4_1, void *a5_1, void *a6_1, void *a7 = 0, void *a8 = 0, void *a9 = 0);  // 0x45AE50
#pragma pack(pop)
};
} // namespace gamemd
