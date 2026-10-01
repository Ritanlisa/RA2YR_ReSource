// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct MovementAI {
// --- flat members (BEGIN) ---
    char m_Target[12];  // 0x0
    void* q004;  // 0x4
    unsigned int u32_8;  // 0x8
    char m_State[4];  // 0xC
    unsigned int u32_10;  // 0x10
    char MovementAI_field_14[4];  // 0x14
    char MovementAI_field_18[4];  // 0x18
    unsigned int MovementAI_field_10;
    unsigned int u32_100;
    unsigned int u32_E4;
// --- flat members (END) ---
    void Check(void *a1, void *a2, void *a3);
    int IsPathMovementAllowed();
    int IsProgressAtEnd();
};

} // namespace gamemd
