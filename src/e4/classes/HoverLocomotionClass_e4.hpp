// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ILocomotion;  // fix_fwd_type_supply

struct HoverLocomotionClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* Owner;  // 0x8 [X30:type_map]
    int LinkedTo;  // 0xC
    unsigned int Powered;  // 0x10
    bool Dirty;  // 0x11
    int RefCount;  // 0x14
    int Dest;  // 0x18 [X30:type_map]
    int HeadToCoord;  // 0x24 [X30:type_map]
    int LocomotionFacing;  // 0x30 [X30:type_map]
    ILocomotion * ptr_20;  // 0x32
    double MaxSpeed;  // 0x48
    double CurrentSpeed;  // 0x50
    CellClass * ptr_34;  // 0x52
    double BoostSpeed;  // 0x58
    double CurrentWobbles;  // 0x60
    bool HoverLocomotionClass_field_bool_68;  // 0x68
    int HoverLocomotionClass_field_6C;  // 0x6C [X30:type_map]
    bool HoverLocomotionClass_field_bool_70;  // 0x70
// --- flat members (END) ---
    HoverLocomotionClass * ProcessMove(unsigned int * Block, char a2);
    int BeginMove(int a1, int * a2);
    int StubReturn120();
    int ddtor(int a1, unsigned int * a2);
    unsigned char __pad_069;  // 0x69 [X30:canon]
    unsigned char __pad_071;  // 0x71 [X30:canon]
};

} // namespace gamemd
