// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct BuildingTypeClass;  // fix_fwd_type_supply
struct AudioClass {
#pragma pack(push, 1)  // X60: binary-packed layout
    char __pad_0[38];  // 0x0
    unsigned int m_26;  // 0x26
    char __pad_2A[18];  // 0x2A
    int m_3C;  // 0x3C
    unsigned int tail_40;  // 0x40
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    BuildingTypeClass * * ProcessEvent();  // 0x7228B0
#pragma pack(pop)
};
} // namespace gamemd
