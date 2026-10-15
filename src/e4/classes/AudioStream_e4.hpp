// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MouseClass;  // fix_fwd_type_supply
struct AudioStream {
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
    int ReadSamples(const void * a2, void *a2_2);  // 0x4A33A0
    char DrawWaveform(int *a2, unsigned int *a3, unsigned int *a4, uint8_t *a5, int a6, int a7, int a8);  // G57w10-S raw 0x004BEAC0 IUnknown 占位清除
    int SetFlag4C(void *a1 = 0);  // 0x7BD270
    int CalcReadPos();
    int ProcessStream();  // 0x7BEA80
    unsigned int GetPosition(void *a1 = 0);  // 0x7C3960
    void Destructor(unsigned int * Block);  // 0x402550
    int CheckFormatChanged(int a1, const void * a2);  // 0x402800
    int InitListAndCounters(void *a1_1);  // 0x4028B0
    int UpdateTimers();  // 0x404FD0
    static int UpdateCountdowners();
    char * Constructor(uint64_t, void * a2, void * aAudioStream, void *a4 = 0);  // 0x407860
    char * Constructor(uint64_t, void * a2, void * aAudioStream);

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    unsigned char q008[4];  /* DListNode */  // X10 supply (member_lookup)
    int q00C;  // X10 supply (member_lookup)
    int q020;  // X10 supply (member_lookup)
    int q024;  // X10 supply (member_lookup)
    int q028;  // X10 supply (member_lookup)
    int q030;  // X10 supply (member_lookup)
    int q038;  // X10 supply (member_lookup)
    int q03C;  // X10 supply (member_lookup)
    int q040;  // X10 supply (member_lookup)
    int q044;  // X10 supply (member_lookup)
    int q048;  // X10 supply (member_lookup)
    int q04C;  // X10 supply (member_lookup)
    int q050;  // X10 supply (member_lookup)
    int q054;  // X10 supply (member_lookup)
    int q058;  // X10 supply (member_lookup)
    int q090;  // X10 supply (member_lookup)
    int q098;  // X10 supply (member_lookup)
    void* q118;  // X10 supply (member_lookup)
    unsigned int q148;  // X10 supply (member_lookup)
    unsigned char q160;  // X10 supply (member_lookup)
    int u32_10;  // X10 supply (member_lookup)
    unsigned int u32_110;  // X10 supply (member_lookup)
    int u32_14;  // X10 supply (member_lookup)
    unsigned int u32_150;  // X10 supply (member_lookup)
    unsigned int u32_170;  // X10 supply (member_lookup)
    unsigned int u32_174;  // X10 supply (member_lookup)
    unsigned int u32_178;  // X10 supply (member_lookup)
    unsigned int u32_18;  // X10 supply (member_lookup)
    unsigned char u32_183[4];  /* void */  // X10 supply (member_lookup)
    unsigned int u32_18C;  // X10 supply (member_lookup)
    unsigned int u32_1A0;  // X10 supply (member_lookup)
    unsigned int u32_1A4;  // X10 supply (member_lookup)
    unsigned int u32_1C;  // X10 supply (member_lookup)
    unsigned int u32_1E0;  // X10 supply (member_lookup)
    unsigned int u32_1E4;  // X10 supply (member_lookup)
    int u32_2C;  // X10 supply (member_lookup)
    int u32_34;  // X10 supply (member_lookup)
    unsigned int u32_6D0;  // X10 supply (member_lookup)
    unsigned int u32_6D8;  // X10 supply (member_lookup)
    unsigned int u32_74;  // X10 supply (member_lookup)
    unsigned int u32_78;  // X10 supply (member_lookup)
    unsigned int u32_78C;  // X10 supply (member_lookup)
    unsigned int u32_790;  // X10 supply (member_lookup)
    unsigned int u32_794;  // X10 supply (member_lookup)
    unsigned int u32_79C;  // X10 supply (member_lookup)
    unsigned int u32_7A8;  // X10 supply (member_lookup)
    unsigned int u32_7AC;  // X10 supply (member_lookup)
    unsigned int u32_7B0;  // X10 supply (member_lookup)
    unsigned int u32_7BC;  // X10 supply (member_lookup)
    unsigned int u32_84;  // X10 supply (member_lookup)
    unsigned char u32_9C[12];  /* char[12] */  // X10 supply (member_lookup)
    unsigned int u32_A4;  // X10 supply (member_lookup)
    unsigned int u32_A8;  // X10 supply (member_lookup)
    unsigned int u32_AC;  // X10 supply (member_lookup)
    int u32_C0;  // X10 supply (member_lookup)
    int u32_D4;  // X10 supply (member_lookup)
    unsigned char u8_4;  // X10 supply (member_lookup)
    unsigned int u32_70;  // 0x70
};
} // namespace gamemd
