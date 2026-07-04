#pragma once
// CSP: InfantryTypeClass

class InfantryTypeClass : public TechnoTypeClass {
public:
    uint8_t pad_0[816]; // +0x0
    uint32_t member_330; // +0x330
    // 0x005236A0
    void Constructor();
    // 0x00524D60
    void GetAuxField();
    // 0x00524C70
    void GetClassIdentifier();
    // 0x00524760
    void GetDefaultDimensions();
    // 0x00523C20
    void GetDimensions();
    // 0x00524790
    void GetGameplayValue();
    // 0x00524D50
    void GetObjectSize();
    // 0x00524D40
    void GetTypeIdentifier();
    // 0x00524960
    void LoadTypeData();
    // 0x00524840
    void PowerDrainUpdate();
    // 0x00524B60
    void SaveLoad_Prefix();
    // 0x005247A0
    void StubReturnFalse();
    // 0x005247B0
    void j_?do_always_noconv_codecvt_base_std__MBE_NXZ_19();
};
