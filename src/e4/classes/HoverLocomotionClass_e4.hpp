// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ILocomotion;  // fix_fwd_type_supply

struct HoverLocomotionClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    int Owner;  // 0x8
    int LinkedTo;  // 0xC
    unsigned int Powered;  // 0x10
    bool Dirty;  // 0x11
    int RefCount;  // 0x14
    char Dest[12];  // 0x18
    char HeadToCoord[12];  // 0x24
    char LocomotionFacing[24];  // 0x30
    ILocomotion * ptr_20;  // 0x32
    double MaxSpeed;  // 0x48
    double CurrentSpeed;  // 0x50
    CellClass * ptr_34;  // 0x52
    double BoostSpeed;  // 0x58
    double CurrentWobbles;  // 0x60
    bool HoverLocomotionClass_field_bool_68;  // 0x68
    char HoverLocomotionClass_field_6C[4];  // 0x6C
    bool HoverLocomotionClass_field_bool_70;  // 0x70
// --- flat members (END) ---
    HoverLocomotionClass * ProcessMove(unsigned int * Block, char a2);
    int BeginMove(int a1, int * a2);
    int StubReturn120();
    int ddtor(int a1, unsigned int * a2);
};

} // namespace gamemd
