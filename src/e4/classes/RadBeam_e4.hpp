// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct RadBeam {
#pragma pack(push, 1)  // X60: binary-packed layout
    unsigned int pad_0;  // 0x0
    unsigned char __pad_004;  // 0x4
    char __pad_5[3];  // 0x5
    unsigned int u32_8;  // 0x8
    int memberAtOffset12;  // 0xC
    unsigned int uniqueId;  // 0x10
    unsigned int abstractFlags;  // 0x14
    unsigned int nextArrayIndex;  // 0x18
    unsigned int referenceCount;  // 0x1C
    unsigned int NeedsSaveOrLink;  // 0x20
    double range;  // 0x24
    int data[40];  // 0x2C
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    unsigned int * InitState(int aP1, void *a2 = 0);
    int Create(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0);
#pragma pack(pop)
};

} // namespace gamemd
