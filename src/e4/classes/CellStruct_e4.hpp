// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CellStruct {
// --- flat members (BEGIN) ---
    short X;  // 0x0
    short Y;  // 0x2
    unsigned int field_0;
    // dup-member: unsigned int Equals;
    unsigned int vfptr;
// --- flat members (END) ---
    void*  Add(void * aP1, void * aP2);  // 0x42D510
    unsigned int *  Copy(void * aP1);  // 0x437F30
    BOOL  Equals(unsigned short * a2);  // 0x50E470
    void*  Sub(void * aP1, void * aP2);  // 0x588C60
    unsigned short *  Set(__int16 a2, __int16 a3);  // 0x42D470
};
} // namespace gamemd
