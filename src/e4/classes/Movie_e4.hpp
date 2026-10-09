// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CampaignClass;  // fix_fwd_type_supply
struct Movie {
// --- flat members (BEGIN) ---
    AbstractClass* q000;  // 0x0
    void* q004;  // 0x4
    void* q008;  // 0x8
    bool q00B;  // 0xB
    void* q00C;  // 0xC
    char u32_E;  // 0xE
    unsigned char q010;  // 0x10
    void* q018;  // 0x18
    unsigned int u32_1C;  // 0x1C
    unsigned int q020;  // 0x20
    unsigned int u32_24;  // 0x24
    unsigned int u32_28;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q034;  // 0x34
    void* q038;  // 0x38
    unsigned char q03C;  // 0x3C
    unsigned int q040;  // 0x40
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
    void* q06C;  // 0x6C
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
    unsigned int u32_180;  // 0x180
    unsigned int u32_1B0;  // 0x1B0
    unsigned int q260;  // 0x260
    void* q264;  // 0x264
    unsigned char q274;  // 0x274
    unsigned char q278;  // 0x278
    unsigned int q280;  // 0x280
    unsigned char tail_28D;  // 0x28D
// --- flat members (END) ---
    unsigned int PlayWrapper_ph;  // w18j3: filler renamed (no offset truth; canon Movie::PlayWrapper is a method)
    static unsigned int PlayWrapper(...);  // w18j3 C2597 static-call supply (w16g4 convention)
    AbstractClass * * SetupScreen(int aP1);
    struct CampaignClass * * GetSection(CCINIClass * aP1, CCINIClass * aP2);  // 0x49E3B0
    int Play(int a1, int a2, int a3, const char *a4, char a5, char a6, char a7, char a8, int aP1);
    int Update(void *a1_1, void *a2_1, void *a3_1, void *a4_1);  // 0x7209D0
    unsigned int SelectNextBuildableType(int aP1);  // 0x720A80
    char GetSectionID(unsigned int *a2);  // 0x49BC80
    char GetState(unsigned int *aP1);  // 0x49BCC0
    char[20] __pad_10;  // 0x16 (ml)
    unsigned int q0044;  // 0x44 (offset-truth supply)
    unsigned int q0180;  // 0x180 (offset-truth supply)
    unsigned int q028;  // 0x28 (offset-truth supply)
    unsigned int q058;  // 0x58 (offset-truth supply)
    unsigned int q05C;  // 0x5C (offset-truth supply)
    unsigned int q060;  // 0x60 (offset-truth supply)
};
} // namespace gamemd
