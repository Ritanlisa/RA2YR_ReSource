// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct MovementAI {
    char m_Target[12];  // 0x0
    void* m_State;  // 0xC
    unsigned int MovementAI_field_10;  // 0x10
    int MovementAI_field_14;  // 0x14
    int MovementAI_field_18;  // 0x18
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
