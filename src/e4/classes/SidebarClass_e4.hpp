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
#pragma pack(push, 1)  // X60: binary-packed layout
    void* GetProductionState_ph;  // 0x0
    int __pad_004;  // 0x4
    int SidebarClass_field_0x8;  // 0x8
    char __pad_C[8];  // 0xC
    int SidebarClass_field_0x14;  // 0x14
    char __pad_18[4];  // 0x18
    int SidebarClass_field_0x1C;  // 0x1C
    char __pad_20[4];  // 0x20
    int SidebarClass_field_0x24;  // 0x24
    int SidebarClass_field_0x28;  // 0x28
    int u32_2C;  // 0x2C
    TechnoClass * ptr_30;  // 0x30
    int __pad_034;  // 0x34
    int SidebarClass_field_0x38;  // 0x38
    int SidebarClass_field_0x3C;  // 0x3C
    char __pad_40[20];  // 0x40
    int SidebarClass_field_0x54;  // 0x54
    int SidebarClass_field_0x58;  // 0x58
    int q05C;  // 0x5C
    int SidebarClass_field_0x60;  // 0x60
    int SidebarClass_field_0x64;  // 0x64
    int SidebarClass_field_0x68;  // 0x68
    int SidebarClass_field_0x6C;  // 0x6C
    int SidebarClass_field_0x70;  // 0x70
    char __pad_74[12];  // 0x74
    int SidebarClass_field_0x80;  // 0x80
    unsigned int LevelAndPassability;  // 0x84
    unsigned int __pad_088;  // 0x88
    char __pad_8C[12];  // 0x8C
    int SidebarClass_field_0x98;  // 0x98
    char __pad_9C[16];  // 0x9C
    int SidebarClass_field_0xAC;  // 0xAC
    char __pad_B0[4];  // 0xB0
    int SidebarClass_field_0xB4;  // 0xB4
    unsigned int __pad_B8;  // 0xB8
    char __pad_BC[24];  // 0xBC
    unsigned int CellStructs1;  // 0xD4
    unsigned char __pad_0D8;  // 0xD8
    char __pad_D9[19];  // 0xD9
    unsigned int MapRect;  // 0xEC
    unsigned char __pad_0F0;  // 0xF0
    char __pad_F1[11];  // 0xF1
    unsigned int VisibleRect;  // 0xFC
    unsigned char __pad_100;  // 0x100
    char __pad_101[15];  // 0x101
    unsigned int CellIterator_NextY;  // 0x110
    unsigned int CellIterator_CurrentY;  // 0x114
    unsigned int CellIterator_NextCell;  // 0x118
    unsigned int ZoneIterator_X;  // 0x11C
    unsigned int ZoneIterator_Y;  // 0x120
    unsigned char __pad_124;  // 0x124
    char __pad_125[19];  // 0x125
    unsigned int MaxLevel;  // 0x138
    unsigned int MaxWidth;  // 0x13C
    unsigned int MaxHeight;  // 0x140
    unsigned char __pad_144;  // 0x144
    char __pad_145[3];  // 0x145
    unsigned int Crates;  // 0x148
    unsigned char __pad_14C;  // 0x14C
    char __pad_14D[59];  // 0x14D
    int SidebarClass_field_0x188;  // 0x188
    int SidebarClass_field_0x18C;  // 0x18C
    int SidebarClass_field_0x190;  // 0x190
    unsigned int __pad_194;  // 0x194
    char __pad_198[144];  // 0x198
    int SidebarClass_field_0x228;  // 0x228
    int SidebarClass_field_0x22C;  // 0x22C
    char __pad_230[40];  // 0x230
    int SidebarClass_field_0x258;  // 0x258
    char __pad_25C[54];  // 0x25C
    unsigned char MapCoordBounds;  // 0x292
    char __pad_293[3];  // 0x293
    unsigned char __pad_296;  // 0x296
    char __pad_297[89];  // 0x297
    int SidebarClass_field_0x2F0;  // 0x2F0
    char __pad_2F4[556];  // 0x2F4
    int SidebarClass_field_0x520;  // 0x520
    unsigned int __pad_524;  // 0x524
    char __pad_528[472];  // 0x528
    int SidebarClass_field_0x700;  // 0x700
    char __pad_704[1482];  // 0x704
    char SidebarClass_field_0xCCE[4];  // 0xCCE
    char __pad_CD2[960];  // 0xCD2
    unsigned int __pad_1092;  // 0x1092
    char __pad_1096[482];  // 0x1096
    unsigned int FoundationTypePixels;  // 0x1278
    unsigned char __pad_127C;  // 0x127C
    char __pad_127D[469];  // 0x127D
    unsigned int __pad_1452;  // 0x1452
    char __pad_1456[50];  // 0x1456
    unsigned int RadarSizeFactor;  // 0x1488
    unsigned char __pad_148C;  // 0x148C
    char __pad_148D[75];  // 0x148D
    unsigned int IsAvailableNow;  // 0x14D8
    unsigned char __pad_14DC;  // 0x14DC
    char __pad_14DD[103];  // 0x14DD
    int SidebarClass_field_0x1544;  // 0x1544
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static unsigned int calcSidebarRect(SidebarClass *p_this);  // x4:ida@0x72ad90
    static unsigned int InitButtons(TabClass *p_this);  // x4:ida@0x6d03a0
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
#pragma pack(pop)
};

} // namespace gamemd
