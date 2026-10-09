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
// --- flat members (END) ---
    void* MovieHandle;  // 0x0 (no offset truth)
    void* currentFrame;  // 0x0 (no offset truth)
    void* height;  // 0x0 (no offset truth)
    void* width;  // 0x0 (no offset truth)
    unsigned int * Close(char *FullPath);  // 0x432690
    wchar_t * Open(char *FullPath, int a3);  // 0x4326C0
    int Stop();  // 0x432700
    AbstractClass * * InitFromFile(LPCSTR * FullPath, void *a2_1);  // 0x432750
    int Pause(unsigned char a2);  // 0x432C30
int Play(); // 0x432C70
    int RenderLoop(int aP1, int a3, int a4);  // 0x432E40
    int RenderFrameToSurface();  // 0x433040
    unsigned int * RenderSingleFrame(int aP1, int a3, int a4, char a5);  // 0x4331F0
    unsigned int * BlitToTarget(int aP1);  // 0x433270
    int AdjustSurfaceFormat(int aP1);  // 0x433330
    int Cleanup(void *a1_1);  // 0x5C01F0
    int HandleKeyboard(int a1, HWND a2);  // 0x6033F0
    AbstractClass * * WndProc(HWND hWnd, UINT Msg, int wParam, LPARAM lParam);  // 0x6153E0
    int Destroy(void *a1_1);  // 0x6C9930
    int FreeSurfaceTracker(void *a1_1);  // 0x6C9AE0
    int InitKeyframeTracking(char * Source);  // 0x6C9B40
    int CheckKeyframeTransition(unsigned int aP1);  // 0x6C9C60
    AbstractClass * * ProcessKeyframe(ObjectClass * aP1);  // 0x6C9D40
    unsigned int * VtableDispatch(int a2);  // 0x6C9EC0
    static int * CreateSurfaceTracker(char * FullPath);  // 0x6C99D0
int IsAtEnd(void *a1_1); // def-aligned
    int IsAtEnd(void *a1_1);
    int Play(void *a1_1);
    int RenderFrameToSurface(void *a1_1);
    int InitKeyframeTracking(char * Source, void * aSubtitlemdTxt);
    unsigned int q_20;  // +0x20 flat supply (CSP-fed)
    unsigned int q_50;  // +0x50 flat supply (CSP-fed)
};
} // namespace gamemd
