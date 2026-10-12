// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct HouseClass;  // fix_fwd_type_supply
struct AbstractTypeClass;  // fix_fwd_type_supply
struct ParticleSystemClass;  // fix_fwd_type_supply
struct BuildingTypeClass;  // fix_fwd_type_supply
struct Coord;  // fix_fwd_type_supply
struct GadgetClass;  // fix_fwd_type_supply

struct SidebarClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    TechnoClass * ptr_30;  // 0x30
    int playerIndex;  // 0x56
    unsigned int LevelAndPassability;  // 0x84
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
    unsigned int MaxHeight;  // 0x140
    unsigned int Crates;  // 0x148
    unsigned int MapCoordBounds;  // 0x292
    unsigned int FoundationTypePixels;  // 0x1278
    unsigned int RadarSizeFactor;  // 0x1488
    unsigned int IsAvailableNow;  // 0x14D8
// --- flat members (END) ---
    unsigned int calcSidebarRect_ph;  // w18j3: filler renamed (no offset truth; canon SidebarClass::calcSidebarRect is a method)
    static unsigned int calcSidebarRect(SidebarClass *p_this);  // x4:ida@0x72ad90
    unsigned int InitButtons_ph;  // w18j3: filler renamed (no offset truth; canon SidebarClass::InitButtons is a method)
    static unsigned int InitButtons(TabClass *p_this);  // x4:ida@0x6d03a0
    void* GetProductionState_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon SidebarClass::GetProductionState is a method)
    static unsigned int GetProductionState(SidebarClass *p_this);  // x4:ida@0x6cbee0
    static char LoadResources();
    static GadgetClass * LoadResources(void *a1);
    static int CalcBounds(char a1);
    int InitPositions();
    int Redraw(char a2);
    int SwitchTab(int a2);
    int deselect();
    int draw();
    int draw2();
    int initButtons2();
    int select();
    void * LoadAssets();
    void CreateScrollButtons();
    int  UpdateStrips(int * a2, unsigned int * a3);  // 0x6a7780
    int AddCameo(int AbstractType, int a3);  // 0x6a6300
    int LoadButtonSHPs();  // 0x6d02b0
    int ReadButtonList();  // 0x674650
    static GadgetClass * LoadResources(void *a1, void * aSidegdi1Shp, void * aSidegdi2Shp, void * aSidegdi3Shp);
    static int updateStripVisibility(SidebarClass *p_this);  // x4:ida@0x724530
    static int initializeStrip(int p0);  // x4:signals@0x724520
    static int updateStripPosition(SidebarClass *p_this);  // x4:ida@0x724540
};

} // namespace gamemd
