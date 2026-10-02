// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ObjectClass;  // fix_fwd_type_supply
struct OverlayTypeClass;  // fix_fwd_type_supply
struct AnimClass;  // fix_fwd_type_supply
struct LineTrail;  // fix_fwd_type_supply
struct AbstractClass;  // fix_fwd_type_supply

struct TiberiumClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    void* uniqueId;  // 0x10
    unsigned char alignmentPadding_3;  // 0x11
    ObjectClass* nextObject;  // 0x12
    bool IsAllocated;  // 0x13
    double abstractFlags;  // 0x14
    char Growth[4];  // 0x16
    char nextArrayIndex[4];  // 0x18
    unsigned int q01A;  // 0x1A
    char referenceCount[4];  // 0x1C
    bool q01D;  // 0x1D
    char NeedsSaveOrLink[4];  // 0x20
    char objectTypeFlags[4];  // 0x24
    unsigned int owningHouseIndex;  // 0x28
    bool q02B;  // 0x2B
    OverlayTypeClass* fallRate;  // 0x2C
    unsigned int q030;  // 0x30
    unsigned char q031;  // 0x31
    char Power[4];  // 0x32
    char attachedTag[4];  // 0x34
    char Color[4];  // 0x36
    void* attachedBomb;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    char ambientSoundController[20];  // 0x3C
    unsigned int UINameLabel;  // 0x3D
    unsigned int TiberiumClass_field_F4;  // 0x40
    bool q042;  // 0x42
    unsigned int TiberiumClass_field_F8;  // 0x44
    unsigned char alignmentPadding69_3;  // 0x45
    char TiberiumClass_field_FC[4];  // 0x48
    bool q04A;  // 0x4A
    char SpreadTimer[4];  // 0x4C
    unsigned char q04F;  // 0x4F
    char customSound_controller[20];  // 0x50
    unsigned char alignmentPadding75_3;  // 0x51
    char NumImages[4];  // 0x52
    unsigned int spawnStatus;  // 0x54
    unsigned int TiberiumClass_field_EC;  // 0x56
    unsigned int TiberiumClass_field_10C;  // 0x58
    unsigned int TiberiumClass_field_110;  // 0x5C
    bool inLimbo;  // 0x5D
    bool inOpenToppedTransport;  // 0x5E
    bool isSelected;  // 0x5F
    unsigned int TiberiumClass_field_114;  // 0x60
    unsigned char alignmentPadding85_3;  // 0x61
    char customSound[4];  // 0x64
    char bombVisible[1];  // 0x68
    unsigned char alignmentPadding69;  // 0x69
    bool wasFallingDown;  // 0x6A
    bool isBomb;  // 0x6B
    unsigned int health;  // 0x6C
    unsigned char alignmentPadding91_3;  // 0x6D
    char estimatedHealth[4];  // 0x70
    bool isOnMap;  // 0x74
    unsigned char alignmentPadding75;  // 0x75
    unsigned char alignmentPadding99_2;  // 0x76
    unsigned int q078;  // 0x78
    unsigned int visibilityFlags;  // 0x7C
    bool needsRedraw;  // 0x80
    bool q081;  // 0x81
    bool q082;  // 0x82
    bool q083;  // 0x83
    bool hasParachute;  // 0x84
    unsigned char alignmentPadding85;  // 0x85
    AnimClass* parachute;  // 0x88
    bool onBridge;  // 0x8C
    bool isFallingDown;  // 0x8D
    bool q08E;  // 0x8E
    bool q08F;  // 0x8F
    bool isAliveFlag;  // 0x90
    unsigned char alignmentPadding91;  // 0x91
    unsigned int lastLayer;  // 0x94
    unsigned int tail_95;  // 0x95
    void* isInLogic;  // 0x98
    bool isVisible;  // 0x99
    unsigned short alignmentPadding99;  // 0x9A
    char location[12];  // 0x9C
    unsigned int q0A4;  // 0xA4
    LineTrail* lineTrailer;  // 0xA8
    unsigned char q0A9;  // 0xA9
    unsigned char q0AA;  // 0xAA
    unsigned int q0AB;  // 0xAB
    unsigned int ArrayIndex;  // 0xAC
    double SpreadPercentage;  // 0xB4
    unsigned int q0B8;  // 0xB8
    unsigned char q0B9;  // 0xB9
    char q0BC[4];  // 0xBC
    double GrowthPercentage;  // 0xC0
    unsigned int q0C3;  // 0xC3
    void* q0C4;  // 0xC4
    char Value[4];  // 0xC8
    char q0CC[4];  // 0xCC
    char q0D0[4];  // 0xD0
    unsigned int q0D1;  // 0xD1
    unsigned int Debris;  // 0xD4
    OverlayTypeClass* Image;  // 0xD8
    char NumFrames[4];  // 0xDC
    char q0E0[4];  // 0xE0
    unsigned int q0E4;  // 0xE4
    unsigned int q0E8;  // 0xE8
    char q0EC[4];  // 0xEC
    unsigned int TiberiumClass_field_F0;  // 0xF0
    char q0F4[4];  // 0xF4
    void* q0F7;  // 0xF7
    char q0F8[4];  // 0xF8
    unsigned int q0F9;  // 0xF9
    unsigned char q0FB;  // 0xFB
    char q0FC[4];  // 0xFC
    char q100[12];  // 0x100
    char GrowthTimer[4];  // 0x104
    char q108[4];  // 0x108
    char q10C[4];  // 0x10C
    char q110[4];  // 0x110
    unsigned int q111;  // 0x111
    char q114[4];  // 0x114
    unsigned int TiberiumClass_field_118;  // 0x118
    char q11C[12];  // 0x11C
    unsigned int q120;  // 0x120
    unsigned int q124;  // 0x124
    unsigned int __pad_E4;
// --- flat members (END) ---
    AbstractClass * * SaveLoad_Prefix(int a1, int a2);
    char LoadFromINI(uint8_t *** aP1, void *a2);
    int SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2);
    int StubReturn296();
    int StubReturn46();
    int ddtor(int a1, unsigned int * a2);
    TiberiumClass(ObjectClass * aP1);
    int Spread(int a1, int a2, int a3, int a4, int a5, int a6, char a7, char a8);  // def-aligned
    static double Grow(...);  // C2597 interim stub
};

} // namespace gamemd
