// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct BombClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    int uniqueId;  // 0x10
    unsigned int q011;  // 0x11
    bool IsAllocated;  // 0x13
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    int q024;  // 0x24
    char BombClass_field_28[4];  // 0x28
    bool q02B;  // 0x2B
    char BombClass_field_2C[4];  // 0x2C
    unsigned int audioController;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    unsigned int u32_34;  // 0x34
    void* q038;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03C;  // 0x3C
    char q040[4];  // 0x40
    unsigned int q048;  // 0x48
    unsigned char __pad_48[13];  // 0x48
    unsigned int q04C;  // 0x4C
    unsigned int q050;  // 0x50
    char BombClass_field_54[4];  // 0x54
    bool BombClass_field_58;  // 0x58
    unsigned int *__pad_24;
    unsigned int DTOR;
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
};

} // namespace gamemd
