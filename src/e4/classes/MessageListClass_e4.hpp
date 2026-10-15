// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct MessageListClass {
// --- flat members (BEGIN) ---
    char MessageCount[4];  // 0x0
    int MaxMessageCount;  // 0x4 [X30:type_map]
    int ScrollOffset;  // 0x8 [X30:type_map]
    int TextColorIndex;  // 0xC [X30:type_map]
    int DisplayDuration;  // 0x10 [X30:type_map]
    char MessageTimer[12];  // 0x14
    char MessageRect[16];  // 0x20
    bool IsScrolling;  // 0x30
    unsigned char padding_after_scroll;  // 0x31
// --- flat members (END) ---
    static int AddMessage(MessageListClass * aP1, wchar_t *Source, int a3, wchar_t *a4, int a5, int a6, int a7, char a8);
    int clearMessages(int a1, int a2, int a3, int a4, int a5);
    static int CountCharsInWidth(uint16_t* p0, int p1, int p2, int p3);  // x4:signals@0x433f50
};

} // namespace gamemd
