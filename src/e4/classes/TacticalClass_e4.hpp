// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
class DrawTerrain;  // G42.36 fwd supply
struct CellClass;  // fix_fwd_type_supply

struct TacticalClass {
    static int SetObserverMode(void *aP1, int a2);  // 0x4AC820 raw: int __thiscall TacticalClass::SetObserverMode(TacticalClass*, int)  // G57w10 r5 D-classbody supply (raw-anchored)
    static int SetPosition(void *aP1, void *a2, void *aP3);  // 0x6D2420 raw: int __thiscall TacticalClass::SetPosition(TacticalClass*, _DWORD*, int)  // G57w10 r5 D-classbody supply (raw-anchored)

// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    void* q008;  // 0x8
    void* q00C;  // 0xC
    unsigned int q00D;  // 0xD
    void* uniqueId;  // 0x10
    void* abstractFlags;  // 0x14
    void* nextArrayIndex;  // 0x18
    void* referenceCount;  // 0x1C
    void* NeedsSaveOrLink;  // 0x20
    unsigned int u16_26;  // 0x26
    unsigned int field38;  // 0x38
    unsigned int field40;  // 0x40
    unsigned char u8_45;  // 0x45
    unsigned int u32_47;  // 0x47
    unsigned int u32_49;  // 0x49
    unsigned char u8_51;  // 0x51
    unsigned int u32_6C;  // 0x6C
    char visibleArea[16];  // 0xB0
    void* q0B4;  // 0xB4
    unsigned int visibleCellCount;  // 0xE0
    CellClass* visibleCells;  // 0xE4
    unsigned int u32_F8;  // 0xF8
    unsigned int u32_FC;  // 0xFC
    int q100;  // 0x100
    unsigned int q104;  // 0x104
    unsigned int u32_10C;  // 0x10C
    unsigned int q114;  // 0x114
    unsigned int u32_11A;  // 0x11A
    char u32_11B;  // 0x11B
    int q128;  // 0x128
    unsigned char q130;  // 0x130
    unsigned int u32_13C;  // 0x13C
    unsigned int q140;  // 0x140
    int q144;  // 0x144
    int q150;  // 0x150
    unsigned int q164;  // 0x164
    unsigned int q168;  // 0x168
    unsigned int u32_16C;  // 0x16C
    unsigned int u32_19C;  // 0x19C
    unsigned int u32_1A4;  // 0x1A4
    unsigned int u32_1A8;  // 0x1A8
    void* q20C;  // 0x20C
    unsigned char q258;  // 0x258
    unsigned int q264;  // 0x264
    unsigned int q280;  // 0x280
    int q308;  // 0x308
    int q324;  // 0x324
    unsigned int q340;  // 0x340
    void* q520;  // 0x520
    unsigned int u32_570;  // 0x570
    unsigned int u32_748;  // 0x748
    unsigned int TacticalClass_field_D64;  // 0xD64
    unsigned int TacticalClass_field_D68;  // 0xD68
    unsigned int TacticalClass_field_D74;  // 0xD74
    unsigned int TacticalClass_field_D78;  // 0xD78
    bool redrawing;  // 0xD7D
    float floats;  // 0xDB0
    char TacticalClass_field_DE4[16];  // 0xDE4
    unsigned int DisplayClass_field_0x11B0;
    unsigned int DisplayClass_field_0x11D0;
    unsigned int DisplayClass_field_0x11D4;
    unsigned int DisplayClass_field_0x11D8;
    unsigned int DisplayClass_field_0x11DC;
    unsigned int DisplayClass_field_0x11E0;
    unsigned int InitScrollBounds_slot;
    unsigned int UpdateScrollMaxBounds_slot;
    unsigned int *__pad_11B4;
    unsigned int foggedness;
    void* ptr_34;
    unsigned int q048;
    unsigned int q0B0;
    unsigned int shroudedness;
    unsigned int u32_38;
    unsigned int updateVisibility_slot;

    void* TransformPixel;  // 0x0 (no offset truth)
// --- flat members (END) ---
    static int updateVisibility(TacticalClass *pThis);  // G57w19k2 raw thiscall static-form supply (member updateVisibility -> updateVisibility_slot)
    static int UpdateScrollMaxBounds(TacticalClass *pThis, void *a2);  // G57w19k2 raw thiscall static-form supply (member UpdateScrollMaxBounds -> UpdateScrollMaxBounds_slot)
    static int InitScrollBounds(TacticalClass *pThis, unsigned int *a2);  // G57w19k2 raw thiscall static-form supply (member InitScrollBounds -> InitScrollBounds_slot)
    char StubReturnFalse();
    char StubReturnFalse11();
    char StubReturnFalse7();
    int CalcAllDrawPositions(AbstractClass * aP1, BuildingTypeClass * aP2, int * a3, char a5);
    int CheckUnitOverlap(int a2, int a3, AbstractClass * aP3, int a5);
    int FindBuilding(int a1, int *a2, int *a3);  // G57w10-S raw 0x006D9920 IUnknown 占位清除
    int FindOverlay(int a1, int *a2, int *a3);  // G57w10-S raw 0x006D97D0 IUnknown 占位清除
    int MapSpecialDrawMode(MouseClass * aP1);
    int SetPositionThunk(MouseClass * aP0);
    int StubReturnFalse10();
    int StubReturnFalse2();
    int StubReturnFalse3();
    int StubReturnFalse4();
    int StubReturnFalse5();
    int StubReturnFalse6();
    int StubReturnFalse8();
    int StubReturnFalse9();
    signed int RenderIsometricOverlay(int *a2, int *a3, char a4);  // G57w10-S raw 0x006D2DE0 IUnknown 占位清除
    static int RenderIsometric(void *aP1, void *a2, void *a3);  // 0x6D7560 raw: int RenderIsometric(int this, int*, _DWORD*)
    static void * CalcBuildingDrawPos(void *aP1, void *a2);  // 0x6D71E0 raw: Point2D* CalcBuildingDrawPos(int*, int*)

    static unsigned int * CollectSelectedIDs();
    unsigned int * SetDisplayMode(unsigned int * a2, char a3);
    unsigned int RenderCellFogOfWar(unsigned int *a2, int *a3);  // G57w10-S raw 0x004801F0 IUnknown 占位清除
    void * IsOccupiedByTechno(unsigned int * a2);
    void CleanupResources();
    void DrawBuildingPlacement(unsigned int *a2, int *a3);  // G57w10-S raw 0x0047F510 IUnknown 占位清除
    void DrawCellOverlay(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10);
    void DrawCellTerrainOverlay(int * a2, int * a3);
    int InterpolateView();
    void StubReturnTrue();
    void StubReturnTrue2();
    void StubReturnTrue3();
    void* * DrawBuildingsInView(AbstractClass * aP1);
    void* DrawPlacementCircles();
    void* ProcessScroll(int * a2);
    static void FreeResources(TacticalClass * aP1);  // G57w10-S raw 0x00655A90 (was C2597 interim stub)
    static void ProcessView(TacticalClass * aP1);  // G57w10-S raw 0x00692F30 (was C2597 interim stub)
    static int RenderCells(TacticalClass * aP1);  // G57w10-S raw 0x00550260 (was C2597 interim stub)
    static AnimClass * ResetView(TacticalClass * aP1);  // G57w10-S raw 0x007313A0 (was C2597 interim stub)
    static void SetViewDimensions(DisplayClass * aP1);  // G57w10-S raw 0x4A8960 (was C2597 interim stub)
    static int BuildCommandBar(TacticalClass * aP1, int a2, int a3);  // G57w10-S raw 0x6D04F0 (was C2597 interim stub)
    static unsigned int * PixelToCellCheck(RadarClass * aP1, int * a2);  // G57w10-S raw 0x653760 (was C2597 interim stub)
    static int SetView(TacticalClass * aP1, int a2, int a3, __int16 a4, __int16 a5, __int16 a6, __int16 a7);  // G57w10-S raw 0x00483E30 (was C2597 interim stub)
    static char initTacticalMap(TacticalClass * aP1, int *a2, int *a3);  // G57w10-S raw 0x0045F1D0 (was C2597 interim stub)
    int SetCameraPosition(int a2, int a3, int a4);  // 0x540d10
    char UpdateScrollTarget(int a2, int a3, int a4, int a5, char a6);  // 0x554aa0
    int Initialize();  // 0x4ae450
    int ResetScrollBounds();  // 0x6da160
    int ScrollView(char aP1);  // 0x554af0
    AnimClass * SetObserverView(); // N_fix R5 supply (cache truth)
    int DrawTerrain(int *a2, unsigned int *a3, int a4);
    static int FillScanlinesTransparent(...);
    static int updateScroll(...);  // w16g4 C3861 static supply (raw 0x007343E0)  // w16g4 C3861 static supply (raw 0x00411330)
    // --- W16G3 supply (BEGIN) ---
    unsigned int uniqueId4;  // @0x6d7c19 (W16G3 raw-usage vocab)
    unsigned int uniqueId5;  // @0x6d7ccd (W16G3 raw-usage vocab)
    unsigned int abstractFlags6;  // @0x6d30a2 (W16G3 raw-usage vocab)
    // --- W16G3 supply (END) ---

};

} // namespace gamemd
