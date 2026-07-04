#pragma once
// CSP: SlaveManagerClass

class SlaveManagerClass : public AbstractClass {
public:
    uint8_t pad_0[92]; // +0x0
    uint32_t member_5C; // +0x5C
    // 0x006B1A70
    void Calc2DDistance();
    // 0x006AF650
    void CreateSlave();
    // 0x00522FC0
    void IsMasterHarvester();
    // 0x006B1170
    void LoadManager();
    // 0x006B0A20
    void LostSlave();
    // 0x006AF6C0
    void ProcessSlaves();
    // 0x006B1300
    void SaveManager();
    // 0x006AF580
    void SetOwner();
    // 0x006B1020
    void ShouldWakeUpNow();
    // 0x006B1370
    void StubReturn100();
    // 0x006B1380
    void StubReturn72();
    // 0x006AF5F0
    void UpdateSlaves();
    // 0x00522D20
    void VtableDispatch();
    // 0x006B1130
    void ddtor();
};
