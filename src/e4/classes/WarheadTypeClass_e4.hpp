// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ParticleTypeClass;  // fix_fwd_type_supply
struct AnimClass;  // fix_fwd_type_supply
struct CampaignClass;  // fix_fwd_type_supply
struct CCINIClass;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct ParticleSystemTypeClass;  // fix_fwd_type_supply
struct TypeList_flat;  // fix_fwd_type_supply

struct WarheadTypeClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    unsigned char alignmentPadding_3;  // 0x11
    char referenceCount[4];  // 0x12
    bool IsAllocated;  // 0x13
    void *q14;  // 0x14
    int DeformTreshold;  // 0x16
    char InfDeath[4];  // 0x18
    float CellSpread;  // 0x1C
    void *q20;  // 0x20
    bool CausesDelayKill;  // 0x28
    int DelayKillFrames;  // 0x2C
    float DelayKillAtMax;  // 0x30
    float CombatLightSize;  // 0x34
    float PercentAtMax;  // 0x36
    ParticleTypeClass* Particle;  // 0x38
    bool Wall;  // 0x3C
    bool WallAbsoluteDestroyer;  // 0x3D
    bool PenetratesBunker;  // 0x3E
    bool Wood;  // 0x3F
    bool Tiberium;  // 0x40
    unsigned int pad_44;  // 0x44
    void * UIName;  // 0x60
    unsigned int Name;  // 0x64
    unsigned int tail_95;  // 0x95
    int AmbientDamage;  // 0x98
    unsigned int pad_99;  // 0x99
    unsigned int Burst;  // 0x9C
    unsigned int pad_9D;  // 0x9D
    int Damage;  // 0xA4
    unsigned int pad_A5;  // 0xA5
    void* MinimumRange;  // 0xB8
    unsigned char OccupantAnim;  // 0x110
    unsigned int OpenToppedAnim;  // 0x118
    unsigned int pad_124;  // 0x124
    bool UseSparkParticles;  // 0x12A
    unsigned int pad_12B;  // 0x12B
    bool IsRailgun;  // 0x12D
    unsigned int pad_12E;  // 0x12E
    bool IsSonic;  // 0x130
    bool Spawner;  // 0x131
    bool LimboLaunch;  // 0x132
    bool DecloakToFire;  // 0x133
    bool CellRangefinding;  // 0x134
    bool FireOnce;  // 0x135
    bool NeverUse;  // 0x136
    bool RevealOnFire;  // 0x137
    bool TerrainFire;  // 0x138
    bool SabotageCursor;  // 0x139
    bool MigAttackCursor;  // 0x13A
    bool DisguiseFireOnly;  // 0x13B
    int DisguiseFakeBlinkTime;  // 0x13C
    unsigned int pad_13D;  // 0x13D
    bool InfiniteMindControl;  // 0x140
    bool FireWhileMoving;  // 0x141
    bool DrainWeapon;  // 0x142
    bool FireInTransport;  // 0x143
    unsigned int Suicide;  // 0x144
    bool Supress;  // 0x146
    bool Charges;  // 0x148
    char WarheadTypeClass_field_bool_149;  // 0x149
    bool DiskLaser;  // 0x14A
    bool Sonic;  // 0x14B
    bool Fire;  // 0x14C
    bool Conventional;  // 0x14D
    bool Rocker;  // 0x14E
    bool IonSensitive;  // 0x14F
    bool Bright;  // 0x150
    bool CLDisableRed;  // 0x151
    bool DrawBoltAsLaser;  // 0x152
    bool CLDisableBlue;  // 0x153
    bool EMEffect;  // 0x154
    bool IsRadEruption;  // 0x155
    bool Poison;  // 0x156
    bool IvanBomb;  // 0x157
    bool ElectricAssault;  // 0x158
    bool Parasite;  // 0x159
    bool Temporal;  // 0x15A
    bool IsLocomotor;  // 0x15B
    char Locomotor[4];  // 0x15C
    bool Airstrike;  // 0x16C
    bool Psychedelic;  // 0x16D
    bool BombDisarm;  // 0x16E
    int Paralyzes;  // 0x170
    bool Culling;  // 0x174
    bool MakesDisguise;  // 0x175
    bool NukeMaker;  // 0x176
    bool Radiation;  // 0x177
    bool PsychicDamage;  // 0x178
    bool AffectsAllies;  // 0x179
    bool Bullets;  // 0x17A
    bool Veinhole;  // 0x17B
    void *q18C;  // 0x18C
    int MaxDebris;  // 0x194
    int MinDebris;  // 0x198
    unsigned int unused_1CC;  // 0x19C
// --- flat members (END) ---
    AbstractClass * * Release(int a2, unsigned int * a3);
    AbstractClass * * parseVerses();
    CCINIClass * checkImmunity(int aP1);
    CampaignClass * * Destructor(char a2, int a3, int a1);
    DynamicVector * calculateDamage(int aP1);
    ParticleSystemTypeClass * * applyDamage(char *Source, int aP1, int a2, int a3, int a4, int a5, int a6, int a1, int aP0);
    TypeList_flat * QueryInterface(char a2);
    WarheadTypeClass * parseAnimations(char a2);
    char AddRef(int a2);
    int Construct(ObjectClass * aP1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7 = 0, void *a8 = 0, void *a9 = 0);  // G42.35f: ida truth 0x75CEC0 int return
    TypeList_flat * QueryInterface(unsigned int * Block, char a2);
    WarheadTypeClass * parseAnimations(char * Block, char a2);
    int FindOrCreate(ObjectClass * Source);
    int GetDamage(int a2, int a3);
    int GetObjectSize();
    int GetTypeIdentifier();
    int Init(unsigned int * a2, void *a2_2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8);
    int LoadType();
    int SaveLoad_Prefix(unsigned int * a1, int a2);
    int SaveToINI(int a2);
    unsigned int LoadTypeData(int a2);
    void * ReadParticleSystems(char a2, int aP1, int a3, int a4, int a5, int a6, int a1, int aP0);
    void * loadWarheadINI(uint8_t * a2, uint8_t * a3, int a4);
    void * parseModifiers(char a2);
    void GetClassIdentifier();
    void* ProcessPower(int * a2, void *a2_2);
    void *q0;  // 0x0 (ml)
    unsigned char *m_1;  // 0x1 (offset-truth)
    unsigned int m_10;  // 0x10 (offset-truth)
    unsigned int m_8;  // 0x8 (offset-truth)
    unsigned int m_C;  // 0xC (offset-truth)
    unsigned int *q000;  // 0x0 (offset-truth)
    unsigned int u32_680;  // 0x680 (offset-truth)

    unsigned int AnimList;  // X10 supply (csp_canon_members)
    float CellInset;  // X10 supply (csp_canon_members)
    unsigned int u32_104;  // X10 supply (member_lookup)
};

} // namespace gamemd
