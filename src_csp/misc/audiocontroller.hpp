#pragma once
// CSP: AudioController

class AudioController {
public:
    // 0x004022C0
    void AdvanceQueue();
    // 0x00408520
    void GetOffset();
    // 0x0072D170
    void GetVolume();
    // 0x00409DE0
    void LoadThemeBank();
    // 0x00402330
    void UpdatePlayback();
};
