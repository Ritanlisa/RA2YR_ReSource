// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TagClass;  // fix_fwd_type_supply
struct AnimClass;  // fix_fwd_type_supply
struct ParticleTypeClass;  // fix_fwd_type_supply
struct TimerStruct;  // fix_fwd_type_supply
struct INIClass;  // fix_fwd_type_supply
struct AbstractTypeClass;  // fix_fwd_type_supply
struct ConnectionPointClass;  // fix_fwd_type_supply
struct ParticleSystemClass;  // fix_fwd_type_supply
struct BuildingTypeClass;  // fix_fwd_type_supply
struct HouseClass;  // fix_fwd_type_supply
struct MSShapeAnim;  // fix_fwd_type_supply

struct ParticleClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    void* q010;  // 0x10
    bool IsAllocated;  // 0x13
    void* q014;  // 0x14
    unsigned int q018;  // 0x18
    int referenceCount;  // 0x1C
    unsigned char needsSave;  // 0x20
    void* q024;  // 0x24
    unsigned int q028;  // 0x28
    bool q02B;  // 0x2B
    unsigned int q02C;  // 0x2C
    ObjectClass* nextObject;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    TagClass* attachedTag;  // 0x34
    unsigned int q038;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03C;  // 0x3C
    unsigned int q040;  // 0x40
    unsigned int u32_44;  // 0x44
    unsigned int q048;  // 0x48
    unsigned int u32_4C;  // 0x4C
    unsigned int u32_50;  // 0x50
    unsigned int q054;  // 0x54
    unsigned int q058;  // 0x58
    unsigned int u32_5C;  // 0x5C
    int customSound;  // 0x64
    unsigned int u32_68;  // 0x68
    unsigned int u32_6C;  // 0x6C
    unsigned int estimatedHealth;  // 0x70
    unsigned int u32_74;  // 0x74
    unsigned char alignmentPadding75;  // 0x75
    unsigned int spawnStatus;  // 0x78
    unsigned int visibilityFlags;  // 0x7C
    unsigned int q080;  // 0x80
    bool inOpenToppedTransport;  // 0x82
    bool hasParachute;  // 0x84
    unsigned char alignmentPadding85;  // 0x85
    AnimClass* parachute;  // 0x88
    unsigned int q08A;  // 0x8A
    unsigned int q08B;  // 0x8B
    void* q08C;  // 0x8C
    bool isFallingDown;  // 0x8D
    bool wasFallingDown;  // 0x8E
    bool isAliveFlag;  // 0x90
    unsigned char alignmentPadding91;  // 0x91
    unsigned int lastLayer;  // 0x94
    bool isInLogic;  // 0x98
    bool isVisible;  // 0x99
    unsigned char alignmentPadding99;  // 0x9A
    unsigned int q0A0;  // 0xA0
    unsigned int q0A4;  // 0xA4
    void* q0AC;  // 0xAC
    unsigned int q0B0;  // 0xB0
    void* q0B4;  // 0xB4
    void* q0C4;  // 0xC4
    void* q0D0;  // 0xD0
    void* q0D8;  // 0xD8
    void* q0E0;  // 0xE0
    unsigned int q0E4;  // 0xE4
    unsigned int q0F0;  // 0xF0
    unsigned int q0F4;  // 0xF4
    unsigned int q0F8;  // 0xF8
    unsigned int q100;  // 0x100
    unsigned int q104;  // 0x104
    unsigned char alignmentPadding69;  // 0x105
    unsigned int q10C;  // 0x10C
    unsigned int q128;  // 0x128
    unsigned int q12C;  // 0x12C
    unsigned int Translucency;  // 0x12F
    unsigned int q130;  // 0x130
    unsigned int q138;  // 0x138
    unsigned int q13C;  // 0x13C
    unsigned int q140;  // 0x140
    unsigned int q144;  // 0x144
    unsigned int q150;  // 0x150
    unsigned char q154;  // 0x154
    void* q158;  // 0x158
    unsigned int q164;  // 0x164
    unsigned int q168;  // 0x168
    ParticleTypeClass* Type;  // 0x172
    bool q17B;  // 0x17B
    unsigned int q1AC;  // 0x1AC
    unsigned int q1B0;  // 0x1B0
    unsigned char q1EC;  // 0x1EC
    void* q20C;  // 0x20C
    unsigned char q258;  // 0x258
    unsigned int q264;  // 0x264
    unsigned char q26C;  // 0x26C
    unsigned int q280;  // 0x280
    void* q2A0;  // 0x2A0
    ObjectClass* q2B4;  // 0x2B4
    unsigned char q2E4;  // 0x2E4
    unsigned int q300;  // 0x300
    unsigned int q308;  // 0x308
    ParticleSystemClass * q324;  // 0x324
    BuildingTypeClass* q33C;  // 0x33C
    unsigned char q340;  // 0x340
    unsigned int q520;  // 0x520
    unsigned char q5B8;  // 0x5B8
    unsigned char q698;  // 0x698
    unsigned int CheckWaterImpact;
    unsigned int ParticleClass_field_0xAC;
    unsigned int ParticleClass_field_0xB4;
    unsigned int ParticleClass_field_0xB8;
    unsigned int SetPosition;
    unsigned int *__pad_0;
    unsigned int *__pad_128;
    unsigned int *__pad_28;
    unsigned int __pad_B0;
    unsigned int __pad_E4;
// --- flat members (END) ---
    int * CheckDrawFlags(int a1);
    int CheckCollisionFlags(TechnoTypeClass * aP0, int * a1, int aP2);
    int CheckStateFlag();
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetObjectSize();
    int GetTypeIdentifier();
    int LoadParticleData(ObjectClass * aP1, int aP1a);
    int AdjustHeight();
    void DrawParticle(int * a2, int * a3);

    void Update();  // G42.39 supply
};

} // namespace gamemd
