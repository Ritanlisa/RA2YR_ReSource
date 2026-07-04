#pragma once
// CSP: TriggerTypeClass

class TriggerTypeClass : public AbstractClass {
public:
    uint8_t pad_0[340]; // +0x0
    uint32_t member_154; // +0x154
    // 0x006E3EE0
    void Dispatch();
    // 0x00727090
    void GetAction();
    // 0x0071F680
    void GetActionCategoryFlags();
    // 0x00727CC0
    void GetAuxField();
    // 0x00727BB0
    void GetClassIdentifier();
    // 0x00727CB0
    void GetObjectSize();
    // 0x00727CA0
    void GetTypeIdentifier();
    // 0x00727BF0
    void LoadTypeData();
    // 0x00727B30
    void PowerDrainUpdate();
};
