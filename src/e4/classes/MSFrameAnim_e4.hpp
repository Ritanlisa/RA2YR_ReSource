// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MSVQAnim;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct MSFrameAnim {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    bool IsAllocated;  // 0xD
    bool IsInitialized;  // 0x12
    int Count;  // 0x16
// --- flat members (END) ---
    void *  QueryInterface(char a2);  // 0x769BD0
    AbstractClass * *  setFrameRate(int a2, unsigned int * a3);  // 0x769FE0
    int initAnimation();  // 0x769C50
    void stopAnimation();  // 0x769CD0
    rc_ptr *  resumeAnimation(char a2);  // 0x769D90
    int  getCurrentFrame(int a2);  // 0x76A100
    char  loopAnimation(int a2, unsigned int * a3);  // 0x76A2B0
    int  resetAnimation(unsigned int * a2);  // 0x76A360
    DynamicVector *  setPosition(char a2);  // 0x76A680
    DynamicVector *  setScale(char a2);  // 0x76A720
    char  Load(int * a2, void *a1 = 0, void *a3 = 0, void *a4 = 0);  // 0x767ED0
    void  Draw(int * a2, void *a1 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0);  // 0x767EF0
    unsigned int * UpdateFrame(unsigned int * a1);  // 0x767F80
    unsigned int  startAnimation(int a2);  // 0x769C80
    unsigned int  pauseAnimation(int a2);  // 0x769D00
    unsigned int * drawFrame(void *a1_1);  // 0x76A7C0
    unsigned char *m_1;  // 0x1 (offset-truth)
    unsigned int m_10;  // 0x10 (offset-truth)
    unsigned int m_8;  // 0x8 (offset-truth)
    unsigned int m_C;  // 0xC (offset-truth)
    unsigned int *q000;  // 0x0 (offset-truth)
    static double __pad_0(...);  // plateau: C2039/C3861 stub
    static double q004(...);  // plateau: C2039/C3861 stub
    static double q008(...);  // plateau: C2039/C3861 stub
    static double q00C(...);  // plateau: C2039/C3861 stub
    static double q010(...);  // plateau: C2039/C3861 stub
};
} // namespace gamemd
