// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct HouseClass;  // fix_fwd_type_supply

#ifndef GAMEMD_G2_BaseClass_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_BaseClass_DEF 1
struct BaseClass {
    void * ptr_0;  // 0x0
    int baseNodeCount;  // 0x4
    int baseNodeCapacity;  // 0x8
    char percentBuilt[4];  // 0xC
    CellStruct * cells24;  // 0x10
    int cells24Count;  // 0x14
    int cells24Capacity;  // 0x18
    CellStruct * cells38;  // 0x1C
    int cells38Count;  // 0x20
    int cells38Capacity;  // 0x24
    char center[4];  // 0x28
    int unknown54[8];  // 0x2C
    HouseClass * owner;  // 0x4C
    unsigned short u16_50;  // 0x50
    unsigned short u16_52;  // 0x52
    unsigned int u32_54;  // 0x54
    unsigned int u32_58;  // 0x58
    unsigned int u32_5C;  // 0x5C
    unsigned int u32_60;  // 0x60
    unsigned int u32_64;  // 0x64
    unsigned int u32_68;  // 0x68
    unsigned int u32_6C;  // 0x6C
    unsigned int u32_70;  // 0x70
    unsigned int u32_74;  // 0x74
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int LoadArrayFields(unsigned int * a1, int a2);
    int LoadBaseNodeClass(VectorClass_flat * aP0, int a2);
};
#endif  // GAMEMD_G2_BaseClass_DEF

} // namespace gamemd
