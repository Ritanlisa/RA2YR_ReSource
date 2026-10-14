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
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    int BuildIndexTable();  // 0x748220
    AbstractClass * RenderFrame(void *a1 = 0);  // 0x754510
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

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    unsigned char q058;  // X10 supply (member_lookup)
    int q0CC;  // X10 supply (member_lookup)
    unsigned char q0D0[96];  /* char[96] */  // X10 supply (member_lookup)
    ObjectClass * q100;  // X10 supply (member_lookup)
    unsigned int q104;  // X10 supply (member_lookup)
    AbstractClass * q108;  // X10 supply (member_lookup)
    unsigned int q114;  // X10 supply (member_lookup)
    unsigned int q118;  // X10 supply (member_lookup)
    unsigned int q120;  // X10 supply (member_lookup)
    unsigned int q124;  // X10 supply (member_lookup)
    unsigned int q128;  // X10 supply (member_lookup)
    int q130;  // X10 supply (member_lookup)
    double q138;  // X10 supply (member_lookup)
    unsigned int q144;  // X10 supply (member_lookup)
    unsigned int q150;  // X10 supply (member_lookup)
    unsigned int q180;  // X10 supply (member_lookup)
    unsigned char q1C0;  // X10 supply (member_lookup)
    unsigned int q208;  // X10 supply (member_lookup)
    unsigned int q220;  // X10 supply (member_lookup)
    unsigned int q224;  // X10 supply (member_lookup)
    unsigned int q228;  // X10 supply (member_lookup)
    unsigned int u32_10;  // X10 supply (member_lookup)
    unsigned int u32_10C;  // X10 supply (member_lookup)
    unsigned int u32_110;  // X10 supply (member_lookup)
    unsigned int u32_11C;  // X10 supply (member_lookup)
    unsigned int u32_12C;  // X10 supply (member_lookup)
    unsigned int u32_14;  // X10 supply (member_lookup)
    unsigned int u32_140;  // X10 supply (member_lookup)
    unsigned int u32_148;  // X10 supply (member_lookup)
    unsigned int u32_14C;  // X10 supply (member_lookup)
    unsigned int u32_1A8;  // X10 supply (member_lookup)
    unsigned int u32_1AC;  // X10 supply (member_lookup)
    unsigned int u32_1B0;  // X10 supply (member_lookup)
    unsigned int u32_1B4;  // X10 supply (member_lookup)
    unsigned int u32_1B8;  // X10 supply (member_lookup)
    unsigned int u32_1BC;  // X10 supply (member_lookup)
    unsigned int u32_1C4;  // X10 supply (member_lookup)
    unsigned int u32_1C8;  // X10 supply (member_lookup)
    unsigned int u32_1CC;  // X10 supply (member_lookup)
    unsigned int u32_1D4;  // X10 supply (member_lookup)
    unsigned int u32_1D8;  // X10 supply (member_lookup)
    unsigned int u32_1F0;  // X10 supply (member_lookup)
    unsigned int u32_20C;  // X10 supply (member_lookup)
    unsigned int u32_210;  // X10 supply (member_lookup)
    unsigned int u32_214;  // X10 supply (member_lookup)
    unsigned int u32_218;  // X10 supply (member_lookup)
    unsigned int u32_21C;  // X10 supply (member_lookup)
    int u32_22C;  // X10 supply (member_lookup)
    unsigned int u32_230;  // X10 supply (member_lookup)
    unsigned int u32_234;  // X10 supply (member_lookup)
    unsigned int u32_238;  // X10 supply (member_lookup)
    int u32_28;  // X10 supply (member_lookup)
    int u32_2C;  // X10 supply (member_lookup)
    unsigned char u32_30[108];  /* char[108] */  // X10 supply (member_lookup)
    unsigned int u32_4;  // X10 supply (member_lookup)
    unsigned int u32_8;  // X10 supply (member_lookup)
    unsigned int u32_B0;  // X10 supply (member_lookup)
    unsigned int u32_B4;  // X10 supply (member_lookup)
    unsigned int u32_B8;  // X10 supply (member_lookup)
    unsigned int u32_BC;  // X10 supply (member_lookup)
    unsigned int u32_C;  // X10 supply (member_lookup)
    int u32_C0;  // X10 supply (member_lookup)
    unsigned int u32_C4;  // X10 supply (member_lookup)
    unsigned int u32_C8;  // X10 supply (member_lookup)
    unsigned int u32_D4;  // X10 supply (member_lookup)
    unsigned int u32_D8;  // X10 supply (member_lookup)
    unsigned int u32_DC;  // X10 supply (member_lookup)
    unsigned int u32_E0;  // X10 supply (member_lookup)
    unsigned int u32_E4;  // X10 supply (member_lookup)
    unsigned int u32_E8;  // X10 supply (member_lookup)
    unsigned int u32_EC;  // X10 supply (member_lookup)
    unsigned int u32_F0;  // X10 supply (member_lookup)
    unsigned int u32_F4;  // X10 supply (member_lookup)
    unsigned int u32_F8;  // X10 supply (member_lookup)
    unsigned int u32_FC;  // X10 supply (member_lookup)
    double u64_12D;  // X10 supply (member_lookup)
};
} // namespace gamemd
