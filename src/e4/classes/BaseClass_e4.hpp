// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct HouseClass;  // fix_fwd_type_supply

#ifndef GAMEMD_G2_BaseClass_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_BaseClass_DEF 1
struct BaseClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* baseNodeCount;  // 0x4 [X30:type_map]
    int baseNodeCapacity;  // 0x8 [X30:type_map]
    char percentBuilt[4];  // 0xC
    bool IsAllocated;  // 0xD
    CellStruct* cells24;  // 0x10
    int cells24Count;  // 0x14 [X30:type_map]
    int Count;  // 0x16
    char cells24Capacity[4];  // 0x18
    CellStruct* cells38;  // 0x1C
    void* cells38Count;  // 0x20 [X30:type_map]
    char cells38Capacity[4];  // 0x24
    char center[4];  // 0x28
    unsigned char unknown54;  // 0x2C
    VectorClass * ptr_38;  // 0x38
    HouseClass* owner;  // 0x4C
// --- flat members (END) ---
    int LoadArrayFields(unsigned int * a1, int a2);
    int LoadBaseNodeClass(VectorClass_flat * aP0, int a2);
    unsigned int m_8;  // pad compile-supply (G41.47)
    unsigned int m_10;  // pad compile-supply (G41.47)
    unsigned char m_1[64];  // pad compile-supply (G41.47)
};
#endif  // GAMEMD_G2_BaseClass_DEF

} // namespace gamemd
