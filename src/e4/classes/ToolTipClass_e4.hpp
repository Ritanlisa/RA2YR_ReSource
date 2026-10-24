// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ToolTipClass {
    int ptr_0;  // 0x0
    unsigned int Position;  // 0x4
    int q008;  // 0x8
    int q00C;  // 0xC
    int Duration;  // 0x10
    int DisplayTimer;  // 0x14
    void * q018;  // 0x18
    void * q01C;  // 0x1C
    int TextBuffer;  // 0x20
    void * q024;  // 0x24
    unsigned int q028;  // 0x28
    int q02C;  // 0x2C
    int q030;  // 0x30
    int q034;  // 0x34
    char __pad_38[508];  // 0x38
    unsigned int u32_234;  // 0x234
    unsigned int u32_238;  // 0x238
    char __pad_23C[8];  // 0x23C
    unsigned int u32_244;  // 0x244
    char __pad_248[4];  // 0x248
    unsigned int u32_24C;  // 0x24C
    unsigned int u32_250;  // 0x250
    unsigned int u32_254;  // 0x254
    unsigned char u8_258;  // 0x258
    char __pad_259[3];  // 0x259
    unsigned int u32_25C;  // 0x25C
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int initString();
    void ddtor(void *a1 = 0);  // 0x724C30 G42.33 b3 supplied-body sync
    char  addRef(int a2);  // 0x724C90
    void * Destructor(char a2);  // G42.33 b3 supplied-body sync
    unsigned int write(int a2);  // G42.33 b3 supplied-body sync
    int seek(int a2);
    void updateString();
    static void updateString(void *aP0);
};

} // namespace gamemd
