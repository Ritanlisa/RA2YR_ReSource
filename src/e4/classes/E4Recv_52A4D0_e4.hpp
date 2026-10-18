// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct E4Recv_52A4D0 {
// --- flat members (BEGIN) ---
    unsigned int ptr_0;  // 0x0
    unsigned int M44;  // 0x2C
    unsigned int M48;  // 0x30
    unsigned int M56;  // 0x38
    unsigned int M60;  // 0x3C
// --- flat members (END) ---
    unsigned int ambientSoundController[5];  // G57w16 G1: til truth (AudioController 20B)
    void* attachedBomb;  // 0x0 (no offset truth)
    void* nextObject;  // 0x0 (no offset truth)
    void* fallRate;  // 0x0 (no offset truth)
    ObjectClass * *  sub_52A4D0(uint8_t * a2);  // 0x52A4D0
};
} // namespace gamemd
