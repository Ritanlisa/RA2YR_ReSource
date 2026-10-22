// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
class DrawTerrain;  // G42.36 fwd supply
struct CellClass;  // fix_fwd_type_supply

struct TacticalClass {
#pragma pack(push, 1)  // X60: binary-packed layout
    unsigned char vfptr;  // 0x0
    unsigned char q001;  // 0x1
    unsigned char q002;  // 0x2
    unsigned char q003;  // 0x3
    unsigned char vfptr1;  // 0x4
    char __pad_5[3];  // 0x5
    int vfptr2;  // 0x8
    unsigned char vfptr3;  // 0xC
    unsigned char q00D;  // 0xD
    char __pad_E[2];  // 0xE
    int uniqueId;  // 0x10
    int abstractFlags;  // 0x14
    unsigned char nextArrayIndex;  // 0x18
    unsigned char q019;  // 0x19
    char __pad_1A[2];  // 0x1A
    int referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    unsigned short field24;  // 0x24
    unsigned short u16_26;  // 0x26
    int field28;  // 0x28
    int TacticalClass_field_2C;  // 0x2C
    int field30;  // 0x30
    int field34;  // 0x34
    int field38;  // 0x38
    int TacticalClass_field_3C;  // 0x3C
    int field40;  // 0x40
    int field44;  // 0x44
    int field48;  // 0x48
    unsigned int TacticalClass_field_4C;  // 0x4C
    unsigned int field50;  // 0x50
    unsigned int field54;  // 0x54
    unsigned int field58;  // 0x58
    unsigned int TacticalClass_field_5C;  // 0x5C
    unsigned int field60;  // 0x60
    unsigned int field64;  // 0x64
    unsigned int field68;  // 0x68
    int u32_6C;  // 0x6C
    unsigned int field70;  // 0x70
    unsigned int field74;  // 0x74
    unsigned int field78;  // 0x78
    unsigned int TacticalClass_field_7C;  // 0x7C
    unsigned char field80;  // 0x80
    char __pad_81[3];  // 0x81
    unsigned int field84;  // 0x84
    unsigned int field88;  // 0x88
    unsigned int TacticalClass_field_8C;  // 0x8C
    unsigned int field90;  // 0x90
    unsigned int field94;  // 0x94
    unsigned int field98;  // 0x98
    unsigned int TacticalClass_field_9C;  // 0x9C
    unsigned int TacticalClass_field_A0;  // 0xA0
    unsigned int TacticalClass_field_A4;  // 0xA4
    unsigned int TacticalClass_field_A8;  // 0xA8
    char TacticalClass_field_AC[1];  // 0xAC
    bool TacticalClass_field_AD;  // 0xAD
    unsigned char __pad_0AE;  // 0xAE
    char __pad_AF[1];  // 0xAF
    int visibleArea[4];  // 0xB0
    double zoomInFactor;  // 0xC0
    int TacticalClass_field_C8;  // 0xC8
    int TacticalClass_field_CC;  // 0xCC
    int TacticalClass_field_D0;  // 0xD0
    int TacticalClass_field_D4;  // 0xD4
    int TacticalClass_field_D8;  // 0xD8
    int TacticalClass_field_DC;  // 0xDC
    int visibleCellCount;  // 0xE0
    char visibleCells[3200];  // 0xE4
    unsigned char TacticalClass_field_D64;  // 0xD64
    char __pad_D65[3];  // 0xD65
    unsigned char TacticalClass_field_D68;  // 0xD68
    char __pad_D69[11];  // 0xD69
    unsigned char TacticalClass_field_D74;  // 0xD74
    char __pad_D75[3];  // 0xD75
    unsigned char TacticalClass_field_D78;  // 0xD78
    char __pad_D79[4];  // 0xD79
    char redrawing;  // 0xD7D
    char __pad_D7E[2];  // 0xD7E
    unsigned int TacticalClass_field_D80;  // 0xD80
    unsigned int TacticalClass_field_D84;  // 0xD84
    unsigned int TacticalClass_field_D88;  // 0xD88
    unsigned int TacticalClass_field_D8C;  // 0xD8C
    int TacticalClass_field_D90;  // 0xD90
    int TacticalClass_field_D94;  // 0xD94
    int TacticalClass_field_D98;  // 0xD98
    int TacticalClass_field_D9C;  // 0xD9C
    unsigned char mouseFrameIndex;  // 0xDA0
    char __pad_DA1[3];  // 0xDA1
    unsigned int startTime;  // 0xDA4
    unsigned int TacticalClass_field_DA8;  // 0xDA8
    unsigned char TacticalClass_field_DAC;  // 0xDAC
    char __pad_DAD[3];  // 0xDAD
    int floats[12];  // 0xDB0
    unsigned char __pad_DE0;  // 0xDE0
    char __pad_DE1[3];  // 0xDE1
    unsigned int TacticalClass_field_DE4;  // 0xDE4
    char __pad_DE8[12];  // 0xDE8
    unsigned int TacticalClass_field_DF4;  // 0xDF4
    double TacticalClass_field_DF8;  // 0xDF8
    unsigned int TacticalClass_field_E00;  // 0xE00
    unsigned int TacticalClass_field_E04;  // 0xE04
    double TacticalClass_field_E08;  // 0xE08
    unsigned int TacticalClass_field_E10;  // 0xE10
    unsigned int TacticalClass_field_E14;  // 0xE14
    unsigned int qE18;  // 0xE18
    char __pad_E1C[892];  // 0xE1C
    unsigned int q1198;  // 0x1198
    char __pad_119C[8];  // 0x119C
    unsigned char q11A4;  // 0x11A4
    char __pad_11A5[3];  // 0x11A5
    unsigned int u32_11A8;  // 0x11A8
    unsigned int q11AC;  // 0x11AC
    unsigned char q11B0;  // 0x11B0
    unsigned char u32_11B1;  // 0x11B1
    unsigned char u32_11B2;  // 0x11B2
    unsigned char u32_11B3;  // 0x11B3
    char __pad_11B4[4];  // 0x11B4
    unsigned char q11B8;  // 0x11B8
    char __pad_11B9[3];  // 0x11B9
    unsigned char u32_11BC;  // 0x11BC
    char __pad_11BD[3];  // 0x11BD
    unsigned int u32_11C0;  // 0x11C0
    unsigned int u32_11C4;  // 0x11C4
    unsigned int u32_11C8;  // 0x11C8
    unsigned char q11CC;  // 0x11CC
    unsigned char q11CD;  // 0x11CD
    unsigned char q11CE;  // 0x11CE
    char __pad_11CF[77];  // 0x11CF
    unsigned int q121C;  // 0x121C
    unsigned int q1220;  // 0x1220
    char __pad_1224[24];  // 0x1224
    unsigned int q123C;  // 0x123C
    char __pad_1240[24];  // 0x1240
    unsigned int q1258;  // 0x1258
    char __pad_125C[24];  // 0x125C
    unsigned int q1274;  // 0x1274
    char __pad_1278[528];  // 0x1278
    unsigned int q1488;  // 0x1488
    char __pad_148C[4];  // 0x148C
    unsigned int q1490;  // 0x1490
    char __pad_1494[8];  // 0x1494
    unsigned int q149C;  // 0x149C
    unsigned int q14A0;  // 0x14A0
    char __pad_14A4[20];  // 0x14A4
    unsigned int u32_14B8;  // 0x14B8
    char __pad_14BC[4];  // 0x14BC
    unsigned char q14C0;  // 0x14C0
    char __pad_14C1[19];  // 0x14C1
    unsigned int u32_14D4;  // 0x14D4
    char __pad_14D8[28];  // 0x14D8
    unsigned int u32_14F4;  // 0x14F4
    char __pad_14F8[624];  // 0x14F8
    unsigned char u32_1768;  // 0x1768
    char __pad_1769[8439];  // 0x1769
    unsigned char q3860;  // 0x3860
    char __pad_3861[7416];  // 0x3861
    unsigned char u8_5559;  // 0x5559
    unsigned char u32_555A;  // 0x555A
    char __pad_555B[1];  // 0x555B
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static int SetObserverMode(void *aP1, int a2);
    static int SetPosition(void *aP1, void *a2, void *aP3);
    static int updateVisibility(TacticalClass *pThis);
    static int UpdateScrollMaxBounds(TacticalClass *pThis, void *a2);
    static int InitScrollBounds(TacticalClass *pThis, unsigned int *a2);
    char StubReturnFalse();
    char StubReturnFalse11();
    char StubReturnFalse7();
    int CalcAllDrawPositions(AbstractClass * aP1, BuildingTypeClass * aP2, int * a3, char a5);
    int CheckUnitOverlap(int a2, int a3, AbstractClass * aP3, int a5);
    int FindBuilding(int a1, IUnknown * aP1, IUnknown * aP2);  // G57w10-S raw 0x006D9920 IUnknown 占位清除
    int FindOverlay(int a1, IUnknown * aP1, IUnknown * aP2);  // G57w10-S raw 0x006D97D0 IUnknown 占位清除
    int MapSpecialDrawMode(MouseClass * aP1);
    static int SetPositionThunk(RadarClass * aP0);
    int StubReturnFalse10();
    int StubReturnFalse2();
    int StubReturnFalse3();
    int StubReturnFalse4();
    int StubReturnFalse5();
    int StubReturnFalse6();
    int StubReturnFalse8();
    int StubReturnFalse9();
    signed int RenderIsometricOverlay(int *aP1, int *aP2, char a4);  // G57w10-S raw 0x006D2DE0 IUnknown 占位清除
    static int RenderIsometric(void *aP1, void *a2, void *a3);
    static void * CalcBuildingDrawPos(void *aP1, void *a2);
    static unsigned int * CollectSelectedIDs();
    unsigned int * SetDisplayMode(unsigned int *a2, char a3);
    unsigned int RenderCellFogOfWar(unsigned int *aP1, int *aP2);  // G57w10-S raw 0x004801F0 IUnknown 占位清除
    void * IsOccupiedByTechno(unsigned int * a2);
    void CleanupResources();
    void DrawBuildingPlacement(unsigned int *aP1, int *a2);  // G57w10-S raw 0x0047F510 IUnknown 占位清除
    void DrawCellOverlay(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, void *a10_1 = 0);
    void DrawCellTerrainOverlay(int *a2, int *a3);
    static int InterpolateView();
    void StubReturnTrue();
    void StubReturnTrue2();
    void StubReturnTrue3();
    void* * DrawBuildingsInView(AbstractClass * aP1);
    void* DrawPlacementCircles();
    void* ProcessScroll(int * a2);
    static void FreeResources(TacticalClass * aP1);
    static void ProcessView(TacticalClass * aP1);
    static int RenderCells(TacticalClass * aP1);
    static AnimClass * ResetView(TacticalClass * aP1);
    static void SetViewDimensions(DisplayClass * aP1);
    static int BuildCommandBar(TacticalClass * aP1, int a2, int a3);
    static unsigned int * PixelToCellCheck(RadarClass * aP1, int * a2);
    int SetView(int a2, int a3, int16_t a4, int16_t a5, int16_t a6, int16_t a7);
    static char initTacticalMap(TacticalClass * aP1, int *a2, int *a3);
    int  SetCameraPosition(int a2, int a3, int a4, void *a1 = 0);  // 0x540d10
    char  UpdateScrollTarget(int a2, int a3, int a4, int a5, char a6, void *a1 = 0);  // 0x554aa0
    int Initialize();  // 0x4ae450
    int ResetScrollBounds();  // 0x6da160
    int  ScrollView(char a2);  // 0x554af0
    AnimClass * SetObserverView(void *a1 = 0);
    int DrawTerrain(int *a2, unsigned int *a4);
    static int FillScanlinesTransparent(int p0, int p1, int p2, int p3);  // x4:signals@0x411330
    static int updateScroll(int p0, int p1);  // x4:signals@0x7343e0
#pragma pack(pop)
};

} // namespace gamemd
