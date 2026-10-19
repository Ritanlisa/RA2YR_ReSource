// G57w10 D-类体 supply: LoadProgressMgr (raw-anchored; canon size=12)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct LoadProgressMgr {
    void* ptr_0;  // 0x0
    CampaignClass* __pad_004;  // 0x4
    int LoadProgressMgr_field_0x08;  // 0x8
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static void ReleaseBuffer(void *aP1);
    static void * GetInstance();
};
} // namespace gamemd
