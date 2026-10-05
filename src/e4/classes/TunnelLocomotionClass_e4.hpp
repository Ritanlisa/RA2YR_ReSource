// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ILocomotion;  // fix_fwd_type_supply
struct State;  // fix_fwd_type_supply

struct TunnelLocomotionClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    unsigned int Owner;  // 0x8
    unsigned int LinkedTo;  // 0xC
    unsigned char Powered;  // 0x10
    unsigned char Dirty;  // 0x11
    unsigned int RefCount;  // 0x14
    char CurrentState[56];  // 0x18
    ILocomotion * q020;  // 0x20
    TechnoClass * q024;  // 0x24
    void* q028;  // 0x28
    bool q02B;  // 0x2B
    State* q030;  // 0x30
    unsigned char q031;  // 0x31
    State* q034;  // 0x34
    unsigned int q038;  // 0x38
    unsigned char q03A;  // 0x3A
    void* q040;  // 0x40
    unsigned int q044;  // 0x44
    State* q048;  // 0x48
    char Coords[12];  // 0x50
    ILocomotion * q054;  // 0x54
    unsigned int q058;  // 0x58
    unsigned char q060;  // 0x60
    unsigned char q064;  // 0x64
    unsigned int q068;  // 0x68
    bool IsMoving;  // 0x6C
    unsigned int LocomotionClass;
// --- flat members (END) ---
    TunnelLocomotionClass * ProcessMove(char a2);
    int BeginMove(int * a1, int * a2);
    int StubReturn60();
    int ddtor(int a1, unsigned int * a2);
    void ProcessFormationPosition(unsigned int * a1);
    TunnelLocomotionClass * ProcessMove(unsigned int * Block, char a2);
};

} // namespace gamemd
