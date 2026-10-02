// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct AbstractClass;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct Coord;  // fix_fwd_type_supply
struct CampaignClass;  // fix_fwd_type_supply
struct ObjectClass;  // fix_fwd_type_supply
struct HouseClass;  // fix_fwd_type_supply
struct AbstractTypeClass;  // fix_fwd_type_supply
struct ParticleSystemClass;  // fix_fwd_type_supply
struct BuildingTypeClass;  // fix_fwd_type_supply
struct AudioController;  // fix_fwd_type_supply
struct TechnoClass;  // fix_fwd_type_supply
struct BombClass;  // fix_fwd_type_supply
struct INIClass;  // fix_fwd_type_supply
struct TechnoTypeClass;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply

struct MapClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* q004;  // 0x4
    void* q008;  // 0x8
    void* q00C;  // 0xC
    void* IsAllocated;  // 0xD
    void* q010;  // 0x10
    bool IsInitialized;  // 0x12
    void* q014;  // 0x14
    int Count;  // 0x16
    unsigned int q018;  // 0x18
    unsigned int q01A;  // 0x1A
    unsigned int q01C;  // 0x1C
    bool q01D;  // 0x1D
    unsigned int CapacityIncrement;  // 0x20
    unsigned int outBuffer;  // 0x24
    void* q028;  // 0x28
    bool q02B;  // 0x2B
    void* q02C;  // 0x2C
    unsigned int q030;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int q033;  // 0x33
    unsigned int MovementZones;  // 0x34
    unsigned int q038;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    unsigned int q03C;  // 0x3C
    unsigned int q03D;  // 0x3D
    unsigned int q040;  // 0x40
    bool q042;  // 0x42
    unsigned int q044;  // 0x44
    unsigned char q047;  // 0x47
    void* q048;  // 0x48
    bool q04A;  // 0x4A
    AbstractClass* q04C;  // 0x4C
    unsigned char q04F;  // 0x4F
    DynamicVector * ptr_50;  // 0x50
    void* q054;  // 0x54
    MapClass* q058;  // 0x58
    unsigned char q05C;  // 0x5C
    unsigned int q05D;  // 0x5D
    unsigned int q060;  // 0x60
    unsigned int q064;  // 0x64
    void* somecount_4C;  // 0x68
    unsigned int ZoneConnections;  // 0x6C
    void* q070;  // 0x70
    unsigned char q074;  // 0x74
    unsigned char q078;  // 0x78
    unsigned int u32_7C;  // 0x7C
    DynamicVector * q080;  // 0x80
    unsigned int LevelAndPassability;  // 0x84
    unsigned int ValidMapCellCount;  // 0x88
    unsigned int LevelAndPassabilityStruct2pointer_70;  // 0x8C
    unsigned char q090;  // 0x90
    Coord* q09C;  // 0x9C
    CampaignClass* q0A4;  // 0xA4
    unsigned int q0A7;  // 0xA7
    unsigned int q0A8;  // 0xA8
    unsigned char q0A9;  // 0xA9
    unsigned char q0AA;  // 0xAA
    unsigned int q0AB;  // 0xAB
    bool q0AD;  // 0xAD
    unsigned char q0AE;  // 0xAE
    unsigned int q0AF;  // 0xAF
    unsigned int q0B0;  // 0xB0
    unsigned int q0B1;  // 0xB1
    unsigned int q0B2;  // 0xB2
    unsigned int q0B3;  // 0xB3
    unsigned int q0B4;  // 0xB4
    unsigned int q0B5;  // 0xB5
    unsigned int q0B6;  // 0xB6
    unsigned char q0B7;  // 0xB7
    void* q0B8;  // 0xB8
    unsigned char q0B9;  // 0xB9
    char q0BC[4];  // 0xBC
    unsigned char q0C0;  // 0xC0
    unsigned int q0C3;  // 0xC3
    unsigned char q0C7;  // 0xC7
    void* pD4;  // regen name
    void* q0D8;  // 0xD8
    MapClass* q0DC;  // 0xDC
    unsigned char q0E0;  // 0xE0
    unsigned int q0E1;  // 0xE1
    ObjectClass* q0E4;  // 0xE4
    unsigned char q0E5;  // 0xE5
    void* q0EC;  // 0xEC
    unsigned char q0F0;  // 0xF0
    void* q0F4;  // 0xF4
    void* q0F7;  // 0xF7
    unsigned int q0F8;  // 0xF8
    unsigned int q0F9;  // 0xF9
    unsigned char q0FB;  // 0xFB
    void* q0FC;  // 0xFC
    void* q100;  // 0x100
    unsigned int q104;  // 0x104
    void* q108;  // 0x108
    unsigned int q10C;  // 0x10C
    unsigned int CellIterator_NextY;  // 0x110
    unsigned int CellIterator_CurrentY;  // 0x114
    unsigned int CellIterator_NextCell;  // 0x118
    unsigned char u8_11A;  // 0x11A
    unsigned char u8_11B;  // 0x11B
    unsigned int ZoneIterator_X;  // 0x11C
    unsigned int ZoneIterator_Y;  // 0x120
    unsigned int q124;  // 0x124
    void* q128;  // 0x128
    unsigned int u32_12C;  // 0x12C
    void* q130;  // 0x130
    unsigned int q134;  // 0x134
    unsigned int MaxLevel;  // 0x138
    void* q13C;  // 0x13C
    MapClass* q140;  // 0x140
    unsigned char q144;  // 0x144
    unsigned int q145;  // 0x145
    unsigned int Crates;  // 0x148
    unsigned char q14C;  // 0x14C
    HouseClass* q150;  // 0x150
    unsigned int q154;  // 0x154
    unsigned char q158;  // 0x158
    Coord* q15C;  // 0x15C
    AbstractClass* q160;  // 0x160
    unsigned int q164;  // 0x164
    unsigned int q168;  // 0x168
    bool q16B;  // 0x16B
    void* q16C;  // 0x16C
    unsigned char q16D;  // 0x16D
    unsigned int q16F;  // 0x16F
    unsigned char q170;  // 0x170
    unsigned char q174;  // 0x174
    unsigned int q178;  // 0x178
    unsigned int q17C;  // 0x17C
    unsigned int q180;  // 0x180
    void* q184;  // 0x184
    char q188[4];  // 0x188
    unsigned char q18C;  // 0x18C
    unsigned char q190;  // 0x190
    unsigned int q194;  // 0x194
    unsigned char q19B;  // 0x19B
    bool q1A1;  // 0x1A1
    unsigned int q1A2;  // 0x1A2
    unsigned int q1A5;  // 0x1A5
    unsigned int q1A7;  // 0x1A7
    unsigned char q1AB;  // 0x1AB
    unsigned int q1B1;  // 0x1B1
    unsigned char q1B5;  // 0x1B5
    unsigned int u32_1B8;  // 0x1B8
    unsigned int u32_1BC;  // 0x1BC
    unsigned int u32_1C4;  // 0x1C4
    AbstractTypeClass* q1D4;  // 0x1D4
    AbstractTypeClass* q1E0;  // 0x1E0
    unsigned char u8_1F5;  // 0x1F5
    unsigned int q200;  // 0x200
    int q202;  // 0x202
    unsigned char q206;  // 0x206
    unsigned int CellStructs1;  // 0x212
    AbstractClass* q21C;  // 0x21C
    unsigned int q220;  // 0x220
    unsigned char q224;  // 0x224
    ObjectClass* q228;  // 0x228
    unsigned int u32_230;  // 0x230
    unsigned int MapRect;  // 0x236
    unsigned char q240;  // 0x240
    unsigned int q244;  // 0x244
    unsigned char q245;  // 0x245
    unsigned int q248;  // 0x248
    unsigned int VisibleRect;  // 0x252
    bool q258;  // 0x258
    unsigned int q260;  // 0x260
    unsigned int q264;  // 0x264
    unsigned int q268;  // 0x268
    unsigned int q274;  // 0x274
    unsigned char q278;  // 0x278
    unsigned int q280;  // 0x280
    unsigned int q284;  // 0x284
    unsigned int q288;  // 0x288
    unsigned int MapCoordBounds;  // 0x292
    AbstractClass* q294;  // 0x294
    unsigned char q298;  // 0x298
    void* q2A4;  // 0x2A4
    unsigned char q2A8;  // 0x2A8
    AbstractClass* q2B4;  // 0x2B4
    unsigned int q2E4;  // 0x2E4
    unsigned int q2E8;  // 0x2E8
    unsigned char q2EC;  // 0x2EC
    unsigned int u32_2F4;  // 0x2F4
    ObjectClass* q2F5;  // 0x2F5
    unsigned char q2F9;  // 0x2F9
    unsigned int q300;  // 0x300
    void* q304;  // 0x304
    void* q308;  // 0x308
    unsigned char q30C;  // 0x30C
    unsigned int q310;  // 0x310
    unsigned int MaxWidth;  // 0x316
    unsigned int MaxHeight;  // 0x320
    unsigned char q324;  // 0x324
    unsigned int q328;  // 0x328
    unsigned char q338;  // 0x338
    unsigned int q340;  // 0x340
    unsigned char q344;  // 0x344
    Coord* q348;  // 0x348
    unsigned int u32_350;  // 0x350
    unsigned int q360;  // 0x360
    void* q364;  // 0x364
    unsigned char q368;  // 0x368
    unsigned int q370;  // 0x370
    unsigned int q374;  // 0x374
    unsigned int q380;  // 0x380
    unsigned int q384;  // 0x384
    ParticleSystemClass* q388;  // 0x388
    char q3BC[4];  // 0x3BC
    unsigned char q3C0;  // 0x3C0
    unsigned char q3D7;  // 0x3D7
    unsigned char q3DB;  // 0x3DB
    unsigned char q400;  // 0x400
    unsigned int q404;  // 0x404
    unsigned int q418;  // 0x418
    HouseClass* q42C;  // 0x42C
    unsigned int q440;  // 0x440
    unsigned int q444;  // 0x444
    unsigned int q448;  // 0x448
    unsigned int q464;  // 0x464
    AbstractTypeClass* q468;  // 0x468
    AbstractTypeClass* q480;  // 0x480
    unsigned int q487;  // 0x487
    char q488[4];  // 0x488
    unsigned char q48C;  // 0x48C
    unsigned int q48F;  // 0x48F
    unsigned char q493;  // 0x493
    unsigned int q496;  // 0x496
    unsigned char q49A;  // 0x49A
    unsigned int q49D;  // 0x49D
    unsigned char q4A1;  // 0x4A1
    BuildingTypeClass* q508;  // 0x508
    int q514;  // 0x514
    unsigned char q518;  // 0x518
    BuildingTypeClass* q520;  // 0x520
    unsigned int q52B;  // 0x52B
    void* q52C;  // 0x52C
    unsigned int q52D;  // 0x52D
    unsigned int q530;  // 0x530
    unsigned int q534;  // 0x534
    unsigned char q538;  // 0x538
    AbstractClass* q540;  // 0x540
    unsigned int q544;  // 0x544
    unsigned char q548;  // 0x548
    unsigned char q54C;  // 0x54C
    unsigned int q560;  // 0x560
    unsigned char q564;  // 0x564
    unsigned int q580;  // 0x580
    unsigned int q584;  // 0x584
    unsigned int q588;  // 0x588
    unsigned int u32_58C;  // 0x58C
    unsigned char q590;  // 0x590
    unsigned int q594;  // 0x594
    unsigned int q598;  // 0x598
    unsigned char q59C;  // 0x59C
    bool q600;  // 0x600
    unsigned char q604;  // 0x604
    unsigned int q608;  // 0x608
    unsigned char q60C;  // 0x60C
    unsigned char q610;  // 0x610
    unsigned char q614;  // 0x614
    unsigned int q620;  // 0x620
    unsigned char q624;  // 0x624
    unsigned int q628;  // 0x628
    unsigned char q62C;  // 0x62C
    unsigned int q630;  // 0x630
    unsigned char q634;  // 0x634
    unsigned int q640;  // 0x640
    unsigned int q644;  // 0x644
    unsigned int q648;  // 0x648
    unsigned char q64C;  // 0x64C
    unsigned char q650;  // 0x650
    unsigned char q654;  // 0x654
    unsigned int q658;  // 0x658
    unsigned char q65C;  // 0x65C
    AbstractClass* q660;  // 0x660
    unsigned char q664;  // 0x664
    unsigned char q668;  // 0x668
    unsigned char q680;  // 0x680
    char q684;  // 0x684
    AudioController* q68C;  // 0x68C
    unsigned char q690;  // 0x690
    unsigned int u32_6F0;  // 0x6F0
    unsigned int u32_6F4;  // 0x6F4
    unsigned char q6F8;  // 0x6F8
    unsigned int q704;  // 0x704
    unsigned int u32_708;  // 0x708
    unsigned int u32_70C;  // 0x70C
    unsigned int q710;  // 0x710
    unsigned int u32_714;  // 0x714
    TechnoClass* q718;  // 0x718
    unsigned char q71C;  // 0x71C
    unsigned int q728;  // 0x728
    unsigned char q72C;  // 0x72C
    unsigned int q740;  // 0x740
    unsigned int q744;  // 0x744
    unsigned char q748;  // 0x748
    unsigned char q74C;  // 0x74C
    unsigned int q760;  // 0x760
    unsigned char q764;  // 0x764
    unsigned int q768;  // 0x768
    unsigned char q76C;  // 0x76C
    unsigned int q774;  // 0x774
    unsigned char q778;  // 0x778
    unsigned char q780;  // 0x780
    unsigned int q784;  // 0x784
    unsigned char q788;  // 0x788
    unsigned int q790;  // 0x790
    unsigned char q794;  // 0x794
    unsigned char q798;  // 0x798
    unsigned char q79C;  // 0x79C
    unsigned int q800;  // 0x800
    unsigned char q804;  // 0x804
    unsigned int q808;  // 0x808
    unsigned char q80C;  // 0x80C
    unsigned char q818;  // 0x818
    unsigned char q81C;  // 0x81C
    unsigned char q824;  // 0x824
    unsigned int q828;  // 0x828
    unsigned char q82C;  // 0x82C
    unsigned char q830;  // 0x830
    Coord* q834;  // 0x834
    unsigned char q838;  // 0x838
    Coord* q840;  // 0x840
    unsigned char q844;  // 0x844
    unsigned int q848;  // 0x848
    unsigned char q84C;  // 0x84C
    AbstractClass* q850;  // 0x850
    unsigned int q854;  // 0x854
    unsigned char q858;  // 0x858
    unsigned char q85C;  // 0x85C
    unsigned char q860;  // 0x860
    unsigned int q864;  // 0x864
    void* q868;  // 0x868
    unsigned char q86C;  // 0x86C
    unsigned int q880;  // 0x880
    unsigned int q884;  // 0x884
    unsigned char q888;  // 0x888
    unsigned int q900;  // 0x900
    ParticleSystemClass* q904;  // 0x904
    unsigned char q908;  // 0x908
    unsigned char q90C;  // 0x90C
    unsigned char q910;  // 0x910
    char q914[4];  // 0x914
    unsigned char q918;  // 0x918
    unsigned char q91C;  // 0x91C
    unsigned int q928;  // 0x928
    unsigned char q92C;  // 0x92C
    unsigned char q930;  // 0x930
    unsigned char q934;  // 0x934
    unsigned char q960;  // 0x960
    unsigned char q964;  // 0x964
    unsigned int q968;  // 0x968
    unsigned char q96C;  // 0x96C
    unsigned int q984;  // 0x984
    unsigned char q988;  // 0x988
    unsigned int q9C7;  // 0x9C7
    unsigned char q9C8;  // 0x9C8
    unsigned char q9CC;  // 0x9CC
    Coord* qBB8;  // 0xBB8
    Coord* qBBC;  // 0xBBC
    void* qD7C;  // 0xD7C
    unsigned char qD80;  // 0xD80
    DynamicVector* qDF8;  // 0xDF8
    unsigned char q1024;  // 0x1024
    unsigned int q1028;  // 0x1028
    unsigned int q1048;  // 0x1048
    unsigned int q1058;  // 0x1058
    unsigned int q1064;  // 0x1064
    HouseClass* q1068;  // 0x1068
    unsigned int q1078;  // 0x1078
    unsigned int q1088;  // 0x1088
    unsigned int q1110;  // 0x1110
    unsigned int q1124;  // 0x1124
    AbstractTypeClass* q1128;  // 0x1128
    unsigned int q1158;  // 0x1158
    void* p115C;  // regen name
    void* q1160;  // 0x1160
    MapClass* q1164;  // 0x1164
    unsigned char q1168;  // 0x1168
    unsigned int q1169;  // 0x1169
    MapClass* q116C;  // 0x116C
    unsigned char q1170;  // 0x1170
    unsigned int q1174;  // 0x1174
    unsigned char q1178;  // 0x1178
    unsigned int q117C;  // 0x117C
    unsigned char q1180;  // 0x1180
    void* q119C;  // 0x119C
    void* q11A0;  // 0x11A0
    unsigned char q11A4;  // 0x11A4
    unsigned int q11A8;  // 0x11A8
    unsigned char q11AC;  // 0x11AC
    unsigned int q11B0;  // 0x11B0
    unsigned int q11B1;  // 0x11B1
    unsigned int q11B2;  // 0x11B2
    unsigned int q11B3;  // 0x11B3
    unsigned int q11B4;  // 0x11B4
    unsigned char q11B8;  // 0x11B8
    void* q1258;  // 0x1258
    unsigned char q125C;  // 0x125C
    BuildingTypeClass* q1288;  // 0x1288
    unsigned int q1298;  // 0x1298
    int q1300;  // 0x1300
    unsigned char q1304;  // 0x1304
    void* q1324;  // 0x1324
    unsigned int q1328;  // 0x1328
    unsigned int q1330;  // 0x1330
    AbstractClass* q1344;  // 0x1344
    unsigned int q1348;  // 0x1348
    unsigned char q1398;  // 0x1398
    unsigned int q1400;  // 0x1400
    unsigned int q1404;  // 0x1404
    unsigned int q1408;  // 0x1408
    unsigned int q1420;  // 0x1420
    unsigned int q1428;  // 0x1428
    unsigned int q1430;  // 0x1430
    unsigned int q1444;  // 0x1444
    int q1464;  // 0x1464
    unsigned int q14EB;  // 0x14EB
    void* q14EC;  // 0x14EC
    unsigned int q14ED;  // 0x14ED
    unsigned int q14EE;  // 0x14EE
    unsigned int q14EF;  // 0x14EF
    unsigned int q14F3;  // 0x14F3
    unsigned char q14F7;  // 0x14F7
    int q1524;  // 0x1524
    unsigned int q1525;  // 0x1525
    unsigned char q1529;  // 0x1529
    unsigned char q1540;  // 0x1540
    unsigned int q1544;  // 0x1544
    unsigned char q1548;  // 0x1548
    unsigned int q1554;  // 0x1554
    unsigned int q1558;  // 0x1558
    unsigned int q1568;  // 0x1568
    unsigned int q1574;  // 0x1574
    unsigned char q1580;  // 0x1580
    unsigned int q1584;  // 0x1584
    char q1588[4];  // 0x1588
    unsigned int q158B;  // 0x158B
    unsigned char q158F;  // 0x158F
    unsigned int q1590;  // 0x1590
    unsigned int q15E2;  // 0x15E2
    unsigned char q15E6;  // 0x15E6
    unsigned int q1600;  // 0x1600
    unsigned int q1604;  // 0x1604
    unsigned int q1608;  // 0x1608
    unsigned char q1618;  // 0x1618
    unsigned int q1624;  // 0x1624
    unsigned char q1628;  // 0x1628
    unsigned int q1634;  // 0x1634
    unsigned char q1638;  // 0x1638
    void* q1654;  // 0x1654
    unsigned char q1658;  // 0x1658
    unsigned int q1660;  // 0x1660
    unsigned char q1664;  // 0x1664
    char q1668;  // 0x1668
    void* q16C0;  // 0x16C0
    unsigned int Activated;
    unsigned int MapClass_field_0x0;
    unsigned int MapClass_field_0x13C;
    unsigned int MapClass_field_0x14;
    unsigned int MapClass_field_0x28;
    unsigned int MapClass_field_0x2C;
    unsigned int MapClass_field_0xF4;
    unsigned int __pad_1170;
    unsigned int *__pad_11A4;
    unsigned int *__pad_18;
    unsigned int *__pad_298;
    unsigned int *__pad_30;
    unsigned int *__pad_5C;
    unsigned int __pad_F8;
    unsigned int q01C6;
    unsigned int q0086;
    unsigned int q0088;
    unsigned int q0308;
    unsigned int q0585;
    unsigned int q0805;
    unsigned int u32_6F47;
    unsigned int q0D4;
    unsigned int q115C;
// --- flat members (END) ---
    AbstractClass * * AllocateMapDataBuffer(int a2, int * a3);
    BombClass * * DecompressCellData(MouseClass * aP1, void *a2);
    INIClass * * SaveCellTagsToINI(char * a2);
    MapClass * * GrowLayer(int a2, int a3, int a4);
    MapClass * * RemoveTriggerRef(AbstractClass * aP1, int a3);
    MapClass * Destru_vt04(char a2);
    MapClass *  SetObstruction(int16_t * a0, MapClass * aP1);
    ObjectClass * * CheckCellsBuildable(IUnknown * aP0, IUnknown * aP1, IUnknown * aP2, IUnknown * aP3, IUnknown * aP4, IUnknown * aP5, int aP6, IUnknown * aP7, IUnknown * aP8);
    ObjectClass * * LoadFileData(void *a1);
    TechnoTypeClass * * PostProcessReveal(char a2);
    VectorClass_flat * * Destru_vt05();
    VectorClass_flat * InitCellVe_vt00(char a2);
    char InitCellVe_vt01(int a2);
    char InitCellVe_vt02(int a2, unsigned int * a3);
    char  RevealCell(MouseClass * aP1);
    char isCellAccessible(int a2);
    char loadTheaterINI(INIClass * aP1, char * a2, int a4);
    int AllocateCellDataBuffer(int a2, char * a3);
    int BuildTileConnectivityGraph(MapClass * aP1, IUnknown * aP2, IUnknown * aP3);
    int CalcVisibleCellRange(int a1, int a2, VectorClass_flat * aP2, int * a3);
    int Cleanup(int a1, int a2);
    int ClearCellOverlayFlag();
    int ClearRegions(IUnknown * aP1);
    int FindPassableNeighbor();
    int  FindSubzoneConnectionIndex(unsigned short * a2);
    int FreeAllCells(void *a1);
    int GetScrollMode();
    int GetTileDataField14(MapResourceClass * aP0);
    int GetTileIndex(int16_t *aP1, int aP2, char aP3);
    int  InitCellVe_vt04(unsigned int * a2);
    int InitCellVe_vt06(int a2);
    int InitCellVector();
    int InitializeTileData(MapClass * aP1);
    int IsAreaFree(int *a2, int a3);
    int IsCellPassable(int a1, int a2);
    int LoadTerrainData(MapClass * aP1);
    int MarkForRedraw(int a2, void *a2_2);
    int ProcessFogTransition();
    int ProcessRegion();
    int ProcessTile();
    int ProcessVisibilityFlags();
    int RemoveCellReference(int a2);
    int RevealArea0(IUnknown * aP1, MouseClass * aP2, HouseClass * aP3, MouseClass * aP4, HouseClass * aP5, char a7, char a8, char a9, void *a9_2);
    int ScrollOnce(AbstractClass * aP1);
    int SetCellFlagsAlongPath(unsigned short *aP1, unsigned short *a2);
    int SetCellOverlayFlag();
    int SetScrollMode(int aP1);
    int ToggleZoom(int a2);
    int TransitionCliff(MouseClass * aP0);
    int  TriggerEVA(IUnknown * aP0);
    int UnselectAll_ClearLimboLaunchers(void *a1);
    int UpdateLightingPostProcess();
    int isCellShrouded(uint16_t a2);
    int isLocationShrouded(uint16_t a2);
    int updatePathfindingGrid(unsigned int * a2);
    unsigned int * AllocArrays();
    unsigned int * BuildSubzones();
    unsigned int * FastCellLookup(short * a2, int a3, char a4);
    unsigned int * FindPlacementCellsAlt(IUnknown * aP1, IUnknown * aP2, void *a3);
    unsigned int * InitAllCells();
    unsigned int * SpiralSearch(void *a1);
    unsigned int * allocateMapBuffers();
    unsigned int InitCellVe_vt05(int a2);
    unsigned int TransformCoordToScreen(int a2, unsigned int * a3);
    unsigned int initCellVectors(int a2);
    unsigned int initSubzoneData(int a2);
    unsigned int validateCellCoord(int a2);
    void * ClearShroud(HouseClass * aP1);
    void ApplyOverlayReveal(MouseClass * aP1, BuildingClass * aP2);
    void Destru_vt07();
    void FillRevealBuffer(MouseClass * aP1, IUnknown * aP2);
    void IncrementRedrawCounter();
    void InitCellVe_vt03();
    void allocateCellArrays();
    void checkCellBounds();
    void* ApplyTerrainDamage(IUnknown *a1, IUnknown aP1);
    void* Destruct(void *a1, void *a2);
    void*  InitTileData(MouseClass * aP0, int aP3);
    int RevealArea2(int *a1, int a2, int a3, int a4);  // 0x567da0
};

} // namespace gamemd
