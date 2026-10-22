// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply

struct AITriggerTypeClass {
    unsigned char q000;  // 0x0
    unsigned char q001;  // 0x1
    char __pad_2[2];  // 0x2
    unsigned char AITriggerTypeClass_field_0x04;  // 0x4
    char __pad_5[3];  // 0x5
    int AITriggerTypeClass_field_0x08;  // 0x8
    unsigned char AITriggerTypeClass_field_0x0C;  // 0xC
    char __pad_D[3];  // 0xD
    int AITriggerTypeClass_field_0x10;  // 0x10
    int AITriggerTypeClass_field_0x14;  // 0x14
    int AITriggerTypeClass_field_0x18;  // 0x18
    int AITriggerTypeClass_field_0x1C;  // 0x1C
    int AITriggerTypeClass_field_0x20;  // 0x20
    int AITriggerTypeClass_field_0x24;  // 0x24
    unsigned int AITriggerTypeClass_field_0x28;  // 0x28
    int AITriggerTypeClass_field_0x2C;  // 0x2C
    int AITriggerTypeClass_field_0x30;  // 0x30
    int AITriggerTypeClass_field_0x34;  // 0x34
    int AITriggerTypeClass_field_0x38;  // 0x38
    int AITriggerTypeClass_field_0x3C;  // 0x3C
    char __pad_40[84];  // 0x40
    unsigned char u32_94;  // 0x94
    char __pad_95[3];  // 0x95
    unsigned int q098;  // 0x98
    unsigned int q09C;  // 0x9C
    unsigned int q0A0;  // 0xA0
    char __pad_A4[4];  // 0xA4
    unsigned int q0A8;  // 0xA8
    unsigned int q0AC;  // 0xAC
    unsigned int u32_B0;  // 0xB0
    char __pad_B4[4];  // 0xB4
    unsigned int u32_B8;  // 0xB8
    unsigned int u32_BC;  // 0xBC
    unsigned int q0C0;  // 0xC0
    unsigned int q0C4;  // 0xC4
    unsigned int q0C8;  // 0xC8
    unsigned int q0CC;  // 0xCC
    unsigned char q0D0;  // 0xD0
    unsigned char u8_D1;  // 0xD1
    unsigned char u8_D2;  // 0xD2
    unsigned char u8_D3;  // 0xD3
    unsigned char u8_D4;  // 0xD4
    char __pad_D5[3];  // 0xD5
    unsigned int u32_D8;  // 0xD8
    unsigned int u32_DC;  // 0xDC
    unsigned int q0E0;  // 0xE0
    unsigned int q0E4;  // 0xE4
    unsigned int q0E8;  // 0xE8
    char __pad_EC[24];  // 0xEC
    unsigned int u32_104;  // 0x104
    unsigned int u32_108;  // 0x108
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    AITriggerTypeClass * ddtor(char a2);
    DynamicVector * * OwnerHouseOwns(unsigned int * a2, int a3);
    ObjectClass * * LoadFromINI(unsigned char *** a2, void *a2_2);
    int ChronoSphereCharged(int a1, int a2);
    int CivilianHouseOwns(int a2, int a3);
    int GetObjectSize();
    int GetTypeIdentifier();
    int HouseCredits(int a2, int a3);
    int IronCurtainCharged(int a1, int a2);
    int RegisterFailure();
    int RegisterSuccess();
    AITriggerTypeClass * ddtor(unsigned int * Block, char a2);
};

} // namespace gamemd
