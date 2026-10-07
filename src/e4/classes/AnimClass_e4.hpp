// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct WinModemClass;  // fix_fwd_type_supply
struct CampaignClass;  // fix_fwd_type_supply
struct Coord;  // fix_fwd_type_supply
struct INIClass;  // fix_fwd_type_supply
struct AbstractTypeClass;  // fix_fwd_type_supply
struct ConnectionPointClass;  // fix_fwd_type_supply
struct ParticleSystemClass;  // fix_fwd_type_supply
struct BuildingTypeClass;  // fix_fwd_type_supply
struct HouseClass;  // fix_fwd_type_supply
struct MSShapeAnim;  // fix_fwd_type_supply
struct LightSourceClass;  // fix_fwd_type_supply
struct Tactical;  // fix_fwd_type_supply
struct ObjectTypeClass;  // fix_fwd_type_supply
struct WeaponTypeClass;  // fix_fwd_type_supply
struct Color;  // fix_fwd_type_supply

struct AnimClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    unsigned int q010;  // 0x10
    unsigned int q011;  // 0x11
    bool IsAllocated;  // 0x13
    WinModemClass* q014;  // 0x14
    unsigned int q018;  // 0x18
    unsigned int u32_1B;  // 0x1B
    unsigned int q01C;  // 0x1C
    unsigned int q020;  // 0x20
    void* q024;  // 0x24
    unsigned int q028;  // 0x28
    unsigned int q02C;  // 0x2C
    unsigned int u32_30;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    unsigned int u32_34;  // 0x34
    WinModemClass* q038;  // 0x38
    unsigned int q03C;  // 0x3C
    unsigned int u32_40;  // 0x40
    unsigned int q044;  // 0x44
    unsigned int q048;  // 0x48
    unsigned int q04C;  // 0x4C
    unsigned int q050;  // 0x50
    unsigned int q054;  // 0x54
    WinModemClass* q058;  // 0x58
    unsigned int q05C;  // 0x5C
    unsigned int q060;  // 0x60
    unsigned int q064;  // 0x64
    unsigned int q068;  // 0x68
    void* q06C;  // 0x6C
    unsigned int estimatedHealth;  // 0x70
    bool isOnMap;  // 0x74
    unsigned char alignmentPadding75;  // 0x75
    void* q078;  // 0x78
    unsigned int visibilityFlags;  // 0x7C
    unsigned int q080;  // 0x80
    bool inOpenToppedTransport;  // 0x82
    bool hasParachute;  // 0x84
    unsigned char alignmentPadding85;  // 0x85
    AnimClass* parachute;  // 0x88
    unsigned int q08A;  // 0x8A
    unsigned int q08B;  // 0x8B
    void* q08C;  // 0x8C
    bool isFallingDown;  // 0x8D
    bool wasFallingDown;  // 0x8E
    unsigned int q090;  // 0x90
    unsigned char alignmentPadding91;  // 0x91
    unsigned int lastLayer;  // 0x94
    bool isVisible;  // 0x99
    unsigned char alignmentPadding99;  // 0x9A
    unsigned int q0A0;  // 0xA0
    CampaignClass* q0A4;  // 0xA4
    void* q0AC;  // 0xAC
    unsigned int q0B0;  // 0xB0
    void* q0B4;  // 0xB4
    unsigned int q0C4;  // 0xC4
    unsigned int q0D0;  // 0xD0
    unsigned int q0D8;  // 0xD8
    unsigned int q0E0;  // 0xE0
    unsigned int q0E4;  // 0xE4
    unsigned int q0F0;  // 0xF0
    unsigned int q0F4;  // 0xF4
    void* q100;  // 0x100
    void* q104;  // 0x104
    unsigned char alignmentPadding69;  // 0x105
    unsigned int q10C;  // 0x10C
    void* q114;  // 0x114
    unsigned int q128;  // 0x128
    unsigned int q12C;  // 0x12C
    unsigned int q130;  // 0x130
    unsigned int q138;  // 0x138
    unsigned int q13C;  // 0x13C
    unsigned int q140;  // 0x140
    unsigned int q144;  // 0x144
    unsigned int q150;  // 0x150
    unsigned char q154;  // 0x154
    unsigned int q164;  // 0x164
    unsigned int q168;  // 0x168
    unsigned int Animation;  // 0x172
    bool q17B;  // 0x17B
    unsigned char __pad_18C[1049];  // 0x18C
    unsigned int q19C;  // 0x19C
    unsigned int u32_1A0;  // 0x1A0
    unsigned int q1AC;  // 0x1AC
    unsigned int q1B0;  // 0x1B0
    unsigned char q1EC;  // 0x1EC
    void* q20C;  // 0x20C
    unsigned int ZAdjust;  // 0x252
    unsigned int YSortAdjust;  // 0x256
    unsigned char q258;  // 0x258
    unsigned int q264;  // 0x264
    unsigned char q26C;  // 0x26C
    unsigned int q280;  // 0x280
    void* q2A0;  // 0x2A0
    unsigned char q2B4;  // 0x2B4
    void* q2E4;  // 0x2E4
    void* q300;  // 0x300
    Coord* q308;  // 0x308
    ParticleSystemClass * q324;  // 0x324
    BuildingTypeClass* q33C;  // 0x33C
    unsigned char q340;  // 0x340
    void * q520;  // 0x520
    unsigned char q5B8;  // 0x5B8
    unsigned char q698;  // 0x698
    void* q7B0;  // 0x7B0
    void* qBC0;  // 0xBC0
    void* qBF0;  // 0xBF0
    unsigned char qE08;  // 0xE08
    unsigned char q14E4;  // 0x14E4
    void* q14EC;  // 0x14EC
    void* q14F4;  // 0x14F4
    unsigned int AnimClass_field_0x0;
    unsigned int AnimClass_field_0x100;
    unsigned int AnimClass_field_0x190;
    unsigned int AnimClass_field_0xAC;
    unsigned int AnimClass_field_0xB4;
    unsigned int AnimClass_field_0xBC;
    unsigned int AnimClass_field_0xC0;
    Coord *AnimClass_field_0xC8;  // G42.33: raw type Coord* ([2].__pad_C sites)
    unsigned int *__pad_118;
    unsigned int *__pad_194;
    unsigned int AnimClass_field_0xD4;
    unsigned int *__pad_178;
    unsigned int *AnimClass_field_0xFC;
    unsigned int *__pad_C;
    unsigned int AnimClass_field_0x4;  // G42.33 supply (vtable id)
    unsigned int AnimClass_field_0x8;  // G42.33 supply
    unsigned int AnimClass_field_0x9C;  // G42.33 supply
    unsigned int AnimClass_field_0xA4;  // G42.33 supply (+0xA4)
    unsigned char *AnimClass_field_0xCC;  // G42.33 supply
    void *AnimClass_field_0x1A0;  // G42.33 supply (Mixer)
    void *AnimClass_field_0x1B4;  // G42.33 supply (Mixer)
    unsigned char AnimClass_field_0x35D[3];  // G42.33 supply (+0x35D..0x35F)
    unsigned int *__pad_A0;  // G42.33 supply
    unsigned char __pad_A8[4];  // G42.33 supply (+0xA8)
    unsigned char __pad_120[20];  // G42.33 supply (+0x120..0x130)
    unsigned char __pad_1B8[77];  // G42.33 supply (+0x1B8..0x200)
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
// --- flat members (END) ---
    BuildingTypeClass * * drawFrame(void *a1);
    char * sub_4C68E0(int a2, int a3, IUnknown * aP3, IUnknown * aP4, int a6, char a7, int a8, char a9, int a10, int a11);
    char ProcessAreaEffect(AnimClass * a1);
    char sub_773590(int a2, int a3);
    int * CheckMirrorFlags(int a1);
    int InWhichLayer_AttachedObjectLayer();
    int MissionStubReturnZero();
    int MissionStubReturnZero2(int a1, unsigned int * a2);
    int ProcessFrame();
    int SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2);
    int Destruct(AnimClass * a2, void *a2_2);
    void FreeRenderBuffer(void *a1);
    void Render(ConvertClass * a2, ConvertClass * aP5);
    static int SetField95(BuildingClass * aP1, int a2);  // G57w10-S raw 0x424C90 (was C2597 interim stub)
    void ** ctor(void *a2, int *a3, void *a4, int a5, void *a6, void *a7, char a8);  // 0x421ea0
    AnimClass * * ComputePosition(int *aP1);
    int ReleaseBuffers();
};

} // namespace gamemd
