// G57w10 D-类体 supply: KeywordClass (raw 0x41CEF0; canon size=4)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct KeywordClass {
    unsigned char q000[4];  // 0x0 (canon size filler)
    static int FindOrCreate(void *aP1);  // 0x41CEF0 raw: int KeywordClass_FindOrCreate(char*)
};
} // namespace gamemd
