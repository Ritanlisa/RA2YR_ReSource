#pragma once
// CSP: RadSiteClass

class RadSiteClass : public AbstractClass {
public:
    uint8_t pad_0[13540]; // +0x0
    uint32_t member_34E4; // +0x34E4
    // 0x0065BE90
    void DecreaseLight();
    // 0x0065BD00
    void DecreaseRadiation();
    // 0x0065B4B0
    void GetSpread();
    // 0x0065B3B0
    void PowerDrainUpdate();
    // 0x0065B3D0
    void SaveLoad_Prefix();
    // 0x0065B3A0
    void StubReturn116();
    // 0x0065B3C0
    void StubReturn69();
    // 0x0065B800
    void Tick();
    // 0x0065B470
    void ddtor();
};
