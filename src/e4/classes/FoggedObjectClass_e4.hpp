// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct HouseClass;  // fix_fwd_type_supply

struct FoggedObjectClass {
#pragma pack(push, 1)  // X60: binary-packed layout
    unsigned char vfptr;  // 0x0
    unsigned char q001;  // 0x1
    char __pad_2[2];  // 0x2
    unsigned char vfptr1;  // 0x4
    char q005[3];  // 0x5
    unsigned char vfptr2;  // 0x8
    char __pad_9[3];  // 0x9
    unsigned char vfptr3;  // 0xC
    char __pad_D[3];  // 0xD
    int Count;  // 0x10
    int abstractFlags;  // 0x14
    char nextArrayIndex[1];  // 0x18
    unsigned long long q019;  // 0x19
    char __pad_21[3];  // 0x21
    int LastSight;  // 0x24
    void * House;  // 0x28
    int Cell;  // 0x2C
    unsigned int q030;  // 0x30
    unsigned int u32_34;  // 0x34
    unsigned int u32_38;  // 0x38
    unsigned int u32_3C;  // 0x3C
    unsigned int q040;  // 0x40
    unsigned int u32_44;  // 0x44
    unsigned int q048;  // 0x48
    unsigned int q04C;  // 0x4C
    unsigned int q050;  // 0x50
    unsigned int u32_54;  // 0x54
    unsigned int u32_58;  // 0x58
    unsigned int q5C;  // 0x5C
    unsigned int q060;  // 0x60
    unsigned int u32_64;  // 0x64
    char __pad_68[4];  // 0x68
    unsigned int q06C;  // 0x6C
    unsigned int q070;  // 0x70
    unsigned char u32_74;  // 0x74
    char __pad_75[3];  // 0x75
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
#pragma pack(pop)
};

} // namespace gamemd
