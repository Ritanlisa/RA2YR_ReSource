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
    unsigned int abstractFlags;  // 0x14
    unsigned int nextArrayIndex;  // 0x18
    char referenceCount[4];  // 0x1C
    bool NeedsSaveOrLink;  // 0x20
    char scenario;  // 0x28
    bool q02B;  // 0x2B
    unsigned int u32_2C;  // 0x2C
    unsigned int u32_30;  // 0x30
    unsigned char q031;  // 0x31
    bool needsSave;  // 0x32
    unsigned char q034;  // 0x34
    unsigned int u32_38;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int u32_3C;  // 0x3C
    unsigned int UINameLabel;  // 0x3D
    unsigned int q040;  // 0x40
    unsigned int q044;  // 0x44
    AbstractClass* q048;  // 0x48
    AbstractClass* q04C;  // 0x4C
    unsigned int u32_50;  // 0x50
    AbstractClass* q054;  // 0x54
    AbstractClass* q058;  // 0x58
    CampaignClass* q05C;  // 0x5C
    unsigned int u32_5F;  // 0x5F
    AbstractClass* q060;  // 0x60
    unsigned int u32_64;  // 0x64
    unsigned int q068;  // 0x68
    unsigned int q06C;  // 0x6C
    unsigned char q078;  // 0x78
    unsigned int u32_7C;  // 0x7C
    unsigned int q080;  // 0x80
    int u32_88;  // 0x88
    void* q08C;  // 0x8C
    unsigned int q098;  // 0x98
    unsigned int q0A4;  // 0xA4
    unsigned int q0AC;  // 0xAC
    unsigned int q0B0;  // 0xB0
    unsigned int q0B4;  // 0xB4
    unsigned int q0C4;  // 0xC4
    unsigned int q0D0;  // 0xD0
    unsigned int q0D8;  // 0xD8
    void* q0E0;  // 0xE0
    AbstractClass* q0E4;  // 0xE4
    void* q0F0;  // 0xF0
    void* q0F4;  // 0xF4
    OverlayTypeClass* q0F8;  // 0xF8
    int q100;  // 0x100
    void* q104;  // 0x104
    unsigned int u32_10C;  // 0x10C
    unsigned int q114;  // 0x114
    unsigned int q128;  // 0x128
    unsigned int q12C;  // 0x12C
    unsigned int q130;  // 0x130
    unsigned int q138;  // 0x138
    void* q13C;  // 0x13C
    CampaignClass* q140;  // 0x140
    int q144;  // 0x144
    unsigned int q150;  // 0x150
    unsigned char q154;  // 0x154
    void* q158;  // 0x158
    unsigned int q164;  // 0x164
    unsigned int q168;  // 0x168
    unsigned int q1AC;  // 0x1AC
    unsigned int q1B0;  // 0x1B0
    unsigned char q1EC;  // 0x1EC
    void* q20C;  // 0x20C
    char description[256];  // 0x22C
    unsigned char q258;  // 0x258
    unsigned int q264;  // 0x264
    unsigned char q26C;  // 0x26C
    unsigned int q280;  // 0x280
    void* q2A0;  // 0x2A0
    ObjectClass* q2B4;  // 0x2B4
    unsigned int q300;  // 0x300
    unsigned int q308;  // 0x308
    int q324;  // 0x324
    unsigned int *__pad_0;
// --- flat members (END) ---
    AbstractClass * * SaveProgress();
    CampaignClass(ObjectClass * aP1);
    void ** DTOR(char a2);
    int LoadFromINIList();
    int Seek(TechnoTypeClass * aP0, int * a1, int aP2);
    int StubReturn10();
    int StubReturn928();
    int Write(AbstractTypeClass * aP0, int aP1);
    int ddtor(int a1, unsigned int * a2);
     double LoadFromINI(...);  // C2597 interim stub
    int GetValue(unsigned int *a2);  // 0x49e4f0
    int Check(uint16_t a2);  // 0x5cf810
    AbstractClass * * sub_48B0E0(int a2, int a3, size_t Size, int a5);
    void sub_48B1F0();
    CampaignClass * * sub_7B2E50();
};

} // namespace gamemd
