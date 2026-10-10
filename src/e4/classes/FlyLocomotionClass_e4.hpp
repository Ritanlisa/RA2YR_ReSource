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
    unsigned char Dirty;  // 0x11
    unsigned int RefCount;  // 0x14
    bool AirportBound;  // 0x18
    char MovingDestination[12];  // 0x1C
    char XYZ2[12];  // 0x28
    ObjectClass * ptr_30;  // 0x30
    bool HasMoveOrder;  // 0x34
    TechnoClass * ptr_24;  // 0x36
    char FlightLevel[4];  // 0x38
    double TargetSpeed;  // 0x3C
    double CurrentSpeed;  // 0x44
    char IsTakingOff[1];  // 0x4C
    bool IsLanding;  // 0x4D
    bool WasLanding;  // 0x4E
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
    int LocomotionClass();  // plateau: def-aligned C2039/C2660
};

} // namespace gamemd
