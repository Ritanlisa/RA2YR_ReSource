// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct Mouse {
    void* vfptr;  // minimal E2 declaration
    int SetBounds(IUnknown * aP1);  // 0x4A8BF0
    SHORT GetKeyState(unsigned signed char vKey);  // 0x53EC90
    BOOL IsButtonDown(unsigned signed char a1);  // 0x54F5C0
    HWND HideWindow();  // 0x5BC400
    char SetCursor(ObjectClass * aP1, ObjectClass * aP2);  // 0x5BDC80
    HWND ReleaseCapture();  // 0x6938C0
    void DrawCursor(IUnknown * aP1, WWMouseClass * aP2, int a4);  // 0x7B93F0
};
} // namespace gamemd
