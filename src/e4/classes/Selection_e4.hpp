// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Selection {
// --- flat members (BEGIN) ---
    ObjectClass* m_Current;  // 0x0
    bool m_Flag;  // 0x4
    unsigned char pad_05;  // 0x5
// --- flat members (END) ---
    char GetFlag();
    int ClearGlobals();
    void SetCurrent();
};

} // namespace gamemd
