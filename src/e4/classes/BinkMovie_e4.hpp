// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct BinkMovie {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned int u32_4;  // 0x4
    void* q008;  // 0x8
    bool q00A;  // 0xA
    void* q00C;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned int u32_14;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    void* q020;  // 0x20
    unsigned int u32_24;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    bool q02D;  // 0x2D
    unsigned char q031;  // 0x31
    void* binkHandle;  // 0x32
    unsigned int q034;  // 0x34
    unsigned char q040;  // 0x40
    unsigned char q044;  // 0x44
    AbstractClass * ptr_48;  // 0x48
    void* q050;  // 0x50
    unsigned int q054;  // 0x54
    unsigned char q068;  // 0x68
    void* q080;  // 0x80
    unsigned int q084;  // 0x84
    unsigned char q104;  // 0x104
    AbstractClass * q114;  // 0x114
    void* q128;  // 0x128
    unsigned int q130;  // 0x130
    int q201;  // 0x201
    unsigned int q00C2;
    unsigned int u32_100;
    unsigned int u32_40;
    unsigned int u32_42;
// --- flat members (END) ---
    unsigned int * Close(char * FullPath);  // 0x432690
    unsigned int * Open(char * FullPath, int a3);  // 0x4326C0
    int Stop();  // 0x432700
    char InitFromFile(LPCSTR * FullPath);  // 0x432750
    int Pause(unsigned char a2);  // 0x432C30
    BOOL IsAtEnd();  // 0x432C50
    int Play();  // 0x432C70
    bool RenderLoop(DSurface * aP1, int a3, int a4);  // 0x432E40
    bool RenderFrameToSurface();  // 0x433040
    unsigned int * RenderSingleFrame(DSurface * aP1, int a3, int a4, char a5);  // 0x4331F0
    unsigned int * BlitToTarget(DSurface * aP1);  // 0x433270
    int AdjustSurfaceFormat(DSurface * aP1);  // 0x433330
    void Cleanup();  // 0x5C01F0
    int HandleKeyboard(int a1, HWND a2);  // 0x6033F0
    int WndProc(HWND hWnd, UINT Msg, int wParam, LPARAM lParam);  // 0x6153E0
    void Destroy();  // 0x6C9930
    int FreeSurfaceTracker();  // 0x6C9AE0
    char InitKeyframeTracking(char * Source);  // 0x6C9B40
    char CheckKeyframeTransition(void* aP1);  // 0x6C9C60
    void ProcessKeyframe(ObjectClass * aP1);  // 0x6C9D40
    unsigned int * VtableDispatch(int a2);  // 0x6C9EC0
    int * CreateSurfaceTracker();  // 0x6C99D0
};
} // namespace gamemd
