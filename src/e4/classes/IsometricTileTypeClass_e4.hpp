// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply

struct IsometricTileTypeClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    bool IsInitialized;  // 0x12
    bool IsAllocated;  // 0x13
    int Count;  // 0x16
    unsigned int alignmentPadding;  // 0x21
    unsigned int UINameLabel;  // 0x3D
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
    unsigned char *m_1;  // 0x1 (offset-truth)
    unsigned int m_10;  // 0x10 (offset-truth)
    unsigned int m_8;  // 0x8 (offset-truth)
    unsigned int m_C;  // 0xC (offset-truth)
void* q000;  // 0x0 [X35-L7 kind=void*]
    unsigned int u32_294;  // 0x294 (offset-truth)
    unsigned int u32_2BC;  // 0x2BC (offset-truth)
    unsigned int u32_2C8;  // 0x2C8 (offset-truth)

    uint8_t IsometricTileTypeClass_field_0x0C;  // X10 supply (member_types)
    unsigned char __pad_010;  // 0x10 [X30:canon]
    unsigned char __pad_01A;  // 0x1A [X30:canon]
    unsigned char __pad_025;  // 0x25 [X30:canon]
    unsigned char __pad_041;  // 0x41 [X30:canon]
    int IsometricTileTypeClass_field_0x04;  // 0x4 [X30:member_lookup]
void* __pad_0;  // 0x0 [X35-L7 kind=void*]
    unsigned int uniqueId;  // [X30:default]


    int u32_298;  // 0x298 [X55 W3 supply (render vocab)]
    unsigned int u32_29C;  // 0x29C [X55 W3 supply (render vocab)]
    unsigned int u32_2A0;  // 0x2A0 [X55 W3 supply (render vocab)]
    unsigned int u32_2B4;  // 0x2B4 [X55 W3 supply (render vocab)]
    unsigned int u32_2C0;  // 0x2C0 [X55 W3 supply (render vocab)]
    unsigned int u32_2C4;  // 0x2C4 [X55 W3 supply (render vocab)]
    unsigned int u32_2D4;  // 0x2D4 [X55 W3 supply (render vocab)]
    unsigned int u32_2D8;  // 0x2D8 [X55 W3 supply (render vocab)]
    unsigned int u32_2DC;  // 0x2DC [X55 W3 supply (render vocab)]
    unsigned int u32_2E0;  // 0x2E0 [X55 W3 supply (render vocab)]
    unsigned int u32_2E1;  // 0x2E1 [X55 W3 supply (render vocab)]
    unsigned int u32_2E4;  // 0x2E4 [X55 W3 supply (render vocab)]
    unsigned int u32_2E8;  // 0x2E8 [X55 W3 supply (render vocab)]
    unsigned int u32_2EC;  // 0x2EC [X55 W3 supply (render vocab)]
    unsigned int u32_2F0;  // 0x2F0 [X55 W3 supply (render vocab)]
};

} // namespace gamemd
