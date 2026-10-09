// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MSVQAnim;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct MSFrameAnim {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* q004;  // 0x4
    void* q008;  // 0x8
    void* q00C;  // 0xC
    bool IsAllocated;  // 0xD
    void* q010;  // 0x10
    bool IsInitialized;  // 0x12
    unsigned char q014;  // 0x14
    int Count;  // 0x16
    MSVQAnim* q018;  // 0x18
// --- flat members (END) ---
    void * QueryInterface(unsigned int * Block, char a2);  // 0x769BD0
    AbstractClass * * setFrameRate(int a2, unsigned int * a3);  // 0x769FE0
    int initAnimation();  // 0x769C50
    void stopAnimation();  // 0x769CD0
    rc_ptr * resumeAnimation(unsigned int * Block, char a2);  // 0x769D90
    int getCurrentFrame(int a2);  // 0x76A100
    char loopAnimation(int a2, unsigned int * a3);  // 0x76A2B0
    int resetAnimation(unsigned int * a2);  // 0x76A360
    DynamicVector * setPosition(unsigned int * Block, char a2);  // 0x76A680
    DynamicVector * setScale(unsigned int * Block, char a2);  // 0x76A720
    char Load(int a1, int * a2, void *a3_1, void *a4_1);  // 0x767ED0
    void Draw(int a1, int * a2);  // 0x767EF0
    unsigned int * UpdateFrame(unsigned int * a1);  // 0x767F80
    unsigned int startAnimation(int a2);  // 0x769C80
    unsigned int pauseAnimation(int a2);  // 0x769D00
    unsigned int * drawFrame(void *a1_1);  // 0x76A7C0
    unsigned char m_1;  // 0x1 (offset-truth)
    unsigned int m_10;  // 0x10 (offset-truth)
    unsigned int m_8;  // 0x8 (offset-truth)
    unsigned int m_C;  // 0xC (offset-truth)
    unsigned int q000;  // 0x0 (offset-truth)
};
} // namespace gamemd
