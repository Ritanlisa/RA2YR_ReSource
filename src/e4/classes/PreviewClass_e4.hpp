// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct PreviewClass {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int q004;  // 0x4
    char __pad_8[4388];  // 0x8
    unsigned int u32_112C;  // 0x112C
    unsigned int u32_1130;  // 0x1130
    unsigned int u32_1134;  // 0x1134
    unsigned int u32_1138;  // 0x1138
    unsigned int u32_113C;  // 0x113C
    char __pad_1140[164];  // 0x1140
    unsigned int u32_11E4;  // 0x11E4
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    char ReadPreview(char *Source);
    static int RenderMapPreview(int* p0);  // x4:signals@0x689d30
};

} // namespace gamemd
