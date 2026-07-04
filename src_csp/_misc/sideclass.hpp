#pragma once
// CSP: SideClass

class SideClass : public AbstractClass {
public:
    uint8_t pad_0[1716]; // +0x0
    uint32_t member_6B4; // +0x6B4
    // 0x006A4710
    void GetCountry();
    // 0x004E38A0
    void GetName();
    // 0x006A4780
    void SaveLoad_Prefix();
    // 0x006A48A0
    void SaveLoad_Prefix_0();
    // 0x006A4910
    void StubReturn180();
    // 0x006A4920
    void StubReturn28();
    // 0x006A4740
    void ddtor();
};
