// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Timer {
// --- flat members (BEGIN) ---
    unsigned int u32_4;  // 0x4
    AbstractClass * ptr_8;  // 0x8
    unsigned int u32_C;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned int u32_14;  // 0x14
    unsigned int q018;  // 0x18
    unsigned int u32_1C;  // 0x1C
    unsigned int q020;  // 0x20
    unsigned int q024;  // 0x24
    unsigned int u32_28;  // 0x28
    unsigned int q034;  // 0x34
    unsigned int u32_38;  // 0x38
    unsigned int u32_4C;  // 0x4C
    unsigned int q050;  // 0x50
    unsigned int q054;  // 0x54
    unsigned int u32_60;  // 0x60
    unsigned int u32_64;  // 0x64
    unsigned int q080;  // 0x80
    unsigned int q084;  // 0x84
    unsigned int q100;  // 0x100
    unsigned int q118;  // 0x118
    unsigned int q128;  // 0x128
    unsigned int q130;  // 0x130
    unsigned int q150;  // 0x150
    unsigned int q280;  // 0x280
    unsigned int q304;  // 0x304
    unsigned int u32_314;  // 0x314
    unsigned int u32_318;  // 0x318
    unsigned int q598;  // 0x598
    unsigned int u32_614;  // 0x614
    unsigned int u32_618;  // 0x618
    unsigned int u32_61C;  // 0x61C
    unsigned int u32_620;  // 0x620
    unsigned int u32_624;  // 0x624
    unsigned int u32_628;  // 0x628
    unsigned int q640;  // 0x640
    unsigned int q774;  // 0x774
    unsigned int q788;  // 0x788
    unsigned int u32_11E8;  // 0x11E8
    unsigned int u32_11EC;  // 0x11EC
    unsigned int u32_11F0;  // 0x11F0
    unsigned int u32_11F4;  // 0x11F4
    unsigned int u32_11F8;  // 0x11F8
    unsigned int u32_11FC;  // 0x11FC
    unsigned int u32_1200;  // 0x1200
    unsigned int u32_1204;  // 0x1204
    unsigned int u32_120C;  // 0x120C
    unsigned int u32_1210;  // 0x1210
    unsigned int u32_1214;  // 0x1214
    unsigned int u32_1218;  // 0x1218
    unsigned int u32_121C;  // 0x121C
    unsigned int u32_1220;  // 0x1220
    unsigned int u32_1520;  // 0x1520
    unsigned int u32_1528;  // 0x1528
    unsigned int u32_152C;  // 0x152C
    unsigned int u32_1530;  // 0x1530
    unsigned int u32_1534;  // 0x1534
    unsigned int u32_1538;  // 0x1538
    unsigned int u32_153C;  // 0x153C
    unsigned int u32_1540;  // 0x1540
    unsigned int q1600;  // 0x1600
    unsigned int q1634;  // 0x1634
    unsigned int q1908;  // 0x1908
    unsigned int q1928;  // 0x1928
    unsigned int q1938;  // 0x1938
    unsigned int q5170;  // 0x5170
    unsigned int q5684;  // 0x5684
    unsigned int q6408;  // 0x6408
    unsigned int q6440;  // 0x6440
    unsigned int q20848;  // 0x20848
    unsigned int q22148;  // 0x22148
    unsigned int q25608;  // 0x25608
    unsigned int q25664;  // 0x25664
    unsigned int q33570;  // 0x33570
    unsigned int q153094;  // 0x153094
    unsigned int q153188;  // 0x153188
    unsigned int q210288;  // 0x210288
    unsigned int q1257874;  // 0x1257874
    unsigned int q1282918;  // 0x1282918
    unsigned int q1283474;  // 0x1283474
    unsigned int q1388694;  // 0x1388694
    unsigned int q1389090;  // 0x1389090
    unsigned int q19232884;  // 0x19232884
    unsigned int q19412084;  // 0x19412084
    unsigned int q20482358;  // 0x20482358
    unsigned int q20484240;  // 0x20484240
    unsigned int q35009334;  // 0x35009334
    unsigned int q423698564;  // 0x423698564
    unsigned int q541606464;  // 0x541606464
    unsigned int q22571222354;  // 0x22571222354
    unsigned int q1612549859458;  // 0x1612549859458
    unsigned int q2359835108180;  // 0x2359835108180
    unsigned int q388226446628134;  // 0x388226446628134
    unsigned int q621877794996608;  // 0x621877794996608
    unsigned int q621877867514214;  // 0x621877867514214
    unsigned int q971428040484870;  // 0x971428040484870
    unsigned int q441783186122958344;  // 0x441783186122958344
    unsigned int q441783189658223124;  // 0x441783189658223124
    unsigned int q1256072821702542066500;  // 0x1256072821702542066500
    unsigned int q1256072821931073745188;  // 0x1256072821931073745188
    unsigned int q22166920289552765214282120;  // 0x22166920289552765214282120
// --- flat members (END) ---
    DynamicVector * Start(DynamicVector * aP1);  // 0x46B640
    char StartDouble(double a2);  // 0x4A5240
    DWORD * Init(DWORD a2);  // 0x4F1B00
    int GetRemainingMs();  // 0x4F1B20
    HWND PumpMessages();  // 0x54F720
    double GetHighPrecision();  // 0x5B1E40
    int GetElapsed();  // 0x5F1390
    void * EnableHighPrecision();  // 0x5D5870
    MMRESULT DisableHighPrecision();  // 0x5D5880
    int UpdateDelta();  // 0x6C8820
    DWORD GetTicks();  // 0x6C8C40
    char SetFlag(char a2);  // 0x7500B0
    unsigned long long ReadTSC(unsigned int * a1);  // 0x7C6064
};
} // namespace gamemd
