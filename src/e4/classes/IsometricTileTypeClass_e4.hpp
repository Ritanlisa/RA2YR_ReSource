// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply

struct IsometricTileTypeClass {
    void* __pad_0;  // 0x0
    int IsometricTileTypeClass_field_0x04;  // 0x4
    unsigned int m_8;  // 0x8
    int IsometricTileTypeClass_field_0x0C;  // 0xC
    unsigned int m_10;  // 0x10
    int IsometricTileTypeClass_field_0x14;  // 0x14
    int IsometricTileTypeClass_field_0x18;  // 0x18
    int IsometricTileTypeClass_field_0x1C;  // 0x1C
    int IsometricTileTypeClass_field_0x20;  // 0x20
    int IsometricTileTypeClass_field_0x24;  // 0x24
    int IsometricTileTypeClass_field_0x28;  // 0x28
    int IsometricTileTypeClass_field_0x2C;  // 0x2C
    int IsometricTileTypeClass_field_0x30;  // 0x30
    int IsometricTileTypeClass_field_0x34;  // 0x34
    int IsometricTileTypeClass_field_0x38;  // 0x38
    int IsometricTileTypeClass_field_0x3C;  // 0x3C
    int IsometricTileTypeClass_field_0x40;  // 0x40
    int IsometricTileTypeClass_field_0x44;  // 0x44
    int IsometricTileTypeClass_field_0x48;  // 0x48
    int IsometricTileTypeClass_field_0x4C;  // 0x4C
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
    void ClearBuffer(void *a1);
    static int CleanupMembers(IsometricTileTypeClass * aP1);
};

} // namespace gamemd
