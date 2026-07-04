#pragma once
// CSP: FactoryClass

class FactoryClass : public AbstractClass {
public:
    uint8_t pad_0[4580]; // +0x0
    uint32_t member_11E4; // +0x11E4
    // 0x004F9700
    void AccumulateCreditsProgress();
    // 0x0071ABC0
    void CompleteItem();
    // 0x004CA670
    void CountType();
    // 0x00635F80
    void FindAvailable();
    // 0x006B0750
    void GetBridgeCell();
    // 0x00637AA0
    void GetFlag();
    // 0x00636DC0
    void GetState();
    // 0x004CA6B0
    void IsQueued();
    // 0x004CA270
    void LoadFromStream();
    // 0x006727D0
    void LoadType();
    // 0x004CA580
    void Revert();
    // 0x004CA3C0
    void Seek();
    // 0x004C9E10
    void SetObject();
    // 0x004CA760
    void StubReturn116();
    // 0x004CA750
    void StubReturn12();
    // 0x004C9B20
    void UpdateProduction();
    // 0x004CA230
    void ddtor();
};
