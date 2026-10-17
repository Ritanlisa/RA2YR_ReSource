// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
// G57w18j4: flat members rebuilt to live til (IDA 2026-10-06, TeleportLocomotionClass size=76);
// LocomotionClass base sub-object declared char[24] per body vocabulary (H4 recipe);
// Piggybackee 4B COM interface ptr (til int).
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ILocomotion;  // fix_fwd_type_supply

struct TeleportLocomotionClass {
    char LocomotionClass[8];  // 0x0
    unsigned int __pad_008;  // 0x8
    unsigned int LinkedTo;  // 0xC
    unsigned char __pad_010;  // 0x10
    unsigned char Dirty;  // 0x11
    unsigned char __pad_012;  // 0x12
    char __pad_13[1];  // 0x13
    unsigned int RefCount;  // 0x14
    void* vtable3;  // 0x18
    char MovingDestination[12];  // 0x1C
    char LastCoords[12];  // 0x28
    bool Moving;  // 0x34
    bool TeleportLocomotionClass_field_bool_35;  // 0x35
    bool TeleportLocomotionClass_field_bool_36;  // 0x36
    bool __pad_037;  // 0x37
    int State;  // 0x38
    char Timer[12];  // 0x3C
    ILocomotion* Piggybackee;  // 0x48
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    TeleportLocomotionClass();  // 0x718000 sig=csp
};

} // namespace gamemd
