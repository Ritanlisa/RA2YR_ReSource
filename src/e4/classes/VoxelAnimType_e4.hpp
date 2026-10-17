// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct SomeVoxelCache;  // fix_fwd_type_supply
struct INIClass;  // fix_fwd_type_supply
struct VoxelAnimType {
#pragma pack(push, 1)  // X60: binary-packed layout
    char __pad_0[2];  // 0x0
    unsigned int m_2;  // 0x2
    unsigned short tail_6;  // 0x6
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    AbstractClass * * LoadSection(const char *a2, int a3);  // 0x5F7A90
    AbstractClass * * LoadBarrel(const char *a2, int a3);  // 0x5F7DB0
    int LoadAnim(void *a1 = 0);  // 0x5F8110
#pragma pack(pop)
};
} // namespace gamemd
