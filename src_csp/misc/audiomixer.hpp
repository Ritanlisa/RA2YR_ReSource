#pragma once
// CSP: AudioMixer

class AudioMixer {
public:
    // 0x00408000
    void ProcessAudioFrame();
    // 0x00753620
    void Pump();
    // 0x00406E80
    void Shutdown();
};
