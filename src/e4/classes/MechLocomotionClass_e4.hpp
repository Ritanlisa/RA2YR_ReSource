// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ILocomotion;  // fix_fwd_type_supply

struct MechLocomotionClass {
    void* ptr_0;  // 0x0
    void* ptr_4;  // 0x4
    unsigned int Owner;  // 0x8
    unsigned int LinkedTo;  // 0xC
    unsigned char Powered;  // 0x10
    unsigned char Dirty;  // 0x11
    unsigned char __pad_012;  // 0x12
    char __pad_13[1];  // 0x13
    unsigned int RefCount;  // 0x14
    char MovingDestination[12];  // 0x18
    char HeadToCoord[12];  // 0x24
    bool IsMoving;  // 0x30
    char tail_31[3];  // 0x31
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    MechLocomotionClass * ProcessMove(unsigned int * Block, char a2);
    int BeginMove(int * a1, int * a2);
    int StubReturn52();
    int ddtor(int a1, unsigned int * a2);
};

} // namespace gamemd
