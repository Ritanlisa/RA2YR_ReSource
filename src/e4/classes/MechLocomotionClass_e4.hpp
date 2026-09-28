// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct MechLocomotionClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    unsigned int Owner;  // 0x8
    unsigned int LinkedTo;  // 0xC
    unsigned char Powered;  // 0x10
    unsigned char Dirty;  // 0x11
    unsigned int RefCount;  // 0x14
    char MovingDestination[12];  // 0x18
    unsigned int q01A;  // 0x1A
    bool q01D;  // 0x1D
    ILocomotion * q020;  // 0x20
    char HeadToCoord[12];  // 0x24
    unsigned int q028;  // 0x28
    bool q02B;  // 0x2B
    bool IsMoving;  // 0x30
    unsigned char tail_31;  // 0x31
    ILocomotion * ptr_20;  // 0x32
    unsigned int q033;  // 0x33
    unsigned int __pad_0;
// --- flat members (END) ---
    MechLocomotionClass * ProcessMove(char a2);
    int BeginMove(int * a1, int * a2);
    int StubReturn52();
    int ddtor(int a1, unsigned int * a2);
};

} // namespace gamemd
