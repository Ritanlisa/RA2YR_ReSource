#pragma once
// CSP: SmudgeTypeClass

class SmudgeTypeClass : public ObjectTypeClass {
public:
    uint8_t pad_0[1760]; // +0x0
    uint32_t member_6E0; // +0x6E0
    // 0x006B6150
    void GetAuxField();
    // 0x006B58D0
    void GetClassIdentifier();
    // 0x006B6140
    void GetObjectSize();
    // 0x006B6130
    void GetTypeIdentifier();
    // 0x006B5850
    void LoadTypeData();
    // 0x006B57F0
    void PowerDrainUpdate();
    // 0x006B58B0
    void SaveToINI();
    // 0x006B5260
    void SmudgeTypeClass();
};
