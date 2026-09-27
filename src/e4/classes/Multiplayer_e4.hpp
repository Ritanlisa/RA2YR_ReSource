// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Multiplayer {
// --- flat members (BEGIN) ---
    unsigned char u8_C;  // 0xC
    unsigned char u8_D;  // 0xD
    unsigned char q018;  // 0x18
    unsigned char q024;  // 0x24
    unsigned int u32_404;  // 0x404
    unsigned int qA13;  // 0xA13
    unsigned int q1028;  // 0x1028
    unsigned int u32_284C;  // 0x284C
    unsigned int u32_4;
    unsigned int u32_4049;
    unsigned int u32_8;
    unsigned int vt_slot_12;
    unsigned int Screen;
// --- flat members (END) ---
    unsigned int * CopyDataArray(ObjectClass * aP1);
    void * FindStartPositions();
    void ShowProgress(int a2);
};

} // namespace gamemd
