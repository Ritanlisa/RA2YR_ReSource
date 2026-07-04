#pragma once
// CSP: Animation

class Animation {
public:
    uint8_t pad_0[13728]; // +0x0
    uint32_t member_35A0; // +0x35A0
    // 0x00770550
    void LoadSidebarAnimations();
    // 0x00661D80
    void UpdateBobOffset();
};
