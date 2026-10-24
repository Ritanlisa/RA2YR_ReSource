// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct WaveClass {
    void * ptr_0;  // 0x0
    void * ptr_4;  // 0x4
    void * ptr_8;  // 0x8
    char ptr_C[1];  // 0xC
    unsigned char u8_D;  // 0xD
    char __pad_E[2];  // 0xE
    int uniqueId;  // 0x10
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    int NeedsSaveOrLink;  // 0x20
    int occupant;  // 0x24
    int owningHouseIndex;  // 0x28
    int fallRate;  // 0x2C
    int nextObject;  // 0x30
    int attachedTag;  // 0x34
    int attachedBomb;  // 0x38
    int ambientSoundController[5];  // 0x3C
    int customSound_controller[5];  // 0x50
    int customSound;  // 0x64
    char bombVisible[1];  // 0x68
    char alignmentPadding69[3];  // 0x69
    int health;  // 0x6C
    int estimatedHealth;  // 0x70
    char isOnMap[1];  // 0x74
    char alignmentPadding75[3];  // 0x75
    int spawnStatus;  // 0x78
    int visibilityFlags;  // 0x7C
    char needsRedraw[1];  // 0x80
    char inLimbo[1];  // 0x81
    char inOpenToppedTransport[1];  // 0x82
    char isSelected[1];  // 0x83
    char hasParachute[1];  // 0x84
    char alignmentPadding85[3];  // 0x85
    int parachute;  // 0x88
    char onBridge[1];  // 0x8C
    bool isFallingDown;  // 0x8D
    char wasFallingDown[1];  // 0x8E
    char isBomb[1];  // 0x8F
    char isAliveFlag[1];  // 0x90
    char alignmentPadding91[3];  // 0x91
    int lastLayer;  // 0x94
    char isInLogic[1];  // 0x98
    bool isVisible;  // 0x99
    char alignmentPadding99[2];  // 0x9A
    int location[3];  // 0x9C
    int lineTrailer;  // 0xA8
    int Target;  // 0xAC
    int Type;  // 0xB0
    int someCoords[2];  // 0xB4
    int WaveClass_field_BC;  // 0xBC
    int WaveClass_field_C0;  // 0xC0
    int WaveClass_field_C4;  // 0xC4
    int WaveClass_field_C8;  // 0xC8
    int WaveClass_field_CC;  // 0xCC
    int WaveClass_field_D0;  // 0xD0
    int WaveClass_field_D4;  // 0xD4
    int WaveClass_field_D8;  // 0xD8
    int WaveClass_field_DC;  // 0xDC
    int WaveClass_field_E0;  // 0xE0
    int WaveClass_field_E4;  // 0xE4
    int WaveClass_field_E8;  // 0xE8
    int WaveClass_field_EC;  // 0xEC
    int WaveClass_field_F0;  // 0xF0
    int WaveClass_field_F4;  // 0xF4
    int WaveClass_field_F8;  // 0xF8
    int WaveClass_field_FC;  // 0xFC
    int WaveClass_field_100;  // 0x100
    int WaveClass_field_104;  // 0x104
    int WaveClass_field_108;  // 0x108
    int WaveClass_field_10C;  // 0x10C
    int WaveClass_field_110;  // 0x110
    int WaveClass_field_114;  // 0x114
    int WaveClass_field_118;  // 0x118
    int WaveClass_field_11C;  // 0x11C
    int WaveClass_field_120;  // 0x120
    int LaserIntensity;  // 0x124
    void * q128;  // 0x128
    char Facing[1];  // 0x12C
    unsigned char WaveClass_field_12D_d;  // 0x12D
    unsigned char WaveClass_field_12E_d;  // 0x12E
    unsigned char WaveClass_field_12F_d;  // 0x12F
    int WaveIntensity;  // 0x130
    unsigned int WaveClass_field_134_d;  // 0x134
    unsigned int WaveClass_field_138_d;  // 0x138
    unsigned int WaveClass_field_13C_d;  // 0x13C
    unsigned int WaveClass_field_140_d;  // 0x140
    unsigned int WaveClass_field_144_d;  // 0x144
    unsigned int WaveClass_field_148_d;  // 0x148
    void * WaveClass_field_14C_d;  // 0x14C
    unsigned int WaveClass_field_150_d;  // 0x150
    unsigned int WaveClass_field_154_d;  // 0x154
    unsigned int WaveClass_field_158_d;  // 0x158
    unsigned int WaveClass_field_15C_d;  // 0x15C
    unsigned int WaveClass_field_160_d;  // 0x160
    unsigned int WaveClass_field_164_d;  // 0x164
    unsigned int WaveClass_field_168_d;  // 0x168
    unsigned int WaveClass_field_16C_d;  // 0x16C
    unsigned int WaveClass_field_170_d;  // 0x170
    unsigned int WaveClass_field_174_d;  // 0x174
    unsigned int WaveClass_field_178_d;  // 0x178
    unsigned int WaveClass_field_17C_d;  // 0x17C
    unsigned int WaveClass_field_180_d;  // 0x180
    unsigned int WaveClass_field_184_d;  // 0x184
    unsigned int WaveClass_field_188_d;  // 0x188
    unsigned int WaveClass_field_18C_d;  // 0x18C
    unsigned int WaveClass_field_190_d;  // 0x190
    unsigned int WaveClass_field_194_d;  // 0x194
    unsigned int WaveClass_field_198_d;  // 0x198
    unsigned int WaveClass_field_19C_d;  // 0x19C
    unsigned int WaveClass_field_1A0_d;  // 0x1A0
    unsigned int WaveClass_field_1A4_d;  // 0x1A4
    void * WaveClass_field_1A8_d;  // 0x1A8
    unsigned int WaveClass_field_1AC_d;  // 0x1AC
    unsigned int WaveClass_field_1B0_d;  // 0x1B0
    unsigned int WaveClass_field_1B4_d;  // 0x1B4
    unsigned int WaveClass_field_1B8_d;  // 0x1B8
    unsigned int WaveClass_field_1BC_d;  // 0x1BC
    unsigned int WaveClass_field_1C0_d;  // 0x1C0
    unsigned int WaveClass_field_1C4_d;  // 0x1C4
    unsigned int WaveClass_field_1C8_d;  // 0x1C8
    unsigned int WaveClass_field_1CC_d;  // 0x1CC
    unsigned int LaserIntensity_d;  // 0x1D0
    unsigned int Owner;  // 0x1D4
    FacingStruct * Facing_d;  // 0x1D8
    unsigned int Cells_d;  // 0x1DC
    char __pad_1E0[16];  // 0x1E0
    unsigned int u32_1F0;  // 0x1F0
    unsigned int u32_1F4;  // 0x1F4
    unsigned int u32_1F8;  // 0x1F8
    unsigned char u8_1FC;  // 0x1FC
    unsigned char u8_1FD;  // 0x1FD
    char __pad_1FE[2];  // 0x1FE
    unsigned int u32_200;  // 0x200
    unsigned int u32_204;  // 0x204
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static unsigned int * Constructor_7632D0(WaveClass *pThis, int a2, int a3);
    WaveClass * ddtor(char a2, int aP1, int a1, int a3);
    char DamageArea(ObjectClass * aP1);
    int CheckStateFlag();
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetObjectSize();
    int GetTypeIdentifier();
    int LoadWaveData(int a2, int a3);
    int ProcessWaveTick(int * a1, int * a2, int a3);
    int StubReturnFalse();
     void Destroy(void *a1 = 0);
};

} // namespace gamemd
