// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct AbstractClass;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct HouseClass;  // fix_fwd_type_supply

struct FoggedObjectClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    unsigned char __pad_5[356];  // 0x5
    void* vtable3;  // 0x8
    unsigned char __tail_10;  // 0xA
    unsigned int qC;  // 0xC
    int Count;  // 0x10
    unsigned int q011;  // 0x11
    bool IsInitialized;  // 0x12
    bool IsAllocated;  // 0x13
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    unsigned int q01A;  // 0x1A
    int referenceCount;  // 0x1C
    unsigned char m_1[4];  // 0x1
    bool q01D;  // 0x1D
    void * NeedsSaveOrLink;  // 0x20
    int m_8;  // 0x8
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
    void* AbstractClass;  // 0x0 (no offset truth)
// --- flat members (END) ---
    AbstractClass * * InitDrawRecord(unsigned int * a2);
    AbstractClass * InitTerrainFog(IUnknown * aP1, int a3, int a4);
    AbstractClass * * ResizeArray(int a2, char * a3);
    DynamicVector * QueryInterface(char a2, int a3);
    FoggedObjectClass * ddtor(char a2, int a3);
    HouseClass * * PowerDrainUpdate(int a2);
    char AddRef(int a2);
    AbstractClass * Constructor(BuildingClass * aP1, FoggedObjectClass * aP2, void *a3);
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetObjectSize();
    int GetTypeIdentifier();
    int InitBuildingFog(unsigned int * a2, int a3, int a4);
    int LoadTypeData(int * a1, int a2);
    int Read(unsigned int * a2, void *a2_2);
    int   SaveToINI(TechnoTypeClass * aP0, int * a1, int aP2);
    unsigned int * CheckVisibility(unsigned int * a2);
};

} // namespace gamemd
