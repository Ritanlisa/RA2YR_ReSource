// G57w10 D-类体 supply: MapPreview (raw-anchored; canon size=8)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MapPreview {
    unsigned char q000[8];  // 0x0 (canon size filler)
    static int Upload(void *aP1);  // 0x5E7EB0 raw: int Upload(MapPreview*)
    // --- W16G3 supply (BEGIN) ---
    static int Check(void *aP1, int a2);  // W16G3 static-form (Skirmish 0x5e6aa0 x4)
    // --- W16G3 supply (END) ---

};
} // namespace gamemd
