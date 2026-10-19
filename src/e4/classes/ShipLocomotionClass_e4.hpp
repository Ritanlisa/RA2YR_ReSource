// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ILocomotion;  // fix_fwd_type_supply

struct ShipLocomotionClass {
#pragma pack(push, 1)  // X60: binary-packed layout
    void* ptr_0;  // 0x0
    void* ptr_4;  // 0x4
    unsigned int Owner;  // 0x8
    int LinkedTo;  // 0xC
    char Powered[1];  // 0x10
    bool Dirty;  // 0x11
    char __pad_12[2];  // 0x12
    int RefCount;  // 0x14
    void* ptr_8;  // 0x18
    int CurrentRamp;  // 0x1C
    int PreviousRamp;  // 0x20
    char SlopeTimer[16];  // 0x24
    int Dest[3];  // 0x34
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
    unsigned char __pad_066;  // 0x66
    char __pad_67[1];  // 0x67
    ILocomotion* Piggybackee;  // 0x68
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    HRESULT BeginMove(int * a1, int * pStm);
    HRESULT LoadFromStream(int * a1, int * pPStm, int a3);
    ShipLocomotionClass * ProcessMove(ILocomotion ** Block, char a2);
    int StubReturn112();
    int ddtor(int a1, unsigned int * a2);
#pragma pack(pop)
};

} // namespace gamemd
