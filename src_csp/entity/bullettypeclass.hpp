#pragma once
// CSP: BulletTypeClass

class BulletTypeClass : public ObjectTypeClass {
public:
    uint8_t pad_0[3677]; // +0x0
    uint32_t member_E5D; // +0xE5D
    // 0x0046BBC0
    void Construct();
    // 0x0046C750
    void GetClassIdentifier();
    // 0x0046C860
    void GetObjectSize();
    // 0x0046C850
    void GetTypeIdentifier();
    // 0x0046C820
    void GetWarhead();
    // 0x0069FC10
    void ProcessImpact();
    // 0x0046C560
    void ProcessPower();
    // 0x00465450
    void ReadArmor();
    // 0x0046C6A0
    void SaveLoad_Prefix();
    // 0x0046C730
    void SaveLoad_Prefix_0();
    // 0x0046C840
    void SetScaledSpawnDelay();
    // 0x0046C870
    void Stub();
    // 0x0046C880
    void StubReturnFalse();
};
