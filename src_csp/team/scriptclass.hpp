#pragma once
// CSP: ScriptClass

class ScriptClass : public AbstractClass {
public:
    uint8_t pad_0[296]; // +0x0
    uint32_t member_128; // +0x128
    // 0x00691540
    void GetNextAction();
    // 0x00691630
    void LoadState();
    // 0x00691EC0
    void StubReturn26();
    // 0x00691ED0
    void StubReturn48();
    // 0x006915F0
    void ddtor();
};
