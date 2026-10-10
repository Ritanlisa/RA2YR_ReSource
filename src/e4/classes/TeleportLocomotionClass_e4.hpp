// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
// G57w18j4: flat members rebuilt to live til (IDA 2026-10-06, TeleportLocomotionClass size=76);
// LocomotionClass base sub-object declared char[24] per body vocabulary (H4 recipe);
// Piggybackee 4B COM interface ptr (til int).
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ILocomotion;  // fix_fwd_type_supply

struct TeleportLocomotionClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    unsigned int LinkedTo;  // 0xC
    unsigned char Dirty;  // 0x11
    unsigned int RefCount;  // 0x14
    void* vtable3;  // 0x18
    char MovingDestination[12];  // 0x1C
    char LastCoords[12];  // 0x28
    ObjectClass * ptr_30;  // 0x30
    ILocomotion * ptr_20;  // 0x32
    bool Moving;  // 0x34
    bool TeleportLocomotionClass_field_bool_35;  // 0x35
    bool TeleportLocomotionClass_field_bool_36;  // 0x36
    char State[4];  // 0x38
    char Timer[12];  // 0x3C
    ILocomotion* Piggybackee;  // 0x48
// --- flat members (END) ---
    char LocomotionClass[24];  // 0x0 LocomotionClass base sub-object (live til)
    TeleportLocomotionClass();  // 0x718000 sig=csp
    unsigned int q018;  // 0x18 (offset-truth)
    static double __pad_18(...);  // plateau: C2039/C3861 stub
};

} // namespace gamemd
