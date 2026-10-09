// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct WTFMode {
// --- flat members (BEGIN) ---
    unsigned int u32_18;  // 0x18
    unsigned int q024;  // 0x24
    unsigned int u32_30;  // 0x30
    unsigned int u32_3C;  // 0x3C
    unsigned char u8_3D;  // 0x3D
    void* q040;  // 0x40
    AudioController* q050;  // 0x50
    unsigned int q054;  // 0x54
    AudioController* q05C;  // 0x5C
    void* q064;  // 0x64
    AudioController* q080;  // 0x80
    void* q0E4;  // 0xE4
    void* q0E8;  // 0xE8
    void* q100;  // 0x100
    AudioController* q128;  // 0x128
    unsigned int u32_174;  // 0x174
    void* q228;  // 0x228
    unsigned int u32_244;  // 0x244
    unsigned int u32_424;  // 0x424
    unsigned int u32_4DC;  // 0x4DC
    unsigned int u32_5D8;  // 0x5D8
    void* q1378;  // 0x1378
    void* q30D8;  // 0x30D8
    unsigned int q5270;  // 0x5270
    void* q12504;  // 0x12504
    unsigned int q21104;  // 0x21104
    void* q479250;  // 0x479250
// --- flat members (END) ---
    char ResetUnitFlags();
    int Shutdown(void *a1 = 0);
};

} // namespace gamemd
