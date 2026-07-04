#pragma once
// CSP: ScriptTypeClass

class ScriptTypeClass : public AbstractClass {
public:
    uint8_t pad_0[3598]; // +0x0
    uint32_t member_E0E; // +0xE0E
    // 0x00691E30
    void GetAction();
    // 0x00691F90
    void GetAuxField();
    // 0x00691D50
    void GetClassIdentifier();
    // 0x00691F80
    void GetObjectSize();
    // 0x00691F70
    void GetTypeIdentifier();
    // 0x00691D90
    void LoadTypeData();
    // 0x00691E00
    void PowerDrainUpdate();
};
