// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ColorListClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    char Enabled;  // 0x15
// --- flat members (END) ---
    ColorListClass * QueryInterface(char * Block, char a2);
    int Clear(unsigned int a2);
    int GetColor(int a2);
    int SetColor();
    void RemoveColor(wchar_t * String2);
    ColorListClass * sub_488760(ListClass * aP1, int a3, int a4, ListClass * aP4, int a6, ControlClass * aP6, ListClass * aP7, int a9);
    unsigned int *q000;  // 0x0 (offset-truth)
    unsigned int u32_16C;  // 0x16C (offset-truth)
    unsigned int u32_170;  // 0x170 (offset-truth)
    unsigned int u32_38;  // 0x38 (offset-truth)
    unsigned int u32_44;  // 0x44 (offset-truth)
};

} // namespace gamemd
