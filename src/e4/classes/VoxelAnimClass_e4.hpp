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
    unsigned int VoxelAnimClass_field_0x0;  // 0x0
    void * ptr_4;  // 0x4
    void * ptr_8;  // 0x8
    void * ptr_C;  // 0xC
    unsigned int uniqueId;  // 0x10
    unsigned int abstractFlags;  // 0x14
    unsigned char __pad_018;  // 0x18
    char __pad_19[3];  // 0x19
    int u32_1C;  // 0x1C
    unsigned char needsSave;  // 0x20
    char __pad_21[3];  // 0x21
    unsigned char __pad_024;  // 0x24
    char __pad_25[11];  // 0x25
    ObjectClass * nextObject;  // 0x30
    TagClass * attachedTag;  // 0x34
    unsigned char __pad_038;  // 0x38
    char __pad_39[43];  // 0x39
    int customSound;  // 0x64
    bool bombVisible;  // 0x68
    char __pad_69[3];  // 0x69
    char health[4];  // 0x6C
    int estimatedHealth;  // 0x70
    bool isOnMap;  // 0x74
    unsigned char alignmentPadding75;  // 0x75
    char __pad_76[2];  // 0x76
    unsigned int spawnStatus;  // 0x78
    unsigned int visibilityFlags;  // 0x7C
    unsigned char __pad_080;  // 0x80
    char __pad_81[1];  // 0x81
    bool inOpenToppedTransport;  // 0x82
    bool isSelected;  // 0x83
    bool hasParachute;  // 0x84
    unsigned char alignmentPadding85;  // 0x85
    char __pad_86[2];  // 0x86
    AnimClass * parachute;  // 0x88
    unsigned char __pad_08C;  // 0x8C
    bool isFallingDown;  // 0x8D
    bool wasFallingDown;  // 0x8E
    bool isBomb;  // 0x8F
    bool isAliveFlag;  // 0x90
    unsigned char alignmentPadding91;  // 0x91
    char __pad_92[2];  // 0x92
    int q094;  // 0x94
    bool isInLogic;  // 0x98
    bool isVisible;  // 0x99
    unsigned char alignmentPadding99;  // 0x9A
    char __pad_9B[1];  // 0x9B
    Coord * location;  // 0x9C
    unsigned char __pad_0A0;  // 0xA0
    char __pad_A1[3];  // 0xA1
    unsigned int q0A4;  // 0xA4
    char __pad_A8[32];  // 0xA8
    unsigned int u32_C8;  // 0xC8
    unsigned int q0CC;  // 0xCC
    unsigned int q0D0;  // 0xD0
    char __pad_D4[44];  // 0xD4
    unsigned int u32_100;  // 0x100
    unsigned int q104;  // 0x104
    int q108;  // 0x108
    int q10C;  // 0x10C
    char __pad_110[4];  // 0x110
    Mixer * q114;  // 0x114
    char __pad_118[16];  // 0x118
    int q128;  // 0x128
    char __pad_12C[16];  // 0x12C
    unsigned int q13C;  // 0x13C
    unsigned int q140;  // 0x140
    char __pad_144[144];  // 0x144
    unsigned int Audio4;  // 0x1D4
    unsigned char __pad_1D8;  // 0x1D8
    char __pad_1D9[157];  // 0x1D9
    unsigned char Audio3;  // 0x276
    char __pad_277[3];  // 0x277
    unsigned char __pad_27A;  // 0x27A
    char __pad_27B[25];  // 0x27B
    int q294;  // 0x294
    int q298;  // 0x298
    char __pad_29C[52];  // 0x29C
    int q2D0;  // 0x2D0
    char __pad_2D4[16];  // 0x2D4
    int q2E4;  // 0x2E4
    char __pad_2E8[36];  // 0x2E8
    int q30C;  // 0x30C
    char __pad_310[16];  // 0x310
    unsigned int Duration;  // 0x320
    unsigned char __pad_324;  // 0x324
    char __pad_325[307];  // 0x325
    DynamicVectorClass * ptr_458;  // 0x458
    unsigned char __pad_45C;  // 0x45C
    char __pad_45D[515];  // 0x45D
    unsigned int Invisible;  // 0x660
    unsigned char __pad_664;  // 0x664
    char __pad_665[1375];  // 0x665
    int qBC4;  // 0xBC4
    char __pad_BC8[8];  // 0xBC8
    int qBD0;  // 0xBD0
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    AbstractClass * * GetFrameCount(int * a2);
    Coord * * ProcessAnim(int * a2, unsigned int * a3);
    VoxelAnimClass * DrawVoxel(char a2);
    char UpdateMatrix();
    float * QuaternionToMatrix(float * a2, void *a2_2);
    int CleanupMembers(void *a1);
    int Constructor(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6 = 0);
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
