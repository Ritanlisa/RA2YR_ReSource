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
    void* q004;  // 0x4
    void* q008;  // 0x8
    void* q00C;  // 0xC
    void* q010;  // 0x10
    void* q014;  // 0x14
    void* q018;  // 0x18
    unsigned int u32_1C;  // 0x1C
    void* q020;  // 0x20
    void* q024;  // 0x24
    void* q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned int u32_34;  // 0x34
    unsigned int u32_38;  // 0x38
    unsigned int u32_3C;  // 0x3C
    void* q040;  // 0x40
    unsigned int q044;  // 0x44
    unsigned int q048;  // 0x48
    unsigned char q04C;  // 0x4C
    unsigned int q050;  // 0x50
    unsigned char q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned int u32_5C;  // 0x5C
    unsigned int q060;  // 0x60
    unsigned int q064;  // 0x64
    unsigned char q06C;  // 0x6C
    unsigned int u32_70;  // 0x70
    unsigned int u32_78;  // 0x78
    unsigned char q07C;  // 0x7C
    unsigned int u32_80;  // 0x80
    unsigned int u32_88;  // 0x88
    unsigned int u32_94;  // 0x94
    unsigned char q0A0;  // 0xA0
    unsigned char q0AC;  // 0xAC
    unsigned char q0B0;  // 0xB0
    unsigned char q0B4;  // 0xB4
    unsigned char q0C4;  // 0xC4
    unsigned char q0D0;  // 0xD0
    unsigned char q0D8;  // 0xD8
    unsigned char q0E0;  // 0xE0
    unsigned char q0E4;  // 0xE4
    void* q10C;  // 0x10C
    unsigned int q114;  // 0x114
    unsigned int q128;  // 0x128
    unsigned char q12C;  // 0x12C
    unsigned int q130;  // 0x130
    unsigned char q138;  // 0x138
    unsigned char q13C;  // 0x13C
    unsigned int q140;  // 0x140
    unsigned int q144;  // 0x144
    unsigned char q150;  // 0x150
    unsigned int q164;  // 0x164
    unsigned int q168;  // 0x168
    unsigned char q1AC;  // 0x1AC
    unsigned char q1B0;  // 0x1B0
    unsigned char q1EC;  // 0x1EC
    unsigned char q20C;  // 0x20C
    unsigned char q258;  // 0x258
    unsigned char q264;  // 0x264
    unsigned char q26C;  // 0x26C
    unsigned char q280;  // 0x280
    unsigned int u32_2C8;  // 0x2C8
    unsigned int u32_2F4;  // 0x2F4
    unsigned char q300;  // 0x300
    unsigned int q308;  // 0x308
    unsigned int q324;  // 0x324
    unsigned char q33C;  // 0x33C
    unsigned char q340;  // 0x340
    unsigned int DSurface_field_0x0;
    unsigned int DSurface_field_0x10;
    unsigned int DSurface_field_0x18;
    unsigned int *DSurface_field_0x1C;
    unsigned int DSurface_field_0x20;
    unsigned int DSurface_field_0xC;
    unsigned int field_0;
    unsigned int Unlock;
    unsigned char DSurface_field_0x4;  // 0x4
    unsigned char DSurface_field_0x8;  // 0x8
    unsigned char DSurface_field_0x14;  // 0x14
// --- flat members (END) ---
    AbstractClass * Construct(int aP1, int aP2, char aP3, char a5);
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
    AbstractClass * * Destroy();
    int DrawDashedLineStipple(int * a2, int * a3, int16_t a4, int a5, int a6, char a7);
    int DrawLineZBuf(int a1, int a2, int a3, unsigned int * a4, unsigned int * a5, unsigned short a6, int a7, int a8, char a9);
    int DrawMarker(AbstractClass * aP1, ObjectClass * aP2);
    static int FillRectWithColor(int *a1, int a2, short a3, unsigned char a4);
    int Flip();
    static int Flip2();
    int GetBytesPerPixel();
    int LockAndPrepareRect();
    int RestoreIfLost();
    long long ConstructFromHandle();
    unsigned int * CreateBackBuffer(int a2);
    AbstractClass * * CreatePrimary();
    void * loc_4C1AC0(std::codecvt_base *a1);
    static void BlitStretch(int a1, int a2, int a3);
    void* DrawGradientLine(int a2, unsigned int * a3, unsigned int * a4, int a5, int a6, float * a7, float * a8);
    void* DrawLineZBufColored(int a2, unsigned int * a3, unsigned int * a4, unsigned char * a5, float a6, int a7, int a8);
    void* FillRectEx(int a2, int a3, int a4);
    static void * Lock(DSurface * aP1, int a2, int a3);  // G57w10-S raw 0x004BAD80 (was C2597 interim stub)
    static int FillRectWithColor(int * a0, ObjectClass * aP1, int16_t a3, uint8_t a4);
    unsigned int q_1E0;  // +0x1E0 flat supply (P5 provenance)
    unsigned int q_1F0;  // +0x1F0 flat supply (P5 provenance)
    unsigned int q_200;  // +0x200 flat supply (P5 provenance)
    unsigned int q_60;  // +0x60 flat supply (P5 provenance)
};

} // namespace gamemd
