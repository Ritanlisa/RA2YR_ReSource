#pragma once
// CSP: Game

class Game {
public:
    uint8_t pad_0[25]; // +0x0
    uint32_t member_19; // +0x19
    // 0x004790A0
    void CheckForGameCD();
    // 0x00796DE0
    void CreateAIPlayer();
    // 0x00796ED0
    void CreateAIPlayer_Potato();
    // 0x00534450
    void DestroyAllObjects();
    // 0x0072F440
    void InitializeToolTipColor();
    // 0x005E8B40
    void ResetFlags();
    // 0x005865E0
    void Stub3();
    // 0x00550000
    void loadCampaignData();
    // 0x0067FDE0
    void readIniSettings();
    // 0x0072D830
    void shutdownGame();
    // 0x00680F70
    void validateScenario();
};
