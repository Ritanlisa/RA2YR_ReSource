#pragma once
// CSP: SessionClass

class SessionClass {
public:
    uint8_t pad_0[1556]; // +0x0
    uint32_t member_614; // +0x614
    // 0x0069C710
    void AddRef();
    // 0x0078F000
    void BuildLaunchString();
    // 0x00691500
    void GetEntry();
    // 0x00552CC0
    void Load();
    // 0x0069C940
    void Read();
    // 0x0069C890
    void Release();
    // 0x0069C4F0
    void Seek();
    // 0x006915D0
    void SetField();
    // 0x007B2720
    void SetInstance();
    // 0x0069C4D0
    void Write();
    // 0x0069C750
    void addPlayer();
    // 0x0069C4A0
    void ddtor();
    // 0x0069C830
    void findPlayer();
    // 0x00540E70
    void initInternet();
    // 0x00540DC0
    void initLAN();
    // 0x005E64C0
    void initPlayers();
    // 0x0069C800
    void removePlayer();
    // 0x005D39D0
    void saveSettings();
    // 0x0069C870
    void updatePlayer();
};
