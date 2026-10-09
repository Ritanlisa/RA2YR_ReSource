// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Display {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
// --- flat members (END) ---
    static int GetViewport(void *a1);  // [w14e3] raw 0x72AD20 int* __thiscall Display::GetViewport(Display*)
    long long CalculateDefaultSize();  // 0x5D5A20
    int GetViewport();  // 0x72AD20
};
} // namespace gamemd
