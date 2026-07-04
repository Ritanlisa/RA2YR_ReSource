#pragma once
// CSP: TubeClass

class TubeClass : public ObjectClass {
public:
    uint8_t pad_0[1564]; // +0x0
    uint32_t member_61C; // +0x61C
    // 0x007281A0
    void LoadState();
    // 0x007286B0
    void StubReturn452();
    // 0x007286C0
    void StubReturn53();
    // 0x007286D0
    void ddtor();
};
