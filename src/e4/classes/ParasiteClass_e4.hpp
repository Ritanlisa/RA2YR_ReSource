// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ParasiteClass {
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
    unsigned int q01A;  // 0x1A
    int referenceCount;  // 0x1C
    bool q01D;  // 0x1D
    void * NeedsSaveOrLink;  // 0x20
    unsigned int creationFrame;  // 0x24
    int q028;  // 0x28
    bool q02B;  // 0x2B
    void* q02C;  // 0x2C
    unsigned int ParasiteClass_field_30;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    unsigned int ParasiteClass_field_34;  // 0x34
    void *q38;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    void *q3C;  // 0x3C
    unsigned int q03D;  // 0x3D
    void *q40;  // 0x40
    bool q042;  // 0x42
    unsigned int ParasiteClass_field_38;
    unsigned int *__pad_28;
    unsigned int q044;
    unsigned int q048;
    unsigned int q04C;
    unsigned int q054;
    unsigned int u32_48;
    unsigned int u32_50;
    unsigned int u32_54;
    unsigned int uniqueId0;
    unsigned int vtable46;
    unsigned int nextArrayIndex8;
    unsigned int ParasiteClass_field_3C;
    unsigned int ParasiteClass_field_40;
    unsigned int u32_38;
    unsigned int q110;
    unsigned int q120;
    unsigned int q130;
    unsigned int q140;
    unsigned int q0E0;
    unsigned int q0F0;
    unsigned int q100;
    unsigned int q090;
// --- flat members (END) ---
    AbstractClass * * TryInfect(unsigned int * a2);
    Coord * * Update(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0);
    ParasiteClass(void * aP1);
    bool CanInfect(unsigned int * a2);
    int Attach(int * a2);
    int CanExistOnVictimCell();
    void Constructor();
    int LoadParasite(int * a0, void * aP1);
    int SaveParasite(void * aP0, int * a1, int aP2);
    int ddtor(int a1, unsigned int * a2);
    void * UpdateParasite(char a2);
    void DeploySquad();
    void TickDamage();
};

} // namespace gamemd
