// G57w10 D-类体 supply: TileData::ctor (raw 0x58BDC0; canon TileData size=4)
// Dedicated e4 carrier (fwd-only before; consumer TUs include explicitly).
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TileData {
    unsigned int tail_0;  // 0x0
    char __pad_4[4];  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned int u32_C;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned int u32_14;  // 0x14
    unsigned int u32_18;  // 0x18
    unsigned int u32_1C;  // 0x1C
    unsigned int u32_20;  // 0x20
    unsigned int u32_24;  // 0x24
    unsigned int u32_28;  // 0x28
    unsigned int u32_2C;  // 0x2C
    unsigned int u32_30;  // 0x30
    unsigned int u32_34;  // 0x34
    unsigned int u32_38;  // 0x38
    unsigned int u32_3C;  // 0x3C
    unsigned int u32_40;  // 0x40
    unsigned char u8_44;  // 0x44
    unsigned char u8_45;  // 0x45
    unsigned char u8_46;  // 0x46
    unsigned char u8_47;  // 0x47
    unsigned char u8_48;  // 0x48
    unsigned char u8_49;  // 0x49
    unsigned char u8_4A;  // 0x4A
    unsigned char u8_4B;  // 0x4B
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static unsigned int * Constructor(void *aP1);
};
} // namespace gamemd
