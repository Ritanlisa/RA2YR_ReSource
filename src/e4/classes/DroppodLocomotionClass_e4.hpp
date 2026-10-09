// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
// G57w18j4: this physical file resolves BOTH include spellings (Droppod/DropPodLocomotionClass_e4.hpp,
// case-insensitive FS) and now carries the true 48B DropPodLocomotionClass (live til, IDA 2026-10-06).
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DroppodLocomotionClass {
// --- flat members (BEGIN) ---
    void* q004;  // 0x4
    void* q008;  // 0x8
    void* q108;  // 0x108
    void* q264;  // 0x264
    void* q5A4;  // 0x5A4
    void* q1444;  // 0x1444
    void* q1554;  // 0x1554
    void* q5188;  // 0x5188
    void* q5460;  // 0x5460
    void* q21600;  // 0x21600
    void* q133234;  // 0x133234
    void* q136704;  // 0x136704
    void* q19234870;  // 0x19234870
    void* q421742704;  // 0x421742704
    void* q422806914;  // 0x422806914
    void* q1611704472694;  // 0x1611704472694
    void* q1612096536630;  // 0x1612096536630
    void* q388267565606448;  // 0x388267565606448
    void* q254495664600278088;  // 0x254495664600278088
    void* q687470288706016221574;  // 0x687470288706016221574
// --- flat members (END) ---

    int Owner;  // 0x8 (canon-mt)
    int RefCount;  // 0x14 (canon-mt)
    unsigned int q018;  // 0x18 (offset-truth)
};
// G57w18j4: true 48B carrier (G57c2 twin-guard: full carrier wins when included before
// minimal_carriers.hpp reaches this TU; minimal twin remains for minimal-only TUs).
#ifndef GAMEMD_E4_FLAT_DropPodLocomotionClass
#define GAMEMD_E4_FLAT_DropPodLocomotionClass 1
struct DropPodLocomotionClass {
// --- flat members (live til: DropPodLocomotionClass size=48, IDA 2026-10-06) ---
    char LocomotionClass[24];  // 0x0 LocomotionClass base sub-object (body vocabulary char[24])
    char __pad_18[4];  // 0x18
    char IsOutOfMap[1];  // 0x1C
    char __pad_1D[3];  // 0x1D
    int DestinationCoords[3];  // 0x20
    ILocomotion * Piggybackee;  // 0x2C (til int 4B; COM interface ptr semantics per H4 verdict)
// --- methods (defs in e4/DroppodLocomotionClass_e4.cpp; sig=csp raw fn_4B.c) ---
    int ILoco_Process(DropPodLocomotionClass * a1);  // 0x4B5B70 vt+64
    int ddtor(int a1, unsigned int * a2);  // 0x4B6200 vt+12
    HRESULT BeginMove(DropPodLocomotionClass * a1, int * pStm);  // 0x4B6240 vt+20
    HRESULT UpdateMovement(DropPodLocomotionClass * a1, int * pPStm, int a3);  // 0x4B62C0 vt+24
    int StubReturn48();  // 0x4B66E0 vt+36
    void * ProcessMove(char a2);  // 0x4B66F0 vt+32
};
#endif  // GAMEMD_E4_FLAT_DropPodLocomotionClass
} // namespace gamemd
