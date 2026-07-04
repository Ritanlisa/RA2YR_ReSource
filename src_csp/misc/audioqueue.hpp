#pragma once
// CSP: AudioQueue

class AudioQueue {
public:
    uint8_t pad_0[3344]; // +0x0
    uint32_t member_D10; // +0xD10
    // 0x007B1D10
    void Cleanup();
    // 0x00403770
    void DeactivateAllMatching();
    // 0x00750FA0
    void DrainAll();
    // 0x004035F0
    void FindBestChannel();
    // 0x004081A0
    void HaltVoices();
    // 0x00408200
    void IncrementPriority();
    // 0x00407B40
    void IsEmpty();
    // 0x00407B50
    void IsNotEmpty();
    // 0x004035D0
    void IteratorNext();
    // 0x007B22E0
    void ReadBuffer();
    // 0x00408270
    void ReleaseBuffers();
    // 0x00403730
    void StopAllVoices();
    // 0x007B23B0
    void WriteBuffer();
};
