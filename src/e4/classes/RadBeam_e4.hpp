// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct RadBeam {
// --- flat members (BEGIN) ---
    unsigned int pad_0;  // 0x0
    int memberAtOffset12;  // 0xC
    unsigned int uniqueId;  // 0x10
    unsigned int abstractFlags;  // 0x14
    unsigned int pad_16;  // 0x16
    unsigned int nextArrayIndex;  // 0x18
    unsigned int referenceCount;  // 0x1C
    unsigned int NeedsSaveOrLink;  // 0x20
    unsigned int pad_35;  // 0x23
    double range;  // 0x24
    unsigned char data;  // 0x2C
    unsigned int memberAtOffset48;  // 0x30
    unsigned int color;  // 0x32
    unsigned int memberAtOffset36;  // 0x36
    int memberAtOffset60;  // 0x3C
    int memberAtOffset64;  // 0x40
    int memberAtOffset68;  // 0x44
    unsigned int pad_72;  // 0x48
    int memberAtOffset84;  // 0x54
    unsigned char memberAtOffset88;  // 0x58
    unsigned int pad_89;  // 0x59
    unsigned int color2;  // 0xC0
    unsigned int pad_195;  // 0xC3
// --- flat members (END) ---
    unsigned int * InitState(int aP1, void *a1 = 0);
    void * Create(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0);

    unsigned char __pad_004;  // X10 supply (csp_canon_members)
    unsigned int u32_8;  // X10 supply (member_lookup)
    int u8_21;  // X10 supply (member_lookup)
    int u8_22;  // X10 supply (member_lookup)
    uint8_t u8_9;  // X10 supply (member_lookup)
};

} // namespace gamemd
