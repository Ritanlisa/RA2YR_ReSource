// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct HouseClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    void* uniqueId;  // 0x10
    bool IsAllocated;  // 0x13
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    unsigned int q01A;  // 0x1A
    int referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    void* vtable5;  // 0x24
    void* vtable6;  // 0x28
    void* vtable7;  // 0x2C
    char relatedTagsCount[4];  // 0x30
    unsigned int alignmentPadding;  // 0x33
    char relatedTagsCapacity[4];  // 0x34
    int arrayIndex;  // 0x36
    BuildingClass** conYards;  // 0x38
    char conYardsCount[4];  // 0x3C
    char conYardsCapacity[4];  // 0x40
    BuildingClass** buildings;  // 0x44
    unsigned int q045;  // 0x45
    char buildingsCount[4];  // 0x48
    char buildingsCapacity[4];  // 0x4C
    BuildingClass** unitRepairStations;  // 0x50
    char repairStationsCount[4];  // 0x54
    char repairStationsCapacity[4];  // 0x58
    bool q059;  // 0x59
    unsigned int q05A;  // 0x5A
    BuildingClass** grinders;  // 0x5C
    unsigned int q05D;  // 0x5D
    char grindersCount[4];  // 0x60
    char grindersCapacity[4];  // 0x64
    unsigned int q065;  // 0x65
    BuildingClass** absorbers;  // 0x68
    char absorbersCount[4];  // 0x6C
    char absorbersCapacity[4];  // 0x70
    BuildingClass** bunkers;  // 0x74
    unsigned int q075;  // 0x75
    char bunkersCount[4];  // 0x78
    char bunkersCapacity[4];  // 0x7C
    BuildingClass** occupiables;  // 0x80
    unsigned int q083;  // 0x83
    char occupiablesCount[4];  // 0x84
    char occupiablesCapacity[4];  // 0x88
    BuildingClass** cloningVats;  // 0x8C
    unsigned int q08D;  // 0x8D
    unsigned int q08F;  // 0x8F
    char cloningVatsCount[4];  // 0x90
    char cloningVatsCapacity[4];  // 0x94
    BuildingClass** secretLabs;  // 0x98
    char secretLabsCount[4];  // 0x9C
    char secretLabsCapacity[4];  // 0xA0
    BuildingClass** psychicDetectionBuildings;  // 0xA4
    unsigned int q0A5;  // 0xA5
    char psychicDetectionCount[4];  // 0xA8
    unsigned char q0A9;  // 0xA9
    unsigned char q0AA;  // 0xAA
    unsigned int q0AB;  // 0xAB
    char psychicDetectionCapacity[4];  // 0xAC
    BuildingClass** productionFactory_plants;  // 0xB0
    char productionFactory_plants_count[4];  // 0xB4
    char productionFactory_plants_capacity[4];  // 0xB8
    unsigned char q0B9;  // 0xB9
    char countResourceGatherers[4];  // 0xBC
    unsigned int q0BD;  // 0xBD
    char countResourceDestinations[4];  // 0xC0
    unsigned int q0C3;  // 0xC3
    char countWarfactories[4];  // 0xC4
    char infantrySelfHeal[4];  // 0xC8
    char unitsSelfHeal[4];  // 0xCC
    StartingTechnoStruct** startingUnits;  // 0xD0
    char startingUnitsCount[4];  // 0xD4
    unsigned int q0D5;  // 0xD5
    unsigned int q0D6;  // 0xD6
    char startingUnitsCapacity[4];  // 0xD8
    char aiDifficulty[4];  // 0xDC
    bool q0DD;  // 0xDD
    double firepowerMultiplier;  // 0xE0
    CampaignClass* q0E4;  // 0xE4
    double groundspeedMultiplier;  // 0xE8
    bool q0EB;  // 0xEB
    unsigned int u32_EC;  // 0xEC
    unsigned int q0ED;  // 0xED
    double airspeedMultiplier;  // 0xF0
    unsigned int q0F2;  // 0xF2
    unsigned int q0F4;  // 0xF4
    void* q0F7;  // 0xF7
    double armorMultiplier;  // 0xF8
    unsigned int q0F9;  // 0xF9
    unsigned char q0FB;  // 0xFB
    CampaignClass* q0FC;  // 0xFC
    double rofMultiplier;  // 0x100
    unsigned int q104;  // 0x104
    unsigned int u32_105;  // 0x105
    double costMultiplier;  // 0x108
    unsigned int q10C;  // 0x10C
    unsigned int q10F;  // 0x10F
    double buildTimeMultiplier;  // 0x110
    unsigned int q111;  // 0x111
    CampaignClass* q114;  // 0x114
    double repairDelay;  // 0x118
    unsigned int u32_11C;  // 0x11C
    unsigned int q11D;  // 0x11D
    double buildDelay;  // 0x120
    unsigned int q124;  // 0x124
    char iqLevel[4];  // 0x128
    unsigned int techLevel;  // 0x12C
    unsigned int altAllies;  // 0x130
    char startingCredits[4];  // 0x134
    unsigned int q135;  // 0x135
    char startingEdge[4];  // 0x138
    unsigned int q13C;  // 0x13C
    void* q140;  // 0x140
    void* q144;  // 0x144
    unsigned int q148;  // 0x148
    unsigned int u32_14C;  // 0x14C
    unsigned int q14D;  // 0x14D
    void* q150;  // 0x150
    unsigned int q154;  // 0x154
    unsigned int q158;  // 0x158
    unsigned int q15C;  // 0x15C
    unsigned int q160;  // 0x160
    unsigned int q162;  // 0x162
    int techInfiltrationFlags;  // 0x164
    unsigned char q166;  // 0x166
    int productionInfiltrationFlags;  // 0x168
    bool q16B;  // 0x16B
    void* q16C;  // 0x16C
    unsigned char q16D;  // 0x16D
    unsigned int q16F;  // 0x16F
    CampaignClass* q170;  // 0x170
    unsigned int q174;  // 0x174
    unsigned int u32_178;  // 0x178
    unsigned int q179;  // 0x179
    void* q17C;  // 0x17C
    void* q180;  // 0x180
    void* q184;  // 0x184
    void* q188;  // 0x188
    void* q18C;  // 0x18C
    AbstractClass* q190;  // 0x190
    unsigned int q194;  // 0x194
    unsigned int q198;  // 0x198
    unsigned int q199;  // 0x199
    unsigned int q19C;  // 0x19C
    void* q1A0;  // 0x1A0
    bool q1A1;  // 0x1A1
    unsigned int q1A2;  // 0x1A2
    void* q1A4;  // 0x1A4
    unsigned int q1A5;  // 0x1A5
    unsigned int q1A7;  // 0x1A7
    void* q1A8;  // 0x1A8
    void* q1AC;  // 0x1AC
    void* q1B0;  // 0x1B0
    unsigned int q1B1;  // 0x1B1
    void* q1B4;  // 0x1B4
    unsigned int q1B5;  // 0x1B5
    unsigned int q1B8;  // 0x1B8
    AbstractClass* q1BC;  // 0x1BC
    void* q1C0;  // 0x1C0
    void* q1C4;  // 0x1C4
    void* q1C8;  // 0x1C8
    void* q1CC;  // 0x1CC
    unsigned char q1CD;  // 0x1CD
    unsigned int q1D0;  // 0x1D0
    unsigned int q1D4;  // 0x1D4
    unsigned int q1D8;  // 0x1D8
    unsigned int q1DC;  // 0x1DC
    unsigned int u32_1E0;  // 0x1E0
    unsigned int HouseClass_field_1E4;  // 0x1E4
    char sideIndex[4];  // 0x1E8
    bool currentPlayer;  // 0x1EC
    bool playerControl;  // 0x1ED
    bool production;  // 0x1EE
    bool autocreateAllowed;  // 0x1EF
    unsigned char HouseClass_field_1F0;  // 0x1F0
    bool aiTriggersActive;  // 0x1F2
    bool autoBaseBuilding;  // 0x1F3
    bool isDiscoveredByPlayer;  // 0x1F4
    bool defeated;  // 0x1F5
    bool isGameOver;  // 0x1F6
    bool isWinner;  // 0x1F7
    bool isLoser;  // 0x1F8
    bool civiliansEvacuated;  // 0x1F9
    bool firestormActive;  // 0x1FA
    bool hasThreatNode;  // 0x1FB
    bool recheckTechTree;  // 0x1FC
    unsigned char HouseClass_field_1FD;  // 0x1FD
    bool q1FF;  // 0x1FF
    int q200;  // 0x200
    int q201;  // 0x201
    int q202;  // 0x202
    int q204;  // 0x204
    unsigned int q206;  // 0x206
    unsigned int q208;  // 0x208
    char selectedPathIndex[4];  // 0x20C
    unsigned int q20D;  // 0x20D
    void* planningPaths;  // 0x210
    unsigned int q214;  // 0x214
    AbstractClass* q218;  // 0x218
    HouseClass* q21C;  // 0x21C
    int q220;  // 0x220
    void* q224;  // 0x224
    unsigned int q228;  // 0x228
    unsigned int q22B;  // 0x22B
    unsigned char q22C;  // 0x22C
    unsigned char q230;  // 0x230
    unsigned char q234;  // 0x234
    unsigned int q239;  // 0x239
    char visionary[1];  // 0x240
    bool mapIsClear;  // 0x241
    bool unknownBool242;  // 0x242
    bool unknownBool243;  // 0x243
    bool hasBeenThieved;  // 0x244
    bool repairing;  // 0x245
    bool unknownBool246;  // 0x246
    bool unknownBool247;  // 0x247
    bool unknownBool248;  // 0x248
    bool allToHunt;  // 0x249
    bool HouseClass_field_bool_24A;  // 0x24A
    bool HouseClass_field_bool_24B;  // 0x24B
    char iqLevel2[4];  // 0x24C
    unsigned int q24E;  // 0x24E
    char aiMode[4];  // 0x250
    SuperClass** supers;  // 0x254
    unsigned int q255;  // 0x255
    char supersCount[4];  // 0x258
    char supersCapacity[4];  // 0x25C
    char lastBuiltBuildingType[4];  // 0x260
    bool q263;  // 0x263
    char lastBuiltInfantryType[4];  // 0x264
    char lastBuiltAircraftType[4];  // 0x268
    unsigned int q26A;  // 0x26A
    char lastBuiltVehicleType[4];  // 0x26C
    char allowWinBlocks[4];  // 0x270
    char repairTimer[12];  // 0x274
    unsigned int q278;  // 0x278
    void* q27C;  // 0x27C
    bool q27F;  // 0x27F
    void* q280;  // 0x280
    unsigned int q284;  // 0x284
    unsigned int q288;  // 0x288
    char HouseClass_field_timer_28C[12];  // 0x28C
    unsigned int q28D;  // 0x28D
    unsigned char q290;  // 0x290
    unsigned int q294;  // 0x294
    char savourTimer[12];  // 0x298
    unsigned int q29B;  // 0x29B
    unsigned int u32_29C;  // 0x29C
    unsigned int q2A0;  // 0x2A0
    unsigned int q2A2;  // 0x2A2
    char powerBlackoutTimer[12];  // 0x2A4
    void* q2A8;  // 0x2A8
    char q2A9[4];  // 0x2A9
    unsigned int u32_2AC;  // 0x2AC
    char radarBlackoutTimer[12];  // 0x2B0
    unsigned int u32_2B4;  // 0x2B4
    char q2B7[4];  // 0x2B7
    void* q2B8;  // 0x2B8
    bool side2TechInfiltrated;  // 0x2BC
    bool side1TechInfiltrated;  // 0x2BD
    bool side0TechInfiltrated;  // 0x2BE
    bool barracksInfiltrated;  // 0x2BF
    bool warFactoryInfiltrated;  // 0x2C0
    unsigned char q2C1;  // 0x2C1
    unsigned int infantryAltOwner;  // 0x2C4
    unsigned int unitAltOwner;  // 0x2C8
    unsigned int aircraftAltOwner;  // 0x2CC
    bool q2CF;  // 0x2CF
    unsigned int buildingAltOwner;  // 0x2D0
    char airportDocks[4];  // 0x2D4
    unsigned int q2D6;  // 0x2D6
    char poweredUnitCenters[4];  // 0x2D8
    unsigned int HouseClass_field_2DC;  // 0x2DC
    unsigned int q2DD;  // 0x2DD
    unsigned int HouseClass_field_2E0;  // 0x2E0
    unsigned int HouseClass_field_2E4;  // 0x2E4
    char ownedUnits[4];  // 0x2E8
    char ownedNavy[4];  // 0x2EC
    char ownedBuildings[4];  // 0x2F0
    char ownedInfantry[4];  // 0x2F4
    char ownedAircraft[4];  // 0x2F8
    char ownedTiberium[16];  // 0x2FC
    int q300;  // 0x300
    unsigned int q301;  // 0x301
    int q304;  // 0x304
    char q308[4];  // 0x308
    unsigned int q30A;  // 0x30A
    unsigned int balance;  // 0x30C
    bool q30F;  // 0x30F
    char totalStorage[4];  // 0x310
    char ownedWeed[16];  // 0x314
    unsigned char q318;  // 0x318
    unsigned int q31D;  // 0x31D
    unsigned int q320;  // 0x320
    unsigned int unknown324;  // 0x324
    char builtInfantryTypes[2056];  // 0x328
    unsigned int q32B;  // 0x32B
    unsigned char q32C;  // 0x32C
    unsigned char q330;  // 0x330
    unsigned char q334;  // 0x334
    unsigned int q338;  // 0x338
    unsigned char q33C;  // 0x33C
    unsigned int q340;  // 0x340
    unsigned int q344;  // 0x344
    unsigned int q347;  // 0x347
    unsigned int q348;  // 0x348
    unsigned char q34C;  // 0x34C
    unsigned int q34E;  // 0x34E
    void * q350;  // 0x350
    unsigned int q354;  // 0x354
    void * q358;  // 0x358
    unsigned char q35C;  // 0x35C
    int q360;  // 0x360
    unsigned char q364;  // 0x364
    bool q366;  // 0x366
    unsigned int q368;  // 0x368
    unsigned int q36E;  // 0x36E
    int q370;  // 0x370
    void * q374;  // 0x374
    unsigned int q375;  // 0x375
    unsigned char q378;  // 0x378
    unsigned int q380;  // 0x380
    char q384[4];  // 0x384
    unsigned int q388;  // 0x388
    unsigned int q38B;  // 0x38B
    void * ptr_390;  // 0x390
    unsigned char q394;  // 0x394
    unsigned int q39A;  // 0x39A
    unsigned int q3A1;  // 0x3A1
    unsigned int u32_3AC;  // 0x3AC
    unsigned char q3B0;  // 0x3B0
    unsigned int q3B1;  // 0x3B1
    unsigned int q3B7;  // 0x3B7
    unsigned int q3BA;  // 0x3BA
    char q3BC[4];  // 0x3BC
    unsigned char q3C0;  // 0x3C0
    unsigned int u32_3C8;  // 0x3C8
    unsigned char q3CC;  // 0x3CC
    unsigned char q3D7;  // 0x3D7
    unsigned int u32_3E4;  // 0x3E4
    unsigned char q3E8;  // 0x3E8
    unsigned int q3FE;  // 0x3FE
    unsigned int q400;  // 0x400
    unsigned int q404;  // 0x404
    unsigned int q408;  // 0x408
    unsigned int q418;  // 0x418
    void* q41C;  // 0x41C
    unsigned int q420;  // 0x420
    unsigned int q424;  // 0x424
    unsigned int q428;  // 0x428
    HouseClass* q42C;  // 0x42C
    unsigned int u32_43C;  // 0x43C
    unsigned int q440;  // 0x440
    unsigned int q444;  // 0x444
    unsigned int q448;  // 0x448
    void * ptr_458;  // 0x458
    unsigned char q45C;  // 0x45C
    unsigned int q45D;  // 0x45D
    unsigned int q460;  // 0x460
    unsigned int q464;  // 0x464
    char q465[4];  // 0x465
    unsigned int q468;  // 0x468
    unsigned int q473;  // 0x473
    void * ptr_474;  // 0x474
    unsigned int u32_478;  // 0x478
    unsigned int q47A;  // 0x47A
    unsigned int q480;  // 0x480
    unsigned int q481;  // 0x481
    unsigned int q484;  // 0x484
    unsigned int q487;  // 0x487
    int q488;  // 0x488
    unsigned char q48C;  // 0x48C
    char q494;  // 0x494
    char q498;  // 0x498
    void* q49C;  // 0x49C
    char q4A4[4];  // 0x4A4
    void* q4A8;  // 0x4A8
    unsigned int q4AB;  // 0x4AB
    unsigned char q4AC;  // 0x4AC
    void* q4B0;  // 0x4B0
    void* q4B4;  // 0x4B4
    unsigned char q4B8;  // 0x4B8
    void* q4C4;  // 0x4C4
    unsigned char q4C8;  // 0x4C8
    void* q4CC;  // 0x4CC
    void* q4D0;  // 0x4D0
    unsigned char q4D4;  // 0x4D4
    void* q4D8;  // 0x4D8
    unsigned char q4DC;  // 0x4DC
    void* q4F8;  // 0x4F8
    unsigned char q4FC;  // 0x4FC
    char q500;  // 0x500
    char q504;  // 0x504
    char q508;  // 0x508
    void* q50C;  // 0x50C
    unsigned char q510;  // 0x510
    unsigned int q514;  // 0x514
    unsigned int q518;  // 0x518
    void* q51C;  // 0x51C
    void* q520;  // 0x520
    int q524;  // 0x524
    unsigned int q528;  // 0x528
    unsigned int q52B;  // 0x52B
    void* q52C;  // 0x52C
    unsigned int q52D;  // 0x52D
    int q530;  // 0x530
    int q534;  // 0x534
    void* q538;  // 0x538
    AbstractClass* q53C;  // 0x53C
    unsigned int q540;  // 0x540
    int q544;  // 0x544
    void* q548;  // 0x548
    AbstractClass* q54C;  // 0x54C
    unsigned int q550;  // 0x550
    void* q554;  // 0x554
    AbstractClass* q558;  // 0x558
    void* q55C;  // 0x55C
    unsigned char q560;  // 0x560
    void* q564;  // 0x564
    unsigned char q568;  // 0x568
    unsigned char q570;  // 0x570
    char q578;  // 0x578
    char q580;  // 0x580
    char q584;  // 0x584
    int q588;  // 0x588
    void* q58C;  // 0x58C
    unsigned int q590;  // 0x590
    unsigned int q594;  // 0x594
    unsigned int q598;  // 0x598
    void* q59C;  // 0x59C
    unsigned char q5A0;  // 0x5A0
    ObjectClass* q5A4;  // 0x5A4
    unsigned char q5A8;  // 0x5A8
    void* q5B4;  // 0x5B4
    unsigned char q5B8;  // 0x5B8
    unsigned char q5C0;  // 0x5C0
    void* q5C4;  // 0x5C4
    unsigned char q5C8;  // 0x5C8
    void* q5CC;  // 0x5CC
    unsigned char q5D0;  // 0x5D0
    void* q5D4;  // 0x5D4
    unsigned char q5D8;  // 0x5D8
    ObjectClass* q5E0;  // 0x5E0
    unsigned char q5E4;  // 0x5E4
    unsigned int q5E8;  // 0x5E8
    BuildingTypeClass* q5EC;  // 0x5EC
    unsigned char q5F0;  // 0x5F0
    void* q5F4;  // 0x5F4
    unsigned char q5F8;  // 0x5F8
    void* q5FC;  // 0x5FC
    void * q600;  // 0x600
    int q604;  // 0x604
    int q608;  // 0x608
    void* q60C;  // 0x60C
    void* q610;  // 0x610
    AbstractClass* q614;  // 0x614
    unsigned int q618;  // 0x618
    AbstractClass* q61C;  // 0x61C
    int q620;  // 0x620
    int q624;  // 0x624
    unsigned int q628;  // 0x628
    void* q62C;  // 0x62C
    unsigned int q630;  // 0x630
    void* q634;  // 0x634
    unsigned char q638;  // 0x638
    void* q63C;  // 0x63C
    unsigned int q640;  // 0x640
    unsigned int q644;  // 0x644
    void* q648;  // 0x648
    unsigned char q64C;  // 0x64C
    unsigned char q650;  // 0x650
    unsigned int q658;  // 0x658
    AbstractClass* q65C;  // 0x65C
    unsigned int u32_65E;  // 0x65E
    unsigned int q660;  // 0x660
    unsigned int q664;  // 0x664
    unsigned int q668;  // 0x668
    AbstractClass* q670;  // 0x670
    unsigned int q674;  // 0x674
    unsigned char q678;  // 0x678
    AbstractClass* q67C;  // 0x67C
    void* q680;  // 0x680
    unsigned int q684;  // 0x684
    unsigned int q688;  // 0x688
    AbstractClass* q68C;  // 0x68C
    unsigned char q690;  // 0x690
    AbstractClass* q694;  // 0x694
    unsigned char q698;  // 0x698
    AbstractClass* q69C;  // 0x69C
    unsigned char q6A0;  // 0x6A0
    unsigned char q6C4;  // 0x6C4
    unsigned int q6C8;  // 0x6C8
    void* q6CC;  // 0x6CC
    unsigned int q6D0;  // 0x6D0
    unsigned int q6D4;  // 0x6D4
    unsigned int q6D8;  // 0x6D8
    unsigned char q6DC;  // 0x6DC
    unsigned int q6E0;  // 0x6E0
    unsigned int q6E4;  // 0x6E4
    unsigned int q6E8;  // 0x6E8
    void* q6EC;  // 0x6EC
    AbstractClass* q6F0;  // 0x6F0
    void* q6F4;  // 0x6F4
    unsigned int q6F8;  // 0x6F8
    AbstractClass* q6FC;  // 0x6FC
    char q700;  // 0x700
    char q704;  // 0x704
    int q708;  // 0x708
    unsigned int q70C;  // 0x70C
    unsigned int q710;  // 0x710
    AbstractClass* q714;  // 0x714
    AbstractClass* q718;  // 0x718
    unsigned char q71C;  // 0x71C
    int q720;  // 0x720
    int q724;  // 0x724
    int q728;  // 0x728
    void * ptr_734;  // 0x734
    unsigned char q738;  // 0x738
    unsigned int q740;  // 0x740
    int q744;  // 0x744
    int q748;  // 0x748
    void* q75C;  // 0x75C
    int q760;  // 0x760
    unsigned int q764;  // 0x764
    int q768;  // 0x768
    void* q76C;  // 0x76C
    unsigned char q770;  // 0x770
    void* q774;  // 0x774
    unsigned int q778;  // 0x778
    void* q77C;  // 0x77C
    int q780;  // 0x780
    int q784;  // 0x784
    unsigned int q788;  // 0x788
    unsigned char q78C;  // 0x78C
    unsigned int q790;  // 0x790
    void* q794;  // 0x794
    unsigned char q798;  // 0x798
    void* q79C;  // 0x79C
    unsigned int q7A0;  // 0x7A0
    unsigned int q7A4;  // 0x7A4
    void* q7A8;  // 0x7A8
    unsigned char q7AC;  // 0x7AC
    unsigned int u32_7B0;  // 0x7B0
    void* q7B4;  // 0x7B4
    unsigned char q7B8;  // 0x7B8
    unsigned int q7BC;  // 0x7BC
    unsigned char q7C0;  // 0x7C0
    unsigned int u32_7C4;  // 0x7C4
    unsigned char q7C8;  // 0x7C8
    unsigned int u32_7E0;  // 0x7E0
    unsigned int u32_7EC;  // 0x7EC
    unsigned int u32_7FC;  // 0x7FC
    void* q800;  // 0x800
    unsigned int q804;  // 0x804
    void* q808;  // 0x808
    void * q818;  // 0x818
    unsigned char q820;  // 0x820
    unsigned int q824;  // 0x824
    unsigned char q828;  // 0x828
    unsigned char q82C;  // 0x82C
    unsigned char q830;  // 0x830
    void * q834;  // 0x834
    unsigned int q840;  // 0x840
    unsigned int q844;  // 0x844
    void * q848;  // 0x848
    void * q850;  // 0x850
    unsigned int q854;  // 0x854
    unsigned char q858;  // 0x858
    unsigned int u32_85C;  // 0x85C
    unsigned char q860;  // 0x860
    int q864;  // 0x864
    unsigned char q868;  // 0x868
    unsigned char q86C;  // 0x86C
    bool q870;  // 0x870
    unsigned char q874;  // 0x874
    unsigned int q878;  // 0x878
    void* q87C;  // 0x87C
    void * q880;  // 0x880
    void * q884;  // 0x884
    unsigned int q888;  // 0x888
    unsigned int u32_88C;  // 0x88C
    unsigned int u32_898;  // 0x898
    void* q8A0;  // 0x8A0
    void* q8A4;  // 0x8A4
    unsigned char q8A8;  // 0x8A8
    unsigned int u32_8AC;  // 0x8AC
    unsigned int u32_8B0;  // 0x8B0
    unsigned int u32_8B4;  // 0x8B4
    unsigned int u32_8B8;  // 0x8B8
    unsigned int u32_8BC;  // 0x8BC
    unsigned int u32_8C0;  // 0x8C0
    unsigned int u32_8C4;  // 0x8C4
    unsigned int u32_8C8;  // 0x8C8
    unsigned char q8CC;  // 0x8CC
    unsigned int u32_8E4;  // 0x8E4
    unsigned char q8E8;  // 0x8E8
    void * q900;  // 0x900
    void* q904;  // 0x904
    unsigned char q908;  // 0x908
    unsigned char q90C;  // 0x90C
    void* q910;  // 0x910
    unsigned int q914;  // 0x914
    unsigned int q918;  // 0x918
    unsigned int u32_91C;  // 0x91C
    void* q920;  // 0x920
    unsigned int q928;  // 0x928
    void* q92C;  // 0x92C
    unsigned char q930;  // 0x930
    void * ptr_938;  // 0x938
    void* q93C;  // 0x93C
    unsigned int q940;  // 0x940
    unsigned char q944;  // 0x944
    void* q948;  // 0x948
    unsigned int u32_950;  // 0x950
    void * q954;  // 0x954
    unsigned char q958;  // 0x958
    unsigned char q960;  // 0x960
    unsigned int q968;  // 0x968
    void * ptr_970;  // 0x970
    unsigned char q974;  // 0x974
    unsigned int q984;  // 0x984
    unsigned int u32_98C;  // 0x98C
    unsigned char q990;  // 0x990
    unsigned int u32_9A8;  // 0x9A8
    void* q9AC;  // 0x9AC
    unsigned int u32_9C4;  // 0x9C4
    unsigned int q9C7;  // 0x9C7
    unsigned char q9C8;  // 0x9C8
    unsigned char q9CC;  // 0x9CC
    unsigned int u32_9E0;  // 0x9E0
    unsigned char q9E4;  // 0x9E4
    unsigned int u32_9FC;  // 0x9FC
    unsigned char qA00;  // 0xA00
    unsigned int u32_A18;  // 0xA18
    unsigned char qA1C;  // 0xA1C
    unsigned int u32_A34;  // 0xA34
    unsigned char qA38;  // 0xA38
    unsigned int u32_A50;  // 0xA50
    void* qA54;  // 0xA54
    void* qA60;  // 0xA60
    unsigned int u32_A6C;  // 0xA6C
    unsigned char qA70;  // 0xA70
    unsigned int u32_A88;  // 0xA88
    unsigned char qA8C;  // 0xA8C
    unsigned int u32_AA4;  // 0xAA4
    unsigned char qAA8;  // 0xAA8
    unsigned int u32_AC0;  // 0xAC0
    unsigned char qAC4;  // 0xAC4
    unsigned int u32_ADC;  // 0xADC
    unsigned char qAE0;  // 0xAE0
    unsigned int u32_AE4;  // 0xAE4
    void* qB1C;  // 0xB1C
    unsigned int u32_B20;  // 0xB20
    void* qB24;  // 0xB24
    char builtUnitTypes[2056];  // 0xB30
    unsigned int u32_B3C;  // 0xB3C
    unsigned char qB40;  // 0xB40
    unsigned int u32_B58;  // 0xB58
    void* qB5C;  // 0xB5C
    unsigned char qB60;  // 0xB60
    unsigned int u32_B74;  // 0xB74
    unsigned char qB78;  // 0xB78
    unsigned int u32_B90;  // 0xB90
    Coord* qBB8;  // 0xBB8
    Coord* qBBC;  // 0xBBC
    unsigned int u32_BC0;  // 0xBC0
    unsigned char qBC4;  // 0xBC4
    void* qBF0;  // 0xBF0
    void* qBF4;  // 0xBF4
    unsigned char qBF8;  // 0xBF8
    void* qBFC;  // 0xBFC
    void* qC00;  // 0xC00
    unsigned int u32_C04;  // 0xC04
    unsigned int u32_C20;  // 0xC20
    unsigned char qC24;  // 0xC24
    unsigned int u32_C3C;  // 0xC3C
    unsigned int u32_C58;  // 0xC58
    unsigned char qC5C;  // 0xC5C
    unsigned int u32_C74;  // 0xC74
    unsigned int u32_C90;  // 0xC90
    unsigned char qC94;  // 0xC94
    unsigned char u8_C9D;  // 0xC9D
    unsigned int u32_CAC;  // 0xCAC
    unsigned int u32_CC8;  // 0xCC8
    unsigned char qCCC;  // 0xCCC
    unsigned int u32_CE4;  // 0xCE4
    unsigned int u32_D00;  // 0xD00
    unsigned int u32_D1C;  // 0xD1C
    unsigned int u32_D38;  // 0xD38
    unsigned char qD3C;  // 0xD3C
    AbstractClass* qD64;  // 0xD64
    void* qD68;  // 0xD68
    unsigned char qD6C;  // 0xD6C
    Tactical* qD70;  // 0xD70
    AbstractClass* qD74;  // 0xD74
    void* qD78;  // 0xD78
    void* qD7C;  // 0xD7C
    unsigned int u32_D80;  // 0xD80
    void* qD84;  // 0xD84
    unsigned int u32_D9C;  // 0xD9C
    void* qDA0;  // 0xDA0
    void* qDB0;  // 0xDB0
    unsigned char qDB4;  // 0xDB4
    unsigned int u32_DB8;  // 0xDB8
    void* qDBC;  // 0xDBC
    unsigned int u32_DD4;  // 0xDD4
    void* qDD8;  // 0xDD8
    void* qDF0;  // 0xDF0
    void* qDF4;  // 0xDF4
    void* qDF8;  // 0xDF8
    void* qDFC;  // 0xDFC
    unsigned int qE00;  // 0xE00
    unsigned int qE04;  // 0xE04
    void* qE08;  // 0xE08
    void* qE0C;  // 0xE0C
    unsigned int u32_E10;  // 0xE10
    unsigned char qE14;  // 0xE14
    unsigned int u32_E1C;  // 0xE1C
    unsigned int u32_E2C;  // 0xE2C
    unsigned char qE30;  // 0xE30
    ObjectTypeClass* qE48;  // 0xE48
    unsigned int u32_E4C;  // 0xE4C
    unsigned char qE50;  // 0xE50
    AbstractClass* qE5C;  // 0xE5C
    unsigned char qE60;  // 0xE60
    unsigned int u32_E68;  // 0xE68
    unsigned char qE6C;  // 0xE6C
    void* qE74;  // 0xE74
    unsigned int u32_E84;  // 0xE84
    unsigned char qE88;  // 0xE88
    unsigned int u32_EA0;  // 0xEA0
    unsigned char qEA4;  // 0xEA4
    void* qEB8;  // 0xEB8
    ObjectTypeClass* qEBC;  // 0xEBC
    unsigned char qEC0;  // 0xEC0
    unsigned int u32_EC4;  // 0xEC4
    unsigned char qEC8;  // 0xEC8
    void* qEE0;  // 0xEE0
    void* qEE4;  // 0xEE4
    unsigned int u32_EE8;  // 0xEE8
    unsigned char qEEC;  // 0xEEC
    unsigned int u32_F04;  // 0xF04
    unsigned int qF08;  // 0xF08
    unsigned int qF0C;  // 0xF0C
    unsigned char qF10;  // 0xF10
    unsigned int u32_F20;  // 0xF20
    unsigned char qF24;  // 0xF24
    WeaponTypeClass* qF8C;  // 0xF8C
    unsigned char qF90;  // 0xF90
    void* qFA8;  // 0xFA8
    ObjectTypeClass* qFC0;  // 0xFC0
    ObjectTypeClass* qFC4;  // 0xFC4
    unsigned char qFC8;  // 0xFC8
    unsigned int u32_FF8;  // 0xFF8
    unsigned char q1000;  // 0x1000
    void* q1014;  // 0x1014
    unsigned char q1018;  // 0x1018
    unsigned int q1024;  // 0x1024
    unsigned int q1028;  // 0x1028
    int q1030;  // 0x1030
    void* q1044;  // 0x1044
    unsigned char q1048;  // 0x1048
    void* q104C;  // 0x104C
    unsigned char q1050;  // 0x1050
    void* q1054;  // 0x1054
    unsigned int q1058;  // 0x1058
    void* q105C;  // 0x105C
    unsigned int q1060;  // 0x1060
    unsigned int q1064;  // 0x1064
    unsigned char q1068;  // 0x1068
    void* q106C;  // 0x106C
    unsigned char q1070;  // 0x1070
    unsigned int q1074;  // 0x1074
    unsigned int q1078;  // 0x1078
    void* q107C;  // 0x107C
    unsigned char q1080;  // 0x1080
    unsigned int q1084;  // 0x1084
    unsigned int q1088;  // 0x1088
    void* q108C;  // 0x108C
    unsigned char q1090;  // 0x1090
    void* q1094;  // 0x1094
    unsigned char q1098;  // 0x1098
    void* q109C;  // 0x109C
    unsigned char q10A0;  // 0x10A0
    void* q10A4;  // 0x10A4
    unsigned char q10A8;  // 0x10A8
    void* q10AC;  // 0x10AC
    unsigned char q10B0;  // 0x10B0
    void* q10B4;  // 0x10B4
    unsigned char q10B8;  // 0x10B8
    void* q10BC;  // 0x10BC
    void* q10C0;  // 0x10C0
    unsigned int u32_10C4;  // 0x10C4
    void* q10CC;  // 0x10CC
    unsigned char q10D0;  // 0x10D0
    void* q10E0;  // 0x10E0
    unsigned char q10E4;  // 0x10E4
    void* q10EC;  // 0x10EC
    void* q10F0;  // 0x10F0
    unsigned char q10F4;  // 0x10F4
    void* q10FC;  // 0x10FC
    unsigned char q1100;  // 0x1100
    unsigned int q1110;  // 0x1110
    unsigned char q1114;  // 0x1114
    void* q111C;  // 0x111C
    unsigned int q1120;  // 0x1120
    unsigned int q1124;  // 0x1124
    unsigned int q1128;  // 0x1128
    void* q112C;  // 0x112C
    void* q1130;  // 0x1130
    void* q1134;  // 0x1134
    unsigned int q1138;  // 0x1138
    unsigned char q113C;  // 0x113C
    void * q1140;  // 0x1140
    unsigned int q1144;  // 0x1144
    unsigned int q1148;  // 0x1148
    unsigned char q114C;  // 0x114C
    unsigned int u32_1150;  // 0x1150
    void* q1154;  // 0x1154
    void * ptr_1158;  // 0x1158
    void* q115C;  // 0x115C
    int q1160;  // 0x1160
    unsigned char q1164;  // 0x1164
    char q1170;  // 0x1170
    void * ptr_1174;  // 0x1174
    unsigned char q1178;  // 0x1178
    void* q1180;  // 0x1180
    char q1188[4];  // 0x1188
    void * ptr_1194;  // 0x1194
    void* q1198;  // 0x1198
    unsigned int u32_11B0;  // 0x11B0
    void* q11B4;  // 0x11B4
    unsigned int u32_11CC;  // 0x11CC
    unsigned char q11D0;  // 0x11D0
    unsigned int u32_11E8;  // 0x11E8
    unsigned char q11EC;  // 0x11EC
    void* q1200;  // 0x1200
    void * ptr_1204;  // 0x1204
    void* q1208;  // 0x1208
    unsigned char q120C;  // 0x120C
    unsigned char q1214;  // 0x1214
    unsigned char q1218;  // 0x1218
    unsigned char q121C;  // 0x121C
    void * ptr_1220;  // 0x1220
    void* q1224;  // 0x1224
    void* q1228;  // 0x1228
    unsigned char q122C;  // 0x122C
    unsigned char q1230;  // 0x1230
    unsigned char q1234;  // 0x1234
    unsigned int u32_123C;  // 0x123C
    unsigned char q1240;  // 0x1240
    unsigned char q1244;  // 0x1244
    unsigned char q1248;  // 0x1248
    void* q1254;  // 0x1254
    void * ptr_1258;  // 0x1258
    unsigned char q125C;  // 0x125C
    void * ptr_1274;  // 0x1274
    unsigned char q1278;  // 0x1278
    char q1280;  // 0x1280
    char q1284;  // 0x1284
    char q1288;  // 0x1288
    void * ptr_1290;  // 0x1290
    unsigned char q1294;  // 0x1294
    int q1298;  // 0x1298
    unsigned int u32_12AC;  // 0x12AC
    unsigned char q12B0;  // 0x12B0
    void* q12C8;  // 0x12C8
    unsigned char q12CC;  // 0x12CC
    void* q12E4;  // 0x12E4
    unsigned char q12E8;  // 0x12E8
    unsigned int q1300;  // 0x1300
    unsigned int q1304;  // 0x1304
    unsigned char q1308;  // 0x1308
    unsigned char q130C;  // 0x130C
    unsigned char q1310;  // 0x1310
    unsigned char q1314;  // 0x1314
    unsigned int q1320;  // 0x1320
    void* q1324;  // 0x1324
    int q1328;  // 0x1328
    unsigned char q132C;  // 0x132C
    unsigned int q1330;  // 0x1330
    AbstractClass* q1334;  // 0x1334
    char builtAircraftTypes[2056];  // 0x1338
    void* q133C;  // 0x133C
    void* q1340;  // 0x1340
    unsigned int q1344;  // 0x1344
    int q1348;  // 0x1348
    unsigned char q134C;  // 0x134C
    unsigned char q1350;  // 0x1350
    unsigned char q1354;  // 0x1354
    void* q1358;  // 0x1358
    unsigned char q135C;  // 0x135C
    unsigned int q1360;  // 0x1360
    void* q1364;  // 0x1364
    AbstractClass* q1368;  // 0x1368
    void* q1374;  // 0x1374
    unsigned int q1378;  // 0x1378
    unsigned char q137C;  // 0x137C
    void* q1380;  // 0x1380
    unsigned char q1384;  // 0x1384
    unsigned char q1388;  // 0x1388
    void* q1390;  // 0x1390
    unsigned char q1394;  // 0x1394
    char q1398;  // 0x1398
    void* q13AC;  // 0x13AC
    unsigned char q13B0;  // 0x13B0
    void* q13C8;  // 0x13C8
    unsigned char q13CC;  // 0x13CC
    void* q13F0;  // 0x13F0
    void* q13F4;  // 0x13F4
    char q1400;  // 0x1400
    unsigned int q1404;  // 0x1404
    char q1408;  // 0x1408
    char q1410;  // 0x1410
    void* q1414;  // 0x1414
    unsigned char q1418;  // 0x1418
    void* q141C;  // 0x141C
    unsigned char q1420;  // 0x1420
    unsigned int q1424;  // 0x1424
    unsigned char q1428;  // 0x1428
    unsigned char q142C;  // 0x142C
    unsigned int q1430;  // 0x1430
    unsigned char q1434;  // 0x1434
    unsigned char q1440;  // 0x1440
    ObjectClass* q1444;  // 0x1444
    unsigned char q1448;  // 0x1448
    unsigned char q144C;  // 0x144C
    unsigned char q1454;  // 0x1454
    unsigned char q1458;  // 0x1458
    unsigned char q145C;  // 0x145C
    void* q1460;  // 0x1460
    ObjectTypeClass* q1464;  // 0x1464
    unsigned int q1468;  // 0x1468
    unsigned char q146C;  // 0x146C
    unsigned char q1470;  // 0x1470
    unsigned char q1480;  // 0x1480
    void* q1484;  // 0x1484
    unsigned int u32_1488;  // 0x1488
    unsigned char q148C;  // 0x148C
    unsigned char q1490;  // 0x1490
    unsigned int q14B0;  // 0x14B0
    void* q14BC;  // 0x14BC
    void* q14C0;  // 0x14C0
    void* q14C4;  // 0x14C4
    void* q14C8;  // 0x14C8
    unsigned char q14CC;  // 0x14CC
    void* q14D8;  // 0x14D8
    void* q14E0;  // 0x14E0
    unsigned char q14E4;  // 0x14E4
    unsigned int q14E5;  // 0x14E5
    unsigned int q14E6;  // 0x14E6
    unsigned int q14E7;  // 0x14E7
    unsigned char q14E8;  // 0x14E8
    unsigned int q14E9;  // 0x14E9
    unsigned int q14EA;  // 0x14EA
    unsigned int q14EB;  // 0x14EB
    void* q14EC;  // 0x14EC
    unsigned int q14ED;  // 0x14ED
    unsigned int q14EE;  // 0x14EE
    unsigned int q14EF;  // 0x14EF
    unsigned int q14F3;  // 0x14F3
    void* q14F4;  // 0x14F4
    unsigned char q14F8;  // 0x14F8
    void* q14FC;  // 0x14FC
    void* q1500;  // 0x1500
    unsigned char q1504;  // 0x1504
    unsigned char q1508;  // 0x1508
    void* q150C;  // 0x150C
    unsigned char q1510;  // 0x1510
    void* q151C;  // 0x151C
    unsigned char q1520;  // 0x1520
    int q1524;  // 0x1524
    unsigned int q1525;  // 0x1525
    unsigned int q1526;  // 0x1526
    unsigned char q1528;  // 0x1528
    void* q152C;  // 0x152C
    unsigned char q1530;  // 0x1530
    int q1540;  // 0x1540
    int q1544;  // 0x1544
    void* q1548;  // 0x1548
    void* q154C;  // 0x154C
    int q1554;  // 0x1554
    int q1558;  // 0x1558
    void* q155C;  // 0x155C
    void* q1560;  // 0x1560
    AbstractClass* q1564;  // 0x1564
    int q1568;  // 0x1568
    unsigned int q1574;  // 0x1574
    void* q1580;  // 0x1580
    unsigned int q1584;  // 0x1584
    char q1588[4];  // 0x1588
    unsigned int q158B;  // 0x158B
    unsigned int q1590;  // 0x1590
    unsigned int q15D5;  // 0x15D5
    unsigned int q15D7;  // 0x15D7
    unsigned int q15D8;  // 0x15D8
    unsigned int q15DA;  // 0x15DA
    unsigned int q15DB;  // 0x15DB
    unsigned int q15E2;  // 0x15E2
    unsigned int q1600;  // 0x1600
    unsigned int q1604;  // 0x1604
    void * q1608;  // 0x1608
    unsigned int q1618;  // 0x1618
    unsigned int q1624;  // 0x1624
    AbstractClass* q1628;  // 0x1628
    int q1634;  // 0x1634
    unsigned char q1638;  // 0x1638
    void* q163C;  // 0x163C
    unsigned int q1640;  // 0x1640
    unsigned char q1644;  // 0x1644
    void* q1648;  // 0x1648
    unsigned char q164C;  // 0x164C
    unsigned int q1650;  // 0x1650
    unsigned int q1654;  // 0x1654
    void* q1658;  // 0x1658
    unsigned char q165C;  // 0x165C
    void* q1660;  // 0x1660
    unsigned char q1664;  // 0x1664
    void* q1668;  // 0x1668
    void* q166C;  // 0x166C
    void* q1670;  // 0x1670
    void* q1674;  // 0x1674
    unsigned char q1678;  // 0x1678
    void* q167C;  // 0x167C
    void* q1680;  // 0x1680
    void* q1684;  // 0x1684
    void* q1688;  // 0x1688
    unsigned char q168C;  // 0x168C
    void* q16A8;  // 0x16A8
    void* q16AC;  // 0x16AC
    unsigned char q16B0;  // 0x16B0
    void* q16B4;  // 0x16B4
    void* q16CC;  // 0x16CC
    unsigned char q16D0;  // 0x16D0
    void* q16D4;  // 0x16D4
    void* q16D8;  // 0x16D8
    unsigned char q16DC;  // 0x16DC
    void* q16E4;  // 0x16E4
    unsigned char q16E8;  // 0x16E8
    void* q16EC;  // 0x16EC
    void* q16F0;  // 0x16F0
    void* q16F4;  // 0x16F4
    unsigned int q16F8;  // 0x16F8
    void* q16FC;  // 0x16FC
    void* q1700;  // 0x1700
    void* q1704;  // 0x1704
    void* q1708;  // 0x1708
    void* q170C;  // 0x170C
    void* q1710;  // 0x1710
    void* q1714;  // 0x1714
    unsigned char q1718;  // 0x1718
    void* q171C;  // 0x171C
    void* q1720;  // 0x1720
    void* q1724;  // 0x1724
    unsigned int q1728;  // 0x1728
    AbstractTypeClass* q172C;  // 0x172C
    AbstractTypeClass* q1730;  // 0x1730
    unsigned char q1734;  // 0x1734
    unsigned char q1738;  // 0x1738
    void* q173C;  // 0x173C
    unsigned int q1740;  // 0x1740
    unsigned int q1744;  // 0x1744
    unsigned int q1748;  // 0x1748
    void* q174C;  // 0x174C
    unsigned char q1750;  // 0x1750
    void* q1754;  // 0x1754
    unsigned char q1758;  // 0x1758
    unsigned char q175C;  // 0x175C
    unsigned int q1760;  // 0x1760
    unsigned int q1761;  // 0x1761
    void* q1764;  // 0x1764
    void* q1768;  // 0x1768
    unsigned int q176A;  // 0x176A
    void* q1770;  // 0x1770
    void* q1774;  // 0x1774
    AbstractTypeClass* q1778;  // 0x1778
    void* q177C;  // 0x177C
    void* q1780;  // 0x1780
    AbstractTypeClass* q1784;  // 0x1784
    void* q1788;  // 0x1788
    void* q178C;  // 0x178C
    unsigned char q1790;  // 0x1790
    unsigned int q1794;  // 0x1794
    unsigned char q1798;  // 0x1798
    void* q179C;  // 0x179C
    void* q17A0;  // 0x17A0
    unsigned char q17A4;  // 0x17A4
    void* q17A8;  // 0x17A8
    void* q17AC;  // 0x17AC
    unsigned char q17B0;  // 0x17B0
    void* q17BC;  // 0x17BC
    unsigned int u32_17C0;  // 0x17C0
    unsigned char q17C4;  // 0x17C4
    void* q17E0;  // 0x17E0
    void* q17E8;  // 0x17E8
    unsigned char q17EC;  // 0x17EC
    int q1800;  // 0x1800
    unsigned int q1804;  // 0x1804
    unsigned int q1808;  // 0x1808
    unsigned char q180C;  // 0x180C
    int q1810;  // 0x1810
    int q1814;  // 0x1814
    void* q181C;  // 0x181C
    unsigned char q1820;  // 0x1820
    int q1824;  // 0x1824
    int q1828;  // 0x1828
    void* q182C;  // 0x182C
    unsigned int q1830;  // 0x1830
    ObjectTypeClass* q1834;  // 0x1834
    unsigned char q1838;  // 0x1838
    void * q1844;  // 0x1844
    unsigned char q1848;  // 0x1848
    void* q184C;  // 0x184C
    unsigned char q1850;  // 0x1850
    void* q185C;  // 0x185C
    int q1860;  // 0x1860
    int q1864;  // 0x1864
    void* q186C;  // 0x186C
    unsigned char q1870;  // 0x1870
    int q1874;  // 0x1874
    int q1878;  // 0x1878
    void* q1884;  // 0x1884
    int q1888;  // 0x1888
    void* q18A8;  // 0x18A8
    void* q18AC;  // 0x18AC
    unsigned char q18B0;  // 0x18B0
    void* q1900;  // 0x1900
    unsigned char q1904;  // 0x1904
    void* q1908;  // 0x1908
    char q1910[4];  // 0x1910
    int q1920;  // 0x1920
    int q1924;  // 0x1924
    unsigned int q1928;  // 0x1928
    void* q1940;  // 0x1940
    unsigned char q1944;  // 0x1944
    void* q1948;  // 0x1948
    void* q1960;  // 0x1960
    unsigned char q1964;  // 0x1964
    unsigned int q1968;  // 0x1968
    unsigned int q1980;  // 0x1980
    unsigned char q1984;  // 0x1984
    unsigned int q1988;  // 0x1988
    unsigned int u32_1AF4;  // 0x1AF4
    char builtBuildingTypes[2056];  // 0x1B40
    unsigned int u32_1C08;  // 0x1C08
    unsigned int u32_1E2C;  // 0x1E2C
    unsigned int q2028;  // 0x2028
    unsigned int q2044;  // 0x2044
    unsigned int q2048;  // 0x2048
    unsigned int q2054;  // 0x2054
    unsigned char q2070;  // 0x2070
    unsigned char q2080;  // 0x2080
    unsigned int q2084;  // 0x2084
    unsigned char q2088;  // 0x2088
    unsigned int q2098;  // 0x2098
    void * q2100;  // 0x2100
    unsigned int q2118;  // 0x2118
    void * q2120;  // 0x2120
    void * q2128;  // 0x2128
    unsigned int q2130;  // 0x2130
    void * q2134;  // 0x2134
    unsigned char q2138;  // 0x2138
    unsigned char q2140;  // 0x2140
    unsigned char q2144;  // 0x2144
    int q2148;  // 0x2148
    bool q2160;  // 0x2160
    unsigned char q2164;  // 0x2164
    unsigned int q2168;  // 0x2168
    unsigned char q2170;  // 0x2170
    unsigned int u32_2174;  // 0x2174
    unsigned int q2178;  // 0x2178
    unsigned int u32_217C;  // 0x217C
    void * q2180;  // 0x2180
    unsigned int q2184;  // 0x2184
    unsigned int q2188;  // 0x2188
    unsigned int u32_218C;  // 0x218C
    unsigned int q2198;  // 0x2198
    unsigned int u32_21D0;  // 0x21D0
    unsigned int u32_21D4;  // 0x21D4
    unsigned int u32_21F4;  // 0x21F4
    unsigned int u32_21F8;  // 0x21F8
    unsigned int u32_21FC;  // 0x21FC
    unsigned int u32_2200;  // 0x2200
    unsigned int u32_2208;  // 0x2208
    unsigned int u32_2210;  // 0x2210
    unsigned int u32_2218;  // 0x2218
    void* q2220;  // 0x2220
    unsigned int q2224;  // 0x2224
    unsigned int u32_2228;  // 0x2228
    unsigned int u32_2230;  // 0x2230
    unsigned int u32_2238;  // 0x2238
    unsigned int u32_2240;  // 0x2240
    unsigned int q2244;  // 0x2244
    void* q2248;  // 0x2248
    unsigned int u32_2250;  // 0x2250
    unsigned int u32_2258;  // 0x2258
    unsigned int u32_2264;  // 0x2264
    unsigned int u32_2268;  // 0x2268
    unsigned int u32_226C;  // 0x226C
    unsigned int u32_2270;  // 0x2270
    unsigned int u32_2274;  // 0x2274
    unsigned int u32_2278;  // 0x2278
    unsigned char q2280;  // 0x2280
    unsigned int u32_2284;  // 0x2284
    unsigned int u32_2288;  // 0x2288
    unsigned int u32_228C;  // 0x228C
    unsigned int u32_2290;  // 0x2290
    unsigned int u32_22C8;  // 0x22C8
    unsigned int u32_22CC;  // 0x22CC
    unsigned int u32_22D0;  // 0x22D0
    unsigned int u32_22D4;  // 0x22D4
    unsigned int u32_22D8;  // 0x22D8
    unsigned int u32_22E0;  // 0x22E0
    unsigned int u32_22E8;  // 0x22E8
    unsigned int u32_22EC;  // 0x22EC
    unsigned int u32_22F8;  // 0x22F8
    unsigned int u32_22FC;  // 0x22FC
    unsigned int u32_2300;  // 0x2300
    void * q2304;  // 0x2304
    unsigned int u32_2308;  // 0x2308
    unsigned int u32_230C;  // 0x230C
    unsigned int u32_2320;  // 0x2320
    unsigned int q2324;  // 0x2324
    unsigned int u32_2328;  // 0x2328
    unsigned int q2338;  // 0x2338
    unsigned int u32_2340;  // 0x2340
    unsigned int u32_2344;  // 0x2344
    char killedInfantryTypes[2056];  // 0x2348
    void * q2360;  // 0x2360
    void* q2364;  // 0x2364
    unsigned int q2368;  // 0x2368
    unsigned int q2384;  // 0x2384
    void * q2388;  // 0x2388
    char q2390[4];  // 0x2390
    unsigned char q2394;  // 0x2394
    unsigned char q2400;  // 0x2400
    unsigned int q2408;  // 0x2408
    unsigned char q2418;  // 0x2418
    unsigned char q2420;  // 0x2420
    unsigned int q2444;  // 0x2444
    unsigned char q2448;  // 0x2448
    unsigned int q2454;  // 0x2454
    unsigned int q2500;  // 0x2500
    unsigned char q2504;  // 0x2504
    unsigned char q2508;  // 0x2508
    unsigned int q2528;  // 0x2528
    unsigned char q2560;  // 0x2560
    unsigned int q2584;  // 0x2584
    unsigned char q2588;  // 0x2588
    unsigned int q2640;  // 0x2640
    void* q2644;  // 0x2644
    unsigned int q2668;  // 0x2668
    unsigned char q2700;  // 0x2700
    unsigned int q2724;  // 0x2724
    unsigned char q2728;  // 0x2728
    unsigned int q2780;  // 0x2780
    unsigned char q2784;  // 0x2784
    unsigned int q2788;  // 0x2788
    void* q2844;  // 0x2844
    unsigned int q2848;  // 0x2848
    unsigned int q2864;  // 0x2864
    unsigned char q2880;  // 0x2880
    unsigned int q2904;  // 0x2904
    void* q2908;  // 0x2908
    unsigned int q2960;  // 0x2960
    char killedUnitTypes[2056];  // 0x2B50
    Coord* q3000;  // 0x3000
    Coord* q3004;  // 0x3004
    unsigned int q3008;  // 0x3008
    void* q3060;  // 0x3060
    unsigned char q3064;  // 0x3064
    void* q3068;  // 0x3068
    unsigned int q3104;  // 0x3104
    unsigned char q3108;  // 0x3108
    unsigned int q3160;  // 0x3160
    unsigned char q3164;  // 0x3164
    unsigned int q3188;  // 0x3188
    unsigned char q3220;  // 0x3220
    unsigned int q3244;  // 0x3244
    void* q3278;  // 0x3278
    unsigned int q3300;  // 0x3300
    unsigned int q3328;  // 0x3328
    char killedAircraftTypes[2056];  // 0x3358
    unsigned int q3384;  // 0x3384
    unsigned char q3388;  // 0x3388
    AbstractClass* q3428;  // 0x3428
    unsigned char q3434;  // 0x3434
    Tactical* q3440;  // 0x3440
    AbstractClass* q3444;  // 0x3444
    void* q3448;  // 0x3448
    void* q3460;  // 0x3460
    unsigned int q3484;  // 0x3484
    void* q3488;  // 0x3488
    unsigned int u32_34D4;  // 0x34D4
    void* q3504;  // 0x3504
    unsigned char q3508;  // 0x3508
    unsigned int q3540;  // 0x3540
    void* q3544;  // 0x3544
    void* q3568;  // 0x3568
    void* q3580;  // 0x3580
    unsigned int q3584;  // 0x3584
    unsigned int q3588;  // 0x3588
    unsigned int q3600;  // 0x3600
    unsigned char q3604;  // 0x3604
    unsigned int q3628;  // 0x3628
    unsigned int q3660;  // 0x3660
    unsigned char q3664;  // 0x3664
    unsigned int q3668;  // 0x3668
    unsigned char q3680;  // 0x3680
    unsigned int q3688;  // 0x3688
    void* q3700;  // 0x3700
    unsigned char q3720;  // 0x3720
    unsigned int q3744;  // 0x3744
    unsigned char q3748;  // 0x3748
    void* q3768;  // 0x3768
    unsigned int q3780;  // 0x3780
    unsigned char q3784;  // 0x3784
    void* q3808;  // 0x3808
    unsigned char q3820;  // 0x3820
    unsigned int q3844;  // 0x3844
    unsigned int q3848;  // 0x3848
    WeaponTypeClass* q3980;  // 0x3980
    unsigned char q3984;  // 0x3984
    char killedBuildingTypes[2056];  // 0x3B60
    unsigned int u32_3E50;  // 0x3E50
    void* q4008;  // 0x4008
    unsigned char q4040;  // 0x4040
    unsigned int q4088;  // 0x4088
    unsigned char q4120;  // 0x4120
    unsigned int q4130;  // 0x4130
    int q4134;  // 0x4134
    int q4144;  // 0x4144
    void* q4164;  // 0x4164
    unsigned char q4168;  // 0x4168
    void* q4178;  // 0x4178
    void* q4180;  // 0x4180
    unsigned int q4184;  // 0x4184
    void* q4188;  // 0x4188
    unsigned char q4200;  // 0x4200
    void* q4204;  // 0x4204
    unsigned char q4208;  // 0x4208
    void* q4220;  // 0x4220
    unsigned char q4224;  // 0x4224
    unsigned int q4228;  // 0x4228
    unsigned char q4240;  // 0x4240
    void* q4244;  // 0x4244
    unsigned char q4248;  // 0x4248
    void* q4260;  // 0x4260
    unsigned char q4264;  // 0x4264
    void* q4268;  // 0x4268
    unsigned char q4280;  // 0x4280
    void* q4284;  // 0x4284
    void* q4288;  // 0x4288
    void* q4300;  // 0x4300
    unsigned char q4304;  // 0x4304
    void* q4320;  // 0x4320
    unsigned char q4324;  // 0x4324
    unsigned char q4340;  // 0x4340
    void* q4348;  // 0x4348
    unsigned int q4358;  // 0x4358
    char unknownScores[2056];  // 0x4368
    void * q4370;  // 0x4370
    unsigned char q4374;  // 0x4374
    void* q4380;  // 0x4380
    unsigned int q4384;  // 0x4384
    unsigned int q4388;  // 0x4388
    void* q4400;  // 0x4400
    void* q4404;  // 0x4404
    unsigned int q4408;  // 0x4408
    unsigned int q4418;  // 0x4418
    unsigned int q4420;  // 0x4420
    unsigned int q4424;  // 0x4424
    unsigned char q4428;  // 0x4428
    unsigned int q4434;  // 0x4434
    unsigned int q4438;  // 0x4438
    void * q4440;  // 0x4440
    void* q4444;  // 0x4444
    int q4448;  // 0x4448
    char q4464;  // 0x4464
    void * q4468;  // 0x4468
    char q4470;  // 0x4470
    void* q4480;  // 0x4480
    char q4488[4];  // 0x4488
    void* q4498;  // 0x4498
    void * q4500;  // 0x4500
    void* q4504;  // 0x4504
    unsigned int q4528;  // 0x4528
    unsigned char q4560;  // 0x4560
    unsigned int q4584;  // 0x4584
    unsigned char q4588;  // 0x4588
    void* q4608;  // 0x4608
    unsigned char q4628;  // 0x4628
    void * q4640;  // 0x4640
    void* q4644;  // 0x4644
    void* q4648;  // 0x4648
    void* q4658;  // 0x4658
    unsigned int q4668;  // 0x4668
    unsigned char q4700;  // 0x4700
    void * q4724;  // 0x4724
    unsigned char q4728;  // 0x4728
    char q4738;  // 0x4738
    char q4740;  // 0x4740
    char q4744;  // 0x4744
    void* q4754;  // 0x4754
    unsigned char q4758;  // 0x4758
    int q4760;  // 0x4760
    unsigned int q4780;  // 0x4780
    unsigned char q4784;  // 0x4784
    void* q4808;  // 0x4808
    unsigned char q4840;  // 0x4840
    unsigned int q4864;  // 0x4864
    unsigned int q4868;  // 0x4868
    unsigned char q4880;  // 0x4880
    unsigned char q4890;  // 0x4890
    void* q4900;  // 0x4900
    int q4904;  // 0x4904
    unsigned char q4908;  // 0x4908
    int q4914;  // 0x4914
    void* q4918;  // 0x4918
    unsigned int q4920;  // 0x4920
    void* q4924;  // 0x4924
    void* q4928;  // 0x4928
    unsigned char q4940;  // 0x4940
    unsigned char q4944;  // 0x4944
    AbstractClass* q4950;  // 0x4950
    unsigned int q4960;  // 0x4960
    void* q4964;  // 0x4964
    AbstractClass* q4968;  // 0x4968
    void* q4978;  // 0x4978
    void* q4980;  // 0x4980
    unsigned int q4984;  // 0x4984
    unsigned char q4988;  // 0x4988
    unsigned int q4994;  // 0x4994
    char collectedPowerups[2056];  // 0x4B70
    void* q5008;  // 0x5008
    unsigned char q5010;  // 0x5010
    unsigned char q5040;  // 0x5040
    void* q5064;  // 0x5064
    unsigned char q5068;  // 0x5068
    void* q5104;  // 0x5104
    void* q5108;  // 0x5108
    char q5120;  // 0x5120
    unsigned int q5124;  // 0x5124
    char q5128;  // 0x5128
    char q5138;  // 0x5138
    void* q5140;  // 0x5140
    unsigned char q5144;  // 0x5144
    void* q5148;  // 0x5148
    int q5158;  // 0x5158
    unsigned char q5160;  // 0x5160
    unsigned char q5164;  // 0x5164
    unsigned int q5168;  // 0x5168
    unsigned int q5170;  // 0x5170
    void* q5174;  // 0x5174
    unsigned char q5178;  // 0x5178
    unsigned char q5184;  // 0x5184
    ObjectClass* q5188;  // 0x5188
    unsigned char q5204;  // 0x5204
    unsigned char q5208;  // 0x5208
    ObjectTypeClass* q5220;  // 0x5220
    unsigned int q5224;  // 0x5224
    unsigned char q5228;  // 0x5228
    unsigned char q5234;  // 0x5234
    void* q5238;  // 0x5238
    unsigned char q5248;  // 0x5248
    unsigned char q5260;  // 0x5260
    unsigned char q5264;  // 0x5264
    unsigned char q5270;  // 0x5270
    unsigned char q5278;  // 0x5278
    void* q5308;  // 0x5308
    void* q5320;  // 0x5320
    unsigned char q5324;  // 0x5324
    void* q5344;  // 0x5344
    unsigned char q5348;  // 0x5348
    unsigned int q5350;  // 0x5350
    unsigned int q5354;  // 0x5354
    unsigned int q5358;  // 0x5358
    unsigned int u32_5360;  // 0x5360
    void* q5364;  // 0x5364
    unsigned char q5368;  // 0x5368
    char numAirpads[4];  // 0x5378
    char numBarracks[4];  // 0x537C
    char numWarFactories[4];  // 0x5380
    char numConYards[4];  // 0x5384
    char numShipyards[4];  // 0x5388
    char numOrePurifiers[4];  // 0x538C
    float costInfantryMult;  // 0x5390
    float costUnitsMult;  // 0x5394
    float costAircraftMult;  // 0x5398
    float costBuildingsMult;  // 0x539C
    float costDefensesMult;  // 0x53A0
    char powerOutput[4];  // 0x53A4
    unsigned int q53A6;  // 0x53A6
    char powerDrain[4];  // 0x53A8
    FactoryClass* primaryForAircraft;  // 0x53AC
    FactoryClass* primaryForInfantry;  // 0x53B0
    FactoryClass* primaryForVehicles;  // 0x53B4
    FactoryClass* primaryForShips;  // 0x53B8
    FactoryClass* primaryForBuildings;  // 0x53BC
    FactoryClass* primaryUnused1;  // 0x53C0
    FactoryClass* primaryUnused2;  // 0x53C4
    FactoryClass* primaryUnused3;  // 0x53C8
    FactoryClass* primaryForDefenses;  // 0x53CC
    unsigned char HouseClass_field_53D0;  // 0x53D0
    unsigned int q53D1;  // 0x53D1
    unsigned int q53D2;  // 0x53D2
    unsigned int q53D3;  // 0x53D3
    unsigned int q53D4;  // 0x53D4
    unsigned int q53D8;  // 0x53D8
    char ourFlagCoords[4];  // 0x53DC
    char killedUnitsOfHouses[80];  // 0x53E0
    unsigned int u16_53E2;  // 0x53E2
    unsigned char q53E4;  // 0x53E4
    unsigned char q53E8;  // 0x53E8
    unsigned char q53EC;  // 0x53EC
    unsigned char q53F0;  // 0x53F0
    unsigned char q53F4;  // 0x53F4
    unsigned char q53F8;  // 0x53F8
    unsigned int q5400;  // 0x5400
    void* q5404;  // 0x5404
    unsigned char q5408;  // 0x5408
    unsigned int q5414;  // 0x5414
    unsigned char q5418;  // 0x5418
    void* q5420;  // 0x5420
    unsigned char q5424;  // 0x5424
    unsigned int q5428;  // 0x5428
    char totalKilledUnits[4];  // 0x5430
    char killedBuildingsOfHouses[80];  // 0x5434
    unsigned char q5438;  // 0x5438
    int q5440;  // 0x5440
    int q5444;  // 0x5444
    void* q5448;  // 0x5448
    unsigned char q544C;  // 0x544C
    void* q5458;  // 0x5458
    int q5460;  // 0x5460
    int q5464;  // 0x5464
    void* q5468;  // 0x5468
    int q5480;  // 0x5480
    char totalKilledBuildings[4];  // 0x5484
    unsigned char q5488;  // 0x5488
    unsigned int HouseClass_field_548C;  // 0x548C
    char baseSpawnCell[4];  // 0x5490
    char baseCenter[4];  // 0x5494
    unsigned int unknown5498;  // 0x5498
    unsigned int HouseClass_field_549C;  // 0x549C
    unsigned int HouseClass_field_54A0;  // 0x54A0
    unsigned int HouseClass_field_54A4;  // 0x54A4
    unsigned int HouseClass_field_54A8;  // 0x54A8
    unsigned int HouseClass_field_54AC;  // 0x54AC
    unsigned int HouseClass_field_54B0;  // 0x54B0
    unsigned int HouseClass_field_54B4;  // 0x54B4
    unsigned int HouseClass_field_54B8;  // 0x54B8
    unsigned int HouseClass_field_54BC;  // 0x54BC
    unsigned int HouseClass_field_54C0;  // 0x54C0
    unsigned int HouseClass_field_54C4;  // 0x54C4
    unsigned int HouseClass_field_54C8;  // 0x54C8
    unsigned int HouseClass_field_54CC;  // 0x54CC
    unsigned int HouseClass_field_54D0;  // 0x54D0
    unsigned int HouseClass_field_54D4;  // 0x54D4
    unsigned int HouseClass_field_54D8;  // 0x54D8
    unsigned int HouseClass_field_54DC;  // 0x54DC
    unsigned int HouseClass_field_54E0;  // 0x54E0
    char radarVisibleTo[4];  // 0x54E4
    char siloMoney[4];  // 0x54E8
    char preferredTargetType[4];  // 0x54EC
    char preferredTargetCell[4];  // 0x54F0
    unsigned int q54F2;  // 0x54F2
    char preferredDefensiveCell[4];  // 0x54F4
    unsigned int u16_54F6;  // 0x54F6
    char preferredDefensiveCell2[4];  // 0x54F8
    unsigned int u16_54FA;  // 0x54FA
    char preferredDefensiveCellStartTime[4];  // 0x54FC
    char ownedBuildingTypes[8];  // 0x5500
    void* q5504;  // 0x5504
    char ownedUnitTypes[8];  // 0x5508
    unsigned char q550C;  // 0x550C
    char ownedInfantryTypes[8];  // 0x5510
    DynamicVector* q5514;  // 0x5514
    unsigned int q5515;  // 0x5515
    char ownedAircraftTypes[8];  // 0x5518
    char ownedBuildingTypes1[8];  // 0x5520
    unsigned char q5524;  // 0x5524
    char ownedUnitTypes1[8];  // 0x5528
    char ownedInfantryTypes1[8];  // 0x5530
    char ownedAircraftTypes1[8];  // 0x5538
    unsigned int u32_553C;  // 0x553C
    char ownedBuildingTypes2[8];  // 0x5540
    unsigned int q5544;  // 0x5544
    unsigned int q5545;  // 0x5545
    char ownedUnitTypes2[8];  // 0x5548
    char SuperWeaponsAvailable[8];  // 0x5550
    unsigned char q5554;  // 0x5554
    char ownedAircraftTypes2[8];  // 0x5558
    unsigned int q5560;  // 0x5560
    unsigned char q5564;  // 0x5564
    unsigned char q556C;  // 0x556C
    unsigned char q5570;  // 0x5570
    unsigned char q5574;  // 0x5574
    unsigned char q5578;  // 0x5578
    unsigned char q557C;  // 0x557C
    unsigned char q5580;  // 0x5580
    unsigned char q5584;  // 0x5584
    unsigned char q5588;  // 0x5588
    unsigned int q5594;  // 0x5594
    unsigned int HouseClass_field_55F0;  // 0x55F0
    unsigned int HouseClass_field_55F4;  // 0x55F4
    char attackDelayA[4];  // 0x55F8
    char attackDelayB[4];  // 0x55FC
    char enemyHouseIndex[4];  // 0x5600
    AngerStruct* angerNodes;  // 0x5604
    char angerNodesCount[4];  // 0x5608
    char angerNodesCapacity[4];  // 0x560C
    ScoutStruct* scoutNodes;  // 0x5610
    unsigned int q5611;  // 0x5611
    char scoutNodesCount[4];  // 0x5614
    char scoutNodesCapacity[4];  // 0x5618
    char unkTimer3[12];  // 0x561C
    CampaignClass* q5620;  // 0x5620
    unsigned int q5624;  // 0x5624
    char unkTimer4[12];  // 0x5628
    unsigned int q5629;  // 0x5629
    unsigned int q562C;  // 0x562C
    unsigned int q5630;  // 0x5630
    char producingBuildingTypeIndex[4];  // 0x5634
    char producingUnitTypeIndex[4];  // 0x5638
    char producingInfantryTypeIndex[4];  // 0x563C
    char producingAircraftTypeIndex[4];  // 0x5640
    char ratioAiTriggerTeam[4];  // 0x5644
    char ratioTeamAircraft[4];  // 0x5648
    char ratioTeamInfantry[4];  // 0x564C
    char ratioTeamBuildings[4];  // 0x5650
    char baseDefenseTeamCount[4];  // 0x5654
    char dropshipData[132];  // 0x5658
    unsigned int u32_565C;  // 0x565C
    void * ptr_5660;  // 0x5660
    void * ptr_5664;  // 0x5664
    void * ptr_5668;  // 0x5668
    unsigned int u32_566C;  // 0x566C
    unsigned char q5670;  // 0x5670
    int q5684;  // 0x5684
    unsigned char q5688;  // 0x5688
    unsigned char q568C;  // 0x568C
    char currentDropshipIndex[4];  // 0x56DC
    unsigned char hasCloakingRanges;  // 0x56E0
    char color[3];  // 0x56E1
    char laserColor[3];  // 0x56E4
    unsigned char colorPadding;  // 0x56E7
    char base[80];  // 0x56E8
    unsigned int u16_56F9;  // 0x56F9
    unsigned int u32_56FA;  // 0x56FA
    unsigned char u8_56FB;  // 0x56FB
    unsigned int q5700;  // 0x5700
    unsigned int q5704;  // 0x5704
    void* q5708;  // 0x5708
    unsigned int q570C;  // 0x570C
    unsigned int q5711;  // 0x5711
    void* q5714;  // 0x5714
    unsigned int u32_5718;  // 0x5718
    unsigned int u32_5720;  // 0x5720
    unsigned int u32_5724;  // 0x5724
    void* q5728;  // 0x5728
    unsigned char q572C;  // 0x572C
    unsigned int u32_5730;  // 0x5730
    bool recheckPower;  // 0x5738
    bool recheckRadar;  // 0x5739
    bool spySatActive;  // 0x573A
    bool isBeingDrained;  // 0x573B
    char edge[4];  // 0x573C
    char empTarget[4];  // 0x5740
    char nukeTarget[4];  // 0x5744
    unsigned int allies;  // 0x5748
    char damageDelayTimer[12];  // 0x574C
    unsigned int u16_5750;  // 0x5750
    unsigned int u16_5752;  // 0x5752
    unsigned int u32_5754;  // 0x5754
    char teamDelayTimer[12];  // 0x5758
    unsigned int u32_575C;  // 0x575C
    void* q5760;  // 0x5760
    TimerStruct * ptr_5764;  // 0x5764
    unsigned char q5768;  // 0x5768
    unsigned char q576C;  // 0x576C
    char HouseClass_field_timer_B[12];  // 0x5770
    void * ptr_5774;  // 0x5774
    void* q5778;  // 0x5778
    unsigned char u8_5779;  // 0x5779
    unsigned char u8_577A;  // 0x577A
    unsigned char u8_577B;  // 0x577B
    unsigned int u32_577C;  // 0x577C
    unsigned char q5780;  // 0x5780
    unsigned char q5784;  // 0x5784
    char HouseClass_field_timer_D[12];  // 0x5788
    void* q578C;  // 0x578C
    unsigned char q5790;  // 0x5790
    char HouseClass_field_timer_E[12];  // 0x5794
    void* q5798;  // 0x5798
    unsigned int u32_579C;  // 0x579C
    unsigned char q57A0;  // 0x57A0
    void* q57A4;  // 0x57A4
    unsigned char q57A8;  // 0x57A8
    unsigned int u32_57AC;  // 0x57AC
    void* q57B0;  // 0x57B0
    unsigned char q57B4;  // 0x57B4
    void* q57BC;  // 0x57BC
    unsigned char q57C0;  // 0x57C0
    unsigned int u32_57C4;  // 0x57C4
    void* q57C8;  // 0x57C8
    unsigned char q57CC;  // 0x57CC
    unsigned int u32_57D4;  // 0x57D4
    unsigned int u32_57D8;  // 0x57D8
    unsigned int HouseClass_field_57DC;  // 0x57DC
    unsigned char threatPosed_estimates_padding;  // 0x57E0
    void* q5800;  // 0x5800
    void* q5804;  // 0x5804
    unsigned char q5808;  // 0x5808
    unsigned char q5840;  // 0x5840
    void* q5844;  // 0x5844
    void* q5848;  // 0x5848
    void* q5860;  // 0x5860
    unsigned char q5864;  // 0x5864
    void* q5868;  // 0x5868
    unsigned int q5880;  // 0x5880
    void* q5884;  // 0x5884
    void* q5888;  // 0x5888
    unsigned char q588C;  // 0x588C
    void* q5900;  // 0x5900
    void* q5904;  // 0x5904
    void* q5908;  // 0x5908
    void* q5920;  // 0x5920
    void* q5924;  // 0x5924
    unsigned int q5928;  // 0x5928
    unsigned char q592C;  // 0x592C
    unsigned char q5930;  // 0x5930
    unsigned char q5938;  // 0x5938
    unsigned char q593C;  // 0x593C
    unsigned char q5940;  // 0x5940
    unsigned char q5944;  // 0x5944
    void* q5948;  // 0x5948
    unsigned int q5960;  // 0x5960
    void* q5964;  // 0x5964
    unsigned char q5968;  // 0x5968
    unsigned int q5970;  // 0x5970
    unsigned char q5974;  // 0x5974
    unsigned int q5984;  // 0x5984
    void* q5988;  // 0x5988
    unsigned int q5990;  // 0x5990
    unsigned int q5994;  // 0x5994
    unsigned char q5998;  // 0x5998
    void* q6000;  // 0x6000
    void* q6004;  // 0x6004
    AbstractTypeClass* q6008;  // 0x6008
    AbstractTypeClass* q6020;  // 0x6020
    void* q6024;  // 0x6024
    void* q6028;  // 0x6028
    char q6034;  // 0x6034
    char q6038;  // 0x6038
    unsigned char q603C;  // 0x603C
    unsigned char q6040;  // 0x6040
    void* q6044;  // 0x6044
    void* q6048;  // 0x6048
    void* q6060;  // 0x6060
    unsigned char q6064;  // 0x6064
    unsigned int q6080;  // 0x6080
    unsigned char q6084;  // 0x6084
    void* q6120;  // 0x6120
    unsigned char q6124;  // 0x6124
    int q6144;  // 0x6144
    unsigned int q6148;  // 0x6148
    int q6160;  // 0x6160
    int q6164;  // 0x6164
    unsigned char q6170;  // 0x6170
    int q6180;  // 0x6180
    int q6184;  // 0x6184
    void* q6188;  // 0x6188
    int q6194;  // 0x6194
    unsigned char q6198;  // 0x6198
    unsigned char q619C;  // 0x619C
    unsigned char q6200;  // 0x6200
    unsigned int q6210;  // 0x6210
    unsigned int q6214;  // 0x6214
    void* q6220;  // 0x6220
    unsigned char q6224;  // 0x6224
    unsigned int q6230;  // 0x6230
    int q6240;  // 0x6240
    int q6244;  // 0x6244
    int q6260;  // 0x6260
    int q6264;  // 0x6264
    unsigned char q6268;  // 0x6268
    int q6280;  // 0x6280
    unsigned char q6284;  // 0x6284
    unsigned int q6290;  // 0x6290
    int q6294;  // 0x6294
    unsigned char q6298;  // 0x6298
    unsigned char q6320;  // 0x6320
    void* q6400;  // 0x6400
    unsigned char q6404;  // 0x6404
    void* q6408;  // 0x6408
    unsigned char q640C;  // 0x640C
    unsigned char q6410;  // 0x6410
    unsigned int q6418;  // 0x6418
    int q6438;  // 0x6438
    unsigned int q6440;  // 0x6440
    unsigned char q6450;  // 0x6450
    unsigned int q6454;  // 0x6454
    void* q6464;  // 0x6464
    unsigned char q6468;  // 0x6468
    unsigned char q6500;  // 0x6500
    unsigned int q6504;  // 0x6504
    void* q6514;  // 0x6514
    unsigned char q6518;  // 0x6518
    unsigned int q6528;  // 0x6528
    unsigned int q6900;  // 0x6900
    unsigned int q7724;  // 0x7724
    unsigned int u32_54E4;
    unsigned int HouseClass_field_160B4;
    unsigned int CheckWinCondition;
    unsigned int FindOwner;
// --- flat members (END) ---
    AbstractClass * * AIDecision(ObjectClass * aP0, int * a1);
    AbstractClass * * AutoBuildScanAndSort(int a2, unsigned int * a3);
    AbstractClass * * FindStartPositions(void *a1 = 0);
    AbstractClass * * SaveLoad_Prefix(int a1, LPSTREAM pStm);
    BOOL GainedPoweredCenter(int a2, void *a1 = 0);
    void* * UpdateAITryFireSW();
    VectorClass_flat * vt_00_(char a2);
    VectorCursor * vt_placeholder_07(char a2);
    char DroppedFlag(UnitClass * aP1, int a3);
    char IonSensitivesShouldBeOffline();
    char PickedUpFlag(ObjectClass * aP1, char a3);
    char ReshroudMap();
    char Set(void *a1 = 0, void *a2 = 0, void *a3 = 0);
    char UpdateAllSilos(int a2, int a3);
    double GiveTiberium_Storage(AbstractClass * aP1, BuildingClass * aP2);
    int COMStub_Ret1_1(int a1);
    int COMStub_Ret1_2(int a1);
    int CanAlly(HouseClass * aP1);
    int CanDetect();
    int CreatePowerOutage(int a2);
    int CreateRadarOutage(int a2);
    int DestroyAllBuildings();
    int DestroyAllNonBuildingsNaval();
    int DestroyAllNonBuildingsNonNaval();
    int FailedToPlaceNode(int a1);
    int GetCameoTypeIndex(int a2);
    int GetInfSelfHealStep();
    int GetRepairStepAmount();
    int GetStatus(void* aP1);
    int GetUnitSelfHealStep();
    int InitAlliances();
    int IsAlliedWith(void* aP1);
    int IsCellOccupied(void* aP1, char a3);
    int MakeAlly(int a2, char a3);
    int PrerequisitesForTechnoTypeAreListed(int a1, VectorClass_flat * aP1, TechnoTypeClass * aP2);
    int QueryInterface(CCINIClass * aP0, const void * a1, unsigned int * a2);
    int QueryInterface_Dispatch();
    int QueryInterface_Helper();
    int RespawnStartingForces(TechnoClass * aP0, void ** a1, unsigned int * a2, int a4);
    int RevealShroudForAllies(char a1, int a2);
    int SetPrimaryFactory(int a2);
    int UpdatePower();
    int sub_5092F0(int a2);
    int vt_04_(int * a2);
    int vt_placeholder_00();
    int vt_placeholder_01();
    int vt_placeholder_02();
    std::locale::facet * initAngerStruct(char a2);
    unsigned int * SDDTORAllAndTriggers();
    unsigned int * vt_placeholder_09();
    unsigned int * vt_placeholder_10();
    unsigned int vt_05_(int a2);
    void * CanTogglePower();
    void ** PsiWarn(InfantryClass * aP0, int a2, int arg0, void * a3);
    void AcquiredThreatNode();
    void Construct(CCINIClass * aP1, void *a2 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0);
    void LostPoweredCenter(int a2);
    void ResetObjectOrders(char a1, int a2);
    void vt_03_();
    static double CalcProductionSpeed(...);  // C2597 interim stub
     double FindByName(...);  // C2597 interim stub
    static double FindType15(...);  // C2597 interim stub
    static double FirstBuildableFromArray(...);  // C2597 interim stub
    static double GetCurrentOption(...);  // C2597 interim stub
    static double GetMaxBuildLevel(...);  // C2597 interim stub
    static double GetStartCoords(...);  // C2597 interim stub
    static double IsAllied(...);  // C2597 interim stub
    static double ProcessPowerDrain(...);  // C2597 interim stub
    static double ShouldDisableCameo(...);  // C2597 interim stub
    static double UpdateProduction(...);  // C2597 interim stub
    static double GetPowerRatio(...);  // C2597 interim stub
};

} // namespace gamemd
