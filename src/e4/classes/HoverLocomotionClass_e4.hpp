// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct AbstractClass;  // fix_fwd_type_supply
struct ILocomotion;  // fix_fwd_type_supply

struct HoverLocomotionClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    unsigned char q008;  // 0x8
    AbstractClass* q00C;  // 0xC
    unsigned int q010;  // 0x10
    bool Dirty;  // 0x11
    char Dest[12];  // 0x18
    unsigned int q01A;  // 0x1A
    bool q01D;  // 0x1D
    ILocomotion * q020;  // 0x20
    char HeadToCoord[12];  // 0x24
    unsigned int q028;  // 0x28
    bool q02B;  // 0x2B
    unsigned int u32_2C;  // 0x2C
    char LocomotionFacing[24];  // 0x30
    unsigned char q031;  // 0x31
    ILocomotion * ptr_20;  // 0x32
    unsigned int q033;  // 0x33
    unsigned char q034;  // 0x34
    unsigned int q038;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    unsigned int q03D;  // 0x3D
    bool q042;  // 0x42
    unsigned int q044;  // 0x44
    double MaxSpeed;  // 0x48
    bool q04A;  // 0x4A
    unsigned int u32_4C;  // 0x4C
    unsigned char q04F;  // 0x4F
    double CurrentSpeed;  // 0x50
    ILocomotion * q054;  // 0x54
    double BoostSpeed;  // 0x58
    unsigned int u32_5C;  // 0x5C
    double CurrentWobbles;  // 0x60
    unsigned char q064;  // 0x64
    bool HoverLocomotionClass_field_bool_68;  // 0x68
    unsigned char q069;  // 0x69
    char HoverLocomotionClass_field_6C[4];  // 0x6C
    bool HoverLocomotionClass_field_bool_70;  // 0x70
    unsigned char q071;  // 0x71
    unsigned int LocomotionClass;
// --- flat members (END) ---
    HoverLocomotionClass * ProcessMove(unsigned int * Block, char a2);
    int BeginMove(int a1, int * a2);
    int StubReturn120();
    int ddtor(int a1, unsigned int * a2);
};

} // namespace gamemd
