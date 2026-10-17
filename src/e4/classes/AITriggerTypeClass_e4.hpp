// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply

struct AITriggerTypeClass {
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    unsigned int __pad_010;  // 0x10
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
