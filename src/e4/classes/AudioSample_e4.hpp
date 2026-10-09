// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"
#ifndef GAMEMD_E4_FLAT_AudioSample
#define GAMEMD_E4_FLAT_AudioSample 1  // G57c2: suppress minimal_carriers.hpp twin
#endif

namespace gamemd {

struct AudioSample {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
// --- flat members (END) ---
    int Destructor(void *a1 = 0);
    int IsBuffering();
    void InitLinkedList();  // 0x408840
    int AudioSample_field_0x0C;  // 0xC (G57W14E1 til supply)
};

} // namespace gamemd
