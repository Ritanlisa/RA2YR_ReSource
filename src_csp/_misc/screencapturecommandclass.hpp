#pragma once
// CSP: ScreenCaptureCommandClass

class ScreenCaptureCommandClass : public CommandClass {
public:
    // 0x00537B50
    void AddRef();
    // 0x00537B40
    void Constructor();
    // 0x00537BA0
    void Execute();
    // 0x00537B80
    void Release();
    // 0x00537B60
    void ddtor();
};
