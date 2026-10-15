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
    unsigned int u32_3;  // 0x3
    unsigned int u32_2;  // 0x2
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
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
    DynamicVectorClass * ptr_458;  // 0x458
#else
    void* ptr_458;  // 0x458  // X27: template-carrier
#endif  // X27: template-carrier universe fallback
    LightSourceClass * ptr_614;  // 0x614
// --- flat members (END) ---
    Coord *AnimClass_field_0xC8;  // G42.33: raw type Coord* ([2].__pad_C sites)
    void *unnamed_66;  // G42.33 supply (vtable id)
    CampaignClass* AnimClass_field_0xA4;  // G42.33 supply (+0xA4) [X30:type_map]
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
    void Render(ConvertClass * a2, ConvertClass * aP5, void *a3 = 0, void *a4 = 0);
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
    unsigned int u32_CA;  // 0xCA
    int __pad_010;  // 0x10 [X30:type_map]
    unsigned char __pad_037;  // 0x37 [X30:canon]
    unsigned char __pad_079;  // 0x79 [X30:canon]
    unsigned char __pad_080;  // 0x80 [X30:canon]
    unsigned char __pad_08C;  // 0x8C [X30:canon]
    unsigned char __pad_098;  // 0x98 [X30:canon]
    unsigned char __pad_09E;  // 0x9E [X30:canon]
    unsigned char __pad_0E0;  // 0xE0 [X30:canon]
    unsigned char __pad_109;  // 0x109 [X30:canon]
    unsigned char __pad_117;  // 0x117 [X30:canon]
    unsigned char __pad_176;  // 0x176 [X30:canon]
    unsigned char __pad_216;  // 0x216 [X30:canon]
    unsigned char __pad_25A;  // 0x25A [X30:canon]
    unsigned char __pad_264;  // 0x264 [X30:canon]
    unsigned char __pad_27A;  // 0x27A [X30:canon]
    unsigned char __pad_45C;  // 0x45C [X30:canon]
    unsigned char __pad_618;  // 0x618 [X30:canon]
    int AnimClass_field_0x0;  // 0x0 [X30:type_map]
    float AnimClass_field_0x100;  // 0x100 [X30:type_map]
    int AnimClass_field_0x190;  // 0x190 [X30:type_map]
    int AnimClass_field_0x4;  // 0x4 [X30:type_map]
    int AnimClass_field_0xCC;  // 0xCC [X30:type_map]
    unsigned int AudioController_1A0;  // [X30:default]
    unsigned int AudioController_1B4;  // [X30:default]
    unsigned int Coord_9C;  // [X30:default]
    unsigned int SuperClass_19D;  // [X30:default]
    int __pad_118;  // 0x118 [X30:type_map]
    int __pad_178;  // 0x178 [X30:type_map]
    int __pad_194;  // 0x194 [X30:type_map]
    char __pad_A0[4];  // 0xA0 [X30:member_lookup]
    int __pad_C;  // 0xC [X30:type_map]
    unsigned int ambientSoundController;  // [X30:default]
    unsigned int needsRedraw;  // [X30:default]
    unsigned int objectTypeFlags;  // [X30:default]
    uint8_t u8_D94;  // 0xD94 [X30:member_lookup]
    unsigned int uniqueId;  // [X30:default]
};

} // namespace gamemd
