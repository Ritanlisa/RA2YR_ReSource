// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TerrainTypeClass;  // fix_fwd_type_supply

struct TerrainClass {
    void * GenerateTexture_ph;  // 0x0
    void * ptr_4;  // 0x4
    void * ptr_8;  // 0x8
    void * ptr_C;  // 0xC
    void * uniqueId;  // 0x10
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    void * referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    void * objectTypeFlags;  // 0x24
    void * owningHouseIndex;  // 0x28
    int fallRate;  // 0x2C
    void * nextObject;  // 0x30
    void * attachedTag;  // 0x34
    void * attachedBomb;  // 0x38
    int ambientSoundController[5];  // 0x3C
    int customSound_controller[5];  // 0x50
    int customSound;  // 0x64
    char bombVisible;  // 0x68
    char alignmentPadding69[3];  // 0x69
    int health;  // 0x6C
    int estimatedHealth;  // 0x70
    char isOnMap;  // 0x74
    char alignmentPadding75[3];  // 0x75
    int spawnStatus;  // 0x78
    int visibilityFlags;  // 0x7C
    char needsRedraw;  // 0x80
    char inLimbo;  // 0x81
    char inOpenToppedTransport;  // 0x82
    char isSelected;  // 0x83
    char hasParachute;  // 0x84
    char alignmentPadding85[3];  // 0x85
    void * parachute;  // 0x88
    char onBridge;  // 0x8C
    char isFallingDown;  // 0x8D
    char wasFallingDown;  // 0x8E
    char isBomb;  // 0x8F
    char isAliveFlag[1];  // 0x90
    char alignmentPadding91[3];  // 0x91
    int lastLayer;  // 0x94
    char isInLogic;  // 0x98
    char isVisible;  // 0x99
    unsigned short alignmentPadding99;  // 0x9A
    int location[3];  // 0x9C
    void * lineTrailer;  // 0xA8
    char Animation[8];  // 0xAC
    TerrainTypeClass * Type;  // 0xB4
    bool IsBurning;  // 0xB8
    bool TimeToDie;  // 0xB9
    unsigned char __pad_0BA;  // 0xBA
    char __pad_BB[1];  // 0xBB
    int height;  // 0xBC
    AbstractClass* __pad_0C0;  // 0xC0
    char __pad_C4[12];  // 0xC4
    char TerrainClass_field_rect_D0[16];  // 0xD0
    char __pad_E0[24];  // 0xE0
    unsigned int u32_F8;  // 0xF8
    char __pad_FC[424];  // 0xFC
    unsigned int u32_2A4;  // 0x2A4
    unsigned int u32_2A8;  // 0x2A8
    char __pad_2AC[8];  // 0x2AC
    unsigned int u32_2B4;  // 0x2B4
    char __pad_2B8[4];  // 0x2B8
    unsigned int u32_2BC;  // 0x2BC
    char __pad_2C0[48];  // 0x2C0
    unsigned int u32_2F0;  // 0x2F0
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static unsigned int GenerateTexture(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, char p11, int p12, char p13, char p14, char p15, int p16);  // x4:signals@0x547cf0
    AbstractClass * * ProcessSpawnAnim(unsigned int * a1, AbstractClass * aP2);
    int CheckFrameUpdate(TechnoTypeClass * aP0, int * a1, int aP2);
    int MissionStubReturnZero();
    int MissionStubReturnZero2();
    int MissionStubReturnZero3(int a1, unsigned int * a2);
    void* LoadFromStream(unsigned int * a1, int a2);
    int InitTheatre();  // 0x549e90
    void **  Construct(void * a2, int16_t * a3, void *a1 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0, void *a9 = 0);  // 0x71bb90
};

} // namespace gamemd
