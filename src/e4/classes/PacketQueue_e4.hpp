// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct PacketQueue {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
// --- flat members (END) ---
    int ExtractEntry(void * a2, unsigned int * a3, int a4, void * a5, unsigned int * a6, unsigned short * a7);
    int ReleaseEntry(void *a1, unsigned int *a2, int aP3, void *a4, unsigned int *a5);
};

} // namespace gamemd
