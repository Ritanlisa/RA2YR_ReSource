// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ColorListClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    char Enabled;  // 0x15
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned int *__pad_0;
    unsigned int u32_16C;
    unsigned int u32_170;
    unsigned int u32_174;
    unsigned int u32_38;
    unsigned int u32_44;
// --- flat members (END) ---
    ColorListClass * QueryInterface(char * Block, char a2);
    int Clear(unsigned int a2);
    int GetColor(int a2);
    int SetColor();
    void RemoveColor(wchar_t * String2);
    ColorListClass * sub_488760(ListClass * aP1, int a3, int a4, ListClass * aP4, int a6, ControlClass * aP6, ListClass * aP7, int a9);
};

} // namespace gamemd
