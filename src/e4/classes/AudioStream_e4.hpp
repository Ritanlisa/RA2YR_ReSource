// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MouseClass;  // fix_fwd_type_supply
struct AudioStream {
    unsigned int __pad_0;  // 0x0
    int u8_4;  // 0x4
    int q008;  // 0x8
    int q00C;  // 0xC
    int u32_10;  // 0x10
    int u32_14;  // 0x14
    unsigned int u32_18;  // 0x18
    unsigned int u32_1C;  // 0x1C
    int q020;  // 0x20
    int q024;  // 0x24
    int q028;  // 0x28
    int u32_2C;  // 0x2C
    int q030;  // 0x30
    int u32_34;  // 0x34
    int q038;  // 0x38
    int q03C;  // 0x3C
    int q040;  // 0x40
    int q044;  // 0x44
    int q048;  // 0x48
    int q04C;  // 0x4C
    int q050;  // 0x50
    int q054;  // 0x54
    int q058;  // 0x58
    unsigned char q05C;  // 0x5C
    char __pad_5D[19];  // 0x5D
    unsigned char u32_70;  // 0x70
    char __pad_71[3];  // 0x71
    unsigned char u32_74;  // 0x74
    char __pad_75[3];  // 0x75
    unsigned int u32_78;  // 0x78
    char __pad_7C[8];  // 0x7C
    unsigned char u32_84;  // 0x84
    char __pad_85[3];  // 0x85
    char __pad_88[8];  // 0x88
    int q090;  // 0x90
    char __pad_94[4];  // 0x94
    int q098;  // 0x98
    unsigned int u32_9C;  // 0x9C
    char __pad_A0[4];  // 0xA0
    unsigned char u32_A4;  // 0xA4
    char __pad_A5[3];  // 0xA5
    unsigned int u32_A8;  // 0xA8
    unsigned int u32_AC;  // 0xAC
    int q0B0;  // 0xB0
    char __pad_B4[8];  // 0xB4
    int u32_BC;  // 0xBC
    int u32_C0;  // 0xC0
    char __pad_C4[16];  // 0xC4
    int u32_D4;  // 0xD4
    unsigned int q0D8;  // 0xD8
    char __pad_DC[28];  // 0xDC
    unsigned char q0F8;  // 0xF8
    char __pad_F9[23];  // 0xF9
    unsigned char u32_110;  // 0x110
    char __pad_111[7];  // 0x111
    unsigned char q118;  // 0x118
    char __pad_119[7];  // 0x119
    unsigned int vt_slot_120;  // 0x120
    char __pad_124[4];  // 0x124
    unsigned int u32_128;  // 0x128
    char __pad_12C[20];  // 0x12C
    unsigned int u32_140;  // 0x140
    char __pad_144[4];  // 0x144
    unsigned int q148;  // 0x148
    char __pad_14C[4];  // 0x14C
    unsigned char u32_150;  // 0x150
    char __pad_151[15];  // 0x151
    unsigned char q160;  // 0x160
    char __pad_161[3];  // 0x161
    unsigned int q164;  // 0x164
    unsigned char q168;  // 0x168
    char __pad_169[7];  // 0x169
    unsigned char u32_170;  // 0x170
    char __pad_171[3];  // 0x171
    unsigned char u32_174;  // 0x174
    char __pad_175[3];  // 0x175
    unsigned char u32_178;  // 0x178
    char __pad_179[19];  // 0x179
    unsigned char u32_18C;  // 0x18C
    char __pad_18D[3];  // 0x18D
    char __pad_190[8];  // 0x190
    unsigned int u32_198;  // 0x198
    unsigned int u32_19C;  // 0x19C
    unsigned int u32_1A0;  // 0x1A0
    unsigned char u32_1A4;  // 0x1A4
    char __pad_1A5[3];  // 0x1A5
    char __pad_1A8[24];  // 0x1A8
    unsigned int u32_1C0;  // 0x1C0
    char __pad_1C4[28];  // 0x1C4
    unsigned int u32_1E0;  // 0x1E0
    unsigned int u32_1E4;  // 0x1E4
    char __pad_1E8[1256];  // 0x1E8
    unsigned int u32_6D0;  // 0x6D0
    char __pad_6D4[4];  // 0x6D4
    unsigned int u32_6D8;  // 0x6D8
    char __pad_6DC[148];  // 0x6DC
    unsigned int u32_770;  // 0x770
    char __pad_774[24];  // 0x774
    unsigned int u32_78C;  // 0x78C
    unsigned int u32_790;  // 0x790
    unsigned int u32_794;  // 0x794
    char __pad_798[4];  // 0x798
    unsigned int u32_79C;  // 0x79C
    char __pad_7A0[8];  // 0x7A0
    unsigned int u32_7A8;  // 0x7A8
    unsigned int u32_7AC;  // 0x7AC
    unsigned int u32_7B0;  // 0x7B0
    char __pad_7B4[8];  // 0x7B4
    unsigned int u32_7BC;  // 0x7BC
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int ReleaseSubsystem();  // 0x401910
    int Stop(void *a1 = 0, void *a2 = 0);  // 0x4026B0
    int ReleaseChannel(void *a1 = 0);  // 0x4026F0
    void DestroyAll(void * Block);  // 0x4033C0
    int Reset(void *a1 = 0, void *a2 = 0);  // 0x403820
    int  ResetChannel(int a2, int a3);  // 0x4038A0
    int  ResetChannel2(int a2, int a3);  // 0x4038C0
    int SetupPlayback();  // 0x404700
    int SelectRandom();  // 0x4047B0
    void CleanupChannels();  // 0x404E70
    int ReadStreamAndSyncPosition();  // 0x4079C0
    int SetPlaybackCallback();  // 0x407A30
    int ProcessCallback(void *a1_1);  // 0x407A60
    void InitNodeFields();  // 0x4084E0
    int GetChannel();  // 0x408D50
    int ReadStreamAndReturn(void *a1_1);  // 0x409310
    static int ReadSamples(const void * a2, void *a2_2);  // 0x4A33A0
    char DrawWaveform(int *a2, unsigned int *a3, unsigned int *a4, uint8_t *a5, int a6, int a7, int a8);  // G57w10-S raw 0x004BEAC0 IUnknown 占位清除
    int SetFlag4C(void *a1 = 0);  // 0x7BD270
    int CalcReadPos();
    int ProcessStream();  // 0x7BEA80
    unsigned int GetPosition(void *a1 = 0);  // 0x7C3960
    void Destructor(unsigned int * Block);  // 0x402550
    static int CheckFormatChanged(int a1, const void * a2);  // 0x402800
    int InitListAndCounters(void *a1_1);  // 0x4028B0
    int UpdateTimers();  // 0x404FD0
    static int UpdateCountdowners();
    char * Constructor(uint64_t, void * a2, void * aAudioStream, void *a4 = 0);  // 0x407860
    char * Constructor(uint64_t, void * a2, void * aAudioStream);
};
} // namespace gamemd