// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct HouseClass;  // fix_fwd_type_supply

struct FoggedObjectClass {
    void * vfptr;  // 0x0
    void * vfptr1;  // 0x4
    void * vfptr2;  // 0x8
    void * vfptr3;  // 0xC
    int Count;  // 0x10
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    int LastSight;  // 0x24
    HouseClass* House;  // 0x28
    void* Cell;  // 0x2C
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    AbstractClass * * InitDrawRecord(unsigned int * a2);
    int InitTerrainFog(unsigned int *aP1, int a3, int a4);  // G57w10-S raw 0x004D0C40 IUnknown 占位清除
    AbstractClass * * ResizeArray(int a2, char * a3);
    DynamicVector * QueryInterface(char a2, int a3);
    FoggedObjectClass * ddtor(char a2, int a3);
    HouseClass * * PowerDrainUpdate(int a2);
    char AddRef(int a2);
    AbstractClass * Constructor(BuildingClass * aP1, FoggedObjectClass * aP2, void *a3, void *a4 = 0);
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetObjectSize();
    int GetTypeIdentifier();
    int InitBuildingFog(unsigned int * a2, int a3, int a4);
    int LoadTypeData(int * a1, int a2);
    int Read(unsigned int * a2, void *a2_2, void *a3 = 0);
    int   SaveToINI(TechnoTypeClass * aP0, int * a1, int aP2);
    unsigned int * CheckVisibility(unsigned int * v3);
};

} // namespace gamemd
