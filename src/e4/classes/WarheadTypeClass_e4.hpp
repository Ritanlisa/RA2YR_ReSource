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
    unsigned char __pad_0;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    void* q010;  // 0x10
    char referenceCount[4];  // 0x12
    bool IsAllocated;  // 0x13
    char InfDeath[4];  // 0x18
    float q024;  // 0x24
    unsigned char q031;  // 0x31
    ParticleTypeClass* Particle;  // 0x38
    unsigned char q03A;  // 0x3A
    bool Wall;  // 0x3C
    bool Tiberium;  // 0x40
    int q044;  // 0x44
    float q048;  // 0x48
    unsigned int q04C;  // 0x4C
    unsigned int q050;  // 0x50
    unsigned int q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q05C;  // 0x5C
    void * UIName;  // 0x60
    unsigned int Name;  // 0x64
    unsigned int u32_68;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q078;  // 0x78
    void* q07C;  // 0x7C
    unsigned int u32_80;  // 0x80
    unsigned int u32_88;  // 0x88
    unsigned char q08A;  // 0x8A
    void* q08C;  // 0x8C
    unsigned int q0A0;  // 0xA0
    unsigned int q0A4;  // 0xA4
    unsigned int u32_AC;  // 0xAC
    unsigned int u32_B0;  // 0xB0
    unsigned char q0BD;  // 0xBD
    void* q0C4;  // 0xC4
    unsigned char q0D0;  // 0xD0
    void* q0D8;  // 0xD8
    void* q0E0;  // 0xE0
    AbstractClass* q0E4;  // 0xE4
    unsigned char q0F0;  // 0xF0
    void* q0F4;  // 0xF4
    void* q0F8;  // 0xF8
    unsigned int q100;  // 0x100
    unsigned int q10C;  // 0x10C
    unsigned int q114;  // 0x114
    unsigned int q128;  // 0x128
    unsigned int q12C;  // 0x12C
    unsigned int q130;  // 0x130
    unsigned int q138;  // 0x138
    unsigned int q13C;  // 0x13C
    void* q140;  // 0x140
    unsigned int q144;  // 0x144
    unsigned char WarheadTypeClass_field_0x108;  // 0x108
    bool WarheadTypeClass_field_bool_149;  // 0x149
    bool Fire;  // 0x14C
    bool Conventional;  // 0x14D
    bool Bright;  // 0x150
    bool CLDisableRed;  // 0x151
    bool Parasite;  // 0x159
    unsigned int Locomotor;  // 0x15C
    unsigned int q164;  // 0x164
    unsigned int q168;  // 0x168
    bool PsychicDamage;  // 0x178
    int MaxDebris;  // 0x194
    int MinDebris;  // 0x198
    unsigned int unused_1CC;  // 0x19C
    CampaignClass* q1AC;  // 0x1AC
    unsigned int q1B0;  // 0x1B0
    unsigned char __pad_1B0[9];  // 0x1B0
    unsigned char WarheadTypeClass_field_0x190[1];  // 0x190
    unsigned int u32_1B8;  // 0x1B8
    unsigned int Deform;
    unsigned int WarheadTypeClass_field_0x10;
    unsigned int WarheadTypeClass_field_0x4;
    unsigned int WarheadTypeClass_field_0x8;
    unsigned int WarheadTypeClass_field_0xC;
    unsigned int *m_1;
    unsigned int m_10;
    unsigned int m_8;
    unsigned int m_C;
    unsigned int *__pad_144;
    unsigned int AnimList;
    unsigned int DebrisTypes;
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
    unsigned int field_C;
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
    int Construct(ObjectClass * aP1, void *a2, void *a3, void *a4, void *a5, void *a6);  // G42.35f: ida truth 0x75CEC0 int return
    TypeList_flat * QueryInterface(unsigned int * Block, char a2);  // 0x524FC0 (G42.35f supply)
    WarheadTypeClass * parseAnimations(char * Block, char a2);  // 0x52AE00 (G42.35f supply)
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
};

} // namespace gamemd
