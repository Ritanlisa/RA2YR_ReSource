// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct Coord;  // fix_fwd_type_supply
struct HouseClass;  // fix_fwd_type_supply
struct AbstractTypeClass;  // fix_fwd_type_supply
struct ParticleSystemClass;  // fix_fwd_type_supply
struct BuildingTypeClass;  // fix_fwd_type_supply
struct Tactical;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply

struct DisplayClass {
    void * ptr_0;  // 0x0
    AbstractClass * ptr_4;  // 0x4
    unsigned int q008;  // 0x8
    unsigned char u32_C;  // 0xC
    bool IsAllocated;  // 0xD
    char __pad_E[2];  // 0xE
    int Count;  // 0x10
    int CapacityIncrement;  // 0x14
    unsigned char __pad_018;  // 0x18
    char __pad_19[11];  // 0x19
    unsigned int outBuffer;  // 0x24
    unsigned char __pad_028;  // 0x28
    char __pad_29[7];  // 0x29
    int q030;  // 0x30
    unsigned int MovementZones;  // 0x34
    unsigned char __pad_038;  // 0x38
    char __pad_39[47];  // 0x39
    unsigned int somecount_4C;  // 0x68
    unsigned int ZoneConnections;  // 0x6C
    unsigned char __pad_070;  // 0x70
    char __pad_71[15];  // 0x71
    DynamicVector * ptr_50;  // 0x80
    unsigned int LevelAndPassability;  // 0x84
    unsigned int ValidMapCellCount;  // 0x88
    unsigned char __pad_08C;  // 0x8C
    char __pad_8D[71];  // 0x8D
    unsigned int CellStructs1;  // 0xD4
    unsigned char __pad_0D8;  // 0xD8
    char __pad_D9[19];  // 0xD9
    unsigned int MapRect;  // 0xEC
    unsigned char __pad_0F0;  // 0xF0
    char __pad_F1[3];  // 0xF1
    unsigned int q0F4;  // 0xF4
    unsigned int q0F8;  // 0xF8
    unsigned int VisibleRect;  // 0xFC
    unsigned char __pad_100;  // 0x100
    char __pad_101[15];  // 0x101
    unsigned int CellIterator_NextY;  // 0x110
    unsigned int CellIterator_CurrentY;  // 0x114
    unsigned int CellIterator_NextCell;  // 0x118
    unsigned int ZoneIterator_X;  // 0x11C
    unsigned int ZoneIterator_Y;  // 0x120
    unsigned char __pad_124;  // 0x124
    char __pad_125[7];  // 0x125
    int q12C;  // 0x12C
    int q130;  // 0x130
    int q134;  // 0x134
    unsigned int MaxLevel;  // 0x138
    unsigned int MaxWidth;  // 0x13C
    unsigned int __pad_140;  // 0x140
    char __pad_144[4];  // 0x144
    unsigned int Crates;  // 0x148
    unsigned char __pad_14C;  // 0x14C
    char __pad_14D[191];  // 0x14D
    int q20C;  // 0x20C
    char __pad_210[130];  // 0x210
    unsigned char MapCoordBounds;  // 0x292
    char __pad_293[3];  // 0x293
    unsigned char __pad_296;  // 0x296
    char __pad_297[387];  // 0x297
    char DisplayClass_field_0x41A[4];  // 0x41A
    char __pad_41E[960];  // 0x41E
    char __pad_7DE[1414];  // 0x7DE
    unsigned int u32_D64;  // 0xD64
    unsigned int u32_D68;  // 0xD68
    char __pad_D6C[8];  // 0xD6C
    int u32_D74;  // 0xD74
    int u32_D78;  // 0xD78
    char __pad_D7C[1000];  // 0xD7C
    unsigned int q1164;  // 0x1164
    char __pad_1168[4];  // 0x1168
    unsigned int q116C;  // 0x116C
    char __pad_1170[8];  // 0x1170
    unsigned short q1178;  // 0x1178
    unsigned short u16_117A;  // 0x117A
    unsigned int q117C;  // 0x117C
    char __pad_1180[1];  // 0x1180
    unsigned char q1181;  // 0x1181
    char __pad_1182[10];  // 0x1182
    unsigned int u32_118C;  // 0x118C
    unsigned int u32_1190;  // 0x1190
    int q1194;  // 0x1194
    char __pad_1198[4];  // 0x1198
    unsigned int u32_119C;  // 0x119C
    unsigned int u32_11A0;  // 0x11A0
    unsigned char q11A4;  // 0x11A4
    char __pad_11A5[3];  // 0x11A5
    int q11A8;  // 0x11A8
    unsigned char q11AC[4];  // 0x11AC
    unsigned char q11B0;  // 0x11B0
    unsigned char u8_11B1;  // 0x11B1
    unsigned char u32_11B2;  // 0x11B2
    unsigned char q11B3;  // 0x11B3
    char __pad_11B4[4];  // 0x11B4
    unsigned int q11B8;  // 0x11B8
    unsigned int u32_11BC;  // 0x11BC
    char __pad_11C0[12];  // 0x11C0
    unsigned char q11CC;  // 0x11CC
    unsigned char q11CD;  // 0x11CD
    unsigned char q11CE;  // 0x11CE
    unsigned char q11CF;  // 0x11CF
    int q11D0;  // 0x11D0
    int q11D4;  // 0x11D4
    int q11D8;  // 0x11D8
    int q11DC;  // 0x11DC
    int q11E0;  // 0x11E0
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    DisplayClass * Read(char * Block, char a2, void *a3 = 0);
    HWND Render(void *a1, void *a2, void *a3 = 0, void *a4 = 0);
    char UpdateCellPassability(int16_t *a1, int aP2);  // G57w10-S raw 0x004A9890 IUnknown 占位清除
    char ProcessCellReveal(int16_t *aP1, int aP2);  // G57w10-S raw 0x004A9DD0 IUnknown 占位清除
    int SetCoordVisible(DisplayClass *aP0, unsigned int *aP1, char a3);  // G57w10-S raw 0x004A9840 IUnknown 占位清除
    char ddtor(void *a1);
    int * processDisplayMode(char a2);
    static int AdvanceFrameCounter(void *a1 = 0);
    int ExitMode();
    int GetCoordDelta(int aP1);
    int GetSurface(unsigned int * a1);
    int InitViewBounds(unsigned int * a2);
    int InsertPriorityText(int a2);
    int LoadTypeData(void *a1 = 0);
    int ProcessTacticalMouseInput(char a2, int a3, int a4);
    int ReadFromBuffer(void * a1, signed int Size);
    int RenderStatusText(IUnknown * aP1, char a3);
    bool RevealFogCell(int16_t *a1, int aP2);  // G57w10-S raw 0x004AA050 IUnknown 占位清除
    int ScrollTacticalView(int aP1, int aP2);  // G57w10-S raw 0x006D8530 IUnknown 占位清除
    int SetSize();
    int SetSurface(unsigned int * a1);
    int UpdateDisplayTimer(void *a1 = 0);
    int checkScreenBounds(int a2);
    unsigned int * loc_4AEB50(MouseClass * aP1);
    unsigned int * updateRenderState(char a2);
    void * Draw(int a2, void *a2_1 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0);
    void Update(PowerClass * aP1, int a3, void *a3_2, void *a4);
};

} // namespace gamemd
