// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct AsyncIO {
// --- flat members (BEGIN) ---
    unsigned int u32_18;  // 0x18
    unsigned int u32_1C;  // 0x1C
    unsigned int u32_20;  // 0x20
    unsigned int q024;  // 0x24
    unsigned int q028;  // 0x28
    unsigned int q040;  // 0x40
    unsigned int u32_4C;  // 0x4C
    unsigned int q050;  // 0x50
    unsigned char u8_51;  // 0x51
    unsigned int q054;  // 0x54
    unsigned int u32_5C;  // 0x5C
    unsigned int q064;  // 0x64
    unsigned int q080;  // 0x80
    unsigned int q118;  // 0x118
    unsigned int q280;  // 0x280
    unsigned int q0242;
    unsigned int u32_180;
    unsigned int u32_1C6;
    unsigned int Timer;
// --- flat members (END) ---
    void Shutdown(void *a1);
    void Read();
    int WaitCompletion();
};

} // namespace gamemd
