// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct SideClass {
// --- flat members (BEGIN) ---
struct ObjectClass;  // fix_fwd_type_supply
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    char uniqueId[4];  // 0x10
    unsigned char alignmentPadding_3;  // 0x11
    void* houseTypes;  // 0x12
    bool IsAllocated;  // 0x13
    unsigned int abstractFlags;  // 0x14
    unsigned int houseTypesCount;  // 0x16
    unsigned int nextArrayIndex;  // 0x18
    unsigned int q01A;  // 0x1A
    char referenceCount[4];  // 0x1C
    bool q01D;  // 0x1D
    bool NeedsSaveOrLink;  // 0x20
    char id;  // 0x24
    unsigned int q028;  // 0x28
    bool q02B;  // 0x2B
    unsigned int q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q031;  // 0x31
    bool needsSave;  // 0x32
    unsigned char q034;  // 0x34
    unsigned int q038;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    unsigned char m_zero_3C;  // 0x3C
    char uiNameLabel;  // 0x3D
    unsigned int u32_40;  // 0x40
    bool q042;  // 0x42
    unsigned int q044;  // 0x44
    unsigned int q048;  // 0x48
    bool q04A;  // 0x4A
    unsigned int q04C;  // 0x4C
    unsigned char q04F;  // 0x4F
    unsigned int q050;  // 0x50
    unsigned int q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q05C;  // 0x5C
    unsigned char q05D;  // 0x5D
    unsigned int uiName;  // 0x60
    char name;  // 0x64
    unsigned int q068;  // 0x68
    ObjectClass* q06C;  // 0x6C
    unsigned char q070;  // 0x70
    bool q074;  // 0x74
    unsigned char q078;  // 0x78
    void* q07C;  // 0x7C
    unsigned int q080;  // 0x80
    unsigned int q084;  // 0x84
    void* q088;  // 0x88
    void* q08C;  // 0x8C
    unsigned char q090;  // 0x90
    unsigned int q094;  // 0x94
    unsigned int tail_95;  // 0x95
    void* q098;  // 0x98
    char q09C[4];  // 0x9C
    unsigned int AbstractClass;
    unsigned int u32_A4;
    unsigned int u32_A5;
    unsigned int u32_A8;
// --- flat members (END) ---
    int FindByName(void *a1);
    int GetCountry(int * a2);
    int LoadAllFromINI(CCINIClass * aP0);
    int SaveLoad_Prefix(unsigned int * a0, AbstractTypeClass * aP1);
    int SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2);
    int StubReturn180();
    int StubReturn28();
    int ddtor(int a1, unsigned int * a2);
    int Construct(CCINIClass * aP1, void *a2, void *a3, void *a4, void *a5, void *a6);
    void * Init(void ** Block, char a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8);
    wchar_t * GetName();
    static double AbstractClass(...);  // C2597 interim stub
};

} // namespace gamemd
