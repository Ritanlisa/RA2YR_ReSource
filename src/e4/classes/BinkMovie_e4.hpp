// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct BinkMovie {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    void* MovieHandle;  // 0x0 (no offset truth)
    void* currentFrame;  // 0x0 (no offset truth)
    void* height;  // 0x0 (no offset truth)
    void* width;  // 0x0 (no offset truth)
    unsigned int *  Close(char * FullPath, void *a1 = 0);  // 0x432690
    wchar_t *  Open(char * FullPath, int a3, void *a1 = 0);  // 0x4326C0
    int Stop(void *a1 = 0, void *a2 = 0);  // 0x432700
    AbstractClass * *  InitFromFile(void * FullPath);  // 0x432750
    int  Pause(uint8_t a2);  // 0x432C30
int Play(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0); // 0x432C70
    int RenderLoop(int aP1, int a3, int a4);  // 0x432E40
    int RenderFrameToSurface();  // 0x433040
    unsigned int *  RenderSingleFrame(int a2, int a3, int a4, char a5);  // 0x4331F0
    unsigned int *  BlitToTarget(int a2);  // 0x433270
    int  AdjustSurfaceFormat(int a2);  // 0x433330
    int Cleanup(void *a1_1, void *a1 = 0);  // 0x5C01F0
    int  HandleKeyboard(int a1, HWND a2);  // 0x6033F0
    AbstractClass * *  WndProc(HWND hWnd, UINT Msg, int wParam, int lParam);  // 0x6153E0
    int Destroy(void *a1_1);  // 0x6C9930
    int FreeSurfaceTracker(void *a1_1);  // 0x6C9AE0
    int  InitKeyframeTracking(char * Source);  // 0x6C9B40
    int  CheckKeyframeTransition(unsigned int a2);  // 0x6C9C60
    AbstractClass * * ProcessKeyframe(unsigned int *aP1);  // 0x6C9D40
    unsigned int *  VtableDispatch(int a2);  // 0x6C9EC0
    static int *  CreateSurfaceTracker(char * FullPath);  // 0x6C99D0
int IsAtEnd(void *a1_1); // def-aligned
    int IsAtEnd(void *a1_1);
    int Play(void *a1_1);
    int RenderFrameToSurface(void *a1_1);
    int InitKeyframeTracking(char * Source, void * aSubtitlemdTxt);
    unsigned int q_20;  // +0x20 flat supply (CSP-fed)
    unsigned int q_50;  // +0x50 flat supply (CSP-fed)
    unsigned int u32_104;  // 0x104 (offset-truth)
    unsigned char u32_105;  // 0x105 (offset-truth)
    unsigned int u32_24;  // 0x24 (offset-truth)
    unsigned int u32_2C;  // 0x2C (offset-truth)
    unsigned char u32_2D;  // 0x2D (offset-truth)
    unsigned int u32_40;  // 0x40 (offset-truth)
    static double BinkMovie_field_0x20(...);  // plateau: C2039/C3861 stub
    static double BinkMovie_field_0x4(...);  // plateau: C2039/C3861 stub
    static double BinkMovie_field_0xC(...);  // plateau: C2039/C3861 stub
    static double __pad_0(...);  // plateau: C2039/C3861 stub
    static double u32_28(...);  // plateau: C2039/C3861 stub
};
} // namespace gamemd
