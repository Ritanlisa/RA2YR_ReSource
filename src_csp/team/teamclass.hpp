#pragma once
// CSP: TeamClass

class TeamClass : public AbstractClass {
public:
    uint8_t pad_0[3472]; // +0x0
    uint32_t member_D90; // +0xD90
    uint32_t member_D94; // +0xD94
    uint32_t member_D98; // +0xD98
    // 0x006915B0
    void Check();
    // 0x006EAE60
    void ExecuteAction();
    // 0x00726FE0
    void FindType15();
    // 0x00636980
    void ProcessScriptActions();
    // 0x006EC450
    void SaveLoad_Prefix();
    // 0x006EEEA0
    void ScoreMember();
    // 0x006915A0
    void SetField11();
    // 0x006F0430
    void StubReturn160();
    // 0x006F0440
    void StubReturn34();
    // 0x006E8160
    void SumMemberCounts();
    // 0x006EC560
    void ddtor();
};
