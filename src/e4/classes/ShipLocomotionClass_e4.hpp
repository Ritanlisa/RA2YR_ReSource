// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ILocomotion;  // fix_fwd_type_supply

struct ShipLocomotionClass {
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
    char Dest[12];  // 0x34
    char HeadToCoord[12];  // 0x40
    int SpeedAccum;  // 0x4C
    double MovementSpeed;  // 0x50
    int TrackNumber;  // 0x58
    int TrackIndex;  // 0x5C
    bool IsOnShortTrack;  // 0x60
    unsigned char IsTurretLockedDown;  // 0x61
    bool IsRotating;  // 0x62
    bool IsDriving;  // 0x63
    bool IsRocking;  // 0x64
    bool UnLocked;  // 0x65
    ILocomotion * ptr_68;  // 0x68
// --- flat members (END) ---
    HRESULT BeginMove(int * a1, int * pStm);
    HRESULT LoadFromStream(int * a1, int * pPStm, int a3);
    ShipLocomotionClass * ProcessMove(ILocomotion ** Block, char a2);
    int StubReturn112();
    int ddtor(int a1, unsigned int * a2);
    int Owner;  // 0x8 (ml)
    int Piggybackee;  // 0x68 (ml)
};

} // namespace gamemd
