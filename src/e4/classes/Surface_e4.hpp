// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Surface {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    int Width;  // 0x4
    int Height;  // 0x8
// --- flat members (END) ---
    void* BytesPerPixel;  // 0x0 (no offset truth)
    AbstractClass * * LoadToSurfaceSHP(char *Source);
    LPDIRECTDRAW CreateSurfacePalette();
    TechnoClass * * BlitTechnoTo(short * a1, TechnoClass * aP2, TechnoClass * aP3, TechnoClass * aP4, AbstractClass * aP5, TechnoClass * aP6);
    char StubReturnFalse();
    int AlphaBlend(unsigned int * a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8);
    static int BlitTransparent(int * a0, ObjectClass * aP1, int a3, ObjectClass * aP3);
    int CommitSurfaceBuffersAudio();
    int GetHeight();
    int GetWidth();
    int IsLocked();
    int PixelToIndex(unsigned int * a2);
    int RenderRadar();
    int  TileBlit(INIClass * aP0, ObjectClass * aP1, int a3, int a4, int a5);
    unsigned int * Construct(ObjectClass * aP1, IUnknown * aP2, void *a3, void *a4, void *a5, void *a6, void *a1 = 0, void *a2 = 0, void *a7 = 0);
    unsigned int * CopyRect(int *aP1);
    unsigned int *  GetRect(unsigned int * a2);
    void   RenderToSurfaceVoxel(unsigned int * a2, int * a3);
    unsigned int * CopyRect(int *aP1, void * a1);
    LPDIRECTDRAW CreateSurfacePalette(AbstractClass * Src);
    unsigned int u32_10A;  // @0x7bd6f2 (W16G3 raw-usage vocab)
    unsigned int u32_1A8;  // @0x7bdxxx (W16G3 raw-usage vocab)
    unsigned int *q000;  // 0x0 (offset-truth)
    unsigned int u32_104;  // 0x104 (offset-truth)
    unsigned int u32_1224;  // 0x1224 (offset-truth)
    unsigned int u32_1228;  // 0x1228 (offset-truth)
    unsigned int u32_1234;  // 0x1234 (offset-truth)
    unsigned int u32_123C;  // 0x123C (offset-truth)
    unsigned int u32_1240;  // 0x1240 (offset-truth)
    unsigned int u32_1244;  // 0x1244 (offset-truth)
    unsigned int u32_1490;  // 0x1490 (offset-truth)
    unsigned int u32_1498;  // 0x1498 (offset-truth)
};

} // namespace gamemd
