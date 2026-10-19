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
    void* AnimClass_field_0x0;  // 0x0
    int AnimClass_field_0x4;  // 0x4
    void* ptr_8;  // 0x8
    unsigned int q00C;  // 0xC
    unsigned int __pad_010;  // 0x10
    int AnimClass_field_0x14;  // 0x14
    char __pad_18[3];  // 0x18
    unsigned char u32_1B;  // 0x1B
    char __pad_1C[8];  // 0x1C
    int AnimClass_field_0x24;  // 0x24
    char __pad_28[8];  // 0x28
    int AnimClass_field_0x30;  // 0x30
    char __pad_34[3];  // 0x34
    unsigned char __pad_037;  // 0x37
    int AnimClass_field_0x38;  // 0x38
    char __pad_3C[4];  // 0x3C
    int AnimClass_field_0x40;  // 0x40
    char __pad_44[20];  // 0x44
    int AnimClass_field_0x58;  // 0x58
    char __pad_5C[8];  // 0x5C
    int AnimClass_field_0x64;  // 0x64
    char __pad_68[4];  // 0x68
    int AnimClass_field_0x6C;  // 0x6C
    int estimatedHealth;  // 0x70
    bool isOnMap;  // 0x74
    unsigned char alignmentPadding75;  // 0x75
    char __pad_76[2];  // 0x76
    int AnimClass_field_0x78;  // 0x78
    unsigned int visibilityFlags;  // 0x7C
    unsigned char __pad_080;  // 0x80
    char __pad_81[1];  // 0x81
    bool inOpenToppedTransport;  // 0x82
    bool isSelected;  // 0x83
    bool hasParachute;  // 0x84
    unsigned char alignmentPadding85;  // 0x85
    char __pad_86[2];  // 0x86
    AnimClass* parachute;  // 0x88
    unsigned char __pad_08C;  // 0x8C
    bool isFallingDown;  // 0x8D
    bool wasFallingDown;  // 0x8E
    bool isBomb;  // 0x8F
    char __pad_90[1];  // 0x90
    unsigned char alignmentPadding91;  // 0x91
    char __pad_92[2];  // 0x92
    unsigned int lastLayer;  // 0x94
    unsigned char __pad_098;  // 0x98
    bool isVisible;  // 0x99
    unsigned char alignmentPadding99;  // 0x9A
    char __pad_9B[1];  // 0x9B
    int AnimClass_field_0x9C;  // 0x9C
    char __pad_A0[4];  // 0xA0
    CampaignClass* AnimClass_field_0xA4;  // 0xA4
    unsigned char __pad_A8[4];  // 0xA8
    IUnknown* AnimClass_field_0xAC;  // 0xAC
    char __pad_B0[4];  // 0xB0
    IUnknown* AnimClass_field_0xB4;  // 0xB4
    int AnimClass_field_0xB8;  // 0xB8
    IUnknown* AnimClass_field_0xBC;  // 0xBC
    CellStruct* AnimClass_field_0xC0;  // 0xC0
    char __pad_C4[4];  // 0xC4
    Coord * AnimClass_field_0xC8;  // 0xC8
    int AnimClass_field_0xCC;  // 0xCC
    int AnimClass_field_0xD0;  // 0xD0
    IUnknown* AnimClass_field_0xD4;  // 0xD4
    char __pad_D8[4];  // 0xD8
    unsigned int PaletteName;  // 0xDC
    unsigned char __pad_0E0;  // 0xE0
    char __pad_E1[23];  // 0xE1
    unsigned int TintColor;  // 0xF8
    unsigned int AnimClass_field_0xFC;  // 0xFC
    float AnimClass_field_0x100;  // 0x100
    int AnimClass_field_0x104;  // 0x104
    int AnimClass_field_0x108;  // 0x108
    char __pad_10C[4];  // 0x10C
    unsigned int IsBuildingAnim;  // 0x110
    int AnimClass_field_0x114;  // 0x114
    int __pad_118;  // 0x118
    int AnimClass_field_0x11C;  // 0x11C
    unsigned char __pad_120[20];  // 0x120
    char __pad_134[62];  // 0x134
    unsigned char Animation;  // 0x172
    char __pad_173[1];  // 0x173
    int AnimClass_field_0x174;  // 0x174
    int __pad_178;  // 0x178
    int AnimClass_field_0x17C;  // 0x17C
    int AnimClass_field_0x180;  // 0x180
    int AnimClass_field_0x184;  // 0x184
    int AnimClass_field_0x188;  // 0x188
    char __pad_18C[4];  // 0x18C
    int AnimClass_field_0x190;  // 0x190
    unsigned int __pad_194;  // 0x194
    char __pad_198[1];  // 0x198
    unsigned char q199;  // 0x199
    char __pad_19A[6];  // 0x19A
    void * AnimClass_field_0x1A0;  // 0x1A0
    char __pad_1A4[16];  // 0x1A4
    void * AnimClass_field_0x1B4;  // 0x1B4
    unsigned char __pad_1B8[77];  // 0x1B8
    char __pad_205[13];  // 0x205
    unsigned char LightConvert;  // 0x212
    char __pad_213[3];  // 0x213
    unsigned char __pad_216;  // 0x216
    char __pad_217[5];  // 0x217
    int AnimClass_field_0x21C;  // 0x21C
    char __pad_220[50];  // 0x220
    unsigned char ZAdjust;  // 0x252
    char __pad_253[3];  // 0x253
    unsigned char YSortAdjust;  // 0x256
    char __pad_257[3];  // 0x257
    unsigned char __pad_25A;  // 0x25A
    char __pad_25B[5];  // 0x25B
    unsigned int FlamingGuyCoords;  // 0x260
    unsigned char __pad_264;  // 0x264
    char __pad_265[17];  // 0x265
    unsigned char PausedAnimFrame;  // 0x276
    char __pad_277[3];  // 0x277
    unsigned char __pad_27A;  // 0x27A
    char __pad_27B[25];  // 0x27B
    int AnimClass_field_0x294;  // 0x294
    char __pad_298[24];  // 0x298
    int AnimClass_field_0x2B0;  // 0x2B0
    char __pad_2B4[12];  // 0x2B4
    int AnimClass_field_0x2C0;  // 0x2C0
    char __pad_2C4[32];  // 0x2C4
    int AnimClass_field_0x2E4;  // 0x2E4
    int AnimClass_field_0x2E8;  // 0x2E8
    char __pad_2EC[16];  // 0x2EC
    int AnimClass_field_0x2FC;  // 0x2FC
    int AnimClass_field_0x300;  // 0x300
    char __pad_304[4];  // 0x304
    int AnimClass_field_0x308;  // 0x308
    int AnimClass_field_0x30C;  // 0x30C
    char __pad_310[52];  // 0x310
    int AnimClass_field_0x344;  // 0x344
    char __pad_348[21];  // 0x348
    char AnimClass_field_0x35D[4];  // 0x35D
    char __pad_361[167];  // 0x361
    int AnimClass_field_0x408;  // 0x408
    char __pad_40C[4];  // 0x40C
    unsigned int u32_410;  // 0x410
    char __pad_414[4];  // 0x414
    int AnimClass_field_0x418;  // 0x418
    char __pad_41C[60];  // 0x41C
    DynamicVectorClass * ptr_458;  // 0x458
    unsigned char __pad_45C;  // 0x45C
    char __pad_45D[439];  // 0x45D
    LightSourceClass * ptr_614;  // 0x614
    unsigned char __pad_618;  // 0x618
    char __pad_619[139];  // 0x619
    int AnimClass_field_0x6A4;  // 0x6A4
    char __pad_6A8[1308];  // 0x6A8
    int AnimClass_field_0xBC4;  // 0xBC4
    char __pad_BC8[262];  // 0xBC8
    char AnimClass_field_0xCCE[4];  // 0xCCE
    char __pad_CD2[194];  // 0xCD2
    uint8_t u8_D94;  // 0xD94
    char __pad_D95[215];  // 0xD95
    int AnimClass_field_0xE6C;  // 0xE6C
    char __pad_E70[1612];  // 0xE70
    int AnimClass_field_0x14BC;  // 0x14BC
    char __pad_14C0[148];  // 0x14C0
    int AnimClass_field_0x1554;  // 0x1554
    int AnimClass_field_0x1558;  // 0x1558
    char __pad_155C[8];  // 0x155C
    int AnimClass_field_0x1564;  // 0x1564
    char __pad_1568[341];  // 0x1568
    char AnimClass_field_0x16BD[4];  // 0x16BD
    char __pad_16C1[6];  // 0x16C1
    char AnimClass_field_0x16C7[4];  // 0x16C7
    char AnimClass_field_0x16CB[4];  // 0x16CB
    char __pad_16CF[177];  // 0x16CF
    int AnimClass_field_0x1780;  // 0x1780
    char __pad_1784[288];  // 0x1784
    int AnimClass_field_0x18A4;  // 0x18A4
    char __pad_18A8[8];  // 0x18A8
    int AnimClass_field_0x18B0;  // 0x18B0
// --- flat members (BEGIN) ---
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
#else
#endif  // X27: template-carrier universe fallback
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
    void Render(ConvertClass * a2, ConvertClass * aP5, void *a3 = 0, void *a4 = 0);
    static int SetField95(BuildingClass * aP1, int a2);
    void **  ctor(void * a2, int * a3, void * a4, int a5, void * a6, void * a7, char a8, void *a1 = 0);  // 0x421ea0
    AnimClass * * ComputePosition(int *aP1);
    int ReleaseBuffers();
};

} // namespace gamemd
