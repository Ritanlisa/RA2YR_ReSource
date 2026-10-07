// G57w10 D-类体 supply: MiniMap (raw-anchored; canon size=8)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MiniMap {
    unsigned char q000[8];  // 0x0 (canon size filler)
    static bool SavePreviewToINI(void *aP1, void *a2);  // 0x6418B0 raw: bool SavePreviewToINI(MiniMap*, char*)
};
} // namespace gamemd
