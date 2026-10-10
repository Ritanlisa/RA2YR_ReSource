// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct E4Recv_431D90 {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    unsigned int M37;  // 0x25
    unsigned int M39;  // 0x27
    unsigned int M40;  // 0x28
    unsigned int M41;  // 0x29
    unsigned int M48;  // 0x30
    unsigned int M36;  // 0x36
    unsigned int M52;  // 0x52
// --- flat members (END) ---
    void sub_431D90();  // 0x431D90
    void* nextObject;  // (W16G3 @0x431d96 OPDEL)
    unsigned int occupant;  // @0x431d9d LOBYTE (W16G3 raw-usage vocab)
    void* attachedTag;  // (W16G3 @0x431db1 assign 0)
    unsigned int owningHouseIndex;  // @0x431dxx (W16G3 raw-usage vocab)
};
} // namespace gamemd
