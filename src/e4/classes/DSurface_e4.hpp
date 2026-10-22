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
#pragma pack(push, 1)  // X60: binary-packed layout
    unsigned int DSurface_field_0x0;  // 0x0
    AbstractClass* __pad_004;  // 0x4
    int u32_8;  // 0x8
    int u32_C;  // 0xC
    int q010;  // 0x10
    unsigned int u32_14;  // 0x14
    unsigned int u32_18;  // 0x18
    void* u32_1C;  // 0x1C
    unsigned int u32_20;  // 0x20
    int q024;  // 0x24
    int q028;  // 0x28
    char __pad_2C[20];  // 0x2C
    void* q040;  // 0x40
    unsigned int q044;  // 0x44
    char __pad_48[16];  // 0x48
    unsigned char q058;  // 0x58
    char __pad_59[7];  // 0x59
    unsigned int q_60;  // 0x60
    unsigned int u32_64;  // 0x64
    char __pad_68[8];  // 0x68
    unsigned int u32_70;  // 0x70
    unsigned int u32_74;  // 0x74
    char __pad_78[12];  // 0x78
    unsigned int u32_84;  // 0x84
    unsigned int u32_88;  // 0x88
    unsigned int u32_8C;  // 0x8C
    char __pad_90[4];  // 0x90
    unsigned int u32_94;  // 0x94
    unsigned int u32_98;  // 0x98
    unsigned int u32_9C;  // 0x9C
    char __pad_A0[74];  // 0xA0
    unsigned char u8_EA;  // 0xEA
    char __pad_EB[1];  // 0xEB
    unsigned int u32_EC;  // 0xEC
    char __pad_F0[28];  // 0xF0
    int q10C;  // 0x10C
    char __pad_110[11];  // 0x110
    unsigned int u32_11B;  // 0x11B
    char __pad_11F[49];  // 0x11F
    unsigned char q150;  // 0x150
    char __pad_151[3];  // 0x151
    uint8_t u8_154;  // 0x154
    char __pad_155[3];  // 0x155
    unsigned int u32_158;  // 0x158
    unsigned int u32_15C;  // 0x15C
    unsigned int q160;  // 0x160
    char __pad_164[32];  // 0x164
    int q184;  // 0x184
    char __pad_188[14];  // 0x188
    unsigned char q196;  // 0x196
    char __pad_197[73];  // 0x197
    unsigned int q_1E0;  // 0x1E0
    char __pad_1E4[12];  // 0x1E4
    unsigned int q_1F0;  // 0x1F0
    char __pad_1F4[12];  // 0x1F4
    unsigned int q_200;  // 0x200
    char __pad_204[20];  // 0x204
    unsigned char q218;  // 0x218
    char __pad_219[551];  // 0x219
    unsigned char q440;  // 0x440
    char __pad_441[211];  // 0x441
    int q514;  // 0x514
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    AbstractClass * Construct(int aP1, int aP2, char aP3, char a5, void *a5_1 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0, void *a9 = 0);
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
    int Flip();
    static int Flip2();
    int GetBytesPerPixel();
    int LockAndPrepareRect();
    int RestoreIfLost(void *a1 = 0);
    long long ConstructFromHandle();
    unsigned int * CreateBackBuffer(int a2, void *a2_1 = 0);
    AbstractClass * * CreatePrimary(void *a1 = 0);
    void * loc_4C1AC0(unsigned char a1);
    static void BlitStretch(int a1, int a2, int a3);
    void* DrawGradientLine(int a2, unsigned int * a3, unsigned int * a4, int a5, int a6, float * a7, float * a8);
    void* DrawLineZBufColored(int a2, unsigned int * a3, unsigned int * a4, unsigned char * a5, float a6, int a7, int a8);
    void* FillRectEx(int a2, int a3, int a4);
    static void * Lock(DSurface * aP1, int a2, int a3);
    static int FillRectWithColor(int * a0, ObjectClass * aP1, int16_t a3, uint8_t a4);
#pragma pack(pop)
};

} // namespace gamemd
