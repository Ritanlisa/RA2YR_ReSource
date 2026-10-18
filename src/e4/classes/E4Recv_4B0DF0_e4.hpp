// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct E4Recv_4B0DF0 {
// --- flat members (BEGIN) ---
    unsigned int ptr_0;  // 0x0
    unsigned int M12;  // 0xC
    unsigned int M68;  // 0x44
    unsigned int M72;  // 0x48
    unsigned int M99;  // 0x63
    unsigned int M64;  // 0x64
// --- flat members (END) ---
    unsigned int ambientSoundController[5];  // G57w16 G1: til truth (AudioController 20B)
    unsigned int customSound_controller[5];  // G57w16 G1: til truth (AudioController 20B)
    char sub_4B0DF0(unsigned int *a2, unsigned int *aP1, int a4, int aP4, int aP5, int aP6, int aP7, int a9, int a10, int a11);
};
} // namespace gamemd
