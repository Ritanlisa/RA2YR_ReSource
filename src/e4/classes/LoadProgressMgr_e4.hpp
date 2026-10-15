// G57w10 D-类体 supply: LoadProgressMgr (raw-anchored; canon size=12)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct LoadProgressMgr {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
// --- flat members (END) ---
    static void ReleaseBuffer(void *aP1);
    unsigned char q000[12];  // 0x0 (canon size filler)
    static void * GetInstance();
    CampaignClass* __pad_004;  // 0x4 [X30:type_map]
};
} // namespace gamemd
