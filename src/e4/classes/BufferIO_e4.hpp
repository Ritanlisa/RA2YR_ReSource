// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct BufferIO {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
// --- flat members (END) ---
    int Cleanup(int a2);
    int Flush();
    unsigned int q_180;  // +0x180 flat supply (CSP-fed)
};

} // namespace gamemd
