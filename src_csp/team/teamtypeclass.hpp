#pragma once
// CSP: TeamTypeClass

class TeamTypeClass : public AbstractClass {
public:
    uint8_t pad_0[331]; // +0x0
    uint32_t member_14B; // +0x14B
    // 0x006EF5F0
    void Check();
    // 0x006F1F70
    void FindFirstInstance();
    // 0x006F1F30
    void FlashAllInstances();
    // 0x006F20C0
    void GetAuxField();
    // 0x006F1C40
    void GetClassIdentifier();
    // 0x006F1870
    void GetGroup();
    // 0x006F20B0
    void GetObjectSize();
    // 0x006F1030
    void GetTeam();
    // 0x006F20A0
    void GetTypeIdentifier();
    // 0x006F1BB0
    void LoadTypeData();
    // 0x006F1C80
    void PowerDrainUpdate();
    // 0x006F1FA0
    void ProcessTaskForce();
};
