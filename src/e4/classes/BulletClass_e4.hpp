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
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    bool IsAllocated;  // 0x13
    ObjectClass* nextObject;  // 0x30
    unsigned int alignmentPadding;  // 0x33
    char customSound[4];  // 0x64
    char estimatedHealth[4];  // 0x70
    bool isOnMap;  // 0x74
    unsigned char alignmentPadding75;  // 0x75
    unsigned int visibilityFlags;  // 0x7C
    bool inOpenToppedTransport;  // 0x82
    bool isSelected;  // 0x83
    unsigned char alignmentPadding85;  // 0x85
    bool isFallingDown;  // 0x8D
    bool wasFallingDown;  // 0x8E
    bool isBomb;  // 0x8F
    unsigned char alignmentPadding91;  // 0x91
    unsigned int lastLayer;  // 0x94
    bool isInLogic;  // 0x98
    bool isVisible;  // 0x99
    unsigned char alignmentPadding99;  // 0x9A
    unsigned int Data;  // 0xB8
    unsigned int Bright;  // 0xE0
    unsigned int CourseLock;  // 0x105
    unsigned int InheritedColor;  // 0x114
    unsigned int AnimFrame;  // 0x124
    unsigned int AnimRateCounter;  // 0x125
    unsigned int WeaponType;  // 0x128
    unsigned int SourceCoords;  // 0x12C
    unsigned int TargetCoords;  // 0x138
    unsigned int DamageMultiplier;  // 0x148
    CellStruct* NextAnim;  // 0x14C
    unsigned int SpawnNextAnim;  // 0x150
    BulletTypeClass* Type;  // 0x172
    unsigned int Owner;  // 0x176
    unsigned int CourseLockCounter;  // 0x264
    unsigned int Target;  // 0x268
    unsigned int WH;  // 0x288
    unsigned int Range;  // 0x340
    DynamicVectorClass * ptr_458;  // 0x458
// --- flat members (END) ---
    static unsigned int * ResetDetonationTimer(BulletClass *pThis);
    BulletClass();
    BulletClass * * Dtor(void *a1);
    LONG CheckTargetValidity(int a1);
    LONG ValidateTarget(volatile LONG * a1);
    int * CalculateSpreadAngle(int a1);
    int MissionStubReturnZero();
    int MissionStubReturnZero2();
    int PowerDrainProcess(int a1, unsigned int * a2);
    int SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2);
    static int16_t LoseTarget(BulletClass *p_this);  // x4:ida@0x468430
    char __pad_B4[88];  // 0xB4 (ml)
    unsigned int *q000;  // 0x0 (offset-truth)
    unsigned int q00C;  // 0xC (offset-truth)
    unsigned int u32_AC;  // 0xAC
};

} // namespace gamemd
