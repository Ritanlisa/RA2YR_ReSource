// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ToolTipManager {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    char Position[8];  // 0x4
    void* ToolTipText;  // 0xC
int Duration;  // 0x10 [X35-L7 kind=int]
    char DisplayTimer[12];  // 0x14
    char TextBuffer[512];  // 0x20
// --- flat members (END) ---
    char addRef(int a1);
    int ddtor(char a2);
    int stubReturnFalse(int a1);
    void read(int a1);
bool IsVisible;  // 0x0 [X35-L7 kind=bool]
    unsigned int u32_23C;  // 0x23C (offset-truth)
    unsigned int u32_248;  // 0x248 (offset-truth)
    unsigned int u32_250;  // 0x250 (offset-truth)
unsigned int u32_244;  // 0x244 [X35-L7 kind=unsigned int]
unsigned int u32_238;  // 0x238 [X35-L7 kind=unsigned int]
unsigned int u32_234;  // 0x234 [X35-L7 kind=unsigned int]
    unsigned char u8_241;  // 0x241 [X30:member_lookup]
};

} // namespace gamemd
