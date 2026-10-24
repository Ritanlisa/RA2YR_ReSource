// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct FlyLocomotionClass {
#pragma pack(push, 1)  // X60: binary-packed layout
    void * ptr_0;  // 0x0
    void * ptr_4;  // 0x4
    void * Owner;  // 0x8
    unsigned int LinkedTo;  // 0xC
    unsigned char __pad_010;  // 0x10
    unsigned char Dirty;  // 0x11
    unsigned char __pad_012;  // 0x12
    char __pad_13[1];  // 0x13
    unsigned int RefCount;  // 0x14
    bool AirportBound;  // 0x18
    unsigned char __pad_019;  // 0x19
    char __pad_1A[2];  // 0x1A
    char MovingDestination[12];  // 0x1C
    char XYZ2[12];  // 0x28
    bool HasMoveOrder;  // 0x34
    unsigned char __pad_035;  // 0x35
    unsigned char ptr_24;  // 0x36
    char __pad_37[1];  // 0x37
    int FlightLevel;  // 0x38
    double TargetSpeed;  // 0x3C
    double CurrentSpeed;  // 0x44
    char IsTakingOff[1];  // 0x4C
    bool IsLanding;  // 0x4D
    bool WasLanding;  // 0x4E
    unsigned char __pad_04F;  // 0x4F
    char __pad_50[1];  // 0x50
    unsigned char u8_51;  // 0x51
    unsigned char u8_52;  // 0x52
    bool FlyLocomotionClass_field_bool_53;  // 0x53
    unsigned int FlyLocomotionClass_field_54;  // 0x54
    unsigned int FlyLocomotionClass_field_58;  // 0x58
    bool IsElevating;  // 0x5C
    bool FlyLocomotionClass_field_bool_5D;  // 0x5D
    bool FlyLocomotionClass_field_bool_5E;  // 0x5E
    bool FlyLocomotionClass_field_bool_5F;  // 0x5F
    char __pad_60[12];  // 0x60
    unsigned int u32_6C;  // 0x6C
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    FlyLocomotionClass * ProcessMove(char a2);
    int BeginMove(int * a1, int * a2);
    int StubReturn96();
    int ddtor(int a1, unsigned int * a2);
    void ILocomotion_AcquireHunterSeekerTarget(int a1);
    int LocomotionClass();  // plateau: def-aligned C2039/C2660
#pragma pack(pop)
};

} // namespace gamemd
