// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct MovementAI {
    char m_Target[12];  // 0x0
    void * m_State;  // 0xC
    unsigned int MovementAI_field_10;  // 0x10
    int MovementAI_field_14;  // 0x14
    int MovementAI_field_18;  // 0x18
    unsigned int u32_1C;  // 0x1C
    unsigned int u32_20;  // 0x20
    unsigned int u32_24;  // 0x24
    unsigned int u32_28;  // 0x28
    unsigned int u32_2C;  // 0x2C
    char __pad_30[24];  // 0x30
    unsigned int u32_48;  // 0x48
    unsigned int u32_4C;  // 0x4C
    unsigned int u32_50;  // 0x50
    unsigned int u32_54;  // 0x54
    char __pad_58[140];  // 0x58
    unsigned int u32_E4;  // 0xE4
    char __pad_E8[24];  // 0xE8
    unsigned int u32_100;  // 0x100
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    char Check(void *a1 = 0, void *a2 = 0, void *a3 = 0);
    int IsPathMovementAllowed();
    int IsProgressAtEnd();
    int  MainFootClass(char a2);  // 0x514f70
    int  StepFootClass(int a2, void *a1 = 0);  // 0x5164d0
    static int Begin(TechnoClass *p_this);  // x4:ida@0x6f9e50
};

} // namespace gamemd
