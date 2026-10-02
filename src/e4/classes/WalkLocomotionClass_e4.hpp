// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ILocomotion;  // fix_fwd_type_supply
struct ObjectClass;  // fix_fwd_type_supply

struct WalkLocomotionClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* q008;  // 0x8
    unsigned char q00C;  // 0xC
    bool Dirty;  // 0x11
    void* vtable3;  // 0x18
    char Dest[12];  // 0x1C
    bool q01D;  // 0x1D
    ILocomotion * q020;  // 0x20
    char HeadToCoord[12];  // 0x28
    bool q02B;  // 0x2B
    ObjectClass * ptr_30;  // 0x30
    unsigned char q031;  // 0x31
    ILocomotion * ptr_20;  // 0x32
    unsigned int q033;  // 0x33
    bool IsMoving;  // 0x34
    bool IsInProcessing;  // 0x35
    bool IsReallyMoving;  // 0x36
    bool q037;  // 0x37
    ILocomotion * ptr_38;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    unsigned int LocomotionClass;
    unsigned int Piggybackee;
    unsigned int *__pad_18;
// --- flat members (END) ---
    HRESULT BeginMove(int * a1, int * pStm);
    HRESULT LoadFromStream(int * a1, int * pPStm, int a3);
    WalkLocomotionClass * ProcessMove(char a2 a2);
    int IsAtDestination(int a1, int a2, int a3, int a4);
    int SetWaypointTarget(int a1, int a2, unsigned int a3, long long a4);
    int StubReturn60();
    int ddtor(int a1, unsigned int * a2);
};

} // namespace gamemd
