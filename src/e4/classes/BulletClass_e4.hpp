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
    unsigned int q010;  // 0x10
    bool IsAllocated;  // 0x13
    unsigned int q014;  // 0x14
    bool q017;  // 0x17
    void* q018;  // 0x18
    unsigned int q01C;  // 0x1C
    unsigned int q020;  // 0x20
    unsigned int q024;  // 0x24
    unsigned int q028;  // 0x28
    unsigned int q02C;  // 0x2C
    ObjectClass* nextObject;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    unsigned int u32_34;  // 0x34
    unsigned int q038;  // 0x38
    unsigned int u32_3C;  // 0x3C
    unsigned int u32_40;  // 0x40
    unsigned int u32_44;  // 0x44
    unsigned int q048;  // 0x48
    unsigned int q04C;  // 0x4C
    unsigned int q050;  // 0x50
    unsigned int q054;  // 0x54
    unsigned int q058;  // 0x58
    unsigned int q05C;  // 0x5C
    unsigned int q060;  // 0x60
    char customSound[4];  // 0x64
    unsigned int u32_68;  // 0x68
    unsigned int u32_6C;  // 0x6C
    unsigned int estimatedHealth;  // 0x70
    bool isOnMap;  // 0x74
    unsigned char alignmentPadding75;  // 0x75
    unsigned int u32_78;  // 0x78
    unsigned int visibilityFlags;  // 0x7C
    unsigned int q080;  // 0x80
    bool inOpenToppedTransport;  // 0x82
    unsigned int u32_84;  // 0x84
    unsigned char alignmentPadding85;  // 0x85
    unsigned int u32_88;  // 0x88
    unsigned int q08A;  // 0x8A
    unsigned int q08B;  // 0x8B
    unsigned int q08C;  // 0x8C
    bool isFallingDown;  // 0x8D
    bool wasFallingDown;  // 0x8E
    unsigned int q090;  // 0x90
    unsigned char alignmentPadding91;  // 0x91
    unsigned int lastLayer;  // 0x94
    bool isInLogic;  // 0x98
    bool isVisible;  // 0x99
    unsigned char alignmentPadding99;  // 0x9A
    unsigned int q0A0;  // 0xA0
    unsigned int q0A4;  // 0xA4
    void* q0AC;  // 0xAC
    ParticleSystemClass* q0B0;  // 0xB0
    unsigned int q0B4;  // 0xB4
    unsigned int Data;  // 0xB8
    unsigned int q0C4;  // 0xC4
    unsigned int q0D0;  // 0xD0
    unsigned int q0D8;  // 0xD8
    unsigned int Bright;  // 0xE0
    unsigned int q0E4;  // 0xE4
    unsigned int u32_F4;  // 0xF4
    unsigned int u32_F8;  // 0xF8
    unsigned int u32_FC;  // 0xFC
    unsigned int q100;  // 0x100
    unsigned int q104;  // 0x104
    void* q10C;  // 0x10C
    unsigned int WeaponType;  // 0x128
    ParticleSystemClass* q130;  // 0x130
    unsigned int TargetCoords;  // 0x138
    unsigned int q13C;  // 0x13C
    void* q140;  // 0x140
    unsigned int q144;  // 0x144
    void* q154;  // 0x154
    unsigned int q158;  // 0x158
    unsigned int q164;  // 0x164
    unsigned int q168;  // 0x168
    BulletTypeClass* Type;  // 0x172
    unsigned int Owner;  // 0x176
    bool q17B;  // 0x17B
    unsigned int q1AC;  // 0x1AC
    unsigned int q1B0;  // 0x1B0
    unsigned char q1EC;  // 0x1EC
    void* q20C;  // 0x20C
    unsigned char q258;  // 0x258
    unsigned char q26C;  // 0x26C
    unsigned int q280;  // 0x280
    unsigned char q2A0;  // 0x2A0
    void* q2E4;  // 0x2E4
    unsigned int q300;  // 0x300
    unsigned int q308;  // 0x308
    ParticleSystemClass * q324;  // 0x324
    BuildingTypeClass* q33C;  // 0x33C
    unsigned int Range;  // 0x340
    void* q520;  // 0x520
    unsigned int BulletClass_field_0x10C;
    unsigned int BulletClass_field_0x130;
    unsigned int BulletClass_field_0x140;
    unsigned int BulletClass_field_0x154;
    unsigned int BulletClass_field_0x4;
    unsigned int BulletClass_field_0x8;
    unsigned int BulletClass_field_0xAC;
    unsigned int BulletClass_field_0xB0;
    unsigned int ResetDetonationTimer;
    unsigned int *__pad_0;
    unsigned int *__pad_110;
    unsigned int *__pad_134;
    unsigned int *__pad_144;
    unsigned int *__pad_158;
    unsigned int *__pad_B4;
    unsigned int *__pad_C;
// --- flat members (END) ---
    BulletClass();
    BulletClass * * Dtor(void *a1);
    LONG CheckTargetValidity(int a1);
    LONG ValidateTarget(volatile LONG * a1);
    int * CalculateSpreadAngle(int a1);
    int MissionStubReturnZero();
    int MissionStubReturnZero2();
    int PowerDrainProcess(int a1, unsigned int * a2);
    int SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2);
    static int16_t LoseTarget(...);  // 0x468430
};

} // namespace gamemd
