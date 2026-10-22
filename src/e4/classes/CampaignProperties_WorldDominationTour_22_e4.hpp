// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct CampaignProperties_WorldDominationTour_22 {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int q004;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned int q00C;  // 0xC
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int  Seek(int a2, void *a2_2 = 0, void *a3_1 = 0);  // 0x5D2770
    int Read(unsigned int * a2, void *a2_2, void *a3 = 0);  // 0x5D2900
    VectorClass_flat *  QueryInterface(char a2);  // 0x5D2CA0
    int Release(void *a1_1);  // 0x76F1A0
    int ddtor(void *a1 = 0);  // 0x76F1B0
    unsigned int  Write(int a2);  // 0x5D2940
    int AddRef(void *a1_1);  // def-aligned
};
} // namespace gamemd
