#pragma once
// CSP: MSFrameAnim

class MSFrameAnim {
public:
    // 0x00767EF0
    void Draw();
    // 0x00767ED0
    void Load();
    // 0x00767F80
    void UpdateFrame();
    // 0x0076A100
    void getCurrentFrame();
    // 0x00769C50
    void initAnimation();
    // 0x0076A2B0
    void loopAnimation();
    // 0x00769D00
    void pauseAnimation();
    // 0x0076A360
    void resetAnimation();
    // 0x00769FE0
    void setFrameRate();
    // 0x00769C80
    void startAnimation();
};
