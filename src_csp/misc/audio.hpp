#pragma once
// CSP: Audio

class Audio {
public:
    uint8_t pad_0[5805]; // +0x0
    uint32_t member_16AD; // +0x16AD
    // 0x004093B0
    void Callback();
    // 0x0040A7A0
    void GetDirectSound();
    // 0x00407010
    void GetEnabled();
    // 0x00407070
    void GetFlag();
    // 0x007529E0
    void IsPlaying();
    // 0x00407000
    void IsSoundEnabled();
    // 0x00408070
    void IsSoundPlaying();
    // 0x007513F0
    void LoadSoundINI();
    // 0x00407F40
    void Release();
    // 0x005FA4A0
    void SetScoreVolume();
    // 0x005FA510
    void SetSoundVolume();
    // 0x005FA590
    void SetVoiceVolume();
    // 0x00406D40
    void Shutdown();
};
