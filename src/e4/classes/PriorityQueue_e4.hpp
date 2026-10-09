// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct PriorityQueue {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
// --- flat members (END) ---
    int Add(int aP1);
    static int Pop(...);  // w16g4 C3861 static supply (raw 0x005AC960)
};

} // namespace gamemd
