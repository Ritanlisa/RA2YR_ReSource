#pragma once
// CSP: UnitTypeClass

class UnitTypeClass : public TechnoTypeClass {
public:
    uint8_t pad_0[13528]; // +0x0
    uint32_t member_34D8; // +0x34D8
    // 0x00748180
    void GetAuxField();
    // 0x00747F30
    void GetClassIdentifier();
    // 0x007475D0
    void GetDefaultDimensions();
    // 0x00747F20
    void GetGameplayValue();
    // 0x00748160
    void GetObjectSize();
    // 0x00748170
    void GetTypeIdentifier();
    // 0x00748010
    void LoadFromINI2();
    // 0x00747F70
    void PowerDrainUpdate();
    // 0x007480B0
    void SaveToINI();
    // 0x007470D0
    void UnitTypeClass();
    // 0x007473C0
    void j_?do_always_noconv_codecvt_base_std__MBE_NXZ_19_0();
};
