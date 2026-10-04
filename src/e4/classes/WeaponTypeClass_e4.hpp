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
    unsigned int q01A;  // 0x1A
    int referenceCount;  // 0x1C
    bool q01D;  // 0x1D
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
    unsigned int q03B;  // 0x3B
    char zero_3C;  // 0x3C
    unsigned char UINameLabel;  // 0x3D
    unsigned int q040;  // 0x40
    bool q042;  // 0x42
    unsigned int q044;  // 0x44
    unsigned int q048;  // 0x48
    bool q04A;  // 0x4A
    unsigned int q04C;  // 0x4C
    unsigned char q04F;  // 0x4F
    unsigned int q050;  // 0x50
    unsigned int q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q05C;  // 0x5C
    unsigned char q05D;  // 0x5D
    void * UIName;  // 0x60
    unsigned char Name;  // 0x64
    unsigned int q068;  // 0x68
    ObjectClass* q06C;  // 0x6C
    unsigned int u32_70;  // 0x70
    bool q074;  // 0x74
    unsigned char q078;  // 0x78
    void* q07C;  // 0x7C
    unsigned int q080;  // 0x80
    unsigned int q084;  // 0x84
    void* q088;  // 0x88
    void* q08C;  // 0x8C
    unsigned char q090;  // 0x90
    unsigned int q094;  // 0x94
    unsigned char tail_95;  // 0x95
    int AmbientDamage;  // 0x98
    unsigned int q9C;  // 0x9C
    int Projectile;  // 0xA0
    int Damage;  // 0xA4
    WarheadTypeClass* Speed;  // 0xA8
    unsigned char q0A9;  // 0xA9
    unsigned char q0AA;  // 0xAA
    unsigned int q0AB;  // 0xAB
    int Warhead;  // 0xAC
    int ROF;  // 0xB0
    int Range;  // 0xB4
    unsigned int MinimumRange;  // 0xB8
    unsigned char q0B9;  // 0xB9
    unsigned char Report;  // 0xBC
    unsigned int Anim;  // 0xC0
    unsigned int q0C3;  // 0xC3
    AnimTypeClass* OccupantAnim;  // 0xC4
    AnimTypeClass* AssaultAnim;  // 0xC8
    unsigned char u8_C9;  // 0xC9
    AnimTypeClass* OpenToppedAnim;  // 0xCC
    ParticleSystemTypeClass* AttachedParticleSystem;  // 0xD0
    char LaserInnerColor[4];  // 0xD4
    char LaserOuterColor[4];  // 0xD7
    unsigned char q0D8;  // 0xD8
    char LaserOuterSpread[4];  // 0xDA
    CampaignClass* q0DC;  // 0xDC
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
    bool q110;  // 0x110
    unsigned int q111;  // 0x111
    AnimTypeClass* q114;  // 0x114
    AnimTypeClass* q118;  // 0x118
    ParticleSystemTypeClass* q11C;  // 0x11C
    char q120[3];  // 0x120
    unsigned int u32_121;  // 0x121
    Color * ptr_122;  // 0x122
    char q123[3];  // 0x123
    unsigned int q124;  // 0x124
    Color * ptr_125;  // 0x125
    char q126[3];  // 0x126
    Color * ptr_127;  // 0x127
    unsigned int q128;  // 0x128
    bool q129;  // 0x129
    bool q12A;  // 0x12A
    bool q12B;  // 0x12B
    bool q12C;  // 0x12C
    bool q12D;  // 0x12D
    bool q12E;  // 0x12E
    bool q12F;  // 0x12F
    bool q130;  // 0x130
    bool q131;  // 0x131
    bool q132;  // 0x132
    bool q133;  // 0x133
    bool q134;  // 0x134
    bool q135;  // 0x135
    bool q136;  // 0x136
    bool q137;  // 0x137
    bool q138;  // 0x138
    bool q139;  // 0x139
    bool q13A;  // 0x13A
    bool q13B;  // 0x13B
    int q13C;  // 0x13C
    bool q140;  // 0x140
    bool q141;  // 0x141
    bool q142;  // 0x142
    bool q143;  // 0x143
    bool q144;  // 0x144
    bool q145;  // 0x145
    bool q146;  // 0x146
    bool q147;  // 0x147
    bool q148;  // 0x148
    bool q149;  // 0x149
    bool q14A;  // 0x14A
    bool q14B;  // 0x14B
    bool q14C;  // 0x14C
    bool q14D;  // 0x14D
    char q14E;  // 0x14E
    bool q14F;  // 0x14F
    bool q150;  // 0x150
    bool q151;  // 0x151
    bool q152;  // 0x152
    bool q153;  // 0x153
    bool q154;  // 0x154
    bool q155;  // 0x155
    int q158;  // 0x158
    bool q15C;  // 0x15C
    unsigned char tail_15D;  // 0x15D
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
