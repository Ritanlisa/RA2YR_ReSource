// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct MPCombatTeam {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int q004;  // 0x4
    int q008;  // 0x8
    int q00C;  // 0xC
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    wchar_t ** Constructor(void *a1 = 0, void *a2 = 0, void *a3 = 0);
    wchar_t ** Constructor2();
    wchar_t ** MPTeam(void *a1 = 0);
};

} // namespace gamemd
