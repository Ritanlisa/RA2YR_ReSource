// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once
#ifndef GAMEMD_E4_FLAT_BombClass
#define GAMEMD_E4_FLAT_BombClass 1  // G57c2: suppress minimal_carriers.hpp twin
#endif

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct BombClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    int uniqueId;  // 0x10
    bool IsAllocated;  // 0x13
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    char BombClass_field_28[4];  // 0x28
    char BombClass_field_2C[4];  // 0x2C
    unsigned int audioController;  // 0x30
    unsigned int alignmentPadding;  // 0x33
    char soundIndex[4];  // 0x44
    char BombClass_field_54[4];  // 0x54
    bool BombClass_field_58;  // 0x58
    unsigned char pad_59;  // 0x59
// --- flat members (END) ---
    BombClass * CopyTo(char a2);
    int InitPool();
    int IsDeathBomb();
    int Seek(TechnoTypeClass * aP0, int * a1, int aP2);
    int Stat(int * a2);
    int TimeToExplode();
    int Write(int a2, int aP0, int aP1, int a1, int aP2);
    int ddtor(int a1, unsigned int * a2);
    void * GetCurrentFrame();
    int AbstractClass();  // 0x4385d0
    BombClass * * sub_56AF40(int a2);
    BombClass * * sub_56B250(int a2);
    unsigned int q_80;  // +0x80 flat supply (CSP-fed)

    unsigned char __pad_024;  // X10 supply (csp_canon_members)
};

} // namespace gamemd
