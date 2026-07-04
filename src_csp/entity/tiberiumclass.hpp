#pragma once
// CSP: TiberiumClass

class TiberiumClass : public ObjectClass {
public:
    uint8_t pad_0[5458]; // +0x0
    uint32_t member_1552; // +0x1552
    // 0x00721DC0
    void Harvest();
    // 0x00721E80
    void SaveLoad_Prefix();
    // 0x007220D0
    void SaveLoad_Prefix_0();
    // 0x007220A0
    void SpreadGrowth();
    // 0x00723700
    void Stub();
    // 0x007236E0
    void StubReturn296();
    // 0x007236F0
    void StubReturn46();
    // 0x00722140
    void UpdateField();
    // 0x00721E40
    void ddtor();
};
