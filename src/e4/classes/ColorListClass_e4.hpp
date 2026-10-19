// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ColorListClass {
    void* ptr_0;  // 0x0
    unsigned int __pad_004;  // 0x4
    int ColorListClass_field_0x08;  // 0x8
    int ColorListClass_field_0x0C;  // 0xC
    int ColorListClass_field_0x10;  // 0x10
    int ColorListClass_field_0x14;  // 0x14
    int ColorListClass_field_0x18;  // 0x18
    int ColorListClass_field_0x1C;  // 0x1C
    int ColorListClass_field_0x20;  // 0x20
    int ColorListClass_field_0x24;  // 0x24
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    ColorListClass * QueryInterface(char * Block, char a2);
    int Clear(unsigned int a2);
    int GetColor(int a2);
    int SetColor();
    void RemoveColor(wchar_t * String2);
    ColorListClass * sub_488760(ListClass * aP1, int a3, int a4, ListClass * aP4, int a6, ControlClass * aP6, ListClass * aP7, int a9);
};

} // namespace gamemd
