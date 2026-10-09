// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply

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
