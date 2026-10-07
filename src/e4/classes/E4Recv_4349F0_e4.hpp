// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct E4Recv_4349F0 {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    unsigned int M4;  // 0x4
    unsigned int M8;  // 0x8
    unsigned int M12;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned int __pad_14;  // 0x14 (G57w18j4: ctor write gap 0x10->0x18, live disasm 0x4349F0)
    unsigned int q018;  // 0x18
    unsigned int referenceCount;  // 0x1C (was M28; mov [esi+1Ch],ebx @0x434a2b)
    unsigned int M32;  // 0x20
    unsigned int occupant;  // 0x24 (was M24; word 7FFF@24h + word 3555@26h @0x434a0f/15)
    unsigned int owningHouseIndex;  // 0x28 (was M38; dword 40h @0x434a1b)
    unsigned int fallRate;  // 0x2C (was M44; dword 1 @0x434a34)
    char nextObject[16];  // 0x30 (was q034; SetRect lprc lea [esi+30h] RECT16; absorbs old q034/M36/q038/M40)
    unsigned char ambientSoundController[2];  // 0x40 (ctor bytes 0x40/0x41 @0x434a22/25; was M65 slot)
    unsigned int q044;  // 0x44
    unsigned int q050;  // 0x50
    unsigned int q054;  // 0x54
    unsigned int M64;  // 0x64
    unsigned int q068;  // 0x68
    unsigned int q080;  // 0x80
    unsigned int q084;  // 0x84
    unsigned int q100;  // 0x100
    unsigned int q104;  // 0x104
    unsigned int q128;  // 0x128
    unsigned int q130;  // 0x130
    unsigned int q134;  // 0x134
    unsigned int q260;  // 0x260
    unsigned int q304;  // 0x304
    unsigned int q308;  // 0x308
    unsigned int q598;  // 0x598
    unsigned int q608;  // 0x608
    unsigned int q774;  // 0x774
    unsigned int q1544;  // 0x1544
    unsigned int q1634;  // 0x1634
    unsigned int q1908;  // 0x1908
    unsigned int q1910;  // 0x1910
    unsigned int q5170;  // 0x5170
    unsigned int q5444;  // 0x5444
    unsigned int q5684;  // 0x5684
    unsigned int q6408;  // 0x6408
// --- flat members (END) ---
    BOOL sub_4349F0();  // 0x4349F0
};
} // namespace gamemd
