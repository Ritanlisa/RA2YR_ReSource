#pragma once
// CSP: CellClass

class CellClass {
public:
    uint8_t pad_0[1548]; // +0x0
    uint32_t member_60C; // +0x60C
    // 0x00487D70
    void AttachObject();
    // 0x00486890
    void CheckProperty();
    // 0x004A1750
    void Cleanup();
    // 0x0056C020
    void CreateBuildingCrater();
    // 0x00486A70
    void CreateFoggedObjects();
    // 0x0056B8A0
    void DecompressRawCellData();
    // 0x0056D5A0
    void DetermineTileConnectivity();
    // 0x00653F50
    void DrawWrapper();
    // 0x00452940
    void Get();
    // 0x0048BA80
    void GetBridgeIndex();
    // 0x005F1EE0
    void GetBridgeIndexThunk();
    // 0x004867E0
    void GetCellType();
    // 0x0065B510
    void GetOccupiedRatio();
    // 0x00486840
    void GetOccupier();
    // 0x0056BCD0
    void GetTileData();
    // 0x004722C0
    void HasContent();
    // 0x0050D250
    void IterateOccupiers();
    // 0x005A7B40
    void ProcessUpdate();
    // 0x00487D00
    void RadLevel_Decrease();
    // 0x00487CE0
    void RadLevel_Increase();
    // 0x00576200
    void RecursiveCraterUpdate();
    // 0x0047EA90
    void RemoveContent();
    // 0x004839F0
    void SaveLoad_Prefix();
    // 0x00483C10
    void SaveLoad_Prefix_0();
    // 0x0045A170
    void SetField2C();
    // 0x005865F0
    void SpiralFindClosest();
    // 0x00487E60
    void StubReturn11();
    // 0x00487E70
    void StubReturn328();
    // 0x00580B70
    void applyTileDamage();
    // 0x00485200
    void ddtor();
    // 0x00588C40
    void initCellData();
    // 0x004D2790
    void recalcPassability();
    // 0x0042E6D0
    void setTileIndex();
    // 0x00580B20
    void updateLighting();
};
