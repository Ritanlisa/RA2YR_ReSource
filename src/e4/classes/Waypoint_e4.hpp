// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Waypoint {
// --- flat members (BEGIN) ---
    void * ptr_4;  // 0x4
    void * ptr_8;  // 0x8
    bool q00B;  // 0xB
    unsigned int u32_C;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned int u32_14;  // 0x14
    unsigned int u32_18;  // 0x18
    unsigned int u32_1C;  // 0x1C
    unsigned int q020;  // 0x20
    unsigned int q024;  // 0x24
    unsigned int q028;  // 0x28
    unsigned int q034;  // 0x34
    void* q038;  // 0x38
    unsigned int q040;  // 0x40
    unsigned int q044;  // 0x44
    unsigned int q050;  // 0x50
    unsigned int q054;  // 0x54
    unsigned int q064;  // 0x64
    unsigned int q068;  // 0x68
    unsigned int q080;  // 0x80
    unsigned int q084;  // 0x84
    unsigned int q100;  // 0x100
    unsigned int q104;  // 0x104
    unsigned int q128;  // 0x128
    unsigned int q130;  // 0x130
    void* q134;  // 0x134
    unsigned int q260;  // 0x260
    unsigned int q304;  // 0x304
    void* q308;  // 0x308
    unsigned int q598;  // 0x598
    unsigned int q608;  // 0x608
    unsigned int q774;  // 0x774
    unsigned int u32_840;  // 0x840
    unsigned int u32_878;  // 0x878
    unsigned int q1544;  // 0x1544
    unsigned int q1634;  // 0x1634
    unsigned int q1908;  // 0x1908
    void* q1910;  // 0x1910
    unsigned int q5170;  // 0x5170
    unsigned int q5444;  // 0x5444
    unsigned int q5684;  // 0x5684
    unsigned int q6408;  // 0x6408
    unsigned int *__pad_0;
    unsigned int field_38;
// --- flat members (END) ---
    unsigned int * FindByCell(IUnknown * aP1);  // 0x5023B0
    IPXManagerClass * InitInvalid();  // 0x53ECB0
    char  FindCell(unsigned int * a2);  // 0x763A50
    CHAR *  To_String(void * aP0);  // 0x763610
};
} // namespace gamemd
