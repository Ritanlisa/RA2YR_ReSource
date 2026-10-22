// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ScoreText {
    int __pad_000;  // 0x0
    int q004;  // 0x4
    char __pad_8[1108];  // 0x8
    unsigned int u32_45C;  // 0x45C
    char __pad_460[28];  // 0x460
    unsigned int u32_47C;  // 0x47C
    unsigned int u32_480;  // 0x480
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    void Show(void * a2, void *a1 = 0);
    void ShowAlt(const wchar_t **aP1, int a3, void *a1 = 0);
};

} // namespace gamemd
