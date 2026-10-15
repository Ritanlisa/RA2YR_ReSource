// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ILocomotion;  // fix_fwd_type_supply

struct RocketLocomotionClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    unsigned int LinkedTo;  // 0xC
    unsigned char Powered;  // 0x10
    unsigned char Dirty;  // 0x11
    unsigned int RefCount;  // 0x14
    char MovingDestination[12];  // 0x18
    char MissionTimer[16];  // 0x24
    ObjectClass * ptr_30;  // 0x30
    ILocomotion * ptr_20;  // 0x32
    char TrailerTimer[12];  // 0x34
    int MissionState;  // 0x40 [X30:type_map]
    unsigned int RocketLocomotionClass_field_44;  // 0x44
    double CurrentSpeed;  // 0x48
    bool RocketLocomotionClass_field_bool_4C;  // 0x50
    bool SpawnerIsElite;  // 0x51
    float CurrentPitch;  // 0x54
    unsigned int RocketLocomotionClass_field_58;  // 0x58
    unsigned int RocketLocomotionClass_field_5C;  // 0x5C
// --- flat members (END) ---
    void* LocomotionClass;  // 0x0 (no offset truth)
    RocketLocomotionClass();
    RocketLocomotionClass * ProcessMove(char a2, int a3);
    int BeginMove(int * a1, int * a2);
    int StubReturn96();
    int ddtor(int a1, unsigned int * a2);
unsigned int __pad_008;  // 0x8 [X35-L7 kind=unsigned int]
    unsigned char __pad_012;  // 0x12 [X30:canon]
    unsigned char __pad_052;  // 0x52 [X30:canon]
};

} // namespace gamemd
