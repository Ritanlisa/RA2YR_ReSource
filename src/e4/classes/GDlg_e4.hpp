// G57w10 D-类体 supply: GDlg (raw 0x4E5AC0; canon size=4)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct GDlg {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
// --- flat members (END) ---
    unsigned char q000[4];  // 0x0 (canon size filler)
    static wchar_t * LoadLetterStrings();  // 0x4E5AC0 raw: wchar_t* GDlg_LoadLetterStrings() [cdecl no-this]
};
} // namespace gamemd
