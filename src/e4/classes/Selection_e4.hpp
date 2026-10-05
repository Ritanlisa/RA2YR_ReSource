// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Selection {
// --- flat members (BEGIN) ---
    ObjectClass* m_Current;  // 0x0
    bool m_Flag;  // 0x4
// --- flat members (END) ---
    bool GetFlag(void *a1);
    static bool GetFlag();  // G42.33 b4 C2: static-form sync (0 参调用形)
    int ClearGlobals();
    int SetCurrent();
};

} // namespace gamemd
