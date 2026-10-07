// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct VocClass {
// --- flat members (BEGIN) ---
    char Header[12];  // 0x0
    unsigned int u32_4;  // 0x4
    void* q008;  // 0x8
    int u32_C;  // 0xC
    unsigned int u32_10;  // 0x10
    char Type[4];  // 0x14
    char Volume[32];  // 0x18
    unsigned int u32_1C;  // 0x1C
    char q020[4];  // 0x20
    char q024[4];  // 0x24
    unsigned int q028;  // 0x28
    unsigned int q034;  // 0x34
    char Priority[4];  // 0x40
    char Loop[4];  // 0x4C
    char Range[4];  // 0x50
    char MinDelay[4];  // 0x58
    char MaxFDelta[4];  // 0x64
    char Name;  // 0x6C
    unsigned int u32_7C;  // 0x7C
    char q080[4];  // 0x80
    unsigned int VocClass_field_8C;  // 0x8C
    unsigned int VocClass_field_94;  // 0x94
    unsigned int VocClass_field_A4;  // 0xA4
    unsigned int ActiveBufferCount;  // 0xA8
    void* pVoiceChannel;  // 0xB0
    char SampleIndex[128];  // 0xB4
    unsigned int u32_FC;  // 0xFC
    char q100[4];  // 0x100
    unsigned int q104;  // 0x104
    char q114[4];  // 0x114
    char q128[4];  // 0x128
    unsigned int q130;  // 0x130
    char Attack[4];  // 0x138

// --- flat members (END) ---
    char * GetSampleNameByIndex(int a1);
    int FindByName();
    int Release();
     int Check();  // G57w10-S raw 0x00406170 (was C2597 interim stub)
    static int FindIndex(VocClass * aP1);  // G57w10-S raw 0x007514D0 (was C2597 interim stub)
    char * GetSampleName(); // N_fix R5 supply (cache truth)

    char LoadFromINI(CCINIClass * aP1);  // G42.39 supply
};

} // namespace gamemd
