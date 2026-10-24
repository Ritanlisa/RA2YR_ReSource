// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CampaignClass;  // fix_fwd_type_supply
struct Movie {
    unsigned int __pad_000;  // 0x0
    int q004;  // 0x4
    int q008;  // 0x8
    int q00C;  // 0xC
    char __pad_10[1];  // 0x10
    unsigned char u8_11;  // 0x11
    unsigned char u32_12;  // 0x12
    char __pad_13[5];  // 0x13
    unsigned int u32_18;  // 0x18
    char __pad_1C[8];  // 0x1C
    unsigned int u32_24;  // 0x24
    unsigned int u32_28;  // 0x28
    char __pad_2C[12];  // 0x2C
    unsigned int u32_38;  // 0x38
    unsigned int u32_3C;  // 0x3C
    unsigned int u32_40;  // 0x40
    unsigned int u32_44;  // 0x44
    unsigned int u32_48;  // 0x48
    unsigned int u32_4C;  // 0x4C
    unsigned int u32_50;  // 0x50
    unsigned int u32_54;  // 0x54
    AbstractClass * ptr_58;  // 0x58
    unsigned int __pad_05C;  // 0x5C
    unsigned int u32_60;  // 0x60
    unsigned int u32_64;  // 0x64
    unsigned int u32_68;  // 0x68
    unsigned int u32_6C;  // 0x6C
    char __pad_70[272];  // 0x70
    unsigned int u32_180;  // 0x180
    char __pad_184[261];  // 0x184
    char Movie_field_0x289[4];  // 0x289
    char tail_28D[3];  // 0x28D
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static unsigned int PlayWrapper(int p0, int p1, int p2, char p3, char p4, char p5);  // x4:signals@0x5bf260
    AbstractClass * * SetupScreen(int aP1);
    CampaignClass * * GetSection(CCINIClass * aP1, CCINIClass * aP2, void *a3 = 0);  // 0x49E3B0
    int Play(int a1, int a2, int a3, const char *a4, char a5, char a6, char a7, char a8, int aP1);
    int Update(void *a1_1, void *a2_1, void *a3_1, void *a4_1);  // 0x7209D0
    unsigned int SelectNextBuildableType(int aP1);  // 0x720A80
    char GetSectionID(unsigned int *result);  // 0x49BC80
    char GetState(unsigned int *result);  // 0x49BCC0
};
} // namespace gamemd
