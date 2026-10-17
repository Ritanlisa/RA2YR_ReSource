// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Checksummer {
    unsigned int crcValue;  // 0x0
    unsigned int bytePos;  // 0x4
    unsigned int state;  // 0x8
    int buffer;  // 0xC
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int Add_Buffer(uint8_t * state, int a3);
    static int Add_Buffer(void *aP0, unsigned char *aP1, int aP2);
    int Add_double(int a2, int a3);
    int Add_float(int a2);
    static int Add_WORD(Checksummer * aP1, int16_t a2);
};

} // namespace gamemd
