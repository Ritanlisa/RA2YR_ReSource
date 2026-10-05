// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ILocomotion;  // fix_fwd_type_supply

struct TeleportLocomotionClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned int LinkedTo;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned char Dirty;  // 0x11
    unsigned int RefCount;  // 0x14
    void* vtable3;  // 0x18
    unsigned char __pad_18[121];  // 0x18
    char MovingDestination[12];  // 0x1C
    ILocomotion * q020;  // 0x20
    unsigned int u32_24;  // 0x24
    char LastCoords[12];  // 0x28
    bool q02B;  // 0x2B
    unsigned int u32_2C;  // 0x2C
    unsigned char q031;  // 0x31
    bool Moving;  // 0x34
    bool TeleportLocomotionClass_field_bool_35;  // 0x35
    bool TeleportLocomotionClass_field_bool_36;  // 0x36
    unsigned int State;  // 0x38
    unsigned char q03A;  // 0x3A
    char Timer[12];  // 0x3C
    char q040[4];  // 0x40
    unsigned int q044;  // 0x44
    ILocomotion* Piggybackee;  // 0x48
// --- flat members (END) ---
TeleportLocomotionClass();
};

} // namespace gamemd
