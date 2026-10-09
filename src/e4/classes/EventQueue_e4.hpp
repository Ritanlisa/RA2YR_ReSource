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
    void* q314;  // 0x314
    void* q318;  // 0x318
    unsigned int u32_444;  // 0x444
    unsigned int u32_47C;  // 0x47C
    void* q788;  // 0x788
    void* q1928;  // 0x1928
    void* q1938;  // 0x1938
    void* q6440;  // 0x6440
// --- flat members (END) ---
    static int CheckPosition(EventQueue *pThis);  // G57w19k2 raw thiscall static-form supply (member CheckPosition -> CheckPosition_slot)
    __int16 Check();
    __int16 Process();
    short Read();
};

} // namespace gamemd
