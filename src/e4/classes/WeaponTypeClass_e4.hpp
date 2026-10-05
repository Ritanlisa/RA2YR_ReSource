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
    unsigned int q011;  // 0x11
    bool IsAllocated;  // 0x13
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    unsigned char q024;  // 0x24
    unsigned int q028;  // 0x28
    bool q02B;  // 0x2B
    unsigned int q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    unsigned char q034;  // 0x34
    unsigned int q038;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned char UINameLabel;  // 0x3D
    unsigned int q040;  // 0x40
    unsigned int q044;  // 0x44
    unsigned int q048;  // 0x48
    unsigned int q04C;  // 0x4C
    unsigned int q050;  // 0x50
    unsigned int q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q05C;  // 0x5C
    void * UIName;  // 0x60
    unsigned char Name;  // 0x64
    unsigned int q068;  // 0x68
    ObjectClass* q06C;  // 0x6C
    unsigned int u32_70;  // 0x70
    unsigned char q078;  // 0x78
    void* q07C;  // 0x7C
    unsigned int q080;  // 0x80
    void* q08C;  // 0x8C
    unsigned char q090;  // 0x90
    int AmbientDamage;  // 0x98
    int Projectile;  // 0xA0
    int Damage;  // 0xA4
    WarheadTypeClass* Speed;  // 0xA8
    int Warhead;  // 0xAC
    int ROF;  // 0xB0
    int Range;  // 0xB4
    unsigned int MinimumRange;  // 0xB8
    unsigned char Report;  // 0xBC
    unsigned int Anim;  // 0xC0
    AnimTypeClass* OccupantAnim;  // 0xC4
    AnimTypeClass* AssaultAnim;  // 0xC8
    AnimTypeClass* OpenToppedAnim;  // 0xCC
    ParticleSystemTypeClass* AttachedParticleSystem;  // 0xD0
    char LaserInnerColor[4];  // 0xD4
    char LaserOuterColor[4];  // 0xD7
    unsigned char q0D8;  // 0xD8
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
    bool q0F4;  // 0xF4
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
    AnimTypeClass* q114;  // 0x114
    unsigned int q128;  // 0x128
    bool q12C;  // 0x12C
    bool q130;  // 0x130
    bool q138;  // 0x138
    int q13C;  // 0x13C
    bool q140;  // 0x140
    bool q144;  // 0x144
    bool q150;  // 0x150
    bool q154;  // 0x154
    int q158;  // 0x158
    unsigned int DownReport;
    unsigned int InfiniteMindControl;
    unsigned int IsMagBeam;
    unsigned int Burst;
// --- flat members (END) ---
    WeaponTypeClass * ddtor(char a2);
    char ReadTrajectoryData(uint8_t * Block, char * a3, int a4);
    char  ReadVeteranData(uint8_t * a2, char * a3, int a4, int * Block, int a6, int16_t a7, int a8, int a9, int a10);
    int CalculateSpeed();
    int Destructor(void *a1);
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetObjectSize();
    int GetTypeIdentifier();
    int Process(ObjectClass * Source);
    int ProcessPower(int * a2, void *a2_2);
    unsigned int * Constructor(ObjectClass * aP1, void *a2, void *a3, void *a4, void *a5);
    unsigned int * loadWeaponProperties(int aP1);
    void * Create();
    void * Create(AbstractClass * Source);
    WeaponTypeClass * ddtor(void ** Block, char a2);
};

} // namespace gamemd
