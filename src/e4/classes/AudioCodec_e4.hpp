// G57w10 D-类体 supply: AudioCodec (raw-anchored; canon size=4)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct AudioCodec {
    unsigned int tail_0;  // 0x0
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static char * Decode(unsigned char *a1, char *a2, int a3);
};
} // namespace gamemd
