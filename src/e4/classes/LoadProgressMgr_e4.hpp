// G57w10 D-类体 supply: LoadProgressMgr (raw-anchored; canon size=12)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct LoadProgressMgr {
    void * ptr_0;  // 0x0
    CampaignClass* __pad_004;  // 0x4
    int q008;  // 0x8
    char __pad_C[56];  // 0xC
    unsigned int u32_44;  // 0x44
    unsigned int u32_48;  // 0x48
    unsigned int u32_4C;  // 0x4C
    unsigned char u8_50;  // 0x50
    unsigned char u8_51;  // 0x51
    unsigned char u8_52;  // 0x52
    char __pad_53[13];  // 0x53
    unsigned int u32_60;  // 0x60
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static void ReleaseBuffer(void *aP1);
    static void * GetInstance();
};
} // namespace gamemd
