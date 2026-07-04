#pragma once
// CSP: AnimClass

class AnimClass {
public:
    uint8_t pad_0[3594]; // +0x0
    uint32_t member_E0A; // +0xE0A
    // 0x00425630
    void CheckDamageFlags();
    // 0x00425510
    void CheckEndOfSequence();
    // 0x00422C70
    void CheckLayerFlags();
    // 0x004238D0
    void CheckMirrorFlags();
    // 0x00424CB0
    void InWhichLayer_AttachedObjectLayer();
    // 0x00426530
    void MissionStubReturnZero();
    // 0x00426540
    void MissionStubReturnZero2();
    // 0x00426300
    void ProcessAreaEffect();
    // 0x00425410
    void ProcessPower();
    // 0x00729370
    void ProcessSequence();
    // 0x00425280
    void SaveLoad_Prefix();
    // 0x004253B0
    void SaveLoad_Prefix_0();
    // 0x00422BC0
    void SetAnimSpeed();
    // 0x00426270
    void UpdateDamageRadius();
    // 0x004238B0
    void UpdateMirrorState();
    // 0x00423930
    void UpdateProjectileTrajectory();
    // 0x00422BE0
    void UpdateZAdjust();
    // 0x00447E00
    void initAnimation();
};
