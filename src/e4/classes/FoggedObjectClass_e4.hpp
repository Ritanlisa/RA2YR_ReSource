// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct FoggedObjectClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    unsigned int qC;  // 0xC
    int Count;  // 0x10
    unsigned int q011;  // 0x11
    bool IsInitialized;  // 0x12
    bool IsAllocated;  // 0x13
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    unsigned int q01A;  // 0x1A
    int referenceCount;  // 0x1C
    bool q01D;  // 0x1D
    void * NeedsSaveOrLink;  // 0x20
    void *q24;  // 0x24
    unsigned int q28;  // 0x28
    bool q02B;  // 0x2B
    char Cell[4];  // 0x2C
    unsigned int LastSight2;
    unsigned int q030;
    unsigned int q034;
    unsigned int q038;
    unsigned int q040;
    unsigned int q044;
    unsigned int q048;
    unsigned int q04C;
    unsigned int q060;
    unsigned int q064;
    unsigned int u32_34;
    unsigned int u32_38;
    unsigned int u32_3C;
    unsigned int u32_54;
    unsigned int u32_58;
    unsigned int u32_5C;
    unsigned int u32_6C;
    unsigned char u8_69;
    unsigned int House;
    unsigned int vtable4;
    unsigned int LastSight;
    unsigned int u32_64;
    unsigned int u32_69;
// --- flat members (END) ---
    AbstractClass * * InitDrawRecord(unsigned int * a2);
    AbstractClass * * InitTerrainFog(void* aP1, int a3, int a4);
    AbstractClass * * ResizeArray(int v3, char * a3);
    DynamicVector * QueryInterface(char a2);
    FoggedObjectClass * ddtor(char a2);
    HouseClass * * PowerDrainUpdate(int a2);
    char AddRef(int a2);
    int Constructor(BuildingClass * aP1, FoggedObjectClass * aP2, void *a3 = 0, void *a4 = 0, void *a5 = 0);
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetObjectSize();
    int GetTypeIdentifier();
    int InitBuildingFog(unsigned int * a2, int a3, int a4);
    int LoadTypeData(int * a1, int a2);
    int Read(unsigned int * a2, void *a1 = 0);
    int SaveToINI(TechnoTypeClass * aP0, int * a1, int aP2);
    unsigned int * CheckVisibility(unsigned int * v3);
};

} // namespace gamemd
