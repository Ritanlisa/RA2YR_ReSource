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
    bool IsAllocated;  // 0x13
    unsigned int alignmentPadding;  // 0x33
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
    unsigned int u32_104;  // 0x104 (offset-truth)
    unsigned int u32_108;  // 0x108 (offset-truth)
    unsigned int u32_B8;  // 0xB8 (offset-truth)
    unsigned int u32_BC;  // 0xBC (offset-truth)
    unsigned int u32_D8;  // 0xD8 (offset-truth)
    unsigned int u32_E4;  // 0xE4 (offset-truth)
    unsigned int q0E8;  // 0xE8
    unsigned int q0C8;  // 0xC8
    unsigned int q0C4;  // 0xC4
    unsigned int q0C0;  // 0xC0
};

} // namespace gamemd
