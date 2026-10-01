// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ILocomotion;  // fix_fwd_type_supply

struct ShipLocomotionClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned char q00C;  // 0xC
    bool Dirty;  // 0x11
    void* vtable3;  // 0x18
    int CurrentRamp;  // 0x1C
    bool q01D;  // 0x1D
    int PreviousRamp;  // 0x20
    char SlopeTimer[16];  // 0x24
    unsigned int q028;  // 0x28
    bool q02B;  // 0x2B
    ILocomotion* q02C;  // 0x2C
    ILocomotion* q030;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int q033;  // 0x33
    char Dest[12];  // 0x34
    bool q037;  // 0x37
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    void* q03C;  // 0x3C
    unsigned int q03D;  // 0x3D
    char HeadToCoord[12];  // 0x40
    bool q042;  // 0x42
    ILocomotion* q044;  // 0x44
    ILocomotion* q048;  // 0x48
    bool q04A;  // 0x4A
    int SpeedAccum;  // 0x4C
    unsigned char q04F;  // 0x4F
    double MovementSpeed;  // 0x50
    ILocomotion* q054;  // 0x54
    int TrackNumber;  // 0x58
    int TrackIndex;  // 0x5C
    bool IsOnShortTrack;  // 0x60
    unsigned char IsTurretLockedDown;  // 0x61
    bool IsRotating;  // 0x62
    bool IsDriving;  // 0x63
    bool IsRocking;  // 0x64
    bool UnLocked;  // 0x65
    ILocomotion * ptr_68;  // 0x68
    unsigned int LocomotionClass;
    unsigned int Piggybackee;
    unsigned int *__pad_18;
    unsigned int BeginMove;
    unsigned int LoadFromStream;
// --- flat members (END) ---
    HRESULTBeginMove(int * a1, int * pStm);
    HRESULTLoadFromStream(int * a1, int * pPStm, int a3);
    ShipLocomotionClass * ProcessMove(ILocomotion ** Block, char a2);
    int StubReturn112();
    int ddtor(int a1, unsigned int * a2);
};

} // namespace gamemd
