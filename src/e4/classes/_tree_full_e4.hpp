// GENERATED full flat definitions for tree-owned classes
// (gen_tree_full_e4.py) — namespace-isolated C2027 fix,
// zero tree dependencies. Bodies access these via e4 TUs only.
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct AudioChannel;
struct CampaignScore;
struct DialogControl_OwnerDraw;
struct DynamicVectorClass;
struct FractalNoise;
struct Gap2Recv_402F60;
struct HashTable;
struct KeywordType;
struct Locomotor;
struct MSAnim;
struct MSShapeAnim;
struct ObjectClass;
struct ReferenceCounted;
struct ShapeButtonClass;
struct State;
struct VectorClass;
struct VectorCursor_uint_DynamicVectorClass_uint;
struct WinAPI;
struct WorldDominationTour;
struct _;

struct AudioChannel {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
};

struct CampaignScore {
    void* vfptr;
    void* q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
};

struct DialogControl_OwnerDraw {
    void* vfptr;
};

struct DynamicVectorClass {
    void* vfptr;
    void* q000;  // 0x0
    void* Items;  // 0x4
    int Capacity;  // 0x8
    bool IsInitialized;  // 0xC
    bool IsAllocated;  // 0xD
    int Count;  // 0x10
    int CapacityIncrement;  // 0x14
};

struct FractalNoise {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct Gap2Recv_402F60 {
    void* vfptr;
    unsigned int u32_28;  // 0x28
    unsigned int q040;  // 0x40
    unsigned int u32_5C;  // 0x5C
    unsigned int u32_60;  // 0x60
    unsigned int q064;  // 0x64
    unsigned int u32_68;  // 0x68
    unsigned int u32_6C;  // 0x6C
    unsigned int u32_70;  // 0x70
    unsigned int u32_74;  // 0x74
    unsigned int u32_78;  // 0x78
    unsigned int u32_7C;  // 0x7C
    unsigned int u32_80;  // 0x80
    unsigned int u32_88;  // 0x88
    char u32_E8;  // 0xE8
    int u32_F8;  // 0xF8
    unsigned int q100;  // 0x100
    unsigned int q104;  // 0x104
    unsigned int q108;  // 0x108
    CampaignClass * ptr_110;  // 0x110
    CampaignClass * ptr_118;  // 0x118
    AbstractClass * q120;  // 0x120
    unsigned int q124;  // 0x124
    unsigned int q128;  // 0x128
    unsigned int u32_12C;  // 0x12C
    unsigned int u64_130;  // 0x130
    LineTrail * ptr_138;  // 0x138
    AbstractClass * ptr_140;  // 0x140
    unsigned int q150;  // 0x150
    CampaignClass * ptr_158;  // 0x158
    unsigned int u32_15C;  // 0x15C
    int q248;  // 0x248
    unsigned int q260;  // 0x260
    unsigned int q264;  // 0x264
    unsigned int q274;  // 0x274
    unsigned int q278;  // 0x278
    CampaignClass * q280;  // 0x280
    AbstractClass * q288;  // 0x288
    unsigned int q300;  // 0x300
    unsigned int q304;  // 0x304
    unsigned int q310;  // 0x310
    AbstractClass * q320;  // 0x320
    CampaignClass * q344;  // 0x344
    unsigned int q348;  // 0x348
    unsigned int M992;  // 0x3E0
    unsigned int M1040;  // 0x410
    unsigned int M1184;  // 0x4A0
    unsigned int M1200;  // 0x4B0
    unsigned int M1376;  // 0x560
    unsigned int M1392;  // 0x570
    int q584;  // 0x584
    unsigned int q598;  // 0x598
    unsigned int q608;  // 0x608
    unsigned int q628;  // 0x628
    CampaignClass * q640;  // 0x640
    AbstractClass * q648;  // 0x648
    unsigned int q658;  // 0x658
    unsigned int q768;  // 0x768
    unsigned int q784;  // 0x784
    AbstractClass * q800;  // 0x800
    unsigned int q840;  // 0x840
    unsigned int q1040;  // 0x1040
    unsigned int q1184;  // 0x1184
    unsigned int q1200;  // 0x1200
    char q1378;  // 0x1378
    unsigned int q1544;  // 0x1544
    unsigned int q1554;  // 0x1554
    CampaignClass * q1574;  // 0x1574
    CampaignClass * q1600;  // 0x1600
    AbstractClass * q1608;  // 0x1608
    unsigned int q1624;  // 0x1624
    unsigned int q1634;  // 0x1634
    unsigned int q1924;  // 0x1924
    AbstractClass * q2048;  // 0x2048
    unsigned int q2054;  // 0x2054
    unsigned int q2450;  // 0x2450
    unsigned int q4160;  // 0x4160
    unsigned int q4484;  // 0x4484
    unsigned int q4608;  // 0x4608
    char q4984;  // 0x4984
    unsigned int q5010;  // 0x5010
    int q5138;  // 0x5138
    unsigned int q5170;  // 0x5170
    unsigned int q5444;  // 0x5444
    unsigned int q5460;  // 0x5460
    unsigned int q5494;  // 0x5494
    unsigned int q5510;  // 0x5510
    AbstractClass * q5640;  // 0x5640
    unsigned int q5668;  // 0x5668
    unsigned int q5684;  // 0x5684
    unsigned int q6294;  // 0x6294
    LineTrail * q6438;  // 0x6438
    AbstractClass * q8264;  // 0x8264
    CampaignClass * q8450;  // 0x8450
    unsigned int q17540;  // 0x17540
    unsigned int q17928;  // 0x17928
    unsigned int q18818;  // 0x18818
    char q18820;  // 0x18820
    unsigned int q20848;  // 0x20848
    unsigned int q21600;  // 0x21600
    CampaignClass * q21650;  // 0x21650
    AbstractClass * q22080;  // 0x22080
    unsigned int q22120;  // 0x22120
    unsigned int q22148;  // 0x22148
    unsigned int q25654;  // 0x25654
    AbstractClass * q33380;  // 0x33380
    unsigned int q33398;  // 0x33398
    unsigned int q33570;  // 0x33570
    unsigned int q33894;  // 0x33894
    unsigned int q91958;  // 0x91958
    char q100384;  // 0x100384
    int q133010;  // 0x133010
    unsigned int q136704;  // 0x136704
    CampaignClass * q136784;  // 0x136784
    unsigned int q137078;  // 0x137078
    unsigned int q152118;  // 0x152118
    unsigned int q153094;  // 0x153094
    LineTrail * q153174;  // 0x153174
    unsigned int q210288;  // 0x210288
    CampaignClass * q211058;  // 0x211058
    unsigned int q226598;  // 0x226598
    unsigned int q1253958;  // 0x1253958
    int q1257488;  // 0x1257488
    unsigned int q1257874;  // 0x1257874
    unsigned int q1271138;  // 0x1271138
    CampaignClass * q1271684;  // 0x1271684
    CampaignClass * q1282918;  // 0x1282918
    unsigned int q1283410;  // 0x1283410
    unsigned int q1283474;  // 0x1283474
    unsigned int q1384728;  // 0x1384728
    unsigned int q1388914;  // 0x1388914
    AbstractClass * q2135954;  // 0x2135954
    unsigned int q2166930;  // 0x2166930
    unsigned int q19216728;  // 0x19216728
    int q19231880;  // 0x19231880
    unsigned int q19232884;  // 0x19232884
    unsigned int q19337528;  // 0x19337528
    CampaignClass * q19338884;  // 0x19338884
    unsigned int q19347830;  // 0x19347830
    AbstractClass * q19409250;  // 0x19409250
    unsigned int q19411984;  // 0x19411984
    unsigned int q19412084;  // 0x19412084
    unsigned int q20465448;  // 0x20465448
    unsigned int q20482324;  // 0x20482324
    AbstractClass * q34822484;  // 0x34822484
    unsigned int q35009334;  // 0x35009334
    unsigned int q35996210;  // 0x35996210
    unsigned int q92635238;  // 0x92635238
    unsigned int q386364230;  // 0x386364230
    unsigned int q422802728;  // 0x422802728
    unsigned int q422806914;  // 0x422806914
    CampaignClass * q422807684;  // 0x422807684
    unsigned int q422869040;  // 0x422869040
    AbstractClass * q423662160;  // 0x423662160
    unsigned int q423698564;  // 0x423698564
    unsigned int q541480008;  // 0x541480008
    unsigned int q541598500;  // 0x541598500
    AbstractClass * q880944260;  // 0x880944260
    CampaignClass * q889334114;  // 0x889334114
    unsigned int q899244560;  // 0x899244560
    unsigned int q2455982648;  // 0x2455982648
    unsigned int q4364247650;  // 0x4364247650
    unsigned int q4365243654;  // 0x4365243654
    unsigned int q15136604720;  // 0x15136604720
    char q15136604770;  // 0x15136604770
    unsigned int q17758693160;  // 0x17758693160
    unsigned int q17758713478;  // 0x17758713478
    unsigned int q17759113280;  // 0x17759113280
    AbstractClass * q17773764960;  // 0x17773764960
    unsigned int q22570074120;  // 0x22570074120
    unsigned int q22571209318;  // 0x22571209318
    LineTrail * q22571222274;  // 0x22571222274
    unsigned int q36516995330;  // 0x36516995330
    unsigned int q36661584198;  // 0x36661584198
    unsigned int q156054857288;  // 0x156054857288
    unsigned int q1448316258080;  // 0x1448316258080
    char q1448316258160;  // 0x1448316258160
    unsigned int q1611578549058;  // 0x1611578549058
    int q1611703603238;  // 0x1611703603238
    unsigned int q1612096024928;  // 0x1612096024928
    unsigned int q1612096536630;  // 0x1612096536630
    unsigned int q1612096550008;  // 0x1612096550008
    unsigned int q1612107035264;  // 0x1612107035264
    CampaignClass * q1612549859458;  // 0x1612549859458
    unsigned int q1612552106354;  // 0x1612552106354
    unsigned int q2359816569120;  // 0x2359816569120
    unsigned int q2359835005720;  // 0x2359835005720
    unsigned int q2359835107954;  // 0x2359835107954
    AbstractClass * q3732705346358;  // 0x3732705346358
    unsigned int q3732705727280;  // 0x3732705727280
    CampaignClass * q3738254661974;  // 0x3738254661974
    unsigned int q3750194484338;  // 0x3750194484338
    unsigned int q23503479075464;  // 0x23503479075464
    unsigned int q356804779671680;  // 0x356804779671680
    char q356804779671904;  // 0x356804779671904
    unsigned int q388219817726040;  // 0x388219817726040
    unsigned int q388267560290600;  // 0x388267560290600
    unsigned int q388267565606448;  // 0x388267565606448
    unsigned int q388267565711368;  // 0x388267565711368
    unsigned int q388269456183908;  // 0x388269456183908
    unsigned int q621877793937184;  // 0x621877793937184
    LineTrail * q621877794994518;  // 0x621877794994518
    unsigned int q971036362437248;  // 0x971036362437248
    unsigned int q971428040484870;  // 0x971428040484870
    CampaignClass * q971428529052020;  // 0x971428529052020
    unsigned int q973074573312824;  // 0x973074573312824
    unsigned int q9939810483917924;  // 0x9939810483917924
    int q254491193000887958;  // 0x254491193000887958
    unsigned int q254495664600278088;  // 0x254495664600278088
    CampaignClass * q254495664601371494;  // 0x254495664601371494
    unsigned int q254495797487876360;  // 0x254495797487876360
    AbstractClass * q254497871881323270;  // 0x254497871881323270
    unsigned int q254497877295003970;  // 0x254497877295003970
    unsigned int q254497877309523350;  // 0x254497877309523350
    unsigned int q441783164189885490;  // 0x441783164189885490
    unsigned int q441783186122949910;  // 0x441783186122949910
    unsigned int q680895963529816100;  // 0x680895963529816100
    unsigned int q28987213957842482274;  // 0x28987213957842482274
    char q664452195371059458838;  // 0x664452195371059458838
    unsigned int q687470033808347431734;  // 0x687470033808347431734
    int q687470288687413623128;  // 0x687470288687413623128
    CampaignClass * q687471499344216528020;  // 0x687471499344216528020
    CampaignClass * q687472098382617781378;  // 0x687472098382617781378
    AbstractClass * ptr_120;  // 0x687472098382632333936
    unsigned int q1256072819367807046800;  // 0x1256072819367807046800
    unsigned int q1256072821702053660754;  // 0x1256072821702053660754
    AbstractClass * q1918688943235778218370;  // 0x1918688943235778218370
    unsigned int q1918720364301116346690;  // 0x1918720364301116346690
    unsigned int q80354708348500678551830;  // 0x80354708348500678551830
    unsigned int q7727066811216743666898434;  // 0x7727066811216743666898434
    unsigned int q7892384126200935667144500;  // 0x7892384126200935667144500
    unsigned int q2479905610309400749000693808;  // 0x2479905610309400749000693808
    unsigned int q7764961091878984669135918598;  // 0x7764961091878984669135918598
    unsigned int q7764961092133969250445526098;  // 0x7764961092133969250445526098
};

struct HashTable {
    void* vfptr;
    CampaignClass* q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q034;  // 0x34
    unsigned int u32_38;  // 0x38
    unsigned int u32_3C;  // 0x3C
    unsigned char q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q04C;  // 0x4C
    unsigned char q050;  // 0x50
};

struct KeywordType {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct Locomotor {
    void* vfptr;
    char Locomotor_field_00[4];  // 0x0
};

struct MSAnim {
    void* vfptr;
    void* vtable1;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
};

struct MSShapeAnim {
    void* vfptr;
    void* vtable1;  // 0x0
    unsigned char q004;  // 0x4
    unsigned int u32_7;  // 0x7
};

struct ObjectClass {
    void* vfptr;
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    void* uniqueId;  // 0x10
    unsigned int q011;  // 0x11
    bool IsAllocated;  // 0x13
    void* abstractFlags;  // 0x14
    void* nextArrayIndex;  // 0x18
    void* referenceCount;  // 0x1C
    bool q01D;  // 0x1D
    unsigned int q01E;  // 0x1E
    void* NeedsSaveOrLink;  // 0x20
    unsigned int objectTypeFlags;  // 0x24
    unsigned int q027;  // 0x27
    unsigned int owningHouseIndex;  // 0x28
    BufferIOFileClass* q02A;  // 0x2A
    bool q02B;  // 0x2B
    char fallRate[4];  // 0x2C
    unsigned int u32_2D;  // 0x2D
    unsigned int u32_2E;  // 0x2E
    unsigned int u32_2F;  // 0x2F
    ObjectClass* nextObject;  // 0x30
    unsigned char q031;  // 0x31
    unsigned char needsSave;  // 0x32
    unsigned int pad21;  // 0x33
    TagClass* attachedTag;  // 0x34
    unsigned int u32_35;  // 0x35
    unsigned int occupant;  // 0x36
    BombClass* attachedBomb;  // 0x38
    unsigned int u32_39;  // 0x39
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    char ambientSoundController[20];  // 0x3C
    AudioController* q03D;  // 0x3D
    IUnknown* q040;  // 0x40
    unsigned int u32_41;  // 0x41
    void* q044;  // 0x44
    unsigned char u8_45;  // 0x45
    unsigned int u32_46;  // 0x46
    unsigned int u32_47;  // 0x47
    AudioController* q048;  // 0x48
    unsigned int u32_49;  // 0x49
    bool q04A;  // 0x4A
    AudioController* q04C;  // 0x4C
    unsigned char q04F;  // 0x4F
    char customSound_controller[20];  // 0x50
    void* q054;  // 0x54
    void* q058;  // 0x58
    unsigned int q05A;  // 0x5A
    IPXGlobalConnClass* q05C;  // 0x5C
    ObjectClass* q060;  // 0x60
    unsigned int u32_61;  // 0x61
    unsigned int u32_62;  // 0x62
    unsigned int u32_63;  // 0x63
    char customSound[4];  // 0x64
    bool bombVisible;  // 0x68
    unsigned char alignmentPadding69;  // 0x69
    unsigned int q06A;  // 0x6A
    char health[4];  // 0x6C
    AbstractClass* q06F;  // 0x6F
    char estimatedHealth[4];  // 0x70
    bool isOnMap;  // 0x74
    unsigned char alignmentPadding75;  // 0x75
    unsigned int u32_77;  // 0x77
    unsigned int spawnStatus;  // 0x78
    unsigned int u32_7B;  // 0x7B
    unsigned int visibilityFlags;  // 0x7C
    unsigned int u32_7F;  // 0x7F
    bool needsRedraw;  // 0x80
    bool inLimbo;  // 0x81
    bool inOpenToppedTransport;  // 0x82
    bool isSelected;  // 0x83
    bool hasParachute;  // 0x84
    unsigned char alignmentPadding85;  // 0x85
    AnimClass* parachute;  // 0x88
    unsigned int q08A;  // 0x8A
    unsigned int q08B;  // 0x8B
    bool onBridge;  // 0x8C
    bool isFallingDown;  // 0x8D
    bool wasFallingDown;  // 0x8E
    bool isBomb;  // 0x8F
    bool isAliveFlag;  // 0x90
    unsigned char alignmentPadding91;  // 0x91
    unsigned int lastLayer;  // 0x94
    bool isInLogic;  // 0x98
    bool isVisible;  // 0x99
    unsigned char alignmentPadding99;  // 0x9A
    char location[12];  // 0x9C
    void* q0A0;  // 0xA0
    unsigned char q0A1;  // 0xA1
    unsigned int u32_A2;  // 0xA2
    unsigned char q0A3;  // 0xA3
    void* q0A4;  // 0xA4
    unsigned int u32_A5;  // 0xA5
    unsigned int u32_A6;  // 0xA6
    LineTrail* lineTrailer;  // 0xA8
    unsigned char q0A9;  // 0xA9
    unsigned char q0AA;  // 0xAA
    unsigned int q0AB;  // 0xAB
};

struct ReferenceCounted {
    void* vfptr;
    void* vtable1;  // 0x0
};

struct ShapeButtonClass {
    void* vfptr;
    void* vtable1;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
};

struct State {
    void* vfptr;
    unsigned char q000;  // 0x0
    int Players;  // 0x4
    int AIPlayers;  // 0x8
    int GameSpeed;  // 0xC
    int StartingCredits;  // 0x10
    bool SuperWeapons;  // 0x14
    bool BuildOffAlly;  // 0x15
    bool FogOfWar;  // 0x16
    bool MCVRedeploys;  // 0x17
    bool AlliesAllowed;  // 0x18
    bool ShortGame;  // 0x19
    bool Crates;  // 0x1A
    bool MultiEngineer;  // 0x1B
    bool Bridies;  // 0x1C
    unsigned char q01D;  // 0x1D
    int ScenIndex;  // 0x20
    int MapIndex;  // 0x24
    int LastSave;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned int q034;  // 0x34
};

struct VectorClass {
    void* vfptr;
    void* vtable1;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned int tail_E;  // 0xE
};

struct VectorCursor_uint_DynamicVectorClass_uint {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
};

struct WinAPI {
    void* vfptr;
    unsigned char q000;  // 0x0
    static int Wrapper(int a2);  // consensus: 350+ uniform 1-arg sites
};

struct WorldDominationTour {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct _ {
    void* vfptr;
    void * Items;  // 0x4
    int Capacity;  // 0x8
    unsigned int u32_C;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned char q018;  // 0x18
    unsigned char q024;  // 0x24
    unsigned char q054;  // 0x54
    unsigned char q084;  // 0x84
    unsigned char q774;  // 0x774
    unsigned char q1908;  // 0x1908
    unsigned char q6408;  // 0x6408
    unsigned char q25608;  // 0x25608
    unsigned char q1388694;  // 0x1388694
};


} // namespace gamemd
