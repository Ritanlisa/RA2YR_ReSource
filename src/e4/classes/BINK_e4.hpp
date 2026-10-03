// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct BINK {
// --- flat members (BEGIN) ---
    char BINK_field_00[4];  // 0x0
    unsigned int Background_Setup;
// --- flat members (END) ---
    void * Background_Setup_0(void * hDlg);  // HWND glue fix G42.36 (name avoids data-member clash)
};

} // namespace gamemd
