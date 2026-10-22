// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ILocomotion;  // fix_fwd_type_supply

struct RocketLocomotionClass {
    void * LocomotionClass;  // 0x0
    void * ptr_4;  // 0x4
    unsigned int __pad_008;  // 0x8
    unsigned int LinkedTo;  // 0xC
    unsigned char Powered;  // 0x10
    unsigned char Dirty;  // 0x11
    unsigned char __pad_012;  // 0x12
    char __pad_13[1];  // 0x13
    unsigned int RefCount;  // 0x14
    char MovingDestination[12];  // 0x18
    char MissionTimer[16];  // 0x24
    char TrailerTimer[12];  // 0x34
    int MissionState;  // 0x40
    unsigned int RocketLocomotionClass_field_44;  // 0x44
    double CurrentSpeed;  // 0x48
    bool u32_4C;  // 0x50
    bool SpawnerIsElite;  // 0x51
    unsigned char __pad_052;  // 0x52
    char __pad_53[1];  // 0x53
    float CurrentPitch;  // 0x54
    unsigned int RocketLocomotionClass_field_58;  // 0x58
    unsigned int RocketLocomotionClass_field_5C;  // 0x5C
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    RocketLocomotionClass();
    RocketLocomotionClass * ProcessMove(char a2, int a3);
    int BeginMove(int * a1, int * a2);
    int StubReturn96();
    int ddtor(int a1, unsigned int * a2);
};

} // namespace gamemd
