// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Color;  // fix_fwd_type_supply
struct SHPStruct;  // fix_fwd_type_supply
struct CampaignClass;  // fix_fwd_type_supply
struct AnimClass;  // fix_fwd_type_supply
struct OverlayTypeClass;  // fix_fwd_type_supply
struct Coord;  // fix_fwd_type_supply
struct AbstractTypeClass;  // fix_fwd_type_supply
struct ConnectionPointClass;  // fix_fwd_type_supply
struct SomeVoxelCache;  // fix_fwd_type_supply
struct SequenceStruct;  // fix_fwd_type_supply
struct TechnoTypeClass;  // fix_fwd_type_supply
struct ObjectTypeClass;  // fix_fwd_type_supply
struct WeaponTypeClass;  // fix_fwd_type_supply
struct InfantryClass;  // fix_fwd_type_supply

struct InfantryTypeClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    unsigned int uniqueId;  // 0x10
    unsigned int abstractFlags;  // 0x14
    unsigned char q015;  // 0x15
    unsigned int nextArrayIndex;  // 0x18
    char referenceCount[4];  // 0x1C
    unsigned int NeedsSaveOrLink;  // 0x20
    unsigned int BarrelVoxel;  // 0x24
    unsigned int IsAllocated;  // 0x25
    bool q02B;  // 0x2B
    unsigned char q031;  // 0x31
    int alignmentPadding;  // 0x33
    void* q034;  // 0x34
    unsigned int q038;  // 0x38
    unsigned char q03A;  // 0x3A
    char UINameLabel;  // 0x3D
    unsigned int DeadBodies;  // 0x40
    unsigned int DeathAnims;  // 0x44
    unsigned int VoiceComment;  // 0x48
    unsigned int UIName;  // 0x60
    char Name;  // 0x64
    unsigned int Crawls;  // 0x65
    unsigned int Infiltrate;  // 0x66
    unsigned int Fraidycat;  // 0x67
    unsigned int TiberiumProof;  // 0x68
    unsigned int Civilian;  // 0x69
    unsigned int C4;  // 0x6A
    unsigned int Engineer;  // 0x6B
    unsigned int Agent;  // 0x6C
    unsigned int Thief;  // 0x6D
    unsigned int VehicleThief;  // 0x6E
    unsigned char q078;  // 0x78
    void* q07C;  // 0x7C
    unsigned int q080;  // 0x80
    void* q08C;  // 0x8C
    Color* q098;  // 0x98
    char Armor[4];  // 0x9C
    int Strength;  // 0xA0
    SHPStruct* Image;  // 0xA4
    bool ImageAllocated;  // 0xA8
    SHPStruct* AlphaImage;  // 0xAC
    char MainVoxel[4];  // 0xB0
    char TurretVoxel[4];  // 0xB4
    char ChargerTurrets[72];  // 0xBC
    CampaignClass* q0C4;  // 0xC4
    unsigned int u32_C8;  // 0xC8
    unsigned char q0D0;  // 0xD0
    void* q0D8;  // 0xD8
    void* q0E0;  // 0xE0
    ObjectClass* q0E4;  // 0xE4
    void* q0F0;  // 0xF0
    void* q0F4;  // 0xF4
    OverlayTypeClass* q0F8;  // 0xF8
    char q100;  // 0x100
    unsigned int q10C;  // 0x10C
    unsigned int q114;  // 0x114
    unsigned int q128;  // 0x128
    unsigned int q12C;  // 0x12C
    unsigned int q130;  // 0x130
    unsigned int q138;  // 0x138
    unsigned int q13C;  // 0x13C
    unsigned int q140;  // 0x140
    unsigned int q144;  // 0x144
    unsigned int q150;  // 0x150
    unsigned char q154;  // 0x154
    void* q158;  // 0x158
    SHPStruct* q164;  // 0x164
    bool q168;  // 0x168
    unsigned int q1AC;  // 0x1AC
    unsigned int q1B0;  // 0x1B0
    int CrushSound;  // 0x1F0
    int AmbientSound;  // 0x1F4
    char ImageFile;  // 0x1F8
    int AlternateArcticArt;  // 0x1F9
    int Theater;  // 0x1FC
    int Crushable;  // 0x1FD
    int Bombable;  // 0x1FE
    int RadarInvisible;  // 0x1FF
    int Selectable;  // 0x200
    int LegalTarget;  // 0x201
    int Insignificant;  // 0x202
    int Immune;  // 0x203
    int Voxel;  // 0x206
    int NewTheater;  // 0x207
    int HasRadialIndicator;  // 0x208
    int IgnoresFirestorm;  // 0x209
    int UseLineTrail;  // 0x20A
    int LineTrailColor;  // 0x20C
    char AlphaImageFile;  // 0x213
    int LineTrailColorDecrement;  // 0x240
    char VoxelCaches[80];  // 0x244
    unsigned char q258;  // 0x258
    unsigned int q264;  // 0x264
    SomeVoxelCache* q26C;  // 0x26C
    unsigned int q280;  // 0x280
    unsigned int ammo;  // 0x2AC
    char EliteAbilities[4];  // 0x2AE
    unsigned int strength;  // 0x2BC
    unsigned int techLevel;  // 0x2C4
    unsigned int speed;  // 0x2CC
    unsigned int threatPosed;  // 0x2D4
    char Pip[4];  // 0x2EC
    char OccupyWeapon[28];  // 0x2F4
    unsigned int DebrisTypes;  // 0x314
    unsigned int Locomotor;  // 0x31C
    unsigned int q324;  // 0x324
    SequenceStruct* Sequence;  // 0x32C
    int FireUp;  // 0x330
    int FireProne;  // 0x334
    unsigned int q340;  // 0x340
    bool Fearless;  // 0x364
    double Size;  // 0x380
    int BuildLimit;  // 0x3B8
    unsigned int Category;  // 0x3BC
    unsigned int DieSound;  // 0x420
    unsigned int EnterBioReactorSound;  // 0x498
    unsigned int MinDebris;  // 0x4B4
    unsigned int MaxDebris;  // 0x4B8
    unsigned int FlightLevel;  // 0x4F8
    unsigned int Speed;  // 0x528
    int SpeedType;  // 0x52C
    int q5B0;  // 0x5B0
    int q5B8;  // 0x5B8
    int q698;  // 0x698
    char CameoFile;  // 0x6D6
    char Cameo[4];  // 0x6F0
    bool CameoAllocated;  // 0x6F4
    char AltCameo[4];  // 0x710
    int TurretOffset;  // 0x720
    bool CanBeHidden;  // 0x724
    unsigned int Explosion;  // 0x72C
    unsigned int Storage;  // 0x7A0
    unsigned int TiberiumHeal;  // 0x7BF
    unsigned int Turret;  // 0x7CE
    char Weapon[4];  // 0x898
    void* qBC0;  // 0xBC0
    void* qBF0;  // 0xBF0
    unsigned int Explodes;  // 0xCED
    unsigned int Normalized;  // 0xCFB
    unsigned int AutoCrush;  // 0xD05
    unsigned int Spawns;  // 0xD30
    int SuppressionThreshold;  // 0xD44
    float JumpjetAccel;  // 0xD5C
    unsigned int Palette;  // 0xDAC
    unsigned int EliteOccupyWeapon;  // 0xE20
    unsigned int ArrayIndex;
    unsigned int vtable0;
// --- flat members (END) ---
    InfantryClass *  ConstructInfantry(AbstractClass * ppv);
    InfantryTypeClass * Constructor(char *aP1);
    InfantryTypeClass * ddtor(char a2);
    static WeaponTypeClass * * Find(char *Source);  // [w16g2] static (def body this=0)
    int * GetDimensions(int a1);
    int CreateInfantry(short * a2, AbstractClass * ppv);
    int GetAuxField();
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetGameplayValue();
    int GetObjectSize();
    int GetTypeIdentifier();
    int LoadFromINI(uint8_t *** a2, void *a2_2);
    int PowerDrainUpdate(int * a2);
    int StubReturnFalse();
    int j__do_always_noconv_codecvt_base_std__MBE_NXZ_19();
    unsigned int * ClampToGroundHeight(unsigned int * a1, int * a2);
    unsigned int * Constructor_523980(ObjectTypeClass * aP1);
    unsigned int * CopyDataArray(unsigned int *aP1);
    unsigned int * GetDefaultDimensions(unsigned int * a1);
    InfantryTypeClass * ddtor(int Block, char a2);
    int DTOR();
};

} // namespace gamemd
