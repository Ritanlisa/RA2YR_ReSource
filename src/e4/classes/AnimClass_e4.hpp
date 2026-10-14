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
    bool IsAllocated;  // 0x13
    unsigned int alignmentPadding;  // 0x33
    char estimatedHealth[4];  // 0x70
    bool isOnMap;  // 0x74
    unsigned char alignmentPadding75;  // 0x75
    unsigned int visibilityFlags;  // 0x7C
    bool inOpenToppedTransport;  // 0x82
    bool isSelected;  // 0x83
    bool hasParachute;  // 0x84
    unsigned char alignmentPadding85;  // 0x85
    AnimClass* parachute;  // 0x88
    bool isFallingDown;  // 0x8D
    bool wasFallingDown;  // 0x8E
    bool isBomb;  // 0x8F
    unsigned char alignmentPadding91;  // 0x91
    unsigned int lastLayer;  // 0x94
    bool isVisible;  // 0x99
    unsigned char alignmentPadding99;  // 0x9A
    unsigned int PaletteName;  // 0xDC
    unsigned int TintColor;  // 0xF8
    unsigned char alignmentPadding69;  // 0x105
    unsigned int IsBuildingAnim;  // 0x110
    unsigned int UnderTemporal;  // 0x111
    unsigned int Paused;  // 0x112
    unsigned int Unpaused;  // 0x113
    unsigned int Animation;  // 0x172
    unsigned int LightConvert;  // 0x212
    unsigned int ZAdjust;  // 0x252
    unsigned int YSortAdjust;  // 0x256
    unsigned int FlamingGuyCoords;  // 0x260
    unsigned int PausedAnimFrame;  // 0x276
    DynamicVectorClass * ptr_458;  // 0x458
    LightSourceClass * ptr_614;  // 0x614
// --- flat members (END) ---
    Coord *AnimClass_field_0xC8;  // G42.33: raw type Coord* ([2].__pad_C sites)
    void *unnamed_66;  // G42.33 supply (vtable id)
    unsigned int AnimClass_field_0xA4;  // G42.33 supply (+0xA4)
    void *AnimClass_field_0x1A0;  // G42.33 supply (Mixer)
    void *AnimClass_field_0x1B4;  // G42.33 supply (Mixer)
    unsigned char AnimClass_field_0x35D[3];  // G42.33 supply (+0x35D..0x35F)
    unsigned char __pad_A8[4];  // G42.33 supply (+0xA8)
    unsigned char __pad_120[20];  // G42.33 supply (+0x120..0x130)
    unsigned char __pad_1B8[77];  // G42.33 supply (+0x1B8..0x200)
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
    void Render(ConvertClass * a2, ConvertClass * aP5, void *a1 = 0, void *a3 = 0);
    static int SetField95(BuildingClass * aP1, int a2);
    void **  ctor(void * a2, int * a3, void * a4, int a5, void * a6, void * a7, char a8, void *a1 = 0);  // 0x421ea0
    AnimClass * * ComputePosition(int *aP1);
    int ReleaseBuffers();
    unsigned int q00C;  // 0xC (offset-truth)

    IUnknown* AnimClass_field_0xAC;  // X10 supply (member_types)
    IUnknown* AnimClass_field_0xB4;  // X10 supply (member_types)
    IUnknown* AnimClass_field_0xBC;  // X10 supply (member_types)
    CellStruct* AnimClass_field_0xC0;  // X10 supply (member_types)
    IUnknown* AnimClass_field_0xD4;  // X10 supply (member_types)
    unsigned int AnimClass_field_0xFC;  // X10 supply (member_types)
    unsigned char __pad_017;  // X10 supply (csp_canon_members)
    unsigned int q130;  // X10 supply (member_lookup)
    unsigned int q199;  // X10 supply (member_lookup)
    unsigned int u32_16;  // X10 supply (member_lookup)
    unsigned int u32_1B;  // X10 supply (member_lookup)
    unsigned int u32_1F4;  // X10 supply (member_lookup)
    unsigned int u32_410;  // X10 supply (member_lookup)
    unsigned int u32_7;  // X10 supply (member_lookup)
    unsigned int u32_D;  // X10 supply (member_lookup)
    unsigned int u32_E;  // X10 supply (member_lookup)

    unsigned char __pad_0FC;  // X10 supply (csp_canon_members)
    unsigned int q119;  // X10 supply (member_lookup)
    unsigned int q196;  // X10 supply (member_lookup)
};

} // namespace gamemd
