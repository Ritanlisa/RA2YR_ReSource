// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct SwizzleManager {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
// --- flat members (END) ---
    static int __stdcall SaveLoad(int * a1, int * a2);  // G57w18j4: machine 0x4b624d push/push + retn 8 = 2-arg stdcall; static-form calls tree-wide (Drive/Fly/Hover/Mech/Rocket/Jumpjet/Walk/Ship/Tunnel)
};

} // namespace gamemd
