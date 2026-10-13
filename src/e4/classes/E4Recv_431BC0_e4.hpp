// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct E4Recv_431BC0 {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    unsigned int M20;  // 0x14
    unsigned int M38;  // 0x26
    unsigned int M39;  // 0x27
    unsigned int M41;  // 0x29
    unsigned int M48;  // 0x30
    unsigned int M36;  // 0x36
    unsigned int M60;  // 0x3C
    unsigned int M64;  // 0x40
    unsigned int M68;  // 0x44
    unsigned int M76;  // 0x4C
    unsigned int M52;  // 0x52
    unsigned int M56;  // 0x56
    unsigned int M72;  // 0x72
    unsigned int M80;  // 0x80
// --- flat members (END) ---
    unsigned int ambientSoundController[5];  // G57w16 G1: til truth (AudioController 20B)
    void* attachedTag;  // 0x0 (no offset truth)
    void* nextObject;  // 0x0 (no offset truth)
    unsigned int customSound_controller[5];  // G57w16 G1: til truth (AudioController 20B)
    void* occupant;  // 0x0 (no offset truth)
    void* attachedBomb;  // 0x0 (no offset truth)
    void* owningHouseIndex;  // 0x0 (no offset truth)
    void* AbstractClass;  // 0x0 (no offset truth)
    int  sub_431BC0(int a2, int a3);  // 0x431BC0

    unsigned int u32_C;  // X10 supply (member_lookup)
};
} // namespace gamemd
