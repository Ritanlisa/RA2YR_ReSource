// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
class DrawTerrain;  // G42.36 fwd supply
struct CellClass;  // fix_fwd_type_supply

struct TacticalClass {
// --- flat members (BEGIN) ---
    int vfptr;  // 0x0
    void* vfptr1;  // 0x4
    void* vfptr2;  // 0x8
    void* vfptr3;  // 0xC
    void* uniqueId;  // 0x10
    void* abstractFlags;  // 0x14
    void* nextArrayIndex;  // 0x18
    void* referenceCount;  // 0x1C
    void* NeedsSaveOrLink;  // 0x20
unsigned int field24;  // 0x24 [X35-L7 kind=unsigned int]
    unsigned int field28;  // 0x28
    unsigned int TacticalClass_field_2C;  // 0x2C
unsigned int field30;  // 0x30 [X35-L7 kind=unsigned int]
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
    char visibleArea[16];  // 0xB0
    double zoomInFactor;  // 0xC0
    unsigned int TacticalClass_field_C8;  // 0xC8
    unsigned int TacticalClass_field_CC;  // 0xCC
    unsigned int TacticalClass_field_D0;  // 0xD0
    unsigned int TacticalClass_field_D4;  // 0xD4
    unsigned int TacticalClass_field_D8;  // 0xD8
    unsigned int TacticalClass_field_DC;  // 0xDC
    unsigned int visibleCellCount;  // 0xE0
    CellClass* visibleCells;  // 0xE4
    unsigned int TacticalClass_field_D64;  // 0xD64
    unsigned int TacticalClass_field_D68;  // 0xD68
    unsigned int TacticalClass_field_D6C;  // 0xD6C
    unsigned int TacticalClass_field_D70;  // 0xD70
    unsigned int TacticalClass_field_D74;  // 0xD74
    unsigned int TacticalClass_field_D78;  // 0xD78
    bool TacticalClass_field_D7C;  // 0xD7C
    bool redrawing;  // 0xD7D
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
    float floats;  // 0xDB0
    char TacticalClass_field_DE4[16];  // 0xDE4
    unsigned int TacticalClass_field_DF4;  // 0xDF4
    double TacticalClass_field_DF8;  // 0xDF8
    unsigned int TacticalClass_field_E00;  // 0xE00
    unsigned int TacticalClass_field_E04;  // 0xE04
    double TacticalClass_field_E08;  // 0xE08
    unsigned int TacticalClass_field_E10;  // 0xE10
    unsigned int TacticalClass_field_E14;  // 0xE14
// --- flat members (END) ---
    static int SetObserverMode(void *aP1, int a2);
    static int SetPosition(void *aP1, void *a2, void *aP3);
    void* TransformPixel;  // 0x0 (no offset truth)
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
    unsigned int uniqueId4;  // @0x6d7c19 (W16G3 raw-usage vocab)
    unsigned int uniqueId5;  // @0x6d7ccd (W16G3 raw-usage vocab)
    unsigned int abstractFlags6;  // @0x6d30a2 (W16G3 raw-usage vocab)
    unsigned char *__pad_11B4;  // 0x11B4 (offset-truth)
    unsigned int q11B0;  // 0x11B0 (offset-truth)
    unsigned int q11D0;  // 0x11D0 (offset-truth)
    unsigned int q11D4;  // 0x11D4 (offset-truth)
    unsigned int q11D8;  // 0x11D8 (offset-truth)
    unsigned int q11DC;  // 0x11DC (offset-truth)
    unsigned int q11E0;  // 0x11E0 (offset-truth)
    unsigned int u32_11A8;  // 0x11A8 (offset-truth)
    unsigned char u32_11B1;  // 0x11B1 (offset-truth)
    unsigned char u32_11B2;  // 0x11B2 (offset-truth)
    unsigned char u32_11B3;  // 0x11B3 (offset-truth)
    unsigned int u32_11B4;  // 0x11B4 (offset-truth)
    void* u32_11BC;  // 0x11BC (offset-truth) [X30:type_map]
    unsigned int u32_11C0;  // 0x11C0 (offset-truth)
    unsigned int u32_11C4;  // 0x11C4 (offset-truth)
    unsigned int u32_11C8;  // 0x11C8 (offset-truth)

    unsigned int q140;  // X10 supply (member_lookup)
    unsigned int u32_11B;  // X10 supply (member_lookup)
    unsigned int u32_11E;  // X10 supply (member_lookup)
    unsigned int u32_294;  // X10 supply (member_lookup)
    unsigned int u32_2E1;  // X10 supply (member_lookup)
    unsigned char __pad_06C;  // 0x6C [X30:canon]
    unsigned char __pad_0AE;  // 0xAE [X30:canon]
    unsigned char __pad_D7E;  // 0xD7E [X30:canon]
    unsigned char __pad_DE0;  // 0xDE0 [X30:canon]
    unsigned int attached34;  // [X30:default]
    unsigned int foggedness;  // [X30:default]
    unsigned int level;  // [X30:default]
    unsigned int overlayTypeIndex0;  // [X30:default]
    unsigned int shroudedness;  // [X30:default]
    unsigned int unknown707;  // [X30:default]
    int vtable23;  // 0x58 [X30:member_lookup]
    unsigned int vtable24;  // 0x5C [X30:member_lookup]
    int vtable28;  // 0x6C [X30:member_lookup]
    int vtable46;  // 0xB4 [X30:type_map]
};

} // namespace gamemd
