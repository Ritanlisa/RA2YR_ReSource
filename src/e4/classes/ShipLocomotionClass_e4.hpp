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
    int PreviousRamp;  // 0x20
    char SlopeTimer[16];  // 0x24
    unsigned int q028;  // 0x28
    bool q02B;  // 0x2B
    ILocomotion* q02C;  // 0x2C
    ILocomotion* q030;  // 0x30
    unsigned char q031;  // 0x31
    char Dest[12];  // 0x34
    unsigned char q03A;  // 0x3A
    void* q03C;  // 0x3C
    char HeadToCoord[12];  // 0x40
    ILocomotion* q044;  // 0x44
    ILocomotion* q048;  // 0x48
    int SpeedAccum;  // 0x4C
    double MovementSpeed;  // 0x50
    ILocomotion* q054;  // 0x54
    int TrackNumber;  // 0x58
    int TrackIndex;  // 0x5C
    unsigned char IsTurretLockedDown;  // 0x61
    unsigned int LocomotionClass;
    unsigned int Piggybackee;
    unsigned int *__pad_18;
// --- flat members (END) ---
    HRESULT BeginMove(int * a1, int * pStm);
    HRESULT LoadFromStream(int * a1, int * pPStm, int a3);
    ShipLocomotionClass * ProcessMove(ILocomotion ** Block, char a2);
    int StubReturn112();
    int ddtor(int a1, unsigned int * a2);
};

} // namespace gamemd
