// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Coord;  // fix_fwd_type_supply

struct ParasiteClass {
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
    char creationFrame[4];  // 0x24
    char ParasiteClass_field_30[4];  // 0x30
    unsigned int alignmentPadding;  // 0x33
    char ParasiteClass_field_34[4];  // 0x34
    char ParasiteClass_field_3C[4];  // 0x3C
    char ParasiteClass_field_40[4];  // 0x40
// --- flat members (END) ---
    AbstractClass * * TryInfect(unsigned int * a2);
    Coord * * Update(void *a1, void *a2, void *a3, void *a4);
    ParasiteClass(TechnoClass * aP1);
    bool CanInfect(unsigned int *a2);
    int Attach(int * a2);
    int CanExistOnVictimCell(void *a1 = 0);
    int Constructor(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0);
    int LoadParasite(int * a0, AbstractClass * aP1);
    int SaveParasite(TechnoTypeClass * aP0, int * a1, int aP2);
    int ddtor(int a1, unsigned int * a2);
    void * UpdateParasite(char a2);
    void DeploySquad();
    void TickDamage();
    void * UpdateParasite(ParasiteClass * Block, char a2);
    unsigned int u32_48;  // 0x48 (offset-truth)
    unsigned int u32_54;  // 0x54 (offset-truth)
    static double ParasiteClass_field_38(...);  // plateau: C2039/C3861 stub
    static double __pad_28(...);  // plateau: C2039/C3861 stub
    static double u32_44(...);  // plateau: C2039/C3861 stub
    static double vfptr(...);  // plateau: C2039/C3861 stub
};

} // namespace gamemd
