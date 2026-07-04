#pragma once
// CSP: AudioStream

class AudioStream {
public:
    // 0x007BD2D0
    void CalcReadPos();
    // 0x00402800
    void CheckFormatChanged();
    // 0x00404E70
    void CleanupChannels();
    // 0x007C3960
    void GetPosition();
    // 0x004084E0
    void InitNodeFields();
    // 0x00407A60
    void ProcessCallback();
    // 0x007BEA80
    void ProcessStream();
    // 0x00409310
    void ReadStreamAndReturn();
    // 0x004079C0
    void ReadStreamAndSyncPosition();
    // 0x004026F0
    void ReleaseChannel();
    // 0x00401910
    void ReleaseSubsystem();
    // 0x007BD270
    void SetFlag4C();
    // 0x00407A30
    void SetPlaybackCallback();
    // 0x004026B0
    void Stop();
    // 0x00405040
    void UpdateCountdowners();
    // 0x00404FD0
    void UpdateTimers();
};
