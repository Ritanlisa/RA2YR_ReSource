// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Color;  // fix_fwd_type_supply
struct Rules {
// --- flat members (BEGIN) ---
    unsigned int *m_1;  // 0x1
    unsigned int m_5;  // 0x5
    int m_C;  // 0xC
    Color * ptr_1860;  // 0x1860
    Color * ptr_1866;  // 0x1866
// --- flat members (END) ---
    int ReadMiscINI();  // 0x6691E0
    IUnknown * * ReadCombatINI();  // 0x66BBB0
    unsigned int * CopyDataArray(VectorClass_flat * aP1, void *a2 = 0);  // 0x67A570
    char * GetProductionTimeMult(int aP1);  // 0x5FB2E0
    unsigned char m_5[64];  // pad compile-supply (G41.47)
    unsigned char m_1[64];  // pad compile-supply (G41.47)
    char __tail_10[4];  // 0x10 (ml)
    unsigned int *q000;  // 0x0 (canon-mt)

    unsigned int u32_14;  // X10 supply (member_lookup)
    unsigned int u32_4;  // X10 supply (member_lookup)
    unsigned int u32_8;  // X10 supply (member_lookup)
};
} // namespace gamemd
