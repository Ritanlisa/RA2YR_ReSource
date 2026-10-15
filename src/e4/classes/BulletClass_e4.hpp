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
int customSound;  // 0x64 [X35-L7 kind=int]
int estimatedHealth;  // 0x70 [X35-L7 kind=int]
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
unsigned int AnimFrame;  // 0x124 [X35-L7 kind=unsigned int]
    unsigned int AnimRateCounter;  // 0x125
unsigned int WeaponType;  // 0x128 [X35-L7 kind=unsigned int]
    unsigned int SourceCoords;  // 0x12C
unsigned int TargetCoords;  // 0x138 [X35-L7 kind=unsigned int]
unsigned int DamageMultiplier;  // 0x148 [X35-L7 kind=unsigned int]
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
void* q000;  // 0x0 [X35-L7 kind=void*]
    unsigned int q00C;  // 0xC (offset-truth)
    void* u32_AC;  // 0xAC [X30:type_map]
    unsigned char __pad_010;  // 0x10 [X30:canon]
bool __pad_017;  // 0x17 [X35-L7 kind=bool]
    unsigned char __pad_037;  // 0x37 [X30:canon]
    unsigned char __pad_068;  // 0x68 [X30:canon]
    unsigned char __pad_079;  // 0x79 [X30:canon]
    unsigned char __pad_080;  // 0x80 [X30:canon]
    unsigned char __pad_089;  // 0x89 [X30:canon]
    unsigned char __pad_09E;  // 0x9E [X30:canon]
    unsigned char __pad_0BC;  // 0xBC [X30:canon]
    unsigned char __pad_0E4;  // 0xE4 [X30:canon]
    unsigned char __pad_109;  // 0x109 [X30:canon]
    ParticleSystemClass* __pad_118;  // 0x118 [X30:type_map]
    ParticleSystemClass* __pad_130;  // 0x130 [X30:type_map]
    ParticleSystemClass* __pad_13C;  // 0x13C [X30:type_map]
    ParticleSystemClass* __pad_154;  // 0x154 [X30:type_map]
    unsigned char __pad_17A;  // 0x17A [X30:canon]
    unsigned char __pad_26C;  // 0x26C [X30:canon]
    unsigned char __pad_28C;  // 0x28C [X30:canon]
    unsigned char __pad_344;  // 0x344 [X30:canon]
    unsigned char __pad_45C;  // 0x45C [X30:canon]
    unsigned int AbstractClass_10C;  // [X30:default]
    int BulletClass_field_0x4;  // 0x4 [X30:type_map]
    unsigned int ParticleSystemClass_110;  // [X30:default]
    char __pad_C[12];  // 0xC [X30:member_lookup]
    ParticleSystemClass* q100;  // 0x100 [X30:type_map]
    unsigned int q104;  // 0x104 [X30:member_lookup]
    ParticleSystemClass* q108;  // 0x108 [X30:type_map]
    int q12D;  // 0x12D [X30:type_map]
    int q134;  // 0x134 [X30:type_map]
    int q140;  // 0x140 [X30:type_map]
    ParticleSystemClass* q144;  // 0x144 [X30:type_map]
unsigned int q158;  // 0x158 [X35-L7 kind=unsigned int]
    unsigned int q_120;  // [X30:default]
    unsigned int q_B0;  // [X30:default]
    void* u16_14E;  // 0x14E [X30:type_map]
};

} // namespace gamemd
