// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct E4Recv_759BC0 {
// --- flat members (BEGIN) ---
    unsigned int ptr_0;  // 0x0
    unsigned int M512;  // 0x200
    unsigned int M1284;  // 0x504
    unsigned int M1288;  // 0x508
// --- flat members (END) ---
    unsigned int  sub_759BC0(signed int a2);  // 0x759BC0
    unsigned int empLockRemaining;  // @0x759bda (W16G3 raw-usage vocab)
    unsigned int threatPosed;  // @0x759bd3 (W16G3 raw-usage vocab)
    char reloadTimer[4];  // @0x759bee (elem [1] arg) (W16G3 raw-usage vocab)
};
} // namespace gamemd
