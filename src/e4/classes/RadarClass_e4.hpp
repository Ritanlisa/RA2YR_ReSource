// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Coord;  // fix_fwd_type_supply
struct AbstractTypeClass;  // fix_fwd_type_supply
struct ParticleSystemClass;  // fix_fwd_type_supply
struct HouseClass;  // fix_fwd_type_supply
struct BuildingTypeClass;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct MapClass;  // fix_fwd_type_supply
struct GadgetClass;  // fix_fwd_type_supply
struct CampaignClass;  // fix_fwd_type_supply

struct RadarClass {
#pragma pack(push, 1)  // X60: binary-packed layout
    char ptr_0[2];  // 0x0
    unsigned char ptr_2;  // 0x2
    unsigned char ptr_3;  // 0x3
    unsigned int RadarClass_field_0x4;  // 0x4
    int q008;  // 0x8
    unsigned char u32_C;  // 0xC
    unsigned char q00D;  // 0xD
    char __pad_E[2];  // 0xE
    int q010;  // 0x10
    char __pad_14[16];  // 0x14
    unsigned int outBuffer;  // 0x24
    unsigned char __pad_028;  // 0x28
    char __pad_29[11];  // 0x29
    unsigned int MovementZones;  // 0x34
    unsigned char __pad_038;  // 0x38
    char __pad_39[23];  // 0x39
    VectorClass * ptr_50;  // 0x50
    unsigned char __pad_054;  // 0x54
    char __pad_55[11];  // 0x55
    int u32_60;  // 0x60
    char __pad_64[4];  // 0x64
    unsigned int somecount_4C;  // 0x68
    unsigned int ZoneConnections;  // 0x6C
    unsigned int LevelAndPassabilityStruct2pointer_70;  // 0x70
    char __pad_74[36];  // 0x74
    unsigned int u32_98;  // 0x98
    char __pad_9C[20];  // 0x9C
    int RadarClass_field_0xB0;  // 0xB0
    char __pad_B4[8];  // 0xB4
    int q0BC;  // 0xBC
    char __pad_C0[44];  // 0xC0
    unsigned int MapRect;  // 0xEC
    unsigned char __pad_0F0;  // 0xF0
    char __pad_F1[3];  // 0xF1
    unsigned int u32_F4;  // 0xF4
    char __pad_F8[4];  // 0xF8
    unsigned int VisibleRect;  // 0xFC
    unsigned char __pad_100;  // 0x100
    char __pad_101[3];  // 0x101
    unsigned int u32_104;  // 0x104
    char __pad_108[8];  // 0x108
    unsigned int CellIterator_NextY;  // 0x110
    unsigned int CellIterator_CurrentY;  // 0x114
    unsigned int CellIterator_NextCell;  // 0x118
    unsigned int ZoneIterator_X;  // 0x11C
    unsigned int ZoneIterator_Y;  // 0x120
    unsigned char __pad_124;  // 0x124
    char __pad_125[19];  // 0x125
    unsigned int MaxLevel;  // 0x138
    unsigned char __pad_13C;  // 0x13C
    char __pad_13D[341];  // 0x13D
    unsigned char MapCoordBounds;  // 0x292
    char __pad_293[3];  // 0x293
    unsigned char __pad_296;  // 0x296
    char __pad_297[649];  // 0x297
    int q520;  // 0x520
    char __pad_524[30];  // 0x524
    unsigned int VectorClass_542;  // 0x542
    char __pad_546[114];  // 0x546
    int q5B8;  // 0x5B8
    char __pad_5BC[312];  // 0x5BC
    int q6F4;  // 0x6F4
    char __pad_6F8[2660];  // 0x6F8
    unsigned int q115C;  // 0x115C
    unsigned int q1160;  // 0x1160
    unsigned int q1164;  // 0x1164
    unsigned char q1168;  // 0x1168
    unsigned char q1169;  // 0x1169
    char __pad_116A[2];  // 0x116A
    unsigned int q116C;  // 0x116C
    unsigned int q1170;  // 0x1170
    unsigned int q1174;  // 0x1174
    unsigned short q1178;  // 0x1178
    unsigned short q117A;  // 0x117A
    unsigned int q117C;  // 0x117C
    unsigned char q1180;  // 0x1180
    unsigned char q1181;  // 0x1181
    char __pad_1182[4];  // 0x1182
    unsigned short Tactical_1186;  // 0x1186
    unsigned short q1188;  // 0x1188
    char __pad_118A[2];  // 0x118A
    unsigned int q118C;  // 0x118C
    unsigned int q1190;  // 0x1190
    unsigned int u32_1194;  // 0x1194
    unsigned int q1198;  // 0x1198
    unsigned char q119C;  // 0x119C
    char __pad_119D[3];  // 0x119D
    unsigned int q11A0;  // 0x11A0
    unsigned int q11A4;  // 0x11A4
    unsigned int q11A8;  // 0x11A8
    unsigned int q11AC;  // 0x11AC
    unsigned char q11B0;  // 0x11B0
    unsigned char q11B1;  // 0x11B1
    unsigned char q11B2;  // 0x11B2
    unsigned char q11B3;  // 0x11B3
    unsigned char q11B4;  // 0x11B4
    char __pad_11B5[3];  // 0x11B5
    unsigned int q11B8;  // 0x11B8
    unsigned int q11BC;  // 0x11BC
    unsigned int q11C0;  // 0x11C0
    unsigned int q11C4;  // 0x11C4
    unsigned int q11C8;  // 0x11C8
    unsigned char q11CC;  // 0x11CC
    unsigned char q11CD;  // 0x11CD
    unsigned char q11CE;  // 0x11CE
    unsigned char q11CF;  // 0x11CF
    unsigned char q11D0;  // 0x11D0
    unsigned char q11D1;  // 0x11D1
    char __pad_11D2[2];  // 0x11D2
    unsigned int q11D4;  // 0x11D4
    unsigned int q11D8;  // 0x11D8
    unsigned int q11DC;  // 0x11DC
    unsigned int q11E0;  // 0x11E0
    unsigned int u32_11E4;  // 0x11E4
    int q11E8;  // 0x11E8
    int u32_11EC;  // 0x11EC
    int q11F0;  // 0x11F0
    int q11F4;  // 0x11F4
    int q11F8;  // 0x11F8
    int q11FC;  // 0x11FC
    int q1200;  // 0x1200
    int q1204;  // 0x1204
    char __pad_1208[4];  // 0x1208
    unsigned int u32_120C;  // 0x120C
    char __pad_1210[4];  // 0x1210
    unsigned int u32_1214;  // 0x1214
    char __pad_1218[4];  // 0x1218
    int u32_121C;  // 0x121C
    int u32_1220;  // 0x1220
    VectorClass * q1224;  // 0x1224
    CampaignClass * ptr_1228;  // 0x1228
    unsigned char __pad_122C;  // 0x122C
    char __pad_122D[4];  // 0x122D
    unsigned char u8_1231;  // 0x1231
    char __pad_1232[2];  // 0x1232
    unsigned int q1234;  // 0x1234
    char __pad_1238[4];  // 0x1238
    int u32_123C;  // 0x123C
    int u32_1240;  // 0x1240
    int u32_1244;  // 0x1244
    int q1248;  // 0x1248
    int q124C;  // 0x124C
    int q1250;  // 0x1250
    int q1254;  // 0x1254
    int u32_1258;  // 0x1258
    int q125C;  // 0x125C
    CampaignClass * ptr_1260;  // 0x1260
    char __pad_1264[5];  // 0x1264
    unsigned char u8_1269;  // 0x1269
    char __pad_126A[2];  // 0x126A
    unsigned int q126C;  // 0x126C
    unsigned int q1270;  // 0x1270
    int u32_1274;  // 0x1274
    int q1278;  // 0x1278
    char __pad_127C[524];  // 0x127C
    int u32_1488;  // 0x1488
    char __pad_148C[4];  // 0x148C
    int u32_1490;  // 0x1490
    int q1494;  // 0x1494
    int u32_1498;  // 0x1498
    int u32_149C;  // 0x149C
    char __pad_14A0[4];  // 0x14A0
    int RadarClass_field_0x14A4;  // 0x14A4
    char __pad_14A8[4];  // 0x14A8
    int u32_14AC;  // 0x14AC
    int u32_14B0;  // 0x14B0
    int u32_14B4;  // 0x14B4
    char __pad_14B8[4];  // 0x14B8
    unsigned char u32_14BC;  // 0x14BC
    unsigned char u32_14BD;  // 0x14BD
    char __pad_14BE[2];  // 0x14BE
    int AudioFileClass_14C0;  // 0x14C0
    char __pad_14C4[16];  // 0x14C4
    unsigned int u32_14D4;  // 0x14D4
    char IsAvailableNow[1];  // 0x14D8
    char u32_14D9[1];  // 0x14D9
    unsigned char u32_14DA;  // 0x14DA
    char __pad_14DB[1];  // 0x14DB
    unsigned char u8_14DC;  // 0x14DC
    char __pad_14DD[31];  // 0x14DD
    int u32_14FC;  // 0x14FC
    char __pad_1500[4];  // 0x1500
    unsigned int q1504;  // 0x1504
    int RadarClass_field_0x1508;  // 0x1508
    char __pad_150C[4];  // 0x150C
    unsigned int u32_1510;  // 0x1510
    char __pad_1514[4];  // 0x1514
    unsigned int u32_1518;  // 0x1518
    unsigned int u32_151C;  // 0x151C
    unsigned int u32_1520;  // 0x1520
    char __pad_1524[4];  // 0x1524
    unsigned int u32_1528;  // 0x1528
    unsigned int u32_152C;  // 0x152C
    unsigned int u32_1530;  // 0x1530
    unsigned int u32_1534;  // 0x1534
    unsigned char u32_1538;  // 0x1538
    char __pad_1539[3];  // 0x1539
    unsigned int u32_153C;  // 0x153C
    unsigned int u32_1540;  // 0x1540
    char __pad_1544[371];  // 0x1544
    char RadarClass_field_0x16B7[4];  // 0x16B7
    char __pad_16BB[1];  // 0x16BB
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static void InitializeHashTable(void *aP1);
    static int SetViewMode(void *aP1, int a2, int a3);
    static int SetFlag(void *aP1, int a2);
    static int SetGlobal(void *aP1);
    static int IsActiveMode(void *aP1);
    int Destruct(void *a1 = 0);
    int GetBlip(int a1, int a2, int a3, ObjectClass * aP3);
    unsigned int * initRadarSurface();
    static void Destru_vt50();
    static int Destru_vt05(RadarClass * aP1);
    static char UpdateFoundationShapesCustom(RadarClass * aP1);
    char  Destru_vt16(char a2);  // 0x653100
#pragma pack(pop)
};

} // namespace gamemd
