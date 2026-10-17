// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct BinkMovie {
#pragma pack(push, 1)  // X60: binary-packed layout
    int __pad_0;  // 0x0
    unsigned int BinkMovie_field_0x4;  // 0x4
    unsigned int BinkMovie_field_0x8;  // 0x8
    int BinkMovie_field_0xC;  // 0xC
    int BinkMovie_field_0x10;  // 0x10
    int BinkMovie_field_0x14;  // 0x14
    unsigned long long __pad_18;  // 0x18
    void* q_20;  // 0x20
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
#pragma pack(pop)
};
} // namespace gamemd
