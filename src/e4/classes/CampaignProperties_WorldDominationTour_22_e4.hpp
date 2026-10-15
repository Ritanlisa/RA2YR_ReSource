// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct CampaignProperties_WorldDominationTour_22 {
// --- flat members (BEGIN) ---
    bool IsAllocated;  // 0xD
// --- flat members (END) ---
    int  Seek(int a2, void *a2_2 = 0, void *a3_1 = 0);  // 0x5D2770
    int Read(unsigned int * a2, void *a2_2, void *a3 = 0);  // 0x5D2900
    VectorClass_flat *  QueryInterface(char a2);  // 0x5D2CA0
    int Release(void *a1_1);  // 0x76F1A0
    int ddtor(void *a1 = 0);  // 0x76F1B0
    unsigned int  Write(int a2);  // 0x5D2940
    int AddRef(void *a1_1);  // def-aligned
    unsigned char *m_1;  // 0x1 (offset-truth)
    unsigned int m_C;  // 0xC (offset-truth)

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q004;  // X10 supply (member_lookup)
    unsigned int u32_8;  // X10 supply (member_lookup)
};
} // namespace gamemd
