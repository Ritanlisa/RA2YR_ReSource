#pragma once
// CSP: VoxelAnimClass

class VoxelAnimClass {
public:
    uint8_t pad_0[29]; // +0x0
    uint32_t member_1D; // +0x1D
    // 0x00749B20
    void DrawVoxelFrame();
    // 0x0074AA30
    void GetFrameCount();
    // 0x0074AB30
    void LoadFrame();
    // 0x00749B70
    void ProcessAnim();
    // 0x004CAF20
    void ProcessFrame();
    // 0x004399E0
    void QuaternionToMatrix();
    // 0x0074A970
    void SaveLoad_Prefix();
    // 0x0074A960
    void StubReturn3();
    // 0x0074AB10
    void StubReturn328();
    // 0x0074AB20
    void StubReturn41();
    // 0x0074AB40
    void StubReturnFalse();
    // 0x0074AAD0
    void ddtor();
};
