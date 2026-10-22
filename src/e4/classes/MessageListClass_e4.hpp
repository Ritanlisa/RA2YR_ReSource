// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct MessageListClass {
    int MessageCount;  // 0x0
    int MaxMessageCount;  // 0x4
    int ScrollOffset;  // 0x8
    int TextColorIndex;  // 0xC
    int DisplayDuration;  // 0x10
    char MessageTimer[12];  // 0x14
    char MessageRect[16];  // 0x20
    bool IsScrolling;  // 0x30
    char padding_after_scroll[3];  // 0x31
    unsigned int u32_34;  // 0x34
    unsigned int u32_38;  // 0x38
    unsigned int u32_3C;  // 0x3C
    unsigned char u8_40;  // 0x40
    unsigned char u8_41;  // 0x41
    char __pad_42[2];  // 0x42
    unsigned int u32_44;  // 0x44
    unsigned int u32_48;  // 0x48
    char __pad_4C[288];  // 0x4C
    unsigned short u16_16C;  // 0x16C
    char __pad_16E[322];  // 0x16E
    unsigned int u32_2B0;  // 0x2B0
    unsigned int u32_2B4;  // 0x2B4
    unsigned short u16_2B8;  // 0x2B8
    char __pad_2BA[2];  // 0x2BA
    unsigned int u32_2BC;  // 0x2BC
    unsigned int u32_2C0;  // 0x2C0
    unsigned int u32_2C4;  // 0x2C4
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static int AddMessage(MessageListClass * aP1, wchar_t *Source, int a3, wchar_t *a4, int a5, int a6, int a7, char a8);
    int clearMessages(int a1, int a2, int a3, int a4, int a5);
    static int CountCharsInWidth(uint16_t* p0, int p1, int p2, int p3);  // x4:signals@0x433f50
};

} // namespace gamemd
