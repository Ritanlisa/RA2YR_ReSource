// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
#ifndef GAMEMD_TREE_UNIVERSE
struct CellStruct {
// --- flat members (BEGIN) ---
    short X;  // 0x0
    short Y;  // 0x2
    unsigned int field_0;
    // dup-member: unsigned int Equals;
    unsigned int vfptr;
    unsigned char q004;  // 0x4
// --- flat members (END) ---
    void* Add(unsigned int *aP1, unsigned short *aP2);  // 0x42D510
    // G42.35a: non-static form dropped -- G42.33 b9 added the static form
    // without removing this one; identical params = C2686, and all callers
    // (6 sites) use the static CellStruct::Copy(...) shape. IDA truth is
    // thiscall, which the static form models.
    static unsigned int * Copy(void * aP0, void * aP1);  // 0x437F30 static-form sync (G42.33 b9)
int Equals(unsigned short * a2, void *a2_2);  // 0x50E470
    void* Sub(unsigned int *aP1, unsigned short *aP2);  // 0x588C60
    unsigned int * Set(int16_t a2, int16_t a3);  // 0x42D470
    unsigned int field_4;  // 0x4
};
#endif // GAMEMD_TREE_UNIVERSE
} // namespace gamemd
