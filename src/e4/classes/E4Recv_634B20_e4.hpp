// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Game;  // fix_fwd_type_supply
struct E4Recv_634B20 {
// --- flat members (BEGIN) ---
    unsigned int ptr_0;  // 0x0
    unsigned int M4;  // 0x4
    unsigned int M16;  // 0x10
    unsigned int M36;  // 0x24
    unsigned int M48;  // 0x30
    unsigned int M168;  // 0xA8
// --- flat members (END) ---
    Game * * sub_634B20();  // 0x634B20
    unsigned int attachedBomb;  // [X30:default]
    unsigned int lineTrailer;  // [X30:default]
    unsigned int nextObject;  // [X30:default]
    unsigned int occupant;  // [X30:default]


    void * ptr_4;  // 0x4 [X55 W3 supply (render vocab)]
};
} // namespace gamemd
