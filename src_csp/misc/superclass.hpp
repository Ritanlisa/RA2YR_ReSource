#pragma once
// CSP: SuperClass

class SuperClass {
public:
    uint8_t pad_0[60]; // +0x0
    uint32_t member_3C; // +0x3C
    uint8_t pad_40[528]; // +0x40
    uint32_t member_250; // +0x250
    // 0x006CE280
    void AdvanceCountdown();
    // 0x006CDFF0
    void ExecuteAction();
    // 0x006E1C40
    void Get();
    // 0x0053AE50
    void LaunchPsychicDominator();
    // 0x006CDEF0
    void LoadFromStream();
    // 0x006CB7B0
    void Lose();
    // 0x006CC2B0
    void NameReadiness();
    // 0x006CE320
    void RemoveFromPointerArray();
    // 0x006CE0B0
    void Reset();
    // 0x006CC290
    void ResetRechargeTime();
    // 0x006CC1E0
    void SetCharge();
    // 0x006CB4D0
    void SetOnHold();
    // 0x006CB820
    void SetReadiness();
    // 0x006CC280
    void SetRechargeTime();
    // 0x006CDE90
    void ShouldDrawProgress();
    // 0x006CE1A0
    void ShouldFlashTab();
    // 0x006CB830
    void StopPreclickAnim();
    // 0x006CE210
    void StubReturn128();
    // 0x006CE200
    void StubReturn57();
    // 0x006CDEB0
    void ddtor();
};
