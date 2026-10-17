// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
class DrawTerrain;  // G42.36 fwd supply
struct CellClass;  // fix_fwd_type_supply

struct TacticalClass {
    int vfptr;  // 0x0
    void* vfptr1;  // 0x4
    void* vfptr2;  // 0x8
    void* vfptr3;  // 0xC
    void* uniqueId;  // 0x10
    void* abstractFlags;  // 0x14
    void* nextArrayIndex;  // 0x18
    void* referenceCount;  // 0x1C
    void* NeedsSaveOrLink;  // 0x20
    unsigned int field24;  // 0x24
    unsigned int field28;  // 0x28
    unsigned int TacticalClass_field_2C;  // 0x2C
    unsigned int field30;  // 0x30
    unsigned int field34;  // 0x34
    unsigned int field38;  // 0x38
    unsigned int TacticalClass_field_3C;  // 0x3C
    unsigned int field40;  // 0x40
    unsigned int field44;  // 0x44
    unsigned int field48;  // 0x48
    unsigned int TacticalClass_field_4C;  // 0x4C
    unsigned int field50;  // 0x50
    unsigned int field54;  // 0x54
    unsigned int field58;  // 0x58
    unsigned int TacticalClass_field_5C;  // 0x5C
    unsigned int field60;  // 0x60
    unsigned int field64;  // 0x64
    unsigned int field68;  // 0x68
    int vtable28;  // 0x6C
    unsigned int field70;  // 0x70
    unsigned int field74;  // 0x74
    unsigned int field78;  // 0x78
    unsigned int TacticalClass_field_7C;  // 0x7C
    unsigned int field80;  // 0x80
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
    bool TacticalClass_field_AC;  // 0xAC
    bool TacticalClass_field_AD;  // 0xAD
    unsigned char __pad_0AE;  // 0xAE
    char __pad_AF[1];  // 0xAF
    char visibleArea[16];  // 0xB0
    double zoomInFactor;  // 0xC0
    unsigned int TacticalClass_field_C8;  // 0xC8
    unsigned int TacticalClass_field_CC;  // 0xCC
    unsigned int TacticalClass_field_D0;  // 0xD0
    unsigned int TacticalClass_field_D4;  // 0xD4
    unsigned int TacticalClass_field_D8;  // 0xD8
    unsigned int TacticalClass_field_DC;  // 0xDC
    unsigned int visibleCellCount;  // 0xE0
    char visibleCells[3200];  // 0xE4
    unsigned int TacticalClass_field_D64;  // 0xD64
    unsigned int TacticalClass_field_D68;  // 0xD68
    unsigned int TacticalClass_field_D6C;  // 0xD6C
    unsigned int TacticalClass_field_D70;  // 0xD70
    unsigned int TacticalClass_field_D74;  // 0xD74
    unsigned int TacticalClass_field_D78;  // 0xD78
    bool TacticalClass_field_D7C;  // 0xD7C
    bool redrawing;  // 0xD7D
    unsigned char __pad_D7E;  // 0xD7E
    char __pad_D7F[1];  // 0xD7F
    unsigned int TacticalClass_field_D80;  // 0xD80
    unsigned int TacticalClass_field_D84;  // 0xD84
    unsigned int TacticalClass_field_D88;  // 0xD88
    unsigned int TacticalClass_field_D8C;  // 0xD8C
    unsigned int TacticalClass_field_D90;  // 0xD90
    unsigned int TacticalClass_field_D94;  // 0xD94
    unsigned int TacticalClass_field_D98;  // 0xD98
    unsigned int TacticalClass_field_D9C;  // 0xD9C
    unsigned int mouseFrameIndex;  // 0xDA0
    unsigned int startTime;  // 0xDA4
    unsigned int TacticalClass_field_DA8;  // 0xDA8
    unsigned int TacticalClass_field_DAC;  // 0xDAC
    int floats[12];  // 0xDB0
    unsigned char __pad_DE0;  // 0xDE0
    char __pad_DE1[3];  // 0xDE1
    char TacticalClass_field_DE4[16];  // 0xDE4
    unsigned int TacticalClass_field_DF4;  // 0xDF4
    double TacticalClass_field_DF8;  // 0xDF8
    unsigned int TacticalClass_field_E00;  // 0xE00
    unsigned int TacticalClass_field_E04;  // 0xE04
    double TacticalClass_field_E08;  // 0xE08
    unsigned int TacticalClass_field_E10;  // 0xE10
    unsigned int TacticalClass_field_E14;  // 0xE14
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
    static int SetPositionThunk(MouseClass * aP0);
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
};

} // namespace gamemd
