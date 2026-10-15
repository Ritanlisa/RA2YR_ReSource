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
unsigned int q314;  // 0x314 [X35-L7 kind=unsigned int]
unsigned int q318;  // 0x318 [X35-L7 kind=unsigned int]
    unsigned int u32_444;  // 0x444
    unsigned int u32_47C;  // 0x47C
    void* q788;  // 0x788
    void* q1928;  // 0x1928
    void* q1938;  // 0x1938
    void* q6440;  // 0x6440
// --- flat members (END) ---
    static int CheckPosition(EventQueue *pThis);
    int16_t Check(void *a1 = 0, void *a2 = 0, void *a3 = 0);
    int16_t Process(void *a1 = 0);
    short Read(void *a1 = 0, void *a2 = 0, void *a3 = 0);
    unsigned int s_Queue;  // [X30:default]
};

} // namespace gamemd
