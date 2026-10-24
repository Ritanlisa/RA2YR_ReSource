// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct OverlayTypeClass;  // fix_fwd_type_supply
struct AnimClass;  // fix_fwd_type_supply
struct LineTrail;  // fix_fwd_type_supply

struct TiberiumClass {
#pragma pack(push, 1)  // X60: binary-packed layout
    char ptr_0[2];  // 0x0
    unsigned short u16_2;  // 0x2
    void * ptr_4;  // 0x4
    void * ptr_8;  // 0x8
    void * ptr_C;  // 0xC
    void * uniqueId;  // 0x10
    int abstractFlags;  // 0x14
    char nextArrayIndex[4];  // 0x18
    char referenceCount[4];  // 0x1C
    int NeedsSaveOrLink;  // 0x20
    int objectTypeFlags;  // 0x24
    unsigned int owningHouseIndex;  // 0x28
    OverlayTypeClass * fallRate;  // 0x2C
    int nextObject_d;  // 0x30
    int attachedTag;  // 0x34
    MapSeed * attachedBomb;  // 0x38
    char ambientSoundController[20];  // 0x3C
    char customSound_controller[20];  // 0x50
    int customSound;  // 0x64
    char bombVisible[1];  // 0x68
    char alignmentPadding69[3];  // 0x69
    char health[4];  // 0x6C
    int estimatedHealth;  // 0x70
    bool isOnMap;  // 0x74
    char alignmentPadding75[3];  // 0x75
    int spawnStatus;  // 0x78
    unsigned int visibilityFlags;  // 0x7C
    bool needsRedraw;  // 0x80
    unsigned char inLimbo_d;  // 0x81
    unsigned char inOpenToppedTransport_d;  // 0x82
    unsigned char isSelected_d;  // 0x83
    bool hasParachute;  // 0x84
    char alignmentPadding85[3];  // 0x85
    AnimClass * parachute;  // 0x88
    bool onBridge;  // 0x8C
    bool isFallingDown;  // 0x8D
    unsigned char __pad_08E;  // 0x8E
    char isBomb[1];  // 0x8F
    bool isAliveFlag;  // 0x90
    char alignmentPadding91[3];  // 0x91
    unsigned int lastLayer;  // 0x94
    char isInLogic[1];  // 0x98
    bool isVisible;  // 0x99
    unsigned short alignmentPadding99;  // 0x9A
    int location[3];  // 0x9C
    void * Growth_d;  // 0xA8
    char ArrayIndex[4];  // 0xAC
    void * Spread_d;  // 0xB0
    double SpreadPercentage;  // 0xB4
    int Power_d;  // 0xBC
    double GrowthPercentage_d;  // 0xC0
    int Value;  // 0xC8
    int Power_2;  // 0xCC
    char Color_d[4];  // 0xD0
    void * Debris;  // 0xD4
    OverlayTypeClass * Image;  // 0xD8
    char NumFrames[4];  // 0xDC
    int Image_d;  // 0xE0
    char Tactical_E4[4];  // 0xE4
    unsigned int u32_E8;  // 0xE8
    int TiberiumClass_field_EC_d;  // 0xEC
    int TiberiumClass_field_F0;  // 0xF0
    int TiberiumClass_field_F4_d;  // 0xF4
    int TiberiumClass_field_F8_d;  // 0xF8
    int TiberiumClass_field_FC_d;  // 0xFC
    char SpreadTimer_d[12];  // 0x100
    int TiberiumClass_field_10C_d;  // 0x10C
    int TiberiumClass_field_110_d;  // 0x110
    void * TiberiumClass_field_114_d;  // 0x114
    void * TiberiumClass_field_118;  // 0x118
    char GrowthTimer_d[12];  // 0x11C
    char __pad_128[476];  // 0x128
    unsigned int u32_304;  // 0x304
    unsigned int u32_308;  // 0x308
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    AbstractClass * * SaveLoad_Prefix(int a1, int a2);
    char LoadFromINI(uint8_t *** aP1, void *a2);
    int SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2);
    int StubReturn296();
    int StubReturn46();
    int ddtor(int a1, unsigned int * a2);
    TiberiumClass(ObjectClass * aP1);
    int Spread(int a1, int a2, int a3, int a4, int a5, int a6, char a7, char a8);  // def-aligned
    static char Grow(TiberiumClass * aP1, unsigned short *a2);
#pragma pack(pop)
};

} // namespace gamemd
