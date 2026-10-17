// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct IPXManagerClass;  // fix_fwd_type_supply
struct CHAR;  // fix_fwd_type_supply
struct Waypoint {
    int __pad_0;  // 0x0
    HashTable * ptr_4;  // 0x4
    HashTable * ptr_8;  // 0x8
    unsigned int u32_C;  // 0xC
    unsigned int u32_10;  // 0x10
    char __pad_14[16];  // 0x14
    unsigned int q024;  // 0x24
    unsigned int q028;  // 0x28
    unsigned int u32_2C;  // 0x2C
    char __pad_30[8];  // 0x30
    void * field_38;  // 0x38
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    unsigned int * FindByCell(unsigned short *aP1);  // G57w10-S raw 0x005023B0 IUnknown 占位清除
    unsigned char * InitInvalid(void *a1 = 0);  // 0x53ECB0
    int  FindCell(unsigned int * a2);  // 0x763A50
    static CHAR * To_String(int aP0);
};
} // namespace gamemd
