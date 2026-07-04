#pragma once
// CSP: BuildingTypeClass

class BuildingTypeClass : public TechnoTypeClass {
public:
    uint8_t pad_0[45]; // +0x0
    uint32_t member_2D; // +0x2D
    // 0x0045DD90
    void ConstructFull();
    // 0x00465DB0
    void GetAuxField();
    // 0x00465380
    void GetClassIdentifier();
    // 0x0045ECE0
    void GetMaxPips();
    // 0x00465DA0
    void GetObjectSize();
    // 0x00464AF0
    void GetSizeInLeptons();
    // 0x00465D90
    void GetTypeIdentifier();
    // 0x00465AF0
    void IsPowered();
    // 0x0050B760
    void ProcessData();
    // 0x007171A0
    void ProcessPower();
    // 0x00465010
    void SaveLoad_Prefix();
    // 0x00465300
    void SaveLoad_Prefix_0();
    // 0x00464B30
    void UpdatePower();
    // 0x00478850
    void loadBuildingProperty_b_5478850();
};
