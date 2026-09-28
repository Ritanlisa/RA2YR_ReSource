// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct RocketLocomotionClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned int LinkedTo;  // 0xC
    unsigned char Powered;  // 0x10
    unsigned char Dirty;  // 0x11
    unsigned int RefCount;  // 0x14
    char MovingDestination[12];  // 0x18
    unsigned int q01A;  // 0x1A
    unsigned int u32_1C;  // 0x1C
    bool q01D;  // 0x1D
    ILocomotion * q020;  // 0x20
    char MissionTimer[16];  // 0x24
    unsigned int q028;  // 0x28
    bool q02B;  // 0x2B
    unsigned int u32_2C;  // 0x2C
    ObjectClass * ptr_30;  // 0x30
    unsigned char q031;  // 0x31
    ILocomotion * ptr_20;  // 0x32
    unsigned int q033;  // 0x33
    char TrailerTimer[12];  // 0x34
    unsigned int q038;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    unsigned int u32_3C;  // 0x3C
    unsigned int q03D;  // 0x3D
    char MissionState[4];  // 0x40
    bool q042;  // 0x42
    unsigned int RocketLocomotionClass_field_44;  // 0x44
    double CurrentSpeed;  // 0x48
    bool q04A;  // 0x4A
    unsigned int u32_4C;  // 0x4C
    unsigned char q04F;  // 0x4F
    bool RocketLocomotionClass_field_bool_4C;  // 0x50
    bool SpawnerIsElite;  // 0x51
    float CurrentPitch;  // 0x54
    unsigned int RocketLocomotionClass_field_58;  // 0x58
    unsigned int RocketLocomotionClass_field_5C;  // 0x5C
// --- flat members (END) ---
    RocketLocomotionClass();
    RocketLocomotionClass * ProcessMove(char a2);
    int BeginMove(int * a1, int * a2);
    int StubReturn96();
    int ddtor(int a1, unsigned int * a2);
};

} // namespace gamemd
