// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct DialogClass {
    static unsigned int * CopyTemplateStruct(void *aP1, void *a2);  // 0x623610 raw: _DWORD* CopyTemplateStruct(DialogClass*, _DWORD*)

// --- flat members (BEGIN) ---
    unsigned int u32_14;  // 0x14
    unsigned int q020;  // 0x20
    unsigned int q028;  // 0x28
    void* q034;  // 0x34
    unsigned int q040;  // 0x40
    unsigned int q050;  // 0x50
    unsigned int q064;  // 0x64
    unsigned int q080;  // 0x80
    unsigned int u32_D0;  // 0xD0
    unsigned int q100;  // 0x100
    unsigned int q128;  // 0x128
    void* q130;  // 0x130
    unsigned int q520;  // 0x520
// --- flat members (END) ---
    static ATOM RegisterWinClasses();  // 0x60D450 G42.33 b3 static-form sync (broken ATOMRegisterWinClasses decl; RegisterWinClasses field vocab removed: name collision, zero field uses)
    int GetFlag(void *a1);
    static int Reposition(int hWnd, int a2);
};

} // namespace gamemd
