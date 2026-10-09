// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct FlyLocomotionClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* Owner;  // 0x8
    unsigned int LinkedTo;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned char Dirty;  // 0x11
    unsigned int RefCount;  // 0x14
    bool AirportBound;  // 0x18
    unsigned int q01A;  // 0x1A
    char MovingDestination[12];  // 0x1C
    bool q01D;  // 0x1D
    unsigned int u32_20;  // 0x20
    TechnoClass * q024;  // 0x24
    char XYZ2[12];  // 0x28
    bool q02B;  // 0x2B
    unsigned int u32_2C;  // 0x2C
    ObjectClass * ptr_30;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int q033;  // 0x33
    bool HasMoveOrder;  // 0x34
    TechnoClass * ptr_24;  // 0x36
    char FlightLevel[4];  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    double TargetSpeed;  // 0x3C
    unsigned int q03D;  // 0x3D
    char q040[4];  // 0x40
    bool q042;  // 0x42
    double CurrentSpeed;  // 0x44
    ObjectClass * q048;  // 0x48
    bool q04A;  // 0x4A
    char IsTakingOff[1];  // 0x4C
    bool IsLanding;  // 0x4D
    bool WasLanding;  // 0x4E
    unsigned char q04F;  // 0x4F
    unsigned int q050;  // 0x50
    unsigned char u8_51;  // 0x51
    unsigned char u8_52;  // 0x52
    bool FlyLocomotionClass_field_bool_53;  // 0x53
    unsigned int FlyLocomotionClass_field_54;  // 0x54
    unsigned int FlyLocomotionClass_field_58;  // 0x58
    bool IsElevating;  // 0x5C
    bool FlyLocomotionClass_field_bool_5D;  // 0x5D
    bool FlyLocomotionClass_field_bool_5E;  // 0x5E
    bool FlyLocomotionClass_field_bool_5F;  // 0x5F
// --- flat members (END) ---
    FlyLocomotionClass * ProcessMove(char a2);
    int BeginMove(int * a1, int * a2);
    int StubReturn96();
    int ddtor(int a1, unsigned int * a2);
    void ILocomotion_AcquireHunterSeekerTarget(int a1);
};

} // namespace gamemd
