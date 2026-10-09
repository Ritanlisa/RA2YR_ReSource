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
    unsigned int u32_8;  // 0x8
    unsigned int LinkedTo;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned char Dirty;  // 0x11
    unsigned int RefCount;  // 0x14
    void* vtable3;  // 0x18
    char MovingDestination[12];  // 0x1C
    bool q01D;  // 0x1D
    ILocomotion * q020;  // 0x20
    unsigned int u32_24;  // 0x24
    char LastCoords[12];  // 0x28
    bool q02B;  // 0x2B
    unsigned int u32_2C;  // 0x2C
    ObjectClass * ptr_30;  // 0x30
    unsigned char q031;  // 0x31
    ILocomotion * ptr_20;  // 0x32
    unsigned int q033;  // 0x33
    bool Moving;  // 0x34
    bool TeleportLocomotionClass_field_bool_35;  // 0x35
    bool TeleportLocomotionClass_field_bool_36;  // 0x36
    bool q037;  // 0x37
    char State[4];  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    char Timer[12];  // 0x3C
    unsigned int q03D;  // 0x3D
    char q040[4];  // 0x40
    bool q042;  // 0x42
    unsigned int q044;  // 0x44
    ILocomotion* Piggybackee;  // 0x48
    bool q04A;  // 0x4A
// --- flat members (END) ---
    char LocomotionClass[24];  // 0x0 LocomotionClass base sub-object (live til)
    char Moving;  // 0x34 (til char[1]; scalar per body mov [esi+34h],al - H3 C3863 recipe)
    TeleportLocomotionClass();  // 0x718000 sig=csp
};

} // namespace gamemd
