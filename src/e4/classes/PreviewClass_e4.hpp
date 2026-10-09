// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct PreviewClass {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
// --- flat members (END) ---
    char ReadPreview(char *Source);
    static int RenderMapPreview(...);  // w18j2 C3861 static supply
};

} // namespace gamemd
