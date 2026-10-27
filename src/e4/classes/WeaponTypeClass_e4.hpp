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
    void * ptr_0;  // 0x0
    void * ptr_4;  // 0x4
    void * ptr_8;  // 0x8
    void * ptr_C;  // 0xC
    int uniqueId;  // 0x10
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    unsigned char __pad_024;  // 0x24
    char __pad_25[14];  // 0x25
    unsigned char alignmentPadding;  // 0x33
    char __pad_34[3];  // 0x34
    unsigned char __pad_037;  // 0x37
    char __pad_38[4];  // 0x38
    char zero_3C;  // 0x3C
    char UINameLabel[32];  // 0x3D
    unsigned char __pad_05D;  // 0x5D
    char __pad_5E[2];  // 0x5E
    void * UIName;  // 0x60
    char Name[49];  // 0x64
    char tail_95[3];  // 0x95
    int AmbientDamage;  // 0x98
    BulletTypeClass * Burst;  // 0x9C
    int Projectile;  // 0xA0
    int Damage;  // 0xA4
    WarheadTypeClass * Speed;  // 0xA8
    int Warhead;  // 0xAC
    int ROF;  // 0xB0
    int Range;  // 0xB4
    int MinimumRange;  // 0xB8
    int Report[7];  // 0xBC
    int DownReport[7];  // 0xD8
    int Anim[7];  // 0xF4
    int OccupantAnim;  // 0x110
    AnimTypeClass * AssaultAnim_d;  // 0x114
    AnimTypeClass * OpenToppedAnim_d;  // 0x118
    ParticleSystemTypeClass * AttachedParticleSystem;  // 0x11C
    char LaserInnerColor_d[3];  // 0x120
    char LaserOuterColor[3];  // 0x123
    char LaserOuterSpread[3];  // 0x126
    bool UseFireParticles_d;  // 0x129
    char UseSparkParticles[1];  // 0x12A
    bool OmniFire;  // 0x12B
    char DistributedWeaponFire[1];  // 0x12C
    char IsRailgun[1];  // 0x12D
    char Lobber[1];  // 0x12E
    char Bright[1];  // 0x12F
    bool IsSonic_d;  // 0x130
    bool Spawner_d;  // 0x131
    bool LimboLaunch_d;  // 0x132
    bool DecloakToFire_d;  // 0x133
    bool CellRangefinding_d;  // 0x134
    bool FireOnce;  // 0x135
    bool NeverUse_d;  // 0x136
    bool RevealOnFire_d;  // 0x137
    bool TerrainFire;  // 0x138
    char SabotageCursor[1];  // 0x139
    char MigAttackCursor[1];  // 0x13A
    char DisguiseFireOnly[1];  // 0x13B
    int DisguiseFakeBlinkTime;  // 0x13C
    bool InfiniteMindControl_d;  // 0x140
    bool FireWhileMoving_d;  // 0x141
    bool DrainWeapon;  // 0x142
    char FireInTransport[1];  // 0x143
    bool Suicide_d;  // 0x144
    bool TurboBoost;  // 0x145
    bool Supress_d;  // 0x146
    bool Camera_d;  // 0x147
    bool Charges_d;  // 0x148
    bool IsLaser_d;  // 0x149
    bool DiskLaser;  // 0x14A
    char IsLine[1];  // 0x14B
    char IsBigLaser[1];  // 0x14C
    char IsHouseColor[1];  // 0x14D
    char LaserDuration[1];  // 0x14E
    char IonSensitive[1];  // 0x14F
    bool AreaFire_d;  // 0x150
    bool IsElectricBolt_d;  // 0x151
    bool DrawBoltAsLaser_d;  // 0x152
    bool IsAlternateColor_d;  // 0x153
    bool IsRadBeam;  // 0x154
    char IsRadEruption[1];  // 0x155
    char __pad_156[2];  // 0x156
    int RadLevel;  // 0x158
    char IsMagBeam[1];  // 0x15C
    char tail_15D[3];  // 0x15D
// --- flat members (BEGIN) ---
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
    unsigned int * Constructor(WeaponTypeClass * aP1, void *a2, void *a3, void *a4, void *a5);
    unsigned int *  loadWeaponProperties(int aP1, void *a2 = 0);
    void * Create(AbstractClass * Source, void *a2 = 0, void *a3 = 0, void *a4 = 0);
    void * Create(AbstractClass * Source);
    WeaponTypeClass * ddtor(void ** Block, char a2);
    // --- x93 csp-relocation decls (BEGIN) ---
    int COMStub_432C10(int a2);  // 0x00432C10
    // --- x93 csp-relocation decls (END) ---
};

} // namespace gamemd
