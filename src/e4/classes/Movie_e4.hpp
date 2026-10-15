// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CampaignClass;  // fix_fwd_type_supply
struct Movie {
// --- flat members (BEGIN) ---
    AbstractClass * ptr_58;  // 0x58
    unsigned char tail_28D;  // 0x28D
// --- flat members (END) ---
    unsigned int PlayWrapper_ph;  // w18j3: filler renamed (no offset truth; canon Movie::PlayWrapper is a method)
    static unsigned int PlayWrapper(int p0, int p1, int p2, char p3, char p4, char p5);  // x4:signals@0x5bf260
    AbstractClass * * SetupScreen(int aP1);
    CampaignClass * * GetSection(CCINIClass * aP1, CCINIClass * aP2, void *a3 = 0);  // 0x49E3B0
    int Play(int a1, int a2, int a3, const char *a4, char a5, char a6, char a7, char a8, int aP1);
    int Update(void *a1_1, void *a2_1, void *a3_1, void *a4_1);  // 0x7209D0
    unsigned int SelectNextBuildableType(int aP1);  // 0x720A80
    char GetSectionID(unsigned int *result);  // 0x49BC80
    char GetState(unsigned int *result);  // 0x49BCC0
    char __pad_10[20];  // 0x10 (ml)
    unsigned int q0044;  // 0x44 (offset-truth)
    unsigned int q0180;  // 0x180 (offset-truth)
    unsigned int q028;  // 0x28 (offset-truth)
    unsigned int q058;  // 0x58 (offset-truth)
    unsigned int q05C;  // 0x5C (offset-truth)
    unsigned int q060;  // 0x60 (offset-truth)

    unsigned char __pad_05C;  // X10 supply (csp_canon_members)
    unsigned int u32_12;  // X10 supply (member_lookup)
    unsigned int u32_18;  // X10 supply (member_lookup)
    unsigned int u32_24;  // X10 supply (member_lookup)
    unsigned int u32_38;  // X10 supply (member_lookup)
    unsigned int u32_3C;  // X10 supply (member_lookup)
    unsigned int u32_40;  // X10 supply (member_lookup)
    unsigned int u32_48;  // X10 supply (member_lookup)
    unsigned int u32_4C;  // X10 supply (member_lookup)
    unsigned int u32_50;  // X10 supply (member_lookup)
    unsigned int u32_54;  // X10 supply (member_lookup)
    unsigned int u32_64;  // X10 supply (member_lookup)
    unsigned int u32_68;  // X10 supply (member_lookup)
    unsigned int u32_6C;  // X10 supply (member_lookup)
    unsigned char __pad_000;  // 0x0 [X30:canon]
};
} // namespace gamemd
