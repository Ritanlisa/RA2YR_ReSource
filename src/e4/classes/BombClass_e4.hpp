// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once
#ifndef GAMEMD_E4_FLAT_BombClass
#define GAMEMD_E4_FLAT_BombClass 1  // G57c2: suppress minimal_carriers.hpp twin
#endif

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct BombClass {
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    int uniqueId;  // 0x10
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    unsigned char __pad_024;  // 0x24
    char __pad_25[3];  // 0x25
    int BombClass_field_28;  // 0x28
    void* BombClass_field_2C;  // 0x2C
    int audioController[5];  // 0x30
    int soundIndex;  // 0x44
    unsigned char __pad_048;  // 0x48
    char __pad_49[11];  // 0x49
    int BombClass_field_54;  // 0x54
    bool BombClass_field_58;  // 0x58
    char pad_59[3];  // 0x59
// --- flat members (BEGIN) ---
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
};

} // namespace gamemd
