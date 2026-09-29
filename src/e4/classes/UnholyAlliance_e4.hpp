// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct UnholyAlliance {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    char UnholyAlliance_field_04[4];  // 0x4
// --- flat members (END) ---
    BOOL Write(MPCooperative * aP0);
    UnholyAlliance * QueryInterface(char a2);
    char Read(void *a1 = 0, void *a2 = 0);
    char Seek(void *a1 = 0, void *a2 = 0);
};

} // namespace gamemd
