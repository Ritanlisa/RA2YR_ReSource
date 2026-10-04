// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
class Constructor;  // G42.36 fwd supply
class UpdateCountdowners;  // G42.36 fwd supply
class UpdateTimers;  // G42.36 fwd supply
class InitListAndCounters;  // G42.36 fwd supply
class CheckFormatChanged;  // G42.36 fwd supply
class Destructor;  // G42.36 fwd supply
class ProcessStream;  // G42.36 fwd supply
class SetFlag4C;  // G42.36 fwd supply
class DrawWaveform;  // G42.36 fwd supply
class ReadSamples;  // G42.36 fwd supply
class ReadStreamAndReturn;  // G42.36 fwd supply
class GetChannel;  // G42.36 fwd supply
class InitNodeFields;  // G42.36 fwd supply
class ProcessCallback;  // G42.36 fwd supply
class SetPlaybackCallback;  // G42.36 fwd supply
class ReadStreamAndSyncPosition;  // G42.36 fwd supply
class CleanupChannels;  // G42.36 fwd supply
class SelectRandom;  // G42.36 fwd supply
class SetupPlayback;  // G42.36 fwd supply
class ResetChannel2;  // G42.36 fwd supply
class ResetChannel;  // G42.36 fwd supply
class Reset;  // G42.36 fwd supply
class Block;  // G42.36 fwd supply
class DestroyAll;  // G42.36 fwd supply
class ReleaseChannel;  // G42.36 fwd supply
class ReleaseSubsystem;  // G42.36 fwd supply
struct CampaignClass;  // fix_fwd_type_supply
struct Coord;  // fix_fwd_type_supply
struct AbstractTypeClass;  // fix_fwd_type_supply
struct ParticleSystemClass;  // fix_fwd_type_supply
struct HouseClass;  // fix_fwd_type_supply
struct BuildingTypeClass;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct AnimClass;  // fix_fwd_type_supply
struct OverlayTypeClass;  // fix_fwd_type_supply
struct TimerStruct;  // fix_fwd_type_supply

struct MouseClass {
// --- flat members (BEGIN) ---
    void* q000;  // 0x0
    unsigned char __pad_0[87];  // 0x0
    unsigned int u16_2;  // 0x2
    unsigned int u32_4;  // 0x4
    unsigned int u32_8;  // 0x8
    void* q00C;  // 0xC
    bool IsAllocated;  // 0xD
    int q010;  // 0x10
    bool IsInitialized;  // 0x12
    int q014;  // 0x14
    int Count;  // 0x16
    unsigned int q018;  // 0x18
    unsigned int q01A;  // 0x1A
    unsigned int q01C;  // 0x1C
    bool q01D;  // 0x1D
    unsigned int q01E;  // 0x1E
    unsigned int CapacityIncrement;  // 0x20
    void * ptr_24;  // 0x24
    unsigned int q028;  // 0x28
    bool q02B;  // 0x2B
    unsigned int u32_2C;  // 0x2C
    unsigned int q030;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int q033;  // 0x33
    unsigned int q034;  // 0x34
    unsigned int u32_38;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03C;  // 0x3C
    unsigned int q03D;  // 0x3D
    unsigned int q040;  // 0x40
    bool q042;  // 0x42
    unsigned int q044;  // 0x44
    unsigned int u32_48;  // 0x48
    bool q04A;  // 0x4A
    unsigned int u32_4C;  // 0x4C
    unsigned char q04F;  // 0x4F
    unsigned int u32_50;  // 0x50
    unsigned int u32_54;  // 0x54
    unsigned int q058;  // 0x58
    unsigned int q05C;  // 0x5C
    unsigned int q05D;  // 0x5D
    unsigned int q060;  // 0x60
    unsigned int q064;  // 0x64
    unsigned int q068;  // 0x68
    unsigned int q06C;  // 0x6C
    CampaignClass* q070;  // 0x70
    unsigned int q074;  // 0x74
    unsigned int q078;  // 0x78
    unsigned int q07C;  // 0x7C
    unsigned int q080;  // 0x80
    unsigned int q084;  // 0x84
    unsigned int q088;  // 0x88
    unsigned int q08C;  // 0x8C
    unsigned int q090;  // 0x90
    unsigned int q094;  // 0x94
    unsigned char q098;  // 0x98
    Coord* q09C;  // 0x9C
    unsigned int q0A4;  // 0xA4
    unsigned int q0A7;  // 0xA7
    unsigned int q0A8;  // 0xA8
    unsigned char q0A9;  // 0xA9
    unsigned char q0AA;  // 0xAA
    unsigned int q0AB;  // 0xAB
    void* q0AC;  // 0xAC
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
    unsigned int u32_D4;  // 0xD4
    unsigned int q0D8;  // 0xD8
    unsigned int q0DC;  // 0xDC
    unsigned char q0E0;  // 0xE0
    unsigned int q0E1;  // 0xE1
    unsigned int q0E4;  // 0xE4
    unsigned int q0E8;  // 0xE8
    unsigned int u32_EC;  // 0xEC
    unsigned char q0F0;  // 0xF0
    unsigned int q0F4;  // 0xF4
    void* q0F7;  // 0xF7
    unsigned int q0F8;  // 0xF8
    unsigned int q0F9;  // 0xF9
    unsigned char q0FB;  // 0xFB
    unsigned int q0FC;  // 0xFC
    unsigned int q100;  // 0x100
    unsigned int q104;  // 0x104
    unsigned int q108;  // 0x108
    unsigned int q10C;  // 0x10C
    unsigned int CellIterator_NextY;  // 0x110
    unsigned int CellIterator_CurrentY;  // 0x114
    unsigned int CellIterator_NextCell;  // 0x118
    unsigned int q11B;  // 0x11B
    unsigned int ZoneIterator_X;  // 0x11C
    unsigned int ZoneIterator_Y;  // 0x120
    unsigned int MapCoordBounds;  // 0x124
    unsigned int q128;  // 0x128
    unsigned char q12C;  // 0x12C
    void* q130;  // 0x130
    unsigned int q134;  // 0x134
    unsigned int MaxLevel;  // 0x138
    unsigned int MaxWidth;  // 0x13C
    unsigned int q140;  // 0x140
    unsigned int q144;  // 0x144
    unsigned int q145;  // 0x145
    unsigned int Crates;  // 0x148
    unsigned char q14C;  // 0x14C
    unsigned int q150;  // 0x150
    unsigned int q154;  // 0x154
    unsigned char q158;  // 0x158
    Coord* q15C;  // 0x15C
    unsigned char q160;  // 0x160
    unsigned int q164;  // 0x164
    unsigned int q168;  // 0x168
    bool q16B;  // 0x16B
    void* q16C;  // 0x16C
    unsigned char q16D;  // 0x16D
    unsigned int q16F;  // 0x16F
    unsigned char q170;  // 0x170
    unsigned char q174;  // 0x174
    unsigned int q178;  // 0x178
    unsigned int q180;  // 0x180
    void* q184;  // 0x184
    char q188[4];  // 0x188
    unsigned char q18C;  // 0x18C
    void* q190;  // 0x190
    unsigned char q194;  // 0x194
    unsigned char q198;  // 0x198
    unsigned char q19C;  // 0x19C
    bool q1A1;  // 0x1A1
    unsigned int q1A2;  // 0x1A2
    unsigned int q1A5;  // 0x1A5
    unsigned int q1A7;  // 0x1A7
    unsigned char q1AB;  // 0x1AB
    unsigned int q1B1;  // 0x1B1
    unsigned char q1B5;  // 0x1B5
    unsigned int u32_1BC;  // 0x1BC
    unsigned int u32_1C0;  // 0x1C0
    unsigned int u32_1C4;  // 0x1C4
    unsigned int q1D0;  // 0x1D0
    unsigned char q1D4;  // 0x1D4
    AbstractTypeClass* q1E0;  // 0x1E0
    unsigned int q200;  // 0x200
    int q202;  // 0x202
    unsigned char q206;  // 0x206
    unsigned int q208;  // 0x208
    unsigned int q20C;  // 0x20C
    unsigned char q210;  // 0x210
    AbstractClass* q21C;  // 0x21C
    unsigned int q220;  // 0x220
    unsigned char q224;  // 0x224
    unsigned int q228;  // 0x228
    unsigned int q22C;  // 0x22C
    unsigned char q230;  // 0x230
    unsigned char q240;  // 0x240
    unsigned int q244;  // 0x244
    unsigned int q248;  // 0x248
    void* q258;  // 0x258
    unsigned char q25C;  // 0x25C
    unsigned int q260;  // 0x260
    unsigned int q264;  // 0x264
    unsigned int q268;  // 0x268
    unsigned int q274;  // 0x274
    unsigned int q278;  // 0x278
    unsigned int q280;  // 0x280
    unsigned int q284;  // 0x284
    unsigned int q288;  // 0x288
    AbstractClass* q294;  // 0x294
    unsigned char q298;  // 0x298
    void* q2A4;  // 0x2A4
    unsigned char q2A8;  // 0x2A8
    AbstractClass* q2B4;  // 0x2B4
    unsigned int q2E4;  // 0x2E4
    unsigned int q2E8;  // 0x2E8
    unsigned char q2EC;  // 0x2EC
    void* q2F0;  // 0x2F0
    unsigned char q2F4;  // 0x2F4
    unsigned char q300;  // 0x300
    unsigned int q304;  // 0x304
    unsigned int q308;  // 0x308
    unsigned char q30C;  // 0x30C
    unsigned int q310;  // 0x310
    unsigned int q320;  // 0x320
    unsigned int q324;  // 0x324
    unsigned int q328;  // 0x328
    unsigned char q338;  // 0x338
    unsigned int q340;  // 0x340
    unsigned char q344;  // 0x344
    Coord* q348;  // 0x348
    unsigned int q360;  // 0x360
    void* q364;  // 0x364
    unsigned char q368;  // 0x368
    void* q370;  // 0x370
    unsigned int q374;  // 0x374
    unsigned int q380;  // 0x380
    unsigned int q384;  // 0x384
    ParticleSystemClass* q388;  // 0x388
    char q3BC[4];  // 0x3BC
    unsigned char q3C0;  // 0x3C0
    unsigned char q3D7;  // 0x3D7
    unsigned char q3DB;  // 0x3DB
    void* q400;  // 0x400
    unsigned char q404;  // 0x404
    unsigned char q408;  // 0x408
    unsigned int q418;  // 0x418
    unsigned char q41C;  // 0x41C
    HouseClass* q42C;  // 0x42C
    unsigned int q440;  // 0x440
    unsigned int q444;  // 0x444
    unsigned int q448;  // 0x448
    unsigned char q45D;  // 0x45D
    unsigned int q460;  // 0x460
    unsigned char q461;  // 0x461
    unsigned int q463;  // 0x463
    unsigned int q464;  // 0x464
    unsigned char q468;  // 0x468
    unsigned int q46F;  // 0x46F
    unsigned int q471;  // 0x471
    unsigned char q476;  // 0x476
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
    unsigned int q520;  // 0x520
    unsigned char q524;  // 0x524
    unsigned char q528;  // 0x528
    unsigned int q52B;  // 0x52B
    void* q52C;  // 0x52C
    unsigned int q52D;  // 0x52D
    unsigned int q530;  // 0x530
    unsigned int q534;  // 0x534
    unsigned char q538;  // 0x538
    unsigned char q53C;  // 0x53C
    AbstractClass* q540;  // 0x540
    unsigned int q544;  // 0x544
    unsigned char q548;  // 0x548
    unsigned char q54C;  // 0x54C
    unsigned char q560;  // 0x560
    unsigned char q564;  // 0x564
    unsigned int q580;  // 0x580
    unsigned int q584;  // 0x584
    unsigned int q588;  // 0x588
    unsigned char q58C;  // 0x58C
    unsigned char q590;  // 0x590
    unsigned int q594;  // 0x594
    unsigned int q598;  // 0x598
    unsigned char q59C;  // 0x59C
    unsigned char q5A0;  // 0x5A0
    unsigned char q5A8;  // 0x5A8
    unsigned char q5AC;  // 0x5AC
    unsigned char q5B0;  // 0x5B0
    void* q5B8;  // 0x5B8
    unsigned char q5BC;  // 0x5BC
    unsigned char q5C0;  // 0x5C0
    unsigned char q5C4;  // 0x5C4
    unsigned char q5C8;  // 0x5C8
    unsigned char q5DC;  // 0x5DC
    unsigned char q5E0;  // 0x5E0
    unsigned char q5E4;  // 0x5E4
    void* q600;  // 0x600
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
    unsigned char q66C;  // 0x66C
    unsigned char q670;  // 0x670
    unsigned int u32_67C;  // 0x67C
    unsigned char q680;  // 0x680
    AudioController* q68C;  // 0x68C
    unsigned char q690;  // 0x690
    unsigned char q6BC;  // 0x6BC
    unsigned char q6C8;  // 0x6C8
    unsigned char q6CC;  // 0x6CC
    unsigned char q6D0;  // 0x6D0
    void* q6F4;  // 0x6F4
    unsigned int u32_6F8;  // 0x6F8
    unsigned int u32_6FC;  // 0x6FC
    void* q700;  // 0x700
    unsigned char q704;  // 0x704
    unsigned char q708;  // 0x708
    unsigned char q70C;  // 0x70C
    TechnoClass* q718;  // 0x718
    unsigned char q724;  // 0x724
    unsigned int q728;  // 0x728
    unsigned char q72C;  // 0x72C
    unsigned char q730;  // 0x730
    unsigned char q73C;  // 0x73C
    unsigned int q740;  // 0x740
    unsigned int q744;  // 0x744
    unsigned char q748;  // 0x748
    unsigned char q74C;  // 0x74C
    unsigned char q750;  // 0x750
    unsigned char q754;  // 0x754
    unsigned int q760;  // 0x760
    unsigned char q764;  // 0x764
    unsigned char q768;  // 0x768
    unsigned char q76C;  // 0x76C
    unsigned char q770;  // 0x770
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
    unsigned int q804;  // 0x804
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
    unsigned char q850;  // 0x850
    unsigned int q854;  // 0x854
    unsigned char q858;  // 0x858
    unsigned char q85C;  // 0x85C
    unsigned char q860;  // 0x860
    unsigned int q864;  // 0x864
    void* q868;  // 0x868
    unsigned char q86C;  // 0x86C
    unsigned int q880;  // 0x880
    unsigned int q884;  // 0x884
    unsigned int u32_888;  // 0x888
    unsigned int q900;  // 0x900
    ParticleSystemClass* q904;  // 0x904
    unsigned char q908;  // 0x908
    unsigned char q90C;  // 0x90C
    unsigned char q910;  // 0x910
    char q914[4];  // 0x914
    unsigned char q918;  // 0x918
    unsigned char q91C;  // 0x91C
    unsigned char q920;  // 0x920
    unsigned char q924;  // 0x924
    unsigned int q928;  // 0x928
    unsigned char q92C;  // 0x92C
    unsigned char q930;  // 0x930
    unsigned char q934;  // 0x934
    unsigned char q938;  // 0x938
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
    void* q1024;  // 0x1024
    unsigned char q1028;  // 0x1028
    unsigned int q1048;  // 0x1048
    unsigned char q1050;  // 0x1050
    unsigned char q1054;  // 0x1054
    unsigned int q1058;  // 0x1058
    unsigned int q1064;  // 0x1064
    HouseClass* q1068;  // 0x1068
    unsigned int q1078;  // 0x1078
    unsigned int q1088;  // 0x1088
    unsigned int q1110;  // 0x1110
    unsigned int q1120;  // 0x1120
    unsigned int q1124;  // 0x1124
    unsigned char q1128;  // 0x1128
    unsigned int q1138;  // 0x1138
    unsigned int q1158;  // 0x1158
    unsigned int u32_115C;  // 0x115C
    unsigned int q1160;  // 0x1160
    unsigned int q1164;  // 0x1164
    unsigned int q1168;  // 0x1168
    unsigned int q1169;  // 0x1169
    unsigned int q116C;  // 0x116C
    unsigned int q1170;  // 0x1170
    unsigned int u32_1174;  // 0x1174
    unsigned int u32_1176;  // 0x1176
    unsigned int u32_1178;  // 0x1178
    unsigned int u32_117A;  // 0x117A
    unsigned int u32_117C;  // 0x117C
    unsigned int q1180;  // 0x1180
    unsigned int q1181;  // 0x1181
    unsigned int q1182;  // 0x1182
    unsigned int q1186;  // 0x1186
    unsigned int q1188;  // 0x1188
    unsigned int q118C;  // 0x118C
    unsigned int q1190;  // 0x1190
    unsigned int q1194;  // 0x1194
    unsigned int q1198;  // 0x1198
    unsigned int q119C;  // 0x119C
    unsigned int q11A0;  // 0x11A0
    unsigned int q11A4;  // 0x11A4
    unsigned int q11A8;  // 0x11A8
    unsigned int q11AC;  // 0x11AC
    unsigned int q11B0;  // 0x11B0
    unsigned int q11B1;  // 0x11B1
    unsigned int q11B2;  // 0x11B2
    unsigned int q11B3;  // 0x11B3
    unsigned int q11B4;  // 0x11B4
    unsigned int q11B8;  // 0x11B8
    unsigned int q11BC;  // 0x11BC
    unsigned int q11C0;  // 0x11C0
    unsigned int q11C4;  // 0x11C4
    unsigned int q11C8;  // 0x11C8
    void* q11CC;  // 0x11CC
    unsigned int q11CD;  // 0x11CD
    unsigned int q11CE;  // 0x11CE
    unsigned int q11CF;  // 0x11CF
    unsigned int q11D0;  // 0x11D0
    unsigned int q11D1;  // 0x11D1
    unsigned int q11D4;  // 0x11D4
    unsigned int q11D8;  // 0x11D8
    unsigned int q11DC;  // 0x11DC
    unsigned int q11E0;  // 0x11E0
    unsigned int q11E4;  // 0x11E4
    unsigned int q11E8;  // 0x11E8
    unsigned int q11EC;  // 0x11EC
    unsigned int q11F0;  // 0x11F0
    unsigned int q11F4;  // 0x11F4
    unsigned int q11F8;  // 0x11F8
    unsigned int q11FC;  // 0x11FC
    unsigned int q1200;  // 0x1200
    unsigned int q1204;  // 0x1204
    unsigned int q1208;  // 0x1208
    unsigned int q120C;  // 0x120C
    unsigned int q1210;  // 0x1210
    unsigned int q1214;  // 0x1214
    unsigned int q1218;  // 0x1218
    unsigned int q121C;  // 0x121C
    unsigned int q1220;  // 0x1220
    unsigned int q1224;  // 0x1224
    unsigned char q1228;  // 0x1228
    unsigned char q1230;  // 0x1230
    unsigned int q1234;  // 0x1234
    unsigned int q1238;  // 0x1238
    unsigned int q123C;  // 0x123C
    unsigned int q1240;  // 0x1240
    unsigned int q1244;  // 0x1244
    unsigned int q1248;  // 0x1248
    unsigned int q124C;  // 0x124C
    unsigned int q1250;  // 0x1250
    unsigned int q1254;  // 0x1254
    void* q1258;  // 0x1258
    unsigned int q125C;  // 0x125C
    unsigned char q1260;  // 0x1260
    CampaignClass * ptr_1264;  // 0x1264
    unsigned char q1268;  // 0x1268
    unsigned int q126C;  // 0x126C
    unsigned int q1270;  // 0x1270
    unsigned int q1274;  // 0x1274
    unsigned int FoundationTypePixels;  // 0x1278
    unsigned char q127C;  // 0x127C
    BuildingTypeClass* q1288;  // 0x1288
    unsigned int q1298;  // 0x1298
    int q1300;  // 0x1300
    unsigned char q1304;  // 0x1304
    unsigned char q1320;  // 0x1320
    void* q1324;  // 0x1324
    unsigned int q1328;  // 0x1328
    unsigned int q1330;  // 0x1330
    unsigned char q1340;  // 0x1340
    AbstractClass* q1344;  // 0x1344
    unsigned int q1348;  // 0x1348
    unsigned char q1370;  // 0x1370
    unsigned int q1378;  // 0x1378
    unsigned char q1398;  // 0x1398
    unsigned int q1400;  // 0x1400
    unsigned int q1404;  // 0x1404
    unsigned int q1408;  // 0x1408
    unsigned int q1420;  // 0x1420
    unsigned int q1424;  // 0x1424
    unsigned int q1428;  // 0x1428
    unsigned int q1430;  // 0x1430
    unsigned int q1444;  // 0x1444
    unsigned char q1448;  // 0x1448
    void* q1464;  // 0x1464
    unsigned char q1468;  // 0x1468
    unsigned int RadarSizeFactor;  // 0x1488
    unsigned int q148C;  // 0x148C
    unsigned int q1490;  // 0x1490
    unsigned int q1494;  // 0x1494
    unsigned int q1498;  // 0x1498
    unsigned int q149C;  // 0x149C
    unsigned int q14A0;  // 0x14A0
    unsigned int q14A4;  // 0x14A4
    unsigned int q14A8;  // 0x14A8
    unsigned int q14AC;  // 0x14AC
    unsigned int q14B0;  // 0x14B0
    unsigned int q14B4;  // 0x14B4
    unsigned char q14B8;  // 0x14B8
    unsigned int q14BC;  // 0x14BC
    unsigned int q14BD;  // 0x14BD
    AudioController* q14C0;  // 0x14C0
    unsigned char q14C1;  // 0x14C1
    unsigned char q14C4;  // 0x14C4
    unsigned int q14D4;  // 0x14D4
    unsigned int IsAvailableNow;  // 0x14D8
    unsigned int q14D9;  // 0x14D9
    unsigned int q14DA;  // 0x14DA
    unsigned int q14DC;  // 0x14DC
    unsigned int q14E0;  // 0x14E0
    unsigned int q14E4;  // 0x14E4
    unsigned int q14E5;  // 0x14E5
    unsigned int q14E6;  // 0x14E6
    unsigned int q14E8;  // 0x14E8
    unsigned int q14EB;  // 0x14EB
    void* q14EC;  // 0x14EC
    unsigned int q14ED;  // 0x14ED
    unsigned int q14EE;  // 0x14EE
    unsigned int q14EF;  // 0x14EF
    unsigned int q14F3;  // 0x14F3
    unsigned char q14F7;  // 0x14F7
    unsigned int q14FC;  // 0x14FC
    unsigned int q1500;  // 0x1500
    unsigned char q1504;  // 0x1504
    unsigned int q1508;  // 0x1508
    unsigned int q150C;  // 0x150C
    unsigned int q1510;  // 0x1510
    unsigned int q1514;  // 0x1514
    unsigned int q1518;  // 0x1518
    unsigned int q151C;  // 0x151C
    unsigned int q1520;  // 0x1520
    int q1524;  // 0x1524
    unsigned int q1525;  // 0x1525
    unsigned int q1528;  // 0x1528
    unsigned int q152C;  // 0x152C
    unsigned int q1530;  // 0x1530
    unsigned int q1534;  // 0x1534
    unsigned int q1538;  // 0x1538
    unsigned int q153C;  // 0x153C
    unsigned int q1540;  // 0x1540
    unsigned char q1544;  // 0x1544
    unsigned char q1548;  // 0x1548
    unsigned char q154A;  // 0x154A
    bool q154D;  // 0x154D
    bool q1550;  // 0x1550
    unsigned char q1554;  // 0x1554
    unsigned int q1558;  // 0x1558
    unsigned char q155C;  // 0x155C
    unsigned char q1560;  // 0x1560
    unsigned int q1568;  // 0x1568
    unsigned char q156C;  // 0x156C
    unsigned int q1574;  // 0x1574
    unsigned char q1578;  // 0x1578
    unsigned char q157C;  // 0x157C
    unsigned char q1580;  // 0x1580
    unsigned int q1584;  // 0x1584
    char q1588[4];  // 0x1588
    unsigned int q158B;  // 0x158B
    unsigned char q158F;  // 0x158F
    unsigned int q1590;  // 0x1590
    unsigned char q1594;  // 0x1594
    unsigned int u32_15A8;  // 0x15A8
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
    unsigned char q1640;  // 0x1640
    void* q1654;  // 0x1654
    unsigned char q1658;  // 0x1658
    unsigned int q1660;  // 0x1660
    unsigned char q1664;  // 0x1664
    char q1668;  // 0x1668
    void* q16C0;  // 0x16C0
    unsigned char q16C4;  // 0x16C4
    unsigned char q1718;  // 0x1718
    unsigned char q1720;  // 0x1720
    unsigned char q1724;  // 0x1724
    unsigned int q1728;  // 0x1728
    void* q1780;  // 0x1780
    unsigned int q1784;  // 0x1784
    unsigned int q1788;  // 0x1788
    unsigned char q1794;  // 0x1794
    unsigned int q1800;  // 0x1800
    unsigned int q1804;  // 0x1804
    unsigned int q1808;  // 0x1808
    unsigned int q1820;  // 0x1820
    unsigned int q1824;  // 0x1824
    unsigned int q1828;  // 0x1828
    unsigned char q1840;  // 0x1840
    unsigned int q1848;  // 0x1848
    unsigned int q1860;  // 0x1860
    unsigned char q1864;  // 0x1864
    unsigned char q1868;  // 0x1868
    void* q1874;  // 0x1874
    unsigned char q1878;  // 0x1878
    unsigned int q1880;  // 0x1880
    unsigned int q1884;  // 0x1884
    unsigned int q1888;  // 0x1888
    unsigned char q1894;  // 0x1894
    unsigned char q1900;  // 0x1900
    unsigned char q1904;  // 0x1904
    unsigned int q1908;  // 0x1908
    unsigned int q1910;  // 0x1910
    unsigned char q1914;  // 0x1914
    unsigned char q1920;  // 0x1920
    unsigned int q1924;  // 0x1924
    unsigned char q1940;  // 0x1940
    unsigned int q2048;  // 0x2048
    unsigned int q2054;  // 0x2054
    unsigned char q2084;  // 0x2084
    unsigned int q2088;  // 0x2088
    unsigned int q2098;  // 0x2098
    Coord* q2100;  // 0x2100
    unsigned int q2120;  // 0x2120
    unsigned int q2124;  // 0x2124
    unsigned char q2128;  // 0x2128
    unsigned char q2144;  // 0x2144
    unsigned int q2148;  // 0x2148
    unsigned char q2178;  // 0x2178
    unsigned int q2180;  // 0x2180
    unsigned int q2194;  // 0x2194
    unsigned int q2198;  // 0x2198
    unsigned int u32_2224;  // 0x2224
    unsigned int u32_2228;  // 0x2228
    unsigned int q2304;  // 0x2304
    ParticleSystemClass* q2308;  // 0x2308
    char q2324[4];  // 0x2324
    unsigned char q2328;  // 0x2328
    unsigned int q2344;  // 0x2344
    unsigned char q2348;  // 0x2348
    char q2390[4];  // 0x2390
    unsigned char q2394;  // 0x2394
    unsigned char q2400;  // 0x2400
    unsigned int q2408;  // 0x2408
    unsigned char q2504;  // 0x2504
    unsigned char q2508;  // 0x2508
    Coord* q3000;  // 0x3000
    Coord* q3004;  // 0x3004
    unsigned char q3278;  // 0x3278
    unsigned int q3428;  // 0x3428
    unsigned int q3444;  // 0x3444
    unsigned int q3448;  // 0x3448
    void* q34B8;  // 0x34B8
    unsigned char q34BC;  // 0x34BC
    unsigned int q3668;  // 0x3668
    unsigned int q3988;  // 0x3988
    unsigned char q4134;  // 0x4134
    unsigned int q4168;  // 0x4168
    unsigned char q4178;  // 0x4178
    unsigned char q4180;  // 0x4180
    unsigned int q4184;  // 0x4184
    HouseClass* q4200;  // 0x4200
    unsigned int q4358;  // 0x4358
    unsigned int q4368;  // 0x4368
    unsigned int q4384;  // 0x4384
    unsigned int q4388;  // 0x4388
    unsigned int q4408;  // 0x4408
    unsigned char q4418;  // 0x4418
    AbstractTypeClass* q4434;  // 0x4434
    char q4438;  // 0x4438
    unsigned int q443C;  // 0x443C
    unsigned char q4440;  // 0x4440
    unsigned int q4444;  // 0x4444
    unsigned int q4448;  // 0x4448
    unsigned char q444C;  // 0x444C
    unsigned char q4450;  // 0x4450
    unsigned char q4454;  // 0x4454
    unsigned int q4460;  // 0x4460
    unsigned int q4464;  // 0x4464
    unsigned int q4468;  // 0x4468
    unsigned char q446C;  // 0x446C
    unsigned int q4470;  // 0x4470
    unsigned int q4474;  // 0x4474
    unsigned char q4478;  // 0x4478
    unsigned char q447C;  // 0x447C
    unsigned int q4480;  // 0x4480
    unsigned char q4484;  // 0x4484
    unsigned int q4488;  // 0x4488
    unsigned char q448C;  // 0x448C
    unsigned char q4490;  // 0x4490
    unsigned char q4494;  // 0x4494
    unsigned int q4500;  // 0x4500
    unsigned int q4504;  // 0x4504
    unsigned int q4508;  // 0x4508
    unsigned char q450C;  // 0x450C
    unsigned char q4510;  // 0x4510
    unsigned char q4514;  // 0x4514
    unsigned int q4520;  // 0x4520
    unsigned int q4524;  // 0x4524
    unsigned int q4528;  // 0x4528
    unsigned char q452C;  // 0x452C
    unsigned int q4530;  // 0x4530
    unsigned char q4534;  // 0x4534
    unsigned char q4538;  // 0x4538
    unsigned int q4540;  // 0x4540
    unsigned int q4544;  // 0x4544
    unsigned int q4548;  // 0x4548
    unsigned char q454C;  // 0x454C
    unsigned char q4550;  // 0x4550
    unsigned char q4554;  // 0x4554
    unsigned int q4558;  // 0x4558
    unsigned char q455C;  // 0x455C
    unsigned int q4560;  // 0x4560
    unsigned int q4564;  // 0x4564
    unsigned int q4568;  // 0x4568
    unsigned char q456C;  // 0x456C
    unsigned char q4570;  // 0x4570
    unsigned char q4574;  // 0x4574
    unsigned int q4580;  // 0x4580
    unsigned int q4584;  // 0x4584
    unsigned int q4588;  // 0x4588
    unsigned char q458C;  // 0x458C
    unsigned char q4590;  // 0x4590
    unsigned char q4594;  // 0x4594
    unsigned int q4600;  // 0x4600
    unsigned int q4604;  // 0x4604
    unsigned int q4608;  // 0x4608
    unsigned char q460C;  // 0x460C
    unsigned char q4610;  // 0x4610
    unsigned char q4614;  // 0x4614
    unsigned int q4620;  // 0x4620
    unsigned int q4624;  // 0x4624
    unsigned int q4628;  // 0x4628
    unsigned char q462C;  // 0x462C
    unsigned char q4630;  // 0x4630
    unsigned char q4634;  // 0x4634
    unsigned int q4640;  // 0x4640
    unsigned int q4644;  // 0x4644
    unsigned char q4648;  // 0x4648
    unsigned char q464C;  // 0x464C
    unsigned char q4650;  // 0x4650
    unsigned char q4654;  // 0x4654
    unsigned char q4658;  // 0x4658
    unsigned char q465C;  // 0x465C
    unsigned int q4660;  // 0x4660
    unsigned int q4664;  // 0x4664
    unsigned int q4668;  // 0x4668
    unsigned char q466C;  // 0x466C
    unsigned char q4670;  // 0x4670
    unsigned char q4674;  // 0x4674
    unsigned int q4680;  // 0x4680
    unsigned int q4684;  // 0x4684
    unsigned int q4688;  // 0x4688
    unsigned char q468C;  // 0x468C
    unsigned char q4690;  // 0x4690
    unsigned char q4694;  // 0x4694
    unsigned int q4700;  // 0x4700
    CampaignClass * q4704;  // 0x4704
    unsigned int q4708;  // 0x4708
    unsigned char q470C;  // 0x470C
    unsigned char q4710;  // 0x4710
    unsigned char q4714;  // 0x4714
    unsigned char q4718;  // 0x4718
    unsigned char q471C;  // 0x471C
    unsigned int q4720;  // 0x4720
    unsigned int q4724;  // 0x4724
    unsigned int q4728;  // 0x4728
    unsigned char q472C;  // 0x472C
    unsigned char q4730;  // 0x4730
    unsigned char q4734;  // 0x4734
    BuildingTypeClass* q4744;  // 0x4744
    unsigned char q4748;  // 0x4748
    unsigned char q474C;  // 0x474C
    unsigned int q4760;  // 0x4760
    unsigned char q4764;  // 0x4764
    unsigned char q4768;  // 0x4768
    int q4864;  // 0x4864
    unsigned char q4868;  // 0x4868
    unsigned char q486C;  // 0x486C
    unsigned char q4870;  // 0x4870
    void* q4900;  // 0x4900
    AnimClass* q4904;  // 0x4904
    unsigned char q4908;  // 0x4908
    unsigned char q490C;  // 0x490C
    unsigned int q4914;  // 0x4914
    unsigned int q4918;  // 0x4918
    unsigned char q491C;  // 0x491C
    unsigned char q4920;  // 0x4920
    unsigned int q4984;  // 0x4984
    unsigned char q4988;  // 0x4988
    unsigned char q498C;  // 0x498C
    unsigned char q4990;  // 0x4990
    unsigned int q4994;  // 0x4994
    unsigned char q4998;  // 0x4998
    unsigned char q499C;  // 0x499C
    unsigned char q49A0;  // 0x49A0
    unsigned int q5120;  // 0x5120
    unsigned int q5124;  // 0x5124
    unsigned int q5128;  // 0x5128
    unsigned char q512C;  // 0x512C
    unsigned char q5130;  // 0x5130
    unsigned char q5134;  // 0x5134
    OverlayTypeClass* q5138;  // 0x5138
    unsigned char q513C;  // 0x513C
    unsigned char q5140;  // 0x5140
    unsigned char q5144;  // 0x5144
    unsigned char q5148;  // 0x5148
    unsigned char q514C;  // 0x514C
    unsigned char q5158;  // 0x5158
    unsigned char q515C;  // 0x515C
    ObjectClass* q5160;  // 0x5160
    unsigned char q5164;  // 0x5164
    unsigned char q5168;  // 0x5168
    unsigned char q516C;  // 0x516C
    void* q5170;  // 0x5170
    unsigned char q5174;  // 0x5174
    unsigned char q5178;  // 0x5178
    unsigned char q517C;  // 0x517C
    unsigned char q5180;  // 0x5180
    unsigned char q5184;  // 0x5184
    unsigned int q5188;  // 0x5188
    unsigned char q518C;  // 0x518C
    unsigned char q5190;  // 0x5190
    unsigned char q5194;  // 0x5194
    unsigned char q5198;  // 0x5198
    unsigned char q519C;  // 0x519C
    void* q5220;  // 0x5220
    unsigned char q5224;  // 0x5224
    unsigned char q5228;  // 0x5228
    unsigned char q522C;  // 0x522C
    unsigned char q5230;  // 0x5230
    unsigned char q5234;  // 0x5234
    unsigned char q5238;  // 0x5238
    unsigned int q5260;  // 0x5260
    unsigned int q5264;  // 0x5264
    unsigned int q5268;  // 0x5268
    unsigned char q526C;  // 0x526C
    unsigned int q5270;  // 0x5270
    unsigned char q5274;  // 0x5274
    unsigned int q5280;  // 0x5280
    unsigned int q5284;  // 0x5284
    unsigned int q5288;  // 0x5288
    unsigned char q528C;  // 0x528C
    unsigned char q5290;  // 0x5290
    unsigned char q5294;  // 0x5294
    unsigned int q5300;  // 0x5300
    unsigned char q5304;  // 0x5304
    unsigned int q5308;  // 0x5308
    unsigned char q530C;  // 0x530C
    unsigned char q5310;  // 0x5310
    unsigned char q5314;  // 0x5314
    unsigned int q5338;  // 0x5338
    unsigned char q533C;  // 0x533C
    unsigned int q5340;  // 0x5340
    unsigned int q5344;  // 0x5344
    unsigned int q5348;  // 0x5348
    unsigned char q534C;  // 0x534C
    unsigned int q5350;  // 0x5350
    unsigned char q5354;  // 0x5354
    unsigned int q5358;  // 0x5358
    unsigned char q535C;  // 0x535C
    unsigned char q5360;  // 0x5360
    unsigned char q5364;  // 0x5364
    unsigned char q536C;  // 0x536C
    unsigned char q5370;  // 0x5370
    unsigned char q5374;  // 0x5374
    unsigned char q5380;  // 0x5380
    unsigned int q5384;  // 0x5384
    AudioController* q5388;  // 0x5388
    unsigned char q538C;  // 0x538C
    unsigned char q5390;  // 0x5390
    unsigned char q5394;  // 0x5394
    unsigned int q539C;  // 0x539C
    unsigned int q53A0;  // 0x53A0
    unsigned int q53A4;  // 0x53A4
    unsigned int q53A5;  // 0x53A5
    unsigned int q53A6;  // 0x53A6
    bool q53A7;  // 0x53A7
    char q53A8[4];  // 0x53A8
    unsigned char q53AC;  // 0x53AC
    unsigned char q53D0;  // 0x53D0
    unsigned int q53D1;  // 0x53D1
    unsigned int q53D2;  // 0x53D2
    unsigned int q53D3;  // 0x53D3
    unsigned int q53D4;  // 0x53D4
    unsigned int q53D8;  // 0x53D8
    unsigned char q53DC;  // 0x53DC
    unsigned char q53E0;  // 0x53E0
    unsigned char q53E4;  // 0x53E4
    unsigned char q53E8;  // 0x53E8
    unsigned char q53EC;  // 0x53EC
    unsigned char q53F0;  // 0x53F0
    unsigned char q53F4;  // 0x53F4
    unsigned char q53F8;  // 0x53F8
    unsigned char q53FC;  // 0x53FC
    unsigned int q5400;  // 0x5400
    unsigned int q5404;  // 0x5404
    unsigned int q5408;  // 0x5408
    unsigned char q540C;  // 0x540C
    unsigned int q5420;  // 0x5420
    unsigned int q5424;  // 0x5424
    unsigned int q5428;  // 0x5428
    bool q5430;  // 0x5430
    unsigned char q5434;  // 0x5434
    unsigned char q5438;  // 0x5438
    unsigned int q5440;  // 0x5440
    unsigned int q5444;  // 0x5444
    unsigned char q5448;  // 0x5448
    unsigned char q544C;  // 0x544C
    unsigned char q5450;  // 0x5450
    void* q5460;  // 0x5460
    unsigned int q5464;  // 0x5464
    unsigned char q5468;  // 0x5468
    unsigned int q5480;  // 0x5480
    unsigned char q5484;  // 0x5484
    unsigned char q5488;  // 0x5488
    void* q5494;  // 0x5494
    unsigned char q5498;  // 0x5498
    unsigned char q549C;  // 0x549C
    unsigned char q54A0;  // 0x54A0
    unsigned char q54A4;  // 0x54A4
    unsigned char q54A8;  // 0x54A8
    unsigned char q54AC;  // 0x54AC
    unsigned char q54B0;  // 0x54B0
    unsigned char q54B4;  // 0x54B4
    ObjectClass * q5508;  // 0x5508
    unsigned char q550C;  // 0x550C
    bool q5510;  // 0x5510
    DynamicVector* q5514;  // 0x5514
    unsigned int u32_5518;  // 0x5518
    unsigned char q551C;  // 0x551C
    unsigned int q5520;  // 0x5520
    unsigned char q5524;  // 0x5524
    unsigned char q5528;  // 0x5528
    void* q552C;  // 0x552C
    unsigned char q5530;  // 0x5530
    void* q5538;  // 0x5538
    unsigned char q553C;  // 0x553C
    unsigned int q5544;  // 0x5544
    unsigned int q5545;  // 0x5545
    unsigned int q5546;  // 0x5546
    unsigned char q554A;  // 0x554A
    unsigned int q5550;  // 0x5550
    unsigned int q5554;  // 0x5554
    unsigned int q5558;  // 0x5558
    unsigned int u32_555C;  // 0x555C
    unsigned int u32_5560;  // 0x5560
    unsigned int u32_5564;  // 0x5564
    unsigned int u32_5568;  // 0x5568
    unsigned char q556C;  // 0x556C
    unsigned char q5570;  // 0x5570
    unsigned char q5574;  // 0x5574
    unsigned char q5578;  // 0x5578
    unsigned char q557C;  // 0x557C
    unsigned char q5580;  // 0x5580
    unsigned char q5584;  // 0x5584
    unsigned char q5588;  // 0x5588
    unsigned char q558C;  // 0x558C
    unsigned char q5590;  // 0x5590
    unsigned char q5594;  // 0x5594
    unsigned char q5598;  // 0x5598
    unsigned char q559C;  // 0x559C
    unsigned char q5604;  // 0x5604
    unsigned char q5608;  // 0x5608
    unsigned char q560C;  // 0x560C
    unsigned char q5610;  // 0x5610
    unsigned char q5618;  // 0x5618
    unsigned char q561C;  // 0x561C
    unsigned char q5634;  // 0x5634
    unsigned char q5638;  // 0x5638
    unsigned char q563C;  // 0x563C
    unsigned char q5640;  // 0x5640
    unsigned char q5644;  // 0x5644
    unsigned char q5648;  // 0x5648
    AbstractTypeClass* q5660;  // 0x5660
    AbstractTypeClass* q5664;  // 0x5664
    AbstractTypeClass* q5668;  // 0x5668
    unsigned char q566C;  // 0x566C
    unsigned char q5670;  // 0x5670
    unsigned int q5684;  // 0x5684
    unsigned char q5688;  // 0x5688
    unsigned char q568C;  // 0x568C
    unsigned char q56E0;  // 0x56E0
    unsigned char q56E4;  // 0x56E4
    unsigned char q56E8;  // 0x56E8
    unsigned char q56EC;  // 0x56EC
    unsigned char q56F0;  // 0x56F0
    unsigned char q56F4;  // 0x56F4
    unsigned char q56F8;  // 0x56F8
    unsigned char q56FC;  // 0x56FC
    unsigned char q5700;  // 0x5700
    unsigned char q5704;  // 0x5704
    unsigned int q5728;  // 0x5728
    unsigned char q572C;  // 0x572C
    unsigned char q5730;  // 0x5730
    unsigned char q5734;  // 0x5734
    AudioController* q5750;  // 0x5750
    unsigned char q5754;  // 0x5754
    unsigned char q5758;  // 0x5758
    void* q5774;  // 0x5774
    unsigned char q5778;  // 0x5778
    unsigned char q577C;  // 0x577C
    unsigned char q5780;  // 0x5780
    unsigned char q5784;  // 0x5784
    TimerStruct * ptr_5788;  // 0x5788
    unsigned char q578C;  // 0x578C
    unsigned char q5790;  // 0x5790
    unsigned char q5794;  // 0x5794
    void* q5798;  // 0x5798
    unsigned char q579C;  // 0x579C
    unsigned char q57A0;  // 0x57A0
    unsigned char q57A4;  // 0x57A4
    unsigned char q57A8;  // 0x57A8
    unsigned char q57AC;  // 0x57AC
    unsigned char q57B0;  // 0x57B0
    unsigned char q57B4;  // 0x57B4
    unsigned char q57B8;  // 0x57B8
    unsigned char q57BC;  // 0x57BC
    unsigned char q57C0;  // 0x57C0
    void* q5824;  // 0x5824
    unsigned char q5828;  // 0x5828
    unsigned char q582C;  // 0x582C
    unsigned char q5830;  // 0x5830
    int q5884;  // 0x5884
    unsigned char q5888;  // 0x5888
    unsigned char q588C;  // 0x588C
    unsigned char q5920;  // 0x5920
    unsigned char q5924;  // 0x5924
    unsigned int q5928;  // 0x5928
    unsigned char q592C;  // 0x592C
    unsigned char q5930;  // 0x5930
    unsigned int q5938;  // 0x5938
    unsigned char q593C;  // 0x593C
    unsigned char q6020;  // 0x6020
    unsigned int q6024;  // 0x6024
    unsigned char q6028;  // 0x6028
    unsigned char q602C;  // 0x602C
    void* q6034;  // 0x6034
    unsigned char q6038;  // 0x6038
    unsigned char q603C;  // 0x603C
    unsigned int q6144;  // 0x6144
    unsigned int q6148;  // 0x6148
    unsigned char q614C;  // 0x614C
    unsigned char q6150;  // 0x6150
    unsigned int q6180;  // 0x6180
    unsigned int q6184;  // 0x6184
    unsigned char q6188;  // 0x6188
    unsigned char q618C;  // 0x618C
    unsigned int q6194;  // 0x6194
    unsigned char q6198;  // 0x6198
    unsigned char q619C;  // 0x619C
    unsigned int q6230;  // 0x6230
    unsigned char q6234;  // 0x6234
    unsigned char q6238;  // 0x6238
    unsigned int q6240;  // 0x6240
    unsigned char q6244;  // 0x6244
    unsigned char q6248;  // 0x6248
    unsigned char q624C;  // 0x624C
    void* q6260;  // 0x6260
    unsigned char q6264;  // 0x6264
    unsigned char q6268;  // 0x6268
    unsigned int q6280;  // 0x6280
    unsigned char q6284;  // 0x6284
    unsigned int q6294;  // 0x6294
    unsigned char q6298;  // 0x6298
    unsigned char q629C;  // 0x629C
    unsigned char q6404;  // 0x6404
    Coord* q6408;  // 0x6408
    unsigned char q640C;  // 0x640C
    unsigned char q6410;  // 0x6410
    unsigned char q6420;  // 0x6420
    unsigned char q6424;  // 0x6424
    unsigned char q6438;  // 0x6438
    unsigned char q643C;  // 0x643C
    unsigned char q6440;  // 0x6440
    unsigned int q6454;  // 0x6454
    unsigned char q6458;  // 0x6458
    unsigned char q645C;  // 0x645C
    unsigned char q74D8;  // 0x74D8
    unsigned char q74DC;  // 0x74DC
    unsigned char q74E0;  // 0x74E0
    unsigned char q74E4;  // 0x74E4
    unsigned int __pad_1D4;
    unsigned int _base;
    unsigned int _bufsiz;
    unsigned int _cnt;
    unsigned int _file;
    unsigned int _flag;
    unsigned int _ptr;
    unsigned int field_0;
    unsigned int *__pad_74;
    unsigned int LoadGameAssets;
    void* HandleClick;  // 0x0 (no offset truth)
// --- flat members (END) ---
    char LoadCursors();
    char ToggleContextGadget(int a1, int a2);
     double DrawCursor(...);  // C2597 interim stub
    static double CalcConfiningRect(...);  // C2597 interim stub
     double Construct(...);  // C2597 interim stub
    void * LoadTypeData();  // 0x5bdf30
    unsigned char m_8[64];  // pad compile-supply (G41.47)
    unsigned char m_10[64];  // pad compile-supply (G41.47)
    unsigned char m_1[64];  // pad compile-supply (G41.47)
    int GetPosition();  // 0x5bdaa0
    int ReleaseSubsystem();
    int ReleaseChannel();
    void DestroyAll(void * Block);
    int Reset();
    int ResetChannel(int a2, int a3);
    int ResetChannel2(int a2, int a3);
    int SetupPlayback();
    int SelectRandom();
    void CleanupChannels();
    int ReadStreamAndSyncPosition();
    int SetPlaybackCallback();
    int ProcessCallback(void *a1_1);
    void InitNodeFields();
    int GetChannel();
    int ReadStreamAndReturn(void *a1_1);
    int ReadSamples(const void * a2, void *a2_2);
    MouseClass * * DrawWaveform(IUnknown * aP1, IUnknown * aP2, IUnknown * aP3, IUnknown * aP4, int a6, int a7, int a8);
    int SetFlag4C();
    int ProcessStream();
    void Destructor(unsigned int * Block);
    int CheckFormatChanged(int a1, const void * a2);
    int InitListAndCounters(void *a1_1);
    int UpdateTimers();
    int UpdateCountdowners();
    char * Constructor(uint64_t);
};

} // namespace gamemd
