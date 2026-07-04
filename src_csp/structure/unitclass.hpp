#pragma once
// CSP: UnitClass

class UnitClass : public FootClass {
public:
    uint8_t pad_0[1892]; // +0x0
    uint32_t member_764; // +0x764
    // 0x0077E7A0
    void BuildChecksum();
    // 0x006B4F20
    void CheckStatus();
    // 0x004D03D0
    void CompareCoordinateMagnitude();
    // 0x006B6080
    void CreateUnloadPlacementCraters();
    // 0x007192F0
    void Deploy();
    // 0x006B4F50
    void GetClassID();
    // 0x007446E0
    void HandleTargetDestroyed();
    // 0x00744640
    void PowerDrainUpdate();
    // 0x006B4EA0
    void SaveLoadData();
    // 0x006B4F30
    void StubReturn176();
    // 0x006B4F40
    void StubReturn29();
    // 0x007178B0
    void processEnterTarget();
    // 0x004C2C10
    void updateHarvesting();
};
