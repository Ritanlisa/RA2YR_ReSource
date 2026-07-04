#pragma once
// CSP: MSVQAnim

class MSVQAnim {
public:
    uint8_t pad_0[24]; // +0x0
    uint32_t member_18; // +0x18
    uint32_t member_1C; // +0x1C
    // 0x00403870
    void Constructor_13();
    // 0x005CD290
    void GetFrameRect();
    // 0x005CCE90
    void Load();
    // 0x0072B530
    void Load_0();
    // 0x005CD0E0
    void Play();
    // 0x005CD240
    void Stop();
    // 0x005CD320
    void Stub();
};
