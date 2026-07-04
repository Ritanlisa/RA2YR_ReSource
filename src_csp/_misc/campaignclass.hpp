#pragma once
// CSP: CampaignClass

class CampaignClass : public AbstractClass {
public:
    uint8_t pad_0[20]; // +0x0
    uint32_t member_14; // +0x14
    uint32_t member_18; // +0x18
    // 0x0049ECD0
    void Constructor();
    // 0x005D2E00
    void Constructor_1();
    // 0x0049E4F0
    void GetValue();
    // 0x0046CFC0
    void Stat();
    // 0x0046D080
    void StubReturn10();
    // 0x0046D070
    void StubReturn928();
    // 0x0046D000
    void Write();
    // 0x0046CF80
    void ddtor();
};
