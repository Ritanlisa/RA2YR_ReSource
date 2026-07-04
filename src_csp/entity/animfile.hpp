#pragma once
// CSP: AnimFile

class AnimFile {
public:
    uint8_t pad_0[3844]; // +0x0
    uint32_t member_F04; // +0xF04
    // 0x00426750
    void AddRef();
    // 0x00426DD0
    void Check();
    // 0x00426A50
    void Load();
    // 0x00426790
    void Release();
    // 0x00427290
    void Stub();
    // 0x00426A90
    void ddtor();
};
