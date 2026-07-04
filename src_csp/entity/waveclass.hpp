#pragma once
// CSP: WaveClass

class WaveClass : public ObjectClass {
public:
    uint8_t pad_0[1648]; // +0x0
    uint32_t member_670; // +0x670
    // 0x0075F890
    void CheckStateFlag();
    // 0x007632D0
    void Constructor_7632D0();
    // 0x0075F840
    void GetClassIdentifier();
    // 0x0075F880
    void GetObjectSize();
    // 0x007631F0
    void GetTypeIdentifier();
    // 0x0075F650
    void LoadWaveData();
    // 0x0075F7D0
    void ProcessWaveTick();
    // 0x0075F8A0
    void StubReturnFalse();
};
