// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct WaypointClass {
// --- flat members (BEGIN) ---
    WaypointPathClass* paths;  // 0x0
    unsigned int WaypointClass_field_0;  // 0x30
    unsigned int u32_34;  // 0x34
    unsigned int WaypointClass_field_8;  // 0x38
    unsigned int WaypointClass_field_C;  // 0x3C
    unsigned int WaypointClass_field_10;  // 0x40
    unsigned int WaypointClass_field_14;  // 0x44
    unsigned char padding_18;  // 0x48
    unsigned int q060;  // 0x60
    unsigned int q064;  // 0x64
    unsigned int q068;  // 0x68
    bool q083;  // 0x83
    unsigned int q100;  // 0x100
    unsigned int q104;  // 0x104
    unsigned char q114;  // 0x114
    unsigned int q130;  // 0x130
    unsigned int q134;  // 0x134
    unsigned int q150;  // 0x150
    unsigned int u32_20C;  // 0x20C
    unsigned int activePathIndex;  // 0x240
    unsigned char q244;  // 0x244
    unsigned int q260;  // 0x260
    unsigned char q264;  // 0x264
    unsigned int q304;  // 0x304
    unsigned int q308;  // 0x308
    unsigned char q30C;  // 0x30C
    unsigned int q524;  // 0x524
    unsigned char q528;  // 0x528
    unsigned char q52C;  // 0x52C
    unsigned char q530;  // 0x530
    unsigned char q534;  // 0x534
    unsigned char q538;  // 0x538
    unsigned int q598;  // 0x598
    unsigned char q59C;  // 0x59C
    unsigned char q5A0;  // 0x5A0
    unsigned char q5A4;  // 0x5A4
    unsigned char q5A8;  // 0x5A8
    unsigned int q608;  // 0x608
    unsigned char q60C;  // 0x60C
    unsigned char q610;  // 0x610
    unsigned char q614;  // 0x614
    unsigned char q618;  // 0x618
    unsigned char q630;  // 0x630
    unsigned char q634;  // 0x634
    unsigned char q828;  // 0x828
    unsigned char q82C;  // 0x82C
    unsigned char q830;  // 0x830
    unsigned char q834;  // 0x834
    unsigned char q1134;  // 0x1134
    unsigned char q1138;  // 0x1138
    unsigned char q1320;  // 0x1320
    unsigned char q1324;  // 0x1324
    unsigned char q1328;  // 0x1328
    unsigned char q132C;  // 0x132C
    unsigned int q1398;  // 0x1398
    unsigned char q139C;  // 0x139C
    unsigned char q13A0;  // 0x13A0
    unsigned char q13A4;  // 0x13A4
    unsigned char q1420;  // 0x1420
    unsigned char q1424;  // 0x1424
    unsigned char q1428;  // 0x1428
    unsigned char q1440;  // 0x1440
    unsigned char q1444;  // 0x1444
    unsigned char q14A8;  // 0x14A8
    unsigned char q14AC;  // 0x14AC
    unsigned int q1544;  // 0x1544
    unsigned char q1548;  // 0x1548
    unsigned char q154C;  // 0x154C
    unsigned char q156C;  // 0x156C
    unsigned char q1570;  // 0x1570
    unsigned char q1584;  // 0x1584
    unsigned char q1588;  // 0x1588
    unsigned char q177C;  // 0x177C
    unsigned char q1780;  // 0x1780
    unsigned char q1784;  // 0x1784
    unsigned int q1910;  // 0x1910
    unsigned char q1914;  // 0x1914
    unsigned char q1918;  // 0x1918
    unsigned char q191C;  // 0x191C
    unsigned char q2088;  // 0x2088
    unsigned char q208C;  // 0x208C
    unsigned char q2994;  // 0x2994
    unsigned char q2998;  // 0x2998
    unsigned char q4404;  // 0x4404
    unsigned char q4408;  // 0x4408
    unsigned char q4890;  // 0x4890
    unsigned char q4894;  // 0x4894
    unsigned char q48E4;  // 0x48E4
    unsigned char q48E8;  // 0x48E8
    unsigned char q48EC;  // 0x48EC
    unsigned char q4900;  // 0x4900
    unsigned char q4904;  // 0x4904
    unsigned char q4974;  // 0x4974
    unsigned char q4978;  // 0x4978
    unsigned char q5020;  // 0x5020
    unsigned char q5024;  // 0x5024
    unsigned char q5140;  // 0x5140
    unsigned char q5144;  // 0x5144
    unsigned char q5164;  // 0x5164
    unsigned char q5168;  // 0x5168
    unsigned int q5170;  // 0x5170
    unsigned char q5174;  // 0x5174
    unsigned char q5178;  // 0x5178
    unsigned char q51E0;  // 0x51E0
    unsigned char q51E4;  // 0x51E4
    unsigned char q5324;  // 0x5324
    unsigned char q5328;  // 0x5328
    unsigned int q5444;  // 0x5444
    unsigned char q5448;  // 0x5448
    unsigned char q544C;  // 0x544C
    unsigned char q546C;  // 0x546C
    unsigned char q5470;  // 0x5470
    unsigned char q5484;  // 0x5484
    unsigned char q5488;  // 0x5488
    unsigned char q549C;  // 0x549C
    unsigned char q54A0;  // 0x54A0
    unsigned char q5508;  // 0x5508
    unsigned char q550C;  // 0x550C
    unsigned char q5700;  // 0x5700
    unsigned char q5704;  // 0x5704
    unsigned char q619C;  // 0x619C
    unsigned char q61A0;  // 0x61A0
    unsigned char q6420;  // 0x6420
    unsigned char q6424;  // 0x6424
    unsigned int u32_341;
    unsigned int u32_342;
    unsigned int u32_BC;
// --- flat members (END) ---
    WaypointPathClass * * FindOrAddPath(unsigned int * a2);
};

} // namespace gamemd
