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
    unsigned int VocClass_field_38;  // 0x38
    unsigned int VocClass_field_3C;  // 0x3C
    char Priority[4];  // 0x40
    unsigned int VocClass_field_44;  // 0x44
    char Limit[4];  // 0x48
    char Loop[4];  // 0x4C
    char Range[4];  // 0x50
    float MinVolume;  // 0x54
    char MinDelay[4];  // 0x58
    char MaxDelay[4];  // 0x5C
    char MinFDelta[4];  // 0x60
    char MaxFDelta[4];  // 0x64
    char VShift[4];  // 0x68
    char Name;  // 0x6C
    unsigned int u32_7C;  // 0x7C
    char q080[4];  // 0x80
    float q084;  // 0x84
    char q088[4];  // 0x88
    unsigned int VocClass_field_8C;  // 0x8C
    unsigned int VocClass_field_90;  // 0x90
    unsigned int VocClass_field_94;  // 0x94
    unsigned int VocClass_field_98;  // 0x98
    unsigned int VocClass_field_9C;  // 0x9C
    unsigned int VocClass_field_A0;  // 0xA0
    unsigned int VocClass_field_A4;  // 0xA4
    unsigned int ActiveBufferCount;  // 0xA8
    unsigned int VocClass_field_AC;  // 0xAC
    void* pVoiceChannel;  // 0xB0
    char SampleIndex[128];  // 0xB4
    void* q0BC;  // 0xBC
    unsigned int u32_FC;  // 0xFC
    char q100[4];  // 0x100
    unsigned int q104;  // 0x104
    char q108;  // 0x108
    char q114[4];  // 0x114
    char q118[4];  // 0x118
    unsigned int q124;  // 0x124
    char q128[4];  // 0x128
    unsigned int q130;  // 0x130
    char NumSamples[4];  // 0x134
    char Attack[4];  // 0x138
    char Decay[4];  // 0x13C
    unsigned int VocClass_field_140;  // 0x140
    unsigned int VocClass_field_144;  // 0x144

    unsigned int u32_278;
// --- flat members (END) ---
    char * GetSampleNameByIndex(int a1);
    int FindByName();
    int Release();
     double Check(...);  // C2597 interim stub
    static double FindIndex(...);  // C2597 interim stub
    char * GetSampleName(); // N_fix R5 supply (cache truth)

    char LoadFromINI(CCINIClass * aP1);  // G42.39 supply
};

} // namespace gamemd
