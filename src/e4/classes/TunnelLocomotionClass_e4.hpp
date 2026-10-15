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
    ILocomotion * ptr_20;  // 0x32
    TechnoClass * ptr_24;  // 0x36
    char Coords[12];  // 0x50
    char DigTimer[16];  // 0x5C
    bool IsMoving;  // 0x6C
    unsigned char tail_6D;  // 0x6D
// --- flat members (END) ---
    TunnelLocomotionClass * ProcessMove(char a2);
    int BeginMove(int * a1, int * a2);
    int StubReturn60();
    int ddtor(int a1, unsigned int * a2);
    void ProcessFormationPosition(unsigned int * a1);
    TunnelLocomotionClass * ProcessMove(unsigned int * Block, char a2);
    unsigned char __pad_012;  // 0x12 [X30:canon]
};

} // namespace gamemd
