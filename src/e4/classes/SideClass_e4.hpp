// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct SideClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    char uniqueId[4];  // 0x10
    unsigned char alignmentPadding_3;  // 0x11
    void* houseTypes;  // 0x12
    bool IsAllocated;  // 0x13
    unsigned int abstractFlags;  // 0x14
    char houseTypesCount[4];  // 0x16
    unsigned int nextArrayIndex;  // 0x18
    char referenceCount[4];  // 0x1C
    bool NeedsSaveOrLink;  // 0x20
    char id;  // 0x24
    bool needsSave;  // 0x32
    unsigned char m_zero_3C;  // 0x3C
    char uiNameLabel;  // 0x3D
    unsigned int uiName;  // 0x60
    char name;  // 0x64
    unsigned int tail_95;  // 0x95
    void* houseTypes_d;  // 0x98
    char houseTypesCount_d[4];  // 0x9C
// --- flat members (END) ---
    int FindByName(void *a1);
    int GetCountry(int * a2);
    int LoadAllFromINI(CCINIClass * aP0);
    int SaveLoad_Prefix(unsigned int * a0, AbstractTypeClass * aP1);
    int SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2);
    int StubReturn180();
    int StubReturn28();
    int ddtor(int a1, unsigned int * a2);
    int Construct(CCINIClass * aP1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a1 = 0, void *a7 = 0, void *a8 = 0);
    void * Init(void ** Block, char a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8);
    wchar_t * GetName(void *a1 = 0);
    static double AbstractClass(...);  // C2597 interim stub
    unsigned int u32_A4;  // 0xA4 (offset-truth)
    unsigned char u32_A5;  // 0xA5 (offset-truth)
    unsigned int u32_A8;  // 0xA8 (offset-truth)
    static double u32_A0(...);  // plateau: C2039/C3861 stub
    static double vfptr(...);  // plateau: C2039/C3861 stub
};

} // namespace gamemd
