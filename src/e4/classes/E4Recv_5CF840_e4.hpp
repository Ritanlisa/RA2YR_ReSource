// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct E4Recv_5CF840 {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    unsigned int M72;  // 0x48
    unsigned int M84;  // 0x54
// --- flat members (END) ---
    const char ** sub_5CF840(MapSelect * aP1);  // 0x5CF840
    char customSound_controller[20];  // ObjectClass 0x50 vocab (audio controller 20B) (W16G3 raw-usage vocab)
    char ambientSoundController[20];  // ObjectClass 0x3C vocab (W16G3 raw-usage vocab)
};
} // namespace gamemd
