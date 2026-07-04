#pragma once
// CSP: AircraftTypeClass

class AircraftTypeClass : public TechnoTypeClass {
public:
    // 0x0041CB70
    void CreateAircraft();
    // 0x0041CFD0
    void GetAuxField();
    // 0x0041CEB0
    void GetClassIdentifier();
    // 0x0041CBE0
    void GetDimensions();
    // 0x00712120
    void GetGameplayValue();
    // 0x0041CFC0
    void GetObjectSize();
    // 0x0041CFB0
    void GetTypeIdentifier();
    // 0x0041CE20
    void LoadFromINI();
    // 0x0041CDB0
    void PowerDrainUpdate();
    // 0x0041CE90
    void SaveToINI();
    // 0x0041CB60
    void StubReturnFalse();
};
