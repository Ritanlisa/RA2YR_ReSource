#pragma once
// CSP: MissionClass

class MissionClass : public ObjectClass {
public:
    uint8_t pad_0[282]; // +0x0
    uint32_t member_11A; // +0x11A
    // 0x005B3570
    void AdvanceState();
    // 0x005B3040
    void GetPrimaryOrFallback();
    // 0x005B3A10
    void HasValidTarget();
    // 0x00454250
    void IsProducing();
    // 0x007013A0
    void OverrideMission_SyncLog();
    // 0x005B2E10
    void Return450A();
    // 0x005B2E20
    void Return450B();
    // 0x005B2E30
    void Return450C();
    // 0x005B2ED0
    void Return450D();
    // 0x005B2EE0
    void Return450E();
    // 0x005B2FA0
    void Return450F();
    // 0x005B2F10
    void Return450G();
    // 0x005B2F20
    void Return450H();
    // 0x005B2F40
    void Return450I();
    // 0x005B2F50
    void Return450J();
    // 0x005B2F80
    void Return450K();
    // 0x005B2F90
    void Return450L();
    // 0x005B2FB0
    void Return450M();
    // 0x005B2FC0
    void Return450N();
    // 0x005B2FD0
    void SetState();
    // 0x0041BF30
    void vt_entry_1FC();
    // 0x0041B5E0
    void vt_entry_200();
};
