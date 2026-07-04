#pragma once
// CSP: DiskLaserClass

class DiskLaserClass {
public:
    uint8_t pad_0[334]; // +0x0
    uint32_t member_14E; // +0x14E
    // 0x004A7900
    void PointerGotInvalid();
    // 0x004A7B80
    void Stat();
    // 0x004A7C70
    void StubReturn64();
    // 0x004A7C80
    void StubReturn73();
    // 0x004A7340
    void Update();
    // 0x004A7B90
    void Write();
    // 0x004A7C30
    void ddtor();
};
