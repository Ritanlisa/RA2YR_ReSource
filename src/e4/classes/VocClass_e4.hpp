// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

#ifndef GAMEMD_G2_VocClass_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_VocClass_DEF 1
struct VocClass {
// --- flat members (BEGIN) ---
    char Header[12];  // 0x0
    char Type[4];  // 0x14
    char Volume[32];  // 0x18
    unsigned int VocClass_field_38;  // 0x38
    unsigned int VocClass_field_3C;  // 0x3C
    char Priority[4];  // 0x40
    unsigned int VocClass_field_44;  // 0x44
int Limit;  // 0x48 [X35-L7 kind=int]
    char Loop[4];  // 0x4C
int Range;  // 0x50 [X35-L7 kind=int]
    float MinVolume;  // 0x54
int MinDelay;  // 0x58 [X35-L7 kind=int]
    char MaxDelay[4];  // 0x5C
int MinFDelta;  // 0x60 [X35-L7 kind=int]
int MaxFDelta;  // 0x64 [X35-L7 kind=int]
int VShift;  // 0x68 [X35-L7 kind=int]
    char Name;  // 0x6C
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
int NumSamples;  // 0x134 [X35-L7 kind=int]
    int Attack;  // 0x138 [X30:type_map]
    char Decay[4];  // 0x13C
    unsigned int VocClass_field_140;  // 0x140
    unsigned int VocClass_field_144;  // 0x144
// --- flat members (END) ---
    char * GetSampleNameByIndex(int a1);
    int FindByName(void *a1 = 0);
    int Release(void *a1 = 0);
     int Check(void *a1 = 0, void *a2 = 0, void *a3 = 0);
    static int FindIndex(VocClass * aP1);
    char * GetSampleName(void *a1 = 0);
    char LoadFromINI(CCINIClass * aP1, void *a2 = 0);  // G42.39 supply
    unsigned int u32_278;  // 0x278 (offset-truth)
    unsigned char __pad_00C;  // 0xC [X30:canon]
};
#endif  // GAMEMD_G2_VocClass_DEF

} // namespace gamemd
