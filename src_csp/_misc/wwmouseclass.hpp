#pragma once
// CSP: WWMouseClass

class WWMouseClass {
public:
    // 0x007B89F0
    void COMStub();
    // 0x007BA350
    void checkBounds();
    // 0x007BA330
    void checkCapture();
    // 0x007BA380
    void checkHotspot();
    // 0x007BA340
    void checkRegion();
    // 0x007B9D70
    void checkStatus();
    // 0x007B9D80
    void checkVisible();
    // 0x007BA320
    void drawCursor();
    // 0x007B9930
    void hideCursor();
    // 0x007B88D0
    void loadCursorImages();
    // 0x007B9D90
    void processFrame();
    // 0x007B9C30
    void releaseMouse();
    // 0x007B9690
    void renderDragSelectionRect();
    // 0x007B92D0
    void updateCursor();
    // 0x007BA360
    void updatePosition();
};
