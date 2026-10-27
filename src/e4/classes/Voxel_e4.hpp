// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ObjectClass;  // fix_fwd_type_supply
struct AbstractClass;  // fix_fwd_type_supply
#ifndef GAMEMD_TREE_UNIVERSE
struct CellStruct;  // fix_fwd_type_supply
#endif // GAMEMD_TREE_UNIVERSE
struct DynamicVectorClass_flat;  // fix_fwd_type_supply
struct Voxel {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    unsigned int u32_4;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned char u32_C;  // 0xC
    unsigned char u8_D;  // 0xD
    char __pad_E[2];  // 0xE
    unsigned int u32_10;  // 0x10
    unsigned int u32_14;  // 0x14
    int u32_18;  // 0x18
    int u32_1C;  // 0x1C
    char __pad_20[4];  // 0x20
    int q024;  // 0x24
    int u32_28;  // 0x28
    int u32_2C;  // 0x2C
    unsigned char u32_30[108];  // 0x30
    int q09C;  // 0x9C
    char __pad_A0[12];  // 0xA0
    unsigned int u32_AC;  // 0xAC
    unsigned int u32_B0;  // 0xB0
    unsigned int u32_B4;  // 0xB4
    unsigned int u32_B8;  // 0xB8
    unsigned int u32_BC;  // 0xBC
    int u32_C0;  // 0xC0
    unsigned int u32_C4;  // 0xC4
    unsigned int u32_C8;  // 0xC8
    int q0CC;  // 0xCC
    char q0D0[4];  // 0xD0
    unsigned int u32_D4;  // 0xD4
    unsigned int u32_D8;  // 0xD8
    unsigned int u32_DC;  // 0xDC
    unsigned int u32_E0;  // 0xE0
    unsigned int u32_E4;  // 0xE4
    unsigned int u32_E8;  // 0xE8
    unsigned int u32_EC;  // 0xEC
    unsigned int u32_F0;  // 0xF0
    unsigned int u32_F4;  // 0xF4
    unsigned int u32_F8;  // 0xF8
    unsigned int u32_FC;  // 0xFC
    unsigned int q100;  // 0x100
    unsigned int q104;  // 0x104
    unsigned int q108;  // 0x108
    unsigned int u32_10C;  // 0x10C
    unsigned int u32_110;  // 0x110
    unsigned int q114;  // 0x114
    unsigned int q118;  // 0x118
    unsigned int u32_11C;  // 0x11C
    unsigned int q120;  // 0x120
    unsigned int q124;  // 0x124
    unsigned int q128;  // 0x128
    unsigned char u32_12C;  // 0x12C
    unsigned char u64_12D;  // 0x12D
    char __pad_12E[2];  // 0x12E
    int q130;  // 0x130
    char q134[4];  // 0x134
    unsigned int q138;  // 0x138
    unsigned int u32_13C;  // 0x13C
    unsigned int u32_140;  // 0x140
    unsigned int q144;  // 0x144
    unsigned int u32_148;  // 0x148
    unsigned int u32_14C;  // 0x14C
    unsigned int q150;  // 0x150
    char __pad_154[44];  // 0x154
    unsigned int q180;  // 0x180
    char __pad_184[28];  // 0x184
    unsigned int u32_1A0;  // 0x1A0
    unsigned int u32_1A4;  // 0x1A4
    unsigned int u32_1A8;  // 0x1A8
    unsigned int u32_1AC;  // 0x1AC
    unsigned int u32_1B0;  // 0x1B0
    unsigned int u32_1B4;  // 0x1B4
    unsigned int u32_1B8;  // 0x1B8
    unsigned int u32_1BC;  // 0x1BC
    unsigned char q1C0;  // 0x1C0
    char __pad_1C1[3];  // 0x1C1
    unsigned int u32_1C4;  // 0x1C4
    unsigned int u32_1C8;  // 0x1C8
    unsigned int u32_1CC;  // 0x1CC
    char q1D0[4];  // 0x1D0
    unsigned int u32_1D4;  // 0x1D4
    unsigned int u32_1D8;  // 0x1D8
    char __pad_1DC[20];  // 0x1DC
    unsigned int u32_1F0;  // 0x1F0
    char __pad_1F4[20];  // 0x1F4
    unsigned int q208;  // 0x208
    unsigned int u32_20C;  // 0x20C
    unsigned int u32_210;  // 0x210
    unsigned int u32_214;  // 0x214
    unsigned int u32_218;  // 0x218
    unsigned int u32_21C;  // 0x21C
    unsigned int q220;  // 0x220
    unsigned int q224;  // 0x224
    unsigned int q228;  // 0x228
    int u32_22C;  // 0x22C
    unsigned int u32_230;  // 0x230
    unsigned int u32_234;  // 0x234
    unsigned int u32_238;  // 0x238
    char __pad_23C[156];  // 0x23C
    int q2D8;  // 0x2D8
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int BuildIndexTable();  // 0x748220
    float * RenderFrame();  // 0x754510
    static int Projection_Setup();  // 0x754CB0
    AbstractClass * *  SortDepth(int a2, int a3);  // 0x755DB0
    int ProcessColor(unsigned int *a2, float *a3);  // 0x756590
    void* DrawHelper(IUnknown * aP1);  // G57w10-S raw 0x0075C240 IUnknown 占位清除
    int BlendShadowColor(int a2, WaveClass * aP2, int arg8, unsigned short * a4);  // 0x75EDF0
    int loadSectionData();  // 0x75F140
    CellStruct * * renderSection(ObjectClass * aP1);  // 0x75F4C0
    void ShadowCalc(WaveClass * aP1, int * a2);  // 0x75FA90
    int BlendColor(int a2, int aP2, int arg8, unsigned short *a4);  // 0x760190
    AbstractClass * * FaceDraw(unsigned int * a1, WaveClass * aP2);  // 0x7609E0
    void* FaceBlit();  // 0x7610F0
    int  SectionProject(int * a2, int a3);  // 0x761640
    AbstractClass * * LightRender(AbstractClass ** a2, int a3);  // 0x762070
    DynamicVectorClass_flat * * TransformMatrix();  // 0x762AF0
    int  freeSectionMemory(unsigned int * a2);  // 0x763330
    int  FacePixelBuffer(int * a1);  // 0x7DF9C0
    int  FacePixelBufferEx(int a1);  // 0x7DFAE0
    int  FacePixelBuffer3(int * a1);  // 0x7DFC00
    static int  SetProjectionAngle(float a1);  // 0x754C00
    int InitDistanceTable();  // 0x75F020
};
} // namespace gamemd
