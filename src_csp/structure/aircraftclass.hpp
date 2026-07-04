#pragma once
// CSP: AircraftClass

class AircraftClass : public FootClass {
public:
    uint8_t pad_0[708]; // +0x0
    uint32_t member_2C4; // +0x2C4
    // 0x004142F0
    void AddRef();
    // 0x0041C070
    void CheckDockState();
    // 0x0041A590
    void CheckLandingClearance();
    // 0x0041C1D0
    void CheckMissionAbort();
    // 0x0041C200
    void CheckMissionFail();
    // 0x005B2E90
    void CheckMissionStatus();
    // 0x005B2F30
    void CheckMissionStatus2();
    // 0x0041B5C0
    void CheckPassengerCount();
    // 0x0041C010
    void CheckReloadState();
    // 0x0041C020
    void CheckReloadTimer();
    // 0x0041BE80
    void CheckStateFlag();
    // 0x0041BE90
    void CheckStateFlag2();
    // 0x00415B10
    void FindLandingCell();
    // 0x0041B660
    void HandleTargetDestroyed();
    // 0x0041B980
    void IsBelowScreen();
    // 0x0041B920
    void IsHeightAboveThreshold();
    // 0x0041BE60
    void LandingCheckStub();
    // 0x0041B910
    void MissionStubReturnZero();
    // 0x0041C170
    void MissionStubReturnZero2();
    // 0x0041C180
    void MissionStubReturnZero3();
    // 0x0041BB30
    void OverrideMission_SyncLog();
    // 0x0041C190
    void PowerDrainProcess();
    // 0x0041B610
    void PowerDrainUpdate();
    // 0x0041ADC0
    void ProcessDockCheck();
    // 0x0041BA90
    void ProcessLanding();
    // 0x0041B870
    void ProcessPassengerEjection();
    // 0x00415A50
    void ProcessReturnToBase();
    // 0x00414290
    void QueryInterface();
    // 0x00414300
    void Release();
    // 0x0041BE70
    void StubReturnFalse2();
    // 0x005F43B0
    void StubReturnFalse3();
    // 0x005F43F0
    void StubReturnFalse4();
    // 0x005F43C0
    void StubReturnTrue();
    // 0x0041B9F0
    void UpdateDocking();
};
