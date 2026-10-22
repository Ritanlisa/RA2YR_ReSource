// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"
#ifndef GAMEMD_E4_FLAT_AudioSample
#define GAMEMD_E4_FLAT_AudioSample 1  // G57c2: suppress minimal_carriers.hpp twin
#endif

namespace gamemd {

struct AudioSample {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int q004;  // 0x4
    int q008;  // 0x8
    int q00C;  // 0xC
    int q010;  // 0x10
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int Destructor(void *a1 = 0);
    int IsBuffering(void *a1 = 0);
    void InitLinkedList(void *a1 = 0);  // 0x408840
};

} // namespace gamemd
