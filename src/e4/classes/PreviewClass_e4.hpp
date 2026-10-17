// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct PreviewClass {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int PreviewClass_field_0x04;  // 0x4
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    char ReadPreview(char *Source);
    static int RenderMapPreview(int* p0);  // x4:signals@0x689d30
};

} // namespace gamemd
