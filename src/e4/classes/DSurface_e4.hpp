// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once
#ifndef GAMEMD_E4_FLAT_DSurface
#define GAMEMD_E4_FLAT_DSurface 1  // G57c2: suppress minimal_carriers.hpp twin
#endif
#include "e4/classes/MouseClass_e4.hpp"



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Coord;  // fix_fwd_type_supply
struct MouseClass;  // fix_fwd_type_supply

struct DSurface {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
// --- flat members (END) ---
    AbstractClass * Construct(int aP1, int aP2, char aP3, char a5, void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0, void *a6 = 0);
    AbstractClass * * Process(void* aP1, int * a2);
    Coord * * DrawLineFaded(int a2, unsigned int * a3, int * a4, unsigned char * a5, int a6, int a7, char a8, float a9, char a10, char a11, float a12);
    Coord * * DrawLineModulated(int * a1, int a2, int a3, unsigned int * a4, unsigned int * a5, int a6, int a7, int a8, char a9);
    DSurface * * Blit(int * a1, int * a2, unsigned int * a3, int * a4, DSurface * aP5, int a7, char a8);
    MouseClass * * DrawStippledRect(unsigned int * a2, unsigned int * a3, int16_t a4, char a5);
    ObjectClass * * RenderToSurface(int *aP1);
    char FlipIfNeeded();
    char IsDSurface();
    int BlitPart(int a2, int a3, int a4, int a5, int a6);
    int CommitBuffers();
    AbstractClass * * Destroy(void *a1 = 0);
    int DrawDashedLineStipple(int * a2, int * a3, int16_t a4, int a5, int a6, char a7);
    int DrawLineZBuf(int a1, int a2, int a3, unsigned int * a4, unsigned int * a5, unsigned short a6, int a7, int a8, char a9);
    int DrawMarker(AbstractClass * aP1, ObjectClass * aP2);
    static int FillRectWithColor(int *a1, int a2, short a3, unsigned char a4);
    int Flip();
    static int Flip2();
    int GetBytesPerPixel();
    int LockAndPrepareRect();
    int RestoreIfLost(void *a1 = 0);
    long long ConstructFromHandle();
    unsigned int * CreateBackBuffer(int a2, void *a1 = 0);
    AbstractClass * * CreatePrimary(void *a1 = 0);
    void * loc_4C1AC0(std::codecvt_base *a1);
    static void BlitStretch(int a1, int a2, int a3);
    void* DrawGradientLine(int a2, unsigned int * a3, unsigned int * a4, int a5, int a6, float * a7, float * a8);
    void* DrawLineZBufColored(int a2, unsigned int * a3, unsigned int * a4, unsigned char * a5, float a6, int a7, int a8);
    void* FillRectEx(int a2, int a3, int a4);
    static void * Lock(DSurface * aP1, int a2, int a3);
    static int FillRectWithColor(int * a0, ObjectClass * aP1, int16_t a3, uint8_t a4);
    unsigned int q_1E0;  // +0x1E0 flat supply (P5 provenance)
    unsigned int q_1F0;  // +0x1F0 flat supply (P5 provenance)
    unsigned int q_200;  // +0x200 flat supply (P5 provenance)
    unsigned int q_60;  // +0x60 flat supply (P5 provenance)
    unsigned int q0084;  // 0x84 (offset-truth)
    unsigned char q0085;  // 0x85 (offset-truth)
    unsigned int q0088;  // 0x88 (offset-truth)

    int q010;  // X10 supply (member_lookup)
    int q028;  // X10 supply (member_lookup)
    void* q040;  // X10 supply (member_lookup)
    unsigned int q044;  // X10 supply (member_lookup)
    unsigned char q058;  // X10 supply (member_lookup)
    unsigned char q150;  // X10 supply (member_lookup)
    unsigned int q160;  // X10 supply (member_lookup)
    unsigned char q196;  // X10 supply (member_lookup)
    unsigned char q218;  // X10 supply (member_lookup)
    unsigned char q440;  // X10 supply (member_lookup)
    int q514;  // X10 supply (member_lookup)
    unsigned int u32_11B;  // X10 supply (member_lookup)
    unsigned int u32_14;  // X10 supply (member_lookup)
    unsigned int u32_158;  // X10 supply (member_lookup)
    unsigned int u32_15C;  // X10 supply (member_lookup)
    unsigned int u32_64;  // X10 supply (member_lookup)
    unsigned int u32_6E4;  // X10 supply (member_lookup)
    unsigned int u32_6E8;  // X10 supply (member_lookup)
    unsigned int u32_6EC;  // X10 supply (member_lookup)
    unsigned int u32_6F0;  // X10 supply (member_lookup)
    unsigned int u32_6F4;  // X10 supply (member_lookup)
    unsigned int u32_6F8;  // X10 supply (member_lookup)
    unsigned int u32_70;  // X10 supply (member_lookup)
    unsigned int u32_71C;  // X10 supply (member_lookup)
    unsigned int u32_720;  // X10 supply (member_lookup)
    unsigned int u32_724;  // X10 supply (member_lookup)
    unsigned int u32_730;  // X10 supply (member_lookup)
    unsigned int u32_734;  // X10 supply (member_lookup)
    unsigned int u32_738;  // X10 supply (member_lookup)
    unsigned int u32_73C;  // X10 supply (member_lookup)
    unsigned int u32_74;  // X10 supply (member_lookup)
    unsigned int u32_744;  // X10 supply (member_lookup)
    unsigned int u32_748;  // X10 supply (member_lookup)
    unsigned int u32_754;  // X10 supply (member_lookup)
    unsigned int u32_760;  // X10 supply (member_lookup)
    unsigned int u32_764;  // X10 supply (member_lookup)
    unsigned int u32_768;  // X10 supply (member_lookup)
    unsigned int u32_76C;  // X10 supply (member_lookup)
    unsigned int u32_770;  // X10 supply (member_lookup)
    unsigned int u32_774;  // X10 supply (member_lookup)
    unsigned int u32_778;  // X10 supply (member_lookup)
    unsigned int u32_78C;  // X10 supply (member_lookup)
    unsigned int u32_794;  // X10 supply (member_lookup)
    unsigned int u32_798;  // X10 supply (member_lookup)
    unsigned int u32_79C;  // X10 supply (member_lookup)
    unsigned int u32_7A8;  // X10 supply (member_lookup)
    unsigned int u32_7B4;  // X10 supply (member_lookup)
    unsigned int u32_7B8;  // X10 supply (member_lookup)
    unsigned int u32_7BC;  // X10 supply (member_lookup)
    unsigned int u32_8C;  // X10 supply (member_lookup)
    unsigned int u32_94;  // X10 supply (member_lookup)
    unsigned int u32_98;  // X10 supply (member_lookup)
    unsigned int u32_9C;  // X10 supply (member_lookup)
    unsigned int u32_EC;  // X10 supply (member_lookup)
    uint8_t u8_154;  // X10 supply (member_lookup)
    int u8_EA;  // X10 supply (member_lookup)
};

} // namespace gamemd
