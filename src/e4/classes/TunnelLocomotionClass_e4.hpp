// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ILocomotion;  // fix_fwd_type_supply
struct State;  // fix_fwd_type_supply

struct TunnelLocomotionClass {
    void * ptr_0;  // 0x0
    void * ptr_4;  // 0x4
    unsigned int Owner;  // 0x8
    unsigned int LinkedTo;  // 0xC
    unsigned char Powered;  // 0x10
    unsigned char Dirty;  // 0x11
    unsigned char __pad_012;  // 0x12
    char __pad_13[1];  // 0x13
    unsigned int RefCount;  // 0x14
    char CurrentState[56];  // 0x18
    char Coords[12];  // 0x50
    char DigTimer[16];  // 0x5C
    bool IsMoving;  // 0x6C
    char tail_6D[3];  // 0x6D
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    TunnelLocomotionClass * ProcessMove(char a2);
    int BeginMove(int * a1, int * a2);
    int StubReturn60();
    int ddtor(int a1, unsigned int * a2);
    void ProcessFormationPosition(unsigned int * a1);
    TunnelLocomotionClass * ProcessMove(unsigned int * Block, char a2);
};

} // namespace gamemd
