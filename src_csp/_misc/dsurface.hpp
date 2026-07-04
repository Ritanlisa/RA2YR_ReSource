#pragma once
// CSP: DSurface

class DSurface {
public:
    uint8_t pad_0[2212]; // +0x0
    uint32_t member_8A4; // +0x8A4
    // 0x004BB080
    void BlitPart();
    // 0x004BBB00
    void BlitStretch();
    // 0x004C1A90
    void BlitWhole();
    // 0x004BAEC0
    void CanLock();
    // 0x004BAF20
    void CheckBltStatus();
    // 0x007BDF80
    void CommitBuffers();
    // 0x004BA480
    void ConstructFromHandle();
    // 0x004BAC60
    void CreateBackBuffer();
    // 0x004BA6B0
    void Destroy();
    // 0x004C0750
    void DrawDashedLineStipple();
    // 0x004BC750
    void DrawLineFaded();
    // 0x004BBCA0
    void DrawLineModulated();
    // 0x004BFD30
    void DrawLineZBuf();
    // 0x004C0E30
    void DrawStippledRect();
    // 0x00621B80
    void FillRectWithColor();
    // 0x004BB830
    void FillRectWithFlags();
    // 0x007C2C60
    void Flip();
    // 0x00759E60
    void FlipIfNeeded();
    // 0x004BAD60
    void GetBytesPerPixel();
    // 0x004BAD70
    void GetPitch();
    // 0x004C1AB0
    void IsDSurface();
    // 0x004BAD80
    void Lock();
    // 0x007BD210
    void LockAndPrepareRect();
    // 0x00480180
    void Process();
    // 0x004BB000
    void RestoreIfLost();
    // 0x004BAF40
    void Unlock();
};
