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
    unsigned int u32_8;  // 0x8
    unsigned int u32_C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char u8_11;  // 0x11
    void* q014;  // 0x14
    unsigned int u32_18;  // 0x18
    unsigned int u32_1C;  // 0x1C
    void* q020;  // 0x20
    unsigned int u32_21;  // 0x21
    void* q024;  // 0x24
    char ThemeClass_field_28[4];  // 0x28
    char ThemeClass_field_2C[4];  // 0x2C
// --- flat members (END) ---
    static int ClearQueues();
    char ReadThemeEntry(unsigned __int8 *** a2);
    int RequestBuffer();
    int GetValue();
    void * InitializeThemes(char * a2);
    bool GetField(int a1);
    int Play(int a2);  // 0x720bb0
    int ReadThemeEntry(uint8_t ***a2, void * aRepeat, void * aScenario, void * aSide, void * aSound);
    int[8] m_Name;  // 0x8 (ml)
    unsigned int u32_280;  // 0x280 (offset-truth supply)
    unsigned int u32_288;  // 0x288 (offset-truth supply)
    unsigned char u32_289;  // 0x289 (offset-truth supply)
    unsigned int u32_28C;  // 0x28C (offset-truth supply)
};
#endif  // GAMEMD_G2_ThemeClass_DEF

} // namespace gamemd
