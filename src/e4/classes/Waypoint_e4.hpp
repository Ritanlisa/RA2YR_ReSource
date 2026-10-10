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
    unsigned int * FindByCell(unsigned short *a2);  // G57w10-S raw 0x005023B0 IUnknown 占位清除
    unsigned char * InitInvalid(void *a1 = 0);  // 0x53ECB0
    int  FindCell(unsigned int * a2);  // 0x763A50
    static char * To_String(int a1);
    unsigned int *q000;  // 0x0 (canon-mt)
    static double __pad_0(...);  // plateau: C2039/C3861 stub
    static double field_38(...);  // plateau: C2039/C3861 stub
    static double q134(...);  // plateau: C2039/C3861 stub
    static double u32_248(...);  // plateau: C2039/C3861 stub
};
} // namespace gamemd
