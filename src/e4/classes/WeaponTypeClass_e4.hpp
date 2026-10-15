// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct WarheadTypeClass;  // fix_fwd_type_supply
struct AnimTypeClass;  // fix_fwd_type_supply
struct ParticleSystemTypeClass;  // fix_fwd_type_supply
struct CampaignClass;  // fix_fwd_type_supply
struct Color;  // fix_fwd_type_supply

struct WeaponTypeClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    int uniqueId;  // 0x10
    bool IsAllocated;  // 0x13
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    unsigned int alignmentPadding;  // 0x33
    char zero_3C;  // 0x3C
    unsigned char UINameLabel;  // 0x3D
    void * UIName;  // 0x60
    unsigned char Name;  // 0x64
    unsigned char tail_95;  // 0x95
    int AmbientDamage;  // 0x98
    BulletTypeClass* Burst;  // 0x9C
    int Projectile;  // 0xA0
    int Damage;  // 0xA4
    WarheadTypeClass* Speed;  // 0xA8
    int Warhead;  // 0xAC
    int ROF;  // 0xB0
    int Range;  // 0xB4
    void* MinimumRange;  // 0xB8 [X30:type_map]
    unsigned char Report;  // 0xBC
    void* Anim;  // 0xC0 [X30:type_map]
    AnimTypeClass* OccupantAnim;  // 0xC4
    AnimTypeClass* AssaultAnim;  // 0xC8
    AnimTypeClass* OpenToppedAnim;  // 0xCC
    ParticleSystemTypeClass* AttachedParticleSystem;  // 0xD0
    char LaserInnerColor[4];  // 0xD4
    char LaserOuterColor[4];  // 0xD7
    char LaserOuterSpread[4];  // 0xDA
    bool UseFireParticles;  // 0xDD
    bool UseSparkParticles;  // 0xDE
    bool OmniFire;  // 0xDF
    bool DistributedWeaponFire;  // 0xE0
    bool IsRailgun;  // 0xE1
    bool Lobber;  // 0xE2
    bool Bright;  // 0xE3
    bool IsSonic;  // 0xE4
    bool Spawner;  // 0xE5
    bool LimboLaunch;  // 0xE6
    bool DecloakToFire;  // 0xE7
    bool CellRangefinding;  // 0xE8
    bool FireOnce;  // 0xE9
    bool NeverUse;  // 0xEA
    bool RevealOnFire;  // 0xEB
    bool TerrainFire;  // 0xEC
    bool SabotageCursor;  // 0xED
    bool MigAttackCursor;  // 0xEE
    bool DisguiseFireOnly;  // 0xEF
    int DisguiseFakeBlinkTime;  // 0xF0
    bool InfiniteMindControl;  // 0xF4
    bool FireWhileMoving;  // 0xF5
    bool DrainWeapon;  // 0xF6
    bool FireInTransport;  // 0xF7
    bool Suicide;  // 0xF8
    bool TurboBoost;  // 0xF9
    bool Supress;  // 0xFA
    bool Camera;  // 0xFB
    bool Charges;  // 0xFC
    bool IsLaser;  // 0xFD
    bool DiskLaser;  // 0xFE
    bool IsLine;  // 0xFF
    bool IsBigLaser;  // 0x100
    bool IsHouseColor;  // 0x101
    char LaserDuration;  // 0x102
    bool IonSensitive;  // 0x103
    bool AreaFire;  // 0x104
    bool IsElectricBolt;  // 0x105
    bool DrawBoltAsLaser;  // 0x106
    bool IsAlternateColor;  // 0x107
    bool IsRadBeam;  // 0x108
    bool IsRadEruption;  // 0x109
    int RadLevel;  // 0x10C
    bool IsMagBeam;  // 0x110
    AnimTypeClass* AssaultAnim_d;  // 0x114
    AnimTypeClass* OpenToppedAnim_d;  // 0x118
    char LaserInnerColor_d[3];  // 0x120
    Color * ptr_122;  // 0x122
    Color * ptr_125;  // 0x125
    Color * ptr_127;  // 0x127
    bool UseFireParticles_d;  // 0x129
    bool IsSonic_d;  // 0x130
    bool Spawner_d;  // 0x131
    bool LimboLaunch_d;  // 0x132
    bool DecloakToFire_d;  // 0x133
    bool CellRangefinding_d;  // 0x134
    bool NeverUse_d;  // 0x136
    bool RevealOnFire_d;  // 0x137
    bool InfiniteMindControl_d;  // 0x140
    bool FireWhileMoving_d;  // 0x141
    bool Suicide_d;  // 0x144
    bool Supress_d;  // 0x146
    bool Camera_d;  // 0x147
    bool Charges_d;  // 0x148
    bool IsLaser_d;  // 0x149
    bool AreaFire_d;  // 0x150
    bool IsElectricBolt_d;  // 0x151
    bool DrawBoltAsLaser_d;  // 0x152
    bool IsAlternateColor_d;  // 0x153
    unsigned char tail_15D;  // 0x15D
// --- flat members (END) ---
    WeaponTypeClass * ddtor(char a2);
    char ReadTrajectoryData(uint8_t * Block, char * a3, int a4);
    char  ReadVeteranData(uint8_t * a2, char * a3, int a4, int * Block, int a6, int16_t a7, int a8, int a9, int a10);
    int CalculateSpeed(void *a1 = 0);
    int Destructor(void *a1);
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetObjectSize();
    int GetTypeIdentifier();
    int Process(ObjectClass * Source);
    int ProcessPower(int * a2, void *a2_2);
    unsigned int * Constructor(ObjectClass * aP1, void *a2, void *a3, void *a4, void *a5);
    unsigned int *  loadWeaponProperties(int aP1, void *a2 = 0);
    void * Create(AbstractClass * Source, void *a2 = 0, void *a3 = 0, void *a4 = 0);
    void * Create(AbstractClass * Source);
    WeaponTypeClass * ddtor(void ** Block, char a2);
    void* DownReport;  // 0xD8 (ml) [X30:type_map]
    unsigned char __pad_024;  // 0x24 [X30:canon]
    unsigned char __pad_037;  // 0x37 [X30:canon]
    unsigned char __pad_05D;  // 0x5D [X30:canon]
    ParticleSystemTypeClass* __pad_11C;  // 0x11C [X30:type_map]
    bool __pad_12B;  // 0x12B [X30:type_map]
    bool __pad_135;  // 0x135 [X30:type_map]
    bool __pad_138;  // 0x138 [X30:type_map]
    bool __pad_142;  // 0x142 [X30:type_map]
    bool __pad_145;  // 0x145 [X30:type_map]
    bool __pad_14A;  // 0x14A [X30:type_map]
    bool __pad_154;  // 0x154 [X30:type_map]
};

} // namespace gamemd
