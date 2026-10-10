// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

#ifndef GAMEMD_G2_ThemeClass_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_ThemeClass_DEF 1
struct ThemeClass {
// --- flat members (BEGIN) ---
    char ThemeClass_field_00[4];  // 0x0
    AbstractClass * ptr_4;  // 0x4
    char ThemeClass_field_28[4];  // 0x28
    char ThemeClass_field_2C[4];  // 0x2C
// --- flat members (END) ---
    static int ClearQueues();
    char ReadThemeEntry(uint8_t *** a2);
    int RequestBuffer(void *a1 = 0);
    int GetValue(void *a1 = 0, void *a2 = 0);
    void * InitializeThemes(char * a2);
    bool GetField(int a1, void *a2 = 0);
    int  Play(int a2, void *a1 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0);  // 0x720bb0
    int ReadThemeEntry(uint8_t ***a2, void * aRepeat, void * aScenario, void * aSide, void * aSound);
    int m_Name[8];  // 0x8 (ml)
    unsigned int u32_280;  // 0x280 (offset-truth)
    unsigned int u32_288;  // 0x288 (offset-truth)
    unsigned char u32_289;  // 0x289 (offset-truth)
    unsigned int u32_28C;  // 0x28C (offset-truth)
    static double __pad_37E(...);  // plateau: C2039/C3861 stub
    static double q014(...);  // plateau: C2039/C3861 stub
    static double q656(...);  // plateau: C2039/C3861 stub
    static double u32_14(...);  // plateau: C2039/C3861 stub
    static double u32_18(...);  // plateau: C2039/C3861 stub
    static double u32_1C(...);  // plateau: C2039/C3861 stub
    static double u32_21(...);  // plateau: C2039/C3861 stub
    static double u32_24(...);  // plateau: C2039/C3861 stub
};
#endif  // GAMEMD_G2_ThemeClass_DEF

} // namespace gamemd
