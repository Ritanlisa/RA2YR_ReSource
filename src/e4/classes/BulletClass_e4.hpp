// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ParticleSystemClass;  // fix_fwd_type_supply
struct BulletTypeClass;  // fix_fwd_type_supply
struct TimerStruct;  // fix_fwd_type_supply
struct INIClass;  // fix_fwd_type_supply
struct AbstractTypeClass;  // fix_fwd_type_supply
struct ConnectionPointClass;  // fix_fwd_type_supply
struct BuildingTypeClass;  // fix_fwd_type_supply
struct HouseClass;  // fix_fwd_type_supply
struct MSShapeAnim;  // fix_fwd_type_supply

struct BulletClass {
    void * ptr_0;  // 0x0
    int BulletClass_field_0x4;  // 0x4
    void * ptr_8;  // 0x8
    unsigned int q00C;  // 0xC
    unsigned char __pad_010;  // 0x10
    char __pad_11[2];  // 0x11
    bool IsAllocated;  // 0x13
    char __pad_14[3];  // 0x14
    bool __pad_017;  // 0x17
    int q018;  // 0x18
    char __pad_1C[20];  // 0x1C
    ObjectClass * nextObject;  // 0x30
    char __pad_34[3];  // 0x34
    unsigned char __pad_037;  // 0x37
    char __pad_38[44];  // 0x38
    int customSound;  // 0x64
    unsigned char __pad_068;  // 0x68
    char __pad_69[7];  // 0x69
    int estimatedHealth;  // 0x70
    bool isOnMap;  // 0x74
    unsigned char alignmentPadding75;  // 0x75
    char __pad_76[3];  // 0x76
    unsigned char __pad_079;  // 0x79
    char __pad_7A[2];  // 0x7A
    unsigned int visibilityFlags;  // 0x7C
    unsigned char __pad_080;  // 0x80
    char __pad_81[1];  // 0x81
    bool inOpenToppedTransport;  // 0x82
    bool isSelected;  // 0x83
    char __pad_84[1];  // 0x84
    unsigned char alignmentPadding85;  // 0x85
    char __pad_86[3];  // 0x86
    unsigned char __pad_089;  // 0x89
    char __pad_8A[3];  // 0x8A
    bool isFallingDown;  // 0x8D
    bool wasFallingDown;  // 0x8E
    bool isBomb;  // 0x8F
    char __pad_90[1];  // 0x90
    unsigned char alignmentPadding91;  // 0x91
    char __pad_92[2];  // 0x92
    unsigned int lastLayer;  // 0x94
    bool isInLogic;  // 0x98
    bool isVisible;  // 0x99
    unsigned char alignmentPadding99;  // 0x9A
    char __pad_9B[3];  // 0x9B
    unsigned char __pad_09E;  // 0x9E
    char __pad_9F[13];  // 0x9F
    void * u32_AC;  // 0xAC
    int q0B0;  // 0xB0
    char __pad_B4[4];  // 0xB4
    unsigned int Data;  // 0xB8
    char __pad_BC[36];  // 0xBC
    unsigned int Bright;  // 0xE0
    char __pad_E4[28];  // 0xE4
    unsigned int q100;  // 0x100
    unsigned int q104;  // 0x104
    unsigned int q108;  // 0x108
    int u32_10C;  // 0x10C
    char __pad_110[4];  // 0x110
    unsigned int InheritedColor;  // 0x114
    ParticleSystemClass* __pad_118;  // 0x118
    char __pad_11C[8];  // 0x11C
    unsigned int AnimFrame;  // 0x124
    unsigned int WeaponType;  // 0x128
    unsigned int SourceCoords;  // 0x12C
    ParticleSystemClass* __pad_130;  // 0x130
    int q134;  // 0x134
    unsigned int TargetCoords;  // 0x138
    ParticleSystemClass* __pad_13C;  // 0x13C
    int q140;  // 0x140
    ParticleSystemClass * q144;  // 0x144
    unsigned int DamageMultiplier;  // 0x148
    CellStruct * NextAnim;  // 0x14C
    unsigned int SpawnNextAnim;  // 0x150
    ParticleSystemClass* __pad_154;  // 0x154
    unsigned int q158;  // 0x158
    char __pad_15C[22];  // 0x15C
    unsigned char Type;  // 0x172
    char __pad_173[3];  // 0x173
    unsigned char Owner;  // 0x176
    char __pad_177[3];  // 0x177
    unsigned char __pad_17A;  // 0x17A
    char __pad_17B[161];  // 0x17B
    int u32_21C;  // 0x21C
    char __pad_220[68];  // 0x220
    unsigned int CourseLockCounter;  // 0x264
    unsigned int Target;  // 0x268
    unsigned char __pad_26C;  // 0x26C
    char __pad_26D[27];  // 0x26D
    unsigned int WH;  // 0x288
    unsigned char __pad_28C;  // 0x28C
    char __pad_28D[13];  // 0x28D
    char BulletClass_field_0x29A[4];  // 0x29A
    char __pad_29E[3];  // 0x29E
    char BulletClass_field_0x2A1[4];  // 0x2A1
    char __pad_2A5[7];  // 0x2A5
    int q2AC;  // 0x2AC
    char __pad_2B0[12];  // 0x2B0
    int q2BC;  // 0x2BC
    char __pad_2C0[16];  // 0x2C0
    int q2D0;  // 0x2D0
    char __pad_2D4[4];  // 0x2D4
    int q2D8;  // 0x2D8
    int q2DC;  // 0x2DC
    int q2E0;  // 0x2E0
    int q2E4;  // 0x2E4
    int q2E8;  // 0x2E8
    char __pad_2EC[8];  // 0x2EC
    int q2F4;  // 0x2F4
    char __pad_2F8[20];  // 0x2F8
    int q30C;  // 0x30C
    char __pad_310[48];  // 0x310
    unsigned int Range;  // 0x340
    unsigned char __pad_344;  // 0x344
    char __pad_345[275];  // 0x345
    DynamicVectorClass * ptr_458;  // 0x458
    unsigned char __pad_45C;  // 0x45C
    char __pad_45D[195];  // 0x45D
    int q520;  // 0x520
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static unsigned int * ResetDetonationTimer(BulletClass *pThis);
    BulletClass();
    int Dtor(void *a1);
    LONG CheckTargetValidity(int a1);
    LONG ValidateTarget(volatile LONG * a1);
    int * CalculateSpreadAngle(int a1);
    int MissionStubReturnZero();
    int MissionStubReturnZero2();
    int PowerDrainProcess(int a1, unsigned int * a2);
    int SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2);
    static int16_t LoseTarget(BulletClass *p_this);  // x4:ida@0x468430
};

} // namespace gamemd
