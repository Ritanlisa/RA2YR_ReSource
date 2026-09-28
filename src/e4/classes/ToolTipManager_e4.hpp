// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ToolTipManager {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    char Position[8];  // 0x4
    unsigned int u32_8;  // 0x8
    void* ToolTipText;  // 0xC
    char Duration[4];  // 0x10
    char DisplayTimer[12];  // 0x14
    void* q018;  // 0x18
    void* q01C;  // 0x1C
    char TextBuffer[512];  // 0x20
    void* q024;  // 0x24
    unsigned int q028;  // 0x28
    int q034;  // 0x34
    unsigned int q040;  // 0x40
    unsigned int q050;  // 0x50
    unsigned int q054;  // 0x54
    unsigned int q064;  // 0x64
    unsigned int q080;  // 0x80
    unsigned int q084;  // 0x84
    unsigned int q08A;  // 0x8A
    unsigned int q08B;  // 0x8B
    bool q08D;  // 0x8D
    bool q08E;  // 0x8E
    unsigned char q091;  // 0x91
    unsigned int q100;  // 0x100
    unsigned int q128;  // 0x128
    int q130;  // 0x130
    unsigned int q138;  // 0x138
// --- flat members (END) ---
    char addRef(int a1);
    int ddtor(char a2);
    int stubReturnFalse(int a1);
    void read(int a1);
};

} // namespace gamemd
