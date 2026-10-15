// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ILocomotion;  // fix_fwd_type_supply

struct WalkLocomotionClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* Owner;  // 0x8
    unsigned int Powered;  // 0x10
    bool Dirty;  // 0x11
    int RefCount;  // 0x14
    void* vtable3;  // 0x18
    char Dest[12];  // 0x1C
    char HeadToCoord[12];  // 0x28
    ObjectClass * ptr_30;  // 0x30
    ILocomotion * ptr_20;  // 0x32
    bool IsMoving;  // 0x34
    bool IsInProcessing;  // 0x35
    bool IsReallyMoving;  // 0x36
    ILocomotion * ptr_38;  // 0x38
// --- flat members (END) ---
    HRESULT BeginMove(int * a1, int * pStm);
    HRESULT LoadFromStream(int * a1, int * pPStm, int a3);
    WalkLocomotionClass * ProcessMove(char a2);
    int IsAtDestination(int a1, int a2, int a3, int a4);
    int SetWaypointTarget(int a1, int a2, unsigned int a3, long long a4);
    int StubReturn60();
    int ddtor(int a1, unsigned int * a2);
    ILocomotion* Piggybackee;  // 0x38 (ml) [X30:type_map]
    unsigned int q018;  // 0x18 (offset-truth)
    unsigned char __pad_00C;  // 0xC [X30:canon]
    unsigned char __pad_037;  // 0x37 [X30:canon]
};

} // namespace gamemd
