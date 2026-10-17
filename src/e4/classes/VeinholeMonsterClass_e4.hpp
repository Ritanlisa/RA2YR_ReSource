// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct VeinholeMonsterClass {
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    unsigned int __pad_010;  // 0x10
    int VeinholeMonsterClass_field_0x14;  // 0x14
    int VeinholeMonsterClass_field_0x18;  // 0x18
    int VeinholeMonsterClass_field_0x1C;  // 0x1C
    int VeinholeMonsterClass_field_0x20;  // 0x20
    int VeinholeMonsterClass_field_0x24;  // 0x24
    int VeinholeMonsterClass_field_0x28;  // 0x28
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    VeinholeMonsterClass * SpreadTiberium(char a2);
    int CheckStatus();
    int StubReturn264();
    int StubReturn63();
    int Update(TechnoTypeClass * aP0, int * a1, int aP2, void *a4);
    int ddtor(int a1, unsigned int * a2);
    void UpdateVeinholeMonster();  // G42.39 supply
};

} // namespace gamemd
