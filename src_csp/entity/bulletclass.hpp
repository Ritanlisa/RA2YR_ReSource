#pragma once
// CSP: BulletClass

class BulletClass {
public:
    uint8_t pad_0[548]; // +0x0
    uint32_t member_224; // +0x224
    // 0x0046B960
    void AddVector3();
    // 0x00466660
    void CalculateSpreadAngle();
    // 0x0046B5A0
    void CheckEndOfSequence();
    // 0x004666C0
    void CheckMirrorState();
    // 0x0046B5B0
    void CheckMissionAbort();
    // 0x004E11F0
    void CheckProximityDetonation();
    // 0x0046AFD0
    void CheckTargetValidity();
    // 0x00468000
    void GetAnimFrame();
    // 0x00468430
    void LoseTarget();
    // 0x0046B540
    void MissionStubReturnZero();
    // 0x0046B550
    void MissionStubReturnZero2();
    // 0x0046B560
    void PowerDrainProcess();
    // 0x0046B0C0
    void RenderVoxelBullet();
    // 0x004E1100
    void ResetDetonationTimer();
    // 0x0046AE70
    void SaveLoad_Prefix();
    // 0x00468090
    void SetupVoxelTransform();
    // 0x00468B90
    void UpdateFlightPath();
    // 0x0046AFF0
    void ValidateTarget();
};
