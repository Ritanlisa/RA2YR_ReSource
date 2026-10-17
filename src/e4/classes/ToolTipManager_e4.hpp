// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ToolTipManager {
    bool IsVisible;  // 0x0
    char __pad_1[3];  // 0x1
    char Position[8];  // 0x4
    void* ToolTipText;  // 0xC
    int Duration;  // 0x10
    char DisplayTimer[12];  // 0x14
    char TextBuffer[512];  // 0x20
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    char addRef(int a1);
    int ddtor(char a2);
    int stubReturnFalse(int a1);
    void read(int a1);
};

} // namespace gamemd
