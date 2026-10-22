// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Struct {
    unsigned char Struct_field_00;  // 0x0
    unsigned char u32_1;  // 0x1
    unsigned char u32_2;  // 0x2
    char __pad_3[1];  // 0x3
    unsigned int u32_4;  // 0x4
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
    unsigned int u32_44;  // 0x44
    unsigned int u32_48;  // 0x48
    unsigned int u32_4C;  // 0x4C
    char __pad_50[4];  // 0x50
    unsigned int u32_54;  // 0x54
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int ClearAllMemberFlags();
    int ZeroInit32();
    int ZeroInitAndSetup(void *a1);
    int ZeroInitAndSetup_0();
    int ZeroInitAndSetup_0_0();
    unsigned char * Zero3(void *a1 = 0);
    unsigned int * InitTriple256(unsigned int * a1);
    static unsigned int * Zero25(Struct * aP1);
    wchar_t **  WideStringCopy(int a2);  // 0x6247d0
};

} // namespace gamemd
