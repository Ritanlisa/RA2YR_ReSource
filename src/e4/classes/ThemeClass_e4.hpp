// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

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
    unsigned char u8_21;  // 0x21
    void* q024;  // 0x24
    char ThemeClass_field_28[4];  // 0x28
    unsigned int ThemeClass_field_2C;  // 0x2C
    unsigned int m_Name;
    unsigned int q0646;
    unsigned int u32_280;
    unsigned int u32_28C;
    unsigned int u32_CC2;
    unsigned char u8_288;
    unsigned char u8_289;
    unsigned int Audio;
// --- flat members (END) ---
    static int ClearQueues();
    char ReadThemeEntry(unsigned __int8 *** a2);
    int RequestBuffer();
    int GetValue();
    void * InitializeThemes(char * a2);
    bool GetField(int a1);
    int Play(int a2);  // 0x720bb0
    int ReadThemeEntry(uint8_t ***a2, void * aRepeat, void * aScenario, void * aSide, void * aSound);
};

} // namespace gamemd
