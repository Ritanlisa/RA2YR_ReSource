// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Event {
    unsigned char __pad_000;  // 0x0
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static int Dispatch();  // 0x48D080
    bool IsValidActionType(void *a1 = 0);  // 0x601360
    int Dispatch(void *a1_1, void *a2_1, void *a3_1, void *a4_1, void *a5_1);
};
} // namespace gamemd
