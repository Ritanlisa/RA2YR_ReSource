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
    char LocomotionClass[24];  // 0x0 LocomotionClass base sub-object (live til)
    char __pad_18[4];  // 0x18
    int MovingDestination[3];  // 0x1C
    int LastCoords[3];  // 0x28
    char Moving;  // 0x34 (til char[1]; scalar per body mov [esi+34h],al - H3 C3863 recipe)
    char TeleportLocomotionClass_field_bool_35;  // 0x35
    char TeleportLocomotionClass_field_bool_36;  // 0x36
    char __pad_37[1];  // 0x37
    unsigned int State;  // 0x38
    int Timer[3];  // 0x3C
    ILocomotion * Piggybackee;  // 0x48
// --- flat members (END) ---
    TeleportLocomotionClass();  // 0x718000 sig=csp
};

} // namespace gamemd
