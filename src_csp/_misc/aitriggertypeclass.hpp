#pragma once
// CSP: AITriggerTypeClass

class AITriggerTypeClass {
public:
    uint8_t pad_0[6024]; // +0x0
    uint32_t member_1788; // +0x1788
    // 0x0041F180
    void ChronoSphereCharged();
    // 0x0041EC90
    void CivilianHouseOwns();
    // 0x0041EAF0
    void EnemyHouseOwns();
    // 0x00726FB0
    void FindType24();
    // 0x00727010
    void FindType2728();
    // 0x0041E500
    void GetClassIdentifier();
    // 0x0041FFE0
    void GetObjectSize();
    // 0x0041FFD0
    void GetTypeIdentifier();
    // 0x00727050
    void HasLocalSetOrClearedEvent();
    // 0x00726F80
    void HasType25Building();
    // 0x00726F50
    void HasType26Building();
    // 0x0041F230
    void HouseCredits();
    // 0x0041F0D0
    void IronCurtainCharged();
    // 0x0041E540
    void LoadTypeData();
    // 0x0041EE90
    void OwnerHouseOwns();
    // 0x0041E5E0
    void ProcessPower();
    // 0x0041FE20
    void RegisterFailure();
    // 0x0041FD60
    void RegisterSuccess();
};
