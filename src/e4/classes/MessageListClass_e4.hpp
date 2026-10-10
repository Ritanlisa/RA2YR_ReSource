// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct MessageListClass {
// --- flat members (BEGIN) ---
    char MessageCount[4];  // 0x0
    char MaxMessageCount[4];  // 0x4
    char ScrollOffset[4];  // 0x8
    char TextColorIndex[4];  // 0xC
    char DisplayDuration[4];  // 0x10
    char MessageTimer[12];  // 0x14
    char MessageRect[16];  // 0x20
    bool IsScrolling;  // 0x30
    unsigned char padding_after_scroll;  // 0x31
// --- flat members (END) ---
    static int AddMessage(MessageListClass * aP1, wchar_t *Source, int a3, wchar_t *a4, int a5, int a6, int a7, char a8);
    int clearMessages(int a1, int a2, int a3, int a4, int a5);
    static int CountCharsInWidth(...);
};

} // namespace gamemd
