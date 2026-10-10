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
    unsigned int *q000;  // 0x0 (offset-truth)
    unsigned int u32_294;  // 0x294 (offset-truth)
    unsigned int u32_2BC;  // 0x2BC (offset-truth)
    unsigned int u32_2C8;  // 0x2C8 (offset-truth)
    static double IsometricTileTypeClass_field_0x04(...);  // plateau: C2039/C3861 stub
    static double IsometricTileTypeClass_field_0x08(...);  // plateau: C2039/C3861 stub
    static double IsometricTileTypeClass_field_0x0C(...);  // plateau: C2039/C3861 stub
    static double __pad_0(...);  // plateau: C2039/C3861 stub
    static double q010(...);  // plateau: C2039/C3861 stub
};

} // namespace gamemd
