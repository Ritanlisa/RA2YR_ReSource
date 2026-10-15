// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct IPXManagerClass;  // fix_fwd_type_supply
struct CHAR;  // fix_fwd_type_supply
struct Waypoint {
// --- flat members (BEGIN) ---
    HashTable * ptr_4;  // 0x4
    HashTable * ptr_8;  // 0x8
// --- flat members (END) ---
    unsigned int * FindByCell(unsigned short *aP1);  // G57w10-S raw 0x005023B0 IUnknown 占位清除
    unsigned char * InitInvalid(void *a1 = 0);  // 0x53ECB0
    int  FindCell(unsigned int * a2);  // 0x763A50
    static CHAR * To_String(int aP0);
    unsigned int *q000;  // 0x0 (canon-mt)

    unsigned int u32_2C;  // X10 supply (member_lookup)
    unsigned char u8_210;  // X10 supply (member_lookup)
    void * field_38;  // 0x38
    unsigned int q028;  // 0x28
    unsigned int q024;  // 0x24
    unsigned int u32_10;  // 0x10
    unsigned int u32_C;  // 0xC
};
} // namespace gamemd
