// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct IsometricTileTypeClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    unsigned char q010;  // 0x10
    unsigned int q011;  // 0x11
    bool IsInitialized;  // 0x12
    bool IsAllocated;  // 0x13
    unsigned char q014;  // 0x14
    unsigned char q015;  // 0x15
    int Count;  // 0x16
    unsigned char q018;  // 0x18
    unsigned int q01A;  // 0x1A
    unsigned char q01C;  // 0x1C
    bool q01D;  // 0x1D
    unsigned char q020;  // 0x20
    unsigned int alignmentPadding;  // 0x21
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    bool q02B;  // 0x2B
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q031;  // 0x31
    unsigned char q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    unsigned char q03C;  // 0x3C
    unsigned int UINameLabel;  // 0x3D
    unsigned char q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q04C;  // 0x4C
    unsigned char q04F;  // 0x4F
// --- flat members (END) ---
    AbstractClass * * LoadTypeData(int * a1, int a2);
    DynamicVector * Constructor(char a2);
    IsometricTileTypeClass * ddtor(char a2);
    char SetCapacity(int a2, unsigned int * a3);
    int FindItem(unsigned int * a2);
    int GetAuxField();
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetObjectSize();
    int GetTileIndex(int a2, int a3);
    int GetTypeIdentifier();
    int ProcessPower(int * a2);
    int SaveToINI(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2);
    unsigned int * Constructor_0(int a2, int a3);
    unsigned int PointerToIndex(int a2);
    void ClearBuffer();
};

} // namespace gamemd
