#pragma once
// CSP: AnimTypeClass

class AnimTypeClass : public ObjectTypeClass {
public:
    uint8_t pad_0[21744]; // +0x0
    uint32_t member_54F0; // +0x54F0
    // 0x00428C10
    void GetAnimData();
    // 0x00428E60
    void GetAuxField();
    // 0x00428990
    void GetClassIdentifier();
    // 0x00428E70
    void GetObjectSize();
    // 0x00427B50
    void GetWarhead();
    // 0x004289D0
    void PowerDrainUpdate();
    // 0x00428800
    void SaveLoad_Prefix();
    // 0x00428970
    void SaveLoad_Prefix_0();
    // 0x00428E80
    void Stub();
    // 0x00428E90
    void StubReturnFalse();
    // 0x00428E40
    void Thunk_AnimTypeClass_sub_428E40();
    // 0x00428E50
    void Thunk_AnimTypeClass_sub_428E50();
};
