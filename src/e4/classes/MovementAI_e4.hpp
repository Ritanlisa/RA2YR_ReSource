// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct MovementAI {
// --- flat members (BEGIN) ---
    char m_Target[12];  // 0x0
    char m_State[4];  // 0xC
    char MovementAI_field_14[4];  // 0x14
    char MovementAI_field_18[4];  // 0x18
// --- flat members (END) ---
    char Check(void *a1 = 0, void *a2 = 0, void *a3 = 0);
    int IsPathMovementAllowed();
    int IsProgressAtEnd();
    int  MainFootClass(char a2);  // 0x514f70
    int  StepFootClass(int a2, void *a1 = 0);  // 0x5164d0
    static int Begin(...);
    unsigned int u32_100;  // 0x100 (offset-truth)
    unsigned int u32_E4;  // 0xE4 (offset-truth)
};

} // namespace gamemd
