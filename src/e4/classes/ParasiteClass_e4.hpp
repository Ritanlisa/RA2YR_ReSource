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
int creationFrame;  // 0x24 [X35-L7 kind=int]
    char ParasiteClass_field_30[4];  // 0x30
    unsigned int alignmentPadding;  // 0x33
    int ParasiteClass_field_34;  // 0x34 [X30:type_map]
    int ParasiteClass_field_3C;  // 0x3C [X30:type_map]
    int ParasiteClass_field_40;  // 0x40 [X30:type_map]
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
unsigned int u32_48;  // 0x48 [X35-L7 kind=unsigned int]
    unsigned int u32_54;  // 0x54 (offset-truth)

    unsigned char __pad_028;  // X10 supply (csp_canon_members)
    IUnknown* q04C;  // X10 supply (member_lookup)
    unsigned int u32_44;  // X10 supply (member_lookup)
    int u32_50;  // X10 supply (member_lookup)
unsigned int __pad_038;  // 0x38 [X35-L7 kind=unsigned int]
unsigned int ParasiteClass_field_38;  // 0x38 [X35-L7 kind=unsigned int]
};

} // namespace gamemd
