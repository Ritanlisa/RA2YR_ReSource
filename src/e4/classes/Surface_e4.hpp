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

    unsigned char q044;  // X10 supply (member_lookup)
    unsigned int q148;  // X10 supply (member_lookup)
    unsigned short u16_714;  // X10 supply (member_lookup)
    unsigned int u32_100;  // X10 supply (member_types)
    unsigned int u32_102;  // X10 supply (member_types)
    unsigned int u32_103;  // X10 supply (member_types)
    unsigned int u32_106;  // X10 supply (member_types)
    unsigned int u32_107;  // X10 supply (member_types)
    int u32_1248;  // X10 supply (member_lookup)
    unsigned int u32_154;  // X10 supply (member_types)
    unsigned int u32_164;  // X10 supply (member_types)
    unsigned int u32_168;  // X10 supply (member_types)
    unsigned int u32_170;  // X10 supply (member_types)
    unsigned int u32_1A0;  // X10 supply (member_types)
    unsigned int u32_24C;  // X10 supply (member_lookup)
    unsigned int u32_3C;  // X10 supply (member_types)
    unsigned int u32_3F;  // X10 supply (member_types)
    unsigned int u32_6D3;  // X10 supply (member_lookup)
    unsigned int u32_6DC;  // X10 supply (member_types)
    unsigned int u32_6E4;  // X10 supply (member_types)
    unsigned int u32_6E8;  // X10 supply (member_types)
    unsigned int u32_6EC;  // X10 supply (member_types)
    unsigned int u32_6F0;  // X10 supply (member_types)
    unsigned int u32_71C;  // X10 supply (member_types)
    unsigned int u32_754;  // X10 supply (member_types)
    unsigned int u32_764;  // X10 supply (member_types)
    unsigned int u32_768;  // X10 supply (member_types)
    uint16_t u32_76C;  // X10 supply (member_lookup)
    unsigned int u32_770;  // X10 supply (member_types)
    unsigned int u32_774;  // X10 supply (member_types)
    unsigned int u32_778;  // X10 supply (member_types)
    unsigned int u32_78C;  // X10 supply (member_types)
    unsigned int u32_794;  // X10 supply (member_types)
    unsigned int u32_798;  // X10 supply (member_types)
    unsigned int u32_79C;  // X10 supply (member_types)
    unsigned int u32_7A8;  // X10 supply (member_types)
    unsigned int u32_7B4;  // X10 supply (member_types)
    unsigned int u32_7B8;  // X10 supply (member_types)
    unsigned int u32_7CC;  // X10 supply (member_types)
    unsigned int u32_84;  // X10 supply (member_types)
    unsigned int u32_88;  // X10 supply (member_types)
    unsigned int u32_8C;  // X10 supply (member_types)
    unsigned int u32_94;  // X10 supply (member_types)
    unsigned int u32_98;  // X10 supply (member_types)
    unsigned int u32_9C;  // X10 supply (member_types)
    unsigned char u32_D0[4];  /* void */  // X10 supply (member_lookup)
    unsigned int u32_E8;  // X10 supply (member_types)
    uint16_t u32_F3;  // X10 supply (member_lookup)
    unsigned int u32_F5;  // X10 supply (member_types)
    uint16_t u32_FE;  // X10 supply (member_lookup)
    char u8_108;  // X10 supply (member_lookup)
    unsigned char u8_3E;  // X10 supply (member_lookup)
    char u8_74C;  // X10 supply (member_lookup)
    char u8_EA;  // X10 supply (member_lookup)
};

} // namespace gamemd
