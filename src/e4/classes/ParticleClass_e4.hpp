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
    char ptr_0[2];  // 0x0
    char ParticleClass_field_0x2[4];  // 0x2
    char __pad_6[2];  // 0x6
    void * ptr_8;  // 0x8
    void * ptr_C;  // 0xC
    unsigned int __pad_010;  // 0x10
    int q014;  // 0x14
    char __pad_18[4];  // 0x18
    int referenceCount;  // 0x1C
    unsigned char needsSave;  // 0x20
    char __pad_21[3];  // 0x21
    unsigned int __pad_024;  // 0x24
    char __pad_28[8];  // 0x28
    ObjectClass * nextObject;  // 0x30
    TagClass * attachedTag;  // 0x34
    unsigned char __pad_038;  // 0x38
    char __pad_39[43];  // 0x39
    int customSound;  // 0x64
    unsigned char __pad_068;  // 0x68
    char __pad_69[7];  // 0x69
    int estimatedHealth;  // 0x70
    unsigned char __pad_074;  // 0x74
    unsigned char alignmentPadding75;  // 0x75
    char __pad_76[2];  // 0x76
    unsigned int spawnStatus;  // 0x78
    unsigned int visibilityFlags;  // 0x7C
    unsigned char __pad_080;  // 0x80
    char __pad_81[1];  // 0x81
    bool inOpenToppedTransport;  // 0x82
    bool isSelected;  // 0x83
    bool hasParachute;  // 0x84
    unsigned char alignmentPadding85;  // 0x85
    char __pad_86[2];  // 0x86
    AnimClass * parachute;  // 0x88
    unsigned char __pad_08C;  // 0x8C
    bool isFallingDown;  // 0x8D
    bool wasFallingDown;  // 0x8E
    bool isBomb;  // 0x8F
    bool isAliveFlag;  // 0x90
    unsigned char alignmentPadding91;  // 0x91
    char __pad_92[2];  // 0x92
    unsigned int lastLayer;  // 0x94
    bool isInLogic;  // 0x98
    bool isVisible;  // 0x99
    unsigned char alignmentPadding99;  // 0x9A
    char __pad_9B[3];  // 0x9B
    unsigned char __pad_09E;  // 0x9E
    char __pad_9F[1];  // 0x9F
    unsigned int u32_A0;  // 0xA0
    unsigned int u32_A4;  // 0xA4
    char __pad_A8[4];  // 0xA8
    unsigned int u32_AC;  // 0xAC
    char __pad_B0[4];  // 0xB0
    unsigned int u32_B4;  // 0xB4
    int q0B8;  // 0xB8
    int u32_BC;  // 0xBC
    IUnknown * q0C0;  // 0xC0
    int u32_C4;  // 0xC4
    int u32_C8;  // 0xC8
    int q0CC;  // 0xCC
    int q0D0;  // 0xD0
    char __pad_D4[4];  // 0xD4
    int u32_D8;  // 0xD8
    int u32_DC;  // 0xDC
    int q0E0;  // 0xE0
    char __pad_E4[28];  // 0xE4
    unsigned int u32_100;  // 0x100
    unsigned int u32_104;  // 0x104
    unsigned int u32_108;  // 0x108
    char __pad_10C[4];  // 0x10C
    unsigned int ParticleSystem;  // 0x110
    unsigned int RemainingEC;  // 0x114
    unsigned int StateAIAdvance;  // 0x118
    int __pad_11C;  // 0x11C
    char __pad_120[4];  // 0x120
    int u32_124;  // 0x124
    char __pad_128[5];  // 0x128
    unsigned char u32_12D;  // 0x12D
    unsigned char StartStateAI;  // 0x12E
    unsigned char Translucency;  // 0x12F
    char __pad_130[1];  // 0x130
    unsigned char u32_131;  // 0x131
    char __pad_132[1];  // 0x132
    unsigned char __pad_133;  // 0x133
    char __pad_134[62];  // 0x134
    unsigned char Type;  // 0x172
    char __pad_173[3];  // 0x173
    unsigned char __pad_176;  // 0x176
    char __pad_177[13];  // 0x177
    unsigned int q0184;  // 0x184
    char __pad_188[10];  // 0x188
    unsigned char Velocity;  // 0x192
    char __pad_193[3];  // 0x193
    unsigned char __pad_196;  // 0x196
    char __pad_197[225];  // 0x197
    unsigned int RemainingDC;  // 0x278
    unsigned char __pad_27C;  // 0x27C
    char __pad_27D[23];  // 0x27D
    int q294;  // 0x294
    char __pad_298[48];  // 0x298
    int q2C8;  // 0x2C8
    char __pad_2CC[48];  // 0x2CC
    int q2FC;  // 0x2FC
    char __pad_300[20];  // 0x300
    int q314;  // 0x314
    char __pad_318[320];  // 0x318
    DynamicVectorClass * ptr_458;  // 0x458
    unsigned char __pad_45C;  // 0x45C
    char __pad_45D[847];  // 0x45D
    int q7AC;  // 0x7AC
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static void CheckWaterImpact(ParticleClass *pThis);
    int * CheckDrawFlags(int a1);
    int CheckCollisionFlags(TechnoTypeClass * aP0, int * a1, int aP2);
    int CheckStateFlag();
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetObjectSize();
    int GetTypeIdentifier();
    int LoadParticleData(ObjectClass * aP1, int aP1a);
    int AdjustHeight();
    void DrawParticle(int * a2, int * a3);
    void Update(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0);  // G42.39 supply
};

} // namespace gamemd
