// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Coord;  // fix_fwd_type_supply

struct ParasiteClass {
#pragma pack(push, 1)  // X60: binary-packed layout
    unsigned char vfptr;  // 0x0
    char __pad_1[3];  // 0x1
    int vfptr1;  // 0x4
    int vfptr2;  // 0x8
    unsigned char vfptr3;  // 0xC
    unsigned int u32_D;  // 0xD
    char __pad_11[3];  // 0x11
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    int creationFrame;  // 0x24
    unsigned char __pad_028;  // 0x28
    char __pad_29[3];  // 0x29
    unsigned char u32_2C;  // 0x2C
    char __pad_2D[3];  // 0x2D
    int ParasiteClass_field_30;  // 0x30
    int ParasiteClass_field_34;  // 0x34
    int ParasiteClass_field_38;  // 0x38
    int ParasiteClass_field_3C;  // 0x3C
    int ParasiteClass_field_40;  // 0x40
    unsigned int u32_44;  // 0x44
    unsigned int u32_48;  // 0x48
    unsigned int q04C;  // 0x4C
    unsigned int u32_50;  // 0x50
    unsigned char u32_54;  // 0x54
    char __pad_55[71];  // 0x55
    unsigned int q09C;  // 0x9C
    unsigned int q0A0;  // 0xA0
    unsigned int u32_A4;  // 0xA4
    char __pad_A8[4];  // 0xA8
    unsigned int u32_AC;  // 0xAC
    char __pad_B0[20];  // 0xB0
    unsigned int u32_C4;  // 0xC4
    unsigned int u8_C8;  // 0xC8
    unsigned int q0CC;  // 0xCC
    unsigned int q0D0;  // 0xD0
    unsigned int q0D4;  // 0xD4
    char __pad_D8[56];  // 0xD8
    unsigned char q110;  // 0x110
    char __pad_111[19];  // 0x111
    unsigned int q124;  // 0x124
    char __pad_128[2];  // 0x128
    unsigned short u16_12A;  // 0x12A
    char __pad_12C[2];  // 0x12C
    unsigned char q12E;  // 0x12E
    char __pad_12F[2];  // 0x12F
    unsigned char q131;  // 0x131
    char __pad_132[2];  // 0x132
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    AbstractClass * * TryInfect(unsigned int * a2);
    Coord * * Update(void *a1, void *a2, void *a3, void *a4);
    ParasiteClass(TechnoClass * aP1);
    bool CanInfect(unsigned int *a2);
    int Attach(int * a2);
    bool CanExistOnVictimCell();
    int Constructor(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0);
    int LoadParasite(int * a0, AbstractClass * aP1);
    int SaveParasite(TechnoTypeClass * aP0, int * a1, int aP2);
    int ddtor(int a1, unsigned int * a2);
    void * UpdateParasite(char a2);
    void DeploySquad();
    void TickDamage();
    void * UpdateParasite(ParasiteClass * Block, char a2);
#pragma pack(pop)
};

} // namespace gamemd
