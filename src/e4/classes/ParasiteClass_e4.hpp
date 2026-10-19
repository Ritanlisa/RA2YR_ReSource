// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Coord;  // fix_fwd_type_supply

struct ParasiteClass {
    void* ptr_0;  // 0x0
    void* ptr_4;  // 0x4
    void* ptr_8;  // 0x8
    void* ptr_C;  // 0xC
    int uniqueId;  // 0x10
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    int creationFrame;  // 0x24
    unsigned char __pad_028;  // 0x28
    char __pad_29[7];  // 0x29
    char ParasiteClass_field_30[4];  // 0x30
    int ParasiteClass_field_34;  // 0x34
    unsigned int ParasiteClass_field_38;  // 0x38
    int ParasiteClass_field_3C;  // 0x3C
    int ParasiteClass_field_40;  // 0x40
// --- flat members (BEGIN) ---
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
};

} // namespace gamemd
