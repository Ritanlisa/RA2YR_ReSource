// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Color;  // fix_fwd_type_supply
struct Rules {
    char q000[1];  // 0x0
    char m_1[4];  // 0x1
    char m_5[4];  // 0x5
    char __pad_9[3];  // 0x9
    int m_C;  // 0xC
    unsigned int __tail_10;  // 0x10
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int ReadMiscINI();  // 0x6691E0
    IUnknown * * ReadCombatINI();  // 0x66BBB0
    unsigned int * CopyDataArray(VectorClass_flat * aP1, void *a2 = 0);  // 0x67A570
    char * GetProductionTimeMult(int aP1);  // 0x5FB2E0
};
} // namespace gamemd
