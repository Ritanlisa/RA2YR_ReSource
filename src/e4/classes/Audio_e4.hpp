// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Audio {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    unsigned int u32_4;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned int u32_C;  // 0xC
    unsigned int __pad_10;  // 0x10
    unsigned int u32_14;  // 0x14
    unsigned char q018[28];  // 0x18
    int q034;  // 0x34
    int q038;  // 0x38
    char __pad_3C[76];  // 0x3C
    unsigned int u32_88;  // 0x88
    char __pad_8C[28];  // 0x8C
    unsigned int u32_A8;  // 0xA8
    char __pad_AC[4];  // 0xAC
    unsigned int u32_B0;  // 0xB0
    char __pad_B4[148];  // 0xB4
    unsigned int u32_148;  // 0x148
    unsigned int u32_14C;  // 0x14C
    unsigned int q150;  // 0x150
    char __pad_154[310];  // 0x154
    char Audio_field_0x28A[4];  // 0x28A
    char __pad_28E[1154];  // 0x28E
    int Audio_field_0x710;  // 0x710
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static int IsMediumVolume(void *aP1);
    int GetChannelStatus(void *a1_1);  // 0x402720
    int ReleaseChannelRefs();  // 0x404D80
    int UpdatePlaybackPosition();  // 0x4054A0
    void *  ProcessMixerOutput(char * Source);  // 0x4063B0
    int ApplyFormatFlags(int * a1, char * a2);  // 0x406870
    int WaitForCallback();  // 0x4070B0
    int Release(void *a1 = 0);  // 0x407F40
    int IsSoundPlaying(void *a1 = 0);  // 0x408070
    int  CalcRate(int a2, int a3);  // 0x408540
    int GetSampleSize(void *a1 = 0);  // 0x409320
    ObjectClass * * ParseVolume(const char ** a1, ObjectClass * aP2);  // 0x5D0470
    char ** SetSoundFileName(char *Source, int a3, void *a3_1 = 0);  // 0x5D5820
    static int LoadWAVFiles(void *a1_1);  // 0x7207F0
    int InitFromINI(double a2, double a3, int a1, int aP1, int aP2);
    void * LoadSoundINI();  // 0x7513F0
    unsigned int GetSamplePosition(int aP1, int aP2);  // 0x7BD130
    int InitChannels(void *a1 = 0);  // 0x401080
    int FlushChannel(unsigned int ** Block);  // 0x404DD0
    int Shutdown(void *a1_1);  // 0x406D40
    static int IsSoundEnabled();  // 0x407000
    static void * GetEnabled();  // 0x407010
    int GetFlag();  // 0x407070
    static int Callback();  // 0x4093B0
    static LPDIRECTSOUND GetDirectSound();  // 0x40A7A0
    static int IsPlaying();  // x4:empty@0x7529e0
    static int SetScoreVolume(Audio * aP1, float a2, int a3);
    static int SetSoundVolume(Audio * aP1, float a2, char a3);
    static int SetVoiceVolume(Audio * aP1, float a2, char a3);
    static int IsLoud(Audio * aP1);
    int InitFromINI(double a2, double a3, int a1, int aP1, int aP2, void * aControl, void * aLimit, void * aMinvolume, void * aPriority);
};
} // namespace gamemd
