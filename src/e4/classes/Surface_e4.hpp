// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct AbstractClass;  // fix_fwd_type_supply
struct TechnoClass;  // fix_fwd_type_supply

struct Surface {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    unsigned char __pad_0[87];  // 0x0
    int Width;  // 0x4
    int Height;  // 0x8
    unsigned int u32_B;  // 0xB
    unsigned int LockCount;
    unsigned int q00C;
// --- flat members (END) ---
    AbstractClass * * LoadToSurfaceSHP(char *Source);
    LPDIRECTDRAW CreateSurfacePalette();
    TechnoClass * * BlitTechnoTo(short * a1, TechnoClass * aP2, TechnoClass * aP3, TechnoClass * aP4, AbstractClass * aP5, TechnoClass * aP6);
    char StubReturnFalse();
    int AlphaBlend(unsigned int * a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8);
    int BlitTransparent(int * a0, ObjectClass * aP1, int a3, ObjectClass * aP3);
    int CommitSurfaceBuffersAudio();
    int GetHeight();
    int GetWidth();
    int IsLocked();
    int PixelToIndex(unsigned int * a2);
    int RenderRadar();
    int  TileBlit(INIClass * aP0, ObjectClass * aP1, int a3, int a4, int a5);
    unsigned int * Construct(ObjectClass * aP1, IUnknown * aP2, void *a3, void *a4, void *a5, void *a6);
    unsigned int * CopyRect(int *aP1);
    unsigned int *  GetRect(unsigned int * a2);
    void   RenderToSurfaceVoxel(unsigned int * a2, int * a3);
};

} // namespace gamemd
