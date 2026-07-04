#pragma once
// CSP: TerrainTypeClass

class TerrainTypeClass : public ObjectTypeClass {
public:
    // 0x0071E350
    void GetAuxField();
    // 0x0071E260
    void GetClassIdentifier();
    // 0x0071E340
    void GetObjectSize();
    // 0x0071E330
    void GetTypeIdentifier();
    // 0x0071E140
    void PowerDrainUpdate();
    // 0x0071E1D0
    void SaveLoad_Prefix();
    // 0x0071E240
    void SaveLoad_Prefix_0();
    // 0x0071DA80
    void TerrainTypeClass();
};
