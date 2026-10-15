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
    bool IsAllocated;  // 0x13
    int referenceCount;  // 0x1C
    unsigned char needsSave;  // 0x20
    ObjectClass* nextObject;  // 0x30
    unsigned int alignmentPadding;  // 0x33
    TagClass* attachedTag;  // 0x34
int customSound;  // 0x64 [X35-L7 kind=int]
int estimatedHealth;  // 0x70 [X35-L7 kind=int]
    unsigned char alignmentPadding75;  // 0x75
    unsigned int spawnStatus;  // 0x78
    unsigned int visibilityFlags;  // 0x7C
    bool inOpenToppedTransport;  // 0x82
    bool isSelected;  // 0x83
    bool hasParachute;  // 0x84
    unsigned char alignmentPadding85;  // 0x85
    AnimClass* parachute;  // 0x88
    bool isFallingDown;  // 0x8D
    bool wasFallingDown;  // 0x8E
    bool isBomb;  // 0x8F
    bool isAliveFlag;  // 0x90
    unsigned char alignmentPadding91;  // 0x91
    unsigned int lastLayer;  // 0x94
    bool isInLogic;  // 0x98
    bool isVisible;  // 0x99
    unsigned char alignmentPadding99;  // 0x9A
    unsigned char alignmentPadding69;  // 0x105
    unsigned int ParticleSystem;  // 0x110
    unsigned int RemainingEC;  // 0x114
    unsigned int StateAIAdvance;  // 0x118
    unsigned int StartStateAI;  // 0x12E
    unsigned int Translucency;  // 0x12F
    ParticleTypeClass* Type;  // 0x172
    unsigned int Velocity;  // 0x192
    unsigned int RemainingDC;  // 0x278
    DynamicVectorClass * ptr_458;  // 0x458
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
    char __pad_B0[4];  // 0xB0 (ml)
void* q000;  // 0x0 [X35-L7 kind=void*]
    unsigned int q0100;  // 0x100 (offset-truth)
    unsigned char q0101;  // 0x101 (offset-truth)
    unsigned char q0103;  // 0x103 (offset-truth)
    unsigned int q0184;  // 0x184 (offset-truth)
    unsigned char q0185;  // 0x185 (offset-truth)
    unsigned char q0186;  // 0x186 (offset-truth)

    unsigned int u32_104;  // X10 supply (member_lookup)
    unsigned int u32_108;  // X10 supply (member_lookup)
    unsigned int u32_12D;  // X10 supply (member_lookup)
    unsigned int u32_A0;  // X10 supply (member_lookup)
    unsigned int u32_A4;  // X10 supply (member_lookup)

    int q0B8;  // X10 supply (member_lookup)
    unsigned int u32_131;  // X10 supply (member_lookup)
    unsigned int u32_AC;  // X10 supply (member_lookup)
    unsigned int u32_B4;  // X10 supply (member_lookup)
    unsigned char __pad_010;  // 0x10 [X30:canon]
    unsigned char __pad_017;  // 0x17 [X30:canon]
    unsigned char __pad_024;  // 0x24 [X30:canon]
    unsigned char __pad_038;  // 0x38 [X30:canon]
    unsigned char __pad_068;  // 0x68 [X30:canon]
    unsigned char __pad_074;  // 0x74 [X30:canon]
    unsigned char __pad_080;  // 0x80 [X30:canon]
    unsigned char __pad_08C;  // 0x8C [X30:canon]
    unsigned char __pad_09E;  // 0x9E [X30:canon]
    unsigned char __pad_109;  // 0x109 [X30:canon]
    int __pad_11C;  // 0x11C [X30:type_map]
    unsigned char __pad_133;  // 0x133 [X30:canon]
    unsigned char __pad_176;  // 0x176 [X30:canon]
    unsigned char __pad_196;  // 0x196 [X30:canon]
    unsigned char __pad_27C;  // 0x27C [X30:canon]
    unsigned char __pad_45C;  // 0x45C [X30:canon]
    unsigned int Coord_9C;  // [X30:default]
    unsigned int Tactical_E4;  // [X30:default]
    unsigned int q_B0;  // [X30:default]
    IUnknown* vtable49;  // 0xC0 [X30:type_map]
};

} // namespace gamemd
