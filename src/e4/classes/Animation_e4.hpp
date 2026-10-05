// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct BuildingClass;  // fix_fwd_type_supply

struct Animation {
// --- flat members (BEGIN) ---
    void* q008;  // 0x8
    void* q010;  // 0x10
    void* q014;  // 0x14
    void* q018;  // 0x18
    void* q024;  // 0x24
    unsigned int u32_30;  // 0x30
    void* q034;  // 0x34
    unsigned int q048;  // 0x48
    void* q050;  // 0x50
    void* q054;  // 0x54
    unsigned int u32_D8;  // 0xD8
    unsigned int u32_F4;  // 0xF4
    unsigned int u32_F8;  // 0xF8
    unsigned int u32_110;  // 0x110
    unsigned int q114;  // 0x114
    unsigned int u32_118;  // 0x118
    unsigned int u32_1A0;  // 0x1A0
    unsigned int u32_2BC;  // 0x2BC
    unsigned int q020;
    unsigned int *__pad_0;
// --- flat members (END) ---
    BuildingClass * * UpdateBuildingAnimations();
    ObjectClass * * LoadSidebarAnimations(unsigned int * a1, ObjectClass * aP2);
    int GetProgress();
    long long UpdateBobOffset();
};

} // namespace gamemd
