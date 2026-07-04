#pragma once
// CSP: Buffer

class Buffer {
public:
    uint8_t pad_0[16]; // +0x0
    uint32_t member_10; // +0x10
    uint32_t member_14; // +0x14
    uint8_t pad_18[24]; // +0x18
    uint32_t member_30; // +0x30
    uint32_t member_34; // +0x34
    uint8_t pad_38[24]; // +0x38
    uint32_t member_50; // +0x50
    uint32_t member_54; // +0x54
    // 0x007C1730
    void AllocateCodecFrameBuffers();
    // 0x0042F7C0
    void Cleanup();
    // 0x0040CCD0
    void CompareEqual();
    // 0x0040A340
    void CreateDirectSound();
    // 0x00410ED0
    void FillCircularBufferScroll();
    // 0x007BCB50
    void FillCircularBufferScroll2();
    // 0x00632B70
    void RotateBufferCrypto();
    // 0x0040A6D0
    void UpdateVolumeSettings();
};
