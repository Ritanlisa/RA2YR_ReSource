// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct BinkMovie {
    unsigned char q000;  // 0x0
    char __pad_1[3];  // 0x1
    unsigned int u32_4;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned int u32_C;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned int u32_14;  // 0x14
    unsigned int u32_18;  // 0x18
    unsigned char u32_1C;  // 0x1C
    char __pad_1D[3];  // 0x1D
    unsigned int u32_20;  // 0x20
    unsigned int u32_24;  // 0x24
    unsigned int u32_28;  // 0x28
    unsigned char u32_2C;  // 0x2C
    unsigned char u32_2D;  // 0x2D
    char __pad_2E[2];  // 0x2E
    unsigned int u32_30;  // 0x30
    char __pad_34[20];  // 0x34
    unsigned int q048;  // 0x48
    char __pad_4C[68];  // 0x4C
    unsigned int q090;  // 0x90
    char __pad_94[140];  // 0x94
    unsigned int q120;  // 0x120
    char __pad_124[140];  // 0x124
    unsigned int q1B0;  // 0x1B0
    char __pad_1B4[140];  // 0x1B4
    unsigned int q240;  // 0x240
    char __pad_244[140];  // 0x244
    unsigned int q2D0;  // 0x2D0
    char __pad_2D4[140];  // 0x2D4
    unsigned int q360;  // 0x360
    char __pad_364[140];  // 0x364
    unsigned int q3F0;  // 0x3F0
    char __pad_3F4[140];  // 0x3F4
    unsigned char q480;  // 0x480
    char __pad_481[143];  // 0x481
    unsigned int q510;  // 0x510
    char __pad_514[140];  // 0x514
    unsigned char q5A0;  // 0x5A0
    char __pad_5A1[143];  // 0x5A1
    unsigned char q630;  // 0x630
    char __pad_631[35];  // 0x631
    unsigned char q654;  // 0x654
    char __pad_655[107];  // 0x655
    unsigned int q6C0;  // 0x6C0
    char __pad_6C4[320];  // 0x6C4
    unsigned int u32_804;  // 0x804
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    unsigned int * Close(char *FullPath, void *a2 = 0);  // 0x432690
    unsigned int * Open(char *FullPath, int a3, void *a3_1 = 0);  // 0x4326C0
    int Stop(void *a1 = 0, void *a2 = 0);  // 0x432700
    AbstractClass * *  InitFromFile(void * FullPath);  // 0x432750
    int Pause(unsigned char a2);  // 0x432C30
int Play(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0); // 0x432C70
    int RenderLoop(int aP1, int a3, int a4);  // 0x432E40
    int RenderFrameToSurface();  // 0x433040
    unsigned int * RenderSingleFrame(int aP1, int a3, int a4, char a5);  // 0x4331F0
    unsigned int * BlitToTarget(int aP1);  // 0x433270
    int AdjustSurfaceFormat(int aP1);  // 0x433330
    int Cleanup(void *a1_1, void *a2 = 0);  // 0x5C01F0
    int  HandleKeyboard(int a1, HWND a2);  // 0x6033F0
    AbstractClass * * WndProc(HWND hWnd, UINT Msg, int wParam, LPARAM lParam);  // 0x6153E0
    int Destroy(void *a1_1);  // 0x6C9930
    int FreeSurfaceTracker(void *a1_1);  // 0x6C9AE0
    int  InitKeyframeTracking(char * Source);  // 0x6C9B40
    int CheckKeyframeTransition(unsigned int aP1);  // 0x6C9C60
    AbstractClass * * ProcessKeyframe(unsigned int *aP1);  // 0x6C9D40
    unsigned int *  VtableDispatch(int a2);  // 0x6C9EC0
    static int *  CreateSurfaceTracker(char * FullPath);  // 0x6C99D0
int IsAtEnd(void *a1_1); // def-aligned
    int Play(void *a1_1);
    int RenderFrameToSurface(void *a1_1);
    int InitKeyframeTracking(char * Source, void * aSubtitlemdTxt);
};
} // namespace gamemd
