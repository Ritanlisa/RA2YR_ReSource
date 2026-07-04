#pragma once
// CSP: TerrainClass

class TerrainClass : public ObjectClass {
public:
    uint8_t pad_0[360]; // +0x0
    uint32_t member_168; // +0x168
    // 0x0071CC50
    void CheckSpawnConditions();
    // 0x0071C070
    void ClearCellFlags();
    // 0x0071D160
    void Export();
    // 0x00409C40
    void InitializePlayback();
    // 0x0071D2F0
    void MissionStubReturnZero();
    // 0x0071D300
    void MissionStubReturnZero2();
    // 0x0071D310
    void MissionStubReturnZero3();
    // 0x0071CF50
    void PowerDrainUpdate();
    // 0x0071C6B0
    void ProcessTick();
    // 0x0071C110
    void SetOccupyBit_PassableTerrain();
};
