// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct VocClass {
// --- flat members (BEGIN) ---
    char Header[12];  // 0x0
    unsigned int u32_4;  // 0x4
    void* q008;  // 0x8
    int u32_C;  // 0xC
    unsigned int u32_10;  // 0x10
    char Type[4];  // 0x14
    char Volume[32];  // 0x18
    char q020[4];  // 0x20
    char q024[4];  // 0x24
    unsigned int q028;  // 0x28
    unsigned int q034;  // 0x34
    unsigned int VocClass_field_38;  // 0x38
    unsigned int VocClass_field_3C;  // 0x3C
    char Priority[4];  // 0x40
    unsigned int VocClass_field_44;  // 0x44
    char Limit[4];  // 0x48
    char Loop[4];  // 0x4C
    char Range[4];  // 0x50
    float MinVolume;  // 0x54
    char MinDelay[4];  // 0x58
    char MaxDelay[4];  // 0x5C
    char MinFDelta[4];  // 0x60
    char MaxFDelta[4];  // 0x64
    char VShift[4];  // 0x68
    char Name;  // 0x6C
    unsigned int u32_7C;  // 0x7C
    char q080[4];  // 0x80
    float q084;  // 0x84
    char q088[4];  // 0x88
    unsigned int VocClass_field_8C;  // 0x8C
    unsigned int VocClass_field_90;  // 0x90
    unsigned int VocClass_field_94;  // 0x94
    unsigned int VocClass_field_98;  // 0x98
    unsigned int VocClass_field_9C;  // 0x9C
    unsigned int VocClass_field_A0;  // 0xA0
    unsigned int VocClass_field_A4;  // 0xA4
    unsigned int ActiveBufferCount;  // 0xA8
    unsigned int VocClass_field_AC;  // 0xAC
    void* pVoiceChannel;  // 0xB0
    char SampleIndex[128];  // 0xB4
    void* q0BC;  // 0xBC
    unsigned int u32_FC;  // 0xFC
    char q100[4];  // 0x100
    char q104[4];  // 0x104
    char q108;  // 0x108
    char q114[4];  // 0x114
    char q118[4];  // 0x118
    unsigned int q124;  // 0x124
    char q128[4];  // 0x128
    unsigned int q130;  // 0x130
    char NumSamples[4];  // 0x134
    unsigned int Attack;  // 0x138
    char Decay[4];  // 0x13C
    unsigned int VocClass_field_140;  // 0x140
    unsigned int VocClass_field_144;  // 0x144
    unsigned int q148;  // 0x148
    unsigned char q14C;  // 0x14C
    char q150[4];  // 0x150
    unsigned char q154;  // 0x154
    unsigned int q160;  // 0x160
    unsigned int q164;  // 0x164
    unsigned int q168;  // 0x168
    unsigned char q16C;  // 0x16C
    unsigned char q170;  // 0x170
    unsigned char q174;  // 0x174
    char q180[4];  // 0x180
    unsigned char q184;  // 0x184
    void* q188;  // 0x188
    unsigned char q18C;  // 0x18C
    unsigned int u32_1B0;  // 0x1B0
    unsigned char q1B4;  // 0x1B4
    unsigned char q200;  // 0x200
    unsigned char q204;  // 0x204
    unsigned char q208;  // 0x208
    unsigned char q20C;  // 0x20C
    unsigned char q210;  // 0x210
    char q260[4];  // 0x260
    char q264;  // 0x264
    unsigned char q268;  // 0x268
    unsigned int u32_278;  // 0x278
    unsigned char q27C;  // 0x27C
    char q280[4];  // 0x280
    unsigned char q284;  // 0x284
    unsigned char q288;  // 0x288
    unsigned char q28C;  // 0x28C
    unsigned char q290;  // 0x290
    unsigned char q294;  // 0x294
    unsigned int q304;  // 0x304
    char q308[4];  // 0x308
    unsigned char q30C;  // 0x30C
    char q310[4];  // 0x310
    unsigned char q314;  // 0x314
    unsigned int q320;  // 0x320
    unsigned int q324;  // 0x324
    unsigned int q328;  // 0x328
    unsigned char q32C;  // 0x32C
    unsigned char q330;  // 0x330
    unsigned char q334;  // 0x334
    unsigned int q338;  // 0x338
    unsigned char q33C;  // 0x33C
    unsigned char q340;  // 0x340
    unsigned char q344;  // 0x344
    unsigned char q34C;  // 0x34C
    unsigned char q350;  // 0x350
    unsigned char q354;  // 0x354
    unsigned int q360;  // 0x360
    unsigned char q364;  // 0x364
    unsigned char q368;  // 0x368
    unsigned char q36C;  // 0x36C
    unsigned int q370;  // 0x370
    void* q374;  // 0x374
    unsigned char q378;  // 0x378
    unsigned char q37C;  // 0x37C
    char q384[4];  // 0x384
    unsigned char q388;  // 0x388
    unsigned char q404;  // 0x404
    unsigned char q408;  // 0x408
    unsigned char q40C;  // 0x40C
    unsigned char q410;  // 0x410
    unsigned char q520;  // 0x520
    unsigned char q524;  // 0x524
    unsigned char q564;  // 0x564
    unsigned char q568;  // 0x568
    unsigned char q56C;  // 0x56C
    unsigned char q570;  // 0x570
    unsigned int q594;  // 0x594
    char q598[4];  // 0x598
    unsigned char q59C;  // 0x59C
    unsigned char q5A0;  // 0x5A0
    unsigned char q5A4;  // 0x5A4
    unsigned char q5A8;  // 0x5A8
    char q608[4];  // 0x608
    unsigned char q60C;  // 0x60C
    unsigned char q610;  // 0x610
    unsigned char q614;  // 0x614
    char q630[4];  // 0x630
    unsigned char q634;  // 0x634
    unsigned char q638;  // 0x638
    unsigned char q63C;  // 0x63C
    char q640[4];  // 0x640
    unsigned char q644;  // 0x644
    unsigned char q648;  // 0x648
    unsigned char q64C;  // 0x64C
    unsigned int q658;  // 0x658
    unsigned char q65C;  // 0x65C
    unsigned char q660;  // 0x660
    unsigned char q664;  // 0x664
    unsigned char q6D0;  // 0x6D0
    unsigned char q6D4;  // 0x6D4
    unsigned char q6D8;  // 0x6D8
    unsigned char q6DC;  // 0x6DC
    float q774;  // 0x774
    unsigned char q778;  // 0x778
    unsigned char q780;  // 0x780
    char q784[4];  // 0x784
    unsigned char q788;  // 0x788
    char q790[4];  // 0x790
    unsigned char q794;  // 0x794
    unsigned char q798;  // 0x798
    unsigned int q800;  // 0x800
    unsigned int q804;  // 0x804
    unsigned int q808;  // 0x808
    unsigned char q80C;  // 0x80C
    unsigned char q810;  // 0x810
    unsigned char q814;  // 0x814
    unsigned char q818;  // 0x818
    unsigned char q81C;  // 0x81C
    unsigned int q824;  // 0x824
    unsigned char q828;  // 0x828
    unsigned char q82C;  // 0x82C
    unsigned int q834;  // 0x834
    unsigned char q838;  // 0x838
    unsigned char q83C;  // 0x83C
    unsigned char q844;  // 0x844
    unsigned char q848;  // 0x848
    unsigned char q84C;  // 0x84C
    unsigned int q850;  // 0x850
    unsigned int q854;  // 0x854
    unsigned char q858;  // 0x858
    unsigned char q85C;  // 0x85C
    unsigned int q864;  // 0x864
    unsigned char q868;  // 0x868
    unsigned char q86C;  // 0x86C
    unsigned char q874;  // 0x874
    unsigned char q878;  // 0x878
    unsigned int q880;  // 0x880
    void* q884;  // 0x884
    unsigned char q888;  // 0x888
    unsigned char q88C;  // 0x88C
    unsigned char q894;  // 0x894
    unsigned char q898;  // 0x898
    char q900[4];  // 0x900
    unsigned char q904;  // 0x904
    void* q914;  // 0x914
    unsigned char q918;  // 0x918
    unsigned char q91C;  // 0x91C
    unsigned char q980;  // 0x980
    unsigned char q984;  // 0x984
    unsigned char q988;  // 0x988
    unsigned char q1028;  // 0x1028
    unsigned char q102C;  // 0x102C
    unsigned int q1074;  // 0x1074
    unsigned char q1078;  // 0x1078
    unsigned char q107C;  // 0x107C
    unsigned char q1274;  // 0x1274
    unsigned char q1278;  // 0x1278
    unsigned char q127C;  // 0x127C
    unsigned char q1280;  // 0x1280
    unsigned char q1298;  // 0x1298
    unsigned char q129C;  // 0x129C
    unsigned char q1350;  // 0x1350
    unsigned char q1354;  // 0x1354
    unsigned char q1380;  // 0x1380
    unsigned char q1384;  // 0x1384
    unsigned char q1388;  // 0x1388
    unsigned char q13B0;  // 0x13B0
    unsigned char q13B4;  // 0x13B4
    unsigned char q13B8;  // 0x13B8
    unsigned int q1428;  // 0x1428
    unsigned char q142C;  // 0x142C
    unsigned char q1430;  // 0x1430
    unsigned char q1434;  // 0x1434
    unsigned char q1440;  // 0x1440
    unsigned char q1444;  // 0x1444
    unsigned char q149C;  // 0x149C
    unsigned char q14A0;  // 0x14A0
    unsigned char q1538;  // 0x1538
    unsigned char q153C;  // 0x153C
    char q1544[4];  // 0x1544
    unsigned char q1548;  // 0x1548
    unsigned char q154C;  // 0x154C
    char q1554;  // 0x1554
    unsigned char q1558;  // 0x1558
    unsigned char q1574;  // 0x1574
    unsigned char q1578;  // 0x1578
    unsigned char q157C;  // 0x157C
    char q1584[4];  // 0x1584
    unsigned char q1588;  // 0x1588
    unsigned char q158C;  // 0x158C
    unsigned char q1594;  // 0x1594
    unsigned char q1598;  // 0x1598
    char q1600[4];  // 0x1600
    unsigned char q1604;  // 0x1604
    unsigned char q1608;  // 0x1608
    unsigned char q160C;  // 0x160C
    unsigned char q1618;  // 0x1618
    unsigned char q161C;  // 0x161C
    unsigned int q1624;  // 0x1624
    unsigned char q1628;  // 0x1628
    unsigned char q162C;  // 0x162C
    char q1634[4];  // 0x1634
    unsigned char q1638;  // 0x1638
    unsigned char q163C;  // 0x163C
    unsigned char q1744;  // 0x1744
    unsigned char q1748;  // 0x1748
    unsigned char q174C;  // 0x174C
    float q1908;  // 0x1908
    unsigned char q190C;  // 0x190C
    char q1910[4];  // 0x1910
    unsigned char q1914;  // 0x1914
    unsigned char q1918;  // 0x1918
    unsigned char q1920;  // 0x1920
    char q1924[4];  // 0x1924
    unsigned char q1928;  // 0x1928
    unsigned char q1930;  // 0x1930
    unsigned char q1934;  // 0x1934
    unsigned char q1940;  // 0x1940
    unsigned char q1944;  // 0x1944
    unsigned char q19AC;  // 0x19AC
    unsigned char q19B0;  // 0x19B0
    unsigned char q19B4;  // 0x19B4
    unsigned int q2048;  // 0x2048
    unsigned char q204C;  // 0x204C
    unsigned char q2050;  // 0x2050
    char q2054[4];  // 0x2054
    unsigned char q2058;  // 0x2058
    unsigned char q205C;  // 0x205C
    unsigned char q2060;  // 0x2060
    unsigned char q2064;  // 0x2064
    unsigned char q2068;  // 0x2068
    unsigned int q2084;  // 0x2084
    unsigned char q2088;  // 0x2088
    unsigned char q208C;  // 0x208C
    unsigned int q2100;  // 0x2100
    unsigned char q2104;  // 0x2104
    unsigned char q2108;  // 0x2108
    unsigned int q2128;  // 0x2128
    unsigned char q212C;  // 0x212C
    unsigned int q2148;  // 0x2148
    unsigned char q214C;  // 0x214C
    unsigned char q2164;  // 0x2164
    unsigned char q2168;  // 0x2168
    unsigned char q216C;  // 0x216C
    unsigned char q2170;  // 0x2170
    unsigned char q2174;  // 0x2174
    void* q2180;  // 0x2180
    unsigned char q2184;  // 0x2184
    unsigned char q2188;  // 0x2188
    unsigned char q219C;  // 0x219C
    unsigned char q21A0;  // 0x21A0
    char q2304[4];  // 0x2304
    unsigned char q2308;  // 0x2308
    void* q2324;  // 0x2324
    unsigned char q2328;  // 0x2328
    unsigned char q232C;  // 0x232C
    unsigned char q2A84;  // 0x2A84
    unsigned char q2A88;  // 0x2A88
    unsigned char q4724;  // 0x4724
    unsigned char q4728;  // 0x4728
    unsigned char q472C;  // 0x472C
    unsigned char q4760;  // 0x4760
    unsigned char q4764;  // 0x4764
    unsigned char q5040;  // 0x5040
    unsigned char q5044;  // 0x5044
    unsigned char q50B8;  // 0x50B8
    unsigned char q50BC;  // 0x50BC
    unsigned int q5160;  // 0x5160
    unsigned char q5164;  // 0x5164
    unsigned char q5168;  // 0x5168
    char q5170[4];  // 0x5170
    unsigned char q5174;  // 0x5174
    unsigned char q5178;  // 0x5178
    unsigned char q5438;  // 0x5438
    unsigned char q543C;  // 0x543C
    char q5444[4];  // 0x5444
    unsigned char q5448;  // 0x5448
    unsigned char q544C;  // 0x544C
    unsigned char q5454;  // 0x5454
    unsigned char q5458;  // 0x5458
    char q5460;  // 0x5460
    unsigned char q5464;  // 0x5464
    unsigned char q5480;  // 0x5480
    unsigned char q5484;  // 0x5484
    char q5508[4];  // 0x5508
    unsigned char q550C;  // 0x550C
    unsigned int q5510;  // 0x5510
    unsigned char q5514;  // 0x5514
    unsigned char q5524;  // 0x5524
    unsigned char q5528;  // 0x5528
    unsigned char q5590;  // 0x5590
    unsigned char q5594;  // 0x5594
    unsigned char q5644;  // 0x5644
    unsigned char q5648;  // 0x5648
    unsigned char q5650;  // 0x5650
    unsigned char q5654;  // 0x5654
    unsigned char q565C;  // 0x565C
    unsigned char q5660;  // 0x5660
    unsigned int q5668;  // 0x5668
    unsigned char q566C;  // 0x566C
    unsigned char q5670;  // 0x5670
    unsigned char q5678;  // 0x5678
    unsigned char q567C;  // 0x567C
    char q5684[4];  // 0x5684
    unsigned char q5688;  // 0x5688
    unsigned char q568C;  // 0x568C
    unsigned char q5794;  // 0x5794
    unsigned char q5798;  // 0x5798
    unsigned char q59F8;  // 0x59F8
    unsigned char q59FC;  // 0x59FC
    unsigned char q6118;  // 0x6118
    unsigned char q611C;  // 0x611C
    unsigned char q6238;  // 0x6238
    unsigned char q623C;  // 0x623C
    float q6408;  // 0x6408
    unsigned char q640C;  // 0x640C
    unsigned char q6410;  // 0x6410
    unsigned char q6420;  // 0x6420
    unsigned char q6424;  // 0x6424
    unsigned char q642C;  // 0x642C
    unsigned char q6430;  // 0x6430
    char q6438[4];  // 0x6438
    unsigned char q643C;  // 0x643C
    unsigned char q6440;  // 0x6440
    unsigned char q6448;  // 0x6448
    unsigned char q644C;  // 0x644C
    char q6454[4];  // 0x6454
    unsigned char q6458;  // 0x6458
    unsigned char q645C;  // 0x645C
    unsigned char q6464;  // 0x6464
    unsigned char q6468;  // 0x6468
    unsigned char q6470;  // 0x6470
    unsigned char q6474;  // 0x6474
    unsigned int GetSampleName;
    unsigned int VocClass_field_446;
    unsigned int u32_100;
    unsigned int u32_1C;
// --- flat members (END) ---
    char * GetSampleNameByIndex(int a1);
    int FindByName();
    int Release();
    static double Check(...);  // C2597 interim stub
    static double FindIndex(...);  // C2597 interim stub
};

} // namespace gamemd
