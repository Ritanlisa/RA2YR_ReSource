// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TagClass;  // fix_fwd_type_supply
struct AnimClass;  // fix_fwd_type_supply
struct Coord;  // fix_fwd_type_supply
struct TimerStruct;  // fix_fwd_type_supply
struct INIClass;  // fix_fwd_type_supply
struct AbstractTypeClass;  // fix_fwd_type_supply
struct ConnectionPointClass;  // fix_fwd_type_supply
struct ParticleSystemClass;  // fix_fwd_type_supply
struct BuildingTypeClass;  // fix_fwd_type_supply
struct FacingStruct;  // fix_fwd_type_supply
struct HouseClass;  // fix_fwd_type_supply
struct MSShapeAnim;  // fix_fwd_type_supply

struct VoxelAnimClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    unsigned int uniqueId;  // 0x10
    unsigned int q011;  // 0x11
    bool IsAllocated;  // 0x13
    unsigned int abstractFlags;  // 0x14
    unsigned int u32_18;  // 0x18
    unsigned int u32_1C;  // 0x1C
    unsigned char needsSave;  // 0x20
    unsigned int q024;  // 0x24
    unsigned int q028;  // 0x28
    bool q02B;  // 0x2B
    unsigned int q02C;  // 0x2C
    ObjectClass* nextObject;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    TagClass* attachedTag;  // 0x34
    unsigned char q035;  // 0x35
    unsigned int q036;  // 0x36
    unsigned int q038;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03C;  // 0x3C
    unsigned int q040;  // 0x40
    unsigned int q044;  // 0x44
    unsigned int q048;  // 0x48
    unsigned int q04C;  // 0x4C
    unsigned int q050;  // 0x50
    unsigned char VoxelAnimClass_field_0x1C[1];  // 0x1C
    unsigned int q054;  // 0x54
    unsigned int q058;  // 0x58
    unsigned int q05C;  // 0x5C
    unsigned int q060;  // 0x60
    int customSound;  // 0x64
    bool bombVisible;  // 0x68
    unsigned int health;  // 0x6C
    int estimatedHealth;  // 0x70
    bool isOnMap;  // 0x74
    unsigned char alignmentPadding75;  // 0x75
    unsigned int spawnStatus;  // 0x78
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
    bool isAliveFlag;  // 0x90
    unsigned char alignmentPadding91;  // 0x91
    bool isInLogic;  // 0x98
    bool isVisible;  // 0x99
    unsigned char alignmentPadding99;  // 0x9A
    char location[4];  // 0x9C
    unsigned int q0A0;  // 0xA0
    unsigned int q0A4;  // 0xA4
    void * q0AC;  // 0xAC
    unsigned int u32_B0;  // 0xB0
    unsigned int q0B4;  // 0xB4
    unsigned int u32_BC;  // 0xBC
    unsigned int q0C4;  // 0xC4
    unsigned int u32_C8;  // 0xC8
    unsigned int q0D0;  // 0xD0
    unsigned int q0D8;  // 0xD8
    unsigned int q0E0;  // 0xE0
    unsigned int q0E4;  // 0xE4
    unsigned int q0F0;  // 0xF0
    unsigned int q0F4;  // 0xF4
    unsigned int q0F8;  // 0xF8
    unsigned int q100;  // 0x100
    void* q104;  // 0x104
    unsigned char alignmentPadding69;  // 0x105
    AbstractClass* q10C;  // 0x10C
    AudioController* q114;  // 0x114
    AudioController* q128;  // 0x128
    unsigned int q12C;  // 0x12C
    unsigned int q130;  // 0x130
    unsigned int q138;  // 0x138
    unsigned int q13C;  // 0x13C
    Coord* q140;  // 0x140
    unsigned int q144;  // 0x144
    unsigned char q148;  // 0x148
    unsigned int u32_14C;  // 0x14C
    unsigned int q150;  // 0x150
    unsigned char q154;  // 0x154
    void* q158;  // 0x158
    unsigned int q164;  // 0x164
    unsigned int q168;  // 0x168
    bool q17B;  // 0x17B
    unsigned int u32_1A0;  // 0x1A0
    unsigned int u32_1A4;  // 0x1A4
    unsigned int u32_1A8;  // 0x1A8
    unsigned int q1AC;  // 0x1AC
    unsigned int q1B0;  // 0x1B0
    void* q1D0;  // 0x1D0
    unsigned int Audio4;  // 0x1D4 (ml name; ml size=192 yrpp decl-order, flat carrier 4B compile vehicle)
    unsigned char q1D8;  // 0x1D8
    unsigned char q1EC;  // 0x1EC
    unsigned int u32_1F0;  // 0x1F0
    unsigned int u32_1F4;  // 0x1F4
    unsigned int u32_1F8;  // 0x1F8
    unsigned char u8_1FC;  // 0x1FC
    unsigned char u8_1FD;  // 0x1FD
    unsigned int q200;  // 0x200
    unsigned int q204;  // 0x204
    void* q20C;  // 0x20C
    unsigned char q258;  // 0x258
    AbstractClass* q264;  // 0x264
    unsigned char q26C;  // 0x26C
    unsigned int q280;  // 0x280
    void* q2A0;  // 0x2A0
    ObjectClass* q2B4;  // 0x2B4
    void* q2E4;  // 0x2E4
    unsigned int q300;  // 0x300
    unsigned int q308;  // 0x308
    unsigned int Duration;  // 0x320
    ParticleSystemClass * q324;  // 0x324
    BuildingTypeClass* q33C;  // 0x33C
    unsigned char q340;  // 0x340
    unsigned int q520;  // 0x520
    unsigned char q5B8;  // 0x5B8
    unsigned char q698;  // 0x698
    void* q7B0;  // 0x7B0
    void* qBC0;  // 0xBC0
    unsigned int VoxelAnimClass_field_0x0;
    unsigned int VoxelAnimClass_field_0x104;
    unsigned int VoxelAnimClass_field_0x108;
    unsigned int VoxelAnimClass_field_0x10C;
    unsigned int VoxelAnimClass_field_0x114;
    unsigned int VoxelAnimClass_field_0x128;
    unsigned int *VoxelAnimClass_field_0x4;
    unsigned int VoxelAnimClass_field_0x8;
    unsigned int *__pad_12C;
    unsigned int *__pad_98;
    unsigned int *__pad_C;
    unsigned int VoxelAnimClass_field_0x140;
    unsigned int *__pad_110;
    unsigned int Undeploy;
// --- flat members (END) ---
    AbstractClass * * GetFrameCount(int * a2);
    Coord * * ProcessAnim(int * a2, unsigned int * a3);
    VoxelAnimClass * DrawVoxel(char a2);
    char UpdateMatrix();
    float * QuaternionToMatrix(float * a2, void *a2_2);
    int CleanupMembers(void *a1);
    int Constructor(int a2, int *a3, int a4, void *a5, unsigned int *a6, int a7);
    int DrawVoxelFrame(int a2, int a3, int a4);
    int LoadFrame();
    int Reset(void *a1, void *a2);
    int SaveLoad_Prefix(ObjectClass * aP1, int aP1a);
    int SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2);
    int StubReturn3();
    int StubReturn328();
    int StubReturn41();
    int StubReturnFalse(int a1);
    int ddtor(int a1, unsigned int * a2);
    unsigned int ProcessFrame();
    int VoxelAnimClass_Update();
    int Constructor(void *a1, void *a2, void *a3, void *a4, void *a5);
    VoxelAnimClass * DrawVoxel(void * Block, char a2);
};

} // namespace gamemd
