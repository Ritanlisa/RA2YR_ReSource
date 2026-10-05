// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct EventQueue {
// --- flat members (BEGIN) ---
    unsigned int u16_8;  // 0x8
    unsigned int u32_C;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned int q018;  // 0x18
    unsigned int q024;  // 0x24
    unsigned int q034;  // 0x34
    unsigned int CheckPosition;
    unsigned int u32_4;
// --- flat members (END) ---
    __int16 Check();
    __int16 Process();
    short Read();
};

} // namespace gamemd
