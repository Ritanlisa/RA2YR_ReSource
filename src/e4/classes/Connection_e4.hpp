// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Connection {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    void* Active;  // 0x0 (no offset truth)
    int GetSpeed();  // 0x5422F0
    int Close(void *a1 = 0, void *a2 = 0);  // 0x543090

    unsigned int u32_48;  // X10 supply (member_lookup)
    unsigned char __pad_000;  // 0x0 [X30:canon]
    unsigned int Initialized;  // [X30:default]
};
} // namespace gamemd
