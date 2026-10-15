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
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    AbstractClass * ptr_4;  // 0x4
    bool IsAllocated;  // 0xD
    int Count;  // 0x10
    int CapacityIncrement;  // 0x14
    unsigned int outBuffer;  // 0x24
    unsigned int MovementZones;  // 0x34
    unsigned int somecount_4C;  // 0x68
    unsigned int ZoneConnections;  // 0x6C
    DynamicVector * ptr_50;  // 0x80
    unsigned int LevelAndPassability;  // 0x84
    unsigned int ValidMapCellCount;  // 0x88
    unsigned int CellStructs1;  // 0xD4
    unsigned int MapRect;  // 0xEC
    unsigned int VisibleRect;  // 0xFC
    unsigned int CellIterator_NextY;  // 0x110
    unsigned int CellIterator_CurrentY;  // 0x114
    unsigned int CellIterator_NextCell;  // 0x118
    unsigned int ZoneIterator_X;  // 0x11C
    unsigned int ZoneIterator_Y;  // 0x120
    unsigned int MaxLevel;  // 0x138
    unsigned int MaxWidth;  // 0x13C
    unsigned int Crates;  // 0x148
    unsigned int MapCoordBounds;  // 0x292
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
    char __pad_10[32];  // 0x10 (ml)
    char __pad_11B4[28];  // 0x11B4 (ml)
    char __pad_41E[960];  // 0x41E (ml)
    unsigned int q008;  // 0x8 (offset-truth)

    unsigned char __pad_008;  // X10 supply (csp_canon_members)
    unsigned char __pad_018;  // X10 supply (csp_canon_members)
    unsigned char __pad_140;  // X10 supply (csp_canon_members)
    unsigned int q117C;  // X10 supply (member_lookup)
    unsigned char q11A4;  // X10 supply (member_lookup)
    int q11A8;  // X10 supply (member_lookup)
    unsigned char q11AC[4];  /* char[4] */  // X10 supply (member_lookup)
    int q11B0;  // X10 supply (member_lookup)
    unsigned char q11B8;  // X10 supply (member_lookup)
    unsigned int q11CF;  // X10 supply (member_lookup)
    int q11D0;  // X10 supply (member_lookup)
    int q11D4;  // X10 supply (member_lookup)
    int q11D8;  // X10 supply (member_lookup)
    int q11DC;  // X10 supply (member_lookup)
    int q11E0;  // X10 supply (member_lookup)
    int q12C;  // X10 supply (member_lookup)
    int q130;  // X10 supply (member_lookup)
    int q134;  // X10 supply (member_lookup)
    unsigned int u32_119C;  // X10 supply (member_lookup)
    unsigned int u32_11A0;  // X10 supply (member_lookup)
    unsigned int u32_C;  // X10 supply (member_lookup)
    unsigned int u32_D64;  // X10 supply (member_lookup)
    unsigned int u32_D68;  // X10 supply (member_lookup)
    int u32_D74;  // X10 supply (member_lookup)
    int u32_D78;  // X10 supply (member_lookup)
};

} // namespace gamemd
