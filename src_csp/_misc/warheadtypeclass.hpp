#pragma once
// CSP: WarheadTypeClass

class WarheadTypeClass {
public:
    uint8_t pad_0[204]; // +0x0
    uint32_t member_CC; // +0xCC
    // 0x005250D0
    void AddRef();
    // 0x00524ED0
    void GetClassIdentifier();
    // 0x0075E440
    void GetDamage();
    // 0x0075E4F0
    void GetObjectSize();
    // 0x0075E500
    void GetTypeIdentifier();
    // 0x00525400
    void Init();
    // 0x00672990
    void LoadType();
    // 0x00524F00
    void LoadTypeData();
    // 0x0075DEC0
    void ProcessPower();
    // 0x00525300
    void Release();
    // 0x0075E0C0
    void SaveLoad_Prefix();
    // 0x0075E2C0
    void SaveLoad_Prefix_0();
    // 0x00524FB0
    void SaveToINI();
    // 0x0075E080
    void vt[03]();
};
