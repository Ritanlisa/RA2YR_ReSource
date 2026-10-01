// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ParticleTypeClass;  // fix_fwd_type_supply
struct AnimClass;  // fix_fwd_type_supply
struct AbstractClass;  // fix_fwd_type_supply
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
    void* q010;  // 0x10
    unsigned char alignmentPadding_3;  // 0x11
    char referenceCount[4];  // 0x12
    bool IsAllocated;  // 0x13
    void *q14;  // 0x14
    int DeformTreshold;  // 0x16
    char InfDeath[4];  // 0x18
    float CellSpread;  // 0x1C
    bool q01D;  // 0x1D
    void *q20;  // 0x20
    float q024;  // 0x24
    bool CausesDelayKill;  // 0x28
    int DelayKillFrames;  // 0x2C
    float DelayKillAtMax;  // 0x30
    unsigned char q031;  // 0x31
    float CombatLightSize;  // 0x34
    float PercentAtMax;  // 0x36
    ParticleTypeClass* Particle;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    bool Wall;  // 0x3C
    bool WallAbsoluteDestroyer;  // 0x3D
    bool PenetratesBunker;  // 0x3E
    bool Wood;  // 0x3F
    bool Tiberium;  // 0x40
    bool q042;  // 0x42
    bool q043;  // 0x43
    int q044;  // 0x44
    float q048;  // 0x48
    bool q04A;  // 0x4A
    unsigned int q04C;  // 0x4C
    unsigned char q04F;  // 0x4F
    unsigned int q050;  // 0x50
    unsigned int q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q05C;  // 0x5C
    void * UIName;  // 0x60
    unsigned int Name;  // 0x64
    unsigned int u32_68;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q070;  // 0x70
    bool q074;  // 0x74
    unsigned char q078;  // 0x78
    void* q07C;  // 0x7C
    unsigned int u32_80;  // 0x80
    unsigned int q084;  // 0x84
    unsigned int u32_88;  // 0x88
    unsigned char q08A;  // 0x8A
    void* q08C;  // 0x8C
    unsigned int u32_90;  // 0x90
    unsigned int q094;  // 0x94
    unsigned int tail_95;  // 0x95
    void * ptr_98;  // 0x98
    unsigned int u32_9C;  // 0x9C
    unsigned int q0A0;  // 0xA0
    unsigned int q0A4;  // 0xA4
    unsigned int u32_A8;  // 0xA8
    unsigned char q0A9;  // 0xA9
    unsigned char q0AA;  // 0xAA
    unsigned int q0AB;  // 0xAB
    unsigned int u32_AC;  // 0xAC
    unsigned char q0AF;  // 0xAF
    unsigned int u32_B0;  // 0xB0
    void* q0B8;  // 0xB8
    unsigned char q0B9;  // 0xB9
    unsigned char q0BD;  // 0xBD
    unsigned int q0C3;  // 0xC3
    void* q0C4;  // 0xC4
    unsigned char q0C7;  // 0xC7
    void* q0CC;  // 0xCC
    unsigned char q0D0;  // 0xD0
    AnimClass* q0D4;  // 0xD4
    void* q0D8;  // 0xD8
    void* q0DC;  // 0xDC
    void* q0E0;  // 0xE0
    AbstractClass* q0E4;  // 0xE4
    AbstractClass* q0E8;  // 0xE8
    unsigned int q0EC;  // 0xEC
    unsigned char q0F0;  // 0xF0
    void* q0F4;  // 0xF4
    void* q0F7;  // 0xF7
    void* q0F8;  // 0xF8
    unsigned int q0F9;  // 0xF9
    unsigned char q0FB;  // 0xFB
    unsigned int qFC;  // 0xFC
    unsigned int q100;  // 0x100
    void *q104_a;  // 0x104
    CampaignClass* q108;  // 0x108
    unsigned int q10C;  // 0x10C
    unsigned char q110;  // 0x110
    unsigned int q111;  // 0x111
    unsigned int q114;  // 0x114
    unsigned char q118;  // 0x118
    unsigned int q11C;  // 0x11C
    unsigned int q120;  // 0x120
    unsigned int q124;  // 0x124
    unsigned int q128;  // 0x128
    unsigned int q12C;  // 0x12C
    unsigned int q130;  // 0x130
    unsigned int q134;  // 0x134
    unsigned int q138;  // 0x138
    unsigned int q13C;  // 0x13C
    void* q140;  // 0x140
    unsigned int q144;  // 0x144
    unsigned char u8_145;  // 0x145
    unsigned int u32_146;  // 0x146
    unsigned char u8_147;  // 0x147
    unsigned char q148;  // 0x148
    bool WarheadTypeClass_field_bool_149;  // 0x149
    bool Sparky;  // 0x14A
    bool Sonic;  // 0x14B
    bool Fire;  // 0x14C
    bool Conventional;  // 0x14D
    bool Rocker;  // 0x14E
    bool DirectRocker;  // 0x14F
    bool Bright;  // 0x150
    bool CLDisableRed;  // 0x151
    bool CLDisableGreen;  // 0x152
    bool CLDisableBlue;  // 0x153
    bool EMEffect;  // 0x154
    bool MindControl;  // 0x155
    bool Poison;  // 0x156
    bool IvanBomb;  // 0x157
    bool ElectricAssault;  // 0x158
    bool Parasite;  // 0x159
    bool Temporal;  // 0x15A
    bool IsLocomotor;  // 0x15B
    unsigned int Locomotor;  // 0x15C
    unsigned char q160;  // 0x160
    unsigned int q162;  // 0x162
    unsigned int q164;  // 0x164
    unsigned char q166;  // 0x166
    unsigned int q168;  // 0x168
    bool q16B;  // 0x16B
    bool Airstrike;  // 0x16C
    bool Psychedelic;  // 0x16D
    bool BombDisarm;  // 0x16E
    unsigned int q16F;  // 0x16F
    int Paralyzes;  // 0x170
    bool Culling;  // 0x174
    bool MakesDisguise;  // 0x175
    bool NukeMaker;  // 0x176
    bool Radiation;  // 0x177
    bool PsychicDamage;  // 0x178
    bool AffectsAllies;  // 0x179
    bool Bullets;  // 0x17A
    bool Veinhole;  // 0x17B
    int q17C;  // 0x17C
    int q180;  // 0x180
    int q184;  // 0x184
    int q188;  // 0x188
    void *q18C;  // 0x18C
    unsigned int q190;  // 0x190
    int MaxDebris;  // 0x194
    int MinDebris;  // 0x198
    unsigned int u32_199;  // 0x199
    unsigned int unused_1CC;  // 0x19C
    unsigned char q1A0;  // 0x1A0
    bool q1A1;  // 0x1A1
    unsigned int q1A2;  // 0x1A2
    unsigned int q1A5;  // 0x1A5
    unsigned int q1A7;  // 0x1A7
    void *q1A8;  // 0x1A8
    unsigned char q1AB;  // 0x1AB
    CampaignClass* q1AC;  // 0x1AC
    unsigned int q1B0;  // 0x1B0
    unsigned int q1B1;  // 0x1B1
    unsigned char u8_1B4;  // 0x1B4
    void* p1B5;  // regen name
    unsigned int u32_1B8;  // 0x1B8
    unsigned char q1B9;  // 0x1B9
    void* p1BC;  // regen name
    unsigned char q1C0;  // 0x1C0
    unsigned int q1C4;  // 0x1C4
    unsigned int q1C8;  // 0x1C8
    unsigned int AnimList6;
    unsigned int Deform;
    unsigned int WarheadTypeClass_field_0x10;
    unsigned int WarheadTypeClass_field_0x4;
    unsigned int WarheadTypeClass_field_0x8;
    unsigned int WarheadTypeClass_field_0xC;
    unsigned int *m_1;
    unsigned int m_10;
    unsigned int m_8;
    unsigned int m_C;
    unsigned int u32_680;
    unsigned int u32_9C6;
    unsigned int vtable21;
    unsigned int vtable26;
    unsigned int Tiberium0;
    unsigned int Tiberium8;
    unsigned int *__pad_144;
    unsigned int u32_A84;
    unsigned int AnimList;
    unsigned int CellInset;
    unsigned int DebrisTypes;
    unsigned int q0FC;
    unsigned int q104;
    unsigned int u32_1A8;
    unsigned int WarheadTypeClass_field_0x100;
    unsigned int WarheadTypeClass_field_0x114;
    unsigned int WarheadTypeClass_field_0x120;
    unsigned int WarheadTypeClass_field_0x17C;
    unsigned int WarheadTypeClass_field_0x180;
    unsigned int WarheadTypeClass_field_0x184;
    unsigned int WarheadTypeClass_field_0x188;
    unsigned int WarheadTypeClass_field_0xF8;
    unsigned int __pad_1A0;
    unsigned int *__pad_44;
    unsigned int *__pad_FC;
    unsigned int __pad_104;
    unsigned int *__pad_10;
    unsigned int __pad_4;
    unsigned int field_0;
    unsigned int field_2C;
    unsigned int field_C;
// --- flat members (END) ---
    AbstractClass * * Release(int a2, unsigned int * a3);
    AbstractClass * * parseVerses();
    CCINIClass * checkImmunity(TypeList_flat * aP1);
    CampaignClass * * Destructor(char a2);
    DynamicVector * calculateDamage(AbstractClass * aP1);
    ParticleSystemTypeClass * * applyDamage();
    TypeList_flat * QueryInterface(char a2);
    WarheadTypeClass * parseAnimations(char a2);
    char AddRef(int a2);
    void Construct(ObjectClass * aP1, void *a2, void *a3, void *a4, void *a5, void *a6);
    int FindOrCreate(ObjectClass * Source);
    int GetDamage(int a2, int a3);
    int GetObjectSize();
    int GetTypeIdentifier();
    int Init(unsigned int * a2, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8);
    int LoadType();
    int SaveLoad_Prefix(unsigned int * a1, int a2);
    int SaveToINI(int a2);
    unsigned int LoadTypeData(int a2);
    void * ReadParticleSystems(char a2);
    void * loadWarheadINI(uint8_t * a2, uint8_t * a3, int a4);
    void * parseModifiers(char a2);
    void GetClassIdentifier();
    void* ProcessPower(int * a2, void *a2);
};

} // namespace gamemd
