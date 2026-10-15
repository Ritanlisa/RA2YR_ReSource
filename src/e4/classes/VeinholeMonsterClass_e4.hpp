// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct VeinholeMonsterClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    bool IsAllocated;  // 0x13
// --- flat members (END) ---
    VeinholeMonsterClass * SpreadTiberium(char a2);
    int CheckStatus();
    int StubReturn264();
    int StubReturn63();
    int Update(TechnoTypeClass * aP0, int * a1, int aP2, void *a4);
    int ddtor(int a1, unsigned int * a2);
    void UpdateVeinholeMonster();  // G42.39 supply
void* q000;  // 0x0 [X35-L7 kind=void*]

    unsigned int u32_104;  // X10 supply (member_lookup)
    unsigned int u32_AC;  // X10 supply (member_lookup)
    unsigned int u32_B4;  // X10 supply (member_lookup)
    unsigned int u32_C4;  // X10 supply (member_lookup)
    unsigned char __pad_010;  // 0x10 [X30:canon]
    unsigned char __pad_017;  // 0x17 [X30:canon]
};

} // namespace gamemd
