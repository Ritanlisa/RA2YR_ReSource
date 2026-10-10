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
    static unsigned int PlayWrapper(...);
    AbstractClass * * SetupScreen(int a2);
    struct CampaignClass * *  GetSection(int a2, unsigned int * a3, void *a1 = 0);  // 0x49E3B0
    int Play(int a1, int a2, int a3, const char *a4, char a5, char a6, char a7, char a8, int aP1);
    int Update(void *a1_1, void *a2_1, void *a3_1, void *a4_1);  // 0x7209D0
    unsigned int  SelectNextBuildableType(int a2);  // 0x720A80
    char  GetSectionID(unsigned int * a2);  // 0x49BC80
    char GetState(unsigned int *result);  // 0x49BCC0
    char __pad_10[20];  // 0x10 (ml)
    unsigned int q0044;  // 0x44 (offset-truth)
    unsigned int q0180;  // 0x180 (offset-truth)
    unsigned int q028;  // 0x28 (offset-truth)
    unsigned int q058;  // 0x58 (offset-truth)
    unsigned int q05C;  // 0x5C (offset-truth)
    unsigned int q060;  // 0x60 (offset-truth)
    static double Movie_field_0x4(...);  // plateau: C2039/C3861 stub
    static double Movie_field_0x8(...);  // plateau: C2039/C3861 stub
    static double Movie_field_0xC(...);  // plateau: C2039/C3861 stub
    static double __pad_05C(...);  // plateau: C2039/C3861 stub
    static double __pad_28(...);  // plateau: C2039/C3861 stub
    static double u32_10(...);  // plateau: C2039/C3861 stub
    static double u32_18(...);  // plateau: C2039/C3861 stub
    static double u32_38(...);  // plateau: C2039/C3861 stub
    static double u32_3C(...);  // plateau: C2039/C3861 stub
    static double u32_40(...);  // plateau: C2039/C3861 stub
    static double u32_44(...);  // plateau: C2039/C3861 stub
    static double u32_48(...);  // plateau: C2039/C3861 stub
    static double u32_4C(...);  // plateau: C2039/C3861 stub
    static double u32_50(...);  // plateau: C2039/C3861 stub
    static double u32_54(...);  // plateau: C2039/C3861 stub
    static double u32_60(...);  // plateau: C2039/C3861 stub
    static double u32_64(...);  // plateau: C2039/C3861 stub
    static double u32_68(...);  // plateau: C2039/C3861 stub
    static double u32_6C(...);  // plateau: C2039/C3861 stub
};
} // namespace gamemd
