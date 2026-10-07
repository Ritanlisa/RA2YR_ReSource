// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ILocomotion;  // fix_fwd_type_supply

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
    unsigned int u32_1C;  // 0x1C
    ILocomotion * q020;  // 0x20
    char MissionTimer[16];  // 0x24
    unsigned int q028;  // 0x28
    bool q02B;  // 0x2B
    unsigned int u32_2C;  // 0x2C
    unsigned char q031;  // 0x31
    char TrailerTimer[12];  // 0x34
    unsigned int q038;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int u32_3C;  // 0x3C
    int MissionState;  // 0x40
    double CurrentSpeed;  // 0x48
    unsigned int u32_4C;  // 0x4C
    bool RocketLocomotionClass_field_bool_4C;  // 0x50
    bool SpawnerIsElite;  // 0x51
    float CurrentPitch;  // 0x54
    unsigned int RocketLocomotionClass_field_58;  // 0x58
    void* LocomotionClass;  // 0x0 (no offset truth)
// --- flat members (END) ---
    RocketLocomotionClass();
    RocketLocomotionClass * ProcessMove(char a2, int a3);
    int BeginMove(int * a1, int * a2);
    int StubReturn96();
    int ddtor(int a1, unsigned int * a2);
};

} // namespace gamemd
