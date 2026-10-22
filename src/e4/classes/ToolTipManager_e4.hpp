// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ToolTipManager {
    bool IsVisible;  // 0x0
    char __pad_1[3];  // 0x1
    char Position[8];  // 0x4
    void * ToolTipText;  // 0xC
    int Duration;  // 0x10
    char DisplayTimer[12];  // 0x14
    char TextBuffer[512];  // 0x20
    char __pad_220[8];  // 0x220
    unsigned int u32_228;  // 0x228
    char __pad_22C[4];  // 0x22C
    unsigned int u32_230;  // 0x230
    char __pad_234[24];  // 0x234
    unsigned int u32_24C;  // 0x24C
    unsigned int u32_250;  // 0x250
    unsigned int u32_254;  // 0x254
    unsigned char u8_258;  // 0x258
    char __pad_259[3];  // 0x259
    unsigned int u32_25C;  // 0x25C
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    char addRef(int a1);
    int ddtor(char a2);
    int stubReturnFalse(int a1);
    void read(int a1);
};

} // namespace gamemd
