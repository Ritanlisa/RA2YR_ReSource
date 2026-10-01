// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DSurface;  // fix_fwd_type_supply

struct BinkMovieHandle {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    char* tempPath;  // 0x4
    DSurface* renderTarget;  // 0x8
    int width;  // 0xC
    int height;  // 0x10
    int currentFrame;  // 0x14
    int totalFrames;  // 0x18
    int throttleCounter;  // 0x1C
    bool frameDecoded;  // 0x20
    unsigned char q021;  // 0x21
    int dataSize;  // 0x24
    unsigned int surfaceFlags;  // 0x28
    bool playing;  // 0x2C
    bool memoryOwned;  // 0x2D
    unsigned char q02E;  // 0x2E
    void* memoryBuffer;  // 0x30
    unsigned int MovieHandle;
    unsigned int tempPath2;
// --- flat members (END) ---
    BOOL COMStub();
    BinkMovieHandle * QueryInterface(char a2);
    void AddRef(void *a1);
    int AdjustSurfaceFormat(int a2, void *a2_2);
    void Check(int a2, void *a2_2, void *a3);
    int InitFromFile(void *a1, void *a2);
    int Pause(int a2, int a3);
    void Release(void *a1);
    int RenderFrameClipped(int a2, int a3, void *a3_2);
    int RenderLoop(int a2, void *a2_2, void *a3, void *a4);
    int _vt03(unsigned char a2);
    unsigned int * Close(void *a1, void *a2);
    void CopyFrameToSurface(void *a1);
    unsigned int BlitToTarget(void *a1, void *a2);
};

} // namespace gamemd
