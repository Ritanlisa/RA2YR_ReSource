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
    void * GetProductionState_ph;  // 0x0
    int __pad_004;  // 0x4
    int u32_8;  // 0x8
    char __pad_C[8];  // 0xC
    int u32_14;  // 0x14
    char __pad_18[4];  // 0x18
    int q01C;  // 0x1C
    char __pad_20[4];  // 0x20
    int u32_24;  // 0x24
    int u32_28;  // 0x28
    int u32_2C;  // 0x2C
    TechnoClass * ptr_30;  // 0x30
    int __pad_034;  // 0x34
    int u32_38;  // 0x38
    int q03C;  // 0x3C
    char __pad_40[20];  // 0x40
    int u32_54;  // 0x54
    int q058;  // 0x58
    int q05C;  // 0x5C
    int q060;  // 0x60
    int q064;  // 0x64
    int q068;  // 0x68
    int q06C;  // 0x6C
    int u32_70;  // 0x70
    char __pad_74[12];  // 0x74
    int q080;  // 0x80
    unsigned int LevelAndPassability;  // 0x84
    unsigned int __pad_088;  // 0x88
    char __pad_8C[12];  // 0x8C
    int q098;  // 0x98
    char __pad_9C[16];  // 0x9C
    int q0AC;  // 0xAC
    char __pad_B0[4];  // 0xB0
    int q0B4;  // 0xB4
    char __pad_B8[4];  // 0xB8
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
    int q188;  // 0x188
    int q18C;  // 0x18C
    int q190;  // 0x190
    char __pad_194[4];  // 0x194
    char __pad_198[144];  // 0x198
    int q228;  // 0x228
    int q22C;  // 0x22C
    char __pad_230[40];  // 0x230
    int q258;  // 0x258
    char __pad_25C[54];  // 0x25C
    unsigned char MapCoordBounds;  // 0x292
    char __pad_293[3];  // 0x293
    unsigned char __pad_296;  // 0x296
    char __pad_297[89];  // 0x297
    int q2F0;  // 0x2F0
    char __pad_2F4[556];  // 0x2F4
    int q520;  // 0x520
    char __pad_524[4];  // 0x524
    char __pad_528[472];  // 0x528
    int q700;  // 0x700
    char __pad_704[1482];  // 0x704
    char SidebarClass_field_0xCCE[4];  // 0xCCE
    char __pad_CD2[960];  // 0xCD2
    char __pad_1092[4];  // 0x1092
    char __pad_1096[482];  // 0x1096
    unsigned int FoundationTypePixels;  // 0x1278
    unsigned char __pad_127C;  // 0x127C
    char __pad_127D[469];  // 0x127D
    char __pad_1452[4];  // 0x1452
    char __pad_1456[50];  // 0x1456
    unsigned int RadarSizeFactor;  // 0x1488
    unsigned char __pad_148C;  // 0x148C
    char __pad_148D[75];  // 0x148D
    unsigned int IsAvailableNow;  // 0x14D8
    unsigned char __pad_14DC;  // 0x14DC
    char __pad_14DD[103];  // 0x14DD
    int q1544;  // 0x1544
    char __pad_1548[12020];  // 0x1548
    unsigned char u8_443C;  // 0x443C
    char __pad_443D[3927];  // 0x443D
    unsigned int u32_5394;  // 0x5394
    unsigned int u32_5398;  // 0x5398
    unsigned int u32_539C;  // 0x539C
    unsigned int u32_53A0;  // 0x53A0
    unsigned char u8_53A4;  // 0x53A4
    unsigned char u8_53A5;  // 0x53A5
    unsigned char u8_53A6;  // 0x53A6
    unsigned char u32_53A7;  // 0x53A7
    unsigned char u8_53A8;  // 0x53A8
    char __pad_53A9[3];  // 0x53A9
    unsigned int u32_53AC;  // 0x53AC
    char __pad_53B0[32];  // 0x53B0
    unsigned char u8_53D0;  // 0x53D0
    unsigned char u8_53D1;  // 0x53D1
    unsigned char u8_53D2;  // 0x53D2
    unsigned char u8_53D3;  // 0x53D3
    unsigned char u8_53D4;  // 0x53D4
    char __pad_53D5[3];  // 0x53D5
    unsigned char u8_53D8;  // 0x53D8
    char __pad_53D9[307];  // 0x53D9
    unsigned char u8_550C;  // 0x550C
    char __pad_550D[3];  // 0x550D
    unsigned int u32_5510;  // 0x5510
    unsigned char u8_5514;  // 0x5514
    unsigned char u8_5515;  // 0x5515
    char __pad_5516[2];  // 0x5516
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
};

} // namespace gamemd
