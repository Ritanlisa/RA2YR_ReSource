// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ToolTipClass {
    int __pad_000;  // 0x0
    unsigned int Position;  // 0x4
    int ToolTipClass_field_0x08;  // 0x8
    int ToolTipClass_field_0x0C;  // 0xC
    int Duration;  // 0x10
    int DisplayTimer;  // 0x14
    void* q018;  // 0x18
    void* q01C;  // 0x1C
    int TextBuffer;  // 0x20
    void* q024;  // 0x24
    unsigned int q028;  // 0x28
    int ToolTipClass_field_0x2C;  // 0x2C
    int ToolTipClass_field_0x30;  // 0x30
    int ToolTipClass_field_0x34;  // 0x34
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
