// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct BinkMovie {
    void* vfptr;  // minimal E2 declaration
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
    char CheckKeyframeTransition(CellStruct * aP1);  // 0x6C9C60
    void ProcessKeyframe(ObjectClass * aP1);  // 0x6C9D40
    unsigned int * VtableDispatch(int a2);  // 0x6C9EC0
    int * CreateSurfaceTracker();  // 0x6C99D0
};
} // namespace gamemd
