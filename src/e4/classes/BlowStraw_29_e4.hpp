// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TabClass;  // fix_fwd_type_supply
struct BlowStraw_29 {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int q004;  // 0x4
    char __pad_8[396];  // 0x8
    int q194;  // 0x194
    int q198;  // 0x198
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int Seek(int *aP1, unsigned int *a2);  // 0x6D0680
    TabClass * Read(char * Block, char a2, void *a3 = 0);  // 0x5BE9E0
};
} // namespace gamemd
