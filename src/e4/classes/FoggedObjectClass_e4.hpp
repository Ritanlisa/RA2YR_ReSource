// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct FoggedObjectClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
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
    char LastSight[4];  // 0x24
    HouseClass* House;  // 0x28
    bool q02B;  // 0x2B
    char Cell[4];  // 0x2C
// --- flat members (END) ---
    AbstractClass * * InitDrawRecord(unsigned int * a2);
    AbstractClass * * InitTerrainFog(void* aP1, int a3, int a4);
    AbstractClass * * ResizeArray(int v3, char * a3);
    DynamicVector * QueryInterface(char a2);
    FoggedObjectClass * ddtor(char a2);
    HouseClass * * PowerDrainUpdate(int a2);
    char AddRef(int a2);
    int Constructor(BuildingClass * aP1, FoggedObjectClass * aP2);
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetObjectSize();
    int GetTypeIdentifier();
    int InitBuildingFog(unsigned int * a2, int a3, int a4);
    int LoadTypeData(int * a1, int a2);
    int Read(unsigned int * a2);
    int SaveToINI(TechnoTypeClass * aP0, int * a1, int aP2);
    unsigned int * CheckVisibility(unsigned int * v3);
};

} // namespace gamemd
