#pragma once
// CSP: AirstrikeClass

class AirstrikeClass : public AbstractClass {
public:
    uint8_t pad_0[60]; // +0x0
    uint32_t member_3C; // +0x3C
    // 0x0063BE60
    void DrawActionLines();
    // 0x006339B0
    void GetLeaderIndex();
    // 0x0041DA20
    void ReassignTarget();
    // 0x0041DC80
    void RemoveAircraft();
    // 0x0041ADF0
    void RevealSight();
    // 0x0041D860
    void SpawnAircraft();
    // 0x0041D830
    void StartMission();
    // 0x0041D6E0
    void Stat();
    // 0x0041DD40
    void StubReturn71();
    // 0x0041DD30
    void StubReturn96();
    // 0x0041DC50
    void StubReturnFalse();
    // 0x00420E90
    void UpdateAll();
    // 0x0041D6F0
    void Write();
    // 0x0041D7A0
    void ddtor();
};
