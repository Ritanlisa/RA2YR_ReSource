// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ThemeClass {
// --- flat members (BEGIN) ---
    AbstractClass * ptr_4;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned int u32_C;  // 0xC
    unsigned char q010;  // 0x10
    void* q014;  // 0x14
    unsigned int u32_18;  // 0x18
    unsigned int u32_1C;  // 0x1C
    void* q020;  // 0x20
    void* q024;  // 0x24
    unsigned int m_Name;
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
