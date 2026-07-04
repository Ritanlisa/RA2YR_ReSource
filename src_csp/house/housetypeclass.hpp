#pragma once
// CSP: HouseTypeClass

class HouseTypeClass : public AbstractClass {
public:
    uint8_t pad_0[628]; // +0x0
    uint32_t member_274; // +0x274
    // 0x00512740
    void AddRef();
    // 0x00512640
    void GetClassIdentifier();
    // 0x00512720
    void GetObjectSize();
    // 0x00512710
    void GetTypeIdentifier();
    // 0x00512570
    void LoadHouse();
    // 0x00512170
    void ProcessPower();
    // 0x005125A0
    void QueryInterface();
    // 0x00512750
    void Release();
    // 0x00512290
    void SaveLoad_Prefix();
    // 0x00512480
    void SaveLoad_Prefix_0();
    // 0x00512280
    void StubReturnFalse();
    // 0x00512730
    void loadBuildLimits();
    // 0x005139F0
    void readAiBuildLists();
    // 0x00513860
    void readAllowedUnits();
    // 0x005139E0
    void readBaseDefenses();
    // 0x00513A00
    void readLoadoutData();
    // 0x005137D0
    void readParaDropTypes();
};
