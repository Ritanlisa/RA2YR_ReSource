#pragma once
// CSP: DamageArea

class DamageArea {
public:
    uint8_t pad_0[304]; // +0x0
    uint32_t member_130; // +0x130
    // 0x00565660
    void CalcScatterOffset();
};
