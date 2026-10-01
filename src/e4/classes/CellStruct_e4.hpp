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
    unsigned char q004;  // 0x4
// --- flat members (END) ---
    void* Add(void* aP1, void* aP2, void *a3_1);  // 0x42D510
    unsigned int * Copy(void* aP1, void *a2_1);  // 0x437F30
    BOOL Equals(unsigned short * a2, void *a2_2);  // 0x50E470
    void* Sub(void* aP1, void* aP2);  // 0x588C60
    unsigned int * Set(int16_t a2, int16_t a3);  // 0x42D470
    unsigned int field_4;  // 0x4
};
} // namespace gamemd
