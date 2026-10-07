// G57w10 D-类体 supply: LoadProgressMgr (raw-anchored; canon size=12)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct LoadProgressMgr {
    static void ReleaseBuffer(void *aP1);  // 0x554370 raw: void __thiscall LoadProgressMgr::ReleaseBuffer(LoadProgressMgr*)  // G57w10 r5 D-classbody supply (raw-anchored)

    unsigned char q000[12];  // 0x0 (canon size filler)
    static void * GetInstance();  // 0x552A40 raw: _DWORD* GetInstance() [cdecl no-this]
};
} // namespace gamemd
