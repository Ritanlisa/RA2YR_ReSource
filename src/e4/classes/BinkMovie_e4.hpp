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
    unsigned int ;  // 0xC
    void* ;  // 0x10
    void* ;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    void* q020;  // 0x20
    unsigned int BinkMovie_field_0x10;
    unsigned int BinkMovie_field_0x14;
    unsigned int BinkMovie_field_0x20;
    unsigned int BinkMovie_field_0x4;
    unsigned int BinkMovie_field_0xC;
    unsigned int __pad_0;
    unsigned int __pad_18;
    unsigned int memoryBuffer;
    unsigned int q00C2;
    unsigned int tempPath;
    unsigned int u32_100;
    unsigned int u32_24;
    unsigned int u32_2C;
    unsigned int u32_2D;
    unsigned int u32_40;
    unsigned int u32_42;
    unsigned int q02C;
    unsigned int q02D;
    unsigned int q040;
    unsigned int q050;
    unsigned int q00C;
    unsigned int u32_10;
    unsigned int u32_14;
// --- flat members (END) ---
    unsigned int * Close(char * FullPath);  // 0x432690
    unsigned int * Open(char * FullPath,  int a3);    // 0x4326C0
    int Stop();  // 0x432700
    AbstractClass * * InitFromFile(LPCSTR * FullPath);  // 0x432750
    int Pause(unsigned char a2);  // 0x432C30
    BOOL IsAtEnd();  // 0x432C50
    int Play();  // 0x432C70
    int RenderLoop(DSurface * aP1,  int a3,  int a4);    // 0x432E40
    bool RenderFrameToSurface();  // 0x433040
    unsigned int * RenderSingleFrame(DSurface * aP1,  int a3,  int a4,  char a5);    // 0x4331F0
    unsigned int * BlitToTarget(DSurface * aP1);  // 0x433270
    int AdjustSurfaceFormat(DSurface * aP1);  // 0x433330
    void Cleanup();  // 0x5C01F0
    int HandleKeyboard(int a1,  HWND a2);    // 0x6033F0
    int WndProc(HWND hWnd,  UINT Msg,  int wParam,  LPARAM lParam);    // 0x6153E0
    void Destroy();  // 0x6C9930
    int FreeSurfaceTracker();  // 0x6C9AE0
    char InitKeyframeTracking(char * Source);  // 0x6C9B40
    int CheckKeyframeTransition(CellStruct * aP1);  // 0x6C9C60
    void ProcessKeyframe(ObjectClass * aP1);  // 0x6C9D40
    unsigned int * VtableDispatch(int a2);  // 0x6C9EC0
    int * CreateSurfaceTracker();  // 0x6C99D0
};
} // namespace gamemd
