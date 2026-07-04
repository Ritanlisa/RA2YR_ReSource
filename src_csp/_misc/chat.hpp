#pragma once
// CSP: Chat

class Chat {
public:
    uint8_t pad_0[499]; // +0x0
    uint32_t member_1F3; // +0x1F3
    // 0x005D4390
    void RefreshMessagePositions();
};
