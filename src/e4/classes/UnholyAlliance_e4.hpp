// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct UnholyAlliance {
    unsigned char ptr_0;  // 0x0
    char _pad_01[3];  // 0x1
    int UnholyAlliance_field_04;  // 0x4
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    UnholyAlliance * QueryInterface(unsigned int * Block, char a2);
    char Read(void *a1, void *a2, void *a3 = 0);
    char Seek(void *a1, void *a2, void *a3);
    BOOL Write(MPCooperative * aP0);
};

} // namespace gamemd
