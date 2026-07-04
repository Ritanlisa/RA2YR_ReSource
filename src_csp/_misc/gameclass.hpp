#pragma once
// CSP: GameClass

class GameClass {
public:
    uint8_t pad_0[400]; // +0x0
    uint32_t member_190; // +0x190
    // 0x005D6370
    void FindOpenSlot();
    // 0x005E99C0
    void GetDifficultyString();
    // 0x005E8AE0
    void InitDifficultyButtons();
    // 0x0074F960
    void ReadVersionFile();
    // 0x0074FA20
    void ReadVersionFile2();
    // 0x006BEC60
    void Shutdown();
    // 0x00437FD0
    void initGameMode();
    // 0x00632FE0
    void loadGameState();
    // 0x00633360
    void parseGameOptions();
    // 0x004381D0
    void processFrame();
    // 0x007BA3C0
    void processNetworkPacket();
    // 0x00438300
    void updateUI();
};
