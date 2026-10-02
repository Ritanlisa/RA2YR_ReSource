// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct AbstractClass;  // fix_fwd_type_supply
struct CampaignClass;  // fix_fwd_type_supply
struct Movie {
// --- flat members (BEGIN) ---
    AbstractClass* q000;  // 0x0
    void* q004;  // 0x4
    void* q008;  // 0x8
    bool q00B;  // 0xB
    void* q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned int u32_14;  // 0x14
    void* q018;  // 0x18
    unsigned int u32_1C;  // 0x1C
    unsigned int q020;  // 0x20
    unsigned int u32_24;  // 0x24
    unsigned int u32_28;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q034;  // 0x34
    unsigned int q38;  // 0x38
    unsigned char q03C;  // 0x3C
    void *q40;  // 0x40
    void* q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned int u32_4C;  // 0x4C
    unsigned int u32_50;  // 0x50
    unsigned int u32_54;  // 0x54
    AbstractClass * ptr_58;  // 0x58
    unsigned int u32_5C;  // 0x5C
    unsigned int u32_60;  // 0x60
    unsigned int u32_64;  // 0x64
    unsigned int u32_68;  // 0x68
    unsigned int q6C;  // 0x6C
    unsigned char q070;  // 0x70
    unsigned char q074;  // 0x74
    unsigned int q080;  // 0x80
    unsigned int q084;  // 0x84
    AbstractClass * q088;  // 0x88
    unsigned int q100;  // 0x100
    unsigned int q104;  // 0x104
    void* q108;  // 0x108
    unsigned char q114;  // 0x114
    unsigned int q118;  // 0x118
    unsigned int q128;  // 0x128
    unsigned char q130;  // 0x130
    void* q134;  // 0x134
    unsigned int q150;  // 0x150
    unsigned int q260;  // 0x260
    void* q264;  // 0x264
    unsigned char q274;  // 0x274
    unsigned char q278;  // 0x278
    unsigned int q280;  // 0x280
    unsigned char tail_28D;  // 0x28D
    unsigned int Movie_field_0xC;
    unsigned int *__pad_10;
    unsigned int *__pad_28;
    unsigned int q0180;
    unsigned int q058;
    unsigned int q05C;
    unsigned int q060;
    unsigned int Movie_field_0x4;
    unsigned int Movie_field_0x8;
    unsigned int q038;
    unsigned int q06C;
    unsigned int q040;
    unsigned int Audio;
    unsigned int CampaignClass;
    unsigned int Debug;
    unsigned int PlayWrapper;
// --- flat members (END) ---
    AbstractClass * * SetupScreen(int aP1);
    CampaignClass * * GetSection(CCINIClass * aP1, CCINIClass * aP2);  // 0x49E3B0
    int Play(int a1@<edx>, int a2@<ebp>, int a3@<edi>, const char *a4@<ecx>, char a5, char a6, char a7, char a8, int a1, int a2, int a3, int a4, int aP1);
    int Update(void *a1_1, void *a2_1, void *a3_1, void *a4_1);  // 0x7209D0
    unsigned int SelectNextBuildableType(int aP1);  // 0x720A80
    char GetSectionID(unsigned int *a2);  // 0x49BC80
    char GetState(unsigned int *aP1);  // 0x49BCC0
};
} // namespace gamemd
