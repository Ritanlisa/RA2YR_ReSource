#pragma once
// CSP: MouseClass

class MouseClass {
public:
    uint8_t pad_0[1332]; // +0x0
    uint32_t member_534; // +0x534
    // 0x00693880
    void CheckCapture();
    // 0x00693060
    void GetHotspot();
    // 0x005BDAA0
    void GetPosition();
    // 0x005BDF50
    void HandleClick();
    // 0x0072DDB0
    void LoadCursors();
    // 0x005BDF30
    void LoadTypeData();
    // 0x0040D280
    void ProcessInput();
    // 0x005BDAB0
    void SetPosition();
    // 0x006D1770
    void ToggleContextGadget();
    // 0x0040D7D0
    void getCursorFrame();
    // 0x0040D540
    void initCursor();
    // 0x0040D720
    void selectCursor();
    // 0x0040D570
    void updateCursorState();
};
