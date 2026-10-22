// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ColorListClass {
    void * ptr_0;  // 0x0
    unsigned int __pad_004;  // 0x4
    int ColorListClass_field_0x08;  // 0x8
    int ColorListClass_field_0x0C;  // 0xC
    int ColorListClass_field_0x10;  // 0x10
    int ColorListClass_field_0x14;  // 0x14
    int ColorListClass_field_0x18;  // 0x18
    int ColorListClass_field_0x1C;  // 0x1C
    int ColorListClass_field_0x20;  // 0x20
    int ColorListClass_field_0x24;  // 0x24
    char __pad_28[4];  // 0x28
    unsigned int u32_2C;  // 0x2C
    unsigned int u32_30;  // 0x30
    unsigned int u32_34;  // 0x34
    unsigned int u32_38;  // 0x38
    char __pad_3C[8];  // 0x3C
    unsigned int u32_44;  // 0x44
    char __pad_48[4];  // 0x48
    unsigned int u32_4C;  // 0x4C
    unsigned int u32_50;  // 0x50
    char __pad_54[280];  // 0x54
    unsigned int u32_16C;  // 0x16C
    unsigned int u32_170;  // 0x170
    unsigned int q174;  // 0x174
    unsigned int u32_178;  // 0x178
    unsigned int u32_17C;  // 0x17C
    char __pad_180[4];  // 0x180
    unsigned int u32_184;  // 0x184
    char __pad_188[4];  // 0x188
    unsigned int u32_18C;  // 0x18C
    unsigned int u32_190;  // 0x190
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
