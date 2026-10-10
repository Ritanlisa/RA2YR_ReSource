// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct OverlayTypeClass;  // fix_fwd_type_supply
struct AnimClass;  // fix_fwd_type_supply
struct LineTrail;  // fix_fwd_type_supply

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
    char referenceCount[4];  // 0x1C
    char NeedsSaveOrLink[4];  // 0x20
    char objectTypeFlags[4];  // 0x24
    unsigned int owningHouseIndex;  // 0x28
    OverlayTypeClass* fallRate;  // 0x2C
    int nextObject_d;  // 0x30
    char Power[4];  // 0x32
    char attachedTag[4];  // 0x34
    char Color[4];  // 0x36
    void* attachedBomb;  // 0x38
    char ambientSoundController[20];  // 0x3C
    unsigned int UINameLabel;  // 0x3D
    char TiberiumClass_field_F4[4];  // 0x40
    char TiberiumClass_field_F8[4];  // 0x44
    unsigned char alignmentPadding69_3;  // 0x45
    char TiberiumClass_field_FC[4];  // 0x48
    char SpreadTimer[4];  // 0x4C
    char customSound_controller[20];  // 0x50
    unsigned char alignmentPadding75_3;  // 0x51
    char NumImages[4];  // 0x52
    unsigned int spawnStatus;  // 0x54
    char TiberiumClass_field_EC[4];  // 0x56
    char TiberiumClass_field_10C[4];  // 0x58
    char TiberiumClass_field_110[4];  // 0x5C
    bool inLimbo;  // 0x5D
    bool inOpenToppedTransport;  // 0x5E
    bool isSelected;  // 0x5F
    char TiberiumClass_field_114[4];  // 0x60
    unsigned char alignmentPadding85_3;  // 0x61
    char customSound[4];  // 0x64
    char bombVisible[1];  // 0x68
    unsigned char alignmentPadding69;  // 0x69
    bool wasFallingDown;  // 0x6A
    bool isBomb;  // 0x6B
    char health[4];  // 0x6C
    unsigned char alignmentPadding91_3;  // 0x6D
    char estimatedHealth[4];  // 0x70
    bool isOnMap;  // 0x74
    unsigned char alignmentPadding75;  // 0x75
    unsigned char alignmentPadding99_2;  // 0x76
    unsigned int visibilityFlags;  // 0x7C
    bool needsRedraw;  // 0x80
    unsigned char inLimbo_d;  // 0x81
    unsigned char inOpenToppedTransport_d;  // 0x82
    unsigned char isSelected_d;  // 0x83
    bool hasParachute;  // 0x84
    unsigned char alignmentPadding85;  // 0x85
    AnimClass* parachute;  // 0x88
    bool onBridge;  // 0x8C
    bool isFallingDown;  // 0x8D
    bool isAliveFlag;  // 0x90
    unsigned char alignmentPadding91;  // 0x91
    unsigned int lastLayer;  // 0x94
    unsigned int tail_95;  // 0x95
    void* isInLogic;  // 0x98
    bool isVisible;  // 0x99
    unsigned short alignmentPadding99;  // 0x9A
    LineTrail* Growth_d;  // 0xA8
    char ArrayIndex[4];  // 0xAC
    char Spread_d[4];  // 0xB0
    double SpreadPercentage;  // 0xB4
    unsigned int GrowthPercentage;  // 0xB8
    char Power_d[4];  // 0xBC
    double GrowthPercentage_d;  // 0xC0
    char Value[4];  // 0xC8
    char Power_2[4];  // 0xCC
    char Color_d[4];  // 0xD0
    unsigned int Debris;  // 0xD4
    OverlayTypeClass* Image;  // 0xD8
    char NumFrames[4];  // 0xDC
    char Image_d[4];  // 0xE0
    char TiberiumClass_field_EC_d[4];  // 0xEC
    char TiberiumClass_field_F0[4];  // 0xF0
    char TiberiumClass_field_F4_d[4];  // 0xF4
    char TiberiumClass_field_F8_d[4];  // 0xF8
    char TiberiumClass_field_FC_d[4];  // 0xFC
    char SpreadTimer_d[12];  // 0x100
    char GrowthTimer[4];  // 0x104
    char TiberiumClass_field_10C_d[4];  // 0x10C
    char TiberiumClass_field_110_d[4];  // 0x110
    char TiberiumClass_field_114_d[4];  // 0x114
    char TiberiumClass_field_118[4];  // 0x118
    char GrowthTimer_d[12];  // 0x11C
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
    char __pad_E4[8];  // 0xE4 (ml)
    static double vfptr(...);  // plateau: C2039/C3861 stub
    static double vfptr1(...);  // plateau: C2039/C3861 stub
    static double vfptr2(...);  // plateau: C2039/C3861 stub
    static double vfptr3(...);  // plateau: C2039/C3861 stub
};

} // namespace gamemd
