// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct AudioStream {
    void* vfptr;  // minimal E2 declaration
    int ReleaseSubsystem();  // 0x401910
    int Stop();  // 0x4026B0
    int ReleaseChannel();  // 0x4026F0
    void DestroyAll();  // 0x4033C0
    int Reset();  // 0x403820
    int ResetChannel(int a2, int a3);  // 0x4038A0
    int ResetChannel2(int a2, int a3);  // 0x4038C0
    int SetupPlayback();  // 0x404700
    int SelectRandom();  // 0x4047B0
    void CleanupChannels();  // 0x404E70
    int ReadStreamAndSyncPosition();  // 0x4079C0
    int SetPlaybackCallback();  // 0x407A30
    int ProcessCallback();  // 0x407A60
    void InitNodeFields();  // 0x4084E0
    int GetChannel();  // 0x408D50
    int ReadStreamAndReturn();  // 0x409310
    int ReadSamples(const void * a2);  // 0x4A33A0
    char DrawWaveform(IUnknown * aP1, IUnknown * aP2, IUnknown * aP3, IUnknown * aP4, int a6, int a7, int a8);  // 0x4BEAC0
    int SetFlag4C();  // 0x7BD270
    int CalcReadPos();  // 0x7BD2D0
    int ProcessStream();  // 0x7BEA80
    unsigned int GetPosition();  // 0x7C3960
    void Destructor();  // 0x402550
    int CheckFormatChanged(int a1, const void * a2);  // 0x402800
    int InitListAndCounters();  // 0x4028B0
    int UpdateTimers();  // 0x404FD0
    int UpdateCountdowners();  // 0x405040
    char * Constructor(unsigned long long a2);  // 0x407860
};
} // namespace gamemd
