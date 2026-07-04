#pragma once
// CSP: TActionClass

class TActionClass : public AbstractClass {
public:
    uint8_t pad_0[3784]; // +0x0
    uint32_t member_EC8; // +0xEC8
    // 0x006DD2C0
    void ExecuteAction();
    // 0x00703590
    void FindPlacementCellsAlt();
    // 0x00417FD0
    void GetField9();
    // 0x006F03B0
    void GetGameSpeedFromSession();
    // 0x006E1780
    void PlayAudioAtRandomWP();
    // 0x006E3DB0
    void SaveLoad_Prefix();
    // 0x00739CD0
    void SimpleDeployerUndeploy();
    // 0x006E4650
    void Stub();
    // 0x006E4630
    void StubReturn148();
    // 0x006E4640
    void StubReturn47();
    // 0x006E3D70
    void ddtor();
    // 0x007268F0
    void executeAirstrikeAction();
    // 0x0050D290
    void executeAttackAction();
    // 0x004FCDC0
    void executeBuildAction();
    // 0x0050DFE0
    void executeDeployAction();
    // 0x00726900
    void executeDetonateAction();
    // 0x0050DA00
    void executeGuardAction();
    // 0x006AC5F0
    void executeHarvestAction();
    // 0x0050DA20
    void executeHuntAction();
    // 0x0050D2D0
    void executeMoveAction();
    // 0x00578850
    void executeSellAction();
};
