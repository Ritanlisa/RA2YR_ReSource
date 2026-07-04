#pragma once
// CSP: Radar

class Radar {
public:
    uint8_t pad_0[588]; // +0x0
    uint32_t member_24C; // +0x24C
    // 0x005090F0
    void IsRadarTargetEligible();
    // 0x006558B0
    void PixelIndex();
    // 0x004ADCD0
    void UpdateReveal();
};
