#pragma once
// CSP: PlayerClass

class PlayerClass {
public:
    uint8_t pad_0[30]; // +0x0
    uint32_t member_1E; // +0x1E
    // 0x005D62C0
    void AssignPlayerIndex();
    // 0x005C5D30
    void AssignPlayerIndex_0();
    // 0x004AC2B0
    void CheckHumanPlayer();
    // 0x006ABAC0
    void HasPlayers();
    // 0x005D8C90
    void IsValidIndex();
    // 0x005D8CB0
    void SetHouse();
    // 0x00732600
    void UpdateAIUnits();
};
