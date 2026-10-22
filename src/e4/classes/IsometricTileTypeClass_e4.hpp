// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply

struct IsometricTileTypeClass {
    void * ptr_0;  // 0x0
    unsigned char IsometricTileTypeClass_field_0x04;  // 0x4
    char __pad_5[3];  // 0x5
    int IsometricTileTypeClass_field_0x08;  // 0x8
    unsigned char IsometricTileTypeClass_field_0x0C;  // 0xC
    char __pad_D[3];  // 0xD
    int IsometricTileTypeClass_field_0x10;  // 0x10
    int q014;  // 0x14
    int q018;  // 0x18
    int q01C;  // 0x1C
    int q020;  // 0x20
    int q024;  // 0x24
    int q028;  // 0x28
    int q02C;  // 0x2C
    int q030;  // 0x30
    int q034;  // 0x34
    int q038;  // 0x38
    int q03C;  // 0x3C
    int q040;  // 0x40
    int q044;  // 0x44
    int q048;  // 0x48
    int q04C;  // 0x4C
    char __pad_50[84];  // 0x50
    unsigned int q0A4;  // 0xA4
    char __pad_A8[152];  // 0xA8
    unsigned int q140;  // 0x140
    char __pad_144[316];  // 0x144
    unsigned int q280;  // 0x280
    char __pad_284[16];  // 0x284
    unsigned int u32_294;  // 0x294
    unsigned int u32_298;  // 0x298
    unsigned int u32_29C;  // 0x29C
    unsigned int u32_2A0;  // 0x2A0
    unsigned int q2A4;  // 0x2A4
    unsigned int u32_2A8;  // 0x2A8
    unsigned int u32_2AC;  // 0x2AC
    char __pad_2B0[1];  // 0x2B0
    unsigned char u32_2B1;  // 0x2B1
    char __pad_2B2[2];  // 0x2B2
    unsigned int u32_2B4;  // 0x2B4
    unsigned int q2B8;  // 0x2B8
    unsigned int u32_2BC;  // 0x2BC
    unsigned int u32_2C0;  // 0x2C0
    unsigned int u32_2C4;  // 0x2C4
    unsigned int u32_2C8;  // 0x2C8
    char __pad_2CC[8];  // 0x2CC
    unsigned int u32_2D4;  // 0x2D4
    unsigned int u32_2D8;  // 0x2D8
    unsigned int u32_2DC;  // 0x2DC
    unsigned char u32_2E0;  // 0x2E0
    unsigned char u32_2E1;  // 0x2E1
    char __pad_2E2[2];  // 0x2E2
    unsigned int u32_2E4;  // 0x2E4
    unsigned int u32_2E8;  // 0x2E8
    unsigned int u32_2EC;  // 0x2EC
    unsigned int u32_2F0;  // 0x2F0
    unsigned char u32_2F4;  // 0x2F4
    char __pad_2F5[3];  // 0x2F5
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    AbstractClass * * LoadTypeData(int * a1, int a2);
    DynamicVector * Constructor(unsigned int * Block, char a2, void *a3, void *a4, void *a5);
    IsometricTileTypeClass * ddtor(char a2, int a1, int a3, int a4, int a5);
    char SetCapacity(int a2, unsigned int * a3);
    int FindItem(unsigned int * a2);
    int GetAuxField();
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetObjectSize();
    int GetTileIndex(int a2, int a3);
    int GetTypeIdentifier();
    int ProcessPower(int * a2, void *a2_2);
    int SaveToINI(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2);
    unsigned int * Constructor_0(int a2, int a3);
    unsigned int PointerToIndex(int a2);
    void ClearBuffer(DynamicVectorClass_PAD_16 *a1);
    static int CleanupMembers(IsometricTileTypeClass * aP1);
};

} // namespace gamemd
