// G57w10 D-类体 supply: MapPreview (raw-anchored; canon size=8)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MapPreview {
    unsigned char q000[8];  // 0x0 (canon size filler)
    static int Upload(void *aP1);  // 0x5E7EB0 raw: int Upload(MapPreview*)
};
} // namespace gamemd
