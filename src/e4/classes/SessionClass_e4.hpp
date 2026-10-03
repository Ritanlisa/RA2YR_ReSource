// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

// G42.33: under GAMEMD_TREE_UNIVERSE the e4 fwd for AbstractClass is
// suppressed (tree owns it as ra2::game::AbstractClass). Bridge the name so
// the pointer members below resolve; guarded to keep non-tree TUs on the
// e4-local fwd.
#ifdef GAMEMD_TREE_UNIVERSE
namespace ra2 { namespace game { class AbstractClass; } }
namespace gamemd {
class ReferenceCounted;  // G42.36 fwd supply
class Constructor;  // G42.36 fwd supply
class DtorWithDelete;  // G42.36 fwd supply
class TechnoTypeClass;  // G42.36 fwd supply
class SaveObject;  // G42.36 fwd supply
class LoadObject;  // G42.36 fwd supply
class IUnknown;  // G42.36 fwd supply
class CheckState;  // G42.36 fwd supply
class Unlink;  // G42.36 fwd supply
class RemoveObjectArray;  // G42.36 fwd supply
class CalculateObjectPlacementPosition;  // G42.36 fwd supply
class Block;  // G42.36 fwd supply
class DrawObject;  // G42.36 fwd supply
class FindNearestObjectAtCell;  // G42.36 fwd supply
class IsAlliedWithObjectSimpleHouse;  // G42.36 fwd supply
class TechnoClass;  // G42.36 fwd supply
class FindObjectCell;  // G42.36 fwd supply
#ifndef GAMEMD_USING_AbstractClass
#define GAMEMD_USING_AbstractClass
using ::ra2::game::AbstractClass;
#endif
} // namespace gamemd
#endif // GAMEMD_TREE_UNIVERSE

namespace gamemd {
struct MPGameModeClass;  // fix_fwd_type_supply
struct CampaignClass;  // fix_fwd_type_supply
struct RandomStruct;  // fix_fwd_type_supply
struct IPXManagerClass;  // fix_fwd_type_supply
struct Coord;  // fix_fwd_type_supply
struct TypeList_flat;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct MixFileClass;  // fix_fwd_type_supply

struct SessionClass {
// --- flat members (BEGIN) ---
    char GameMode[4];  // 0x0
    MPGameModeClass* MPGameMode;  // 0x4
    unsigned int SessionClass_field_08;  // 0x8
    unsigned int SessionClass_field_0C;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned int SessionClass_field_10;  // 0x10
    unsigned int unknown_0C;  // 0x12
    unsigned int SessionClass_field_14;  // 0x14
    unsigned int unknown_10;  // 0x16
    char Config[28];  // 0x18
    unsigned char u8_19;  // 0x19
    unsigned char u8_1A;  // 0x1A
    unsigned int u32_1C;  // 0x1C
    unsigned int u32_20;  // 0x20
    void* q024;  // 0x24
    void * ptr_28;  // 0x28
    unsigned int q029;  // 0x29
    char q02A[4];  // 0x2A
    void* q02C;  // 0x2C
    void* q030;  // 0x30
    unsigned char u8_31;  // 0x31
    unsigned int UniqueID;  // 0x34
    char q035[4];  // 0x35
    char Handle;  // 0x38
    unsigned char u8_39;  // 0x39
    unsigned int u32_3C;  // 0x3C
    void * q040;  // 0x40
    CampaignClass * ptr_44;  // 0x44
    unsigned int u32_48;  // 0x48
    unsigned int u32_49;  // 0x49
    unsigned int u32_4B;  // 0x4B
    char PlayerColor[4];  // 0x4C
    unsigned int u32_4F;  // 0x4F
    unsigned int u32_50;  // 0x50
    void* ptr_53;  // 0x53
    unsigned int u32_54;  // 0x54
    CampaignClass* q058;  // 0x58
    unsigned int u32_5B;  // 0x5B
    unsigned char q05C;  // 0x5C
    unsigned int u32_5F;  // 0x5F
    unsigned int q060;  // 0x60
    void* ptr_63;  // 0x63
    unsigned int u32_64;  // 0x64
    CampaignClass * ptr_67;  // 0x67
    CampaignClass * q068;  // 0x68
    unsigned char q06B;  // 0x6B
    unsigned int u32_70;  // 0x70
    unsigned char q074;  // 0x74
    unsigned int u32_80;  // 0x80
    unsigned int u32_84;  // 0x84
    AbstractClass * ptr_57;  // 0x87
    unsigned int u32_88;  // 0x88
    unsigned char q08C;  // 0x8C
    unsigned int u32_90;  // 0x90
    unsigned char q094;  // 0x94
    unsigned char q098;  // 0x98
    unsigned int u32_A8;  // 0xA8
    RandomStruct* q0AC;  // 0xAC
    bool q0AD;  // 0xAD
    unsigned int q0AF;  // 0xAF
    unsigned int q0B1;  // 0xB1
    unsigned char q0B5;  // 0xB5
    unsigned int u32_D0;  // 0xD0
    unsigned int u32_D4;  // 0xD4
    unsigned int u32_D8;  // 0xD8
    unsigned int u32_E0;  // 0xE0
    char q0E4[4];  // 0xE4
    unsigned int q0E5;  // 0xE5
    unsigned int q0E6;  // 0xE6
    unsigned int q0E7;  // 0xE7
    char q0E8[4];  // 0xE8
    unsigned char q0EC;  // 0xEC
    unsigned int q100;  // 0x100
    CampaignClass * q104;  // 0x104
    unsigned int u32_108;  // 0x108
    unsigned int u32_110;  // 0x110
    unsigned int q114;  // 0x114
    int q118;  // 0x118
    unsigned int q128;  // 0x128
    unsigned int q130;  // 0x130
    char q134;  // 0x134
    unsigned char q140;  // 0x140
    unsigned int q144;  // 0x144
    char q148[4];  // 0x148
    unsigned char q14C;  // 0x14C
    unsigned int q150;  // 0x150
    unsigned char q154;  // 0x154
    unsigned char u8_15B;  // 0x15B
    unsigned int u32_15C;  // 0x15C
    unsigned int SessionClass_field_160;  // 0x160
    unsigned int SessionClass_field_164;  // 0x164
    unsigned int SessionClass_field_168;  // 0x168
    unsigned int SessionClass_field_16C;  // 0x16C
    unsigned int SessionClass_field_170;  // 0x170
    char idxSide[4];  // 0x174
    char idxSide2[4];  // 0x178
    unsigned char u8_17B;  // 0x17B
    char Color[4];  // 0x17C
    char Color2[4];  // 0x180
    char Side[4];  // 0x184
    char Side2[4];  // 0x188
    char SkirmishPreferences[124];  // 0x18C
    unsigned int u32_190;  // 0x190
    unsigned int u32_194;  // 0x194
    unsigned int u32_198;  // 0x198
    unsigned int u32_19C;  // 0x19C
    char q1A0[4];  // 0x1A0
    unsigned int q1A1;  // 0x1A1
    unsigned int q1A2;  // 0x1A2
    unsigned int q1A3;  // 0x1A3
    unsigned char q1A4;  // 0x1A4
    unsigned int u32_1B4;  // 0x1B4
    unsigned int u32_1B8;  // 0x1B8
    void* q200;  // 0x200
    char LANPreferences[124];  // 0x208
    unsigned int u32_20C;  // 0x20C
    unsigned int u32_210;  // 0x210
    unsigned int u32_214;  // 0x214
    unsigned int u32_218;  // 0x218
    AbstractClass* q21C;  // 0x21C
    unsigned int q21D;  // 0x21D
    unsigned int q21E;  // 0x21E
    unsigned int q21F;  // 0x21F
    unsigned char q220;  // 0x220
    unsigned int q224;  // 0x224
    char q228[4];  // 0x228
    unsigned int q230;  // 0x230
    char q258[4];  // 0x258
    CampaignClass * q260;  // 0x260
    unsigned int q264;  // 0x264
    unsigned int q274;  // 0x274
    int q280;  // 0x280
    char WOLPreferences[124];  // 0x284
    unsigned int u32_288;  // 0x288
    unsigned int u32_28C;  // 0x28C
    unsigned int u32_290;  // 0x290
    unsigned int u32_294;  // 0x294
    void* q298;  // 0x298
    bool q299;  // 0x299
    void* q29A;  // 0x29A
    bool q29B;  // 0x29B
    unsigned char q29C;  // 0x29C
    unsigned int u32_2A4;  // 0x2A4
    unsigned int u32_2A8;  // 0x2A8
    unsigned int u32_2B0;  // 0x2B0
    unsigned int u32_2B4;  // 0x2B4
    unsigned int u16_2B8;  // 0x2B8
    unsigned int u32_2BC;  // 0x2BC
    unsigned int u32_2C0;  // 0x2C0
    unsigned int u32_2C4;  // 0x2C4
    bool MuteSWLaunches;  // 0x300
    unsigned char SessionClass_field_304;  // 0x304
    bool WOLLimitResolution;  // 0x308
    char LastNickSlot[4];  // 0x30C
    unsigned char SessionClass_field_310;  // 0x310
    unsigned int u32_314;  // 0x314
    unsigned int u32_318;  // 0x318
    unsigned int u32_31C;  // 0x31C
    unsigned char q320;  // 0x320
    unsigned int q324;  // 0x324
    char q328[4];  // 0x328
    unsigned int u32_32C;  // 0x32C
    unsigned int u32_330;  // 0x330
    unsigned int u32_334;  // 0x334
    unsigned int u32_338;  // 0x338
    unsigned char q340;  // 0x340
    unsigned int q348;  // 0x348
    unsigned char q34C;  // 0x34C
    unsigned char q350;  // 0x350
    unsigned int q360;  // 0x360
    unsigned int q364;  // 0x364
    unsigned int q368;  // 0x368
    unsigned char q36C;  // 0x36C
    RandomStruct* q370;  // 0x370
    unsigned int q374;  // 0x374
    int q380;  // 0x380
    int q384;  // 0x384
    unsigned int q388;  // 0x388
    unsigned char q38C;  // 0x38C
    unsigned int u32_390;  // 0x390
    unsigned int u32_394;  // 0x394
    IPXManagerClass * ptr_398;  // 0x398
    unsigned int u32_39C;  // 0x39C
    unsigned int u32_3A0;  // 0x3A0
    unsigned char q3B4;  // 0x3B4
    unsigned char q3B8;  // 0x3B8
    unsigned char q3BC;  // 0x3BC
    unsigned char q3C0;  // 0x3C0
    unsigned char q3C4;  // 0x3C4
    unsigned char q3C8;  // 0x3C8
    unsigned char q3CC;  // 0x3CC
    unsigned char q3D0;  // 0x3D0
    unsigned char q3D4;  // 0x3D4
    unsigned char q3D8;  // 0x3D8
    unsigned char q3DC;  // 0x3DC
    unsigned char q3E0;  // 0x3E0
    unsigned int q400;  // 0x400
    unsigned char q404;  // 0x404
    unsigned char q408;  // 0x408
    unsigned int u32_40C;  // 0x40C
    unsigned char q410;  // 0x410
    unsigned char q414;  // 0x414
    unsigned int q418;  // 0x418
    unsigned int u32_41C;  // 0x41C
    unsigned int q420;  // 0x420
    unsigned char q424;  // 0x424
    unsigned char q428;  // 0x428
    unsigned char q42C;  // 0x42C
    unsigned char q430;  // 0x430
    unsigned char q434;  // 0x434
    unsigned char q438;  // 0x438
    unsigned int q440;  // 0x440
    unsigned char q444;  // 0x444
    unsigned char q448;  // 0x448
    unsigned char q44C;  // 0x44C
    unsigned char q450;  // 0x450
    unsigned char q454;  // 0x454
    unsigned char q458;  // 0x458
    unsigned char q45C;  // 0x45C
    unsigned char q460;  // 0x460
    unsigned char q464;  // 0x464
    unsigned char q468;  // 0x468
    unsigned char q46C;  // 0x46C
    unsigned char q470;  // 0x470
    unsigned char q474;  // 0x474
    unsigned int u32_4C8;  // 0x4C8
    unsigned char q4CC;  // 0x4CC
    unsigned char q4D0;  // 0x4D0
    unsigned char q4D4;  // 0x4D4
    unsigned int u32_4D8;  // 0x4D8
    unsigned int u32_4DC;  // 0x4DC
    unsigned int u32_4E0;  // 0x4E0
    unsigned char q4E4;  // 0x4E4
    unsigned char q4E8;  // 0x4E8
    unsigned char q4EC;  // 0x4EC
    unsigned char q4F0;  // 0x4F0
    unsigned char q4F4;  // 0x4F4
    unsigned char q4F8;  // 0x4F8
    unsigned char q4FC;  // 0x4FC
    unsigned char q500;  // 0x500
    unsigned char q504;  // 0x504
    unsigned char q508;  // 0x508
    unsigned char q50C;  // 0x50C
    unsigned char q510;  // 0x510
    char q520[4];  // 0x520
    unsigned char q524;  // 0x524
    unsigned int q528;  // 0x528
    unsigned char q52C;  // 0x52C
    unsigned char q530;  // 0x530
    unsigned char q534;  // 0x534
    unsigned char q538;  // 0x538
    unsigned char q53C;  // 0x53C
    AbstractClass* q540;  // 0x540
    unsigned char q544;  // 0x544
    unsigned int q548;  // 0x548
    unsigned char q54C;  // 0x54C
    unsigned char q550;  // 0x550
    unsigned int q560;  // 0x560
    unsigned int q598;  // 0x598
    char q600[4];  // 0x600
    CampaignClass * q608;  // 0x608
    unsigned char q60C;  // 0x60C
    unsigned char q610;  // 0x610
    unsigned int q628;  // 0x628
    unsigned char q62C;  // 0x62C
    unsigned char q630;  // 0x630
    int q640;  // 0x640
    char q644[4];  // 0x644
    unsigned char q648;  // 0x648
    unsigned char q64C;  // 0x64C
    unsigned char q650;  // 0x650
    unsigned char q654;  // 0x654
    unsigned char q658;  // 0x658
    unsigned char q65C;  // 0x65C
    unsigned char q660;  // 0x660
    void* q664;  // 0x664
    unsigned char q668;  // 0x668
    unsigned char q66C;  // 0x66C
    unsigned char q670;  // 0x670
    unsigned char q674;  // 0x674
    unsigned char q678;  // 0x678
    char q67C[4];  // 0x67C
    unsigned int q67D;  // 0x67D
    unsigned int q680;  // 0x680
    unsigned int q688;  // 0x688
    unsigned int q689;  // 0x689
    unsigned int q68A;  // 0x68A
    unsigned int u32_68C;  // 0x68C
    unsigned int u32_690;  // 0x690
    unsigned int u32_694;  // 0x694
    unsigned int u32_698;  // 0x698
    AbstractClass* q69C;  // 0x69C
    unsigned int q69D;  // 0x69D
    unsigned int u32_6A0;  // 0x6A0
    unsigned int u32_6A4;  // 0x6A4
    char ScenarioFilename;  // 0x6A8
    unsigned int u32_6B0;  // 0x6B0
    unsigned int q700;  // 0x700
    unsigned int q704;  // 0x704
    unsigned int q708;  // 0x708
    unsigned int u32_728;  // 0x728
    int q768;  // 0x768
    unsigned int q774;  // 0x774
    int q780;  // 0x780
    unsigned int q784;  // 0x784
    unsigned int q788;  // 0x788
    unsigned int u32_790;  // 0x790
    unsigned char q800;  // 0x800
    unsigned int q804;  // 0x804
    char q808[4];  // 0x808
    unsigned char q818;  // 0x818
    unsigned int q820;  // 0x820
    unsigned int q824;  // 0x824
    unsigned char q838;  // 0x838
    unsigned int q840;  // 0x840
    unsigned char q844;  // 0x844
    unsigned char q848;  // 0x848
    unsigned int u32_84C;  // 0x84C
    unsigned int q850;  // 0x850
    unsigned int q854;  // 0x854
    unsigned char q858;  // 0x858
    unsigned int q864;  // 0x864
    unsigned int q868;  // 0x868
    unsigned int u32_870;  // 0x870
    unsigned int u32_874;  // 0x874
    unsigned int u32_878;  // 0x878
    unsigned int u32_87C;  // 0x87C
    RandomStruct* q880;  // 0x880
    unsigned int q884;  // 0x884
    unsigned char q890;  // 0x890
    unsigned int u32_8A0;  // 0x8A0
    unsigned char SessionClass_field_8AA;  // 0x8AA
    unsigned int u32_8CC;  // 0x8CC
    unsigned int q8D0;  // 0x8D0
    unsigned int u32_8D4;  // 0x8D4
    unsigned int u32_8F0;  // 0x8F0
    unsigned int u32_8F4;  // 0x8F4
    unsigned int u32_8F8;  // 0x8F8
    unsigned int q8FC;  // 0x8FC
    unsigned int q8FD;  // 0x8FD
    unsigned int q900;  // 0x900
    unsigned int q904;  // 0x904
    unsigned char q908;  // 0x908
    int q914;  // 0x914
    char q918[4];  // 0x918
    IPXManagerClass * q920;  // 0x920
    unsigned int q924;  // 0x924
    unsigned int q928;  // 0x928
    unsigned char q948;  // 0x948
    unsigned char q960;  // 0x960
    unsigned char q964;  // 0x964
    unsigned char q968;  // 0x968
    unsigned char q980;  // 0x980
    unsigned char q984;  // 0x984
    unsigned char q988;  // 0x988
    unsigned int u32_9A0;  // 0x9A0
    unsigned int u32_9A8;  // 0x9A8
    unsigned int u32_9AC;  // 0x9AC
    unsigned int u32_9B0;  // 0x9B0
    unsigned int qA13;  // 0xA13
    unsigned int u32_A60;  // 0xA60
    unsigned int u32_A64;  // 0xA64
    unsigned int u32_A68;  // 0xA68
    unsigned int u32_A6C;  // 0xA6C
    unsigned int u32_A70;  // 0xA70
    unsigned int u32_A90;  // 0xA90
    unsigned int u32_C20;  // 0xC20
    unsigned int u32_C4C;  // 0xC4C
    unsigned int u32_C54;  // 0xC54
    unsigned int u32_CB0;  // 0xCB0
    unsigned int u32_CF0;  // 0xCF0
    unsigned int u32_E20;  // 0xE20
    unsigned int u32_E50;  // 0xE50
    unsigned int u32_E54;  // 0xE54
    unsigned int u32_E60;  // 0xE60
    unsigned int u32_F1C;  // 0xF1C
    unsigned int u32_1008;  // 0x1008
    unsigned int u32_1010;  // 0x1010
    unsigned int u32_1018;  // 0x1018
    unsigned int u32_101C;  // 0x101C
    unsigned int u32_1020;  // 0x1020
    unsigned int q1024;  // 0x1024
    unsigned char q1028;  // 0x1028
    unsigned int u32_1030;  // 0x1030
    unsigned char q1040;  // 0x1040
    unsigned char q1044;  // 0x1044
    unsigned int q1048;  // 0x1048
    unsigned char q1060;  // 0x1060
    unsigned char q1064;  // 0x1064
    unsigned char q1068;  // 0x1068
    unsigned int u32_1070;  // 0x1070
    unsigned int q1078;  // 0x1078
    unsigned int u32_107C;  // 0x107C
    unsigned int q1088;  // 0x1088
    unsigned int u32_1090;  // 0x1090
    unsigned int u32_1094;  // 0x1094
    unsigned int u32_109C;  // 0x109C
    unsigned char q1100;  // 0x1100
    unsigned char q1104;  // 0x1104
    unsigned char q1108;  // 0x1108
    unsigned char q1120;  // 0x1120
    unsigned char q1124;  // 0x1124
    unsigned char q1128;  // 0x1128
    unsigned int q1224;  // 0x1224
    unsigned char q1228;  // 0x1228
    unsigned int q1240;  // 0x1240
    unsigned int q1244;  // 0x1244
    unsigned int q1248;  // 0x1248
    unsigned char q1260;  // 0x1260
    unsigned char q1264;  // 0x1264
    unsigned char q1268;  // 0x1268
    unsigned int u32_1274;  // 0x1274
    unsigned char q1280;  // 0x1280
    unsigned char q1284;  // 0x1284
    unsigned char q1288;  // 0x1288
    void* q1298;  // 0x1298
    unsigned int u32_12E8;  // 0x12E8
    unsigned int u32_1304;  // 0x1304
    unsigned int q1320;  // 0x1320
    unsigned char q1324;  // 0x1324
    unsigned char q1328;  // 0x1328
    unsigned int q1330;  // 0x1330
    unsigned int q1334;  // 0x1334
    unsigned int u32_133C;  // 0x133C
    unsigned int u32_1340;  // 0x1340
    AbstractClass* q1344;  // 0x1344
    unsigned char q1348;  // 0x1348
    unsigned int u32_135C;  // 0x135C
    unsigned char q1360;  // 0x1360
    unsigned int u32_1364;  // 0x1364
    unsigned int u32_1368;  // 0x1368
    unsigned int u32_136C;  // 0x136C
    unsigned int u32_1370;  // 0x1370
    char q1378[4];  // 0x1378
    unsigned int u32_1380;  // 0x1380
    unsigned int u32_1388;  // 0x1388
    unsigned char q1474;  // 0x1474
    unsigned int u32_1480;  // 0x1480
    CampaignClass * q1544;  // 0x1544
    unsigned char q1548;  // 0x1548
    unsigned int q1554;  // 0x1554
    unsigned char q1558;  // 0x1558
    unsigned int q1574;  // 0x1574
    unsigned char q1580;  // 0x1580
    unsigned char q1584;  // 0x1584
    int q1600;  // 0x1600
    char q1604[4];  // 0x1604
    unsigned char q1608;  // 0x1608
    unsigned int q1618;  // 0x1618
    unsigned char q1620;  // 0x1620
    unsigned char q1624;  // 0x1624
    unsigned char q1628;  // 0x1628
    unsigned int q1634;  // 0x1634
    void* q1638;  // 0x1638
    unsigned char q1640;  // 0x1640
    unsigned char q1644;  // 0x1644
    unsigned char q1648;  // 0x1648
    unsigned int q1654;  // 0x1654
    char q1660[4];  // 0x1660
    unsigned int q1664;  // 0x1664
    unsigned int q1668;  // 0x1668
    unsigned int q1674;  // 0x1674
    unsigned char q1678;  // 0x1678
    unsigned int q1680;  // 0x1680
    unsigned int q1684;  // 0x1684
    unsigned int q1688;  // 0x1688
    unsigned int q1700;  // 0x1700
    char q1704;  // 0x1704
    unsigned int q1800;  // 0x1800
    unsigned int q1908;  // 0x1908
    bool q1910;  // 0x1910
    int q1920;  // 0x1920
    unsigned int q1924;  // 0x1924
    unsigned int q1928;  // 0x1928
    unsigned int q1938;  // 0x1938
    unsigned int u32_19F0;  // 0x19F0
    unsigned int u32_19F4;  // 0x19F4
    unsigned int u32_1A20;  // 0x1A20
    unsigned int u32_1A24;  // 0x1A24
    unsigned int u32_1A28;  // 0x1A28
    unsigned int u32_1A70;  // 0x1A70
    unsigned int u32_1A74;  // 0x1A74
    unsigned int u32_1AA0;  // 0x1AA0
    unsigned int q1ED8;  // 0x1ED8
    unsigned int q1ED9;  // 0x1ED9
    unsigned int u16_1EDA;  // 0x1EDA
    unsigned int u32_1FBC;  // 0x1FBC
    unsigned int q1FC0;  // 0x1FC0
    unsigned int q1FC1;  // 0x1FC1
    unsigned char q2048;  // 0x2048
    unsigned char q2054;  // 0x2054
    unsigned int q2070;  // 0x2070
    unsigned int q2080;  // 0x2080
    unsigned int q2084;  // 0x2084
    unsigned char q2098;  // 0x2098
    unsigned char q2104;  // 0x2104
    unsigned char q2120;  // 0x2120
    unsigned int q2124;  // 0x2124
    unsigned int q2128;  // 0x2128
    unsigned int q2148;  // 0x2148
    unsigned int q2160;  // 0x2160
    unsigned int q2164;  // 0x2164
    unsigned int q2168;  // 0x2168
    int q2178;  // 0x2178
    unsigned int q2180;  // 0x2180
    int q2198;  // 0x2198
    unsigned int q2208;  // 0x2208
    unsigned char q2218;  // 0x2218
    unsigned int q2260;  // 0x2260
    unsigned int q2288;  // 0x2288
    unsigned int q2300;  // 0x2300
    unsigned int q2304;  // 0x2304
    unsigned int q2308;  // 0x2308
    int q2324;  // 0x2324
    char q2328[4];  // 0x2328
    unsigned char q2338;  // 0x2338
    unsigned int u32_2340;  // 0x2340
    unsigned int q2344;  // 0x2344
    unsigned int u32_2354;  // 0x2354
    unsigned char q2390;  // 0x2390
    unsigned int u32_23C0;  // 0x23C0
    unsigned int u32_23C4;  // 0x23C4
    unsigned int q23D4;  // 0x23D4
    unsigned int q23D5;  // 0x23D5
    unsigned int q23D6;  // 0x23D6
    unsigned int u16_23D8;  // 0x23D8
    unsigned int u32_23F0;  // 0x23F0
    unsigned int u32_23F4;  // 0x23F4
    unsigned char q2400;  // 0x2400
    unsigned char q2404;  // 0x2404
    unsigned char q2408;  // 0x2408
    unsigned char q2418;  // 0x2418
    unsigned int u32_2420;  // 0x2420
    unsigned int q2464;  // 0x2464
    unsigned int q2480;  // 0x2480
    unsigned int u32_24A0;  // 0x24A0
    unsigned int u16_25D8;  // 0x25D8
    unsigned int q2660;  // 0x2660
    unsigned int q2664;  // 0x2664
    unsigned int q2668;  // 0x2668
    unsigned int q2704;  // 0x2704
    unsigned int u32_2808;  // 0x2808
    unsigned char UnknownVector_280C;  // 0x280C
    unsigned int u32_2810;  // 0x2810
    unsigned int u32_2814;  // 0x2814
    unsigned int q2818;  // 0x2818
    unsigned int q2819;  // 0x2819
    unsigned int u32_281C;  // 0x281C
    unsigned int u32_2820;  // 0x2820
    unsigned char UnknownVector_2824;  // 0x2824
    unsigned int StartSpots;  // 0x2828
    unsigned int u32_282C;  // 0x282C
    unsigned int q2830;  // 0x2830
    unsigned int q2831;  // 0x2831
    unsigned int u32_2834;  // 0x2834
    unsigned int u32_2838;  // 0x2838
    unsigned char q283C;  // 0x283C
    unsigned int u32_2840;  // 0x2840
    unsigned int u32_2844;  // 0x2844
    unsigned int q2848;  // 0x2848
    unsigned int q2849;  // 0x2849
    unsigned int u32_284C;  // 0x284C
    unsigned int u32_2850;  // 0x2850
    unsigned char SessionClass_field_2854;  // 0x2854
    unsigned int q2878;  // 0x2878
    unsigned int u32_287C;  // 0x287C
    unsigned int u32_2880;  // 0x2880
    unsigned int u32_2884;  // 0x2884
    unsigned int u32_2888;  // 0x2888
    unsigned int u32_288C;  // 0x288C
    unsigned int u32_2890;  // 0x2890
    unsigned int u32_2894;  // 0x2894
    unsigned int u32_2898;  // 0x2898
    unsigned int u32_289C;  // 0x289C
    unsigned int u32_28F8;  // 0x28F8
    unsigned int u32_28FC;  // 0x28FC
    unsigned int u32_2900;  // 0x2900
    unsigned int u32_2904;  // 0x2904
    unsigned int q2908;  // 0x2908
    unsigned int q2909;  // 0x2909
    unsigned int u32_290C;  // 0x290C
    unsigned int u32_2910;  // 0x2910
    unsigned int u32_2914;  // 0x2914
    unsigned int u32_2918;  // 0x2918
    unsigned int u32_291C;  // 0x291C
    unsigned int q2920;  // 0x2920
    unsigned int q2921;  // 0x2921
    unsigned int u32_2924;  // 0x2924
    unsigned int u32_2928;  // 0x2928
    unsigned int u32_292C;  // 0x292C
    unsigned int u32_2930;  // 0x2930
    unsigned int u32_2934;  // 0x2934
    unsigned int q2938;  // 0x2938
    unsigned int q2939;  // 0x2939
    unsigned int u32_293C;  // 0x293C
    unsigned int u32_2940;  // 0x2940
    unsigned int u32_2964;  // 0x2964
    unsigned int q2968;  // 0x2968
    unsigned int u16_2984;  // 0x2984
    unsigned int q2F48;  // 0x2F48
    unsigned int u32_2FF0;  // 0x2FF0
    unsigned int u32_2FF4;  // 0x2FF4
    unsigned int q3018;  // 0x3018
    AbstractClass* q301C;  // 0x301C
    unsigned int u16_3048;  // 0x3048
    unsigned int q306C;  // 0x306C
    unsigned int u16_306E;  // 0x306E
    unsigned int u16_3070;  // 0x3070
    void* q3074;  // 0x3074
    unsigned int q3078;  // 0x3078
    unsigned int u32_307A;  // 0x307A
    unsigned int u32_307E;  // 0x307E
    unsigned int u32_3082;  // 0x3082
    unsigned int u32_3086;  // 0x3086
    unsigned int u32_308C;  // 0x308C
    unsigned int q3090;  // 0x3090
    unsigned int u32_3094;  // 0x3094
    unsigned int q3098;  // 0x3098
    unsigned int u32_309C;  // 0x309C
    unsigned int u32_30A0;  // 0x30A0
    unsigned int u32_30A4;  // 0x30A4
    unsigned int u32_30A8;  // 0x30A8
    unsigned int u32_30AC;  // 0x30AC
    unsigned int u32_30B0;  // 0x30B0
    unsigned int u32_30B4;  // 0x30B4
    unsigned int u32_30B8;  // 0x30B8
    unsigned int u32_30BC;  // 0x30BC
    unsigned int u32_30C0;  // 0x30C0
    unsigned int q30C8;  // 0x30C8
    unsigned int u32_30CC;  // 0x30CC
    unsigned int u32_30D0;  // 0x30D0
    unsigned int u32_30D4;  // 0x30D4
    bool CurrentlyInGame;  // 0x30D8
    unsigned char q30D9;  // 0x30D9
    unsigned int *__pad_50;
    unsigned int unknown_14;
    void* unknown_08;  // 0x0 (no offset truth)
// --- flat members (END) ---
    AbstractClass * * BuildLobbyPlayerList();
    AbstractClass * * LoadMapSelection(char **a1);
    AbstractClass * * LoadMissionList();
    CampaignClass * * loadSettings();
    Coord * * BuildLaunchString();
    ObjectClass * * ParseGameInfo(char * Source, void * aP2, void * aP3, void * aP4, const char * a5, void * aP6, int a8);
    SessionClass();
    TypeList_flat * QueryInterface(char a2);
    VectorClass_flat * validateGame(char a2);
    char AddRef(int a2);
    char GetGameSpeed();
    char Release(int a2, unsigned int * a3);
    char addPlayer(int a2, unsigned int * a3);
    int AssignColor(int a2, char aP2);
    int AssignSide(int a2, char aP2);
    int CreateConnections();
    int Destruct();
    int GetOption();
    static int GetOption(int *aP1);  // G42.33 b3 static-form sync
    int GetOption2();
    int GetPlayerColor();
    static int GetPlayerColor(void *aP1);  // G42.33 b3 static-form sync
    int GetPlayerSide();
    static int GetPlayerSide(int *aP1);  // G42.33 b3 static-form sync
    int  IsValidHouse(void * a2);
    MixFileClass * LoadGameSession(int aP1, const char **aP2);
    int Read(unsigned int * a2, void *a2_2);
    int Seek(int a2, void *a2_2, void *a3);
    int SetField();
    int SetOption(int aP1);
    static int SetOption(int *aP1, int aP2);  // G42.33 b3 static-form sync
    int SetOption2(int aP1);
    int SetPlayerColor(int a2);
    int SetPlayerOption(int aP1);
    int  findPlayer(unsigned int * a2);
    int initInternet();
    int initLAN(int a2, wchar_t * Source, unsigned int * a4);
    unsigned int * GetEntry(unsigned int *aP1);
    MixFileClass * Load(void *a1, void *a2, void *a3, void *a4);
    unsigned int * saveSettings();
    static int GetPlayerColorScheme(unsigned int a1);
    unsigned int Write(int a2);
    unsigned int initPlayers();
    unsigned int updatePlayer(int a2);
    void ** ResetSystemWOL_Reset(char a2);
    void SetInstance();
    void SetupNetwork();
    wchar_t * ddtor(void *a1);
    void removePlayer();
    int FindObjectCell(TechnoClass * aP1, char aP2);
    int IsAlliedWithObjectSimpleHouse(unsigned char * a2);
    unsigned int * FindNearestObjectAtCell(unsigned int * a2);
    void * DrawObject(void ** Block, char a2);
    void* * CalculateObjectPlacementPosition(int *a2);
    void ** RemoveObjectArray();
    int Unlink();
    char CheckState(IUnknown * aP1, int a3);
    int LoadObject(ObjectClass * aP1, int aP1a);
    int SaveObject(TechnoTypeClass * aP0, int * a1, int aP2);
    int ddtor(int a1, unsigned int * a2);
    SessionClass * DtorWithDelete(void ** Block, char a2);
    SessionClass * * Constructor(int aP1, unsigned int * a2, ReferenceCounted * aP3, const char ** a4, ReferenceCounted * aP5);
};

} // namespace gamemd
