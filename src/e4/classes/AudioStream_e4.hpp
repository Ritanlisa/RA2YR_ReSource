// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MouseClass;  // fix_fwd_type_supply
struct AudioStream {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char u8_4;  // 0x4
    void* q008;  // 0x8
    void* q00C;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned int u32_14;  // 0x14
    unsigned int u32_18;  // 0x18
    void* q01C;  // 0x1C
    void* q020;  // 0x20
    void* q024;  // 0x24
    void* q028;  // 0x28
    unsigned int q029;  // 0x29
    unsigned int u32_2C;  // 0x2C
    void* q030;  // 0x30
    unsigned int u32_34;  // 0x34
    void* q038;  // 0x38
    void* q03C;  // 0x3C
    void* q040;  // 0x40
    void* q044;  // 0x44
    void* q046;  // 0x46
    void* q048;  // 0x48
    void* q04C;  // 0x4C
    void* q050;  // 0x50
    void* q054;  // 0x54
    void* q058;  // 0x58
    unsigned char q05C;  // 0x5C
    unsigned char q05D;  // 0x5D
    unsigned char q05E;  // 0x5E
    void* q060;  // 0x60
    unsigned char q062;  // 0x62
    void* q064;  // 0x64
    void* q068;  // 0x68
    void* q070;  // 0x70
    unsigned int u32_74;  // 0x74
    unsigned int u32_78;  // 0x78
    unsigned int u32_80;  // 0x80
    unsigned char u8_84;  // 0x84
    void* q088;  // 0x88
    unsigned int u32_8C;  // 0x8C
    void* q090;  // 0x90
    unsigned char q094;  // 0x94
    void* q098;  // 0x98
    unsigned int u32_9C;  // 0x9C
    unsigned char q0A0;  // 0xA0
    unsigned int u32_A4;  // 0xA4
    unsigned int u32_A8;  // 0xA8
    void* q0AC;  // 0xAC
    void* q0B0;  // 0xB0
    unsigned char q0B4;  // 0xB4
    unsigned int u32_BC;  // 0xBC
    unsigned int u32_C0;  // 0xC0
    unsigned char q0C4;  // 0xC4
    unsigned char q0C8;  // 0xC8
    unsigned char q0CC;  // 0xCC
    unsigned char q0D0;  // 0xD0
    unsigned int u32_D4;  // 0xD4
    unsigned char q0D8;  // 0xD8
    unsigned int u16_E8;  // 0xE8
    unsigned int q100;  // 0x100
    void* q104;  // 0x104
    unsigned int u32_110;  // 0x110
    void* q114;  // 0x114
    void* q118;  // 0x118
    unsigned int q120;  // 0x120
    unsigned int q128;  // 0x128
    unsigned int q130;  // 0x130
    void* q134;  // 0x134
    unsigned int q140;  // 0x140
    void* q144;  // 0x144
    unsigned int q148;  // 0x148
    void* q150;  // 0x150
    unsigned char q160;  // 0x160
    unsigned int q164;  // 0x164
    unsigned int q168;  // 0x168
    unsigned int u32_170;  // 0x170
    unsigned int u32_174;  // 0x174
    unsigned int u32_178;  // 0x178
    unsigned char q180;  // 0x180
    unsigned int q188;  // 0x188
    unsigned int u32_18C;  // 0x18C
    unsigned int u32_19C;  // 0x19C
    unsigned int u32_1A0;  // 0x1A0
    unsigned char u8_1A4;  // 0x1A4
    unsigned int u32_1C0;  // 0x1C0
    void* q1E0;  // 0x1E0
    unsigned int *AudioStream_field_0x10;
    unsigned int *AudioStream_field_0x14;
    unsigned int *AudioStream_field_0x18;
    unsigned int AudioStream_field_0x1C;
    unsigned int AudioStream_field_0x1E0;
    unsigned int AudioStream_field_0x20;
    unsigned int AudioStream_field_0x24;
    unsigned int AudioStream_field_0x28;
    unsigned int *AudioStream_field_0x2C;
    unsigned int AudioStream_field_0x30;
    unsigned int *AudioStream_field_0x34;
    unsigned int AudioStream_field_0x38;
    unsigned int AudioStream_field_0x3C;
    unsigned int *AudioStream_field_0x4;
    unsigned int AudioStream_field_0x40;
    unsigned int AudioStream_field_0x44;
    unsigned int AudioStream_field_0x48;
    unsigned int AudioStream_field_0x4C;
    unsigned int AudioStream_field_0x50;
    unsigned int AudioStream_field_0x54;
    unsigned int AudioStream_field_0x8;
    unsigned int *AudioStream_field_0xA8;
    unsigned int AudioStream_field_0xAC;
    unsigned int AudioStream_field_0xC;
    unsigned int *AudioStream_field_0xC0;
    unsigned int *AudioStream_field_0xD4;
    unsigned int *__pad_0;
    unsigned int *__pad_9C;
    unsigned int *__pad_D8;
    unsigned int q00C6;
    unsigned int u32_1E4;
    unsigned int *__pad_5C;
    unsigned int Audio;
// --- flat members (END) ---
    void ReleaseSubsystem();  // 0x401910
    void Stop();  // 0x4026B0
    void ReleaseChannel(void *a1_1);  // 0x4026F0
    void DestroyAll(void * Block);  // 0x4033C0
    int Reset();  // 0x403820
    int ResetChannel(int a2, int a3);  // 0x4038A0
    int ResetChannel2(int a2, int a3);  // 0x4038C0
    int SetupPlayback();  // 0x404700
    int SelectRandom();  // 0x4047B0
    void CleanupChannels();  // 0x404E70
    int ReadStreamAndSyncPosition();  // 0x4079C0
    int SetPlaybackCallback();  // 0x407A30
    int ProcessCallback(void *a1_1);  // 0x407A60
    void InitNodeFields(void *a1_1);  // 0x4084E0
    int GetChannel();  // 0x408D50
    int ReadStreamAndReturn(void *a1_1);  // 0x409310
    int ReadSamples(const void * a2, void *a2_2);  // 0x4A33A0
    MouseClass * * DrawWaveform(IUnknown * aP1, IUnknown * aP2, IUnknown * aP3, IUnknown * aP4, int a6, int a7, int a8);  // 0x4BEAC0
    int SetFlag4C(void *a1_1);  // 0x7BD270
    int CalcReadPos();
    int ProcessStream();  // 0x7BEA80
    unsigned int GetPosition(void *a1_1);  // 0x7C3960
    void Destructor(unsigned int * Block);  // 0x402550
    int CheckFormatChanged(int a1, const void * a2);  // 0x402800
    int InitListAndCounters(void *a1_1);  // 0x4028B0
    int UpdateTimers();  // 0x404FD0
    int UpdateCountdowners();  // 0x405040
    char * Constructor(uint64_t a2);  // 0x407860
};
} // namespace gamemd
