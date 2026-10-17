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
#pragma pack(push, 1)  // X60: binary-packed layout
    void * q0;  // 0x0
    void* vtable2;  // 0x4
    unsigned int m_8;  // 0x8
    unsigned int m_C;  // 0xC
    unsigned int m_10;  // 0x10
    unsigned int AnimList;  // 0x14
    char InfDeath[4];  // 0x18
    float CellSpread;  // 0x1C
    float CellInset;  // 0x20
    IUnknown* __pad_024;  // 0x24
    int CausesDelayKill;  // 0x28
    int DelayKillFrames;  // 0x2C
    float DelayKillAtMax;  // 0x30
    float CombatLightSize;  // 0x34
    ParticleTypeClass* Particle;  // 0x38
    int Wall;  // 0x3C
    int Tiberium;  // 0x40
    char pad_44[84];  // 0x44
    char AmbientDamage;  // 0x98
    char pad_99[3];  // 0x99
    char Burst;  // 0x9C
    char pad_9D[7];  // 0x9D
    char Damage;  // 0xA4
    char pad_A5[83];  // 0xA5
    unsigned int WarheadTypeClass_field_0xF8;  // 0xF8
    unsigned int __pad_FC;  // 0xFC
    int WarheadTypeClass_field_0x100;  // 0x100
    unsigned int u32_104;  // 0x104
    int WarheadTypeClass_field_0x108;  // 0x108
    char __pad_10C[4];  // 0x10C
    unsigned char OccupantAnim;  // 0x110
    char __pad_111[3];  // 0x111
    int WarheadTypeClass_field_0x114;  // 0x114
    unsigned int OpenToppedAnim;  // 0x118
    unsigned char __pad_11C;  // 0x11C
    char __pad_11D[3];  // 0x11D
    int WarheadTypeClass_field_0x120;  // 0x120
    char pad_124[6];  // 0x124
    bool UseSparkParticles;  // 0x12A
    char pad_12B[2];  // 0x12B
    bool IsRailgun;  // 0x12D
    char pad_12E[2];  // 0x12E
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
    char DisguiseFakeBlinkTime;  // 0x13C
    char pad_13D[3];  // 0x13D
    bool InfiniteMindControl;  // 0x140
    bool FireWhileMoving;  // 0x141
    bool DrainWeapon;  // 0x142
    bool FireInTransport;  // 0x143
    unsigned short Suicide;  // 0x144
    bool Supress;  // 0x146
    char pad_147;  // 0x147
    bool Charges;  // 0x148
    char WarheadTypeClass_field_bool_149;  // 0x149
    bool DiskLaser;  // 0x14A
    unsigned short Sonic;  // 0x14B
    unsigned int Conventional;  // 0x14D
    unsigned int CLDisableRed;  // 0x151
    char IsRadEruption[4];  // 0x155
    char Parasite[4];  // 0x159
    char __pad_15D[3];  // 0x15D
    unsigned char __pad_160;  // 0x160
    char __pad_161[11];  // 0x161
    int Airstrike;  // 0x16C
    int Paralyzes;  // 0x170
    int Culling;  // 0x174
    int PsychicDamage;  // 0x178
    unsigned int WarheadTypeClass_field_0x17C;  // 0x17C
    int WarheadTypeClass_field_0x180;  // 0x180
    int WarheadTypeClass_field_0x184;  // 0x184
    int WarheadTypeClass_field_0x188;  // 0x188
    void* DebrisTypes;  // 0x18C
    unsigned int __pad_190;  // 0x190
    int MaxDebris;  // 0x194
    int MinDebris;  // 0x198
    unsigned int unused_1CC;  // 0x19C
    unsigned char __pad_1A0;  // 0x1A0
    char __pad_1A1[11];  // 0x1A1
    int WarheadTypeClass_field_0x1AC;  // 0x1AC
    char __pad_1B0[12];  // 0x1B0
    int WarheadTypeClass_field_0x1BC;  // 0x1BC
    char __pad_1C0[4];  // 0x1C0
    int WarheadTypeClass_field_0x1C4;  // 0x1C4
    int WarheadTypeClass_field_0x1C8;  // 0x1C8
// --- flat members (BEGIN) ---
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
#pragma pack(pop)
};

} // namespace gamemd
