// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct FacingClass {
// --- flat members (BEGIN) ---
    unsigned int DesiredFacing;  // 0x0
    unsigned int StartFacing;  // 0x4
    char RotationTimer[12];  // 0x8
    void* q010;  // 0x10
    unsigned int ROT;  // 0x14
// --- flat members (END) ---
    int Set_SyncLog(unsigned int * a2);
    int Update(unsigned short * a2, void *a1 = 0, void *a3 = 0, void *a4 = 0);
    int Update(unsigned short * a2);  // G42.39 supply
};

} // namespace gamemd
