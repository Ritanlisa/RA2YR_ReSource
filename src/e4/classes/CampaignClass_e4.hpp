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
    unsigned char vfptr;  // 0x0
    char __pad_1[3];  // 0x1
    int vfptr1;  // 0x4
    int vfptr2;  // 0x8
    unsigned char vfptr3;  // 0xC
    unsigned char q00D;  // 0xD
    unsigned char q00E;  // 0xE
    char __pad_F[1];  // 0xF
    int uniqueId;  // 0x10
    int abstractFlags;  // 0x14
    unsigned int nextArrayIndex;  // 0x18
    unsigned char referenceCount;  // 0x1C
    char __pad_1D[3];  // 0x1D
    int NeedsSaveOrLink;  // 0x20
    int idxCd;  // 0x24
    char scenario[512];  // 0x28
    int finalMovie;  // 0x228
    int description[64];  // 0x22C
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    char SaveProgress();
    CampaignClass(ObjectClass * aP1);
    void ** DTOR(char a2);
    int LoadFromINIList(void *a1 = 0);
    int Seek(TechnoTypeClass * aP0, int * a1, int aP2);
    int StubReturn10();
    int StubReturn928();
    int Write(AbstractTypeClass * aP0, int aP1);
    int ddtor(int a1, unsigned int * a2);
     int LoadFromINI();
    int  GetValue(unsigned int * a2, void *a1 = 0);  // 0x49e4f0
    int  Check(uint16_t a2, void *a1 = 0, void *a3 = 0);  // 0x5cf810
    AbstractClass * * sub_48B0E0(int a2, int a3, size_t Size, int a5);
    void sub_48B1F0();
    CampaignClass * * sub_7B2E50();
};

} // namespace gamemd
