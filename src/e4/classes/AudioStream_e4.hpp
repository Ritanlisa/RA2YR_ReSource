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
    int  ReadSamples(void * a2, void *a1 = 0);  // 0x4A33A0
    char DrawWaveform(int *a2, unsigned int *a3, unsigned int *a4, uint8_t *a5, int a6, int a7, int a8);  // G57w10-S raw 0x004BEAC0 IUnknown 占位清除
    int SetFlag4C(void *a1 = 0);  // 0x7BD270
    int CalcReadPos();
    int ProcessStream();  // 0x7BEA80
    unsigned int GetPosition(void *a1 = 0);  // 0x7C3960
    void Destructor(unsigned int * Block);  // 0x402550
    static int  CheckFormatChanged(int a1, void * a2);  // 0x402800
    int InitListAndCounters(void *a1_1);  // 0x4028B0
    int UpdateTimers();  // 0x404FD0
    static int UpdateCountdowners();
    char *  Constructor(uint64_t, void *a1 = 0, void *a2 = 0, void *a3 = 0);  // 0x407860
    char * Constructor(uint64_t, void * a2, void * aAudioStream);
};
} // namespace gamemd
