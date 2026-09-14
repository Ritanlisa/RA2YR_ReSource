// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct MSFrameAnim {
    void* vfptr;  // minimal E2 declaration
    MSFrameAnim * QueryInterface(char a2);  // 0x769BD0
    char setFrameRate(int a2, unsigned int * a3);  // 0x769FE0
    int initAnimation();  // 0x769C50
    void stopAnimation();  // 0x769CD0
    rc_ptr * resumeAnimation(char a2);  // 0x769D90
    int getCurrentFrame(int a2);  // 0x76A100
    char loopAnimation(int a2, unsigned int * a3);  // 0x76A2B0
    int resetAnimation(unsigned int * a2);  // 0x76A360
    DynamicVector * setPosition(char a2);  // 0x76A680
    DynamicVector * setScale(char a2);  // 0x76A720
    char Load(int a1, int * a2);  // 0x767ED0
    void Draw(int a1, int * a2);  // 0x767EF0
    unsigned int * UpdateFrame(unsigned int * a1);  // 0x767F80
    unsigned int startAnimation(int a2);  // 0x769C80
    unsigned int pauseAnimation(int a2);  // 0x769D00
    unsigned int * drawFrame();  // 0x76A7C0
};
} // namespace gamemd
