#pragma once
// CSP: TEventClass

class TEventClass : public AbstractClass {
public:
    uint8_t pad_0[1692]; // +0x0
    uint32_t member_69C; // +0x69C
    // 0x0071F800
    void CheckConditions();
    // 0x0071F8C0
    void SaveLoad_Prefix();
    // 0x0071FA70
    void Stub();
    // 0x0071FA60
    void StubReturn48();
    // 0x0071FA50
    void StubReturn88();
    // 0x0071F880
    void ddtor();
};
