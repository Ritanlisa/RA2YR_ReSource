// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct HouseClass;  // fix_fwd_type_supply

struct BaseClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    char baseNodeCount[4];  // 0x4
    char baseNodeCapacity[4];  // 0x8
    char percentBuilt[4];  // 0xC
    bool IsAllocated;  // 0xD
    void* cells24;  // 0x10
    char cells24Count[4];  // 0x14
    int Count;  // 0x16
    char cells24Capacity[4];  // 0x18
    void* cells38;  // 0x1C
    char cells38Count[4];  // 0x20
    char cells38Capacity[4];  // 0x24
    char center[4];  // 0x28
    unsigned char unknown54;  // 0x2C
    unsigned int q030;  // 0x30
    unsigned int q034;  // 0x34
    void * ptr_38;  // 0x38
    unsigned int q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned int q048;  // 0x48
    HouseClass* owner;  // 0x4C
// --- flat members (END) ---
    int LoadArrayFields(unsigned int * a1, int a2);
    int LoadBaseNodeClass(VectorClass_flat * aP0, int a2);
    unsigned int u32_74;  // 0x74
    unsigned int u32_6C;  // 0x6C
    unsigned int u32_68;  // 0x68
    unsigned int u32_64;  // 0x64
    unsigned int u32_5C;  // 0x5C
    unsigned int u32_54;  // 0x54
    unsigned int u32_52;  // 0x52
};

} // namespace gamemd
