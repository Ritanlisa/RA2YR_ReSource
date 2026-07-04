#pragma once
// CSP: BinkMovie

class BinkMovie {
public:
    uint8_t pad_0[16]; // +0x0
    uint32_t member_10; // +0x10
    // 0x00432690
    void Close();
    // 0x006033F0
    void HandleKeyboard();
    // 0x00432C50
    void IsAtEnd();
    // 0x00432C30
    void Pause();
    // 0x00433040
    void RenderFrameToSurface();
    // 0x006C9EC0
    void VtableDispatch();
    // 0x006153E0
    void WndProc();
};
