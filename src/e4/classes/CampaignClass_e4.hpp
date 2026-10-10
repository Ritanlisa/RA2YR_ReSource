// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct OverlayTypeClass;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct AbstractTypeClass;  // fix_fwd_type_supply
struct ConnectionPointClass;  // fix_fwd_type_supply
struct Coord;  // fix_fwd_type_supply

struct CampaignClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    void* uniqueId;  // 0x10
    unsigned char alignmentPadding_3;  // 0x11
    char description_128[4];  // 0x12
    unsigned int abstractFlags;  // 0x14
    unsigned int nextArrayIndex;  // 0x18
    char referenceCount[4];  // 0x1C
    bool NeedsSaveOrLink;  // 0x20
    char idxCd[4];  // 0x24
    char scenario;  // 0x28
    bool needsSave;  // 0x32
    unsigned int UINameLabel;  // 0x3D
    unsigned int tail_95;  // 0x95
    char finalMovie[4];  // 0x228
    char description[256];  // 0x22C
// --- flat members (END) ---
    AbstractClass * * SaveProgress();
    CampaignClass(ObjectClass * aP1);
    void ** DTOR(char a2);
    int LoadFromINIList(void *a1 = 0);
    int Seek(TechnoTypeClass * aP0, int * a1, int aP2);
    int StubReturn10();
    int StubReturn928();
    int Write(AbstractTypeClass * aP0, int aP1);
    int ddtor(int a1, unsigned int * a2);
     int LoadFromINI(void *a1 = 0, void *a2 = 0);
    int  GetValue(unsigned int * a2, void *a1 = 0);  // 0x49e4f0
    int  Check(uint16_t a2, void *a1 = 0, void *a3 = 0);  // 0x5cf810
    AbstractClass * * sub_48B0E0(int a2, int a3, size_t Size, int a5);
    void sub_48B1F0();
    CampaignClass * * sub_7B2E50();
    unsigned int *q000;  // 0x0 (offset-truth)
    static double AbstractClass(...);  // plateau: C2039/C3861 stub
    static double q044(...);  // plateau: C2039/C3861 stub
    static double vfptr(...);  // plateau: C2039/C3861 stub
};

} // namespace gamemd
