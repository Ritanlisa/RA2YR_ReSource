// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct E4Recv_528220 {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    unsigned int M4;  // 0x4
    unsigned int M8;  // 0x8
    unsigned int M44;  // 0x2C
    unsigned int M56;  // 0x38
// --- flat members (END) ---
    int sub_528220(unsigned char * a2, unsigned char * a3, int a4);  // 0x528220

    unsigned char SortedArray_5A4[4];  /* SortedArray */  // X10 supply (member_lookup)
    unsigned int attachedBomb;  // [X30:default]
    unsigned int fallRate;  // [X30:default]
    unsigned int owningHouseIndex;  // [X30:default]
};
} // namespace gamemd
