#pragma once
// CSP: TechnoTypeClass

class TechnoTypeClass : public ObjectTypeClass {
public:
    uint8_t pad_0[4]; // +0x0
    uint32_t member_4; // +0x4
    uint32_t member_8; // +0x8
    uint32_t member_C; // +0xC
    uint32_t member_10; // +0x10
    uint32_t member_14; // +0x14
    uint32_t member_18; // +0x18
    uint32_t member_1C; // +0x1C
    uint8_t pad_20[8]; // +0x20
    uint32_t member_28; // +0x28
    uint32_t member_2C; // +0x2C
    uint32_t member_30; // +0x30
    uint32_t member_34; // +0x34
    uint32_t member_38; // +0x38
    uint32_t member_3C; // +0x3C
    uint8_t pad_40[4]; // +0x40
    uint32_t member_44; // +0x44
    uint32_t member_48; // +0x48
    uint32_t member_4C; // +0x4C
    uint32_t member_50; // +0x50
    uint32_t member_54; // +0x54
    // 0x00711E90
    void CanAttackMove_IgnoreWeapon();
    // 0x005247C0
    void CanAttackMove_IgnoreWeapon_0();
    // 0x007473D0
    void CanAttackMove_IgnoreWeapon_0_0();
    // 0x00721290
    void CheckFlag();
    // 0x00711EE0
    void ComputeBuildTime();
    // 0x00711F60
    void ComputeValue();
    // 0x00711F00
    void ComputeValueSimple();
    // 0x00717BC0
    void Constructor_0();
    // 0x00717BE0
    void Constructor_1();
    // 0x005F7900
    void FindMatchingUnit();
    // 0x00457620
    void IsFactorySelectable();
    // 0x00717DB0
    void RemoveItem();
    // 0x00717B20
    void SaveLoadDataArray();
    // 0x007162F0
    void SaveLoad_Prefix();
    // 0x00716DC0
    void SaveLoad_Prefix_0();
    // 0x0041CB50
    void vt_entry_A0();
};
