#pragma once
// CSP: Warhead

class Warhead {
public:
    uint8_t pad_0[13608]; // +0x0
    uint32_t member_3528; // +0x3528
    // 0x0041D7E0
    void GetWarheadSound();
    // 0x00452820
    void RemoveFromDamageList();
};
