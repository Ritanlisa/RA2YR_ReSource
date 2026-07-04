#pragma once
// CSP: BaseClass

class BaseClass {
public:
    uint8_t pad_0[1376]; // +0x0
    uint32_t member_560; // +0x560
    // 0x0042F490
    void AddRef();
    // 0x0042E6F0
    void Constructor();
    // 0x0042F070
    void LoadArrayFields();
    // 0x0042EE30
    void LoadBaseNodeClass();
    // 0x0042F5E0
    void Read();
    // 0x0042F4F0
    void Release();
    // 0x0042F3F0
    void Seek();
    // 0x0042F3D0
    void Write();
    // 0x0042F3A0
    void ddtor();
};
