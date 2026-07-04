#pragma once
// CSP: RadioClass

class RadioClass : public MissionClass {
public:
    uint8_t pad_0[1432]; // +0x0
    uint32_t member_598; // +0x598
    // 0x0065AB80
    void LoadState();
    // 0x0065AB10
    void PowerDrainUpdate();
    // 0x0065A750
    void Release();
    // 0x0065AC40
    void SaveState();
};
