// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
// G57w18j4: this physical file resolves BOTH include spellings (Droppod/DropPodLocomotionClass_e4.hpp,
// case-insensitive FS) and now carries the true 48B DropPodLocomotionClass (live til, IDA 2026-10-06).
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DroppodLocomotionClass {
    char __pad_0[4];  // 0x0
    void* q004;  // 0x4
    int Owner;  // 0x8
    char __pad_C[12];  // 0xC
    unsigned int q018;  // 0x18
    char __pad_1C[236];  // 0x1C
    void* q108;  // 0x108
    char __pad_10C[344];  // 0x10C
    void* q264;  // 0x264
    char __pad_268[828];  // 0x268
    void* q5A4;  // 0x5A4
// --- flat members (BEGIN) ---
// --- flat members (END) ---
};
// G57w18j4: true 48B carrier (G57c2 twin-guard: full carrier wins when included before
// minimal_carriers.hpp reaches this TU; minimal twin remains for minimal-only TUs).
#ifndef GAMEMD_E4_FLAT_DropPodLocomotionClass
#define GAMEMD_E4_FLAT_DropPodLocomotionClass 1
struct DropPodLocomotionClass {
    char LocomotionClass[8];  // 0x0
    int Owner;  // 0x8
    unsigned int __pad_00C;  // 0xC
    char Powered[1];  // 0x10
    bool Dirty;  // 0x11
    char __pad_12[2];  // 0x12
    int RefCount;  // 0x14
    unsigned int q018;  // 0x18
    bool IsOutOfMap;  // 0x1C
    char __pad_1D[3];  // 0x1D
    int DestinationCoords[3];  // 0x20
    ILocomotion * Piggybackee;  // 0x2C
// --- flat members (live til: DropPodLocomotionClass size=48, IDA 2026-10-06) ---
// --- methods (defs in e4/DroppodLocomotionClass_e4.cpp; sig=csp raw fn_4B.c) ---
    int ILoco_Process(DropPodLocomotionClass * a1);  // 0x4B5B70 vt+64
    int  ddtor(unsigned int * a2);  // 0x4B6200
    HRESULT  BeginMove(int * pStm);  // 0x4B6240
    HRESULT  UpdateMovement(int * pPStm, int a3);  // 0x4B62C0
    int StubReturn48();  // 0x4B66E0 vt+36
    void *  ProcessMove(char a2);  // 0x4B66F0
};
#endif  // GAMEMD_E4_FLAT_DropPodLocomotionClass
} // namespace gamemd
