#pragma once
// CSP: WeaponTypeClass

class WeaponTypeClass : public AbstractTypeClass {
public:
    uint8_t pad_0[4508]; // +0x0
    uint32_t member_119C; // +0x119C
    // 0x007729F0
    void CalculateSpeed();
    // 0x00772C90
    void GetClassIdentifier();
    // 0x007730D0
    void GetObjectSize();
    // 0x007730E0
    void GetTypeIdentifier();
    // 0x00772AE0
    void ProcessPower();
    // 0x00475B70
    void ReadTrajectoryData();
    // 0x00772CD0
    void SaveLoad_Prefix();
    // 0x00772EB0
    void SaveLoad_Prefix_0();
};
