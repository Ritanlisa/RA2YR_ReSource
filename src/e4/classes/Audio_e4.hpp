// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct Audio {
    void* vfptr;  // minimal E2 declaration
    int InitChannels();  // 0x401080
    int GetChannelStatus();  // 0x402720
    int ReleaseChannelRefs();  // 0x404D80
    int FlushChannel(unsigned int ** Block);  // 0x404DD0
    int UpdatePlaybackPosition();  // 0x4054A0
    ObjectClass * ProcessMixerOutput(char * Source);  // 0x4063B0
    BOOL ApplyFormatFlags(int * a1, char * a2);  // 0x406870
    void Shutdown();  // 0x406D40
    BOOL IsSoundEnabled();  // 0x407000
    void * GetEnabled();  // 0x407010
    int GetFlag();  // 0x407070
    int WaitForCallback();  // 0x4070B0
    void Release();  // 0x407F40
    int IsSoundPlaying();  // 0x408070
    int CalcRate(int a2, int a3);  // 0x408540
    int GetSampleSize();  // 0x409320
    int Callback();  // 0x4093B0
    LPDIRECTSOUND GetDirectSound();  // 0x40A7A0
    int ParseVolume(const char ** a1, ObjectClass * aP2);  // 0x5D0470
    char ** SetSoundFileName(char * Source, int a3);  // 0x5D5820
    char LoadWAVFiles();  // 0x7207F0
    char InitFromINI();  // 0x7510D0
    void * LoadSoundINI();  // 0x7513F0
    int IsPlaying();  // 0x7529E0
    unsigned int GetSamplePosition(MouseClass * aP1, MouseClass * aP2);  // 0x7BD130
};
} // namespace gamemd
