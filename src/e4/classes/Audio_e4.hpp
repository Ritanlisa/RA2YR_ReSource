// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Audio {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned int u32_4;  // 0x4
    unsigned int q008;  // 0x8
    bool q00A;  // 0xA
    unsigned int u32_C;  // 0xC
    unsigned int u32_10;  // 0x10
    void* q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned int u32_1C;  // 0x1C
    unsigned int u32_20;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q026;  // 0x26
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    void* q034;  // 0x34
    void* q038;  // 0x38
    unsigned char q03C;  // 0x3C
    unsigned int u32_40;  // 0x40
    unsigned char q044;  // 0x44
    unsigned int q050;  // 0x50
    unsigned int u32_54;  // 0x54
    unsigned char q060;  // 0x60
    unsigned int q064;  // 0x64
    unsigned char q068;  // 0x68
    unsigned int q080;  // 0x80
    unsigned int q084;  // 0x84
    unsigned int u32_90;  // 0x90
    unsigned char u8_A4;  // 0xA4
    unsigned int u32_A8;  // 0xA8
    unsigned int u32_D4;  // 0xD4
    unsigned int q100;  // 0x100
    unsigned char q104;  // 0x104
    unsigned int q128;  // 0x128
    void* q130;  // 0x130
    void* q134;  // 0x134
    unsigned int u32_138;  // 0x138
    unsigned int q144;  // 0x144
    unsigned int u32_148;  // 0x148
    unsigned int u32_14C;  // 0x14C
    unsigned int q150;  // 0x150
    unsigned char q164;  // 0x164
    unsigned int q168;  // 0x168
    unsigned char q260;  // 0x260
    unsigned char q28E;  // 0x28E
    void* q304;  // 0x304
    void* q308;  // 0x308
    unsigned int q310;  // 0x310
    unsigned int q324;  // 0x324
    unsigned int q328;  // 0x328
    unsigned int q360;  // 0x360
    unsigned int q374;  // 0x374
    unsigned int q530;  // 0x530
    unsigned int q598;  // 0x598
    unsigned char q608;  // 0x608
    unsigned char q650;  // 0x650
    unsigned char q654;  // 0x654
    void* q710;  // 0x710
    unsigned int Audio_field_0x14;
    unsigned int Audio_field_0x34;
    unsigned int Audio_field_0x38;
    unsigned int Audio_field_0xC;
    unsigned int __pad_0;
    unsigned int __pad_10;
    unsigned int __pad_18;
    unsigned int __pad_3C;
    unsigned int u32_C4;
// --- flat members (END) ---
    int GetChannelStatus();  // 0x402720
    int ReleaseChannelRefs();  // 0x404D80
    int UpdatePlaybackPosition();  // 0x4054A0
    ObjectClass * ProcessMixerOutput();  // 0x4063B0
    BOOL ApplyFormatFlags(int * a1,  char * a2);    // 0x406870
    int WaitForCallback();  // 0x4070B0
    void Release();  // 0x407F40
    int IsSoundPlaying();  // 0x408070
    int CalcRate(int a2,  int a3);    // 0x408540
    int GetSampleSize();  // 0x409320
    int ParseVolume(const char ** a1,  ObjectClass * aP2);    // 0x5D0470
    char ** SetSoundFileName(char * Source,  int a3);    // 0x5D5820
    char LoadWAVFiles();  // 0x7207F0
    char InitFromINI();  // 0x7510D0
    void * LoadSoundINI();  // 0x7513F0
    unsigned int GetSamplePosition(MouseClass * aP1,  MouseClass * aP2);    // 0x7BD130
    int InitChannels();  // 0x401080
    int FlushChannel();  // 0x404DD0
    void Shutdown();  // 0x406D40
    BOOL IsSoundEnabled();  // 0x407000
    void * GetEnabled();  // 0x407010
    int GetFlag();  // 0x407070
    int Callback();  // 0x4093B0
    LPDIRECTSOUND GetDirectSound();  // 0x40A7A0
    int IsPlaying();  // 0x7529E0
    static double SetScoreVolume(...);  // C2597 interim stub
    static double SetSoundVolume(...);  // C2597 interim stub
    static double SetVoiceVolume(...);  // C2597 interim stub
    static double IsLoud(...);  // C2597 interim stub
};
} // namespace gamemd
