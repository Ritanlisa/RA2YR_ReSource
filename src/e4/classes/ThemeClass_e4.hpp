// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

#ifndef GAMEMD_G2_ThemeClass_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_ThemeClass_DEF 1
struct ThemeClass {
    int ThemeClass_field_00;  // 0x0
    AbstractClass * ptr_4;  // 0x4
    int m_Name[8];  // 0x8
    int ThemeClass_field_28;  // 0x28
    int ThemeClass_field_2C;  // 0x2C
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static int ClearQueues();
    char ReadThemeEntry(uint8_t *** a2);
    int RequestBuffer(void *a1 = 0);
    int GetValue(void *a1 = 0, void *a2 = 0);
    void * InitializeThemes(char * a2);
    bool GetField(int a1, void *a2 = 0);
    int  Play(int a2, void *a1 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0);  // 0x720bb0
    int ReadThemeEntry(uint8_t ***a2, void * aRepeat, void * aScenario, void * aSide, void * aSound);
};
#endif  // GAMEMD_G2_ThemeClass_DEF

} // namespace gamemd
