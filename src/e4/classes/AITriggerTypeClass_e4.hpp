// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct ObjectClass;  // fix_fwd_type_supply

struct AITriggerTypeClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    unsigned char q010;  // 0x10
    unsigned int q011;  // 0x11
    bool IsAllocated;  // 0x13
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned int q01A;  // 0x1A
    unsigned char q01C;  // 0x1C
    bool q01D;  // 0x1D
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned int u32_28;  // 0x28
    bool q02B;  // 0x2B
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    unsigned char q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    unsigned char q03C;  // 0x3C
    unsigned int UINameLabel;  // 0x3D
    unsigned int q0484;
    unsigned int q04C2;
    unsigned int q094;
    unsigned int q098;
    unsigned int q0A0;
    unsigned int q0A8;
    unsigned int q0AC;
    unsigned int q0B0;
    unsigned int q0D0;
    unsigned int q0D8;
    unsigned int q0DC;
    unsigned int q0E0;
    unsigned int u32_280;
    unsigned int u32_500;
    unsigned int u32_588;
    unsigned int u32_D8;
    unsigned int u32_E4;
    unsigned char u8_D1;
    unsigned int vtable46;
    unsigned int q0B8;
    unsigned int q0BC;
    unsigned int q0C0;
    unsigned int q0C4;
    unsigned int q0C8;
    unsigned int q0CC;
    unsigned int q104;
    unsigned int q108;
    unsigned char u8_D2;
    unsigned char u8_D3;
    unsigned char u8_D4;
    unsigned int AITriggerTypeClass_field_0x04;
    unsigned int AITriggerTypeClass_field_0x08;
    unsigned int AITriggerTypeClass_field_0x0C;
    unsigned int *__pad_0;
    unsigned int AbstractTypeClass;
    unsigned char AITriggerTypeClass_field_0x18;  // 0x18
    unsigned char AITriggerTypeClass_field_0x24;  // 0x24
    unsigned char AITriggerTypeClass_field_0x28;  // 0x28
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
    unsigned char u8_D1;  // 0xD1
    unsigned char q0148;  // 0x148
    unsigned int q0147;  // 0x147
    unsigned char q0144;  // 0x144
    unsigned char q0E8;  // 0xE8
    unsigned int q0E4;  // 0xE4
    unsigned char q09C;  // 0x9C
};

} // namespace gamemd
