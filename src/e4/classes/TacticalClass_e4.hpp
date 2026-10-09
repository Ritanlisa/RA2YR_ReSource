// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
class DrawTerrain;  // G42.36 fwd supply
struct CellClass;  // fix_fwd_type_supply

struct TacticalClass {
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
    unsigned int field24;  // 0x24
    unsigned int u16_26;  // 0x26
    unsigned int field28;  // 0x28
    unsigned int TacticalClass_field_2C;  // 0x2C
    unsigned int field30;  // 0x30
    unsigned int field34;  // 0x34
    unsigned int field38;  // 0x38
    unsigned int TacticalClass_field_3C;  // 0x3C
    unsigned int field40;  // 0x40
    unsigned char u8_41;  // 0x41
    unsigned char u8_42;  // 0x42
    unsigned char u8_43;  // 0x43
    unsigned int field44;  // 0x44
    unsigned char u8_45;  // 0x45
    unsigned char u8_46;  // 0x46
    unsigned int u32_47;  // 0x47
    unsigned int field48;  // 0x48
    unsigned int u32_49;  // 0x49
    unsigned int TacticalClass_field_4C;  // 0x4C
    unsigned int field50;  // 0x50
    unsigned char u8_51;  // 0x51
    unsigned char u8_52;  // 0x52
    unsigned int field54;  // 0x54
    unsigned int field58;  // 0x58
    unsigned int TacticalClass_field_5C;  // 0x5C
    unsigned int field60;  // 0x60
    unsigned int field64;  // 0x64
    unsigned int field68;  // 0x68
    unsigned int u32_6C;  // 0x6C
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
    unsigned char q0AE;  // 0xAE
    char visibleArea[16];  // 0xB0
    void* q0B4;  // 0xB4
    double zoomInFactor;  // 0xC0
    unsigned int TacticalClass_field_C8;  // 0xC8
    unsigned int TacticalClass_field_CC;  // 0xCC
    unsigned int u32_CD;  // 0xCD
    unsigned int TacticalClass_field_D0;  // 0xD0
    unsigned int TacticalClass_field_D4;  // 0xD4
    unsigned int TacticalClass_field_D8;  // 0xD8
    unsigned int TacticalClass_field_DC;  // 0xDC
    unsigned int visibleCellCount;  // 0xE0
    CellClass* visibleCells;  // 0xE4
    unsigned int q0E8;  // 0xE8
    unsigned int u32_F8;  // 0xF8
    unsigned int u32_FA;  // 0xFA
    unsigned int u32_FC;  // 0xFC
    int q100;  // 0x100
    unsigned int q104;  // 0x104
    unsigned int q108;  // 0x108
    unsigned int u16_10A;  // 0x10A
    unsigned int u32_10C;  // 0x10C
    unsigned int u16_10E;  // 0x10E
    unsigned int u16_110;  // 0x110
    unsigned int q114;  // 0x114
    unsigned int q118;  // 0x118
    unsigned int u32_11A;  // 0x11A
    char u32_11B;  // 0x11B
    unsigned int u32_11E;  // 0x11E
    unsigned int u32_11F;  // 0x11F
    int q120;  // 0x120
    unsigned int u32_121;  // 0x121
    unsigned int q124;  // 0x124
    int q128;  // 0x128
    unsigned char q130;  // 0x130
    int q134;  // 0x134
    unsigned int u32_13C;  // 0x13C
    unsigned int q140;  // 0x140
    int q144;  // 0x144
    int q148;  // 0x148
    int q150;  // 0x150
    unsigned int u32_15C;  // 0x15C
    unsigned int q160;  // 0x160
    unsigned int q164;  // 0x164
    unsigned int q168;  // 0x168
    unsigned int u32_16C;  // 0x16C
    void* q174;  // 0x174
    unsigned int q180;  // 0x180
    unsigned int u32_188;  // 0x188
    unsigned int u32_194;  // 0x194
    unsigned int u32_19C;  // 0x19C
    unsigned int u32_1A4;  // 0x1A4
    unsigned int u32_1A8;  // 0x1A8
    unsigned int u32_1AC;  // 0x1AC
    unsigned int u32_1C4;  // 0x1C4
    unsigned int u32_1CC;  // 0x1CC
    unsigned int u32_1D0;  // 0x1D0
    unsigned int u32_1D4;  // 0x1D4
    void* q1D8;  // 0x1D8
    unsigned int q200;  // 0x200
    unsigned int q204;  // 0x204
    unsigned int q208;  // 0x208
    void* q20C;  // 0x20C
    unsigned int u32_210;  // 0x210
    unsigned int u32_214;  // 0x214
    unsigned int u32_218;  // 0x218
    unsigned int q220;  // 0x220
    int q224;  // 0x224
    unsigned int q228;  // 0x228
    unsigned int q248;  // 0x248
    unsigned int q250;  // 0x250
    unsigned char q258;  // 0x258
    unsigned int q260;  // 0x260
    unsigned int q264;  // 0x264
    unsigned int q268;  // 0x268
    unsigned int q270;  // 0x270
    unsigned int q274;  // 0x274
    int q278;  // 0x278
    unsigned int u32_27C;  // 0x27C
    unsigned int q280;  // 0x280
    int q288;  // 0x288
    void* q294;  // 0x294
    unsigned int q2C4;  // 0x2C4
    unsigned int u32_2E1;  // 0x2E1
    void* q2F0;  // 0x2F0
    unsigned char q304;  // 0x304
    int q308;  // 0x308
    int q310;  // 0x310
    unsigned int q320;  // 0x320
    int q324;  // 0x324
    int q328;  // 0x328
    int q338;  // 0x338
    unsigned int q340;  // 0x340
    unsigned int q344;  // 0x344
    unsigned int q348;  // 0x348
    unsigned int q360;  // 0x360
    bool q370;  // 0x370
    unsigned int q374;  // 0x374
    unsigned int q384;  // 0x384
    char u32_46C;  // 0x46C
    unsigned int u32_478;  // 0x478
    unsigned int u32_480;  // 0x480
    unsigned int u32_484;  // 0x484
    unsigned int u32_500;  // 0x500
    void* q520;  // 0x520
    void* q524;  // 0x524
    unsigned int q528;  // 0x528
    unsigned int q530;  // 0x530
    unsigned int q534;  // 0x534
    unsigned int q544;  // 0x544
    int q548;  // 0x548
    unsigned int u32_558;  // 0x558
    unsigned int u32_55C;  // 0x55C
    void* q560;  // 0x560
    unsigned int u32_564;  // 0x564
    unsigned int u32_568;  // 0x568
    unsigned int u32_570;  // 0x570
    unsigned int u32_574;  // 0x574
    unsigned int u32_578;  // 0x578
    unsigned int q584;  // 0x584
    unsigned int u32_58C;  // 0x58C
    unsigned int q594;  // 0x594
    int q598;  // 0x598
    char q5D4[4];  // 0x5D4
    unsigned char q600;  // 0x600
    unsigned int q608;  // 0x608
    unsigned int q614;  // 0x614
    unsigned int q624;  // 0x624
    unsigned int q628;  // 0x628
    unsigned int q630;  // 0x630
    unsigned int q640;  // 0x640
    int q648;  // 0x648
    unsigned int q658;  // 0x658
    void* q660;  // 0x660
    unsigned int q708;  // 0x708
    unsigned int u32_710;  // 0x710
    unsigned int u32_714;  // 0x714
    unsigned int u32_71C;  // 0x71C
    unsigned int u32_720;  // 0x720
    unsigned int u32_724;  // 0x724
    unsigned int u32_73C;  // 0x73C
    unsigned int u32_740;  // 0x740
    unsigned int u32_748;  // 0x748
    unsigned int u32_754;  // 0x754
    unsigned int u32_760;  // 0x760
    int q774;  // 0x774
    int q784;  // 0x784
    unsigned int q800;  // 0x800
    int q804;  // 0x804
    int q808;  // 0x808
    int q824;  // 0x824
    unsigned int q834;  // 0x834
    unsigned int u32_838;  // 0x838
    unsigned int q840;  // 0x840
    unsigned int u32_848;  // 0x848
    unsigned int u32_84C;  // 0x84C
    unsigned int q850;  // 0x850
    unsigned int q854;  // 0x854
    unsigned int q864;  // 0x864
    bool q880;  // 0x880
    unsigned int q884;  // 0x884
    unsigned int q900;  // 0x900
    unsigned int u32_95C;  // 0x95C
    unsigned int u32_B84;  // 0xB84
    unsigned int TacticalClass_field_D64;  // 0xD64
    unsigned int TacticalClass_field_D68;  // 0xD68
    unsigned int TacticalClass_field_D6C;  // 0xD6C
    unsigned int TacticalClass_field_D70;  // 0xD70
    unsigned int TacticalClass_field_D74;  // 0xD74
    unsigned int TacticalClass_field_D78;  // 0xD78
    bool TacticalClass_field_D7C;  // 0xD7C
    bool redrawing;  // 0xD7D
    unsigned char qD7E;  // 0xD7E
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
    unsigned char qDE0;  // 0xDE0
    char TacticalClass_field_DE4[16];  // 0xDE4
    unsigned int TacticalClass_field_DF4;  // 0xDF4
    double TacticalClass_field_DF8;  // 0xDF8
    unsigned int TacticalClass_field_E00;  // 0xE00
    unsigned int TacticalClass_field_E04;  // 0xE04
    double TacticalClass_field_E08;  // 0xE08
    unsigned int TacticalClass_field_E10;  // 0xE10
    unsigned int TacticalClass_field_E14;  // 0xE14
// --- flat members (END) ---
    static int SetObserverMode(void *aP1, int a2);  // 0x4AC820 raw: int __thiscall TacticalClass::SetObserverMode(TacticalClass*, int)  // G57w10 r5 D-classbody supply (raw-anchored)
    static int SetPosition(void *aP1, void *a2, void *aP3);  // 0x6D2420 raw: int __thiscall TacticalClass::SetPosition(TacticalClass*, _DWORD*, int)  // G57w10 r5 D-classbody supply (raw-anchored)
    void* TransformPixel;  // 0x0 (no offset truth)
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
    unsigned int uniqueId4;  // @0x6d7c19 (W16G3 raw-usage vocab)
    unsigned int uniqueId5;  // @0x6d7ccd (W16G3 raw-usage vocab)
    unsigned int abstractFlags6;  // @0x6d30a2 (W16G3 raw-usage vocab)
    unsigned char __pad_11B4;  // 0x11B4 (offset-truth)
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
    unsigned int u32_11BC;  // 0x11BC (offset-truth)
    unsigned int u32_11C0;  // 0x11C0 (offset-truth)
    unsigned int u32_11C4;  // 0x11C4 (offset-truth)
    unsigned int u32_11C8;  // 0x11C8 (offset-truth)
};

} // namespace gamemd
