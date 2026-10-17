// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct PlayerClass {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int PlayerClass_field_0x04;  // 0x4
    unsigned int u32_8;  // 0x8
    int PlayerClass_field_0x0C;  // 0xC
    int PlayerClass_field_0x10;  // 0x10
    int PlayerClass_field_0x14;  // 0x14
    int PlayerClass_field_0x18;  // 0x18
    int PlayerClass_field_0x1C;  // 0x1C
    int PlayerClass_field_0x20;  // 0x20
    int PlayerClass_field_0x24;  // 0x24
    int PlayerClass_field_0x28;  // 0x28
    int PlayerClass_field_0x2C;  // 0x2C
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    bool IsValidIndex(int a1);
    char AssignPlayerIndex();
    int SetHouse(int a2);
    int HasPlayers(void *a1 = 0);  // 0x6abac0
};

} // namespace gamemd
