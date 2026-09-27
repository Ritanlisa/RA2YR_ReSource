// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MSFrameAnim {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* q004;  // 0x4
    void* ;  // 0x8
    void* q00C;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned int q010;  // 0x10
    bool IsInitialized;  // 0x12
    unsigned char q014;  // 0x14
    int Count;  // 0x16
    MSVQAnim* q018;  // 0x18
    void* q01C;  // 0x1C
    unsigned char q020;  // 0x20
    MSVQAnim* q024;  // 0x24
    void* q028;  // 0x28
    void* q02C;  // 0x2C
    void* q030;  // 0x30
    int q034;  // 0x34
    void* q038;  // 0x38
    ObjectClass* q03C;  // 0x3C
    void* q040;  // 0x40
    void* q044;  // 0x44
    void* q048;  // 0x48
    unsigned char q04C;  // 0x4C
    unsigned char q050;  // 0x50
    MSVQAnim* q054;  // 0x54
    unsigned char q058;  // 0x58
    ObjectClass* q060;  // 0x60
    void* q064;  // 0x64
    void* q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q070;  // 0x70
    unsigned char q074;  // 0x74
    unsigned char q07C;  // 0x7C
    unsigned char q080;  // 0x80
    MSVQAnim* q084;  // 0x84
    unsigned char q088;  // 0x88
    unsigned char q090;  // 0x90
    unsigned char q094;  // 0x94
    void* q100;  // 0x100
    void* q104;  // 0x104
    unsigned char q108;  // 0x108
    unsigned char q10C;  // 0x10C
    void* q114;  // 0x114
    unsigned char q118;  // 0x118
    unsigned char q11C;  // 0x11C
    unsigned char q124;  // 0x124
    unsigned char q128;  // 0x128
    MPCooperative* q130;  // 0x130
    void* q134;  // 0x134
    unsigned char q138;  // 0x138
    unsigned char q13C;  // 0x13C
    unsigned char q144;  // 0x144
    unsigned char q148;  // 0x148
    ObjectClass* q150;  // 0x150
    unsigned char q154;  // 0x154
    unsigned int Items;
    unsigned int Items2;
    unsigned int q0042;
    unsigned int q0043;
    unsigned int q008;
// --- flat members (END) ---
    MSFrameAnim * QueryInterface(char a2);  // 0x769BD0
    char setFrameRate(int a2,  unsigned int * a3);    // 0x769FE0
    int initAnimation();  // 0x769C50
    void stopAnimation();  // 0x769CD0
    void* resumeAnimation(char a2);  // 0x769D90
    int getCurrentFrame(int a2);  // 0x76A100
    char loopAnimation(int a2,  unsigned int * a3);    // 0x76A2B0
    int resetAnimation(unsigned int * a2);  // 0x76A360
    DynamicVector * setPosition(char a2);  // 0x76A680
    DynamicVector * setScale(char a2);  // 0x76A720
    char Load(int a1,  int * a2);    // 0x767ED0
    void Draw(int a1,  int * a2);    // 0x767EF0
    unsigned int * UpdateFrame(unsigned int * a1);  // 0x767F80
    unsigned int startAnimation(int a2);  // 0x769C80
    unsigned int pauseAnimation(int a2);  // 0x769D00
    unsigned int * drawFrame();  // 0x76A7C0
};
} // namespace gamemd
