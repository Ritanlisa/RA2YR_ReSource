// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct SideClass {
    void * ptr_0;  // 0x0
    void * ptr_4;  // 0x4
    void * ptr_8;  // 0x8
    void * ptr_C;  // 0xC
    int uniqueId;  // 0x10
    unsigned int abstractFlags;  // 0x14
    unsigned int nextArrayIndex;  // 0x18
    char referenceCount[4];  // 0x1C
    int NeedsSaveOrLink;  // 0x20
    int id[6];  // 0x24
    unsigned char m_zero_3C;  // 0x3C
    char uiNameLabel[32];  // 0x3D
    unsigned char __pad_05D;  // 0x5D
    char __pad_5E[2];  // 0x5E
    unsigned int uiName;  // 0x60
    char name[49];  // 0x64
    unsigned char tail_95;  // 0x95
    char __pad_96[2];  // 0x96
    int * houseTypes_d;  // 0x98
    void * houseTypesCount_d;  // 0x9C
    unsigned int q0A0;  // 0xA0
    unsigned char q0A4;  // 0xA4
    unsigned char u8_A5;  // 0xA5
    char __pad_A6[2];  // 0xA6
    unsigned int u32_A8;  // 0xA8
    unsigned int u32_AC;  // 0xAC
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int FindByName(void *a1);
    int GetCountry(int * a2);
    int LoadAllFromINI(CCINIClass * aP0);
    int SaveLoad_Prefix(unsigned int * a0, AbstractTypeClass * aP1);
    int SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2);
    int StubReturn180();
    int StubReturn28();
    int ddtor(int a1, unsigned int * a2);
    int Construct(SideClass * aP1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7 = 0, void *a8 = 0, void *a9 = 0);
    void * Init(void ** Block, char a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8);
    wchar_t * GetName(void *a1 = 0);
};

} // namespace gamemd
