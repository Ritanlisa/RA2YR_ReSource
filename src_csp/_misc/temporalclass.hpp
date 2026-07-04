#pragma once
// CSP: TemporalClass

class TemporalClass : public AbstractClass {
public:
    uint8_t pad_0[1061]; // +0x0
    uint32_t member_425; // +0x425
    // 0x0071AE50
    void CanWarpTarget();
    // 0x0071AB10
    void GetWarpPerStep();
    // 0x0071A660
    void LoadTemporal();
    // 0x0071A760
    void ProcessTimeWarp();
    // 0x0071A650
    void SetTarget();
    // 0x0071B1A0
    void StubReturn70();
    // 0x0071B190
    void StubReturn80();
    // 0x0071A720
    void ddtor();
};
