// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Selection {
    ObjectClass* m_Current;  // 0x0
    bool m_Flag;  // 0x4
    char pad_05[3];  // 0x5
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    bool GetFlag(void *a1);
    static bool GetFlag();
    int ClearGlobals();
    int SetCurrent();
};

} // namespace gamemd
