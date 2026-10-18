// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct E4Recv_4349F0 {
// --- flat members (BEGIN) ---
    unsigned int ptr_0;  // 0x0
    unsigned int M4;  // 0x4
    unsigned int M8;  // 0x8
    unsigned int M12;  // 0xC
    unsigned int M28;  // 0x1C
    unsigned int M32;  // 0x20
    unsigned int M24;  // 0x24
    unsigned int M38;  // 0x26
    unsigned int M44;  // 0x2C
    unsigned int M36;  // 0x36
    unsigned int M40;  // 0x40
    unsigned int M65;  // 0x41
    unsigned int M64;  // 0x64
// --- flat members (END) ---
    unsigned int __pad_14;  // 0x14 (G57w18j4: ctor write gap 0x10->0x18, live disasm 0x4349F0)
    unsigned int referenceCount;  // 0x1C (was M28; mov [esi+1Ch],ebx @0x434a2b)
    unsigned int occupant;  // 0x24 (was M24; word 7FFF@24h + word 3555@26h @0x434a0f/15)
    unsigned int owningHouseIndex;  // 0x28 (was M38; dword 40h @0x434a1b)
    unsigned int fallRate;  // 0x2C (was M44; dword 1 @0x434a34)
    char nextObject[16];  // 0x30 (was q034; SetRect lprc lea [esi+30h] RECT16; absorbs old q034/M36/q038/M40)
    unsigned char ambientSoundController[2];  // 0x40 (ctor bytes 0x40/0x41 @0x434a22/25; was M65 slot)
    BOOL sub_4349F0();  // 0x4349F0

    unsigned int q018;  // X10 supply (member_lookup)
};
} // namespace gamemd
