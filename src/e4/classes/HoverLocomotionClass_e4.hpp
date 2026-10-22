// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ILocomotion;  // fix_fwd_type_supply

struct HoverLocomotionClass {
    void * ptr_0;  // 0x0
    void * ptr_4;  // 0x4
    void * Owner;  // 0x8
    int LinkedTo;  // 0xC
    char Powered[1];  // 0x10
    bool Dirty;  // 0x11
    char __pad_12[2];  // 0x12
    int RefCount;  // 0x14
    int Dest[3];  // 0x18
    int HeadToCoord[3];  // 0x24
    int LocomotionFacing[6];  // 0x30
    double MaxSpeed;  // 0x48
    double CurrentSpeed;  // 0x50
    double BoostSpeed;  // 0x58
    double CurrentWobbles;  // 0x60
    bool HoverLocomotionClass_field_bool_68;  // 0x68
    unsigned char __pad_069;  // 0x69
    char __pad_6A[2];  // 0x6A
    int HoverLocomotionClass_field_6C;  // 0x6C
    bool HoverLocomotionClass_field_bool_70;  // 0x70
    char __pad_071[3];  // 0x71
    unsigned char u8_74;  // 0x74
    char __pad_75[1551];  // 0x75
    unsigned char u8_684;  // 0x684
    char __pad_685[3];  // 0x685
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    HoverLocomotionClass * ProcessMove(unsigned int * Block, char a2);
    int BeginMove(int a1, int * a2);
    int StubReturn120();
    int ddtor(int a1, unsigned int * a2);
};

} // namespace gamemd
