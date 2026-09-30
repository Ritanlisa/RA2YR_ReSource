// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ScriptTypeClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    int uniqueId;  // 0x10
    unsigned int q011;  // 0x11
    bool IsAllocated;  // 0x13
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    unsigned int q01A;  // 0x1A
    int referenceCount;  // 0x1C
    bool q01D;  // 0x1D
    void * NeedsSaveOrLink;  // 0x20
    char arrayIndex[4];  // 0x24
    bool isGlobal;  // 0x28
    bool q02B;  // 0x2B
    char actionsCount[4];  // 0x2C
    char scriptActions[400];  // 0x30
    unsigned char q031;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    unsigned char q034;  // 0x34
    unsigned int q038;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    unsigned int q03C;  // 0x3C
    unsigned int UINameLabel;  // 0x3D
    unsigned int u32_40;  // 0x40
    bool q042;  // 0x42
    int q044;  // 0x44
    unsigned int q048;  // 0x48
    bool q04A;  // 0x4A
    unsigned int q04C;  // 0x4C
    unsigned char q04F;  // 0x4F
    unsigned int q050;  // 0x50
    unsigned int q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q05C;  // 0x5C
    void * UIName;  // 0x60
    unsigned int Name;  // 0x64
    unsigned int q068;  // 0x68
    ObjectClass* q06C;  // 0x6C
    unsigned char q070;  // 0x70
    bool q074;  // 0x74
    unsigned char q078;  // 0x78
    void* q07C;  // 0x7C
    unsigned int q080;  // 0x80
    unsigned int q084;  // 0x84
    void* q088;  // 0x88
    void* q08C;  // 0x8C
    unsigned int u32_90;  // 0x90
    unsigned int q094;  // 0x94
    unsigned int tail_95;  // 0x95
    void* q098;  // 0x98
    void * q09C;  // 0x9C
    INIClass* q0A0;  // 0xA0
    ObjectTypeClass* q0A4;  // 0xA4
    unsigned int u32_A8;  // 0xA8
    unsigned char q0A9;  // 0xA9
    unsigned char q0AA;  // 0xAA
    unsigned int q0AB;  // 0xAB
    void* q0AC;  // 0xAC
    void* q0B0;  // 0xB0
    unsigned char u8_B1;  // 0xB1
    void* q0B8;  // 0xB8
    unsigned char q0B9;  // 0xB9
    unsigned int q0C3;  // 0xC3
    void* q0C4;  // 0xC4
    void* q0CC;  // 0xCC
    unsigned char q0D0;  // 0xD0
    AnimClass* q0D4;  // 0xD4
    void* q0D8;  // 0xD8
    void* q0DC;  // 0xDC
    void* q0E0;  // 0xE0
    AbstractClass* q0E4;  // 0xE4
    AbstractClass* q0E8;  // 0xE8
    unsigned int q0EC;  // 0xEC
    void* q0F0;  // 0xF0
    void* q0F4;  // 0xF4
    void* q0F7;  // 0xF7
    OverlayTypeClass* q0F8;  // 0xF8
    unsigned int q0F9;  // 0xF9
    unsigned char q0FB;  // 0xFB
    ObjectClass* q0FC;  // 0xFC
    unsigned int q100;  // 0x100
    unsigned int q108;  // 0x108
    unsigned int q10C;  // 0x10C
    DynamicVector* q110;  // 0x110
    unsigned int q111;  // 0x111
    unsigned int q114;  // 0x114
    unsigned int q118;  // 0x118
    unsigned int q11C;  // 0x11C
    unsigned int q120;  // 0x120
    unsigned int q124;  // 0x124
    unsigned int q128;  // 0x128
    unsigned int q12C;  // 0x12C
    unsigned int q130;  // 0x130
    unsigned int q134;  // 0x134
    unsigned int q138;  // 0x138
    unsigned int q13C;  // 0x13C
    unsigned int q140;  // 0x140
    unsigned int q144;  // 0x144
    unsigned int q148;  // 0x148
    unsigned char q14C;  // 0x14C
    unsigned int q150;  // 0x150
    unsigned char q154;  // 0x154
    void* q158;  // 0x158
    unsigned char q15C;  // 0x15C
    unsigned int q160;  // 0x160
    unsigned int q162;  // 0x162
    unsigned int q164;  // 0x164
    unsigned int q168;  // 0x168
    bool q16B;  // 0x16B
    void* q16C;  // 0x16C
    unsigned char q16D;  // 0x16D
    unsigned int q16F;  // 0x16F
    unsigned char q170;  // 0x170
    unsigned char q174;  // 0x174
    char q180;  // 0x180
    void* q184;  // 0x184
    unsigned int q188;  // 0x188
    unsigned int q190;  // 0x190
    unsigned int q194;  // 0x194
    unsigned char q198;  // 0x198
    unsigned int q199;  // 0x199
    bool q1A1;  // 0x1A1
    unsigned int q1A2;  // 0x1A2
    unsigned int q1A5;  // 0x1A5
    unsigned int q1A7;  // 0x1A7
    unsigned int q1AC;  // 0x1AC
    unsigned int q1B0;  // 0x1B0
    unsigned int q1B1;  // 0x1B1
    unsigned int q1B5;  // 0x1B5
// --- flat members (END) ---
    ScriptTypeClass * ddtor(char a2);
    TaskForceClass * ReadINI(char * a1, int a2);
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetObjectSize();
    int GetTypeIdentifier();
    int LoadTypeData(void * aP0, int aP1);
    int SaveToINI(void * aP0, int * a1, int aP2);
};

} // namespace gamemd
