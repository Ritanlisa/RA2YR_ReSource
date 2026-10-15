// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ILocomotion;  // fix_fwd_type_supply

struct DriveLocomotionClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    unsigned int Powered;  // 0x10
    bool Dirty;  // 0x11
    int RefCount;  // 0x14
    void* vtable3;  // 0x18
    int CurrentRamp;  // 0x1C
    int PreviousRamp;  // 0x20
    char SlopeTimer[16];  // 0x24
    int Dest;  // 0x34 [X30:type_map]
    char HeadToCoord[12];  // 0x40
    int SpeedAccum;  // 0x4C
    double MovementSpeed;  // 0x50
    int TrackNumber;  // 0x58
    int TrackIndex;  // 0x5C
    unsigned char IsTurretLockedDown;  // 0x61
    bool IsRotating;  // 0x62
    bool IsDriving;  // 0x63
    bool IsRocking;  // 0x64
    bool UnLocked;  // 0x65
    ILocomotion * ptr_68;  // 0x68
// --- flat members (END) ---
    DriveLocomotionClass * ProcessMove(ILocomotion ** Block, char a2);
    HRESULT BeginMove(int * a1, int * pStm);
    HRESULT LoadFromStream(int * a1, int * pPStm, int a3);
    int StubReturn112();
    int ddtor(int a1, unsigned int * a2);
    ILocomotion* Piggybackee;  // 0x68 (ml) [X30:type_map]
    void* __pad_008;  // 0x8 [X30:type_map]
    int __pad_060;  // 0x60 [X30:type_map]
    unsigned char __pad_066;  // 0x66 [X30:canon]
};

} // namespace gamemd
